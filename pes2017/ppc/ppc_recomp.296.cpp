#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831D8340"))) PPC_WEAK_FUNC(sub_831D8340);
PPC_FUNC_IMPL(__imp__sub_831D8340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831d8350
	if (!cr6.eq) goto loc_831D8350;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831D8350:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831d8380
	if (cr0.eq) goto loc_831D8380;
loc_831D8358:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831d8380
	if (cr0.eq) goto loc_831D8380;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831d8380
	if (!cr6.eq) goto loc_831D8380;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bne 0x831d8358
	if (!cr0.eq) goto loc_831D8358;
loc_831D8380:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8390"))) PPC_WEAK_FUNC(sub_831D8390);
PPC_FUNC_IMPL(__imp__sub_831D8390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831D8398;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831D83CC;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831d83ec
	if (!cr6.eq) goto loc_831D83EC;
loc_831D83D4:
	// bl 0x831d3050
	ctx.lr = 0x831D83D8;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D83E4;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831d84f4
	goto loc_831D84F4;
loc_831D83EC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831d83fc
	if (cr6.eq) goto loc_831D83FC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831d83d4
	if (cr6.eq) goto loc_831D83D4;
loc_831D83FC:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// ble cr6,0x831d8428
	if (!cr6.gt) goto loc_831D8428;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x831d842c
	goto loc_831D842C;
loc_831D8428:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
loc_831D842C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x831D8448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831d845c
	if (!cr6.eq) goto loc_831D845C;
loc_831D8454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831d84f4
	goto loc_831D84F4;
loc_831D845C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x831d84d0
	if (cr6.lt) goto loc_831D84D0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x831d848c
	if (cr0.lt) goto loc_831D848C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x831d84a4
	goto loc_831D84A4;
loc_831D848C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831db8c0
	ctx.lr = 0x831D8498;
	sub_831DB8C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831d84d0
	if (cr6.eq) goto loc_831D84D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831D84A4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt 0x831d84bc
	if (cr0.lt) goto loc_831D84BC;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// b 0x831d8454
	goto loc_831D8454;
loc_831D84BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831db8c0
	ctx.lr = 0x831D84C8;
	sub_831DB8C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831d8454
	if (!cr6.eq) goto loc_831D8454;
loc_831D84D0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// sth r25,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, ctx.r25.u16);
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
loc_831D84F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D84FC"))) PPC_WEAK_FUNC(sub_831D84FC);
PPC_FUNC_IMPL(__imp__sub_831D84FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8500"))) PPC_WEAK_FUNC(sub_831D8500);
PPC_FUNC_IMPL(__imp__sub_831D8500) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831d852c
	if (!cr6.eq) goto loc_831D852C;
loc_831D8520:
	// bl 0x831d3050
	ctx.lr = 0x831D8524;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x831d8578
	goto loc_831D8578;
loc_831D852C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831d8520
	if (cr6.eq) goto loc_831D8520;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831d8520
	if (cr6.eq) goto loc_831D8520;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,20728
	ctx.r3.s64 = ctx.r11.s64 + 20728;
	// bl 0x831d8390
	ctx.lr = 0x831D8558;
	sub_831D8390(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831d8568
	if (!cr0.lt) goto loc_831D8568;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_831D8568:
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831d8584
	if (!cr6.eq) goto loc_831D8584;
	// bl 0x831d3050
	ctx.lr = 0x831D8574;
	sub_831D3050(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
loc_831D8578:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D8580;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831D8584:
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

__attribute__((alias("__imp__sub_831D8598"))) PPC_WEAK_FUNC(sub_831D8598);
PPC_FUNC_IMPL(__imp__sub_831D8598) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831d8500
	sub_831D8500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D85A4"))) PPC_WEAK_FUNC(sub_831D85A4);
PPC_FUNC_IMPL(__imp__sub_831D85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D85A8"))) PPC_WEAK_FUNC(sub_831D85A8);
PPC_FUNC_IMPL(__imp__sub_831D85A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832d46f8
	sub_832D46F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D85AC"))) PPC_WEAK_FUNC(sub_831D85AC);
PPC_FUNC_IMPL(__imp__sub_831D85AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D85B0"))) PPC_WEAK_FUNC(sub_831D85B0);
PPC_FUNC_IMPL(__imp__sub_831D85B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10184(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10184);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831ce1d0
	ctx.lr = 0x831D85D0;
	sub_831CE1D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D85E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x832d46f8
	ctx.lr = 0x831D85EC;
	sub_832D46F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831ce020
	ctx.lr = 0x831D85F4;
	sub_831CE020(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = ctx.r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D85B8"))) PPC_WEAK_FUNC(sub_831D85B8);
PPC_FUNC_IMPL(__imp__sub_831D85B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831ce1d0
	ctx.lr = 0x831D85D0;
	sub_831CE1D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D85E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x832d46f8
	ctx.lr = 0x831D85EC;
	sub_832D46F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831ce020
	ctx.lr = 0x831D85F4;
	sub_831CE020(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = ctx.r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8608"))) PPC_WEAK_FUNC(sub_831D8608);
PPC_FUNC_IMPL(__imp__sub_831D8608) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x831da0d8
	ctx.lr = 0x831D8624;
	sub_831DA0D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8638"))) PPC_WEAK_FUNC(sub_831D8638);
PPC_FUNC_IMPL(__imp__sub_831D8638) {
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
	// bl 0x83a2a780
	ctx.lr = 0x831D8650;
	sub_83A2A780(ctx, base);
	// bl 0x831ce078
	ctx.lr = 0x831D8654;
	sub_831CE078(ctx, base);
	// bl 0x831ce070
	ctx.lr = 0x831D8658;
	sub_831CE070(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831d8688
	if (!cr0.eq) goto loc_831D8688;
	// bl 0x831ce078
	ctx.lr = 0x831D8664;
	sub_831CE078(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce088
	ctx.lr = 0x831D866C;
	sub_831CE088(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831d867c
	if (!cr0.eq) goto loc_831D867C;
	// bl 0x82417100
	ctx.lr = 0x831D8678;
	sub_82417100(ctx, base);
	// bl 0x832d46f8
	ctx.lr = 0x831D867C;
	sub_832D46F8(ctx, base);
loc_831D867C:
	// bl 0x832d22f8
	ctx.lr = 0x831D8680;
	sub_832D22F8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x831d86a8
	goto loc_831D86A8;
loc_831D8688:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x831ce210
	ctx.lr = 0x831D86A8;
	sub_831CE210(ctx, base);
loc_831D86A8:
	// bl 0x831d85b8
	ctx.lr = 0x831D86AC;
	sub_831D85B8(ctx, base);
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

__attribute__((alias("__imp__sub_831D86C4"))) PPC_WEAK_FUNC(sub_831D86C4);
PPC_FUNC_IMPL(__imp__sub_831D86C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D86C8"))) PPC_WEAK_FUNC(sub_831D86C8);
PPC_FUNC_IMPL(__imp__sub_831D86C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831D86D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831d870c
	if (!cr6.eq) goto loc_831D870C;
	// bl 0x831d3050
	ctx.lr = 0x831D86FC;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D8708;
	sub_831CF000(ctx, base);
	// b 0x831d8794
	goto loc_831D8794;
loc_831D870C:
	// bl 0x83a2a780
	ctx.lr = 0x831D8710;
	sub_83A2A780(ctx, base);
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831d9420
	ctx.lr = 0x831D871C;
	sub_831D9420(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831d877c
	if (cr0.eq) goto loc_831D877C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce0d8
	ctx.lr = 0x831D8730;
	sub_831CE0D8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x831d874c
	if (!cr6.eq) goto loc_831D874C;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_831D874C:
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-31176
	ctx.r5.s64 = ctx.r11.s64 + -31176;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832d4720
	ctx.lr = 0x831D876C;
	sub_832D4720(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831d8798
	if (!cr0.eq) goto loc_831D8798;
	// bl 0x82417100
	ctx.lr = 0x831D8778;
	sub_82417100(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_831D877C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cf100
	ctx.lr = 0x831D8784;
	sub_831CF100(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831d8794
	if (cr6.eq) goto loc_831D8794;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d30c0
	ctx.lr = 0x831D8794;
	sub_831D30C0(ctx, base);
loc_831D8794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D8798:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D87A0"))) PPC_WEAK_FUNC(sub_831D87A0);
PPC_FUNC_IMPL(__imp__sub_831D87A0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831d87cc
	if (!cr6.eq) goto loc_831D87CC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831d87cc
	if (cr6.eq) goto loc_831D87CC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831d8880
	if (cr6.eq) goto loc_831D8880;
	// b 0x831d887c
	goto loc_831D887C;
loc_831D87CC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831d87dc
	if (cr6.eq) goto loc_831D87DC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_831D87DC:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x831d8804
	if (!cr6.gt) goto loc_831D8804;
	// bl 0x831d3050
	ctx.lr = 0x831D87F0;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D87FC;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831d8884
	goto loc_831D8884;
loc_831D8804:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// ble cr6,0x831d8844
	if (!cr6.gt) goto loc_831D8844;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d882c
	if (cr6.eq) goto loc_831D882C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831d882c
	if (cr6.eq) goto loc_831D882C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831D882C;
	sub_831CDCF0(ctx, base);
loc_831D882C:
	// bl 0x831d3050
	ctx.lr = 0x831D8830;
	sub_831D3050(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831D883C;
	sub_831D3050(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831d8884
	goto loc_831D8884;
loc_831D8844:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d8870
	if (cr6.eq) goto loc_831D8870;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831d886c
	if (!cr6.eq) goto loc_831D886C;
	// bl 0x831d3050
	ctx.lr = 0x831D8858;
	sub_831D3050(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D8864;
	sub_831CF000(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x831d8884
	goto loc_831D8884;
loc_831D886C:
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_831D8870:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831d8880
	if (cr6.eq) goto loc_831D8880;
	// li r11,1
	ctx.r11.s64 = 1;
loc_831D887C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831D8880:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831D8884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8894"))) PPC_WEAK_FUNC(sub_831D8894);
PPC_FUNC_IMPL(__imp__sub_831D8894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8898"))) PPC_WEAK_FUNC(sub_831D8898);
PPC_FUNC_IMPL(__imp__sub_831D8898) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x831d87a0
	sub_831D87A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D88A0"))) PPC_WEAK_FUNC(sub_831D88A0);
PPC_FUNC_IMPL(__imp__sub_831D88A0) {
	PPC_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831d0fd0
	sub_831D0FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D88AC"))) PPC_WEAK_FUNC(sub_831D88AC);
PPC_FUNC_IMPL(__imp__sub_831D88AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D88B0"))) PPC_WEAK_FUNC(sub_831D88B0);
PPC_FUNC_IMPL(__imp__sub_831D88B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x831D88B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831d88ec
	if (!cr6.eq) goto loc_831D88EC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831d88ec
	if (cr6.eq) goto loc_831D88EC;
loc_831D88D4:
	// bl 0x831d3050
	ctx.lr = 0x831D88D8;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D88E4;
	sub_831CF000(ctx, base);
loc_831D88E4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_831D88EC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x831d88d4
	if (cr6.eq) goto loc_831D88D4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x831d88d4
	if (cr6.eq) goto loc_831D88D4;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x831d88e4
	if (cr6.lt) goto loc_831D88E4;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r23,r10,-4
	ctx.r23.s64 = ctx.r10.s64 + -4;
	// addi r24,r9,-4
	ctx.r24.s64 = ctx.r9.s64 + -4;
loc_831D8928:
	// subf r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	// twllei r27,0
	// divwu r11,r11,r27
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x831d89dc
	if (cr6.gt) goto loc_831D89DC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// ble cr6,0x831d89c0
	if (!cr6.gt) goto loc_831D89C0;
	// add r28,r26,r27
	ctx.r28.u64 = ctx.r26.u64 + ctx.r27.u64;
loc_831D8950:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// bgt cr6,0x831d8988
	if (cr6.gt) goto loc_831D8988;
loc_831D8960:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831D8970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831d897c
	if (!cr6.gt) goto loc_831D897C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_831D897C:
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x831d8960
	if (!cr6.gt) goto loc_831D8960;
loc_831D8988:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x831d89b4
	if (cr6.eq) goto loc_831D89B4;
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
loc_831D899C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x831d899c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D899C;
loc_831D89B4:
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bgt cr6,0x831d8950
	if (cr6.gt) goto loc_831D8950;
loc_831D89C0:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// addi r23,r23,-4
	ctx.r23.s64 = ctx.r23.s64 + -4;
	// blt 0x831d88e4
	if (cr0.lt) goto loc_831D88E4;
	// lwz r26,4(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r28,4(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// b 0x831d8928
	goto loc_831D8928;
loc_831D89DC:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D89F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831d8a2c
	if (!cr6.gt) goto loc_831D8A2C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// beq cr6,0x831d8a2c
	if (cr6.eq) goto loc_831D8A2C;
	// subf r10,r29,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r29.s64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
loc_831D8A14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x831d8a14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D8A14;
loc_831D8A2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x831D8A3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831d8a70
	if (!cr6.gt) goto loc_831D8A70;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// beq cr6,0x831d8a70
	if (cr6.eq) goto loc_831D8A70;
	// subf r10,r28,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r28.s64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
loc_831D8A58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x831d8a58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D8A58;
loc_831D8A70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831D8A80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831d8ab4
	if (!cr6.gt) goto loc_831D8AB4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// beq cr6,0x831d8ab4
	if (cr6.eq) goto loc_831D8AB4;
	// subf r10,r28,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r28.s64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
loc_831D8A9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x831d8a9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D8A9C;
loc_831D8AB4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_831D8ABC:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// ble cr6,0x831d8af0
	if (!cr6.gt) goto loc_831D8AF0;
loc_831D8AC4:
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x831d8af0
	if (!cr6.lt) goto loc_831D8AF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831D8AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831d8ac4
	if (!cr6.gt) goto loc_831D8AC4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x831d8b14
	if (cr6.gt) goto loc_831D8B14;
loc_831D8AF0:
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bgt cr6,0x831d8b14
	if (cr6.gt) goto loc_831D8B14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831D8B0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831d8af0
	if (!cr6.gt) goto loc_831D8AF0;
loc_831D8B14:
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// ble cr6,0x831d8b38
	if (!cr6.gt) goto loc_831D8B38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831D8B30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x831d8b14
	if (cr6.gt) goto loc_831D8B14;
loc_831D8B38:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bgt cr6,0x831d8b78
	if (cr6.gt) goto loc_831D8B78;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x831d8b68
	if (cr6.eq) goto loc_831D8B68;
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
loc_831D8B50:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x831d8b50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D8B50;
loc_831D8B68:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x831d8abc
	if (!cr6.eq) goto loc_831D8ABC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x831d8abc
	goto loc_831D8ABC;
loc_831D8B78:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bge cr6,0x831d8bb0
	if (!cr6.lt) goto loc_831D8BB0;
loc_831D8B84:
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// ble cr6,0x831d8bb0
	if (!cr6.gt) goto loc_831D8BB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831D8BA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831d8b84
	if (cr6.eq) goto loc_831D8B84;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// blt cr6,0x831d8bd4
	if (cr6.lt) goto loc_831D8BD4;
loc_831D8BB0:
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// ble cr6,0x831d8bd4
	if (!cr6.gt) goto loc_831D8BD4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831D8BCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831d8bb0
	if (cr6.eq) goto loc_831D8BB0;
loc_831D8BD4:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// subf r10,r26,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r26.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x831d8c10
	if (cr6.lt) goto loc_831D8C10;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, xer);
	// bge cr6,0x831d8c00
	if (!cr6.lt) goto loc_831D8C00;
	// stw r26,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r26.u32);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r30,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r30.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
loc_831D8C00:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bge cr6,0x831d89c0
	if (!cr6.lt) goto loc_831D89C0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// b 0x831d8928
	goto loc_831D8928;
loc_831D8C10:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bge cr6,0x831d8c24
	if (!cr6.lt) goto loc_831D8C24;
	// stwu r31,4(r24)
	ea = 4 + ctx.r24.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r24.u32 = ea;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stwu r28,4(r23)
	ea = 4 + ctx.r23.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r23.u32 = ea;
loc_831D8C24:
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, xer);
	// bge cr6,0x831d89c0
	if (!cr6.lt) goto loc_831D89C0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x831d8928
	goto loc_831D8928;
}

__attribute__((alias("__imp__sub_831D8C34"))) PPC_WEAK_FUNC(sub_831D8C34);
PPC_FUNC_IMPL(__imp__sub_831D8C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8C38"))) PPC_WEAK_FUNC(sub_831D8C38);
PPC_FUNC_IMPL(__imp__sub_831D8C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_831D8C48:
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x831d8c64
	if (cr0.eq) goto loc_831D8C64;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x831d8c48
	if (!cr0.eq) goto loc_831D8C48;
loc_831D8C64:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addic. r10,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831D8C88:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x831d8c88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D8C88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8C94"))) PPC_WEAK_FUNC(sub_831D8C94);
PPC_FUNC_IMPL(__imp__sub_831D8C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8C98"))) PPC_WEAK_FUNC(sub_831D8C98);
PPC_FUNC_IMPL(__imp__sub_831D8C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r1,-33
	ctx.r10.s64 = ctx.r1.s64 + -33;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831D8CAC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x831d8cac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D8CAC;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831d8cf0
	if (cr0.eq) goto loc_831D8CF0;
loc_831D8CC4:
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lbzu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// mr. r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// slw r7,r6,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// lbzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stbx r7,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// bne 0x831d8cc4
	if (!cr0.eq) goto loc_831D8CC4;
loc_831D8CF0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831d8d48
	if (cr0.eq) goto loc_831D8D48;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// li r11,0
	ctx.r11.s64 = 0;
	// slw r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831d8d40
	if (cr0.eq) goto loc_831D8D40;
loc_831D8D1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// slw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831d8d1c
	if (!cr0.eq) goto loc_831D8D1C;
loc_831D8D40:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_831D8D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8D50"))) PPC_WEAK_FUNC(sub_831D8D50);
PPC_FUNC_IMPL(__imp__sub_831D8D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831D8D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831D8D84;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831d8da4
	if (!cr6.eq) goto loc_831D8DA4;
	// bl 0x831d3050
	ctx.lr = 0x831D8D90;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D8D9C;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831d8dd8
	goto loc_831D8DD8;
loc_831D8DA4:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x831D8DD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831D8DD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D8DE0"))) PPC_WEAK_FUNC(sub_831D8DE0);
PPC_FUNC_IMPL(__imp__sub_831D8DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13328
	ctx.r3.s64 = ctx.r11.s64 + -13328;
	// b 0x831d8d50
	sub_831D8D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D8DF8"))) PPC_WEAK_FUNC(sub_831D8DF8);
PPC_FUNC_IMPL(__imp__sub_831D8DF8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8DFC"))) PPC_WEAK_FUNC(sub_831D8DFC);
PPC_FUNC_IMPL(__imp__sub_831D8DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8E00"))) PPC_WEAK_FUNC(sub_831D8E00);
PPC_FUNC_IMPL(__imp__sub_831D8E00) {
	PPC_FUNC_PROLOGUE();
	// fsqrt f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = sqrt(ctx.f1.f64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D8E08"))) PPC_WEAK_FUNC(sub_831D8E08);
PPC_FUNC_IMPL(__imp__sub_831D8E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
	// bl 0x831ce1d0
	ctx.lr = 0x831D8E28;
	sub_831CE1D0(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831D8E38:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x831d8e38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D8E38;
	// li r8,1
	ctx.r8.s64 = 1;
loc_831D8E44:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 | ctx.r6.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// bne 0x831d8e44
	if (!cr0.eq) goto loc_831D8E44;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x831d8e80
	if (!cr6.eq) goto loc_831D8E80;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_831D8E80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x831d8e94
	goto loc_831D8E94;
loc_831D8E88:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831d8eb0
	if (cr6.eq) goto loc_831D8EB0;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_831D8E94:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r10,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// slw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lbzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// and. r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831d8e88
	if (!cr0.eq) goto loc_831D8E88;
loc_831D8EB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x831d8ee0
	goto loc_831D8EE0;
loc_831D8EBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r9,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// and. r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831d8eec
	if (!cr0.eq) goto loc_831D8EEC;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_831D8EE0:
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x831d8ebc
	if (!cr0.eq) goto loc_831D8EBC;
	// b 0x831d8ef8
	goto loc_831D8EF8;
loc_831D8EEC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831D8EF8:
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_831D8F24"))) PPC_WEAK_FUNC(sub_831D8F24);
PPC_FUNC_IMPL(__imp__sub_831D8F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D8F28"))) PPC_WEAK_FUNC(sub_831D8F28);
PPC_FUNC_IMPL(__imp__sub_831D8F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831D8F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831d8f5c
	if (cr6.eq) goto loc_831D8F5C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831d91ec
	if (cr6.eq) goto loc_831D91EC;
loc_831D8F5C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831d8f78
	if (!cr6.eq) goto loc_831D8F78;
	// bl 0x831d3050
	ctx.lr = 0x831D8F68;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D8F74;
	sub_831CF000(ctx, base);
	// b 0x831d91e8
	goto loc_831D91E8;
loc_831D8F78:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831d915c
	if (cr6.eq) goto loc_831D915C;
	// lis r27,-31772
	ctx.r27.s64 = -2082209792;
	// lwz r9,2840(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2840);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831d8fcc
	if (!cr6.eq) goto loc_831D8FCC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831d91ec
	if (cr6.eq) goto loc_831D91EC;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
loc_831D8FA0:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bgt cr6,0x831d91d8
	if (cr6.gt) goto loc_831D91D8;
	// stbx r10,r3,r28
	PPC_STORE_U8(ctx.r3.u32 + ctx.r28.u32, ctx.r10.u8);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831d91ec
	if (cr0.eq) goto loc_831D91EC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// blt cr6,0x831d8fa0
	if (cr6.lt) goto loc_831D8FA0;
	// b 0x831d91ec
	goto loc_831D91EC;
loc_831D8FCC:
	// lwz r11,172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831d906c
	if (!cr6.eq) goto loc_831D906C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831d9020
	if (cr6.eq) goto loc_831D9020;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_831D8FE8:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x831d9000
	if (cr0.eq) goto loc_831D9000;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x831d8fe8
	if (!cr0.eq) goto loc_831D8FE8;
loc_831D9000:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831d9020
	if (cr6.eq) goto loc_831D9020;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831d9020
	if (!cr0.eq) goto loc_831D9020;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_831D9020:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d2dc0
	ctx.lr = 0x831D9044;
	sub_832D2DC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831d91d8
	if (cr0.eq) goto loc_831D91D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831d91d8
	if (!cr6.eq) goto loc_831D91D8;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831d91ec
	if (!cr0.eq) goto loc_831D91EC;
	// b 0x831d91d0
	goto loc_831D91D0;
loc_831D906C:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d2dc0
	ctx.lr = 0x831D9090;
	sub_832D2DC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831d91d8
	if (!cr6.eq) goto loc_831D91D8;
	// beq 0x831d90ac
	if (cr0.eq) goto loc_831D90AC;
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// b 0x831d91ec
	goto loc_831D91EC;
loc_831D90AC:
	// bl 0x82417100
	ctx.lr = 0x831D90B0;
	sub_82417100(ctx, base);
	// cmplwi cr6,r3,122
	cr6.compare<uint32_t>(ctx.r3.u32, 122, xer);
	// bne cr6,0x831d91d8
	if (!cr6.eq) goto loc_831D91D8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831d9154
	if (cr6.eq) goto loc_831D9154;
loc_831D90C0:
	// lwz r11,2840(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2840);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832d2dc0
	ctx.lr = 0x831D90E8;
	sub_832D2DC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831d91d8
	if (cr0.eq) goto loc_831D91D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831d91d8
	if (!cr6.eq) goto loc_831D91D8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831d91d8
	if (cr6.lt) goto loc_831D91D8;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x831d91d8
	if (cr6.gt) goto loc_831D91D8;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bgt cr6,0x831d9154
	if (cr6.gt) goto loc_831D9154;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831d9148
	if (!cr6.gt) goto loc_831D9148;
loc_831D9124:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u8);
	// beq 0x831d9154
	if (cr0.eq) goto loc_831D9154;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x831d9124
	if (cr6.lt) goto loc_831D9124;
loc_831D9148:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x831d90c0
	if (cr6.lt) goto loc_831D90C0;
loc_831D9154:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831d91ec
	goto loc_831D91EC;
loc_831D915C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,2840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2840);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831d9198
	if (!cr6.eq) goto loc_831D9198;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831d918c
	goto loc_831D918C;
loc_831D917C:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bgt cr6,0x831d91d8
	if (cr6.gt) goto loc_831D91D8;
	// lhzu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_831D918C:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831d917c
	if (!cr0.eq) goto loc_831D917C;
	// b 0x831d91ec
	goto loc_831D91EC;
loc_831D9198:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d2dc0
	ctx.lr = 0x831D91BC;
	sub_832D2DC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831d91d8
	if (cr0.eq) goto loc_831D91D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831d91d8
	if (!cr6.eq) goto loc_831D91D8;
loc_831D91D0:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x831d91ec
	goto loc_831D91EC;
loc_831D91D8:
	// bl 0x831d3050
	ctx.lr = 0x831D91DC;
	sub_831D3050(ctx, base);
	// li r10,42
	ctx.r10.s64 = 42;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_831D91E8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831D91EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D91F4"))) PPC_WEAK_FUNC(sub_831D91F4);
PPC_FUNC_IMPL(__imp__sub_831D91F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D91F8"))) PPC_WEAK_FUNC(sub_831D91F8);
PPC_FUNC_IMPL(__imp__sub_831D91F8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831d8f28
	sub_831D8F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9200"))) PPC_WEAK_FUNC(sub_831D9200);
PPC_FUNC_IMPL(__imp__sub_831D9200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831d9230
	if (!cr6.eq) goto loc_831D9230;
loc_831D9218:
	// bl 0x831d3050
	ctx.lr = 0x831D921C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D9228;
	sub_831CF000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831d9330
	goto loc_831D9330;
loc_831D9230:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831d9218
	if (cr6.eq) goto loc_831D9218;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831d924c
	if (!cr6.eq) goto loc_831D924C;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831d9218
	if (cr6.eq) goto loc_831D9218;
loc_831D924C:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r1,79
	ctx.r9.s64 = ctx.r1.s64 + 79;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831D925C:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x831d925c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D925C;
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
loc_831D926C:
	// lbzu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r4,r10,29
	ctx.r4.u64 = ctx.r10.u32 & 0x7;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// slw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// bne 0x831d926c
	if (!cr0.eq) goto loc_831D926C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831d92a4
	if (!cr6.eq) goto loc_831D92A4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_831D92A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x831d92b8
	goto loc_831D92B8;
loc_831D92AC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831d92d4
	if (cr6.eq) goto loc_831D92D4;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_831D92B8:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// and. r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831d92ac
	if (!cr0.eq) goto loc_831D92AC;
loc_831D92D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x831d9304
	goto loc_831D9304;
loc_831D92E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r9,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// slw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831d9310
	if (!cr0.eq) goto loc_831D9310;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_831D9304:
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x831d92e0
	if (!cr0.eq) goto loc_831D92E0;
	// b 0x831d931c
	goto loc_831D931C;
loc_831D9310:
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831D931C:
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_831D9330:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9340"))) PPC_WEAK_FUNC(sub_831D9340);
PPC_FUNC_IMPL(__imp__sub_831D9340) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3176
	ctx.r4.s64 = ctx.r11.s64 + 3176;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831ce980
	ctx.lr = 0x831D9370;
	sub_831CE980(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831d9398
	if (cr6.eq) goto loc_831D9398;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831d9398
	if (cr0.eq) goto loc_831D9398;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_831D9398:
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832d4730
	ctx.lr = 0x831D93AC;
	sub_832D4730(ctx, base);
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

__attribute__((alias("__imp__sub_831D93C4"))) PPC_WEAK_FUNC(sub_831D93C4);
PPC_FUNC_IMPL(__imp__sub_831D93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D93C8"))) PPC_WEAK_FUNC(sub_831D93C8);
PPC_FUNC_IMPL(__imp__sub_831D93C8) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3208
	ctx.r11.s64 = ctx.r11.s64 + 3208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831e5b78
	ctx.lr = 0x831D93F4;
	sub_831E5B78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831d9404
	if (cr0.eq) goto loc_831D9404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x831D9404;
	sub_82416268(ctx, base);
loc_831D9404:
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

__attribute__((alias("__imp__sub_831D9420"))) PPC_WEAK_FUNC(sub_831D9420);
PPC_FUNC_IMPL(__imp__sub_831D9420) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831e5c48
	ctx.lr = 0x831D9440;
	sub_831E5C48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831d946c
	if (!cr0.eq) goto loc_831D946C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831d946c
	if (cr6.eq) goto loc_831D946C;
	// bl 0x831d3050
	ctx.lr = 0x831D9458;
	sub_831D3050(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831d946c
	if (cr0.eq) goto loc_831D946C;
	// bl 0x831d3050
	ctx.lr = 0x831D9464;
	sub_831D3050(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831D946C:
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

__attribute__((alias("__imp__sub_831D9484"))) PPC_WEAK_FUNC(sub_831D9484);
PPC_FUNC_IMPL(__imp__sub_831D9484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9488"))) PPC_WEAK_FUNC(sub_831D9488);
PPC_FUNC_IMPL(__imp__sub_831D9488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,2624
	ctx.r11.s64 = ctx.r11.s64 + 2624;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9498"))) PPC_WEAK_FUNC(sub_831D9498);
PPC_FUNC_IMPL(__imp__sub_831D9498) {
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
	// bl 0x831ce1d0
	ctx.lr = 0x831D94B0;
	sub_831CE1D0(ctx, base);
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_831D94C8"))) PPC_WEAK_FUNC(sub_831D94C8);
PPC_FUNC_IMPL(__imp__sub_831D94C8) {
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
	// bl 0x831ce1d0
	ctx.lr = 0x831D94D8;
	sub_831CE1D0(ctx, base);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D94EC"))) PPC_WEAK_FUNC(sub_831D94EC);
PPC_FUNC_IMPL(__imp__sub_831D94EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D94F0"))) PPC_WEAK_FUNC(sub_831D94F0);
PPC_FUNC_IMPL(__imp__sub_831D94F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9510"))) PPC_WEAK_FUNC(sub_831D9510);
PPC_FUNC_IMPL(__imp__sub_831D9510) {
	PPC_FUNC_PROLOGUE();
	// li r5,2624
	ctx.r5.s64 = 2624;
	// b 0x831ce420
	sub_831CE420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9518"))) PPC_WEAK_FUNC(sub_831D9518);
PPC_FUNC_IMPL(__imp__sub_831D9518) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x831e5d10
	ctx.lr = 0x831D953C;
	sub_831E5D10(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831d957c
	if (cr6.eq) goto loc_831D957C;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r10,r9,20
	ctx.r10.s64 = ctx.r9.s64 * 20;
loc_831D9550:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// ble cr6,0x831d9570
	if (!cr6.gt) goto loc_831D9570;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// ble cr6,0x831d9580
	if (!cr6.gt) goto loc_831D9580;
loc_831D9570:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// bne 0x831d9550
	if (!cr0.eq) goto loc_831D9550;
loc_831D957C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D9580:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_831D959C"))) PPC_WEAK_FUNC(sub_831D959C);
PPC_FUNC_IMPL(__imp__sub_831D959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D95A0"))) PPC_WEAK_FUNC(sub_831D95A0);
PPC_FUNC_IMPL(__imp__sub_831D95A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831D95A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d95d4
	if (cr6.eq) goto loc_831D95D4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d95d4
	if (cr6.eq) goto loc_831D95D4;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831d95d8
	goto loc_831D95D8;
loc_831D95D4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_831D95D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831e5d10
	ctx.lr = 0x831D95E4;
	sub_831E5D10(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831d9624
	if (cr6.eq) goto loc_831D9624;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 * 20;
loc_831D95F8:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// ble cr6,0x831d9618
	if (!cr6.gt) goto loc_831D9618;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// ble cr6,0x831d9628
	if (!cr6.gt) goto loc_831D9628;
loc_831D9618:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// bne 0x831d95f8
	if (!cr0.eq) goto loc_831D95F8;
loc_831D9624:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831D9628:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831d9638
	if (!cr6.eq) goto loc_831D9638;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x831d9640
	goto loc_831D9640;
loc_831D9638:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_831D9640:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831e5f68
	ctx.lr = 0x831D9650;
	sub_831E5F68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9658"))) PPC_WEAK_FUNC(sub_831D9658);
PPC_FUNC_IMPL(__imp__sub_831D9658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d9680
	if (cr6.eq) goto loc_831D9680;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d9680
	if (cr6.eq) goto loc_831D9680;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831D9680:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x831e6c40
	sub_831E6C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9690"))) PPC_WEAK_FUNC(sub_831D9690);
PPC_FUNC_IMPL(__imp__sub_831D9690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831D9698;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	// bl 0x831ce1d0
	ctx.lr = 0x831D96BC;
	sub_831CE1D0(ctx, base);
	// stw r30,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831e6c40
	ctx.lr = 0x831D96E4;
	sub_831E6C40(ctx, base);
	// bl 0x831ce1d0
	ctx.lr = 0x831D96E8;
	sub_831CE1D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9704"))) PPC_WEAK_FUNC(sub_831D9704);
PPC_FUNC_IMPL(__imp__sub_831D9704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9708"))) PPC_WEAK_FUNC(sub_831D9708);
PPC_FUNC_IMPL(__imp__sub_831D9708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10208(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10208);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831D9718;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831ce1d0
	ctx.lr = 0x831D9754;
	sub_831CE1D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D976C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9710"))) PPC_WEAK_FUNC(sub_831D9710);
PPC_FUNC_IMPL(__imp__sub_831D9710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831D9718;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831ce1d0
	ctx.lr = 0x831D9754;
	sub_831CE1D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D976C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9788"))) PPC_WEAK_FUNC(sub_831D9788);
PPC_FUNC_IMPL(__imp__sub_831D9788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x831d9690
	ctx.lr = 0x831D97B8;
	sub_831D9690(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D97D0"))) PPC_WEAK_FUNC(sub_831D97D0);
PPC_FUNC_IMPL(__imp__sub_831D97D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831D97D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// bl 0x831e5d10
	ctx.lr = 0x831D9804;
	sub_831E5D10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831d9814
	if (!cr6.eq) goto loc_831D9814;
	// bl 0x831d9f48
	ctx.lr = 0x831D9814;
	sub_831D9F48(ctx, base);
loc_831D9814:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831d985c
	if (cr6.eq) goto loc_831D985C;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 * 20;
loc_831D9834:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,-16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, xer);
	// ble cr6,0x831d9850
	if (!cr6.gt) goto loc_831D9850;
	// lwz r10,-12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// ble cr6,0x831d985c
	if (!cr6.gt) goto loc_831D985C;
loc_831D9850:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x831d9834
	if (!cr0.eq) goto loc_831D9834;
loc_831D985C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831d9874
	if (cr6.eq) goto loc_831D9874;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r11,-20
	ctx.r28.s64 = ctx.r11.s64 + -20;
loc_831D9874:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831d9900
	if (cr6.eq) goto loc_831D9900;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_831D9888:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x831d98b8
	if (cr6.eq) goto loc_831D98B8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// ble cr6,0x831d98e8
	if (!cr6.gt) goto loc_831D98E8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bgt cr6,0x831d98e8
	if (cr6.gt) goto loc_831D98E8;
loc_831D98B8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r25,r8
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, xer);
	// blt cr6,0x831d98e8
	if (cr6.lt) goto loc_831D98E8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// bgt cr6,0x831d98e8
	if (cr6.gt) goto loc_831D98E8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831d98e0
	if (!cr6.eq) goto loc_831D98E0;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
loc_831D98E0:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_831D98E8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bdnz 0x831d9888
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831D9888;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831d9910
	if (!cr6.eq) goto loc_831D9910;
loc_831D9900:
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
	// b 0x831d991c
	goto loc_831D991C;
loc_831D9910:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_831D991C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9924"))) PPC_WEAK_FUNC(sub_831D9924);
PPC_FUNC_IMPL(__imp__sub_831D9924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9928"))) PPC_WEAK_FUNC(sub_831D9928);
PPC_FUNC_IMPL(__imp__sub_831D9928) {
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
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831d99a4
	if (!cr6.eq) goto loc_831D99A4;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x831d99a4
	if (!cr6.eq) goto loc_831D99A4;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// ori r10,r10,1312
	ctx.r10.u64 = ctx.r10.u64 | 1312;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831d9990
	if (cr6.eq) goto loc_831D9990;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1313
	ctx.r10.u64 = ctx.r10.u64 | 1313;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831d9990
	if (cr6.eq) goto loc_831D9990;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831d99a4
	if (!cr6.eq) goto loc_831D99A4;
loc_831D9990:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831d99ac
	goto loc_831D99AC;
loc_831D99A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831D99AC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x831ce1d0
	ctx.lr = 0x831D99B4;
	sub_831CE1D0(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x831ce1d0
	ctx.lr = 0x831D99C0;
	sub_831CE1D0(ctx, base);
	// stw r31,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_831D99DC"))) PPC_WEAK_FUNC(sub_831D99DC);
PPC_FUNC_IMPL(__imp__sub_831D99DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D99E0"))) PPC_WEAK_FUNC(sub_831D99E0);
PPC_FUNC_IMPL(__imp__sub_831D99E0) {
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
	// bl 0x831ce1d0
	ctx.lr = 0x831D99F8;
	sub_831CE1D0(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x831d9a10
	goto loc_831D9A10;
loc_831D9A00:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x831d9a30
	if (cr6.eq) goto loc_831D9A30;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_831D9A10:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831d9a00
	if (!cr6.eq) goto loc_831D9A00;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831D9A1C:
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
loc_831D9A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831d9a1c
	goto loc_831D9A1C;
}

__attribute__((alias("__imp__sub_831D9A38"))) PPC_WEAK_FUNC(sub_831D9A38);
PPC_FUNC_IMPL(__imp__sub_831D9A38) {
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
	// bl 0x831ce1d0
	ctx.lr = 0x831D9A50;
	sub_831CE1D0(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d9a64
	if (cr6.eq) goto loc_831D9A64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831d9a68
	if (!cr6.eq) goto loc_831D9A68;
loc_831D9A64:
	// bl 0x831d9f48
	ctx.lr = 0x831D9A68;
	sub_831D9F48(ctx, base);
loc_831D9A68:
	// bl 0x831ce1d0
	ctx.lr = 0x831D9A6C;
	sub_831CE1D0(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x831d9a88
	if (!cr6.eq) goto loc_831D9A88;
	// bl 0x831ce1d0
	ctx.lr = 0x831D9A7C;
	sub_831CE1D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// b 0x831d9ac0
	goto loc_831D9AC0;
loc_831D9A88:
	// bl 0x831ce1d0
	ctx.lr = 0x831D9A8C;
	sub_831CE1D0(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831d9abc
	if (cr6.eq) goto loc_831D9ABC;
loc_831D9AA0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x831d9ad4
	if (cr6.eq) goto loc_831D9AD4;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831d9aa0
	if (!cr6.eq) goto loc_831D9AA0;
loc_831D9ABC:
	// bl 0x831d9f48
	ctx.lr = 0x831D9AC0;
	sub_831D9F48(ctx, base);
loc_831D9AC0:
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
loc_831D9AD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831d9ac0
	goto loc_831D9AC0;
}

__attribute__((alias("__imp__sub_831D9AE0"))) PPC_WEAK_FUNC(sub_831D9AE0);
PPC_FUNC_IMPL(__imp__sub_831D9AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// blt cr6,0x831d9b0c
	if (cr6.lt) goto loc_831D9B0C;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bgt cr6,0x831d9b0c
	if (cr6.gt) goto loc_831D9B0C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,2840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2840);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_831D9B0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9B14"))) PPC_WEAK_FUNC(sub_831D9B14);
PPC_FUNC_IMPL(__imp__sub_831D9B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9B18"))) PPC_WEAK_FUNC(sub_831D9B18);
PPC_FUNC_IMPL(__imp__sub_831D9B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2624
	ctx.r11.s64 = ctx.r11.s64 + 2624;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9B34"))) PPC_WEAK_FUNC(sub_831D9B34);
PPC_FUNC_IMPL(__imp__sub_831D9B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9B38"))) PPC_WEAK_FUNC(sub_831D9B38);
PPC_FUNC_IMPL(__imp__sub_831D9B38) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831d9b6c
	if (!cr6.eq) goto loc_831D9B6C;
	// bl 0x831d3050
	ctx.lr = 0x831D9B58;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831D9B64;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831d9b7c
	goto loc_831D9B7C;
loc_831D9B6C:
	// bl 0x8241a538
	ctx.lr = 0x831D9B70;
	sub_8241A538(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82418200
	ctx.lr = 0x831D9B7C;
	sub_82418200(ctx, base);
loc_831D9B7C:
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

__attribute__((alias("__imp__sub_831D9B90"))) PPC_WEAK_FUNC(sub_831D9B90);
PPC_FUNC_IMPL(__imp__sub_831D9B90) {
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
	// addi r30,r11,1808
	ctx.r30.s64 = ctx.r11.s64 + 1808;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_831D9BB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831d9bd4
	if (cr6.eq) goto loc_831D9BD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831d9bd4
	if (cr6.eq) goto loc_831D9BD4;
	// bl 0x831cf100
	ctx.lr = 0x831D9BCC;
	sub_831CF100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831D9BD4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831d9bb0
	if (cr6.lt) goto loc_831D9BB0;
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

__attribute__((alias("__imp__sub_831D9BFC"))) PPC_WEAK_FUNC(sub_831D9BFC);
PPC_FUNC_IMPL(__imp__sub_831D9BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9C00"))) PPC_WEAK_FUNC(sub_831D9C00);
PPC_FUNC_IMPL(__imp__sub_831D9C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1808
	ctx.r11.s64 = ctx.r11.s64 + 1808;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83d7553c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9C14"))) PPC_WEAK_FUNC(sub_831D9C14);
PPC_FUNC_IMPL(__imp__sub_831D9C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9C18"))) PPC_WEAK_FUNC(sub_831D9C18);
PPC_FUNC_IMPL(__imp__sub_831D9C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10232(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10232);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83d7562c
	ctx.lr = 0x831D9C44;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831d9c7c
	// ERROR 831D9C7C
	return;
}

__attribute__((alias("__imp__sub_831D9C20"))) PPC_WEAK_FUNC(sub_831D9C20);
PPC_FUNC_IMPL(__imp__sub_831D9C20) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83d7562c
	ctx.lr = 0x831D9C44;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831d9c7c
	goto loc_831D9C7C;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x831d9c74
	if (!cr6.eq) goto loc_831D9C74;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8241a530
	ctx.lr = 0x831D9C74;
	sub_8241A530(ctx, base);
loc_831D9C74:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_831D9C7C:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9C5C"))) PPC_WEAK_FUNC(sub_831D9C5C);
PPC_FUNC_IMPL(__imp__sub_831D9C5C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x831d9c74
	if (!cr6.eq) goto loc_831D9C74;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8241a530
	ctx.lr = 0x831D9C74;
	sub_8241A530(ctx, base);
loc_831D9C74:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9C90"))) PPC_WEAK_FUNC(sub_831D9C90);
PPC_FUNC_IMPL(__imp__sub_831D9C90) {
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

__attribute__((alias("__imp__sub_831D9CB4"))) PPC_WEAK_FUNC(sub_831D9CB4);
PPC_FUNC_IMPL(__imp__sub_831D9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9CB8"))) PPC_WEAK_FUNC(sub_831D9CB8);
PPC_FUNC_IMPL(__imp__sub_831D9CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831D9CC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r30,r10,1808
	ctx.r30.s64 = ctx.r10.s64 + 1808;
	// addi r28,r11,2720
	ctx.r28.s64 = ctx.r11.s64 + 2720;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_831D9CDC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831d9d04
	if (!cr6.eq) goto loc_831D9D04;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bl 0x831d9c20
	ctx.lr = 0x831D9CFC;
	sub_831D9C20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831d9d24
	if (cr0.eq) goto loc_831D9D24;
loc_831D9D04:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831d9cdc
	if (cr6.lt) goto loc_831D9CDC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831D9D1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_831D9D24:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x831d9d1c
	goto loc_831D9D1C;
}

__attribute__((alias("__imp__sub_831D9D38"))) PPC_WEAK_FUNC(sub_831D9D38);
PPC_FUNC_IMPL(__imp__sub_831D9D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10256(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10256);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831D9D48;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8241a538
	ctx.lr = 0x831D9D60;
	sub_8241A538(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831d9d7c
	if (!cr0.eq) goto loc_831D9D7C;
	// bl 0x831da090
	ctx.lr = 0x831D9D6C;
	sub_831DA090(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x831da060
	ctx.lr = 0x831D9D74;
	sub_831DA060(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x831cdd90
	ctx.lr = 0x831D9D7C;
	sub_831CDD90(ctx, base);
loc_831D9D7C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,1808
	ctx.r30.s64 = ctx.r11.s64 + 1808;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d9d9c
	if (cr6.eq) goto loc_831D9D9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9e2c
	goto loc_831D9E2C;
loc_831D9D9C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x831d2bf8
	ctx.lr = 0x831D9DA4;
	sub_831D2BF8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x831d9dc4
	if (!cr0.eq) goto loc_831D9DC4;
	// bl 0x831d3050
	ctx.lr = 0x831D9DB0;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831d9e2c
	goto loc_831D9E2C;
loc_831D9DC4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831d9e80
	ctx.lr = 0x831D9DCC;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x831d9e18
	if (!cr6.eq) goto loc_831D9E18;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x831d9c20
	ctx.lr = 0x831D9DE8;
	sub_831D9C20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831d9e10
	if (!cr0.eq) goto loc_831D9E10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cf100
	ctx.lr = 0x831D9DF8;
	sub_831CF100(ctx, base);
	// bl 0x831d3050
	ctx.lr = 0x831D9DFC;
	sub_831D3050(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x831d9e1c
	goto loc_831D9E1C;
loc_831D9E10:
	// stwx r28,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x831d9e1c
	goto loc_831D9E1C;
loc_831D9E18:
	// bl 0x831cf100
	ctx.lr = 0x831D9E1C;
	sub_831CF100(ctx, base);
loc_831D9E1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831d9e50
	ctx.lr = 0x831D9E28;
	sub_831D9E50(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831D9E2C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9D40"))) PPC_WEAK_FUNC(sub_831D9D40);
PPC_FUNC_IMPL(__imp__sub_831D9D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831D9D48;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x8241a538
	ctx.lr = 0x831D9D60;
	sub_8241A538(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831d9d7c
	if (!cr0.eq) goto loc_831D9D7C;
	// bl 0x831da090
	ctx.lr = 0x831D9D6C;
	sub_831DA090(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x831da060
	ctx.lr = 0x831D9D74;
	sub_831DA060(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x831cdd90
	ctx.lr = 0x831D9D7C;
	sub_831CDD90(ctx, base);
loc_831D9D7C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,1808
	ctx.r30.s64 = ctx.r11.s64 + 1808;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d9d9c
	if (cr6.eq) goto loc_831D9D9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831d9e2c
	goto loc_831D9E2C;
loc_831D9D9C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x831d2bf8
	ctx.lr = 0x831D9DA4;
	sub_831D2BF8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x831d9dc4
	if (!cr0.eq) goto loc_831D9DC4;
	// bl 0x831d3050
	ctx.lr = 0x831D9DB0;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831d9e2c
	goto loc_831D9E2C;
loc_831D9DC4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831d9e80
	ctx.lr = 0x831D9DCC;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x831d9e18
	if (!cr6.eq) goto loc_831D9E18;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x831d9c20
	ctx.lr = 0x831D9DE8;
	sub_831D9C20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831d9e10
	if (!cr0.eq) goto loc_831D9E10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cf100
	ctx.lr = 0x831D9DF8;
	sub_831CF100(ctx, base);
	// bl 0x831d3050
	ctx.lr = 0x831D9DFC;
	sub_831D3050(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x831d9e1c
	goto loc_831D9E1C;
loc_831D9E10:
	// stwx r28,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x831d9e1c
	goto loc_831D9E1C;
loc_831D9E18:
	// bl 0x831cf100
	ctx.lr = 0x831D9E1C;
	sub_831CF100(ctx, base);
loc_831D9E1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831d9e50
	ctx.lr = 0x831D9E28;
	sub_831D9E50(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831D9E2C:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831D9E34"))) PPC_WEAK_FUNC(sub_831D9E34);
PPC_FUNC_IMPL(__imp__sub_831D9E34) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r30,r11,1808
	ctx.r30.s64 = ctx.r11.s64 + 1808;
	// b 0x831d9e60
	goto loc_831D9E60;
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831D9E60:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x83d7553c
	ctx.lr = 0x831D9E68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9E50"))) PPC_WEAK_FUNC(sub_831D9E50);
PPC_FUNC_IMPL(__imp__sub_831D9E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x83d7553c
	ctx.lr = 0x831D9E68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9E7C"))) PPC_WEAK_FUNC(sub_831D9E7C);
PPC_FUNC_IMPL(__imp__sub_831D9E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9E80"))) PPC_WEAK_FUNC(sub_831D9E80);
PPC_FUNC_IMPL(__imp__sub_831D9E80) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r31,r3,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,1808
	ctx.r30.s64 = ctx.r11.s64 + 1808;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831d9ec0
	if (!cr6.eq) goto loc_831D9EC0;
	// bl 0x831d9d40
	ctx.lr = 0x831D9EB0;
	sub_831D9D40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831d9ec0
	if (!cr0.eq) goto loc_831D9EC0;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x831ce040
	ctx.lr = 0x831D9EC0;
	sub_831CE040(ctx, base);
loc_831D9EC0:
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x83d7554c
	ctx.lr = 0x831D9EC8;
	__imp__RtlEnterCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_831D9EE0"))) PPC_WEAK_FUNC(sub_831D9EE0);
PPC_FUNC_IMPL(__imp__sub_831D9EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10280(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10280);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831ce1d0
	ctx.lr = 0x831D9F00;
	sub_831CE1D0(ctx, base);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d9f28
	if (cr6.eq) goto loc_831D9F28;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D9F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831D9F28:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x83d7564c
	ctx.lr = 0x831D9F34;
	__imp__KeBugCheck(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9EE8"))) PPC_WEAK_FUNC(sub_831D9EE8);
PPC_FUNC_IMPL(__imp__sub_831D9EE8) {
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
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831ce1d0
	ctx.lr = 0x831D9F00;
	sub_831CE1D0(ctx, base);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831d9f28
	if (cr6.eq) goto loc_831D9F28;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D9F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831D9F28:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x83d7564c
	ctx.lr = 0x831D9F34;
	__imp__KeBugCheck(ctx, base);
}

__attribute__((alias("__imp__sub_831D9F34"))) PPC_WEAK_FUNC(sub_831D9F34);
PPC_FUNC_IMPL(__imp__sub_831D9F34) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9F40"))) PPC_WEAK_FUNC(sub_831D9F40);
PPC_FUNC_IMPL(__imp__sub_831D9F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10304(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10304);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,3112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831d9f88
	if (cr0.eq) goto loc_831D9F88;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D9F7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831D9F88:
	// bl 0x831d9ee8
	ctx.lr = 0x831D9F8C;
	sub_831D9EE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9F48"))) PPC_WEAK_FUNC(sub_831D9F48);
PPC_FUNC_IMPL(__imp__sub_831D9F48) {
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
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,3112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831d9f88
	if (cr0.eq) goto loc_831D9F88;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D9F7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831D9F88:
	// bl 0x831d9ee8
	ctx.lr = 0x831D9F8C;
	sub_831D9EE8(ctx, base);
}

__attribute__((alias("__imp__sub_831D9F8C"))) PPC_WEAK_FUNC(sub_831D9F8C);
PPC_FUNC_IMPL(__imp__sub_831D9F8C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9F98"))) PPC_WEAK_FUNC(sub_831D9F98);
PPC_FUNC_IMPL(__imp__sub_831D9F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// addi r11,r11,-24856
	ctx.r11.s64 = ctx.r11.s64 + -24856;
	// stw r11,3112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9FAC"))) PPC_WEAK_FUNC(sub_831D9FAC);
PPC_FUNC_IMPL(__imp__sub_831D9FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9FB0"))) PPC_WEAK_FUNC(sub_831D9FB0);
PPC_FUNC_IMPL(__imp__sub_831D9FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r3,3116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3116, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9FBC"))) PPC_WEAK_FUNC(sub_831D9FBC);
PPC_FUNC_IMPL(__imp__sub_831D9FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9FC0"))) PPC_WEAK_FUNC(sub_831D9FC0);
PPC_FUNC_IMPL(__imp__sub_831D9FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r3,3120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3120, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831D9FCC"))) PPC_WEAK_FUNC(sub_831D9FCC);
PPC_FUNC_IMPL(__imp__sub_831D9FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831D9FD0"))) PPC_WEAK_FUNC(sub_831D9FD0);
PPC_FUNC_IMPL(__imp__sub_831D9FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,3120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831da000
	if (cr0.eq) goto loc_831DA000;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831D9FF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x831da004
	if (!cr0.eq) goto loc_831DA004;
loc_831DA000:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DA004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA014"))) PPC_WEAK_FUNC(sub_831DA014);
PPC_FUNC_IMPL(__imp__sub_831DA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA018"))) PPC_WEAK_FUNC(sub_831DA018);
PPC_FUNC_IMPL(__imp__sub_831DA018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5288
	ctx.r9.s64 = ctx.r10.s64 + 5288;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_831DA028:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// beq cr6,0x831da04c
	if (cr6.eq) goto loc_831DA04C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// blt cr6,0x831da028
	if (cr6.lt) goto loc_831DA028;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831DA04C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA05C"))) PPC_WEAK_FUNC(sub_831DA05C);
PPC_FUNC_IMPL(__imp__sub_831DA05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA060"))) PPC_WEAK_FUNC(sub_831DA060);
PPC_FUNC_IMPL(__imp__sub_831DA060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831da018
	ctx.lr = 0x831DA070;
	sub_831DA018(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831da07c
	if (cr0.eq) goto loc_831DA07C;
	// bl 0x832d47b0
	ctx.lr = 0x831DA07C;
	sub_832D47B0(ctx, base);
loc_831DA07C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA08C"))) PPC_WEAK_FUNC(sub_831DA08C);
PPC_FUNC_IMPL(__imp__sub_831DA08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA090"))) PPC_WEAK_FUNC(sub_831DA090);
PPC_FUNC_IMPL(__imp__sub_831DA090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x831da018
	ctx.lr = 0x831DA0A4;
	sub_831DA018(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831da0b0
	if (cr0.eq) goto loc_831DA0B0;
	// bl 0x832d47b0
	ctx.lr = 0x831DA0B0;
	sub_832D47B0(ctx, base);
loc_831DA0B0:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x831da018
	ctx.lr = 0x831DA0B8;
	sub_831DA018(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831da0c4
	if (cr0.eq) goto loc_831DA0C4;
	// bl 0x832d47b0
	ctx.lr = 0x831DA0C4;
	sub_832D47B0(ctx, base);
loc_831DA0C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA0D4"))) PPC_WEAK_FUNC(sub_831DA0D4);
PPC_FUNC_IMPL(__imp__sub_831DA0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA0D8"))) PPC_WEAK_FUNC(sub_831DA0D8);
PPC_FUNC_IMPL(__imp__sub_831DA0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831DA0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831ce0f8
	ctx.lr = 0x831DA0F0;
	sub_831CE0F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831da100
	if (!cr0.eq) goto loc_831DA100;
loc_831DA0F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831da2b4
	goto loc_831DA2B4;
loc_831DA100:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831DA108:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x831da124
	if (cr6.eq) goto loc_831DA124;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x831da108
	if (cr6.lt) goto loc_831DA108;
loc_831DA124:
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x831da140
	if (!cr6.lt) goto loc_831DA140;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x831da144
	if (cr6.eq) goto loc_831DA144;
loc_831DA140:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831DA144:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831da0f8
	if (cr6.eq) goto loc_831DA0F8;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x831da0f8
	if (cr6.eq) goto loc_831DA0F8;
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// bne cr6,0x831da16c
	if (!cr6.eq) goto loc_831DA16C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x831da2b4
	goto loc_831DA2B4;
loc_831DA16C:
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beq cr6,0x831da2b0
	if (cr6.eq) goto loc_831DA2B0;
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x831da2a0
	if (!cr6.eq) goto loc_831DA2A0;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r10,36
	ctx.r10.s64 = 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831DA194:
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// bdnz 0x831da194
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831DA194;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// ori r10,r10,142
	ctx.r10.u64 = ctx.r10.u64 | 142;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da1c8
	if (!cr6.eq) goto loc_831DA1C8;
	// li r11,131
	ctx.r11.s64 = 131;
	// b 0x831da284
	goto loc_831DA284;
loc_831DA1C8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,144
	ctx.r10.u64 = ctx.r10.u64 | 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da1e0
	if (!cr6.eq) goto loc_831DA1E0;
	// li r11,129
	ctx.r11.s64 = 129;
	// b 0x831da284
	goto loc_831DA284;
loc_831DA1E0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,145
	ctx.r10.u64 = ctx.r10.u64 | 145;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da1f8
	if (!cr6.eq) goto loc_831DA1F8;
	// li r11,132
	ctx.r11.s64 = 132;
	// b 0x831da284
	goto loc_831DA284;
loc_831DA1F8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,147
	ctx.r10.u64 = ctx.r10.u64 | 147;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da210
	if (!cr6.eq) goto loc_831DA210;
	// li r11,133
	ctx.r11.s64 = 133;
	// b 0x831da284
	goto loc_831DA284;
loc_831DA210:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da228
	if (!cr6.eq) goto loc_831DA228;
	// li r11,130
	ctx.r11.s64 = 130;
	// b 0x831da284
	goto loc_831DA284;
loc_831DA228:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 | 143;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da240
	if (!cr6.eq) goto loc_831DA240;
	// li r11,134
	ctx.r11.s64 = 134;
	// b 0x831da284
	goto loc_831DA284;
loc_831DA240:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,146
	ctx.r10.u64 = ctx.r10.u64 | 146;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da258
	if (!cr6.eq) goto loc_831DA258;
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x831da284
	goto loc_831DA284;
loc_831DA258:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,693
	ctx.r10.u64 = ctx.r10.u64 | 693;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da270
	if (!cr6.eq) goto loc_831DA270;
	// li r11,141
	ctx.r11.s64 = 141;
	// b 0x831da284
	goto loc_831DA284;
loc_831DA270:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,692
	ctx.r10.u64 = ctx.r10.u64 | 692;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831da288
	if (!cr6.eq) goto loc_831DA288;
	// li r11,142
	ctx.r11.s64 = 142;
loc_831DA284:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_831DA288:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x831DA298;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// b 0x831da2ac
	goto loc_831DA2AC;
loc_831DA2A0:
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x831DA2AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831DA2AC:
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_831DA2B0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831DA2B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA2BC"))) PPC_WEAK_FUNC(sub_831DA2BC);
PPC_FUNC_IMPL(__imp__sub_831DA2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA2C0"))) PPC_WEAK_FUNC(sub_831DA2C0);
PPC_FUNC_IMPL(__imp__sub_831DA2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x831ce2d0
	sub_831CE2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA2CC"))) PPC_WEAK_FUNC(sub_831DA2CC);
PPC_FUNC_IMPL(__imp__sub_831DA2CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA2D0"))) PPC_WEAK_FUNC(sub_831DA2D0);
PPC_FUNC_IMPL(__imp__sub_831DA2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// addi r10,r4,1022
	ctx.r10.s64 = ctx.r4.s64 + 1022;
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA2F8"))) PPC_WEAK_FUNC(sub_831DA2F8);
PPC_FUNC_IMPL(__imp__sub_831DA2F8) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// addi r11,r11,-1022
	ctx.r11.s64 = ctx.r11.s64 + -1022;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA310"))) PPC_WEAK_FUNC(sub_831DA310);
PPC_FUNC_IMPL(__imp__sub_831DA310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// andi. r10,r10,32783
	ctx.r10.u64 = ctx.r10.u64 & 32783;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA344"))) PPC_WEAK_FUNC(sub_831DA344);
PPC_FUNC_IMPL(__imp__sub_831DA344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA348"))) PPC_WEAK_FUNC(sub_831DA348);
PPC_FUNC_IMPL(__imp__sub_831DA348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,32752
	ctx.r11.s64 = 2146435072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831da370
	if (!cr6.eq) goto loc_831DA370;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831da38c
	if (!cr6.eq) goto loc_831DA38C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831DA370:
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831da38c
	if (!cr6.eq) goto loc_831DA38C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831da38c
	if (!cr6.eq) goto loc_831DA38C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831DA38C:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	cr6.compare<uint32_t>(ctx.r11.u32, 32760, xer);
	// bne cr6,0x831da3a4
	if (!cr6.eq) goto loc_831DA3A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_831DA3A4:
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(ctx.r11.u32, 32752, xer);
	// bne cr6,0x831da3c4
	if (!cr6.eq) goto loc_831DA3C4;
	// clrlwi. r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831da3bc
	if (!cr0.eq) goto loc_831DA3BC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831da3c4
	if (cr6.eq) goto loc_831DA3C4;
loc_831DA3BC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_831DA3C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA3CC"))) PPC_WEAK_FUNC(sub_831DA3CC);
PPC_FUNC_IMPL(__imp__sub_831DA3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA3D0"))) PPC_WEAK_FUNC(sub_831DA3D0);
PPC_FUNC_IMPL(__imp__sub_831DA3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f0,9000(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x831da3ec
	if (!cr6.eq) goto loc_831DA3EC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831da4bc
	goto loc_831DA4BC;
loc_831DA3EC:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r9,r11,0,17,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831da494
	if (!cr0.eq) goto loc_831DA494;
	// lwz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// clrlwi. r7,r8,12
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x831da410
	if (!cr0.eq) goto loc_831DA410;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831da494
	if (cr6.eq) goto loc_831DA494;
loc_831DA410:
	// li r9,-1021
	ctx.r9.s64 = -1021;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x831da424
	if (cr6.lt) goto loc_831DA424;
	// li r7,0
	ctx.r7.s64 = 0;
loc_831DA424:
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x831da45c
	if (!cr0.eq) goto loc_831DA45C;
loc_831DA42C:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r8,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
	// beq 0x831da444
	if (cr0.eq) goto loc_831DA444;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stw r8,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
loc_831DA444:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x831da42c
	if (cr0.eq) goto loc_831DA42C;
	// stw r10,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r10.u32);
loc_831DA45C:
	// andi. r11,r11,65519
	ctx.r11.u64 = ctx.r11.u64 & 65519;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
	// beq cr6,0x831da474
	if (cr6.eq) goto loc_831DA474;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
loc_831DA474:
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// b 0x831da4b8
	goto loc_831DA4B8;
loc_831DA494:
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// rlwinm r10,r9,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r10,-1022
	ctx.r9.s64 = ctx.r10.s64 + -1022;
loc_831DA4B8:
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_831DA4BC:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA4C4"))) PPC_WEAK_FUNC(sub_831DA4C4);
PPC_FUNC_IMPL(__imp__sub_831DA4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA4C8"))) PPC_WEAK_FUNC(sub_831DA4C8);
PPC_FUNC_IMPL(__imp__sub_831DA4C8) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d34c8
	ctx.lr = 0x831DA4E8;
	sub_831D34C8(ctx, base);
	// cmpwi cr6,r3,101
	cr6.compare<int32_t>(ctx.r3.s32, 101, xer);
	// beq cr6,0x831da500
	if (cr6.eq) goto loc_831DA500;
loc_831DA4F0:
	// lbzu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// bl 0x831d2680
	ctx.lr = 0x831DA4F8;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831da4f0
	if (!cr0.eq) goto loc_831DA4F0;
loc_831DA500:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831d34c8
	ctx.lr = 0x831DA50C;
	sub_831D34C8(ctx, base);
	// cmpwi cr6,r3,120
	cr6.compare<int32_t>(ctx.r3.s32, 120, xer);
	// bne cr6,0x831da518
	if (!cr6.eq) goto loc_831DA518;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_831DA518:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r11,2840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2840);
	// lwz r9,188(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_831DA538:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x831da538
	if (!cr0.eq) goto loc_831DA538;
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

__attribute__((alias("__imp__sub_831DA564"))) PPC_WEAK_FUNC(sub_831DA564);
PPC_FUNC_IMPL(__imp__sub_831DA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA568"))) PPC_WEAK_FUNC(sub_831DA568);
PPC_FUNC_IMPL(__imp__sub_831DA568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r8,2840(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2840);
	// beq 0x831da5a0
	if (cr0.eq) goto loc_831DA5A0;
	// lwz r10,188(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_831DA58C:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x831da5a0
	if (cr6.eq) goto loc_831DA5A0;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831da58c
	if (!cr0.eq) goto loc_831DA58C;
loc_831DA5A0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x831da5c8
	goto loc_831DA5C8;
loc_831DA5B4:
	// cmpwi cr6,r10,101
	cr6.compare<int32_t>(ctx.r10.s32, 101, xer);
	// beq cr6,0x831da5d0
	if (cr6.eq) goto loc_831DA5D0;
	// cmpwi cr6,r10,69
	cr6.compare<int32_t>(ctx.r10.s32, 69, xer);
	// beq cr6,0x831da5d0
	if (cr6.eq) goto loc_831DA5D0;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_831DA5C8:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831da5b4
	if (!cr0.eq) goto loc_831DA5B4;
loc_831DA5D0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_831DA5D4:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// beq cr6,0x831da5d4
	if (cr6.eq) goto loc_831DA5D4;
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x831da600
	if (!cr6.eq) goto loc_831DA600;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831DA600:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_831DA604:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bne 0x831da604
	if (!cr0.eq) goto loc_831DA604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA618"))) PPC_WEAK_FUNC(sub_831DA618);
PPC_FUNC_IMPL(__imp__sub_831DA618) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,9000(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DA638"))) PPC_WEAK_FUNC(sub_831DA638);
PPC_FUNC_IMPL(__imp__sub_831DA638) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831da670
	if (cr6.eq) goto loc_831DA670;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831e6e58
	ctx.lr = 0x831DA664;
	sub_831E6E58(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x831da680
	goto loc_831DA680;
loc_831DA670:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831e6f00
	ctx.lr = 0x831DA678;
	sub_831E6F00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831DA680:
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

__attribute__((alias("__imp__sub_831DA694"))) PPC_WEAK_FUNC(sub_831DA694);
PPC_FUNC_IMPL(__imp__sub_831DA694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DA698"))) PPC_WEAK_FUNC(sub_831DA698);
PPC_FUNC_IMPL(__imp__sub_831DA698) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831da638
	sub_831DA638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA6A0"))) PPC_WEAK_FUNC(sub_831DA6A0);
PPC_FUNC_IMPL(__imp__sub_831DA6A0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831da4c8
	sub_831DA4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA6A8"))) PPC_WEAK_FUNC(sub_831DA6A8);
PPC_FUNC_IMPL(__imp__sub_831DA6A8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831da568
	sub_831DA568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA6B0"))) PPC_WEAK_FUNC(sub_831DA6B0);
PPC_FUNC_IMPL(__imp__sub_831DA6B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831DA6B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831da6f4
	if (!cr6.eq) goto loc_831DA6F4;
	// bl 0x831d3050
	ctx.lr = 0x831DA6DC;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DA6E8;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
loc_831DA6EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831DA6F4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x831da714
	if (!cr6.eq) goto loc_831DA714;
	// bl 0x831d3050
	ctx.lr = 0x831DA700;
	sub_831D3050(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_831DA704:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DA70C;
	sub_831CF000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831da6ec
	goto loc_831DA6EC;
loc_831DA714:
	// subfic r11,r31,0
	xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 != 0) | (xer.ca != 0);
	ctx.r11.s64 = ctx.r11.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bgt cr6,0x831da73c
	if (cr6.gt) goto loc_831DA73C;
	// bl 0x831d3050
	ctx.lr = 0x831DA734;
	sub_831D3050(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x831da704
	goto loc_831DA704;
loc_831DA73C:
	// extsb. r28,r8
	ctx.r28.s64 = ctx.r8.s8;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x831da78c
	if (cr0.eq) goto loc_831DA78C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x831da78c
	if (!cr6.gt) goto loc_831DA78C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_831DA764:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831da764
	if (!cr6.eq) goto loc_831DA764;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce420
	ctx.lr = 0x831DA78C;
	sub_831CE420(ctx, base);
loc_831DA78C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r26,45
	ctx.r26.s64 = 45;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// bne cr6,0x831da7a8
	if (!cr6.eq) goto loc_831DA7A8;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_831DA7A8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x831da7d8
	if (!cr6.gt) goto loc_831DA7D8;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,2840(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2840);
	// lwz r9,188(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 188);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_831DA7D8:
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x831da7f8
	if (!cr6.eq) goto loc_831DA7F8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x831da800
	goto loc_831DA800;
loc_831DA7F8:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_831DA800:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,5624
	ctx.r5.s64 = ctx.r11.s64 + 5624;
	// bl 0x831ce7d8
	ctx.lr = 0x831DA810;
	sub_831CE7D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831da8e8
	if (!cr0.eq) goto loc_831DA8E8;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x831da82c
	if (cr6.eq) goto loc_831DA82C;
	// li r11,69
	ctx.r11.s64 = 69;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_831DA82C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831da8b8
	if (cr6.eq) goto loc_831DA8B8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x831da854
	if (!cr0.lt) goto loc_831DA854;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r26.u8);
loc_831DA854:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// blt cr6,0x831da880
	if (cr6.lt) goto loc_831DA880;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// divw r7,r11,r7
	ctx.r7.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,100
	ctx.r8.s64 = ctx.r7.s64 * 100;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_831DA880:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// blt cr6,0x831da8ac
	if (cr6.lt) goto loc_831DA8AC;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// divw r7,r11,r7
	ctx.r7.s32 = PPCDivide(ctx.r11.s32, ctx.r7.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_831DA8AC:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_831DA8B8:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,3352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3352);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831da8e0
	if (cr0.eq) goto loc_831DA8E0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x831da8e0
	if (!cr6.eq) goto loc_831DA8E0;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x831ce420
	ctx.lr = 0x831DA8E0;
	sub_831CE420(ctx, base);
loc_831DA8E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831da6ec
	goto loc_831DA6EC;
loc_831DA8E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831DA900;
	sub_831CF0D8(ctx, base);
}

__attribute__((alias("__imp__sub_831DA900"))) PPC_WEAK_FUNC(sub_831DA900);
PPC_FUNC_IMPL(__imp__sub_831DA900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831DA908;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x831e71e8
	ctx.lr = 0x831DA930;
	sub_831E71E8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831da950
	if (!cr6.eq) goto loc_831DA950;
loc_831DA938:
	// bl 0x831d3050
	ctx.lr = 0x831DA93C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DA948;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831da9e8
	goto loc_831DA9E8;
loc_831DA950:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831da938
	if (cr6.eq) goto loc_831DA938;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x831da96c
	if (!cr6.eq) goto loc_831DA96C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x831da98c
	goto loc_831DA98C;
loc_831DA96C:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// neg r9,r31
	ctx.r9.s64 = -ctx.r31.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// andc r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r31.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r4,r9,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_831DA98C:
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// neg r10,r31
	ctx.r10.s64 = -ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// andc r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831e6fa8
	ctx.lr = 0x831DA9B8;
	sub_831E6FA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831da9cc
	if (cr0.eq) goto loc_831DA9CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x831da9e8
	goto loc_831DA9E8;
loc_831DA9CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831da6b0
	ctx.lr = 0x831DA9E8;
	sub_831DA6B0(ctx, base);
loc_831DA9E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DA9F0"))) PPC_WEAK_FUNC(sub_831DA9F0);
PPC_FUNC_IMPL(__imp__sub_831DA9F0) {
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
	ctx.lr = 0x831DA9F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// li r28,48
	ctx.r28.s64 = 48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1023
	ctx.r30.s64 = 1023;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831daa3c
	if (!cr6.eq) goto loc_831DAA3C;
	// bl 0x831d3050
	ctx.lr = 0x831DAA28;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DAA34;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831dadf8
	goto loc_831DADF8;
loc_831DAA3C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831daa5c
	if (!cr6.eq) goto loc_831DAA5C;
	// bl 0x831d3050
	ctx.lr = 0x831DAA48;
	sub_831D3050(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_831DAA4C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DAA54;
	sub_831CF000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831dadf8
	goto loc_831DADF8;
loc_831DAA5C:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x831daa7c
	if (cr6.gt) goto loc_831DAA7C;
	// bl 0x831d3050
	ctx.lr = 0x831DAA74;
	sub_831D3050(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x831daa4c
	goto loc_831DAA4C;
loc_831DAA7C:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r10,r11,12,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// cmpldi cr6,r10,2047
	cr6.compare<uint64_t>(ctx.r10.u64, 2047, xer);
	// bne cr6,0x831dab20
	if (!cr6.eq) goto loc_831DAB20;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x831daa9c
	if (!cr6.eq) goto loc_831DAA9C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x831daaa0
	goto loc_831DAAA0;
loc_831DAA9C:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_831DAAA0:
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831da900
	ctx.lr = 0x831DAAB4;
	sub_831DA900(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831daac4
	if (cr0.eq) goto loc_831DAAC4;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// b 0x831dadf8
	goto loc_831DADF8;
loc_831DAAC4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x831daad8
	if (!cr6.eq) goto loc_831DAAD8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831DAAD8:
	// subfic r11,r29,0
	xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stbu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r31.u32 = ea;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x831ceef0
	ctx.lr = 0x831DAAFC;
	sub_831CEEF0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831dadf4
	if (cr0.eq) goto loc_831DADF4;
	// subfic r11,r29,0
	xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r26,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r26.u8);
	// b 0x831dadf4
	goto loc_831DADF4;
loc_831DAB20:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// li r27,45
	ctx.r27.s64 = 45;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x831dab38
	if (cr6.eq) goto loc_831DAB38;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831DAB38:
	// subfic r11,r29,0
	xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r10,r29,0
	xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// stbu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r31.u32 = ea;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r5,r10,39
	ctx.r5.s64 = ctx.r10.s64 + 39;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// bne cr6,0x831daba4
	if (!cr6.eq) goto loc_831DABA4;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x831dab9c
	if (!cr6.eq) goto loc_831DAB9C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x831dabb0
	goto loc_831DABB0;
loc_831DAB9C:
	// li r30,1022
	ctx.r30.s64 = 1022;
	// b 0x831dabb0
	goto loc_831DABB0;
loc_831DABA4:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831DABB0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x831dabc8
	if (!cr6.eq) goto loc_831DABC8;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x831dabe0
	goto loc_831DABE0;
loc_831DABC8:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,2840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2840);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_831DABE0:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x831dacd0
	if (!cr6.gt) goto loc_831DACD0;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_831DABF8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x831dac58
	if (!cr6.gt) goto loc_831DAC58;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	cr6.compare<uint32_t>(ctx.r9.u32, 57, xer);
	// ble cr6,0x831dac34
	if (!cr6.gt) goto loc_831DAC34;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_831DAC34:
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// mr. r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x831dabf8
	if (!cr0.lt) goto loc_831DABF8;
loc_831DAC58:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x831dacd0
	if (cr0.lt) goto loc_831DACD0;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x831dacd0
	if (!cr6.gt) goto loc_831DACD0;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_831DAC84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// beq cr6,0x831dac9c
	if (cr6.eq) goto loc_831DAC9C;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bne cr6,0x831daca8
	if (!cr6.eq) goto loc_831DACA8;
loc_831DAC9C:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x831dac84
	goto loc_831DAC84;
loc_831DACA8:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x831dacc4
	if (cr6.eq) goto loc_831DACC4;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bne cr6,0x831dacc8
	if (!cr6.eq) goto loc_831DACC8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// b 0x831daccc
	goto loc_831DACCC;
loc_831DACC4:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_831DACC8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831DACCC:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_831DACD0:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x831dacf8
	if (!cr6.gt) goto loc_831DACF8;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x831dacf4
	if (cr0.eq) goto loc_831DACF4;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_831DACEC:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831dacec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831DACEC;
loc_831DACF4:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_831DACF8:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831dad08
	if (!cr0.eq) goto loc_831DAD08;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_831DAD08:
	// subfic r11,r29,0
	xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,12,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// blt cr6,0x831dad40
	if (cr6.lt) goto loc_831DAD40;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x831dad48
	goto loc_831DAD48;
loc_831DAD40:
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_831DAD48:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	cr6.compare<int64_t>(ctx.r11.s64, 1000, xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// blt cr6,0x831dad88
	if (cr6.lt) goto loc_831DAD88;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = PPCDivide(ctx.r11.s64, ctx.r9.s64);
	// divd r6,r11,r9
	ctx.r6.s64 = PPCDivide(ctx.r11.s64, ctx.r9.s64);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = ctx.r6.s64 * 1000;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x831dad90
	if (!cr6.eq) goto loc_831DAD90;
loc_831DAD88:
	// cmpdi cr6,r11,100
	cr6.compare<int64_t>(ctx.r11.s64, 100, xer);
	// blt cr6,0x831dadb4
	if (cr6.lt) goto loc_831DADB4;
loc_831DAD90:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = PPCDivide(ctx.r11.s64, ctx.r9.s64);
	// divd r6,r11,r9
	ctx.r6.s64 = PPCDivide(ctx.r11.s64, ctx.r9.s64);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = ctx.r6.s64 * 100;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831DADB4:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x831dadc4
	if (!cr6.eq) goto loc_831DADC4;
	// cmpdi cr6,r11,10
	cr6.compare<int64_t>(ctx.r11.s64, 10, xer);
	// blt cr6,0x831dade8
	if (cr6.lt) goto loc_831DADE8;
loc_831DADC4:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = PPCDivide(ctx.r11.s64, ctx.r9.s64);
	// divd r7,r11,r9
	ctx.r7.s64 = PPCDivide(ctx.r11.s64, ctx.r9.s64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831DADE8:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r26.u8);
loc_831DADF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DADF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAE00"))) PPC_WEAK_FUNC(sub_831DAE00);
PPC_FUNC_IMPL(__imp__sub_831DAE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831DAE08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x831dae3c
	if (!cr6.eq) goto loc_831DAE3C;
loc_831DAE24:
	// bl 0x831d3050
	ctx.lr = 0x831DAE28;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DAE34;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831dafac
	goto loc_831DAFAC;
loc_831DAE3C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831dae24
	if (cr6.eq) goto loc_831DAE24;
	// extsb. r26,r7
	ctx.r26.s64 = ctx.r7.s8;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// li r28,48
	ctx.r28.s64 = 48;
	// beq 0x831dae7c
	if (cr0.eq) goto loc_831DAE7C;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bne cr6,0x831dae7c
	if (!cr6.eq) goto loc_831DAE7C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_831DAE7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x831dae94
	if (!cr6.eq) goto loc_831DAE94;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_831DAE94:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x831daedc
	if (cr6.gt) goto loc_831DAEDC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831DAEA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831daea4
	if (!cr6.eq) goto loc_831DAEA4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce420
	ctx.lr = 0x831DAED4;
	sub_831CE420(ctx, base);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x831daee0
	goto loc_831DAEE0;
loc_831DAEDC:
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_831DAEE0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x831dafa8
	if (!cr6.gt) goto loc_831DAFA8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_831DAEEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831daeec
	if (!cr6.eq) goto loc_831DAEEC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce420
	ctx.lr = 0x831DAF1C;
	sub_831CE420(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,2840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2840);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x831dafa8
	if (!cr6.lt) goto loc_831DAFA8;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x831daf50
	if (cr6.eq) goto loc_831DAF50;
	// neg r27,r11
	ctx.r27.s64 = -ctx.r11.s64;
	// b 0x831daf60
	goto loc_831DAF60;
loc_831DAF50:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x831daf60
	if (cr6.lt) goto loc_831DAF60;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_831DAF60:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x831daf98
	if (cr6.eq) goto loc_831DAF98;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831DAF6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831daf6c
	if (!cr6.eq) goto loc_831DAF6C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce420
	ctx.lr = 0x831DAF98;
	sub_831CE420(ctx, base);
loc_831DAF98:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831DAFA8;
	sub_831CDCF0(ctx, base);
loc_831DAFA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DAFAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DAFB4"))) PPC_WEAK_FUNC(sub_831DAFB4);
PPC_FUNC_IMPL(__imp__sub_831DAFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DAFB8"))) PPC_WEAK_FUNC(sub_831DAFB8);
PPC_FUNC_IMPL(__imp__sub_831DAFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831DAFC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831e71e8
	ctx.lr = 0x831DAFE4;
	sub_831E71E8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831db004
	if (!cr6.eq) goto loc_831DB004;
loc_831DAFEC:
	// bl 0x831d3050
	ctx.lr = 0x831DAFF0;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DAFFC;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831db07c
	goto loc_831DB07C;
loc_831DB004:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831dafec
	if (cr6.eq) goto loc_831DAFEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x831db020
	if (!cr6.eq) goto loc_831DB020;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x831db030
	goto loc_831DB030;
loc_831DB020:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r4,r10,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r10.s64;
loc_831DB030:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831e6fa8
	ctx.lr = 0x831DB050;
	sub_831E6FA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831db064
	if (cr0.eq) goto loc_831DB064;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x831db07c
	goto loc_831DB07C;
loc_831DB064:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831dae00
	ctx.lr = 0x831DB07C;
	sub_831DAE00(ctx, base);
loc_831DB07C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB084"))) PPC_WEAK_FUNC(sub_831DB084);
PPC_FUNC_IMPL(__imp__sub_831DB084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB088"))) PPC_WEAK_FUNC(sub_831DB088);
PPC_FUNC_IMPL(__imp__sub_831DB088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831DB090;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x831e71e8
	ctx.lr = 0x831DB0B8;
	sub_831E71E8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x831db0d8
	if (!cr6.eq) goto loc_831DB0D8;
loc_831DB0C0:
	// bl 0x831d3050
	ctx.lr = 0x831DB0C4;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DB0D0;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831db1b0
	goto loc_831DB1B0;
loc_831DB0D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831db0c0
	if (cr6.eq) goto loc_831DB0C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x831db10c
	if (cr6.eq) goto loc_831DB10C;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_831DB10C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e6fa8
	ctx.lr = 0x831DB11C;
	sub_831E6FA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831db130
	if (cr0.eq) goto loc_831DB130;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x831db1b0
	goto loc_831DB1B0;
loc_831DB130:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// cmpwi cr6,r11,-4
	cr6.compare<int32_t>(ctx.r11.s32, -4, xer);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// blt cr6,0x831db194
	if (cr6.lt) goto loc_831DB194;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bge cr6,0x831db194
	if (!cr6.lt) goto loc_831DB194;
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831db178
	if (cr0.eq) goto loc_831DB178;
loc_831DB164:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831db164
	if (!cr0.eq) goto loc_831DB164;
	// stb r11,-2(r28)
	PPC_STORE_U8(ctx.r28.u32 + -2, ctx.r11.u8);
loc_831DB178:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dae00
	ctx.lr = 0x831DB190;
	sub_831DAE00(ctx, base);
	// b 0x831db1b0
	goto loc_831DB1B0;
loc_831DB194:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831da6b0
	ctx.lr = 0x831DB1B0;
	sub_831DA6B0(ctx, base);
loc_831DB1B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB1B8"))) PPC_WEAK_FUNC(sub_831DB1B8);
PPC_FUNC_IMPL(__imp__sub_831DB1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(ctx.r11.s32, 101, xer);
	// beq cr6,0x831db200
	if (cr6.eq) goto loc_831DB200;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// beq cr6,0x831db200
	if (cr6.eq) goto loc_831DB200;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bne cr6,0x831db1e8
	if (!cr6.eq) goto loc_831DB1E8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x831dafb8
	sub_831DAFB8(ctx, base);
	return;
loc_831DB1E8:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// beq cr6,0x831db1fc
	if (cr6.eq) goto loc_831DB1FC;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// beq cr6,0x831db1fc
	if (cr6.eq) goto loc_831DB1FC;
	// b 0x831db088
	sub_831DB088(ctx, base);
	return;
loc_831DB1FC:
	// b 0x831da9f0
	sub_831DA9F0(ctx, base);
	return;
loc_831DB200:
	// b 0x831da900
	sub_831DA900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB204"))) PPC_WEAK_FUNC(sub_831DB204);
PPC_FUNC_IMPL(__imp__sub_831DB204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB208"))) PPC_WEAK_FUNC(sub_831DB208);
PPC_FUNC_IMPL(__imp__sub_831DB208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(ctx.r11.s32, 101, xer);
	// beq cr6,0x831db254
	if (cr6.eq) goto loc_831DB254;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// beq cr6,0x831db254
	if (cr6.eq) goto loc_831DB254;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bne cr6,0x831db234
	if (!cr6.eq) goto loc_831DB234;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x831dafb8
	sub_831DAFB8(ctx, base);
	return;
loc_831DB234:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// beq cr6,0x831db24c
	if (cr6.eq) goto loc_831DB24C;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// beq cr6,0x831db24c
	if (cr6.eq) goto loc_831DB24C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x831db088
	sub_831DB088(ctx, base);
	return;
loc_831DB24C:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x831da9f0
	sub_831DA9F0(ctx, base);
	return;
loc_831DB254:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x831da900
	sub_831DA900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB25C"))) PPC_WEAK_FUNC(sub_831DB25C);
PPC_FUNC_IMPL(__imp__sub_831DB25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB260"))) PPC_WEAK_FUNC(sub_831DB260);
PPC_FUNC_IMPL(__imp__sub_831DB260) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB270"))) PPC_WEAK_FUNC(sub_831DB270);
PPC_FUNC_IMPL(__imp__sub_831DB270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,3132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB27C"))) PPC_WEAK_FUNC(sub_831DB27C);
PPC_FUNC_IMPL(__imp__sub_831DB27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB280"))) PPC_WEAK_FUNC(sub_831DB280);
PPC_FUNC_IMPL(__imp__sub_831DB280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10328(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10328);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831DB290;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bgt cr6,0x831db364
	if (cr6.gt) goto loc_831DB364;
	// beq cr6,0x831db2e0
	if (cr6.eq) goto loc_831DB2E0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831db2f8
	if (cr6.eq) goto loc_831DB2F8;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x831db2e0
	if (cr6.eq) goto loc_831DB2E0;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x831db390
	if (cr6.eq) goto loc_831DB390;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x831db37c
	if (!cr6.eq) goto loc_831DB37C;
loc_831DB2E0:
	// bl 0x831ce0f8
	ctx.lr = 0x831DB2E4;
	sub_831CE0F8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// bne 0x831db308
	if (!cr0.eq) goto loc_831DB308;
loc_831DB2F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831db508
	goto loc_831DB508;
loc_831DB2F8:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r30,r11,3124
	ctx.r30.s64 = ctx.r11.s64 + 3124;
	// lwz r11,3124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	// b 0x831db3c8
	goto loc_831DB3C8;
loc_831DB308:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r8,5620(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5620);
loc_831DB318:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, xer);
	// beq cr6,0x831db338
	if (cr6.eq) goto loc_831DB338;
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x831db318
	if (cr6.lt) goto loc_831DB318;
loc_831DB338:
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x831db354
	if (!cr6.lt) goto loc_831DB354;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// beq cr6,0x831db358
	if (cr6.eq) goto loc_831DB358;
loc_831DB354:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831DB358:
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831db3d0
	goto loc_831DB3D0;
loc_831DB364:
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(ctx.r29.s32, 15, xer);
	// beq cr6,0x831db3b8
	if (cr6.eq) goto loc_831DB3B8;
	// cmpwi cr6,r29,21
	cr6.compare<int32_t>(ctx.r29.s32, 21, xer);
	// beq cr6,0x831db3a4
	if (cr6.eq) goto loc_831DB3A4;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// beq cr6,0x831db390
	if (cr6.eq) goto loc_831DB390;
loc_831DB37C:
	// bl 0x831d3050
	ctx.lr = 0x831DB380;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DB38C;
	sub_831CF000(ctx, base);
	// b 0x831db2f0
	goto loc_831DB2F0;
loc_831DB390:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,3124
	ctx.r11.s64 = ctx.r11.s64 + 3124;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831db3c8
	goto loc_831DB3C8;
loc_831DB3A4:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,3124
	ctx.r11.s64 = ctx.r11.s64 + 3124;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831db3c8
	goto loc_831DB3C8;
loc_831DB3B8:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,3124
	ctx.r11.s64 = ctx.r11.s64 + 3124;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_831DB3C8:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_831DB3D0:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x831db504
	if (cr6.eq) goto loc_831DB504;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831db3ec
	if (!cr6.eq) goto loc_831DB3EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x831ce020
	ctx.lr = 0x831DB3EC;
	sub_831CE020(ctx, base);
loc_831DB3EC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x831db3fc
	if (cr6.eq) goto loc_831DB3FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9e80
	ctx.lr = 0x831DB3FC;
	sub_831D9E80(ctx, base);
loc_831DB3FC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x831db41c
	if (cr6.eq) goto loc_831DB41C;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// beq cr6,0x831db41c
	if (cr6.eq) goto loc_831DB41C;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// bne cr6,0x831db440
	if (!cr6.eq) goto loc_831DB440;
loc_831DB41C:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r26.u32);
	// bne cr6,0x831db490
	if (!cr6.eq) goto loc_831DB490;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r10.u32);
loc_831DB440:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// bne cr6,0x831db490
	if (!cr6.eq) goto loc_831DB490;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r10,5608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5608);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_831DB45C:
	// lwz r9,5612(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5612);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x831db494
	if (!cr6.lt) goto loc_831DB494;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,5608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5608);
	// b 0x831db45c
	goto loc_831DB45C;
loc_831DB490:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_831DB494:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831db530
	ctx.lr = 0x831DB4A0;
	sub_831DB530(ctx, base);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bne cr6,0x831db4c8
	if (!cr6.eq) goto loc_831DB4C8;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bctrl 
	ctx.lr = 0x831DB4C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831db4d4
	goto loc_831DB4D4;
loc_831DB4C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DB4D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_831DB4D4:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// beq cr6,0x831db4ec
	if (cr6.eq) goto loc_831DB4EC;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// beq cr6,0x831db4ec
	if (cr6.eq) goto loc_831DB4EC;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x831db504
	if (!cr6.eq) goto loc_831DB504;
loc_831DB4EC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bne cr6,0x831db504
	if (!cr6.eq) goto loc_831DB504;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_831DB504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB508:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB288"))) PPC_WEAK_FUNC(sub_831DB288);
PPC_FUNC_IMPL(__imp__sub_831DB288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831DB290;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bgt cr6,0x831db364
	if (cr6.gt) goto loc_831DB364;
	// beq cr6,0x831db2e0
	if (cr6.eq) goto loc_831DB2E0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831db2f8
	if (cr6.eq) goto loc_831DB2F8;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x831db2e0
	if (cr6.eq) goto loc_831DB2E0;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x831db390
	if (cr6.eq) goto loc_831DB390;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x831db37c
	if (!cr6.eq) goto loc_831DB37C;
loc_831DB2E0:
	// bl 0x831ce0f8
	ctx.lr = 0x831DB2E4;
	sub_831CE0F8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// bne 0x831db308
	if (!cr0.eq) goto loc_831DB308;
loc_831DB2F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831db508
	goto loc_831DB508;
loc_831DB2F8:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r30,r11,3124
	ctx.r30.s64 = ctx.r11.s64 + 3124;
	// lwz r11,3124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	// b 0x831db3c8
	goto loc_831DB3C8;
loc_831DB308:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r8,5620(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5620);
loc_831DB318:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, xer);
	// beq cr6,0x831db338
	if (cr6.eq) goto loc_831DB338;
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x831db318
	if (cr6.lt) goto loc_831DB318;
loc_831DB338:
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x831db354
	if (!cr6.lt) goto loc_831DB354;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// beq cr6,0x831db358
	if (cr6.eq) goto loc_831DB358;
loc_831DB354:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831DB358:
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831db3d0
	goto loc_831DB3D0;
loc_831DB364:
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(ctx.r29.s32, 15, xer);
	// beq cr6,0x831db3b8
	if (cr6.eq) goto loc_831DB3B8;
	// cmpwi cr6,r29,21
	cr6.compare<int32_t>(ctx.r29.s32, 21, xer);
	// beq cr6,0x831db3a4
	if (cr6.eq) goto loc_831DB3A4;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// beq cr6,0x831db390
	if (cr6.eq) goto loc_831DB390;
loc_831DB37C:
	// bl 0x831d3050
	ctx.lr = 0x831DB380;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DB38C;
	sub_831CF000(ctx, base);
	// b 0x831db2f0
	goto loc_831DB2F0;
loc_831DB390:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,3124
	ctx.r11.s64 = ctx.r11.s64 + 3124;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831db3c8
	goto loc_831DB3C8;
loc_831DB3A4:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,3124
	ctx.r11.s64 = ctx.r11.s64 + 3124;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831db3c8
	goto loc_831DB3C8;
loc_831DB3B8:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,3124
	ctx.r11.s64 = ctx.r11.s64 + 3124;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_831DB3C8:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_831DB3D0:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x831db504
	if (cr6.eq) goto loc_831DB504;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831db3ec
	if (!cr6.eq) goto loc_831DB3EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x831ce020
	ctx.lr = 0x831DB3EC;
	sub_831CE020(ctx, base);
loc_831DB3EC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x831db3fc
	if (cr6.eq) goto loc_831DB3FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9e80
	ctx.lr = 0x831DB3FC;
	sub_831D9E80(ctx, base);
loc_831DB3FC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// beq cr6,0x831db41c
	if (cr6.eq) goto loc_831DB41C;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// beq cr6,0x831db41c
	if (cr6.eq) goto loc_831DB41C;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// bne cr6,0x831db440
	if (!cr6.eq) goto loc_831DB440;
loc_831DB41C:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r26.u32);
	// bne cr6,0x831db490
	if (!cr6.eq) goto loc_831DB490;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r10.u32);
loc_831DB440:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// bne cr6,0x831db490
	if (!cr6.eq) goto loc_831DB490;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lwz r10,5608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5608);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_831DB45C:
	// lwz r9,5612(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5612);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x831db494
	if (!cr6.lt) goto loc_831DB494;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,5608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5608);
	// b 0x831db45c
	goto loc_831DB45C;
loc_831DB490:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_831DB494:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831db530
	ctx.lr = 0x831DB4A0;
	sub_831DB530(ctx, base);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bne cr6,0x831db4c8
	if (!cr6.eq) goto loc_831DB4C8;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bctrl 
	ctx.lr = 0x831DB4C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831db4d4
	goto loc_831DB4D4;
loc_831DB4C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x831DB4D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_831DB4D4:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// beq cr6,0x831db4ec
	if (cr6.eq) goto loc_831DB4EC;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// beq cr6,0x831db4ec
	if (cr6.eq) goto loc_831DB4EC;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x831db504
	if (!cr6.eq) goto loc_831DB504;
loc_831DB4EC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bne cr6,0x831db504
	if (!cr6.eq) goto loc_831DB504;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_831DB504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB508:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB510"))) PPC_WEAK_FUNC(sub_831DB510);
PPC_FUNC_IMPL(__imp__sub_831DB510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x831db548
	goto loc_831DB548;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831DB548:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x831db558
	if (cr6.eq) goto loc_831DB558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9c00
	ctx.lr = 0x831DB558;
	sub_831D9C00(ctx, base);
loc_831DB558:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB530"))) PPC_WEAK_FUNC(sub_831DB530);
PPC_FUNC_IMPL(__imp__sub_831DB530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x831db558
	if (cr6.eq) goto loc_831DB558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9c00
	ctx.lr = 0x831DB558;
	sub_831D9C00(ctx, base);
loc_831DB558:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB570"))) PPC_WEAK_FUNC(sub_831DB570);
PPC_FUNC_IMPL(__imp__sub_831DB570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831DB578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831db59c
	if (!cr6.eq) goto loc_831DB59C;
	// bl 0x831d3050
	ctx.lr = 0x831DB58C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DB598;
	sub_831CF000(ctx, base);
	// b 0x831db710
	goto loc_831DB710;
loc_831DB59C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831db710
	if (cr0.eq) goto loc_831DB710;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831db710
	if (!cr0.eq) goto loc_831DB710;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831db5c4
	if (cr0.eq) goto loc_831DB5C4;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x831db70c
	goto loc_831DB70C;
loc_831DB5C4:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831db5e4
	if (!cr0.eq) goto loc_831DB5E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831dba98
	ctx.lr = 0x831DB5E0;
	sub_831DBA98(ctx, base);
	// b 0x831db5ec
	goto loc_831DB5EC;
loc_831DB5E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831DB5EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831db880
	ctx.lr = 0x831DB5FC;
	sub_831DB880(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831e2a60
	ctx.lr = 0x831DB608;
	sub_831E2A60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x831db6ec
	if (cr0.eq) goto loc_831DB6EC;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831db6ec
	if (cr6.eq) goto loc_831DB6EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 & 130;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831db6a4
	if (!cr0.eq) goto loc_831DB6A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831DB634;
	sub_831DB880(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831db680
	if (cr6.eq) goto loc_831DB680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831DB644;
	sub_831DB880(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831db680
	if (cr6.eq) goto loc_831DB680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831DB654;
	sub_831DB880(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,23808
	ctx.r30.s64 = ctx.r10.s64 + 23808;
	// bl 0x831db880
	ctx.lr = 0x831DB66C;
	sub_831DB880(ctx, base);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x831db688
	goto loc_831DB688;
loc_831DB680:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
loc_831DB688:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 & 130;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmplwi cr6,r11,130
	cr6.compare<uint32_t>(ctx.r11.u32, 130, xer);
	// bne cr6,0x831db6a4
	if (!cr6.eq) goto loc_831DB6A4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831DB6A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(ctx.r11.s32, 512, xer);
	// bne cr6,0x831db6cc
	if (!cr6.eq) goto loc_831DB6CC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831db6cc
	if (cr0.eq) goto loc_831DB6CC;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831db6cc
	if (!cr0.eq) goto loc_831DB6CC;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_831DB6CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x831db714
	goto loc_831DB714;
loc_831DB6EC:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_831DB70C:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831DB710:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831DB714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DB71C"))) PPC_WEAK_FUNC(sub_831DB71C);
PPC_FUNC_IMPL(__imp__sub_831DB71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB720"))) PPC_WEAK_FUNC(sub_831DB720);
PPC_FUNC_IMPL(__imp__sub_831DB720) {
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
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x831d9420
	ctx.lr = 0x831DB738;
	sub_831D9420(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831db748
	if (!cr0.eq) goto loc_831DB748;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831db7e4
	goto loc_831DB7E4;
loc_831DB748:
	// lis r7,-31738
	ctx.r7.s64 = -2079981568;
	// lis r8,-31738
	ctx.r8.s64 = -2079981568;
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,23808(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23808, ctx.r10.u32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// stw r11,23800(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23800, ctx.r11.u32);
	// bge cr6,0x831db7b4
	if (!cr6.lt) goto loc_831DB7B4;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// li r8,10
	ctx.r8.s64 = 10;
loc_831DB774:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stw r10,-5(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5, ctx.r10.u32);
	// stw r9,3(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3, ctx.r9.u32);
	// stb r9,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r9.u8);
	// stb r8,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r8.u8);
	// stb r8,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r8.u8);
	// stw r9,59(r11)
	PPC_STORE_U32(ctx.r11.u32 + 59, ctx.r9.u32);
	// stb r9,55(r11)
	PPC_STORE_U8(ctx.r11.u32 + 55, ctx.r9.u8);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r10,23808(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23808);
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// addi r5,r11,-5
	ctx.r5.s64 = ctx.r11.s64 + -5;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x831db774
	if (cr6.lt) goto loc_831DB774;
loc_831DB7B4:
	// li r11,3
	ctx.r11.s64 = 3;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// b 0x831db7c4
	goto loc_831DB7C4;
loc_831DB7C0:
	// lwz r10,23808(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23808);
loc_831DB7C4:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,-63
	ctx.r10.s64 = -63;
	// li r8,-2
	ctx.r8.s64 = -2;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bdnz 0x831db7c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831DB7C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DB7E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB7F4"))) PPC_WEAK_FUNC(sub_831DB7F4);
PPC_FUNC_IMPL(__imp__sub_831DB7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB7F8"))) PPC_WEAK_FUNC(sub_831DB7F8);
PPC_FUNC_IMPL(__imp__sub_831DB7F8) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r30,r11,23808
	ctx.r30.s64 = ctx.r11.s64 + 23808;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_831DB818:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831db854
	if (cr6.eq) goto loc_831DB854;
	// addi r11,r3,2304
	ctx.r11.s64 = ctx.r3.s64 + 2304;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x831db848
	if (!cr6.lt) goto loc_831DB848;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
loc_831DB83C:
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831db83c
	if (cr6.lt) goto loc_831DB83C;
loc_831DB848:
	// bl 0x831cf100
	ctx.lr = 0x831DB84C;
	sub_831CF100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831DB854:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831db818
	if (cr6.lt) goto loc_831DB818;
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

__attribute__((alias("__imp__sub_831DB87C"))) PPC_WEAK_FUNC(sub_831DB87C);
PPC_FUNC_IMPL(__imp__sub_831DB87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DB880"))) PPC_WEAK_FUNC(sub_831DB880);
PPC_FUNC_IMPL(__imp__sub_831DB880) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831db8ac
	if (!cr6.eq) goto loc_831DB8AC;
	// bl 0x831d3050
	ctx.lr = 0x831DB898;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DB8A4;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831db8b0
	goto loc_831DB8B0;
loc_831DB8AC:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_831DB8B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DB8C0"))) PPC_WEAK_FUNC(sub_831DB8C0);
PPC_FUNC_IMPL(__imp__sub_831DB8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831DB8C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831db880
	ctx.lr = 0x831DB8DC;
	sub_831DB880(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = ctx.r11.u64 & 130;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831db914
	if (!cr0.eq) goto loc_831DB914;
	// bl 0x831d3050
	ctx.lr = 0x831DB8F4;
	sub_831D3050(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_831DB8F8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_831DB900:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_831DB904:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x831dba8c
	goto loc_831DBA8C;
loc_831DB914:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831db928
	if (cr0.eq) goto loc_831DB928;
	// bl 0x831d3050
	ctx.lr = 0x831DB920;
	sub_831D3050(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x831db8f8
	goto loc_831DB8F8;
loc_831DB928:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x831db950
	if (cr0.eq) goto loc_831DB950;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x831db904
	if (cr0.eq) goto loc_831DB904;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_831DB950:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831db9ac
	if (!cr0.eq) goto loc_831DB9AC;
	// bl 0x831cf870
	ctx.lr = 0x831DB978;
	sub_831CF870(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x831db994
	if (cr6.eq) goto loc_831DB994;
	// bl 0x831cf870
	ctx.lr = 0x831DB988;
	sub_831CF870(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x831db9a4
	if (!cr6.eq) goto loc_831DB9A4;
loc_831DB994:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a2a780
	ctx.lr = 0x831DB99C;
	sub_83A2A780(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831db9ac
	if (!cr0.eq) goto loc_831DB9AC;
loc_831DB9A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831dba98
	ctx.lr = 0x831DB9AC;
	sub_831DBA98(ctx, base);
loc_831DB9AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dba64
	if (cr0.eq) goto loc_831DBA64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf. r30,r4,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ble 0x831db9f4
	if (!cr0.gt) goto loc_831DB9F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dbe58
	ctx.lr = 0x831DB9EC;
	sub_831DBE58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831dba54
	goto loc_831DBA54;
loc_831DB9F4:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x831dba28
	if (cr6.eq) goto loc_831DBA28;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(ctx.r29.s32, -2, xer);
	// beq cr6,0x831dba28
	if (cr6.eq) goto loc_831DBA28;
	// srawi r11,r29,5
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x831dba30
	goto loc_831DBA30;
loc_831DBA28:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
loc_831DBA30:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dba54
	if (cr0.eq) goto loc_831DBA54;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dc6c0
	ctx.lr = 0x831DBA4C;
	sub_831DC6C0(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x831db900
	if (cr6.eq) goto loc_831DB900;
loc_831DBA54:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x831dba7c
	goto loc_831DBA7C;
loc_831DBA64:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x831dbe58
	ctx.lr = 0x831DBA78;
	sub_831DBE58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_831DBA7C:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, xer);
	// bne cr6,0x831db900
	if (!cr6.eq) goto loc_831DB900;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_831DBA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBA94"))) PPC_WEAK_FUNC(sub_831DBA94);
PPC_FUNC_IMPL(__imp__sub_831DBA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DBA98"))) PPC_WEAK_FUNC(sub_831DBA98);
PPC_FUNC_IMPL(__imp__sub_831DBA98) {
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
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r11,2648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2648);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2648, ctx.r11.u32);
	// bl 0x831d2bf8
	ctx.lr = 0x831DBAC4;
	sub_831D2BF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq 0x831dbae4
	if (cr0.eq) goto loc_831DBAE4;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x831dbaf8
	goto loc_831DBAF8;
loc_831DBAE4:
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_831DBAF8:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831DBB20"))) PPC_WEAK_FUNC(sub_831DBB20);
PPC_FUNC_IMPL(__imp__sub_831DBB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10352(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10352);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831DBB30;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bl 0x831d9e80
	ctx.lr = 0x831DBB48;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r29,-31738
	ctx.r29.s64 = -2079981568;
	// lis r27,-31738
	ctx.r27.s64 = -2079981568;
loc_831DBB58:
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,24076(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24076);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x831dbbd0
	if (!cr6.lt) goto loc_831DBBD0;
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831dbbc4
	if (cr6.eq) goto loc_831DBBC4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbba4
	if (cr0.eq) goto loc_831DBBA4;
	// bl 0x831d0920
	ctx.lr = 0x831DBB94;
	sub_831D0920(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831dbba4
	if (cr6.eq) goto loc_831DBBA4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_831DBBA4:
	// cmpwi cr6,r28,20
	cr6.compare<int32_t>(ctx.r28.s32, 20, xer);
	// blt cr6,0x831dbbc4
	if (cr6.lt) goto loc_831DBBC4;
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x831cf100
	ctx.lr = 0x831DBBB8;
	sub_831CF100(ctx, base);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_831DBBC4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x831dbb58
	goto loc_831DBB58;
loc_831DBBD0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x831dbbe8
	ctx.lr = 0x831DBBDC;
	sub_831DBBE8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBB28"))) PPC_WEAK_FUNC(sub_831DBB28);
PPC_FUNC_IMPL(__imp__sub_831DBB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831DBB30;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bl 0x831d9e80
	ctx.lr = 0x831DBB48;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r29,-31738
	ctx.r29.s64 = -2079981568;
	// lis r27,-31738
	ctx.r27.s64 = -2079981568;
loc_831DBB58:
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,24076(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24076);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x831dbbd0
	if (!cr6.lt) goto loc_831DBBD0;
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831dbbc4
	if (cr6.eq) goto loc_831DBBC4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbba4
	if (cr0.eq) goto loc_831DBBA4;
	// bl 0x831d0920
	ctx.lr = 0x831DBB94;
	sub_831D0920(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831dbba4
	if (cr6.eq) goto loc_831DBBA4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_831DBBA4:
	// cmpwi cr6,r28,20
	cr6.compare<int32_t>(ctx.r28.s32, 20, xer);
	// blt cr6,0x831dbbc4
	if (cr6.lt) goto loc_831DBBC4;
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x831cf100
	ctx.lr = 0x831DBBB8;
	sub_831CF100(ctx, base);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_831DBBC4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x831dbb58
	goto loc_831DBB58;
loc_831DBBD0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x831dbbe8
	ctx.lr = 0x831DBBDC;
	sub_831DBBE8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBBE8"))) PPC_WEAK_FUNC(sub_831DBBE8);
PPC_FUNC_IMPL(__imp__sub_831DBBE8) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831d9c00
	ctx.lr = 0x831DBBFC;
	sub_831D9C00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBC0C"))) PPC_WEAK_FUNC(sub_831DBC0C);
PPC_FUNC_IMPL(__imp__sub_831DBC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DBC10"))) PPC_WEAK_FUNC(sub_831DBC10);
PPC_FUNC_IMPL(__imp__sub_831DBC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x831DBC18;
	__savegprlr_21(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5312(r1)
	ea = -5312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// bne cr6,0x831dbc44
	if (!cr6.eq) goto loc_831DBC44;
loc_831DBC3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831dbe48
	goto loc_831DBE48;
loc_831DBC44:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x831dbc6c
	if (!cr6.eq) goto loc_831DBC6C;
loc_831DBC4C:
	// bl 0x831d3088
	ctx.lr = 0x831DBC50;
	sub_831D3088(ctx, base);
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DBC58;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DBC64;
	sub_831CF000(ctx, base);
loc_831DBC64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dbe48
	goto loc_831DBE48;
loc_831DBC6C:
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r10,23808
	ctx.r27.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r28,r11,72
	ctx.r28.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// srawi r11,r11,25
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831dbcac
	if (cr6.eq) goto loc_831DBCAC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831dbcb8
	if (!cr6.eq) goto loc_831DBCB8;
loc_831DBCAC:
	// not r11,r29
	ctx.r11.u64 = ~ctx.r29.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbc4c
	if (cr0.eq) goto loc_831DBC4C;
loc_831DBCB8:
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbcd0
	if (cr0.eq) goto loc_831DBCD0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831dc5f0
	ctx.lr = 0x831DBCD0;
	sub_831DC5F0(ctx, base);
loc_831DBCD0:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831dbd90
	if (cr0.eq) goto loc_831DBD90;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831dbe04
	if (cr6.eq) goto loc_831DBE04;
loc_831DBCF4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// subf r9,r24,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r24.s64;
loc_831DBD00:
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bge cr6,0x831dbd44
	if (!cr6.lt) goto loc_831DBD44;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// bne cr6,0x831dbd30
	if (!cr6.eq) goto loc_831DBD30;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831DBD30:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,5119
	cr6.compare<uint32_t>(ctx.r10.u32, 5119, xer);
	// blt cr6,0x831dbd00
	if (cr6.lt) goto loc_831DBD00;
loc_831DBD44:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r26,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r9,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// bl 0x832d1ab0
	ctx.lr = 0x831DBD68;
	sub_832D1AB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dbdbc
	if (cr0.eq) goto loc_831DBDBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// blt cr6,0x831dbdc4
	if (cr6.lt) goto loc_831DBDC4;
	// subf r11,r24,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r24.s64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x831dbcf4
	if (cr6.lt) goto loc_831DBCF4;
	// b 0x831dbdc4
	goto loc_831DBDC4;
loc_831DBD90:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x832d1ab0
	ctx.lr = 0x831DBDA8;
	sub_832D1AB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dbdbc
	if (cr0.eq) goto loc_831DBDBC;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// b 0x831dbdc4
	goto loc_831DBDC4;
loc_831DBDBC:
	// bl 0x82417100
	ctx.lr = 0x831DBDC0;
	sub_82417100(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_831DBDC4:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x831dbe44
	if (!cr6.eq) goto loc_831DBE44;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x831dbe04
	if (cr6.eq) goto loc_831DBE04;
	// cmplwi cr6,r25,5
	cr6.compare<uint32_t>(ctx.r25.u32, 5, xer);
	// bne cr6,0x831dbdf8
	if (!cr6.eq) goto loc_831DBDF8;
	// bl 0x831d3050
	ctx.lr = 0x831DBDE0;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831DBDEC;
	sub_831D3088(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831dbc64
	goto loc_831DBC64;
loc_831DBDF8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831d30c0
	ctx.lr = 0x831DBE00;
	sub_831D30C0(ctx, base);
	// b 0x831dbc64
	goto loc_831DBC64;
loc_831DBE04:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbe24
	if (cr0.eq) goto loc_831DBE24;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// beq cr6,0x831dbc3c
	if (cr6.eq) goto loc_831DBC3C;
loc_831DBE24:
	// bl 0x831d3050
	ctx.lr = 0x831DBE28;
	sub_831D3050(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831DBE34;
	sub_831D3088(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// b 0x831dbe48
	goto loc_831DBE48;
loc_831DBE44:
	// subf r3,r22,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r22.s64;
loc_831DBE48:
	// addi r1,r1,5312
	ctx.r1.s64 = ctx.r1.s64 + 5312;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBE50"))) PPC_WEAK_FUNC(sub_831DBE50);
PPC_FUNC_IMPL(__imp__sub_831DBE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10376(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10376);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831DBE60;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831dbea4
	if (!cr6.eq) goto loc_831DBEA4;
	// bl 0x831d3088
	ctx.lr = 0x831DBE84;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DBE90;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dbf74
	goto loc_831DBF74;
loc_831DBEA4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831dbebc
	if (cr6.lt) goto loc_831DBEBC;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831dbee0
	if (cr6.lt) goto loc_831DBEE0;
loc_831DBEBC:
	// bl 0x831d3088
	ctx.lr = 0x831DBEC0;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DBECC;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DBED8;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dbf74
	goto loc_831DBF74;
loc_831DBEE0:
	// srawi r11,r30,5
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,23808
	ctx.r28.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbebc
	if (cr0.eq) goto loc_831DBEBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831DBF14;
	sub_831E7470(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbf44
	if (cr0.eq) goto loc_831DBF44;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831dbc10
	ctx.lr = 0x831DBF3C;
	sub_831DBC10(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x831dbf64
	goto loc_831DBF64;
loc_831DBF44:
	// bl 0x831d3050
	ctx.lr = 0x831DBF48;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831DBF54;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_831DBF64:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831dbf9c
	ctx.lr = 0x831DBF70;
	sub_831DBF9C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831DBF74:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBE58"))) PPC_WEAK_FUNC(sub_831DBE58);
PPC_FUNC_IMPL(__imp__sub_831DBE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831DBE60;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831dbea4
	if (!cr6.eq) goto loc_831DBEA4;
	// bl 0x831d3088
	ctx.lr = 0x831DBE84;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DBE90;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dbf74
	goto loc_831DBF74;
loc_831DBEA4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831dbebc
	if (cr6.lt) goto loc_831DBEBC;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831dbee0
	if (cr6.lt) goto loc_831DBEE0;
loc_831DBEBC:
	// bl 0x831d3088
	ctx.lr = 0x831DBEC0;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DBECC;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DBED8;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dbf74
	goto loc_831DBF74;
loc_831DBEE0:
	// srawi r11,r30,5
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,23808
	ctx.r28.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbebc
	if (cr0.eq) goto loc_831DBEBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831DBF14;
	sub_831E7470(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dbf44
	if (cr0.eq) goto loc_831DBF44;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831dbc10
	ctx.lr = 0x831DBF3C;
	sub_831DBC10(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x831dbf64
	goto loc_831DBF64;
loc_831DBF44:
	// bl 0x831d3050
	ctx.lr = 0x831DBF48;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831DBF54;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_831DBF64:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831dbf9c
	ctx.lr = 0x831DBF70;
	sub_831DBF9C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831DBF74:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBF7C"))) PPC_WEAK_FUNC(sub_831DBF7C);
PPC_FUNC_IMPL(__imp__sub_831DBF7C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x831dbfb4
	goto loc_831DBFB4;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831DBFB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7570
	ctx.lr = 0x831DBFBC;
	sub_831E7570(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBF9C"))) PPC_WEAK_FUNC(sub_831DBF9C);
PPC_FUNC_IMPL(__imp__sub_831DBF9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7570
	ctx.lr = 0x831DBFBC;
	sub_831E7570(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DBFD4"))) PPC_WEAK_FUNC(sub_831DBFD4);
PPC_FUNC_IMPL(__imp__sub_831DBFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DBFD8"))) PPC_WEAK_FUNC(sub_831DBFD8);
PPC_FUNC_IMPL(__imp__sub_831DBFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10400(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10400);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831DBFE8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831dc018
	if (!cr6.eq) goto loc_831DC018;
	// bl 0x831d3050
	ctx.lr = 0x831DC004;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dc0f0
	goto loc_831DC0F0;
loc_831DC018:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x831dc030
	if (cr6.lt) goto loc_831DC030;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x831dc048
	if (cr6.lt) goto loc_831DC048;
loc_831DC030:
	// bl 0x831d3050
	ctx.lr = 0x831DC034;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DC040;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc0f0
	goto loc_831DC0F0;
loc_831DC048:
	// srawi r11,r27,5
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,23808
	ctx.r29.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// mulli r30,r11,72
	ctx.r30.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc030
	if (cr0.eq) goto loc_831DC030;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e7470
	ctx.lr = 0x831DC07C;
	sub_831E7470(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc0cc
	if (cr0.eq) goto loc_831DC0CC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e73b0
	ctx.lr = 0x831DC09C;
	sub_831E73B0(ctx, base);
	// bl 0x832d4820
	ctx.lr = 0x831DC0A0;
	sub_832D4820(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831dc0b4
	if (!cr0.eq) goto loc_831DC0B4;
	// bl 0x82417100
	ctx.lr = 0x831DC0AC;
	sub_82417100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831dc0b8
	goto loc_831DC0B8;
loc_831DC0B4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831DC0B8:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831dc0e0
	if (cr6.eq) goto loc_831DC0E0;
	// bl 0x831d3088
	ctx.lr = 0x831DC0C8;
	sub_831D3088(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_831DC0CC:
	// bl 0x831d3050
	ctx.lr = 0x831DC0D0;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_831DC0E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x831dc118
	ctx.lr = 0x831DC0EC;
	sub_831DC118(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831DC0F0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DBFE0"))) PPC_WEAK_FUNC(sub_831DBFE0);
PPC_FUNC_IMPL(__imp__sub_831DBFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831DBFE8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831dc018
	if (!cr6.eq) goto loc_831DC018;
	// bl 0x831d3050
	ctx.lr = 0x831DC004;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dc0f0
	goto loc_831DC0F0;
loc_831DC018:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x831dc030
	if (cr6.lt) goto loc_831DC030;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x831dc048
	if (cr6.lt) goto loc_831DC048;
loc_831DC030:
	// bl 0x831d3050
	ctx.lr = 0x831DC034;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DC040;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc0f0
	goto loc_831DC0F0;
loc_831DC048:
	// srawi r11,r27,5
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,23808
	ctx.r29.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// mulli r30,r11,72
	ctx.r30.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc030
	if (cr0.eq) goto loc_831DC030;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e7470
	ctx.lr = 0x831DC07C;
	sub_831E7470(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc0cc
	if (cr0.eq) goto loc_831DC0CC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e73b0
	ctx.lr = 0x831DC09C;
	sub_831E73B0(ctx, base);
	// bl 0x832d4820
	ctx.lr = 0x831DC0A0;
	sub_832D4820(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831dc0b4
	if (!cr0.eq) goto loc_831DC0B4;
	// bl 0x82417100
	ctx.lr = 0x831DC0AC;
	sub_82417100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831dc0b8
	goto loc_831DC0B8;
loc_831DC0B4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831DC0B8:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831dc0e0
	if (cr6.eq) goto loc_831DC0E0;
	// bl 0x831d3088
	ctx.lr = 0x831DC0C8;
	sub_831D3088(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_831DC0CC:
	// bl 0x831d3050
	ctx.lr = 0x831DC0D0;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_831DC0E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x831dc118
	ctx.lr = 0x831DC0EC;
	sub_831DC118(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831DC0F0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC0F8"))) PPC_WEAK_FUNC(sub_831DC0F8);
PPC_FUNC_IMPL(__imp__sub_831DC0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,164(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x831dc130
	goto loc_831DC130;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831DC130:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e7570
	ctx.lr = 0x831DC138;
	sub_831E7570(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC118"))) PPC_WEAK_FUNC(sub_831DC118);
PPC_FUNC_IMPL(__imp__sub_831DC118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e7570
	ctx.lr = 0x831DC138;
	sub_831E7570(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC150"))) PPC_WEAK_FUNC(sub_831DC150);
PPC_FUNC_IMPL(__imp__sub_831DC150) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831dc1a4
	if (cr0.eq) goto loc_831DC1A4;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc1a4
	if (cr0.eq) goto loc_831DC1A4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x831cf100
	ctx.lr = 0x831DC184;
	sub_831CF100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831DC1A4:
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

__attribute__((alias("__imp__sub_831DC1B8"))) PPC_WEAK_FUNC(sub_831DC1B8);
PPC_FUNC_IMPL(__imp__sub_831DC1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831DC1C0;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4272(r1)
	ea = -4272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831db880
	ctx.lr = 0x831DC1D0;
	sub_831DB880(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x831dc1e8
	if (!cr6.lt) goto loc_831DC1E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831DC1E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dc6c0
	ctx.lr = 0x831DC1F8;
	sub_831DC6C0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bge cr6,0x831dc20c
	if (!cr6.lt) goto loc_831DC20C;
loc_831DC204:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc500
	goto loc_831DC500;
loc_831DC20C:
	// srawi r11,r29,5
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r10,23808
	ctx.r27.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// mulli r28,r11,72
	ctx.r28.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r9,r11,264
	ctx.r9.u64 = ctx.r11.u64 & 264;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r9,r9,24
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// srawi r9,r9,25
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 25;
	// extsb r24,r9
	ctx.r24.s64 = ctx.r9.s8;
	// bne 0x831dc258
	if (!cr0.eq) goto loc_831DC258;
	// lwa r11,4(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 4));
	// subf r3,r11,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r11.s64;
	// b 0x831dc500
	goto loc_831DC500;
loc_831DC258:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r25,r8,r7
	ctx.r25.s64 = ctx.r7.s64 - ctx.r8.s64;
	// beq 0x831dc3d8
	if (cr0.eq) goto loc_831DC3D8;
	// extsb r9,r24
	ctx.r9.s64 = ctx.r24.s8;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x831dc390
	if (!cr6.eq) goto loc_831DC390;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831dc390
	if (cr6.eq) goto loc_831DC390;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r25,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831dc29c
	if (!cr6.eq) goto loc_831DC29C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x831dc500
	goto loc_831DC500;
loc_831DC29C:
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dc6c0
	ctx.lr = 0x831DC2AC;
	sub_831DC6C0(ctx, base);
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// cmpd cr6,r3,r10
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r10.s64, xer);
	// bne cr6,0x831dc204
	if (!cr6.eq) goto loc_831DC204;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x832d1dd0
	ctx.lr = 0x831DC2DC;
	sub_832D1DD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dc204
	if (cr0.eq) goto loc_831DC204;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dc6c0
	ctx.lr = 0x831DC2F4;
	sub_831DC6C0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// blt cr6,0x831dc204
	if (cr6.lt) goto loc_831DC204;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bgt cr6,0x831dc204
	if (cr6.gt) goto loc_831DC204;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831dc37c
	if (cr6.eq) goto loc_831DC37C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r8,r10,3584
	ctx.r8.s64 = ctx.r10.s64 + 3584;
loc_831DC324:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x831dc37c
	if (!cr6.lt) goto loc_831DC37C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x831dc360
	if (!cr6.eq) goto loc_831DC360;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x831dc370
	if (!cr6.lt) goto loc_831DC370;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// bne cr6,0x831dc370
	if (!cr6.eq) goto loc_831DC370;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x831dc370
	goto loc_831DC370;
loc_831DC360:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_831DC370:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831dc324
	if (!cr6.eq) goto loc_831DC324;
loc_831DC37C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x831dc500
	goto loc_831DC500;
loc_831DC390:
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831dc3c8
	if (cr0.eq) goto loc_831DC3C8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x831dc3c8
	if (!cr6.lt) goto loc_831DC3C8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_831DC3AC:
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r5,10
	cr6.compare<uint32_t>(ctx.r5.u32, 10, xer);
	// bne cr6,0x831dc3bc
	if (!cr6.eq) goto loc_831DC3BC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_831DC3BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x831dc3ac
	if (cr6.lt) goto loc_831DC3AC;
loc_831DC3C8:
	// cmpdi cr6,r23,0
	cr6.compare<int64_t>(ctx.r23.s64, 0, xer);
	// bne cr6,0x831dc3f8
	if (!cr6.eq) goto loc_831DC3F8;
	// clrldi r3,r25,32
	ctx.r3.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// b 0x831dc500
	goto loc_831DC500;
loc_831DC3D8:
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831dc3c8
	if (!cr0.eq) goto loc_831DC3C8;
	// bl 0x831d3050
	ctx.lr = 0x831DC3E4;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dc500
	goto loc_831DC500;
loc_831DC3F8:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc4e8
	if (cr0.eq) goto loc_831DC4E8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x831dc414
	if (!cr6.eq) goto loc_831DC414;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x831dc4e8
	goto loc_831DC4E8;
loc_831DC414:
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq 0x831dc4d0
	if (cr0.eq) goto loc_831DC4D0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dc6c0
	ctx.lr = 0x831DC438;
	sub_831DC6C0(ctx, base);
	// cmpd cr6,r3,r23
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r23.s64, xer);
	// bne cr6,0x831dc47c
	if (!cr6.eq) goto loc_831DC47C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x831dc470
	if (!cr6.lt) goto loc_831DC470;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831DC458:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x831dc468
	if (!cr6.eq) goto loc_831DC468;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831DC468:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x831dc458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831DC458;
loc_831DC470:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// b 0x831dc4c8
	goto loc_831DC4C8;
loc_831DC47C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dc6c0
	ctx.lr = 0x831DC48C;
	sub_831DC6C0(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// blt cr6,0x831dc204
	if (cr6.lt) goto loc_831DC204;
	// cmplwi cr6,r30,512
	cr6.compare<uint32_t>(ctx.r30.u32, 512, xer);
	// bgt cr6,0x831dc4b4
	if (cr6.gt) goto loc_831DC4B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831dc4b4
	if (cr0.eq) goto loc_831DC4B4;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r30,512
	ctx.r30.s64 = 512;
	// beq 0x831dc4b8
	if (cr0.eq) goto loc_831DC4B8;
loc_831DC4B4:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_831DC4B8:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
loc_831DC4C8:
	// beq 0x831dc4d0
	if (cr0.eq) goto loc_831DC4D0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831DC4D0:
	// extsb r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831dc4e0
	if (!cr6.eq) goto loc_831DC4E0;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
loc_831DC4E0:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf r23,r11,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r11.s64;
loc_831DC4E8:
	// extsb r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831dc4f8
	if (!cr6.eq) goto loc_831DC4F8;
	// rlwinm r25,r25,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
loc_831DC4F8:
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_831DC500:
	// addi r1,r1,4272
	ctx.r1.s64 = ctx.r1.s64 + 4272;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC508"))) PPC_WEAK_FUNC(sub_831DC508);
PPC_FUNC_IMPL(__imp__sub_831DC508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10424(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10424);
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
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dc554
	if (!cr0.eq) goto loc_831DC554;
	// bl 0x831d3050
	ctx.lr = 0x831DC540;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DC54C;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc57c
	goto loc_831DC57C;
loc_831DC554:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cf9e8
	ctx.lr = 0x831DC55C;
	sub_831CF9E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831dc1b8
	ctx.lr = 0x831DC568;
	sub_831DC1B8(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831dc5b4
	ctx.lr = 0x831DC578;
	sub_831DC5B4(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
loc_831DC57C:
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

__attribute__((alias("__imp__sub_831DC510"))) PPC_WEAK_FUNC(sub_831DC510);
PPC_FUNC_IMPL(__imp__sub_831DC510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dc554
	if (!cr0.eq) goto loc_831DC554;
	// bl 0x831d3050
	ctx.lr = 0x831DC540;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DC54C;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc57c
	goto loc_831DC57C;
loc_831DC554:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cf9e8
	ctx.lr = 0x831DC55C;
	sub_831CF9E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831dc1b8
	ctx.lr = 0x831DC568;
	sub_831DC1B8(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831dc5b4
	ctx.lr = 0x831DC578;
	sub_831DC5B4(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
loc_831DC57C:
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

__attribute__((alias("__imp__sub_831DC594"))) PPC_WEAK_FUNC(sub_831DC594);
PPC_FUNC_IMPL(__imp__sub_831DC594) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x831dc5cc
	goto loc_831DC5CC;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831DC5CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cfaa8
	ctx.lr = 0x831DC5D4;
	sub_831CFAA8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC5B4"))) PPC_WEAK_FUNC(sub_831DC5B4);
PPC_FUNC_IMPL(__imp__sub_831DC5B4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cfaa8
	ctx.lr = 0x831DC5D4;
	sub_831CFAA8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC5EC"))) PPC_WEAK_FUNC(sub_831DC5EC);
PPC_FUNC_IMPL(__imp__sub_831DC5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DC5F0"))) PPC_WEAK_FUNC(sub_831DC5F0);
PPC_FUNC_IMPL(__imp__sub_831DC5F0) {
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
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831e73b0
	ctx.lr = 0x831DC614;
	sub_831E73B0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831dc634
	if (!cr6.eq) goto loc_831DC634;
	// bl 0x831d3050
	ctx.lr = 0x831DC620;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dc6a0
	goto loc_831DC6A0;
loc_831DC634:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x832d4860
	ctx.lr = 0x831DC644;
	sub_832D4860(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831dc668
	if (!cr6.eq) goto loc_831DC668;
	// bl 0x82417100
	ctx.lr = 0x831DC654;
	sub_82417100(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831dc668
	if (cr0.eq) goto loc_831DC668;
	// bl 0x831d30c0
	ctx.lr = 0x831DC660;
	sub_831D30C0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc6a0
	goto loc_831DC6A0;
loc_831DC668:
	// srawi r11,r31,5
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_831DC6A0:
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

__attribute__((alias("__imp__sub_831DC6B8"))) PPC_WEAK_FUNC(sub_831DC6B8);
PPC_FUNC_IMPL(__imp__sub_831DC6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10448(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10448);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831DC6C8;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831dc714
	if (!cr6.eq) goto loc_831DC714;
	// bl 0x831d3088
	ctx.lr = 0x831DC6F4;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DC700;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dc7e0
	goto loc_831DC7E0;
loc_831DC714:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831dc72c
	if (cr6.lt) goto loc_831DC72C;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831dc750
	if (cr6.lt) goto loc_831DC750;
loc_831DC72C:
	// bl 0x831d3088
	ctx.lr = 0x831DC730;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DC73C;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DC748;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc7e0
	goto loc_831DC7E0;
loc_831DC750:
	// srawi r11,r30,5
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,23808
	ctx.r28.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc72c
	if (cr0.eq) goto loc_831DC72C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831DC784;
	sub_831E7470(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc7b4
	if (cr0.eq) goto loc_831DC7B4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831dc5f0
	ctx.lr = 0x831DC7AC;
	sub_831DC5F0(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// b 0x831dc7d0
	goto loc_831DC7D0;
loc_831DC7B4:
	// bl 0x831d3050
	ctx.lr = 0x831DC7B8;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831DC7C4;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
loc_831DC7D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831dc808
	ctx.lr = 0x831DC7DC;
	sub_831DC808(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
loc_831DC7E0:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC6C0"))) PPC_WEAK_FUNC(sub_831DC6C0);
PPC_FUNC_IMPL(__imp__sub_831DC6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831DC6C8;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831dc714
	if (!cr6.eq) goto loc_831DC714;
	// bl 0x831d3088
	ctx.lr = 0x831DC6F4;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DC700;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dc7e0
	goto loc_831DC7E0;
loc_831DC714:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831dc72c
	if (cr6.lt) goto loc_831DC72C;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831dc750
	if (cr6.lt) goto loc_831DC750;
loc_831DC72C:
	// bl 0x831d3088
	ctx.lr = 0x831DC730;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DC73C;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DC748;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc7e0
	goto loc_831DC7E0;
loc_831DC750:
	// srawi r11,r30,5
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,23808
	ctx.r28.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc72c
	if (cr0.eq) goto loc_831DC72C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831DC784;
	sub_831E7470(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc7b4
	if (cr0.eq) goto loc_831DC7B4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831dc5f0
	ctx.lr = 0x831DC7AC;
	sub_831DC5F0(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// b 0x831dc7d0
	goto loc_831DC7D0;
loc_831DC7B4:
	// bl 0x831d3050
	ctx.lr = 0x831DC7B8;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831DC7C4;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
loc_831DC7D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831dc808
	ctx.lr = 0x831DC7DC;
	sub_831DC808(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
loc_831DC7E0:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC7E8"))) PPC_WEAK_FUNC(sub_831DC7E8);
PPC_FUNC_IMPL(__imp__sub_831DC7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x831dc820
	goto loc_831DC820;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831DC820:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7570
	ctx.lr = 0x831DC828;
	sub_831E7570(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC808"))) PPC_WEAK_FUNC(sub_831DC808);
PPC_FUNC_IMPL(__imp__sub_831DC808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7570
	ctx.lr = 0x831DC828;
	sub_831E7570(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DC840"))) PPC_WEAK_FUNC(sub_831DC840);
PPC_FUNC_IMPL(__imp__sub_831DC840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831DC848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831e73b0
	ctx.lr = 0x831DC854;
	sub_831E73B0(ctx, base);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,23808
	ctx.r29.s64 = ctx.r11.s64 + 23808;
	// beq cr6,0x831dc8cc
	if (cr6.eq) goto loc_831DC8CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x831dc87c
	if (!cr6.eq) goto loc_831DC87C;
	// lbz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 148);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831dc890
	if (!cr0.eq) goto loc_831DC890;
loc_831DC87C:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x831dc8ac
	if (!cr6.eq) goto loc_831DC8AC;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc8ac
	if (cr0.eq) goto loc_831DC8AC;
loc_831DC890:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831e73b0
	ctx.lr = 0x831DC898;
	sub_831E73B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831e73b0
	ctx.lr = 0x831DC8A4;
	sub_831E73B0(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x831dc8cc
	if (cr6.eq) goto loc_831DC8CC;
loc_831DC8AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e73b0
	ctx.lr = 0x831DC8B4;
	sub_831E73B0(ctx, base);
	// bl 0x832d1a68
	ctx.lr = 0x831DC8B8;
	sub_832D1A68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831dc8cc
	if (!cr0.eq) goto loc_831DC8CC;
	// bl 0x82417100
	ctx.lr = 0x831DC8C4;
	sub_82417100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831dc8d0
	goto loc_831DC8D0;
loc_831DC8CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831DC8D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e7318
	ctx.lr = 0x831DC8D8;
	sub_831E7318(ctx, base);
	// srawi r11,r31,5
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x831dc910
	if (cr6.eq) goto loc_831DC910;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d30c0
	ctx.lr = 0x831DC908;
	sub_831D30C0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dc914
	goto loc_831DC914;
loc_831DC910:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831DC914:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC91C"))) PPC_WEAK_FUNC(sub_831DC91C);
PPC_FUNC_IMPL(__imp__sub_831DC91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DC920"))) PPC_WEAK_FUNC(sub_831DC920);
PPC_FUNC_IMPL(__imp__sub_831DC920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10472(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10472);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831DC930;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831dc96c
	if (!cr6.eq) goto loc_831DC96C;
	// bl 0x831d3088
	ctx.lr = 0x831DC94C;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DC958;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dca28
	goto loc_831DCA28;
loc_831DC96C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831dc984
	if (cr6.lt) goto loc_831DC984;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831dc9a8
	if (cr6.lt) goto loc_831DC9A8;
loc_831DC984:
	// bl 0x831d3088
	ctx.lr = 0x831DC988;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DC994;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DC9A0;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dca28
	goto loc_831DCA28;
loc_831DC9A8:
	// srawi r11,r30,5
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,23808
	ctx.r28.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc984
	if (cr0.eq) goto loc_831DC984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831DC9DC;
	sub_831E7470(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dca04
	if (cr0.eq) goto loc_831DCA04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831dc840
	ctx.lr = 0x831DC9FC;
	sub_831DC840(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x831dca18
	goto loc_831DCA18;
loc_831DCA04:
	// bl 0x831d3050
	ctx.lr = 0x831DCA08;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_831DCA18:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x831dca50
	ctx.lr = 0x831DCA24;
	sub_831DCA50(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831DCA28:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DC928"))) PPC_WEAK_FUNC(sub_831DC928);
PPC_FUNC_IMPL(__imp__sub_831DC928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831DC930;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831dc96c
	if (!cr6.eq) goto loc_831DC96C;
	// bl 0x831d3088
	ctx.lr = 0x831DC94C;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DC958;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dca28
	goto loc_831DCA28;
loc_831DC96C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831dc984
	if (cr6.lt) goto loc_831DC984;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831dc9a8
	if (cr6.lt) goto loc_831DC9A8;
loc_831DC984:
	// bl 0x831d3088
	ctx.lr = 0x831DC988;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831DC994;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DC9A0;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dca28
	goto loc_831DCA28;
loc_831DC9A8:
	// srawi r11,r30,5
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,23808
	ctx.r28.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dc984
	if (cr0.eq) goto loc_831DC984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831DC9DC;
	sub_831E7470(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dca04
	if (cr0.eq) goto loc_831DCA04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831dc840
	ctx.lr = 0x831DC9FC;
	sub_831DC840(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x831dca18
	goto loc_831DCA18;
loc_831DCA04:
	// bl 0x831d3050
	ctx.lr = 0x831DCA08;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_831DCA18:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x831dca50
	ctx.lr = 0x831DCA24;
	sub_831DCA50(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831DCA28:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DCA30"))) PPC_WEAK_FUNC(sub_831DCA30);
PPC_FUNC_IMPL(__imp__sub_831DCA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x831dca68
	goto loc_831DCA68;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831DCA68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7570
	ctx.lr = 0x831DCA70;
	sub_831E7570(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DCA50"))) PPC_WEAK_FUNC(sub_831DCA50);
PPC_FUNC_IMPL(__imp__sub_831DCA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7570
	ctx.lr = 0x831DCA70;
	sub_831E7570(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DCA88"))) PPC_WEAK_FUNC(sub_831DCA88);
PPC_FUNC_IMPL(__imp__sub_831DCA88) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831dcab8
	if (cr0.eq) goto loc_831DCAB8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831dcafc
	if (cr6.eq) goto loc_831DCAFC;
loc_831DCAB8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blt 0x831dcae4
	if (cr0.lt) goto loc_831DCAE4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x831dcaec
	goto loc_831DCAEC;
loc_831DCAE4:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831db8c0
	ctx.lr = 0x831DCAEC;
	sub_831DB8C0(ctx, base);
loc_831DCAEC:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831dcafc
	if (!cr6.eq) goto loc_831DCAFC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x831dcb04
	goto loc_831DCB04;
loc_831DCAFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831DCB04:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831DCB1C"))) PPC_WEAK_FUNC(sub_831DCB1C);
PPC_FUNC_IMPL(__imp__sub_831DCB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DCB20"))) PPC_WEAK_FUNC(sub_831DCB20);
PPC_FUNC_IMPL(__imp__sub_831DCB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831DCB28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831d3050
	ctx.lr = 0x831DCB40;
	sub_831D3050(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dcb6c
	if (cr0.eq) goto loc_831DCB6C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831dcb6c
	if (!cr6.eq) goto loc_831DCB6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831dcbe4
	goto loc_831DCBE4;
loc_831DCB6C:
	// bl 0x831d3050
	ctx.lr = 0x831DCB70;
	sub_831D3050(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x831dcbcc
	if (!cr6.gt) goto loc_831DCBCC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_831DCB84:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbzu r3,1(r28)
	ea = 1 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x831dca88
	ctx.lr = 0x831DCB98;
	sub_831DCA88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831dcbc4
	if (!cr6.eq) goto loc_831DCBC4;
	// bl 0x831d3050
	ctx.lr = 0x831DCBA8;
	sub_831D3050(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// bne cr6,0x831dcbcc
	if (!cr6.eq) goto loc_831DCBCC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x831dca88
	ctx.lr = 0x831DCBC4;
	sub_831DCA88(ctx, base);
loc_831DCBC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x831dcb84
	if (cr6.gt) goto loc_831DCB84;
loc_831DCBCC:
	// bl 0x831d3050
	ctx.lr = 0x831DCBD0;
	sub_831D3050(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831dcbe4
	if (!cr6.eq) goto loc_831DCBE4;
	// bl 0x831d3050
	ctx.lr = 0x831DCBE0;
	sub_831D3050(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_831DCBE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DCBEC"))) PPC_WEAK_FUNC(sub_831DCBEC);
PPC_FUNC_IMPL(__imp__sub_831DCBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DCBF0"))) PPC_WEAK_FUNC(sub_831DCBF0);
PPC_FUNC_IMPL(__imp__sub_831DCBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x831DCBF8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// bne cr6,0x831dcc48
	if (!cr6.eq) goto loc_831DCC48;
loc_831DCC30:
	// bl 0x831d3050
	ctx.lr = 0x831DCC34;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DCC40;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dd718
	goto loc_831DD718;
loc_831DCC48:
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dcce4
	if (!cr0.eq) goto loc_831DCCE4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x831db880
	ctx.lr = 0x831DCC5C;
	sub_831DB880(ctx, base);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r11,r11,23808
	ctx.r11.s64 = ctx.r11.s64 + 23808;
	// addi r8,r10,2184
	ctx.r8.s64 = ctx.r10.s64 + 2184;
	// beq cr6,0x831dcc98
	if (cr6.eq) goto loc_831DCC98;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831dcc98
	if (cr6.eq) goto loc_831DCC98;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x831dcc9c
	goto loc_831DCC9C;
loc_831DCC98:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831DCC9C:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831dcc30
	if (!cr0.eq) goto loc_831DCC30;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831dccd4
	if (cr6.eq) goto loc_831DCCD4;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831dccd4
	if (cr6.eq) goto loc_831DCCD4;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831dccd8
	goto loc_831DCCD8;
loc_831DCCD4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831DCCD8:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dcc30
	if (!cr0.eq) goto loc_831DCC30;
loc_831DCCE4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831dcc30
	if (cr6.eq) goto loc_831DCC30;
	// bl 0x831cf870
	ctx.lr = 0x831DCCF0;
	sub_831CF870(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, xer);
	// beq cr6,0x831dd6e4
	if (cr6.eq) goto loc_831DD6E4;
	// bl 0x831cf870
	ctx.lr = 0x831DCD00;
	sub_831CF870(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, xer);
	// beq cr6,0x831dd6e4
	if (cr6.eq) goto loc_831DD6E4;
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// extsb. r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// beq 0x831dd6dc
	if (cr0.eq) goto loc_831DD6DC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r19,r31,-1
	ctx.r19.s64 = ctx.r31.s64 + -1;
	// lis r15,-32222
	ctx.r15.s64 = -2111700992;
	// lis r20,-32222
	ctx.r20.s64 = -2111700992;
	// addi r23,r11,2840
	ctx.r23.s64 = ctx.r11.s64 + 2840;
	// addi r22,r10,2136
	ctx.r22.s64 = ctx.r10.s64 + 2136;
	// addi r17,r9,5664
	ctx.r17.s64 = ctx.r9.s64 + 5664;
loc_831DCD5C:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x831dd6dc
	if (cr6.lt) goto loc_831DD6DC;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// blt cr6,0x831dcd88
	if (cr6.lt) goto loc_831DCD88;
	// cmpwi cr6,r8,120
	cr6.compare<int32_t>(ctx.r8.s32, 120, xer);
	// bgt cr6,0x831dcd88
	if (cr6.gt) goto loc_831DCD88;
	// add r11,r8,r17
	ctx.r11.u64 = ctx.r8.u64 + ctx.r17.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x831dcd8c
	goto loc_831DCD8C;
loc_831DCD88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831DCD8C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r17
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x831dd6c0
	if (cr6.gt) goto loc_831DD6C0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831dcfa4
	if (cr6.eq) goto loc_831DCFA4;
	// bdz 0x831dcdd8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831DCDD8;
	// bdz 0x831dcdf8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831DCDF8;
	// bdz 0x831dce48
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831DCE48;
	// bdz 0x831dce94
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831DCE94;
	// bdz 0x831dce9c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831DCE9C;
	// bdz 0x831dced4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831DCED4;
	// b 0x831dcff0
	goto loc_831DCFF0;
loc_831DCDD8:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCDF8:
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x831dce40
	if (cr6.eq) goto loc_831DCE40;
	// cmpwi cr6,r8,35
	cr6.compare<int32_t>(ctx.r8.s32, 35, xer);
	// beq cr6,0x831dce38
	if (cr6.eq) goto loc_831DCE38;
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// beq cr6,0x831dce30
	if (cr6.eq) goto loc_831DCE30;
	// cmpwi cr6,r8,45
	cr6.compare<int32_t>(ctx.r8.s32, 45, xer);
	// beq cr6,0x831dce28
	if (cr6.eq) goto loc_831DCE28;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// bne cr6,0x831dd6c0
	if (!cr6.eq) goto loc_831DD6C0;
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCE28:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCE30:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCE38:
	// ori r27,r27,128
	ctx.r27.u64 = ctx.r27.u64 | 128;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCE40:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCE48:
	// cmpwi cr6,r8,42
	cr6.compare<int32_t>(ctx.r8.s32, 42, xer);
	// bne cr6,0x831dce7c
	if (!cr6.eq) goto loc_831DCE7C;
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge cr6,0x831dd6c0
	if (!cr6.lt) goto loc_831DD6C0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x831dce8c
	goto loc_831DCE8C;
loc_831DCE7C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_831DCE8C:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCE94:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCE9C:
	// cmpwi cr6,r8,42
	cr6.compare<int32_t>(ctx.r8.s32, 42, xer);
	// bne cr6,0x831dcec4
	if (!cr6.eq) goto loc_831DCEC4;
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x831dd6c0
	if (!cr6.lt) goto loc_831DD6C0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCEC4:
	// mulli r11,r25,10
	ctx.r11.s64 = ctx.r25.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	ctx.r25.s64 = ctx.r11.s64 + -48;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCED4:
	// cmpwi cr6,r8,73
	cr6.compare<int32_t>(ctx.r8.s32, 73, xer);
	// beq cr6,0x831dcf24
	if (cr6.eq) goto loc_831DCF24;
	// cmpwi cr6,r8,104
	cr6.compare<int32_t>(ctx.r8.s32, 104, xer);
	// beq cr6,0x831dcf1c
	if (cr6.eq) goto loc_831DCF1C;
	// cmpwi cr6,r8,108
	cr6.compare<int32_t>(ctx.r8.s32, 108, xer);
	// beq cr6,0x831dcefc
	if (cr6.eq) goto loc_831DCEFC;
	// cmpwi cr6,r8,119
	cr6.compare<int32_t>(ctx.r8.s32, 119, xer);
	// bne cr6,0x831dd6c0
	if (!cr6.eq) goto loc_831DD6C0;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCEFC:
	// lbz r11,1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// bne cr6,0x831dcf14
	if (!cr6.eq) goto loc_831DCF14;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// ori r27,r27,4096
	ctx.r27.u64 = ctx.r27.u64 | 4096;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCF14:
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCF1C:
	// ori r27,r27,32
	ctx.r27.u64 = ctx.r27.u64 | 32;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCF24:
	// lbz r11,1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(ctx.r11.s32, 54, xer);
	// bne cr6,0x831dcf4c
	if (!cr6.eq) goto loc_831DCF4C;
	// lbz r10,2(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x831dcf4c
	if (!cr6.eq) goto loc_831DCF4C;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// ori r27,r27,32768
	ctx.r27.u64 = ctx.r27.u64 | 32768;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCF4C:
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// bne cr6,0x831dcf6c
	if (!cr6.eq) goto loc_831DCF6C;
	// lbz r10,2(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x831dcf6c
	if (!cr6.eq) goto loc_831DCF6C;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCF6C:
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// beq cr6,0x831dd6c0
	if (cr6.eq) goto loc_831DD6C0;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(ctx.r11.s32, 105, xer);
	// beq cr6,0x831dd6c0
	if (cr6.eq) goto loc_831DD6C0;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(ctx.r11.s32, 111, xer);
	// beq cr6,0x831dd6c0
	if (cr6.eq) goto loc_831DD6C0;
	// cmpwi cr6,r11,117
	cr6.compare<int32_t>(ctx.r11.s32, 117, xer);
	// beq cr6,0x831dd6c0
	if (cr6.eq) goto loc_831DD6C0;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x831dd6c0
	if (cr6.eq) goto loc_831DD6C0;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x831dd6c0
	if (cr6.eq) goto loc_831DD6C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_831DCFA4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// li r16,0
	ctx.r16.s64 = 0;
	// bl 0x831e23d0
	ctx.lr = 0x831DCFB4;
	sub_831E23D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dcfd8
	if (cr0.eq) goto loc_831DCFD8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dca88
	ctx.lr = 0x831DCFCC;
	sub_831DCA88(ctx, base);
	// lbzu r29,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq 0x831dcc30
	if (cr0.eq) goto loc_831DCC30;
loc_831DCFD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dca88
	ctx.lr = 0x831DCFE8;
	sub_831DCA88(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x831dd6c0
	goto loc_831DD6C0;
loc_831DCFF0:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bgt cr6,0x831dd4f0
	if (cr6.gt) goto loc_831DD4F0;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,5760
	ctx.r12.s64 = ctx.r12.s64 + 5760;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31970
	ctx.r12.s64 = -2095185920;
	// addi r12,r12,-12252
	ctx.r12.s64 = ctx.r12.s64 + -12252;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831DD200;
	case 1:
		goto loc_831DD4F0;
	case 2:
		goto loc_831DD024;
	case 3:
		goto loc_831DD4F0;
	case 4:
		goto loc_831DD200;
	case 5:
		goto loc_831DD4F0;
	case 6:
		goto loc_831DD200;
	case 7:
		goto loc_831DD4F0;
	case 8:
		goto loc_831DD4F0;
	case 9:
		goto loc_831DD4F0;
	case 10:
		goto loc_831DD4F0;
	case 11:
		goto loc_831DD4F0;
	case 12:
		goto loc_831DD4F0;
	case 13:
		goto loc_831DD4F0;
	case 14:
		goto loc_831DD4F0;
	case 15:
		goto loc_831DD4F0;
	case 16:
		goto loc_831DD4F0;
	case 17:
		goto loc_831DD4F0;
	case 18:
		goto loc_831DD10C;
	case 19:
		goto loc_831DD4F0;
	case 20:
		goto loc_831DD4F0;
	case 21:
		goto loc_831DD4F0;
	case 22:
		goto loc_831DD4F0;
	case 23:
		goto loc_831DD340;
	case 24:
		goto loc_831DD4F0;
	case 25:
		goto loc_831DD090;
	case 26:
		goto loc_831DD4F0;
	case 27:
		goto loc_831DD4F0;
	case 28:
		goto loc_831DD4F0;
	case 29:
		goto loc_831DD4F0;
	case 30:
		goto loc_831DD4F0;
	case 31:
		goto loc_831DD4F0;
	case 32:
		goto loc_831DD20C;
	case 33:
		goto loc_831DD4F0;
	case 34:
		goto loc_831DD034;
	case 35:
		goto loc_831DD330;
	case 36:
		goto loc_831DD20C;
	case 37:
		goto loc_831DD20C;
	case 38:
		goto loc_831DD20C;
	case 39:
		goto loc_831DD4F0;
	case 40:
		goto loc_831DD330;
	case 41:
		goto loc_831DD4F0;
	case 42:
		goto loc_831DD4F0;
	case 43:
		goto loc_831DD4F0;
	case 44:
		goto loc_831DD4F0;
	case 45:
		goto loc_831DD1C4;
	case 46:
		goto loc_831DD378;
	case 47:
		goto loc_831DD33C;
	case 48:
		goto loc_831DD4F0;
	case 49:
		goto loc_831DD4F0;
	case 50:
		goto loc_831DD11C;
	case 51:
		goto loc_831DD4F0;
	case 52:
		goto loc_831DD334;
	case 53:
		goto loc_831DD4F0;
	case 54:
		goto loc_831DD4F0;
	case 55:
		goto loc_831DD348;
	default:
		return;
	}
loc_831DD024:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dd034
	if (!cr0.eq) goto loc_831DD034;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_831DD034:
	// andi. r11,r27,2064
	ctx.r11.u64 = ctx.r27.u64 & 2064;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// beq 0x831dd074
	if (cr0.eq) goto loc_831DD074;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831d8898
	ctx.lr = 0x831DD060;
	sub_831D8898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dd084
	if (cr0.eq) goto loc_831DD084;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x831dd084
	goto loc_831DD084;
loc_831DD074:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_831DD084:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// b 0x831dd4f0
	goto loc_831DD4F0;
loc_831DD090:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831dd0e0
	if (cr6.eq) goto loc_831DD0E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831dd0e0
	if (cr6.eq) goto loc_831DD0E0;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq 0x831dd0d4
	if (cr0.eq) goto loc_831DD0D4;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,1
	ctx.r16.s64 = 1;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// b 0x831dd4ec
	goto loc_831DD4EC;
loc_831DD0D4:
	// lha r6,0(r11)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x831dd4ec
	goto loc_831DD4EC;
loc_831DD0E0:
	// lwz r28,5656(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 5656);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_831DD0EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831dd0ec
	if (!cr6.eq) goto loc_831DD0EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_831DD100:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x831dd4ec
	goto loc_831DD4EC;
loc_831DD10C:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dd11c
	if (!cr0.eq) goto loc_831DD11C;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_831DD11C:
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(ctx.r25.s32, -1, xer);
	// bne cr6,0x831dd130
	if (!cr6.eq) goto loc_831DD130;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x831dd134
	goto loc_831DD134;
loc_831DD130:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_831DD134:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = ctx.r27.u64 & 2064;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq 0x831dd190
	if (cr0.eq) goto loc_831DD190;
	// bne cr6,0x831dd15c
	if (!cr6.eq) goto loc_831DD15C;
	// lwz r28,5660(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5660);
loc_831DD15C:
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x831dd17c
	goto loc_831DD17C;
loc_831DD168:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x831dd184
	if (cr0.eq) goto loc_831DD184;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_831DD17C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831dd168
	if (!cr6.eq) goto loc_831DD168;
loc_831DD184:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r6,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// b 0x831dd4ec
	goto loc_831DD4EC;
loc_831DD190:
	// bne cr6,0x831dd198
	if (!cr6.eq) goto loc_831DD198;
	// lwz r28,5656(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 5656);
loc_831DD198:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x831dd1b4
	goto loc_831DD1B4;
loc_831DD1A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x831dd1bc
	if (cr0.eq) goto loc_831DD1BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831DD1B4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831dd1a0
	if (!cr6.eq) goto loc_831DD1A0;
loc_831DD1BC:
	// subf r6,r28,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x831dd4ec
	goto loc_831DD4EC;
loc_831DD1C4:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x831e7a18
	ctx.lr = 0x831DD1D8;
	sub_831E7A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dcc30
	if (cr0.eq) goto loc_831DCC30;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd1f0
	if (cr0.eq) goto loc_831DD1F0;
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// b 0x831dd1f4
	goto loc_831DD1F4;
loc_831DD1F0:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_831DD1F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x831dd6ac
	goto loc_831DD6AC;
loc_831DD200:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r21,1
	ctx.r21.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DD20C:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x831dd228
	if (!cr6.lt) goto loc_831DD228;
	// li r25,6
	ctx.r25.s64 = 6;
	// b 0x831dd278
	goto loc_831DD278;
loc_831DD228:
	// bne cr6,0x831dd240
	if (!cr6.eq) goto loc_831DD240;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// bne cr6,0x831dd278
	if (!cr6.eq) goto loc_831DD278;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x831dd278
	goto loc_831DD278;
loc_831DD240:
	// cmpwi cr6,r25,512
	cr6.compare<int32_t>(ctx.r25.s32, 512, xer);
	// ble cr6,0x831dd24c
	if (!cr6.gt) goto loc_831DD24C;
	// li r25,512
	ctx.r25.s64 = 512;
loc_831DD24C:
	// cmpwi cr6,r25,163
	cr6.compare<int32_t>(ctx.r25.s32, 163, xer);
	// ble cr6,0x831dd278
	if (!cr6.gt) goto loc_831DD278;
	// addi r31,r25,349
	ctx.r31.s64 = ctx.r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x831DD260;
	sub_831D2BF8(ctx, base);
	// mr. r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r14.s32, 0, xer);
	// beq 0x831dd274
	if (cr0.eq) goto loc_831DD274;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x831dd278
	goto loc_831DD278;
loc_831DD274:
	// li r25,163
	ctx.r25.s64 = 163;
loc_831DD278:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// extsb r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x831DD2B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r30,r27,0,24,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x831dd2dc
	if (cr0.eq) goto loc_831DD2DC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x831dd2dc
	if (!cr6.eq) goto loc_831DD2DC;
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DD2DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831DD2DC:
	// cmpwi cr6,r31,103
	cr6.compare<int32_t>(ctx.r31.s32, 103, xer);
	// bne cr6,0x831dd300
	if (!cr6.eq) goto loc_831DD300;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831dd300
	if (!cr6.eq) goto loc_831DD300;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831DD300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831DD300:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x831dd314
	if (!cr6.eq) goto loc_831DD314;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_831DD314:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831DD318:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831dd318
	if (!cr6.eq) goto loc_831DD318;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x831dd100
	goto loc_831DD100;
loc_831DD330:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
loc_831DD334:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x831dd388
	goto loc_831DD388;
loc_831DD33C:
	// li r25,8
	ctx.r25.s64 = 8;
loc_831DD340:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x831dd34c
	goto loc_831DD34C;
loc_831DD348:
	// li r11,39
	ctx.r11.s64 = 39;
loc_831DD34C:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x831dd388
	if (cr0.eq) goto loc_831DD388;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x831dd388
	goto loc_831DD388;
loc_831DD378:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x831dd388
	if (cr0.eq) goto loc_831DD388;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_831DD388:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dd398
	if (!cr0.eq) goto loc_831DD398;
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd3ac
	if (cr0.eq) goto loc_831DD3AC;
loc_831DD398:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x831dd3fc
	goto loc_831DD3FC;
loc_831DD3AC:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd3dc
	if (cr0.eq) goto loc_831DD3DC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x831dd3d4
	if (cr0.eq) goto loc_831DD3D4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x831dd3fc
	goto loc_831DD3FC;
loc_831DD3D4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x831dd3fc
	goto loc_831DD3FC;
loc_831DD3DC:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// beq 0x831dd3f8
	if (cr0.eq) goto loc_831DD3F8;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x831dd3fc
	goto loc_831DD3FC;
loc_831DD3F8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831DD3FC:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831dd414
	if (cr0.eq) goto loc_831DD414;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x831dd414
	if (!cr6.lt) goto loc_831DD414;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
loc_831DD414:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831dd428
	if (!cr0.eq) goto loc_831DD428;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831dd428
	if (!cr0.eq) goto loc_831DD428;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_831DD428:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x831dd438
	if (!cr6.lt) goto loc_831DD438;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x831dd448
	goto loc_831DD448;
loc_831DD438:
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	cr6.compare<int32_t>(ctx.r25.s32, 512, xer);
	// ble cr6,0x831dd448
	if (!cr6.gt) goto loc_831DD448;
	// li r25,512
	ctx.r25.s64 = 512;
loc_831DD448:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x831dd458
	if (!cr6.eq) goto loc_831DD458;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_831DD458:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_831DD45C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// bgt cr6,0x831dd470
	if (cr6.gt) goto loc_831DD470;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x831dd4b4
	if (cr6.eq) goto loc_831DD4B4;
loc_831DD470:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// tdllei r10,0
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// tdllei r10,0
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// ble cr6,0x831dd4a4
	if (!cr6.gt) goto loc_831DD4A4;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_831DD4A4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x831dd45c
	goto loc_831DD45C;
loc_831DD4B4:
	// addi r11,r1,655
	ctx.r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r28,r9,1
	ctx.r28.s64 = ctx.r9.s64 + 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq 0x831dd4f0
	if (cr0.eq) goto loc_831DD4F0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x831dd4e0
	if (cr6.eq) goto loc_831DD4E0;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831dd4f0
	if (cr6.eq) goto loc_831DD4F0;
loc_831DD4E0:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r11,-1(r28)
	ea = -1 + ctx.r28.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
loc_831DD4EC:
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_831DD4F0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831dd6ac
	if (!cr6.eq) goto loc_831DD6AC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd540
	if (cr0.eq) goto loc_831DD540;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd514
	if (cr0.eq) goto loc_831DD514;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x831dd520
	goto loc_831DD520;
loc_831DD514:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd530
	if (cr0.eq) goto loc_831DD530;
	// li r11,43
	ctx.r11.s64 = 43;
loc_831DD520:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// b 0x831dd544
	goto loc_831DD544;
loc_831DD530:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd540
	if (cr0.eq) goto loc_831DD540;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x831dd520
	goto loc_831DD520;
loc_831DD540:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_831DD544:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bne 0x831dd58c
	if (!cr0.eq) goto loc_831DD58C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x831dd58c
	if (!cr6.gt) goto loc_831DD58C;
loc_831DD564:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831dca88
	ctx.lr = 0x831DD578;
	sub_831DCA88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831dd58c
	if (cr6.eq) goto loc_831DD58C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831dd564
	if (cr6.gt) goto loc_831DD564;
loc_831DD58C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831dcb20
	ctx.lr = 0x831DD5A0;
	sub_831DCB20(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd5e4
	if (cr0.eq) goto loc_831DD5E4;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dd5e4
	if (!cr0.eq) goto loc_831DD5E4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x831dd5e4
	if (!cr6.gt) goto loc_831DD5E4;
loc_831DD5BC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831dca88
	ctx.lr = 0x831DD5D0;
	sub_831DCA88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831dd5e4
	if (cr6.eq) goto loc_831DD5E4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831dd5bc
	if (cr6.gt) goto loc_831DD5BC;
loc_831DD5E4:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831dd654
	if (cr6.eq) goto loc_831DD654;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x831dd654
	if (!cr6.gt) goto loc_831DD654;
	// addi r30,r28,-2
	ctx.r30.s64 = ctx.r28.s64 + -2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_831DD600:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhzu r6,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831d8898
	ctx.lr = 0x831DD618;
	sub_831D8898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831dd648
	if (!cr0.eq) goto loc_831DD648;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x831dd648
	if (cr6.eq) goto loc_831DD648;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x831dcb20
	ctx.lr = 0x831DD63C;
	sub_831DCB20(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x831dd600
	if (!cr6.eq) goto loc_831DD600;
	// b 0x831dd664
	goto loc_831DD664;
loc_831DD648:
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// b 0x831dd668
	goto loc_831DD668;
loc_831DD654:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831dcb20
	ctx.lr = 0x831DD664;
	sub_831DCB20(ctx, base);
loc_831DD664:
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831DD668:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x831dd6ac
	if (cr6.lt) goto loc_831DD6AC;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dd6ac
	if (cr0.eq) goto loc_831DD6AC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x831dd6ac
	if (!cr6.gt) goto loc_831DD6AC;
loc_831DD684:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831dca88
	ctx.lr = 0x831DD698;
	sub_831DCA88(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(ctx.r24.s32, -1, xer);
	// beq cr6,0x831dd6ac
	if (cr6.eq) goto loc_831DD6AC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831dd684
	if (cr6.gt) goto loc_831DD684;
loc_831DD6AC:
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(ctx.r14.u32, 0, xer);
	// beq cr6,0x831dd6c0
	if (cr6.eq) goto loc_831DD6C0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x831cf100
	ctx.lr = 0x831DD6BC;
	sub_831CF100(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
loc_831DD6C0:
	// lbz r29,1(r19)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// extsb. r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x831dd6dc
	if (cr0.eq) goto loc_831DD6DC;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x831dcd5c
	goto loc_831DCD5C;
loc_831DD6DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x831dd718
	goto loc_831DD718;
loc_831DD6E4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x831e7908
	ctx.lr = 0x831DD6F8;
	sub_831E7908(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831dd70c
	if (!cr6.eq) goto loc_831DD70C;
	// li r31,511
	ctx.r31.s64 = 511;
	// stb r30,1167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1167, ctx.r30.u8);
loc_831DD70C:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x832d30b8
	ctx.lr = 0x831DD714;
	sub_832D30B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831DD718:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DD720"))) PPC_WEAK_FUNC(sub_831DD720);
PPC_FUNC_IMPL(__imp__sub_831DD720) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// lfd f4,6720(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r12.u32 + 6720);
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// lfd f5,6728(r12)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r12.u32 + 6728);
	// fcmpu cr0,f1,f4
	cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x831dd760
	if (cr0.eq) goto loc_831DD760;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr0,f6,f5
	cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x831dd760
	if (!cr0.lt) goto loc_831DD760;
	// fcmpu cr0,f1,f4
	cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x831dd758
	if (cr0.lt) goto loc_831DD758;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x831dd760
	goto loc_831DD760;
loc_831DD758:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_831DD760:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD764"))) PPC_WEAK_FUNC(sub_831DD764);
PPC_FUNC_IMPL(__imp__sub_831DD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD768"))) PPC_WEAK_FUNC(sub_831DD768);
PPC_FUNC_IMPL(__imp__sub_831DD768) {
	PPC_FUNC_PROLOGUE();
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,9000(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9000);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DD79C"))) PPC_WEAK_FUNC(sub_831DD79C);
PPC_FUNC_IMPL(__imp__sub_831DD79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DD7A0"))) PPC_WEAK_FUNC(sub_831DD7A0);
PPC_FUNC_IMPL(__imp__sub_831DD7A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831dd7dc
	if (!cr6.eq) goto loc_831DD7DC;
	// bl 0x831d3050
	ctx.lr = 0x831DD7C8;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DD7D4;
	sub_831CF000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831dd850
	goto loc_831DD850;
loc_831DD7DC:
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x831dd800
	if (!cr6.gt) goto loc_831DD800;
	// bl 0x831d3050
	ctx.lr = 0x831DD7EC;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831dd850
	goto loc_831DD850;
loc_831DD800:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831dd80c
	if (!cr6.eq) goto loc_831DD80C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_831DD80C:
	// bl 0x8241a538
	ctx.lr = 0x831DD810;
	sub_8241A538(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82418200
	ctx.lr = 0x831DD81C;
	sub_82418200(ctx, base);
	// bl 0x8241a538
	ctx.lr = 0x831DD820;
	sub_8241A538(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82419b78
	ctx.lr = 0x831DD830;
	sub_82419B78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831dd84c
	if (!cr0.eq) goto loc_831DD84C;
	// bl 0x831d3050
	ctx.lr = 0x831DD83C;
	sub_831D3050(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82417100
	ctx.lr = 0x831DD844;
	sub_82417100(ctx, base);
	// bl 0x831d2fe0
	ctx.lr = 0x831DD848;
	sub_831D2FE0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_831DD84C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831DD850:
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

__attribute__((alias("__imp__sub_831DD868"))) PPC_WEAK_FUNC(sub_831DD868);
PPC_FUNC_IMPL(__imp__sub_831DD868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x831DD870;
	__savegprlr_14(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r4,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r4.u32);
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// sth r22,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r22.u16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x831dd8c0
	if (!cr6.eq) goto loc_831DD8C0;
loc_831DD8A8:
	// bl 0x831d3050
	ctx.lr = 0x831DD8AC;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DD8B8;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831deaac
	goto loc_831DEAAC;
loc_831DD8C0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831dd8a8
	if (cr6.eq) goto loc_831DD8A8;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dd964
	if (!cr0.eq) goto loc_831DD964;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db880
	ctx.lr = 0x831DD8DC;
	sub_831DB880(ctx, base);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r11,r11,23808
	ctx.r11.s64 = ctx.r11.s64 + 23808;
	// addi r8,r10,2184
	ctx.r8.s64 = ctx.r10.s64 + 2184;
	// beq cr6,0x831dd918
	if (cr6.eq) goto loc_831DD918;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831dd918
	if (cr6.eq) goto loc_831DD918;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x831dd91c
	goto loc_831DD91C;
loc_831DD918:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831DD91C:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831dd8a8
	if (!cr0.eq) goto loc_831DD8A8;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831dd954
	if (cr6.eq) goto loc_831DD954;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831dd954
	if (cr6.eq) goto loc_831DD954;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831dd958
	goto loc_831DD958;
loc_831DD954:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831DD958:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dd8a8
	if (!cr0.eq) goto loc_831DD8A8;
loc_831DD964:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831deaa8
	if (cr0.eq) goto loc_831DEAA8;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r11,r11,2840
	ctx.r11.s64 = ctx.r11.s64 + 2840;
	// addi r10,r10,2136
	ctx.r10.s64 = ctx.r10.s64 + 2136;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_831DD998:
	// bl 0x831d26c0
	ctx.lr = 0x831DD99C;
	sub_831D26C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dda14
	if (cr0.eq) goto loc_831DDA14;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_831DD9A8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831dd9d0
	if (cr0.lt) goto loc_831DD9D0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831dd9dc
	goto loc_831DD9DC;
loc_831DD9D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DD9D8;
	sub_831DB570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831DD9DC:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x831dda00
	if (cr6.eq) goto loc_831DDA00;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x831DD9EC;
	sub_831D26C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831dd9a8
	if (!cr0.eq) goto loc_831DD9A8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DDA00;
	sub_831CF5F0(ctx, base);
loc_831DDA00:
	// lbzu r3,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// bl 0x831d26c0
	ctx.lr = 0x831DDA08;
	sub_831D26C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831dda00
	if (!cr0.eq) goto loc_831DDA00;
	// b 0x831dea38
	goto loc_831DEA38;
loc_831DDA14:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x831de970
	if (!cr6.eq) goto loc_831DE970;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// beq cr6,0x831de954
	if (cr6.eq) goto loc_831DE954;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
loc_831DDA60:
	// lbzu r31,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// bl 0x831d2680
	ctx.lr = 0x831DDA70;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dda8c
	if (cr0.eq) goto loc_831DDA8C;
	// mulli r11,r15,10
	ctx.r11.s64 = ctx.r15.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r15,r11,-48
	ctx.r15.s64 = ctx.r11.s64 + -48;
	// b 0x831ddbc8
	goto loc_831DDBC8;
loc_831DDA8C:
	// cmpwi cr6,r31,78
	cr6.compare<int32_t>(ctx.r31.s32, 78, xer);
	// bgt cr6,0x831ddb4c
	if (cr6.gt) goto loc_831DDB4C;
	// beq cr6,0x831ddbc8
	if (cr6.eq) goto loc_831DDBC8;
	// cmpwi cr6,r31,42
	cr6.compare<int32_t>(ctx.r31.s32, 42, xer);
	// beq cr6,0x831ddb3c
	if (cr6.eq) goto loc_831DDB3C;
	// cmpwi cr6,r31,70
	cr6.compare<int32_t>(ctx.r31.s32, 70, xer);
	// beq cr6,0x831ddbc8
	if (cr6.eq) goto loc_831DDBC8;
	// cmpwi cr6,r31,73
	cr6.compare<int32_t>(ctx.r31.s32, 73, xer);
	// beq cr6,0x831ddac4
	if (cr6.eq) goto loc_831DDAC4;
	// cmpwi cr6,r31,76
	cr6.compare<int32_t>(ctx.r31.s32, 76, xer);
	// bne cr6,0x831ddb64
	if (!cr6.eq) goto loc_831DDB64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x831ddbc4
	goto loc_831DDBC4;
loc_831DDAC4:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bne cr6,0x831ddaf8
	if (!cr6.eq) goto loc_831DDAF8;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// cmplwi cr6,r9,52
	cr6.compare<uint32_t>(ctx.r9.u32, 52, xer);
	// bne cr6,0x831ddaf8
	if (!cr6.eq) goto loc_831DDAF8;
loc_831DDAE4:
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_831DDAEC:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r11,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r11.u32);
	// b 0x831ddbcc
	goto loc_831DDBCC;
loc_831DDAF8:
	// cmplwi cr6,r10,51
	cr6.compare<uint32_t>(ctx.r10.u32, 51, xer);
	// bne cr6,0x831ddb10
	if (!cr6.eq) goto loc_831DDB10;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// beq cr6,0x831ddaec
	if (cr6.eq) goto loc_831DDAEC;
loc_831DDB10:
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// beq cr6,0x831ddbcc
	if (cr6.eq) goto loc_831DDBCC;
	// cmplwi cr6,r10,105
	cr6.compare<uint32_t>(ctx.r10.u32, 105, xer);
	// beq cr6,0x831ddbcc
	if (cr6.eq) goto loc_831DDBCC;
	// cmplwi cr6,r10,111
	cr6.compare<uint32_t>(ctx.r10.u32, 111, xer);
	// beq cr6,0x831ddbcc
	if (cr6.eq) goto loc_831DDBCC;
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// beq cr6,0x831ddbcc
	if (cr6.eq) goto loc_831DDBCC;
	// cmplwi cr6,r10,88
	cr6.compare<uint32_t>(ctx.r10.u32, 88, xer);
	// bne cr6,0x831ddb68
	if (!cr6.eq) goto loc_831DDB68;
	// b 0x831ddbcc
	goto loc_831DDBCC;
loc_831DDB3C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// b 0x831ddbc8
	goto loc_831DDBC8;
loc_831DDB4C:
	// cmpwi cr6,r31,104
	cr6.compare<int32_t>(ctx.r31.s32, 104, xer);
	// beq cr6,0x831ddbb0
	if (cr6.eq) goto loc_831DDBB0;
	// cmpwi cr6,r31,108
	cr6.compare<int32_t>(ctx.r31.s32, 108, xer);
	// beq cr6,0x831ddb78
	if (cr6.eq) goto loc_831DDB78;
	// cmpwi cr6,r31,119
	cr6.compare<int32_t>(ctx.r31.s32, 119, xer);
	// beq cr6,0x831ddb9c
	if (cr6.eq) goto loc_831DDB9C;
loc_831DDB64:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_831DDB68:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// b 0x831ddbcc
	goto loc_831DDBCC;
loc_831DDB78:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,108
	cr6.compare<uint32_t>(ctx.r10.u32, 108, xer);
	// beq cr6,0x831ddae4
	if (cr6.eq) goto loc_831DDAE4;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r16,r11
	ctx.r16.s64 = ctx.r11.s8;
	// b 0x831ddba0
	goto loc_831DDBA0;
loc_831DDB9C:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_831DDBA0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// b 0x831ddbcc
	goto loc_831DDBCC;
loc_831DDBB0:
	// extsb r10,r28
	ctx.r10.s64 = ctx.r28.s8;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
loc_831DDBC4:
	// extsb r16,r11
	ctx.r16.s64 = ctx.r11.s8;
loc_831DDBC8:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_831DDBCC:
	// extsb. r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dda60
	if (cr0.eq) goto loc_831DDA60;
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne 0x831ddc04
	if (!cr0.eq) goto loc_831DDC04;
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x831ddc08
	goto loc_831DDC08;
loc_831DDC04:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_831DDC08:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bne 0x831ddc30
	if (!cr0.eq) goto loc_831DDC30;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(ctx.r11.u32, 83, xer);
	// beq cr6,0x831ddc2c
	if (cr6.eq) goto loc_831DDC2C;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// bne cr6,0x831ddc30
	if (!cr6.eq) goto loc_831DDC30;
loc_831DDC2C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_831DDC30:
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// ori r19,r11,32
	ctx.r19.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r19,110
	cr6.compare<int32_t>(ctx.r19.s32, 110, xer);
	// beq cr6,0x831ddce8
	if (cr6.eq) goto loc_831DDCE8;
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(ctx.r19.s32, 99, xer);
	// beq cr6,0x831ddca8
	if (cr6.eq) goto loc_831DDCA8;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(ctx.r19.s32, 123, xer);
	// beq cr6,0x831ddca8
	if (cr6.eq) goto loc_831DDCA8;
loc_831DDC54:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831ddc7c
	if (cr0.lt) goto loc_831DDC7C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831ddc88
	goto loc_831DDC88;
loc_831DDC7C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DDC84;
	sub_831DB570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831DDC88:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x831ddca0
	if (cr6.eq) goto loc_831DDCA0;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x831DDC98;
	sub_831D26C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ddc54
	if (!cr0.eq) goto loc_831DDC54;
loc_831DDCA0:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// b 0x831ddcdc
	goto loc_831DDCDC;
loc_831DDCA8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831ddcd0
	if (cr0.lt) goto loc_831DDCD0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831ddcdc
	goto loc_831DDCDC;
loc_831DDCD0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DDCD8;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DDCDC:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// beq cr6,0x831dea6c
	if (cr6.eq) goto loc_831DEA6C;
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_831DDCE8:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831ddcf8
	if (cr6.eq) goto loc_831DDCF8;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// beq cr6,0x831dea58
	if (cr6.eq) goto loc_831DEA58;
loc_831DDCF8:
	// addi r11,r19,-99
	ctx.r11.s64 = ctx.r19.s64 + -99;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x831de908
	if (cr6.gt) goto loc_831DE908;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,6736
	ctx.r12.s64 = ctx.r12.s64 + 6736;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31970
	ctx.r12.s64 = -2095185920;
	// addi r12,r12,-8916
	ctx.r12.s64 = ctx.r12.s64 + -8916;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831DDD2C;
	case 1:
		goto loc_831DE1F0;
	case 2:
		goto loc_831DE530;
	case 3:
		goto loc_831DE530;
	case 4:
		goto loc_831DE530;
	case 5:
		goto loc_831DE908;
	case 6:
		goto loc_831DE088;
	case 7:
		goto loc_831DE908;
	case 8:
		goto loc_831DE908;
	case 9:
		goto loc_831DE908;
	case 10:
		goto loc_831DE908;
	case 11:
		goto loc_831DE4E0;
	case 12:
		goto loc_831DE1F0;
	case 13:
		goto loc_831DE1EC;
	case 14:
		goto loc_831DE908;
	case 15:
		goto loc_831DE908;
	case 16:
		goto loc_831DDD3C;
	case 17:
		goto loc_831DE908;
	case 18:
		goto loc_831DE1F0;
	case 19:
		goto loc_831DE908;
	case 20:
		goto loc_831DE908;
	case 21:
		goto loc_831DE08C;
	case 22:
		goto loc_831DE908;
	case 23:
		goto loc_831DE908;
	case 24:
		goto loc_831DDD4C;
	default:
		return;
	}
loc_831DDD2C:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x831ddd3c
	if (!cr6.eq) goto loc_831DDD3C;
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_831DDD3C:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x831ddeac
	if (!cr0.gt) goto loc_831DDEAC;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x831ddeac
	goto loc_831DDEAC;
loc_831DDD4C:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// ble 0x831ddd5c
	if (!cr0.gt) goto loc_831DDD5C;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
loc_831DDD5C:
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, xer);
	// bne cr6,0x831ddd78
	if (!cr6.eq) goto loc_831DDD78;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_831DDD78:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(ctx.r19.s32, 123, xer);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// std r5,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// std r5,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// bne cr6,0x831dde88
	if (!cr6.eq) goto loc_831DDE88;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bne cr6,0x831dde88
	if (!cr6.eq) goto loc_831DDE88;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	ctx.r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// b 0x831dde88
	goto loc_831DDE88;
loc_831DDDB8:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,45
	cr6.compare<uint32_t>(ctx.r8.u32, 45, xer);
	// bne cr6,0x831dde68
	if (!cr6.eq) goto loc_831DDE68;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831dde68
	if (cr0.eq) goto loc_831DDE68;
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// beq cr6,0x831dde68
	if (cr6.eq) goto loc_831DDE68;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x831dddf4
	if (!cr6.lt) goto loc_831DDDF4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x831dddfc
	goto loc_831DDDFC;
loc_831DDDF4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_831DDDFC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x831dde40
	if (!cr6.lt) goto loc_831DDE40;
loc_831DDE0C:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// stbx r4,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// blt cr6,0x831dde0c
	if (cr6.lt) goto loc_831DDE0C;
loc_831DDE40:
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x831dde88
	goto loc_831DDE88;
loc_831DDE68:
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// slw r11,r6,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_831DDE88:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bne cr6,0x831dddb8
	if (!cr6.eq) goto loc_831DDDB8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831dea6c
	if (cr6.eq) goto loc_831DEA6C;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(ctx.r19.s32, 123, xer);
	// bne cr6,0x831ddeac
	if (!cr6.eq) goto loc_831DDEAC;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_831DDEAC:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// beq cr6,0x831ddecc
	if (cr6.eq) goto loc_831DDECC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DDECC;
	sub_831CF5F0(ctx, base);
loc_831DDECC:
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_831DDED0:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831ddee4
	if (cr6.eq) goto loc_831DDEE4;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x831de03c
	if (cr6.eq) goto loc_831DE03C;
loc_831DDEE4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831ddf0c
	if (cr0.lt) goto loc_831DDF0C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831ddf18
	goto loc_831DDF18;
loc_831DDF0C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DDF14;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DDF18:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// beq cr6,0x831de024
	if (cr6.eq) goto loc_831DE024;
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(ctx.r19.s32, 99, xer);
	// beq cr6,0x831ddf7c
	if (cr6.eq) goto loc_831DDF7C;
	// cmpwi cr6,r19,115
	cr6.compare<int32_t>(ctx.r19.s32, 115, xer);
	// bne cr6,0x831ddf48
	if (!cr6.eq) goto loc_831DDF48;
	// cmpwi cr6,r22,9
	cr6.compare<int32_t>(ctx.r22.s32, 9, xer);
	// blt cr6,0x831ddf40
	if (cr6.lt) goto loc_831DDF40;
	// cmpwi cr6,r22,13
	cr6.compare<int32_t>(ctx.r22.s32, 13, xer);
	// ble cr6,0x831de024
	if (!cr6.gt) goto loc_831DE024;
loc_831DDF40:
	// cmpwi cr6,r22,32
	cr6.compare<int32_t>(ctx.r22.s32, 32, xer);
	// bne cr6,0x831ddf7c
	if (!cr6.eq) goto loc_831DDF7C;
loc_831DDF48:
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(ctx.r19.s32, 123, xer);
	// bne cr6,0x831de024
	if (!cr6.eq) goto loc_831DE024;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r22,3
	xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 3;
	// clrlwi r9,r22,29
	ctx.r9.u64 = ctx.r22.u32 & 0x7;
	// extsb r8,r25
	ctx.r8.s64 = ctx.r25.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831de024
	if (cr0.eq) goto loc_831DE024;
loc_831DDF7C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831de01c
	if (!cr6.eq) goto loc_831DE01C;
	// extsb. r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831de008
	if (cr0.eq) goto loc_831DE008;
	// stb r22,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r22.u8);
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x831e23d0
	ctx.lr = 0x831DDF9C;
	sub_831E23D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ddfd8
	if (cr0.eq) goto loc_831DDFD8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831ddfcc
	if (cr0.lt) goto loc_831DDFCC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831ddfd4
	goto loc_831DDFD4;
loc_831DDFCC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DDFD4;
	sub_831DB570(ctx, base);
loc_831DDFD4:
	// stb r3,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
loc_831DDFD8:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x831e7b08
	ctx.lr = 0x831DDFF8;
	sub_831E7B08(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x831de014
	goto loc_831DE014;
loc_831DE008:
	// extsb r11,r22
	ctx.r11.s64 = ctx.r22.s8;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831DE014:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// b 0x831dded0
	goto loc_831DDED0;
loc_831DE01C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x831dded0
	goto loc_831DDED0;
loc_831DE024:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// beq cr6,0x831de03c
	if (cr6.eq) goto loc_831DE03C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DE03C;
	sub_831CF5F0(ctx, base);
loc_831DE03C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x831dea6c
	if (cr6.eq) goto loc_831DEA6C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831de934
	if (!cr6.eq) goto loc_831DE934;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(ctx.r19.s32, 99, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x831de934
	if (cr6.eq) goto loc_831DE934;
	// extsb. r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x831de07c
	if (cr0.eq) goto loc_831DE07C;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x831de934
	goto loc_831DE934;
loc_831DE07C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x831de934
	goto loc_831DE934;
loc_831DE088:
	// li r19,100
	ctx.r19.s64 = 100;
loc_831DE08C:
	// cmpwi cr6,r22,45
	cr6.compare<int32_t>(ctx.r22.s32, 45, xer);
	// bne cr6,0x831de09c
	if (!cr6.eq) goto loc_831DE09C;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x831de0a4
	goto loc_831DE0A4;
loc_831DE09C:
	// cmpwi cr6,r22,43
	cr6.compare<int32_t>(ctx.r22.s32, 43, xer);
	// bne cr6,0x831de0f0
	if (!cr6.eq) goto loc_831DE0F0;
loc_831DE0A4:
	// addic. r15,r15,-1
	xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	cr0.compare<int32_t>(ctx.r15.s32, 0, xer);
	// bne 0x831de0bc
	if (!cr0.eq) goto loc_831DE0BC;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831de0bc
	if (cr6.eq) goto loc_831DE0BC;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831de0f0
	goto loc_831DE0F0;
loc_831DE0BC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de0e4
	if (cr0.lt) goto loc_831DE0E4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de0f0
	goto loc_831DE0F0;
loc_831DE0E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE0EC;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE0F0:
	// cmpwi cr6,r22,48
	cr6.compare<int32_t>(ctx.r22.s32, 48, xer);
	// bne cr6,0x831de254
	if (!cr6.eq) goto loc_831DE254;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de120
	if (cr0.lt) goto loc_831DE120;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de12c
	goto loc_831DE12C;
loc_831DE120:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE128;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE12C:
	// extsb r11,r22
	ctx.r11.s64 = ctx.r22.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x831de190
	if (cr6.eq) goto loc_831DE190;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x831de190
	if (cr6.eq) goto loc_831DE190;
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(ctx.r19.s32, 120, xer);
	// beq cr6,0x831de170
	if (cr6.eq) goto loc_831DE170;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831de168
	if (cr6.eq) goto loc_831DE168;
	// addic. r15,r15,-1
	xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	cr0.compare<int32_t>(ctx.r15.s32, 0, xer);
	// bne 0x831de168
	if (!cr0.eq) goto loc_831DE168;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DE168:
	// li r19,111
	ctx.r19.s64 = 111;
	// b 0x831de254
	goto loc_831DE254;
loc_831DE170:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// beq cr6,0x831de188
	if (cr6.eq) goto loc_831DE188;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DE188;
	sub_831CF5F0(ctx, base);
loc_831DE188:
	// li r22,48
	ctx.r22.s64 = 48;
	// b 0x831de254
	goto loc_831DE254;
loc_831DE190:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de1b8
	if (cr0.lt) goto loc_831DE1B8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de1c4
	goto loc_831DE1C4;
loc_831DE1B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE1C0;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE1C4:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831de1e4
	if (cr6.eq) goto loc_831DE1E4;
	// addi r15,r15,-2
	ctx.r15.s64 = ctx.r15.s64 + -2;
	// cmpwi cr6,r15,1
	cr6.compare<int32_t>(ctx.r15.s32, 1, xer);
	// bge cr6,0x831de1e4
	if (!cr6.lt) goto loc_831DE1E4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DE1E4:
	// li r19,120
	ctx.r19.s64 = 120;
	// b 0x831de254
	goto loc_831DE254;
loc_831DE1EC:
	// li r16,1
	ctx.r16.s64 = 1;
loc_831DE1F0:
	// cmpwi cr6,r22,45
	cr6.compare<int32_t>(ctx.r22.s32, 45, xer);
	// bne cr6,0x831de200
	if (!cr6.eq) goto loc_831DE200;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x831de208
	goto loc_831DE208;
loc_831DE200:
	// cmpwi cr6,r22,43
	cr6.compare<int32_t>(ctx.r22.s32, 43, xer);
	// bne cr6,0x831de254
	if (!cr6.eq) goto loc_831DE254;
loc_831DE208:
	// addic. r15,r15,-1
	xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	cr0.compare<int32_t>(ctx.r15.s32, 0, xer);
	// bne 0x831de220
	if (!cr0.eq) goto loc_831DE220;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831de220
	if (cr6.eq) goto loc_831DE220;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831de254
	goto loc_831DE254;
loc_831DE220:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de248
	if (cr0.lt) goto loc_831DE248;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de254
	goto loc_831DE254;
loc_831DE248:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE250;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE254:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x831de39c
	if (cr6.eq) goto loc_831DE39C;
	// bne 0x831de384
	if (!cr0.eq) goto loc_831DE384;
loc_831DE264:
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(ctx.r19.s32, 120, xer);
	// beq cr6,0x831de2b0
	if (cr6.eq) goto loc_831DE2B0;
	// cmpwi cr6,r19,112
	cr6.compare<int32_t>(ctx.r19.s32, 112, xer);
	// beq cr6,0x831de2b0
	if (cr6.eq) goto loc_831DE2B0;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x831d2680
	ctx.lr = 0x831DE27C;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831de2ec
	if (cr0.eq) goto loc_831DE2EC;
	// cmpwi cr6,r19,111
	cr6.compare<int32_t>(ctx.r19.s32, 111, xer);
	// bne cr6,0x831de2a4
	if (!cr6.eq) goto loc_831DE2A4;
	// cmpwi cr6,r22,56
	cr6.compare<int32_t>(ctx.r22.s32, 56, xer);
	// bge cr6,0x831de2ec
	if (!cr6.lt) goto loc_831DE2EC;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_831DE29C:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x831de2f4
	goto loc_831DE2F4;
loc_831DE2A4:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// b 0x831de29c
	goto loc_831DE29C;
loc_831DE2B0:
	// clrlwi r30,r22,24
	ctx.r30.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d26a0
	ctx.lr = 0x831DE2BC;
	sub_831D26A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831de2ec
	if (cr0.eq) goto loc_831DE2EC;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x831d2680
	ctx.lr = 0x831DE2D8;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831de2f4
	if (!cr0.eq) goto loc_831DE2F4;
	// rlwinm r11,r22,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r22,r11,-7
	ctx.r22.s64 = ctx.r11.s64 + -7;
	// b 0x831de2f4
	goto loc_831DE2F4;
loc_831DE2EC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DE2F4:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831de364
	if (!cr0.eq) goto loc_831DE364;
	// addi r11,r22,-48
	ctx.r11.s64 = ctx.r22.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x831de32c
	if (cr6.eq) goto loc_831DE32C;
	// addic. r15,r15,-1
	xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	cr0.compare<int32_t>(ctx.r15.s32, 0, xer);
	// bne 0x831de32c
	if (!cr0.eq) goto loc_831DE32C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831de37c
	goto loc_831DE37C;
loc_831DE32C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de354
	if (cr0.lt) goto loc_831DE354;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de37c
	goto loc_831DE37C;
loc_831DE354:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE35C;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x831de37c
	goto loc_831DE37C;
loc_831DE364:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// beq cr6,0x831de37c
	if (cr6.eq) goto loc_831DE37C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DE37C;
	sub_831CF5F0(ctx, base);
loc_831DE37C:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831de264
	if (cr0.eq) goto loc_831DE264;
loc_831DE384:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831de4ac
	if (cr0.eq) goto loc_831DE4AC;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x831de4ac
	goto loc_831DE4AC;
loc_831DE39C:
	// bne 0x831de4a0
	if (!cr0.eq) goto loc_831DE4A0;
loc_831DE3A0:
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(ctx.r19.s32, 120, xer);
	// beq cr6,0x831de3e0
	if (cr6.eq) goto loc_831DE3E0;
	// cmpwi cr6,r19,112
	cr6.compare<int32_t>(ctx.r19.s32, 112, xer);
	// beq cr6,0x831de3e0
	if (cr6.eq) goto loc_831DE3E0;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x831d2680
	ctx.lr = 0x831DE3B8;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831de414
	if (cr0.eq) goto loc_831DE414;
	// cmpwi cr6,r19,111
	cr6.compare<int32_t>(ctx.r19.s32, 111, xer);
	// bne cr6,0x831de3d8
	if (!cr6.eq) goto loc_831DE3D8;
	// cmpwi cr6,r22,56
	cr6.compare<int32_t>(ctx.r22.s32, 56, xer);
	// bge cr6,0x831de414
	if (!cr6.lt) goto loc_831DE414;
	// rlwinm r23,r23,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x831de41c
	goto loc_831DE41C;
loc_831DE3D8:
	// mulli r23,r23,10
	ctx.r23.s64 = ctx.r23.s64 * 10;
	// b 0x831de41c
	goto loc_831DE41C;
loc_831DE3E0:
	// clrlwi r30,r22,24
	ctx.r30.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d26a0
	ctx.lr = 0x831DE3EC;
	sub_831D26A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831de414
	if (cr0.eq) goto loc_831DE414;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x831d2680
	ctx.lr = 0x831DE400;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831de41c
	if (!cr0.eq) goto loc_831DE41C;
	// rlwinm r11,r22,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r22,r11,-7
	ctx.r22.s64 = ctx.r11.s64 + -7;
	// b 0x831de41c
	goto loc_831DE41C;
loc_831DE414:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DE41C:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831de480
	if (!cr0.eq) goto loc_831DE480;
	// add r11,r23,r22
	ctx.r11.u64 = ctx.r23.u64 + ctx.r22.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r23,r11,-48
	ctx.r23.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831de448
	if (cr6.eq) goto loc_831DE448;
	// addic. r15,r15,-1
	xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	cr0.compare<int32_t>(ctx.r15.s32, 0, xer);
	// bne 0x831de448
	if (!cr0.eq) goto loc_831DE448;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831de498
	goto loc_831DE498;
loc_831DE448:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de470
	if (cr0.lt) goto loc_831DE470;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de498
	goto loc_831DE498;
loc_831DE470:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE478;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x831de498
	goto loc_831DE498;
loc_831DE480:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// beq cr6,0x831de498
	if (cr6.eq) goto loc_831DE498;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DE498;
	sub_831CF5F0(ctx, base);
loc_831DE498:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831de3a0
	if (cr0.eq) goto loc_831DE3A0;
loc_831DE4A0:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831de4ac
	if (cr0.eq) goto loc_831DE4AC;
	// neg r23,r23
	ctx.r23.s64 = -ctx.r23.s64;
loc_831DE4AC:
	// addi r11,r19,-70
	ctx.r11.s64 = ctx.r19.s64 + -70;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 & ctx.r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831dea6c
	if (cr6.eq) goto loc_831DEA6C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831de934
	if (!cr6.eq) goto loc_831DE934;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x831de4fc
	goto loc_831DE4FC;
loc_831DE4E0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831de934
	if (!cr6.eq) goto loc_831DE934;
	// bl 0x831e7a18
	ctx.lr = 0x831DE4F4;
	sub_831E7A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831de934
	if (cr0.eq) goto loc_831DE934;
loc_831DE4FC:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq cr6,0x831de514
	if (cr6.eq) goto loc_831DE514;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x831de934
	goto loc_831DE934;
loc_831DE514:
	// extsb. r11,r16
	ctx.r11.s64 = ctx.r16.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x831de528
	if (cr0.eq) goto loc_831DE528;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// b 0x831de934
	goto loc_831DE934;
loc_831DE528:
	// sth r23,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r23.u16);
	// b 0x831de934
	goto loc_831DE934;
loc_831DE530:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r22,45
	cr6.compare<int32_t>(ctx.r22.s32, 45, xer);
	// bne cr6,0x831de550
	if (!cr6.eq) goto loc_831DE550;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x831de558
	goto loc_831DE558;
loc_831DE550:
	// cmpwi cr6,r22,43
	cr6.compare<int32_t>(ctx.r22.s32, 43, xer);
	// bne cr6,0x831de590
	if (!cr6.eq) goto loc_831DE590;
loc_831DE558:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de584
	if (cr0.lt) goto loc_831DE584;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de590
	goto loc_831DE590;
loc_831DE584:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE58C;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE590:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bne cr6,0x831de610
	if (!cr6.eq) goto loc_831DE610;
	// li r15,-1
	ctx.r15.s64 = -1;
	// b 0x831de610
	goto loc_831DE610;
loc_831DE5A0:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x831de624
	if (cr6.eq) goto loc_831DE624;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DE5D4;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dea6c
	if (cr0.eq) goto loc_831DEA6C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de604
	if (cr0.lt) goto loc_831DE604;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de610
	goto loc_831DE610;
loc_831DE604:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE60C;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE610:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2680
	ctx.lr = 0x831DE61C;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831de5a0
	if (!cr0.eq) goto loc_831DE5A0;
loc_831DE624:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsb r10,r31
	ctx.r10.s64 = ctx.r31.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831de73c
	if (!cr6.eq) goto loc_831DE73C;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x831de73c
	if (cr6.eq) goto loc_831DE73C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de67c
	if (cr0.lt) goto loc_831DE67C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de688
	goto loc_831DE688;
loc_831DE67C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE684;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE688:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DE6AC;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dea6c
	if (cr0.eq) goto loc_831DEA6C;
	// b 0x831de728
	goto loc_831DE728;
loc_831DE6B8:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x831de73c
	if (cr6.eq) goto loc_831DE73C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DE6EC;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dea6c
	if (cr0.eq) goto loc_831DEA6C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de71c
	if (cr0.lt) goto loc_831DE71C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de728
	goto loc_831DE728;
loc_831DE71C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE724;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE728:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2680
	ctx.lr = 0x831DE734;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831de6b8
	if (!cr0.eq) goto loc_831DE6B8;
loc_831DE73C:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// beq cr6,0x831de8a0
	if (cr6.eq) goto loc_831DE8A0;
	// cmpwi cr6,r22,101
	cr6.compare<int32_t>(ctx.r22.s32, 101, xer);
	// beq cr6,0x831de754
	if (cr6.eq) goto loc_831DE754;
	// cmpwi cr6,r22,69
	cr6.compare<int32_t>(ctx.r22.s32, 69, xer);
	// bne cr6,0x831de8a0
	if (!cr6.eq) goto loc_831DE8A0;
loc_831DE754:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// addi r29,r15,-1
	ctx.r29.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x831de8a0
	if (cr6.eq) goto loc_831DE8A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DE788;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dea6c
	if (cr0.eq) goto loc_831DEA6C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de7b8
	if (cr0.lt) goto loc_831DE7B8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de7c4
	goto loc_831DE7C4;
loc_831DE7B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE7C0;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE7C4:
	// cmpwi cr6,r22,45
	cr6.compare<int32_t>(ctx.r22.s32, 45, xer);
	// bne cr6,0x831de800
	if (!cr6.eq) goto loc_831DE800;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DE7F4;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dea6c
	if (cr0.eq) goto loc_831DEA6C;
	// b 0x831de808
	goto loc_831DE808;
loc_831DE800:
	// cmpwi cr6,r22,43
	cr6.compare<int32_t>(ctx.r22.s32, 43, xer);
	// bne cr6,0x831de88c
	if (!cr6.eq) goto loc_831DE88C;
loc_831DE808:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne cr6,0x831de858
	if (!cr6.eq) goto loc_831DE858;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x831de88c
	goto loc_831DE88C;
loc_831DE81C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// beq cr6,0x831de8a0
	if (cr6.eq) goto loc_831DE8A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DE850;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dea6c
	if (cr0.eq) goto loc_831DEA6C;
loc_831DE858:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de880
	if (cr0.lt) goto loc_831DE880;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de88c
	goto loc_831DE88C;
loc_831DE880:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE888;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE88C:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2680
	ctx.lr = 0x831DE898;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831de81c
	if (!cr0.eq) goto loc_831DE81C;
loc_831DE8A0:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// beq cr6,0x831de8b8
	if (cr6.eq) goto loc_831DE8B8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DE8B8;
	sub_831CF5F0(ctx, base);
loc_831DE8B8:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// beq cr6,0x831dea6c
	if (cr6.eq) goto loc_831DEA6C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831de934
	if (!cr6.eq) goto loc_831DE934;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// extsb r11,r16
	ctx.r11.s64 = ctx.r16.s8;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r10,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x831DE904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831de934
	goto loc_831DE934;
loc_831DE908:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bne cr6,0x831dea58
	if (!cr6.eq) goto loc_831DEA58;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x831de934
	if (!cr6.eq) goto loc_831DE934;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_831DE934:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r10,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// rotlwi r19,r10,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x831dea10
	goto loc_831DEA10;
loc_831DE954:
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x831de970
	if (!cr6.eq) goto loc_831DE970;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// bne cr6,0x831de970
	if (!cr6.eq) goto loc_831DE970;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_831DE970:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de998
	if (cr0.lt) goto loc_831DE998;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de9a4
	goto loc_831DE9A4;
loc_831DE998:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE9A0;
	sub_831DB570(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_831DE9A4:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bne cr6,0x831dea58
	if (!cr6.eq) goto loc_831DEA58;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x831e23d0
	ctx.lr = 0x831DE9C0;
	sub_831E23D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dea10
	if (cr0.eq) goto loc_831DEA10;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r14,1
	ctx.r31.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x831de9f0
	if (cr0.lt) goto loc_831DE9F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x831de9f8
	goto loc_831DE9F8;
loc_831DE9F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831db570
	ctx.lr = 0x831DE9F8;
	sub_831DB570(ctx, base);
loc_831DE9F8:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x831dea48
	if (!cr6.eq) goto loc_831DEA48;
	// addi r14,r31,-1
	ctx.r14.s64 = ctx.r31.s64 + -1;
loc_831DEA10:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// bne cr6,0x831dea38
	if (!cr6.eq) goto loc_831DEA38;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x831dea6c
	if (!cr6.eq) goto loc_831DEA6C;
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(ctx.r11.u32, 110, xer);
	// bne cr6,0x831dea6c
	if (!cr6.eq) goto loc_831DEA6C;
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_831DEA38:
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831dd998
	if (!cr0.eq) goto loc_831DD998;
	// b 0x831dea6c
	goto loc_831DEA6C;
loc_831DEA48:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831dea58
	if (cr6.eq) goto loc_831DEA58;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DEA58;
	sub_831CF5F0(ctx, base);
loc_831DEA58:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// beq cr6,0x831dea6c
	if (cr6.eq) goto loc_831DEA6C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DEA6C;
	sub_831CF5F0(ctx, base);
loc_831DEA6C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831dea80
	if (!cr6.eq) goto loc_831DEA80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831cf100
	ctx.lr = 0x831DEA80;
	sub_831CF100(ctx, base);
loc_831DEA80:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// bne cr6,0x831deaa8
	if (!cr6.eq) goto loc_831DEAA8;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831deaac
	if (!cr6.eq) goto loc_831DEAAC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831deaac
	if (!cr0.eq) goto loc_831DEAAC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831deaac
	goto loc_831DEAAC;
loc_831DEAA8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_831DEAAC:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DEAB4"))) PPC_WEAK_FUNC(sub_831DEAB4);
PPC_FUNC_IMPL(__imp__sub_831DEAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DEAB8"))) PPC_WEAK_FUNC(sub_831DEAB8);
PPC_FUNC_IMPL(__imp__sub_831DEAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831DEAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x831deb4c
	if (!cr6.eq) goto loc_831DEB4C;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bne cr6,0x831deb28
	if (!cr6.eq) goto loc_831DEB28;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831d9420
	ctx.lr = 0x831DEAF8;
	sub_831D9420(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831deb0c
	if (!cr0.eq) goto loc_831DEB0C;
loc_831DEB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831deb50
	goto loc_831DEB50;
loc_831DEB0C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x831DEB24;
	sub_831CE980(ctx, base);
	// b 0x831deb40
	goto loc_831DEB40;
loc_831DEB28:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831e7a70
	ctx.lr = 0x831DEB34;
	sub_831E7A70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831deb04
	if (cr0.eq) goto loc_831DEB04;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_831DEB40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831DEB4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831DEB50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DEB58"))) PPC_WEAK_FUNC(sub_831DEB58);
PPC_FUNC_IMPL(__imp__sub_831DEB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x831DEB60;
	__savegprlr_14(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r4,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r4.u32);
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// sth r19,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r19.u16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// bne cr6,0x831debb4
	if (!cr6.eq) goto loc_831DEBB4;
loc_831DEB9C:
	// bl 0x831d3050
	ctx.lr = 0x831DEBA0;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DEBAC;
	sub_831CF000(ctx, base);
loc_831DEBAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831dff50
	goto loc_831DFF50;
loc_831DEBB4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x831deb9c
	if (cr6.eq) goto loc_831DEB9C;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831dec74
	if (!cr0.eq) goto loc_831DEC74;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db880
	ctx.lr = 0x831DEBD0;
	sub_831DB880(ctx, base);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r11,r11,23808
	ctx.r11.s64 = ctx.r11.s64 + 23808;
	// addi r8,r10,2184
	ctx.r8.s64 = ctx.r10.s64 + 2184;
	// beq cr6,0x831dec0c
	if (cr6.eq) goto loc_831DEC0C;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831dec0c
	if (cr6.eq) goto loc_831DEC0C;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x831dec10
	goto loc_831DEC10;
loc_831DEC0C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831DEC10:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831dec58
	if (!cr0.eq) goto loc_831DEC58;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831dec48
	if (cr6.eq) goto loc_831DEC48;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831dec48
	if (cr6.eq) goto loc_831DEC48;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831dec4c
	goto loc_831DEC4C;
loc_831DEC48:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831DEC4C:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831dec74
	if (cr0.eq) goto loc_831DEC74;
loc_831DEC58:
	// bl 0x831d3050
	ctx.lr = 0x831DEC5C;
	sub_831D3050(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
loc_831DEC60:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831DEC6C;
	sub_831CF000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831dff50
	goto loc_831DFF50;
loc_831DEC74:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r19,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r19.u8);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// beq 0x831dff4c
	if (cr0.eq) goto loc_831DFF4C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r11,r11,2840
	ctx.r11.s64 = ctx.r11.s64 + 2840;
	// addi r10,r10,2136
	ctx.r10.s64 = ctx.r10.s64 + 2136;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_831DECA4:
	// bl 0x831d26c0
	ctx.lr = 0x831DECA8;
	sub_831D26C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ded30
	if (cr0.eq) goto loc_831DED30;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_831DECB8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831dece4
	if (cr0.lt) goto loc_831DECE4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831decf0
	goto loc_831DECF0;
loc_831DECE4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DECEC;
	sub_831DB570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831DECF0:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x831ded14
	if (cr6.eq) goto loc_831DED14;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x831DED00;
	sub_831D26C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831decb8
	if (!cr0.eq) goto loc_831DECB8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DED14;
	sub_831CF5F0(ctx, base);
loc_831DED14:
	// lwz r30,716(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_831DED18:
	// lbzu r3,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// bl 0x831d26c0
	ctx.lr = 0x831DED20;
	sub_831D26C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ded18
	if (!cr0.eq) goto loc_831DED18;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// b 0x831dfe64
	goto loc_831DFE64;
loc_831DED30:
	// lwz r18,716(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x831dfd90
	if (!cr6.eq) goto loc_831DFD90;
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// beq cr6,0x831dfd74
	if (cr6.eq) goto loc_831DFD74;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r14,0
	ctx.r14.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r15,1
	ctx.r15.s64 = 1;
	// li r21,0
	ctx.r21.s64 = 0;
loc_831DED84:
	// lbzu r31,1(r18)
	ea = 1 + ctx.r18.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r18.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2680
	ctx.lr = 0x831DED90;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dedac
	if (cr0.eq) goto loc_831DEDAC;
	// mulli r11,r14,10
	ctx.r11.s64 = ctx.r14.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r14,r11,-48
	ctx.r14.s64 = ctx.r11.s64 + -48;
	// b 0x831deedc
	goto loc_831DEEDC;
loc_831DEDAC:
	// cmpwi cr6,r31,78
	cr6.compare<int32_t>(ctx.r31.s32, 78, xer);
	// bgt cr6,0x831dee70
	if (cr6.gt) goto loc_831DEE70;
	// beq cr6,0x831deedc
	if (cr6.eq) goto loc_831DEEDC;
	// cmpwi cr6,r31,42
	cr6.compare<int32_t>(ctx.r31.s32, 42, xer);
	// beq cr6,0x831dee60
	if (cr6.eq) goto loc_831DEE60;
	// cmpwi cr6,r31,70
	cr6.compare<int32_t>(ctx.r31.s32, 70, xer);
	// beq cr6,0x831deedc
	if (cr6.eq) goto loc_831DEEDC;
	// cmpwi cr6,r31,73
	cr6.compare<int32_t>(ctx.r31.s32, 73, xer);
	// beq cr6,0x831dede4
	if (cr6.eq) goto loc_831DEDE4;
	// cmpwi cr6,r31,76
	cr6.compare<int32_t>(ctx.r31.s32, 76, xer);
	// bne cr6,0x831dee88
	if (!cr6.eq) goto loc_831DEE88;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x831deed8
	goto loc_831DEED8;
loc_831DEDE4:
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bne cr6,0x831dee14
	if (!cr6.eq) goto loc_831DEE14;
	// lbz r9,2(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 2);
	// addi r11,r18,2
	ctx.r11.s64 = ctx.r18.s64 + 2;
	// cmplwi cr6,r9,52
	cr6.compare<uint32_t>(ctx.r9.u32, 52, xer);
	// bne cr6,0x831dee14
	if (!cr6.eq) goto loc_831DEE14;
loc_831DEE00:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// b 0x831deedc
	goto loc_831DEEDC;
loc_831DEE14:
	// cmplwi cr6,r10,51
	cr6.compare<uint32_t>(ctx.r10.u32, 51, xer);
	// bne cr6,0x831dee34
	if (!cr6.eq) goto loc_831DEE34;
	// lbz r9,2(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 2);
	// addi r11,r18,2
	ctx.r11.s64 = ctx.r18.s64 + 2;
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// bne cr6,0x831dee34
	if (!cr6.eq) goto loc_831DEE34;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// b 0x831deedc
	goto loc_831DEEDC;
loc_831DEE34:
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// beq cr6,0x831deedc
	if (cr6.eq) goto loc_831DEEDC;
	// cmplwi cr6,r10,105
	cr6.compare<uint32_t>(ctx.r10.u32, 105, xer);
	// beq cr6,0x831deedc
	if (cr6.eq) goto loc_831DEEDC;
	// cmplwi cr6,r10,111
	cr6.compare<uint32_t>(ctx.r10.u32, 111, xer);
	// beq cr6,0x831deedc
	if (cr6.eq) goto loc_831DEEDC;
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// beq cr6,0x831deedc
	if (cr6.eq) goto loc_831DEEDC;
	// cmplwi cr6,r10,88
	cr6.compare<uint32_t>(ctx.r10.u32, 88, xer);
	// bne cr6,0x831dee88
	if (!cr6.eq) goto loc_831DEE88;
	// b 0x831deedc
	goto loc_831DEEDC;
loc_831DEE60:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// b 0x831deedc
	goto loc_831DEEDC;
loc_831DEE70:
	// cmpwi cr6,r31,104
	cr6.compare<int32_t>(ctx.r31.s32, 104, xer);
	// beq cr6,0x831deec4
	if (cr6.eq) goto loc_831DEEC4;
	// cmpwi cr6,r31,108
	cr6.compare<int32_t>(ctx.r31.s32, 108, xer);
	// beq cr6,0x831dee98
	if (cr6.eq) goto loc_831DEE98;
	// cmpwi cr6,r31,119
	cr6.compare<int32_t>(ctx.r31.s32, 119, xer);
	// beq cr6,0x831deeb4
	if (cr6.eq) goto loc_831DEEB4;
loc_831DEE88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// b 0x831deedc
	goto loc_831DEEDC;
loc_831DEE98:
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r10,108
	cr6.compare<uint32_t>(ctx.r10.u32, 108, xer);
	// beq cr6,0x831dee00
	if (cr6.eq) goto loc_831DEE00;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r15,r11
	ctx.r15.s64 = ctx.r11.s8;
loc_831DEEB4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// b 0x831deedc
	goto loc_831DEEDC;
loc_831DEEC4:
	// extsb r10,r28
	ctx.r10.s64 = ctx.r28.s8;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
loc_831DEED8:
	// extsb r15,r11
	ctx.r15.s64 = ctx.r11.s8;
loc_831DEEDC:
	// extsb. r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831ded84
	if (cr0.eq) goto loc_831DED84;
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r18,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r18.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne 0x831def14
	if (!cr0.eq) goto loc_831DEF14;
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x831def18
	goto loc_831DEF18;
loc_831DEF14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831DEF18:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x831def44
	if (!cr0.eq) goto loc_831DEF44;
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(ctx.r11.u32, 83, xer);
	// beq cr6,0x831def40
	if (cr6.eq) goto loc_831DEF40;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// bne cr6,0x831def44
	if (!cr6.eq) goto loc_831DEF44;
loc_831DEF40:
	// li r28,1
	ctx.r28.s64 = 1;
loc_831DEF44:
	// lwz r9,716(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// ori r18,r11,32
	ctx.r18.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r18,110
	cr6.compare<int32_t>(ctx.r18.s32, 110, xer);
	// beq cr6,0x831df00c
	if (cr6.eq) goto loc_831DF00C;
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(ctx.r18.s32, 99, xer);
	// beq cr6,0x831defc4
	if (cr6.eq) goto loc_831DEFC4;
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(ctx.r18.s32, 123, xer);
	// beq cr6,0x831defc4
	if (cr6.eq) goto loc_831DEFC4;
loc_831DEF68:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt 0x831def98
	if (cr0.lt) goto loc_831DEF98;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831defa4
	goto loc_831DEFA4;
loc_831DEF98:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DEFA0;
	sub_831DB570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831DEFA4:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x831defbc
	if (cr6.eq) goto loc_831DEFBC;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x831DEFB4;
	sub_831D26C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831def68
	if (!cr0.eq) goto loc_831DEF68;
loc_831DEFBC:
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// b 0x831df000
	goto loc_831DF000;
loc_831DEFC4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831deff4
	if (cr0.lt) goto loc_831DEFF4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df000
	goto loc_831DF000;
loc_831DEFF4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DEFFC;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DF000:
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// beq cr6,0x831dfefc
	if (cr6.eq) goto loc_831DFEFC;
	// lwz r9,716(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_831DF00C:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831df01c
	if (cr6.eq) goto loc_831DF01C;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// beq cr6,0x831dfee8
	if (cr6.eq) goto loc_831DFEE8;
loc_831DF01C:
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x831df08c
	if (!cr6.eq) goto loc_831DF08C;
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(ctx.r18.s32, 99, xer);
	// beq cr6,0x831df040
	if (cr6.eq) goto loc_831DF040;
	// cmpwi cr6,r18,115
	cr6.compare<int32_t>(ctx.r18.s32, 115, xer);
	// beq cr6,0x831df040
	if (cr6.eq) goto loc_831DF040;
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(ctx.r18.s32, 123, xer);
	// bne cr6,0x831df08c
	if (!cr6.eq) goto loc_831DF08C;
loc_831DF040:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,-4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lwz r26,-4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bge cr6,0x831df090
	if (!cr6.lt) goto loc_831DF090;
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x831dfe74
	if (!cr0.gt) goto loc_831DFE74;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x831dfe7c
	goto loc_831DFE7C;
loc_831DF08C:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_831DF090:
	// addi r11,r18,-99
	ctx.r11.s64 = ctx.r18.s64 + -99;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bgt cr6,0x831dfd28
	if (cr6.gt) goto loc_831DFD28;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,6792
	ctx.r12.s64 = ctx.r12.s64 + 6792;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31970
	ctx.r12.s64 = -2095185920;
	// addi r12,r12,-3900
	ctx.r12.s64 = ctx.r12.s64 + -3900;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831DF0C4;
	case 1:
		goto loc_831DF5CC;
	case 2:
		goto loc_831DF930;
	case 3:
		goto loc_831DF930;
	case 4:
		goto loc_831DF930;
	case 5:
		goto loc_831DFD28;
	case 6:
		goto loc_831DF44C;
	case 7:
		goto loc_831DFD28;
	case 8:
		goto loc_831DFD28;
	case 9:
		goto loc_831DFD28;
	case 10:
		goto loc_831DFD28;
	case 11:
		goto loc_831DF8E4;
	case 12:
		goto loc_831DF5CC;
	case 13:
		goto loc_831DF5C8;
	case 14:
		goto loc_831DFD28;
	case 15:
		goto loc_831DFD28;
	case 16:
		goto loc_831DF0D4;
	case 17:
		goto loc_831DFD28;
	case 18:
		goto loc_831DF5CC;
	case 19:
		goto loc_831DFD28;
	case 20:
		goto loc_831DFD28;
	case 21:
		goto loc_831DF450;
	case 22:
		goto loc_831DFD28;
	case 23:
		goto loc_831DFD28;
	case 24:
		goto loc_831DF0E4;
	default:
		return;
	}
loc_831DF0C4:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// bne cr6,0x831df0d4
	if (!cr6.eq) goto loc_831DF0D4;
	// li r16,1
	ctx.r16.s64 = 1;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
loc_831DF0D4:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x831df248
	if (!cr0.gt) goto loc_831DF248;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x831df248
	goto loc_831DF248;
loc_831DF0E4:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// ble 0x831df0f4
	if (!cr0.gt) goto loc_831DF0F4;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
loc_831DF0F4:
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, xer);
	// bne cr6,0x831df110
	if (!cr6.eq) goto loc_831DF110;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_831DF110:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(ctx.r18.s32, 123, xer);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// std r5,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// std r5,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// bne cr6,0x831df220
	if (!cr6.eq) goto loc_831DF220;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bne cr6,0x831df220
	if (!cr6.eq) goto loc_831DF220;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	ctx.r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// b 0x831df220
	goto loc_831DF220;
loc_831DF150:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,45
	cr6.compare<uint32_t>(ctx.r8.u32, 45, xer);
	// bne cr6,0x831df200
	if (!cr6.eq) goto loc_831DF200;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831df200
	if (cr0.eq) goto loc_831DF200;
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// beq cr6,0x831df200
	if (cr6.eq) goto loc_831DF200;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x831df18c
	if (!cr6.lt) goto loc_831DF18C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x831df194
	goto loc_831DF194;
loc_831DF18C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_831DF194:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x831df1d8
	if (!cr6.lt) goto loc_831DF1D8;
loc_831DF1A4:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// stbx r4,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// blt cr6,0x831df1a4
	if (cr6.lt) goto loc_831DF1A4;
loc_831DF1D8:
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x831df220
	goto loc_831DF220;
loc_831DF200:
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// slw r11,r6,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_831DF220:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bne cr6,0x831df150
	if (!cr6.eq) goto loc_831DF150;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831dfefc
	if (cr6.eq) goto loc_831DFEFC;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(ctx.r18.s32, 123, xer);
	// bne cr6,0x831df248
	if (!cr6.eq) goto loc_831DF248;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_831DF248:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x831df26c
	if (cr6.eq) goto loc_831DF26C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DF26C;
	sub_831CF5F0(ctx, base);
loc_831DF26C:
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(ctx.r18.s32, 99, xer);
	// beq cr6,0x831df278
	if (cr6.eq) goto loc_831DF278;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
loc_831DF278:
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_831DF27C:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831df290
	if (cr6.eq) goto loc_831DF290;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x831df400
	if (cr6.eq) goto loc_831DF400;
loc_831DF290:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df2bc
	if (cr0.lt) goto loc_831DF2BC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df2c8
	goto loc_831DF2C8;
loc_831DF2BC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF2C4;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DF2C8:
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// beq cr6,0x831df3e4
	if (cr6.eq) goto loc_831DF3E4;
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(ctx.r18.s32, 99, xer);
	// beq cr6,0x831df32c
	if (cr6.eq) goto loc_831DF32C;
	// cmpwi cr6,r18,115
	cr6.compare<int32_t>(ctx.r18.s32, 115, xer);
	// bne cr6,0x831df2f8
	if (!cr6.eq) goto loc_831DF2F8;
	// cmpwi cr6,r19,9
	cr6.compare<int32_t>(ctx.r19.s32, 9, xer);
	// blt cr6,0x831df2f0
	if (cr6.lt) goto loc_831DF2F0;
	// cmpwi cr6,r19,13
	cr6.compare<int32_t>(ctx.r19.s32, 13, xer);
	// ble cr6,0x831df3e4
	if (!cr6.gt) goto loc_831DF3E4;
loc_831DF2F0:
	// cmpwi cr6,r19,32
	cr6.compare<int32_t>(ctx.r19.s32, 32, xer);
	// bne cr6,0x831df32c
	if (!cr6.eq) goto loc_831DF32C;
loc_831DF2F8:
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(ctx.r18.s32, 123, xer);
	// bne cr6,0x831df3e4
	if (!cr6.eq) goto loc_831DF3E4;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r19,3
	xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r19.s32 >> 3;
	// clrlwi r9,r19,29
	ctx.r9.u64 = ctx.r19.u32 & 0x7;
	// extsb r8,r24
	ctx.r8.s64 = ctx.r24.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831df3e4
	if (cr0.eq) goto loc_831DF3E4;
loc_831DF32C:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831df3dc
	if (!cr6.eq) goto loc_831DF3DC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831dfe8c
	if (cr6.eq) goto loc_831DFE8C;
	// extsb. r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831df3c4
	if (cr0.eq) goto loc_831DF3C4;
	// stb r19,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r19.u8);
	// clrlwi r3,r19,24
	ctx.r3.u64 = ctx.r19.u32 & 0xFF;
	// bl 0x831e23d0
	ctx.lr = 0x831DF354;
	sub_831E23D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831df394
	if (cr0.eq) goto loc_831DF394;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df388
	if (cr0.lt) goto loc_831DF388;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df390
	goto loc_831DF390;
loc_831DF388:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF390;
	sub_831DB570(ctx, base);
loc_831DF390:
	// stb r3,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r3.u8);
loc_831DF394:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x831e7b08
	ctx.lr = 0x831DF3B4;
	sub_831E7B08(ctx, base);
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x831df3d0
	goto loc_831DF3D0;
loc_831DF3C4:
	// extsb r11,r19
	ctx.r11.s64 = ctx.r19.s8;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831DF3D0:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// b 0x831df27c
	goto loc_831DF27C;
loc_831DF3DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x831df27c
	goto loc_831DF27C;
loc_831DF3E4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x831df400
	if (cr6.eq) goto loc_831DF400;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DF400;
	sub_831CF5F0(ctx, base);
loc_831DF400:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x831dfefc
	if (cr6.eq) goto loc_831DFEFC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831dfd50
	if (!cr6.eq) goto loc_831DFD50;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(ctx.r18.s32, 99, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x831dfd50
	if (cr6.eq) goto loc_831DFD50;
	// extsb. r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x831df440
	if (cr0.eq) goto loc_831DF440;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x831dfd50
	goto loc_831DFD50;
loc_831DF440:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x831dfd50
	goto loc_831DFD50;
loc_831DF44C:
	// li r18,100
	ctx.r18.s64 = 100;
loc_831DF450:
	// cmpwi cr6,r19,45
	cr6.compare<int32_t>(ctx.r19.s32, 45, xer);
	// bne cr6,0x831df460
	if (!cr6.eq) goto loc_831DF460;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x831df468
	goto loc_831DF468;
loc_831DF460:
	// cmpwi cr6,r19,43
	cr6.compare<int32_t>(ctx.r19.s32, 43, xer);
	// bne cr6,0x831df4bc
	if (!cr6.eq) goto loc_831DF4BC;
loc_831DF468:
	// addic. r14,r14,-1
	xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	cr0.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bne 0x831df480
	if (!cr0.eq) goto loc_831DF480;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831df480
	if (cr6.eq) goto loc_831DF480;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831df4bc
	goto loc_831DF4BC;
loc_831DF480:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df4b0
	if (cr0.lt) goto loc_831DF4B0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df4bc
	goto loc_831DF4BC;
loc_831DF4B0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF4B8;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DF4BC:
	// cmpwi cr6,r19,48
	cr6.compare<int32_t>(ctx.r19.s32, 48, xer);
	// bne cr6,0x831df638
	if (!cr6.eq) goto loc_831DF638;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df4f4
	if (cr0.lt) goto loc_831DF4F4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df500
	goto loc_831DF500;
loc_831DF4F4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF4FC;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DF500:
	// extsb r11,r19
	ctx.r11.s64 = ctx.r19.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x831df568
	if (cr6.eq) goto loc_831DF568;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x831df568
	if (cr6.eq) goto loc_831DF568;
	// li r17,1
	ctx.r17.s64 = 1;
	// cmpwi cr6,r18,120
	cr6.compare<int32_t>(ctx.r18.s32, 120, xer);
	// beq cr6,0x831df544
	if (cr6.eq) goto loc_831DF544;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831df53c
	if (cr6.eq) goto loc_831DF53C;
	// addic. r14,r14,-1
	xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	cr0.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bne 0x831df53c
	if (!cr0.eq) goto loc_831DF53C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DF53C:
	// li r18,111
	ctx.r18.s64 = 111;
	// b 0x831df638
	goto loc_831DF638;
loc_831DF544:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x831df560
	if (cr6.eq) goto loc_831DF560;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DF560;
	sub_831CF5F0(ctx, base);
loc_831DF560:
	// li r19,48
	ctx.r19.s64 = 48;
	// b 0x831df638
	goto loc_831DF638;
loc_831DF568:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df594
	if (cr0.lt) goto loc_831DF594;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df5a0
	goto loc_831DF5A0;
loc_831DF594:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF59C;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DF5A0:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831df5c0
	if (cr6.eq) goto loc_831DF5C0;
	// addi r14,r14,-2
	ctx.r14.s64 = ctx.r14.s64 + -2;
	// cmpwi cr6,r14,1
	cr6.compare<int32_t>(ctx.r14.s32, 1, xer);
	// bge cr6,0x831df5c0
	if (!cr6.lt) goto loc_831DF5C0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DF5C0:
	// li r18,120
	ctx.r18.s64 = 120;
	// b 0x831df638
	goto loc_831DF638;
loc_831DF5C8:
	// li r15,1
	ctx.r15.s64 = 1;
loc_831DF5CC:
	// cmpwi cr6,r19,45
	cr6.compare<int32_t>(ctx.r19.s32, 45, xer);
	// bne cr6,0x831df5dc
	if (!cr6.eq) goto loc_831DF5DC;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x831df5e4
	goto loc_831DF5E4;
loc_831DF5DC:
	// cmpwi cr6,r19,43
	cr6.compare<int32_t>(ctx.r19.s32, 43, xer);
	// bne cr6,0x831df638
	if (!cr6.eq) goto loc_831DF638;
loc_831DF5E4:
	// addic. r14,r14,-1
	xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	cr0.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bne 0x831df5fc
	if (!cr0.eq) goto loc_831DF5FC;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831df5fc
	if (cr6.eq) goto loc_831DF5FC;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831df638
	goto loc_831DF638;
loc_831DF5FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df62c
	if (cr0.lt) goto loc_831DF62C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df638
	goto loc_831DF638;
loc_831DF62C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF634;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DF638:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x831df790
	if (cr6.eq) goto loc_831DF790;
	// bne 0x831df778
	if (!cr0.eq) goto loc_831DF778;
loc_831DF648:
	// cmpwi cr6,r18,120
	cr6.compare<int32_t>(ctx.r18.s32, 120, xer);
	// beq cr6,0x831df694
	if (cr6.eq) goto loc_831DF694;
	// cmpwi cr6,r18,112
	cr6.compare<int32_t>(ctx.r18.s32, 112, xer);
	// beq cr6,0x831df694
	if (cr6.eq) goto loc_831DF694;
	// clrlwi r3,r19,24
	ctx.r3.u64 = ctx.r19.u32 & 0xFF;
	// bl 0x831d2680
	ctx.lr = 0x831DF660;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831df6d0
	if (cr0.eq) goto loc_831DF6D0;
	// cmpwi cr6,r18,111
	cr6.compare<int32_t>(ctx.r18.s32, 111, xer);
	// bne cr6,0x831df688
	if (!cr6.eq) goto loc_831DF688;
	// cmpwi cr6,r19,56
	cr6.compare<int32_t>(ctx.r19.s32, 56, xer);
	// bge cr6,0x831df6d0
	if (!cr6.lt) goto loc_831DF6D0;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_831DF680:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x831df6d8
	goto loc_831DF6D8;
loc_831DF688:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// b 0x831df680
	goto loc_831DF680;
loc_831DF694:
	// clrlwi r30,r19,24
	ctx.r30.u64 = ctx.r19.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d26a0
	ctx.lr = 0x831DF6A0;
	sub_831D26A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831df6d0
	if (cr0.eq) goto loc_831DF6D0;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x831d2680
	ctx.lr = 0x831DF6BC;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831df6d8
	if (!cr0.eq) goto loc_831DF6D8;
	// rlwinm r11,r19,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r19,r11,-7
	ctx.r19.s64 = ctx.r11.s64 + -7;
	// b 0x831df6d8
	goto loc_831DF6D8;
loc_831DF6D0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DF6D8:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831df750
	if (!cr0.eq) goto loc_831DF750;
	// addi r11,r19,-48
	ctx.r11.s64 = ctx.r19.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x831df710
	if (cr6.eq) goto loc_831DF710;
	// addic. r14,r14,-1
	xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	cr0.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bne 0x831df710
	if (!cr0.eq) goto loc_831DF710;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831df770
	goto loc_831DF770;
loc_831DF710:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df740
	if (cr0.lt) goto loc_831DF740;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df770
	goto loc_831DF770;
loc_831DF740:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF748;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x831df770
	goto loc_831DF770;
loc_831DF750:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x831df770
	if (cr6.eq) goto loc_831DF770;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DF770;
	sub_831CF5F0(ctx, base);
loc_831DF770:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831df648
	if (cr0.eq) goto loc_831DF648;
loc_831DF778:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831df8b0
	if (cr0.eq) goto loc_831DF8B0;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x831df8b0
	goto loc_831DF8B0;
loc_831DF790:
	// bne 0x831df8a4
	if (!cr0.eq) goto loc_831DF8A4;
loc_831DF794:
	// cmpwi cr6,r18,120
	cr6.compare<int32_t>(ctx.r18.s32, 120, xer);
	// beq cr6,0x831df7d4
	if (cr6.eq) goto loc_831DF7D4;
	// cmpwi cr6,r18,112
	cr6.compare<int32_t>(ctx.r18.s32, 112, xer);
	// beq cr6,0x831df7d4
	if (cr6.eq) goto loc_831DF7D4;
	// clrlwi r3,r19,24
	ctx.r3.u64 = ctx.r19.u32 & 0xFF;
	// bl 0x831d2680
	ctx.lr = 0x831DF7AC;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831df808
	if (cr0.eq) goto loc_831DF808;
	// cmpwi cr6,r18,111
	cr6.compare<int32_t>(ctx.r18.s32, 111, xer);
	// bne cr6,0x831df7cc
	if (!cr6.eq) goto loc_831DF7CC;
	// cmpwi cr6,r19,56
	cr6.compare<int32_t>(ctx.r19.s32, 56, xer);
	// bge cr6,0x831df808
	if (!cr6.lt) goto loc_831DF808;
	// rlwinm r22,r22,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x831df810
	goto loc_831DF810;
loc_831DF7CC:
	// mulli r22,r22,10
	ctx.r22.s64 = ctx.r22.s64 * 10;
	// b 0x831df810
	goto loc_831DF810;
loc_831DF7D4:
	// clrlwi r30,r19,24
	ctx.r30.u64 = ctx.r19.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d26a0
	ctx.lr = 0x831DF7E0;
	sub_831D26A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831df808
	if (cr0.eq) goto loc_831DF808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r22,r22,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x831d2680
	ctx.lr = 0x831DF7F4;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831df810
	if (!cr0.eq) goto loc_831DF810;
	// rlwinm r11,r19,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r19,r11,-7
	ctx.r19.s64 = ctx.r11.s64 + -7;
	// b 0x831df810
	goto loc_831DF810;
loc_831DF808:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831DF810:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831df87c
	if (!cr0.eq) goto loc_831DF87C;
	// add r11,r22,r19
	ctx.r11.u64 = ctx.r22.u64 + ctx.r19.u64;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r22,r11,-48
	ctx.r22.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831df83c
	if (cr6.eq) goto loc_831DF83C;
	// addic. r14,r14,-1
	xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	cr0.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bne 0x831df83c
	if (!cr0.eq) goto loc_831DF83C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831df89c
	goto loc_831DF89C;
loc_831DF83C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df86c
	if (cr0.lt) goto loc_831DF86C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df89c
	goto loc_831DF89C;
loc_831DF86C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF874;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x831df89c
	goto loc_831DF89C;
loc_831DF87C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x831df89c
	if (cr6.eq) goto loc_831DF89C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DF89C;
	sub_831CF5F0(ctx, base);
loc_831DF89C:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831df794
	if (cr0.eq) goto loc_831DF794;
loc_831DF8A4:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831df8b0
	if (cr0.eq) goto loc_831DF8B0;
	// neg r22,r22
	ctx.r22.s64 = -ctx.r22.s64;
loc_831DF8B0:
	// addi r11,r18,-70
	ctx.r11.s64 = ctx.r18.s64 + -70;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & ctx.r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831dfefc
	if (cr6.eq) goto loc_831DFEFC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831dfd50
	if (!cr6.eq) goto loc_831DFD50;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x831df8fc
	goto loc_831DF8FC;
loc_831DF8E4:
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x831dfd50
	if (!cr6.eq) goto loc_831DFD50;
	// bl 0x831e7a18
	ctx.lr = 0x831DF8F4;
	sub_831E7A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dfd50
	if (cr0.eq) goto loc_831DFD50;
loc_831DF8FC:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq cr6,0x831df914
	if (cr6.eq) goto loc_831DF914;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x831dfd50
	goto loc_831DFD50;
loc_831DF914:
	// extsb. r11,r15
	ctx.r11.s64 = ctx.r15.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x831df928
	if (cr0.eq) goto loc_831DF928;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x831dfd50
	goto loc_831DFD50;
loc_831DF928:
	// sth r22,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r22.u16);
	// b 0x831dfd50
	goto loc_831DFD50;
loc_831DF930:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r19,45
	cr6.compare<int32_t>(ctx.r19.s32, 45, xer);
	// bne cr6,0x831df950
	if (!cr6.eq) goto loc_831DF950;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x831df958
	goto loc_831DF958;
loc_831DF950:
	// cmpwi cr6,r19,43
	cr6.compare<int32_t>(ctx.r19.s32, 43, xer);
	// bne cr6,0x831df998
	if (!cr6.eq) goto loc_831DF998;
loc_831DF958:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831df98c
	if (cr0.lt) goto loc_831DF98C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831df998
	goto loc_831DF998;
loc_831DF98C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DF994;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DF998:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// bne cr6,0x831dfa20
	if (!cr6.eq) goto loc_831DFA20;
	// li r14,-1
	ctx.r14.s64 = -1;
	// b 0x831dfa20
	goto loc_831DFA20;
loc_831DF9A8:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x831dfa34
	if (cr6.eq) goto loc_831DFA34;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DF9DC;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dfefc
	if (cr0.eq) goto loc_831DFEFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831dfa14
	if (cr0.lt) goto loc_831DFA14;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831dfa20
	goto loc_831DFA20;
loc_831DFA14:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DFA1C;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DFA20:
	// clrlwi r31,r19,24
	ctx.r31.u64 = ctx.r19.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2680
	ctx.lr = 0x831DFA2C;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831df9a8
	if (!cr0.eq) goto loc_831DF9A8;
loc_831DFA34:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// extsb r10,r31
	ctx.r10.s64 = ctx.r31.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831dfb54
	if (!cr6.eq) goto loc_831DFB54;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x831dfb54
	if (cr6.eq) goto loc_831DFB54;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831dfa90
	if (cr0.lt) goto loc_831DFA90;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831dfa9c
	goto loc_831DFA9C;
loc_831DFA90:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DFA98;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DFA9C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DFAC0;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dfefc
	if (cr0.eq) goto loc_831DFEFC;
	// b 0x831dfb3c
	goto loc_831DFB3C;
loc_831DFACC:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x831dfb58
	if (cr6.eq) goto loc_831DFB58;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DFB00;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dfefc
	if (cr0.eq) goto loc_831DFEFC;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831dfb30
	if (cr0.lt) goto loc_831DFB30;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831dfb3c
	goto loc_831DFB3C;
loc_831DFB30:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DFB38;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DFB3C:
	// clrlwi r31,r19,24
	ctx.r31.u64 = ctx.r19.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2680
	ctx.lr = 0x831DFB48;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831dfacc
	if (!cr0.eq) goto loc_831DFACC;
	// b 0x831dfb58
	goto loc_831DFB58;
loc_831DFB54:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831DFB58:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831dfcbc
	if (cr6.eq) goto loc_831DFCBC;
	// cmpwi cr6,r19,101
	cr6.compare<int32_t>(ctx.r19.s32, 101, xer);
	// beq cr6,0x831dfb70
	if (cr6.eq) goto loc_831DFB70;
	// cmpwi cr6,r19,69
	cr6.compare<int32_t>(ctx.r19.s32, 69, xer);
	// bne cr6,0x831dfcbc
	if (!cr6.eq) goto loc_831DFCBC;
loc_831DFB70:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// addi r29,r14,-1
	ctx.r29.s64 = ctx.r14.s64 + -1;
	// beq cr6,0x831dfcbc
	if (cr6.eq) goto loc_831DFCBC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DFBA4;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dfefc
	if (cr0.eq) goto loc_831DFEFC;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831dfbd4
	if (cr0.lt) goto loc_831DFBD4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831dfbe0
	goto loc_831DFBE0;
loc_831DFBD4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DFBDC;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DFBE0:
	// cmpwi cr6,r19,45
	cr6.compare<int32_t>(ctx.r19.s32, 45, xer);
	// bne cr6,0x831dfc1c
	if (!cr6.eq) goto loc_831DFC1C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DFC10;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dfefc
	if (cr0.eq) goto loc_831DFEFC;
	// b 0x831dfc24
	goto loc_831DFC24;
loc_831DFC1C:
	// cmpwi cr6,r19,43
	cr6.compare<int32_t>(ctx.r19.s32, 43, xer);
	// bne cr6,0x831dfca8
	if (!cr6.eq) goto loc_831DFCA8;
loc_831DFC24:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne cr6,0x831dfc74
	if (!cr6.eq) goto loc_831DFC74;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x831dfca8
	goto loc_831DFCA8;
loc_831DFC38:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// beq cr6,0x831dfcbc
	if (cr6.eq) goto loc_831DFCBC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831deab8
	ctx.lr = 0x831DFC6C;
	sub_831DEAB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dfefc
	if (cr0.eq) goto loc_831DFEFC;
loc_831DFC74:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831dfc9c
	if (cr0.lt) goto loc_831DFC9C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831dfca8
	goto loc_831DFCA8;
loc_831DFC9C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DFCA4;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DFCA8:
	// clrlwi r31,r19,24
	ctx.r31.u64 = ctx.r19.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2680
	ctx.lr = 0x831DFCB4;
	sub_831D2680(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831dfc38
	if (!cr0.eq) goto loc_831DFC38;
loc_831DFCBC:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x831dfcd8
	if (cr6.eq) goto loc_831DFCD8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DFCD8;
	sub_831CF5F0(ctx, base);
loc_831DFCD8:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x831dfefc
	if (cr6.eq) goto loc_831DFEFC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831dfd50
	if (!cr6.eq) goto loc_831DFD50;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// extsb r11,r15
	ctx.r11.s64 = ctx.r15.s8;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stbx r10,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x831DFD24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831dfd50
	goto loc_831DFD50;
loc_831DFD28:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r19
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, xer);
	// bne cr6,0x831dfeb8
	if (!cr6.eq) goto loc_831DFEB8;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bne cr6,0x831dfd50
	if (!cr6.eq) goto loc_831DFD50;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_831DFD50:
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r9,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r9.u32);
	// rotlwi r30,r9,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// b 0x831dfe3c
	goto loc_831DFE3C;
loc_831DFD74:
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x831dfd90
	if (!cr6.eq) goto loc_831DFD90;
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1);
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// bne cr6,0x831dfd90
	if (!cr6.eq) goto loc_831DFD90;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
loc_831DFD90:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831dfdc0
	if (cr0.lt) goto loc_831DFDC0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831dfdcc
	goto loc_831DFDCC;
loc_831DFDC0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DFDC8;
	sub_831DB570(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_831DFDCC:
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// addi r30,r18,1
	ctx.r30.s64 = ctx.r18.s64 + 1;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// cmpw cr6,r11,r19
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, xer);
	// bne cr6,0x831dfee8
	if (!cr6.eq) goto loc_831DFEE8;
	// clrlwi r3,r19,24
	ctx.r3.u64 = ctx.r19.u32 & 0xFF;
	// bl 0x831e23d0
	ctx.lr = 0x831DFDE8;
	sub_831E23D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831dfe3c
	if (cr0.eq) goto loc_831DFE3C;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// blt 0x831dfe18
	if (cr0.lt) goto loc_831DFE18;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x831dfe20
	goto loc_831DFE20;
loc_831DFE18:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831db570
	ctx.lr = 0x831DFE20;
	sub_831DB570(ctx, base);
loc_831DFE20:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x831dfed8
	if (!cr6.eq) goto loc_831DFED8;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_831DFE3C:
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// bne cr6,0x831dfe64
	if (!cr6.eq) goto loc_831DFE64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x831dfefc
	if (!cr6.eq) goto loc_831DFEFC;
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(ctx.r11.u32, 110, xer);
	// bne cr6,0x831dfefc
	if (!cr6.eq) goto loc_831DFEFC;
	// lwz r30,716(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_831DFE64:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831deca4
	if (!cr0.eq) goto loc_831DECA4;
	// b 0x831dfefc
	goto loc_831DFEFC;
loc_831DFE74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_831DFE7C:
	// bl 0x831d3050
	ctx.lr = 0x831DFE80;
	sub_831D3050(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831dfefc
	goto loc_831DFEFC;
loc_831DFE8C:
	// bl 0x831d3050
	ctx.lr = 0x831DFE90;
	sub_831D3050(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// extsb. r10,r23
	ctx.r10.s64 = ctx.r23.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x831dfeac
	if (cr0.eq) goto loc_831DFEAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x831dfefc
	goto loc_831DFEFC;
loc_831DFEAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x831dfefc
	goto loc_831DFEFC;
loc_831DFEB8:
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// beq cr6,0x831dfecc
	if (cr6.eq) goto loc_831DFECC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DFECC;
	sub_831CF5F0(ctx, base);
loc_831DFECC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x831dfefc
	goto loc_831DFEFC;
loc_831DFED8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831dfee8
	if (cr6.eq) goto loc_831DFEE8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DFEE8;
	sub_831CF5F0(ctx, base);
loc_831DFEE8:
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// beq cr6,0x831dfefc
	if (cr6.eq) goto loc_831DFEFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831cf5f0
	ctx.lr = 0x831DFEFC;
	sub_831CF5F0(ctx, base);
loc_831DFEFC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831dff10
	if (!cr6.eq) goto loc_831DFF10;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831cf100
	ctx.lr = 0x831DFF10;
	sub_831CF100(ctx, base);
loc_831DFF10:
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(ctx.r19.s32, -1, xer);
	// bne cr6,0x831dff34
	if (!cr6.eq) goto loc_831DFF34;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831dff50
	if (!cr6.eq) goto loc_831DFF50;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831dff50
	if (!cr0.eq) goto loc_831DFF50;
	// b 0x831debac
	goto loc_831DEBAC;
loc_831DFF34:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831dff4c
	if (!cr6.eq) goto loc_831DFF4C;
	// bl 0x831d3050
	ctx.lr = 0x831DFF44;
	sub_831D3050(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x831dec60
	goto loc_831DEC60;
loc_831DFF4C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_831DFF50:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831DFF58"))) PPC_WEAK_FUNC(sub_831DFF58);
PPC_FUNC_IMPL(__imp__sub_831DFF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,3024
	ctx.r3.s64 = ctx.r11.s64 + 3024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DFF64"))) PPC_WEAK_FUNC(sub_831DFF64);
PPC_FUNC_IMPL(__imp__sub_831DFF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DFF68"))) PPC_WEAK_FUNC(sub_831DFF68);
PPC_FUNC_IMPL(__imp__sub_831DFF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,2848
	ctx.r3.s64 = ctx.r11.s64 + 2848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831DFF74"))) PPC_WEAK_FUNC(sub_831DFF74);
PPC_FUNC_IMPL(__imp__sub_831DFF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831DFF78"))) PPC_WEAK_FUNC(sub_831DFF78);
PPC_FUNC_IMPL(__imp__sub_831DFF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831DFF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831db880
	ctx.lr = 0x831DFF8C;
	sub_831DB880(ctx, base);
	// bl 0x83a2a780
	ctx.lr = 0x831DFF90;
	sub_83A2A780(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e0058
	if (cr0.eq) goto loc_831E0058;
	// bl 0x831cf870
	ctx.lr = 0x831DFF9C;
	sub_831CF870(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x831dffb0
	if (!cr6.eq) goto loc_831DFFB0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x831dffc4
	goto loc_831DFFC4;
loc_831DFFB0:
	// bl 0x831cf870
	ctx.lr = 0x831DFFB4;
	sub_831CF870(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x831e0058
	if (!cr6.eq) goto loc_831E0058;
	// li r10,1
	ctx.r10.s64 = 1;
loc_831DFFC4:
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// lwz r11,2648(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2648);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2648, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,268
	ctx.r11.u64 = ctx.r11.u64 & 268;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e0058
	if (!cr0.eq) goto loc_831E0058;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,3144
	ctx.r30.s64 = ctx.r11.s64 + 3144;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e002c
	if (!cr6.eq) goto loc_831E002C;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x831d2bf8
	ctx.lr = 0x831E0004;
	sub_831D2BF8(ctx, base);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831e002c
	if (!cr0.eq) goto loc_831E002C;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x831e0044
	goto loc_831E0044;
loc_831E002C:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_831E0044:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,4354
	ctx.r11.u64 = ctx.r11.u64 | 4354;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x831e005c
	goto loc_831E005C;
loc_831E0058:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E005C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E0064"))) PPC_WEAK_FUNC(sub_831E0064);
PPC_FUNC_IMPL(__imp__sub_831E0064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0068"))) PPC_WEAK_FUNC(sub_831E0068);
PPC_FUNC_IMPL(__imp__sub_831E0068) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831e00b8
	if (cr6.eq) goto loc_831E00B8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e00b8
	if (cr0.eq) goto loc_831E00B8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x831cfb10
	ctx.lr = 0x831E0098;
	sub_831CFB10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831E00B8:
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

__attribute__((alias("__imp__sub_831E00CC"))) PPC_WEAK_FUNC(sub_831E00CC);
PPC_FUNC_IMPL(__imp__sub_831E00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E00D0"))) PPC_WEAK_FUNC(sub_831E00D0);
PPC_FUNC_IMPL(__imp__sub_831E00D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831E00D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x831e3c00
	ctx.lr = 0x831E0110;
	sub_831E3C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e012c
	if (cr0.eq) goto loc_831E012C;
	// li r30,512
	ctx.r30.s64 = 512;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x831e0160
	goto loc_831E0160;
loc_831E012C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831e7b50
	ctx.lr = 0x831E0138;
	sub_831E7B50(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e0148
	if (!cr0.eq) goto loc_831E0148;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831e014c
	if (!cr6.eq) goto loc_831E014C;
loc_831E0148:
	// li r30,128
	ctx.r30.s64 = 128;
loc_831E014C:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e015c
	if (!cr0.eq) goto loc_831E015C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831e0160
	if (!cr6.eq) goto loc_831E0160;
loc_831E015C:
	// ori r30,r30,256
	ctx.r30.u64 = ctx.r30.u64 | 256;
loc_831E0160:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// std r10,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E0184"))) PPC_WEAK_FUNC(sub_831E0184);
PPC_FUNC_IMPL(__imp__sub_831E0184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0188"))) PPC_WEAK_FUNC(sub_831E0188);
PPC_FUNC_IMPL(__imp__sub_831E0188) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E018C"))) PPC_WEAK_FUNC(sub_831E018C);
PPC_FUNC_IMPL(__imp__sub_831E018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0190"))) PPC_WEAK_FUNC(sub_831E0190);
PPC_FUNC_IMPL(__imp__sub_831E0190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,3040
	ctx.r11.s64 = ctx.r11.s64 + 3040;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E01A8"))) PPC_WEAK_FUNC(sub_831E01A8);
PPC_FUNC_IMPL(__imp__sub_831E01A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831E01B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwinm. r4,r5,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq 0x831e0208
	if (cr0.eq) goto loc_831E0208;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,143
	ctx.r27.u64 = ctx.r27.u64 | 143;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x831e020c
	goto loc_831E020C;
loc_831E0208:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831E020C:
	// rlwinm. r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e022c
	if (cr0.eq) goto loc_831E022C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,147
	ctx.r27.u64 = ctx.r27.u64 | 147;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_831E022C:
	// clrlwi. r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e024c
	if (cr0.eq) goto loc_831E024C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,145
	ctx.r27.u64 = ctx.r27.u64 | 145;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_831E024C:
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e026c
	if (cr0.eq) goto loc_831E026C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,142
	ctx.r27.u64 = ctx.r27.u64 | 142;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_831E026C:
	// rlwinm. r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e028c
	if (cr0.eq) goto loc_831E028C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,144
	ctx.r27.u64 = ctx.r27.u64 | 144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_831E028C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,20,4,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,24,3,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,23,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,25,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,28,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bl 0x831e0ca0
	ctx.lr = 0x831E0308;
	sub_831E0CA0(ctx, base);
	// rlwinm. r11,r3,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0320
	if (cr0.eq) goto loc_831E0320;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_831E0320:
	// rlwinm. r11,r3,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0338
	if (cr0.eq) goto loc_831E0338;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_831E0338:
	// rlwinm. r11,r3,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0350
	if (cr0.eq) goto loc_831E0350;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_831E0350:
	// rlwinm. r11,r3,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0368
	if (cr0.eq) goto loc_831E0368;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_831E0368:
	// rlwinm. r11,r3,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0380
	if (cr0.eq) goto loc_831E0380;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_831E0380:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x831e03d4
	if (cr6.lt) goto loc_831E03D4;
	// beq cr6,0x831e03c4
	if (cr6.eq) goto loc_831E03C4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x831e03b4
	if (cr6.lt) goto loc_831E03B4;
	// bne cr6,0x831e03e4
	if (!cr6.eq) goto loc_831E03E4;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x831e03e0
	goto loc_831E03E0;
loc_831E03B4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,31,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x831e03e0
	goto loc_831E03E0;
loc_831E03C4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// b 0x831e03e0
	goto loc_831E03E0;
loc_831E03D4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
loc_831E03E0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831E03E4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,27,2,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 27) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r28,15,5,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 15) & 0x7FF8000) | (ctx.r10.u64 & 0xFFFFFFFFF8007FFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x831e0468
	if (cr6.eq) goto loc_831E0468;
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// b 0x831e04a8
	goto loc_831E04A8;
loc_831E0468:
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stfd f0,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.f0.u64);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfd f0,0(r26)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// stfd f0,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.f0.u64);
loc_831E04A8:
	// bl 0x831e8a00
	ctx.lr = 0x831E04AC;
	sub_831E8A00(ctx, base);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d4730
	ctx.lr = 0x831E04C0;
	sub_832D4730(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e04dc
	if (cr0.eq) goto loc_831E04DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E04DC:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e04f4
	if (cr0.eq) goto loc_831E04F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E04F4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e050c
	if (cr0.eq) goto loc_831E050C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E050C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0524
	if (cr0.eq) goto loc_831E0524;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E0524:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e053c
	if (cr0.eq) goto loc_831E053C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E053C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x831e0580
	if (cr6.lt) goto loc_831E0580;
	// beq cr6,0x831e0574
	if (cr6.eq) goto loc_831E0574;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x831e0568
	if (cr6.lt) goto loc_831E0568;
	// bne cr6,0x831e058c
	if (!cr6.eq) goto loc_831E058C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r30,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x831e0588
	goto loc_831E0588;
loc_831E0568:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r30,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x831e0588
	goto loc_831E0588;
loc_831E0574:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// b 0x831e0588
	goto loc_831E0588;
loc_831E0580:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_831E0588:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E058C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x831e05a0
	if (cr6.eq) goto loc_831E05A0;
	// lfs f0,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x831e05a8
	goto loc_831E05A8;
loc_831E05A0:
	// lfd f0,80(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// stfd f0,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.f0.u64);
loc_831E05A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E05B0"))) PPC_WEAK_FUNC(sub_831E05B0);
PPC_FUNC_IMPL(__imp__sub_831E05B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831E05B8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// clrlwi r28,r3,27
	ctx.r28.u64 = ctx.r3.u32 & 0x1F;
	// beq 0x831e05f0
	if (cr0.eq) goto loc_831E05F0;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e05f0
	if (cr0.eq) goto loc_831E05F0;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// bl 0x831e0cd4
	ctx.lr = 0x831E05E8;
	sub_831E0CD4(ctx, base);
	// rlwinm r28,r28,0,29,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x831e07d4
	goto loc_831E07D4;
loc_831E05F0:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0610
	if (cr0.eq) goto loc_831E0610;
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0610
	if (cr0.eq) goto loc_831E0610;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// bl 0x831e0cd4
	ctx.lr = 0x831E0608;
	sub_831E0CD4(ctx, base);
	// rlwinm r28,r28,0,30,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x831e07d4
	goto loc_831E07D4;
loc_831E0610:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e06dc
	if (cr0.eq) goto loc_831E06DC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e06dc
	if (cr0.eq) goto loc_831E06DC;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// bl 0x831e0cd4
	ctx.lr = 0x831E0628;
	sub_831E0CD4(ctx, base);
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x831e06a4
	if (cr6.lt) goto loc_831E06A4;
	// beq cr6,0x831e0684
	if (cr6.eq) goto loc_831E0684;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x831e0664
	if (cr6.lt) goto loc_831E0664;
	// bne cr6,0x831e06d4
	if (!cr6.eq) goto loc_831E06D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f0,9000(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x831e06c4
	if (!cr6.gt) goto loc_831E06C4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfd f0,2112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2112);
	// b 0x831e06d0
	goto loc_831E06D0;
loc_831E0664:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f0,9000(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x831e06b8
	if (cr6.gt) goto loc_831E06B8;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfd f0,2112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2112);
	// b 0x831e06cc
	goto loc_831E06CC;
loc_831E0684:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f0,9000(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfd f0,2112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2112);
	// bgt cr6,0x831e06d0
	if (cr6.gt) goto loc_831E06D0;
	// b 0x831e06cc
	goto loc_831E06CC;
loc_831E06A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f0,9000(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x831e06c4
	if (!cr6.gt) goto loc_831E06C4;
loc_831E06B8:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfd f0,2096(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2096);
	// b 0x831e06d0
	goto loc_831E06D0;
loc_831E06C4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfd f0,2096(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2096);
loc_831E06CC:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_831E06D0:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f0.u64);
loc_831E06D4:
	// rlwinm r28,r28,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x831e07d4
	goto loc_831E07D4;
loc_831E06DC:
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e07d4
	if (cr0.eq) goto loc_831E07D4;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e07d4
	if (cr0.eq) goto loc_831E07D4;
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x831e06fc
	if (cr0.eq) goto loc_831E06FC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_831E06FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f31,9000(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x831e07bc
	if (cr6.eq) goto loc_831E07BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831da3d0
	ctx.lr = 0x831E0718;
	sub_831DA3D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// cmpwi cr6,r11,-1074
	cr6.compare<int32_t>(ctx.r11.s32, -1074, xer);
	// bge cr6,0x831e0738
	if (!cr6.lt) goto loc_831E0738;
	// fmul f0,f1,f31
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x831e07b4
	goto loc_831E07B4;
loc_831E0738:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x831e0748
	if (cr6.lt) goto loc_831E0748;
	// li r9,0
	ctx.r9.s64 = 0;
loc_831E0748:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1021
	cr6.compare<int32_t>(ctx.r11.s32, -1021, xer);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bge cr6,0x831e07a4
	if (!cr6.lt) goto loc_831E07A4;
	// subfic r11,r11,-1021
	xer.ca = ctx.r11.u32 <= 4294966275;
	ctx.r11.s64 = -1021 - ctx.r11.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_831E0770:
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x831e0784
	if (cr0.eq) goto loc_831E0784;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x831e0784
	if (!cr6.eq) goto loc_831E0784;
	// li r31,1
	ctx.r31.s64 = 1;
loc_831E0784:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x831e0794
	if (cr0.eq) goto loc_831E0794;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
loc_831E0794:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x831e0770
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E0770;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_831E07A4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831e07b4
	if (cr6.eq) goto loc_831E07B4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_831E07B4:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f0.u64);
	// b 0x831e07c0
	goto loc_831E07C0;
loc_831E07BC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_831E07C0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x831e07d0
	if (cr6.eq) goto loc_831E07D0;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// bl 0x831e0cd4
	ctx.lr = 0x831E07D0;
	sub_831E0CD4(ctx, base);
loc_831E07D0:
	// rlwinm r28,r28,0,31,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_831E07D4:
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e07f0
	if (cr0.eq) goto loc_831E07F0;
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e07f0
	if (cr0.eq) goto loc_831E07F0;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// bl 0x831e0cd4
	ctx.lr = 0x831E07EC;
	sub_831E0CD4(ctx, base);
	// rlwinm r28,r28,0,28,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_831E07F0:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E0804"))) PPC_WEAK_FUNC(sub_831E0804);
PPC_FUNC_IMPL(__imp__sub_831E0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0808"))) PPC_WEAK_FUNC(sub_831E0808);
PPC_FUNC_IMPL(__imp__sub_831E0808) {
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831e0834
	if (cr6.eq) goto loc_831E0834;
	// ble cr6,0x831e0840
	if (!cr6.gt) goto loc_831E0840;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bgt cr6,0x831e0840
	if (cr6.gt) goto loc_831E0840;
	// bl 0x831d3050
	ctx.lr = 0x831E082C;
	sub_831D3050(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x831e083c
	goto loc_831E083C;
loc_831E0834:
	// bl 0x831d3050
	ctx.lr = 0x831E0838;
	sub_831D3050(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
loc_831E083C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831E0840:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0850"))) PPC_WEAK_FUNC(sub_831E0850);
PPC_FUNC_IMPL(__imp__sub_831E0850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0860
	if (cr0.eq) goto loc_831E0860;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_831E0860:
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0870
	if (cr0.eq) goto loc_831E0870;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831E0870:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0880
	if (cr0.eq) goto loc_831E0880;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831E0880:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0890
	if (cr0.eq) goto loc_831E0890;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_831E0890:
	// rlwinm r3,r3,1,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0898"))) PPC_WEAK_FUNC(sub_831E0898);
PPC_FUNC_IMPL(__imp__sub_831E0898) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stfd f1,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f1.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfd f2,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f2.u64);
	// addi r11,r11,3056
	ctx.r11.s64 = ctx.r11.s64 + 3056;
	// stfd f3,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f3.u64);
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_831E08D4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x831e0964
	if (cr6.eq) goto loc_831E0964;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,232
	ctx.r8.s64 = ctx.r11.s64 + 232;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x831e08d4
	if (cr6.lt) goto loc_831E08D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831E08F8:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// beq cr6,0x831e0974
	if (cr6.eq) goto loc_831E0974;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x831e0c70
	ctx.lr = 0x831E0944;
	sub_831E0C70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a2a780
	ctx.lr = 0x831E094C;
	sub_83A2A780(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e095c
	if (!cr0.eq) goto loc_831E095C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e0808
	ctx.lr = 0x831E095C;
	sub_831E0808(ctx, base);
loc_831E095C:
	// lfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x831e0984
	goto loc_831E0984;
loc_831E0964:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x831e08f8
	goto loc_831E08F8;
loc_831E0974:
	// bl 0x831e0c70
	ctx.lr = 0x831E0978;
	sub_831E0C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e0808
	ctx.lr = 0x831E0980;
	sub_831E0808(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_831E0984:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_831E099C"))) PPC_WEAK_FUNC(sub_831E099C);
PPC_FUNC_IMPL(__imp__sub_831E099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E09A0"))) PPC_WEAK_FUNC(sub_831E09A0);
PPC_FUNC_IMPL(__imp__sub_831E09A0) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,4412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e09ec
	if (!cr6.eq) goto loc_831E09EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f2,9000(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// bl 0x831e0898
	ctx.lr = 0x831E09E8;
	sub_831E0898(ctx, base);
	// b 0x831e0a10
	goto loc_831E0A10;
loc_831E09EC:
	// bl 0x831d3050
	ctx.lr = 0x831E09F0;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x831e0c70
	ctx.lr = 0x831E0A0C;
	sub_831E0C70(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_831E0A10:
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

__attribute__((alias("__imp__sub_831E0A28"))) PPC_WEAK_FUNC(sub_831E0A28);
PPC_FUNC_IMPL(__imp__sub_831E0A28) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// fadd f31,f1,f2
	ctx.f31.f64 = ctx.f1.f64 + ctx.f2.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,4412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e0a6c
	if (!cr6.eq) goto loc_831E0A6C;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831e0898
	ctx.lr = 0x831E0A68;
	sub_831E0898(ctx, base);
	// b 0x831e0a90
	goto loc_831E0A90;
loc_831E0A6C:
	// bl 0x831d3050
	ctx.lr = 0x831E0A70;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x831e0c70
	ctx.lr = 0x831E0A8C;
	sub_831E0C70(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_831E0A90:
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

__attribute__((alias("__imp__sub_831E0AA8"))) PPC_WEAK_FUNC(sub_831E0AA8);
PPC_FUNC_IMPL(__imp__sub_831E0AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E0AB0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f2,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f2.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// stfd f1,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.f1.u64);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x831e05b0
	ctx.lr = 0x831E0AE0;
	sub_831E05B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e0b18
	if (!cr0.eq) goto loc_831E0B18;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831e01a8
	ctx.lr = 0x831E0B14;
	sub_831E01A8(ctx, base);
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_831E0B18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e0850
	ctx.lr = 0x831E0B20;
	sub_831E0850(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,4412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e0b58
	if (!cr6.eq) goto loc_831E0B58;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831e0b58
	if (cr6.eq) goto loc_831E0B58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f3,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfd f2,9000(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// bl 0x831e0898
	ctx.lr = 0x831E0B54;
	sub_831E0898(ctx, base);
	// b 0x831e0b70
	goto loc_831E0B70;
loc_831E0B58:
	// bl 0x831e0808
	ctx.lr = 0x831E0B5C;
	sub_831E0808(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x831e0c70
	ctx.lr = 0x831E0B6C;
	sub_831E0C70(ctx, base);
	// lfd f1,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
loc_831E0B70:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E0B7C"))) PPC_WEAK_FUNC(sub_831E0B7C);
PPC_FUNC_IMPL(__imp__sub_831E0B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0B80"))) PPC_WEAK_FUNC(sub_831E0B80);
PPC_FUNC_IMPL(__imp__sub_831E0B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E0B88;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.f3.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stfd f1,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.f1.u64);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// bl 0x831e05b0
	ctx.lr = 0x831E0BC0;
	sub_831E05B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e0c00
	if (!cr0.eq) goto loc_831E0C00;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfd f31,128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// oris r11,r11,34816
	ctx.r11.u64 = ctx.r11.u64 | 2281701376;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831e01a8
	ctx.lr = 0x831E0BFC;
	sub_831E01A8(ctx, base);
	// lwz r30,300(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
loc_831E0C00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e0850
	ctx.lr = 0x831E0C08;
	sub_831E0850(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,4412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e0c3c
	if (!cr6.eq) goto loc_831E0C3C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831e0c3c
	if (cr6.eq) goto loc_831E0C3C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfd f3,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x831e0898
	ctx.lr = 0x831E0C38;
	sub_831E0898(ctx, base);
	// b 0x831e0c54
	goto loc_831E0C54;
loc_831E0C3C:
	// bl 0x831e0808
	ctx.lr = 0x831E0C40;
	sub_831E0808(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x831e0c70
	ctx.lr = 0x831E0C50;
	sub_831E0C70(ctx, base);
	// lfd f1,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
loc_831E0C54:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E0C64"))) PPC_WEAK_FUNC(sub_831E0C64);
PPC_FUNC_IMPL(__imp__sub_831E0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0C68"))) PPC_WEAK_FUNC(sub_831E0C68);
PPC_FUNC_IMPL(__imp__sub_831E0C68) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0C6C"))) PPC_WEAK_FUNC(sub_831E0C6C);
PPC_FUNC_IMPL(__imp__sub_831E0C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0C70"))) PPC_WEAK_FUNC(sub_831E0C70);
PPC_FUNC_IMPL(__imp__sub_831E0C70) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// xori r5,r3,248
	ctx.r5.u64 = ctx.r3.u64 ^ 248;
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 & ctx.r4.u64;
	// andc r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfd f0,-8(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// xori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 ^ 248;
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0CA0"))) PPC_WEAK_FUNC(sub_831E0CA0);
PPC_FUNC_IMPL(__imp__sub_831E0CA0) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0CB0"))) PPC_WEAK_FUNC(sub_831E0CB0);
PPC_FUNC_IMPL(__imp__sub_831E0CB0) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0CD4"))) PPC_WEAK_FUNC(sub_831E0CD4);
PPC_FUNC_IMPL(__imp__sub_831E0CD4) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0CF4"))) PPC_WEAK_FUNC(sub_831E0CF4);
PPC_FUNC_IMPL(__imp__sub_831E0CF4) {
	PPC_FUNC_PROLOGUE();
	// stw r3,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r3.u32);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0D04"))) PPC_WEAK_FUNC(sub_831E0D04);
PPC_FUNC_IMPL(__imp__sub_831E0D04) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0D14"))) PPC_WEAK_FUNC(sub_831E0D14);
PPC_FUNC_IMPL(__imp__sub_831E0D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0D18"))) PPC_WEAK_FUNC(sub_831E0D18);
PPC_FUNC_IMPL(__imp__sub_831E0D18) {
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
	// bl 0x831ce0f8
	ctx.lr = 0x831E0D2C;
	sub_831CE0F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831e0d4c
	if (!cr0.eq) goto loc_831E0D4C;
loc_831E0D34:
	// bl 0x831d3050
	ctx.lr = 0x831E0D38;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e0d70
	goto loc_831E0D70;
loc_831E0D4C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e0d6c
	if (!cr6.eq) goto loc_831E0D6C;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x831d2bf8
	ctx.lr = 0x831E0D60;
	sub_831D2BF8(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e0d34
	if (cr0.eq) goto loc_831E0D34;
loc_831E0D6C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_831E0D70:
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

__attribute__((alias("__imp__sub_831E0D84"))) PPC_WEAK_FUNC(sub_831E0D84);
PPC_FUNC_IMPL(__imp__sub_831E0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E0D88"))) PPC_WEAK_FUNC(sub_831E0D88);
PPC_FUNC_IMPL(__imp__sub_831E0D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10496(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10496);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E0D98;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// bl 0x831d9e80
	ctx.lr = 0x831E0DB8;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831e16f8
	ctx.lr = 0x831E0DC0;
	sub_831E16F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831e1678
	ctx.lr = 0x831E0DC8;
	sub_831E1678(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e0de8
	if (cr0.eq) goto loc_831E0DE8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831E0DE8;
	sub_831CF0D8(ctx, base);
loc_831E0DE8:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x831e15d8
	ctx.lr = 0x831E0DF0;
	sub_831E15D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e0e10
	if (cr0.eq) goto loc_831E0E10;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831E0E10;
	sub_831CF0D8(ctx, base);
loc_831E0E10:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831e1628
	ctx.lr = 0x831E0E18;
	sub_831E1628(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e0e38
	if (cr0.eq) goto loc_831E0E38;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831E0E38;
	sub_831CF0D8(ctx, base);
loc_831E0E38:
	// bl 0x83a2a780
	ctx.lr = 0x831E0E3C;
	sub_83A2A780(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// addi r30,r11,3152
	ctx.r30.s64 = ctx.r11.s64 + 3152;
	// addi r7,r8,3400
	ctx.r7.s64 = ctx.r8.s64 + 3400;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r29,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r29.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,3400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3400, ctx.r9.u32);
	// beq cr6,0x831e0e7c
	if (cr6.eq) goto loc_831E0E7C;
	// bl 0x831cf100
	ctx.lr = 0x831E0E74;
	sub_831CF100(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
loc_831E0E7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d49d0
	ctx.lr = 0x831E0E84;
	sub_832D49D0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e0ef8
	if (cr6.eq) goto loc_831E0EF8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// mulli r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 * 60;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lhz r10,70(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 70);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// beq 0x831e0ebc
	if (cr0.eq) goto loc_831E0EBC;
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
loc_831E0EBC:
	// lhz r10,154(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 154);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831e0eec
	if (cr0.eq) goto loc_831E0EEC;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831e0eec
	if (cr6.eq) goto loc_831E0EEC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x831e0efc
	goto loc_831E0EFC;
loc_831E0EEC:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// b 0x831e0efc
	goto loc_831E0EFC;
loc_831E0EF8:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831E0EFC:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x831e16e8
	ctx.lr = 0x831E0F04;
	sub_831E16E8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x831e16c8
	ctx.lr = 0x831E0F10;
	sub_831E16C8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x831e16d8
	ctx.lr = 0x831E0F1C;
	sub_831E16D8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e0f34
	ctx.lr = 0x831E0F2C;
	sub_831E0F34(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E0D90"))) PPC_WEAK_FUNC(sub_831E0D90);
PPC_FUNC_IMPL(__imp__sub_831E0D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E0D98;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// bl 0x831d9e80
	ctx.lr = 0x831E0DB8;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831e16f8
	ctx.lr = 0x831E0DC0;
	sub_831E16F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831e1678
	ctx.lr = 0x831E0DC8;
	sub_831E1678(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e0de8
	if (cr0.eq) goto loc_831E0DE8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831E0DE8;
	sub_831CF0D8(ctx, base);
loc_831E0DE8:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x831e15d8
	ctx.lr = 0x831E0DF0;
	sub_831E15D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e0e10
	if (cr0.eq) goto loc_831E0E10;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831E0E10;
	sub_831CF0D8(ctx, base);
loc_831E0E10:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831e1628
	ctx.lr = 0x831E0E18;
	sub_831E1628(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e0e38
	if (cr0.eq) goto loc_831E0E38;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831E0E38;
	sub_831CF0D8(ctx, base);
loc_831E0E38:
	// bl 0x83a2a780
	ctx.lr = 0x831E0E3C;
	sub_83A2A780(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// addi r30,r11,3152
	ctx.r30.s64 = ctx.r11.s64 + 3152;
	// addi r7,r8,3400
	ctx.r7.s64 = ctx.r8.s64 + 3400;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r29,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r29.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r9,3400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3400, ctx.r9.u32);
	// beq cr6,0x831e0e7c
	if (cr6.eq) goto loc_831E0E7C;
	// bl 0x831cf100
	ctx.lr = 0x831E0E74;
	sub_831CF100(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
loc_831E0E7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d49d0
	ctx.lr = 0x831E0E84;
	sub_832D49D0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e0ef8
	if (cr6.eq) goto loc_831E0EF8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// mulli r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 * 60;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lhz r10,70(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 70);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// beq 0x831e0ebc
	if (cr0.eq) goto loc_831E0EBC;
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
loc_831E0EBC:
	// lhz r10,154(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 154);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831e0eec
	if (cr0.eq) goto loc_831E0EEC;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831e0eec
	if (cr6.eq) goto loc_831E0EEC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x831e0efc
	goto loc_831E0EFC;
loc_831E0EEC:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// b 0x831e0efc
	goto loc_831E0EFC;
loc_831E0EF8:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831E0EFC:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x831e16e8
	ctx.lr = 0x831E0F04;
	sub_831E16E8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x831e16c8
	ctx.lr = 0x831E0F10;
	sub_831E16C8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x831e16d8
	ctx.lr = 0x831E0F1C;
	sub_831E16D8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e0f34
	ctx.lr = 0x831E0F2C;
	sub_831E0F34(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E0F34"))) PPC_WEAK_FUNC(sub_831E0F34);
PPC_FUNC_IMPL(__imp__sub_831E0F34) {
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
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x831d9c00
	ctx.lr = 0x831E0F48;
	sub_831D9C00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E0F58"))) PPC_WEAK_FUNC(sub_831E0F58);
PPC_FUNC_IMPL(__imp__sub_831E0F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831E0F60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x831e1090
	if (!cr6.eq) goto loc_831E1090;
	// srawi r9,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,400
	ctx.r31.s64 = 400;
	// subf. r28,r5,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r27,r11,3348
	ctx.r27.s64 = ctx.r11.s64 + 3348;
	// addi r26,r9,3296
	ctx.r26.s64 = ctx.r9.s64 + 3296;
	// bne 0x831e0fb4
	if (!cr0.eq) goto loc_831E0FB4;
	// divw r11,r30,r4
	ctx.r11.s32 = PPCDivide(ctx.r30.s32, ctx.r4.s32);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// subf. r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e0fd4
	if (!cr0.eq) goto loc_831E0FD4;
loc_831E0FB4:
	// addi r11,r30,1900
	ctx.r11.s64 = ctx.r30.s64 + 1900;
	// divw r9,r11,r31
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r31.s32);
	// mulli r9,r9,400
	ctx.r9.s64 = ctx.r9.s64 * 400;
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e0fd4
	if (cr0.eq) goto loc_831E0FD4;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// b 0x831e0fdc
	goto loc_831E0FDC;
loc_831E0FD4:
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
loc_831E0FDC:
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r9,r30,299
	ctx.r9.s64 = ctx.r30.s64 + 299;
	// divw r6,r11,r4
	ctx.r6.s32 = PPCDivide(ctx.r11.s32, ctx.r4.s32);
	// divw r9,r9,r31
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r6,r30,365
	ctx.r6.s64 = ctx.r30.s64 * 365;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,-25563
	ctx.r9.s64 = ctx.r9.s64 + -25563;
	// divw r6,r9,r6
	ctx.r6.s32 = PPCDivide(ctx.r9.s32, ctx.r6.s32);
	// mulli r6,r6,7
	ctx.r6.s64 = ctx.r6.s64 * 7;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// mulli r6,r7,7
	ctx.r6.s64 = ctx.r7.s64 * 7;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bgt cr6,0x831e1040
	if (cr6.gt) goto loc_831E1040;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
loc_831E1040:
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// bne cr6,0x831e10f4
	if (!cr6.eq) goto loc_831E10F4;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x831e1060
	if (!cr6.eq) goto loc_831E1060;
	// divw r9,r30,r4
	ctx.r9.s32 = PPCDivide(ctx.r30.s32, ctx.r4.s32);
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// subf. r9,r9,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831e107c
	if (!cr0.eq) goto loc_831E107C;
loc_831E1060:
	// addi r9,r30,1900
	ctx.r9.s64 = ctx.r30.s64 + 1900;
	// divw r8,r9,r31
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r31.s32);
	// mulli r8,r8,400
	ctx.r8.s64 = ctx.r8.s64 * 400;
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831e107c
	if (cr0.eq) goto loc_831E107C;
	// lwzx r9,r29,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// b 0x831e1080
	goto loc_831E1080;
loc_831E107C:
	// lwzx r9,r29,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
loc_831E1080:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x831e10f4
	if (!cr6.gt) goto loc_831E10F4;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// b 0x831e10f4
	goto loc_831E10F4;
loc_831E1090:
	// srawi r11,r30,2
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e10b8
	if (!cr0.eq) goto loc_831E10B8;
	// li r11,100
	ctx.r11.s64 = 100;
	// divw r11,r30,r11
	ctx.r11.s32 = PPCDivide(ctx.r30.s32, ctx.r11.s32);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// subf. r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e10dc
	if (!cr0.eq) goto loc_831E10DC;
loc_831E10B8:
	// addi r11,r30,1900
	ctx.r11.s64 = ctx.r30.s64 + 1900;
	// li r8,400
	ctx.r8.s64 = 400;
	// divw r8,r11,r8
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r8.s32);
	// mulli r8,r8,400
	ctx.r8.s64 = ctx.r8.s64 * 400;
	// subf. r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e10dc
	if (cr0.eq) goto loc_831E10DC;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// addi r8,r8,3348
	ctx.r8.s64 = ctx.r8.s64 + 3348;
	// b 0x831e10e4
	goto loc_831E10E4;
loc_831E10DC:
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// addi r8,r8,3296
	ctx.r8.s64 = ctx.r8.s64 + 3296;
loc_831E10E4:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_831E10F4:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x831e113c
	if (!cr6.eq) goto loc_831E113C;
	// addi r8,r7,3400
	ctx.r8.s64 = ctx.r7.s64 + 3400;
	// stw r30,3400(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3400, ctx.r30.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_831E1134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_831E113C:
	// addi r31,r7,3400
	ctx.r31.s64 = ctx.r7.s64 + 3400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bl 0x831e1628
	ctx.lr = 0x831E1150;
	sub_831E1628(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e11b4
	if (!cr0.eq) goto loc_831E11B4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x831e1184
	if (!cr0.lt) goto loc_831E1184;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addis r11,r11,1318
	ctx.r11.s64 = ctx.r11.s64 + 86376448;
	// addi r11,r11,23552
	ctx.r11.s64 = ctx.r11.s64 + 23552;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x831e11a4
	goto loc_831E11A4;
loc_831E1184:
	// lis r10,1318
	ctx.r10.s64 = 86376448;
	// ori r10,r10,23552
	ctx.r10.u64 = ctx.r10.u64 | 23552;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831e11ac
	if (cr6.lt) goto loc_831E11AC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_831E11A4:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_831E11AC:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x831e1134
	goto loc_831E1134;
loc_831E11B4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831E11CC;
	sub_831CF0D8(ctx, base);
}

__attribute__((alias("__imp__sub_831E11CC"))) PPC_WEAK_FUNC(sub_831E11CC);
PPC_FUNC_IMPL(__imp__sub_831E11CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E11D0"))) PPC_WEAK_FUNC(sub_831E11D0);
PPC_FUNC_IMPL(__imp__sub_831E11D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831E11D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831e15d8
	ctx.lr = 0x831E11F0;
	sub_831E15D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e1494
	if (!cr0.eq) goto loc_831E1494;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e1210
	if (!cr6.eq) goto loc_831E1210;
loc_831E1204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E1208:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831E1210:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r27,r11,3400
	ctx.r27.s64 = ctx.r11.s64 + 3400;
	// lwz r11,3400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3400);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bne cr6,0x831e1234
	if (!cr6.eq) goto loc_831E1234;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// beq cr6,0x831e13dc
	if (cr6.eq) goto loc_831E13DC;
loc_831E1234:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r31,r11,3152
	ctx.r31.s64 = ctx.r11.s64 + 3152;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e1360
	if (cr6.eq) goto loc_831E1360;
	// lhz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 152);
	// lhz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 164);
	// lhz r30,162(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 162);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831e1298
	if (!cr0.eq) goto loc_831E1298;
	// lhz r4,166(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 166);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r6,158(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// lhz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lhz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 160);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 156);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x831e0f58
	ctx.lr = 0x831E1294;
	sub_831E0F58(ctx, base);
	// b 0x831e12cc
	goto loc_831E12CC;
loc_831E1298:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r9,166(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 166);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r11,158(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 158);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 160);
	// lhz r6,154(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bl 0x831e0f58
	ctx.lr = 0x831E12CC;
	sub_831E0F58(ctx, base);
loc_831E12CC:
	// lhz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831e1320
	if (!cr0.eq) goto loc_831E1320;
	// lhz r3,78(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r6,74(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r30,82(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// lhz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lhz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lhz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// lhz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x831e0f58
	ctx.lr = 0x831E131C;
	sub_831E0F58(ctx, base);
	// b 0x831e13dc
	goto loc_831E13DC;
loc_831E1320:
	// lhz r9,82(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r29,78(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lhz r6,70(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// bl 0x831e0f58
	ctx.lr = 0x831E135C;
	sub_831E0F58(ctx, base);
	// b 0x831e13dc
	goto loc_831E13DC;
loc_831E1360:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r31,11
	ctx.r31.s64 = 11;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r5,107
	cr6.compare<int32_t>(ctx.r5.s32, 107, xer);
	// bge cr6,0x831e1388
	if (!cr6.lt) goto loc_831E1388;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r31,10
	ctx.r31.s64 = 10;
	// li r29,5
	ctx.r29.s64 = 5;
loc_831E1388:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831e0f58
	ctx.lr = 0x831E13AC;
	sub_831E0F58(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831e0f58
	ctx.lr = 0x831E13DC;
	sub_831E0F58(ctx, base);
loc_831E13DC:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x831e1418
	if (!cr6.lt) goto loc_831E1418;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831e1204
	if (cr6.lt) goto loc_831E1204;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x831e1204
	if (cr6.gt) goto loc_831E1204;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x831e1438
	if (!cr6.gt) goto loc_831E1438;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x831e1438
	if (!cr6.lt) goto loc_831E1438;
loc_831E1410:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831e1208
	goto loc_831E1208;
loc_831E1418:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x831e1410
	if (cr6.lt) goto loc_831E1410;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x831e1410
	if (cr6.gt) goto loc_831E1410;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x831e1438
	if (!cr6.gt) goto loc_831E1438;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831e1204
	if (cr6.lt) goto loc_831E1204;
loc_831E1438:
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mulli r11,r8,60
	ctx.r11.s64 = ctx.r8.s64 * 60;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// bne cr6,0x831e1478
	if (!cr6.eq) goto loc_831E1478;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x831e1208
	goto loc_831E1208;
loc_831E1478:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x831e1208
	goto loc_831E1208;
loc_831E1494:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cf0d8
	ctx.lr = 0x831E14AC;
	sub_831CF0D8(ctx, base);
}

__attribute__((alias("__imp__sub_831E14AC"))) PPC_WEAK_FUNC(sub_831E14AC);
PPC_FUNC_IMPL(__imp__sub_831E14AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E14B0"))) PPC_WEAK_FUNC(sub_831E14B0);
PPC_FUNC_IMPL(__imp__sub_831E14B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10520(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10520);
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
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// lwz r11,3332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e1514
	if (!cr6.eq) goto loc_831E1514;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x831d9e80
	ctx.lr = 0x831E14E8;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,3332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e1508
	if (!cr6.eq) goto loc_831E1508;
	// bl 0x831e0d90
	ctx.lr = 0x831E14FC;
	sub_831E0D90(ctx, base);
	// lwz r11,3332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3332, ctx.r11.u32);
loc_831E1508:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831e152c
	ctx.lr = 0x831E1514;
	sub_831E152C(ctx, base);
loc_831E1514:
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

__attribute__((alias("__imp__sub_831E14B8"))) PPC_WEAK_FUNC(sub_831E14B8);
PPC_FUNC_IMPL(__imp__sub_831E14B8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// lwz r11,3332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e1514
	if (!cr6.eq) goto loc_831E1514;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x831d9e80
	ctx.lr = 0x831E14E8;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,3332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e1508
	if (!cr6.eq) goto loc_831E1508;
	// bl 0x831e0d90
	ctx.lr = 0x831E14FC;
	sub_831E0D90(ctx, base);
	// lwz r11,3332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3332, ctx.r11.u32);
loc_831E1508:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831e152c
	ctx.lr = 0x831E1514;
	sub_831E152C(ctx, base);
loc_831E1514:
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

__attribute__((alias("__imp__sub_831E152C"))) PPC_WEAK_FUNC(sub_831E152C);
PPC_FUNC_IMPL(__imp__sub_831E152C) {
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x831d9c00
	ctx.lr = 0x831E1540;
	sub_831D9C00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E1550"))) PPC_WEAK_FUNC(sub_831E1550);
PPC_FUNC_IMPL(__imp__sub_831E1550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10544(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10544);
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x831d9e80
	ctx.lr = 0x831E157C;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e11d0
	ctx.lr = 0x831E1588;
	sub_831E11D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831e15b4
	ctx.lr = 0x831E1598;
	sub_831E15B4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
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

__attribute__((alias("__imp__sub_831E1558"))) PPC_WEAK_FUNC(sub_831E1558);
PPC_FUNC_IMPL(__imp__sub_831E1558) {
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x831d9e80
	ctx.lr = 0x831E157C;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e11d0
	ctx.lr = 0x831E1588;
	sub_831E11D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831e15b4
	ctx.lr = 0x831E1598;
	sub_831E15B4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
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

__attribute__((alias("__imp__sub_831E15B4"))) PPC_WEAK_FUNC(sub_831E15B4);
PPC_FUNC_IMPL(__imp__sub_831E15B4) {
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x831d9c00
	ctx.lr = 0x831E15C8;
	sub_831D9C00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E15D8"))) PPC_WEAK_FUNC(sub_831E15D8);
PPC_FUNC_IMPL(__imp__sub_831E15D8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831e1608
	if (!cr6.eq) goto loc_831E1608;
	// bl 0x831d3050
	ctx.lr = 0x831E15F4;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E1600;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e1618
	goto loc_831E1618;
loc_831E1608:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,3428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3428);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_831E1618:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E1628"))) PPC_WEAK_FUNC(sub_831E1628);
PPC_FUNC_IMPL(__imp__sub_831E1628) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831e1658
	if (!cr6.eq) goto loc_831E1658;
	// bl 0x831d3050
	ctx.lr = 0x831E1644;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E1650;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e1668
	goto loc_831E1668;
loc_831E1658:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,3432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3432);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_831E1668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E1678"))) PPC_WEAK_FUNC(sub_831E1678);
PPC_FUNC_IMPL(__imp__sub_831E1678) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831e16a8
	if (!cr6.eq) goto loc_831E16A8;
	// bl 0x831d3050
	ctx.lr = 0x831E1694;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E16A0;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e16b8
	goto loc_831E16B8;
loc_831E16A8:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,3424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3424);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_831E16B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E16C8"))) PPC_WEAK_FUNC(sub_831E16C8);
PPC_FUNC_IMPL(__imp__sub_831E16C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,3428
	ctx.r3.s64 = ctx.r11.s64 + 3428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E16D4"))) PPC_WEAK_FUNC(sub_831E16D4);
PPC_FUNC_IMPL(__imp__sub_831E16D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E16D8"))) PPC_WEAK_FUNC(sub_831E16D8);
PPC_FUNC_IMPL(__imp__sub_831E16D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,3432
	ctx.r3.s64 = ctx.r11.s64 + 3432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E16E4"))) PPC_WEAK_FUNC(sub_831E16E4);
PPC_FUNC_IMPL(__imp__sub_831E16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E16E8"))) PPC_WEAK_FUNC(sub_831E16E8);
PPC_FUNC_IMPL(__imp__sub_831E16E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,3424
	ctx.r3.s64 = ctx.r11.s64 + 3424;
	// blr 
	return;
}

