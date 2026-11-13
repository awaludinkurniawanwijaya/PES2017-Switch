#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D0BCF8"))) PPC_WEAK_FUNC(sub_82D0BCF8);
PPC_FUNC_IMPL(__imp__sub_82D0BCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r11,r11,33426
	ctx.r11.u64 = ctx.r11.u64 | 33426;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BD10"))) PPC_WEAK_FUNC(sub_82D0BD10);
PPC_FUNC_IMPL(__imp__sub_82D0BD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,33153
	ctx.r10.u64 = ctx.r11.u64 | 33153;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d0bd34
	if (cr6.lt) goto loc_82D0BD34;
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,33438
	ctx.r10.u64 = ctx.r11.u64 | 33438;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d0bd38
	if (!cr6.gt) goto loc_82D0BD38;
loc_82D0BD34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D0BD38:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BD40"))) PPC_WEAK_FUNC(sub_82D0BD40);
PPC_FUNC_IMPL(__imp__sub_82D0BD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,33441
	ctx.r10.u64 = ctx.r11.u64 | 33441;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d0bd64
	if (cr6.lt) goto loc_82D0BD64;
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,33727
	ctx.r10.u64 = ctx.r11.u64 | 33727;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d0bd68
	if (!cr6.gt) goto loc_82D0BD68;
loc_82D0BD64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D0BD68:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BD70"))) PPC_WEAK_FUNC(sub_82D0BD70);
PPC_FUNC_IMPL(__imp__sub_82D0BD70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,48
	cr6.compare<uint32_t>(ctx.r3.u32, 48, xer);
	// blt cr6,0x82d0bd80
	if (cr6.lt) goto loc_82D0BD80;
	// cmplwi cr6,r3,57
	cr6.compare<uint32_t>(ctx.r3.u32, 57, xer);
	// ble cr6,0x82d0bdac
	if (!cr6.gt) goto loc_82D0BDAC;
loc_82D0BD80:
	// cmplwi cr6,r3,65
	cr6.compare<uint32_t>(ctx.r3.u32, 65, xer);
	// blt cr6,0x82d0bd90
	if (cr6.lt) goto loc_82D0BD90;
	// cmplwi cr6,r3,90
	cr6.compare<uint32_t>(ctx.r3.u32, 90, xer);
	// ble cr6,0x82d0bdac
	if (!cr6.gt) goto loc_82D0BDAC;
loc_82D0BD90:
	// cmplwi cr6,r3,97
	cr6.compare<uint32_t>(ctx.r3.u32, 97, xer);
	// blt cr6,0x82d0bda0
	if (cr6.lt) goto loc_82D0BDA0;
	// cmplwi cr6,r3,122
	cr6.compare<uint32_t>(ctx.r3.u32, 122, xer);
	// ble cr6,0x82d0bdac
	if (!cr6.gt) goto loc_82D0BDAC;
loc_82D0BDA0:
	// cmplwi cr6,r3,49838
	cr6.compare<uint32_t>(ctx.r3.u32, 49838, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d0bdb0
	if (!cr6.eq) goto loc_82D0BDB0;
loc_82D0BDAC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0BDB0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BDB8"))) PPC_WEAK_FUNC(sub_82D0BDB8);
PPC_FUNC_IMPL(__imp__sub_82D0BDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-30272
	ctx.r9.s64 = ctx.r11.s64 + -30272;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BDCC"))) PPC_WEAK_FUNC(sub_82D0BDCC);
PPC_FUNC_IMPL(__imp__sub_82D0BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BDD0"))) PPC_WEAK_FUNC(sub_82D0BDD0);
PPC_FUNC_IMPL(__imp__sub_82D0BDD0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82bee188
	ctx.lr = 0x82D0BE24;
	sub_82BEE188(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82D0BE40"))) PPC_WEAK_FUNC(sub_82D0BE40);
PPC_FUNC_IMPL(__imp__sub_82D0BE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x82d0be60
	if (cr6.lt) goto loc_82D0BE60;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bgt cr6,0x82d0be60
	if (cr6.gt) goto loc_82D0BE60;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82d0be80
	goto loc_82D0BE80;
loc_82D0BE60:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// blt cr6,0x82d0be7c
	if (cr6.lt) goto loc_82D0BE7C;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, xer);
	// bgt cr6,0x82d0be7c
	if (cr6.gt) goto loc_82D0BE7C;
	// addi r11,r11,169
	ctx.r11.s64 = ctx.r11.s64 + 169;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82d0be80
	goto loc_82D0BE80;
loc_82D0BE7C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D0BE80:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x82d0beb0
	if (cr6.lt) goto loc_82D0BEB0;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bgt cr6,0x82d0beb0
	if (cr6.gt) goto loc_82D0BEB0;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
loc_82D0BEB0:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// blt cr6,0x82d0bedc
	if (cr6.lt) goto loc_82D0BEDC;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, xer);
	// bgt cr6,0x82d0bedc
	if (cr6.gt) goto loc_82D0BEDC;
	// addi r11,r11,169
	ctx.r11.s64 = ctx.r11.s64 + 169;
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
loc_82D0BEDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0BEF4"))) PPC_WEAK_FUNC(sub_82D0BEF4);
PPC_FUNC_IMPL(__imp__sub_82D0BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BEF8"))) PPC_WEAK_FUNC(sub_82D0BEF8);
PPC_FUNC_IMPL(__imp__sub_82D0BEF8) {
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
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-30272
	ctx.r8.s64 = ctx.r10.s64 + -30272;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0bf50
	if (!cr6.eq) goto loc_82D0BF50;
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
loc_82D0BF50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D0BF60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82D0BF7C"))) PPC_WEAK_FUNC(sub_82D0BF7C);
PPC_FUNC_IMPL(__imp__sub_82D0BF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0BF80"))) PPC_WEAK_FUNC(sub_82D0BF80);
PPC_FUNC_IMPL(__imp__sub_82D0BF80) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r10,-99
	ctx.r10.s64 = ctx.r10.s64 + -99;
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// bgt cr6,0x82d0c248
	if (cr6.gt) goto loc_82D0C248;
	// lis r12,-32047
	ctx.r12.s64 = -2100232192;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16444
	ctx.r12.s64 = ctx.r12.s64 + -16444;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82D0C018;
	case 1:
		goto loc_82D0C080;
	case 2:
		goto loc_82D0C248;
	case 3:
		goto loc_82D0C248;
	case 4:
		goto loc_82D0C248;
	case 5:
		goto loc_82D0C248;
	case 6:
		goto loc_82D0C0A0;
	case 7:
		goto loc_82D0C0E8;
	case 8:
		goto loc_82D0C108;
	case 9:
		goto loc_82D0C128;
	case 10:
		goto loc_82D0C208;
	case 11:
		goto loc_82D0C148;
	case 12:
		goto loc_82D0C168;
	case 13:
		goto loc_82D0C188;
	case 14:
		goto loc_82D0C1A8;
	case 15:
		goto loc_82D0C1C8;
	case 16:
		goto loc_82D0C1E8;
	case 17:
		goto loc_82D0C248;
	case 18:
		goto loc_82D0C248;
	case 19:
		goto loc_82D0C248;
	case 20:
		goto loc_82D0C228;
	default:
		return;
	}
	// lwz r22,-16360(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16360);
	// lwz r22,-16256(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16256);
	// lwz r22,-15800(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15800);
	// lwz r22,-15800(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15800);
	// lwz r22,-15800(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15800);
	// lwz r22,-15800(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15800);
	// lwz r22,-16224(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16224);
	// lwz r22,-16152(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16152);
	// lwz r22,-16120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16120);
	// lwz r22,-16088(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16088);
	// lwz r22,-15864(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15864);
	// lwz r22,-16056(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16056);
	// lwz r22,-16024(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -16024);
	// lwz r22,-15992(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15992);
	// lwz r22,-15960(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15960);
	// lwz r22,-15928(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15928);
	// lwz r22,-15896(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15896);
	// lwz r22,-15800(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15800);
	// lwz r22,-15800(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15800);
	// lwz r22,-15800(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15800);
	// lwz r22,-15832(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -15832);
loc_82D0C018:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// bl 0x82d0be40
	ctx.lr = 0x82D0C038;
	sub_82D0BE40(ctx, base);
	// stb r3,28(r7)
	PPC_STORE_U8(ctx.r7.u32 + 28, ctx.r3.u8);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0be40
	ctx.lr = 0x82D0C048;
	sub_82D0BE40(ctx, base);
	// stb r3,29(r7)
	PPC_STORE_U8(ctx.r7.u32 + 29, ctx.r3.u8);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0be40
	ctx.lr = 0x82D0C058;
	sub_82D0BE40(ctx, base);
	// stb r3,30(r7)
	PPC_STORE_U8(ctx.r7.u32 + 30, ctx.r3.u8);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0be40
	ctx.lr = 0x82D0C068;
	sub_82D0BE40(ctx, base);
	// stb r3,31(r7)
	PPC_STORE_U8(ctx.r7.u32 + 31, ctx.r3.u8);
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
loc_82D0C080:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C0A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x82d0c0cc
	if (cr6.lt) goto loc_82D0C0CC;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// ble cr6,0x82d0c0d0
	if (!cr6.gt) goto loc_82D0C0D0;
loc_82D0C0CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D0C0D0:
	// stw r11,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
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
loc_82D0C0E8:
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0bef8
	ctx.lr = 0x82D0C0F8;
	sub_82D0BEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C108:
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0bef8
	ctx.lr = 0x82D0C118;
	sub_82D0BEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C128:
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0bef8
	ctx.lr = 0x82D0C138;
	sub_82D0BEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C148:
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0bef8
	ctx.lr = 0x82D0C158;
	sub_82D0BEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C168:
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0bef8
	ctx.lr = 0x82D0C178;
	sub_82D0BEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C188:
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0bef8
	ctx.lr = 0x82D0C198;
	sub_82D0BEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C1A8:
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0bef8
	ctx.lr = 0x82D0C1B8;
	sub_82D0BEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C1C8:
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82d0bef8
	ctx.lr = 0x82D0C1D8;
	sub_82D0BEF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C1E8:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C208:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C228:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0C248:
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

__attribute__((alias("__imp__sub_82D0C25C"))) PPC_WEAK_FUNC(sub_82D0C25C);
PPC_FUNC_IMPL(__imp__sub_82D0C25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C260"))) PPC_WEAK_FUNC(sub_82D0C260);
PPC_FUNC_IMPL(__imp__sub_82D0C260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0c28c
	if (!cr6.eq) goto loc_82D0C28C;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D0C28C:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x82d0c2a4
	if (!cr6.eq) goto loc_82D0C2A4;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D0C2A4:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bne cr6,0x82d0c2c0
	if (!cr6.eq) goto loc_82D0C2C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D0C2C0:
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bne cr6,0x82d0c2d0
	if (!cr6.eq) goto loc_82D0C2D0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82d0bf80
	sub_82D0BF80(ctx, base);
	return;
loc_82D0C2D0:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C2E4"))) PPC_WEAK_FUNC(sub_82D0C2E4);
PPC_FUNC_IMPL(__imp__sub_82D0C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C2E8"))) PPC_WEAK_FUNC(sub_82D0C2E8);
PPC_FUNC_IMPL(__imp__sub_82D0C2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r10,7
	ctx.r10.s64 = 7;
loc_82D0C304:
	// slw r31,r6,r10
	ctx.r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// and r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d0c330
	if (!cr6.eq) goto loc_82D0C330;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bge cr6,0x82d0c304
	if (!cr6.lt) goto loc_82D0C304;
loc_82D0C330:
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// ble cr6,0x82d0c344
	if (!cr6.gt) goto loc_82D0C344;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82D0C344:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82d0c374
	if (cr6.eq) goto loc_82D0C374;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82D0C360:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// slw r6,r8,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bdnz 0x82d0c360
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0C360;
loc_82D0C374:
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C388"))) PPC_WEAK_FUNC(sub_82D0C388);
PPC_FUNC_IMPL(__imp__sub_82D0C388) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d0c2e8
	ctx.lr = 0x82D0C3B8;
	sub_82D0C2E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0c3dc
	if (!cr6.eq) goto loc_82D0C3DC;
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
loc_82D0C3DC:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,55684
	cr6.compare<uint32_t>(ctx.r10.u32, 55684, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82d0c49c
	if (!cr6.eq) goto loc_82D0C49C;
	// lbzux r11,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82d0c49c
	if (cr6.lt) goto loc_82D0C49C;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// beq cr6,0x82d0c49c
	if (cr6.eq) goto loc_82D0C49C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82d0c2e8
	ctx.lr = 0x82D0C420;
	sub_82D0C2E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0c49c
	if (cr6.eq) goto loc_82D0C49C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,55458
	cr6.compare<uint32_t>(ctx.r11.u32, 55458, xer);
	// bne cr6,0x82d0c444
	if (!cr6.eq) goto loc_82D0C444;
	// lis r8,239
	ctx.r8.s64 = 15663104;
	// ori r7,r8,48053
	ctx.r7.u64 = ctx.r8.u64 | 48053;
	// b 0x82d0c47c
	goto loc_82D0C47C;
loc_82D0C444:
	// cmplwi cr6,r11,55459
	cr6.compare<uint32_t>(ctx.r11.u32, 55459, xer);
	// bne cr6,0x82d0c458
	if (!cr6.eq) goto loc_82D0C458;
	// lis r8,239
	ctx.r8.s64 = 15663104;
	// ori r7,r8,48055
	ctx.r7.u64 = ctx.r8.u64 | 48055;
	// b 0x82d0c47c
	goto loc_82D0C47C;
loc_82D0C458:
	// cmplwi cr6,r11,55461
	cr6.compare<uint32_t>(ctx.r11.u32, 55461, xer);
	// bne cr6,0x82d0c46c
	if (!cr6.eq) goto loc_82D0C46C;
	// lis r8,239
	ctx.r8.s64 = 15663104;
	// ori r7,r8,48057
	ctx.r7.u64 = ctx.r8.u64 | 48057;
	// b 0x82d0c47c
	goto loc_82D0C47C;
loc_82D0C46C:
	// cmplwi cr6,r11,55463
	cr6.compare<uint32_t>(ctx.r11.u32, 55463, xer);
	// bne cr6,0x82d0c49c
	if (!cr6.eq) goto loc_82D0C49C;
	// lis r8,239
	ctx.r8.s64 = 15663104;
	// ori r7,r8,48059
	ctx.r7.u64 = ctx.r8.u64 | 48059;
loc_82D0C47C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
loc_82D0C49C:
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

__attribute__((alias("__imp__sub_82D0C4B4"))) PPC_WEAK_FUNC(sub_82D0C4B4);
PPC_FUNC_IMPL(__imp__sub_82D0C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C4B8"))) PPC_WEAK_FUNC(sub_82D0C4B8);
PPC_FUNC_IMPL(__imp__sub_82D0C4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,32897
	ctx.r10.u64 = ctx.r11.u64 | 32897;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d0c4d0
	if (!cr6.eq) goto loc_82D0C4D0;
loc_82D0C4C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D0C4D0:
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,32898
	ctx.r10.u64 = ctx.r11.u64 | 32898;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0c4f4
	if (cr6.eq) goto loc_82D0C4F4;
	// cmplwi cr6,r3,63
	cr6.compare<uint32_t>(ctx.r3.u32, 63, xer);
	// beq cr6,0x82d0c4f4
	if (cr6.eq) goto loc_82D0C4F4;
	// cmplwi cr6,r3,33
	cr6.compare<uint32_t>(ctx.r3.u32, 33, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d0c4f8
	if (!cr6.eq) goto loc_82D0C4F8;
loc_82D0C4F4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0C4F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0c4c8
	if (!cr6.eq) goto loc_82D0C4C8;
	// cmplwi cr6,r3,41
	cr6.compare<uint32_t>(ctx.r3.u32, 41, xer);
	// beq cr6,0x82d0c524
	if (cr6.eq) goto loc_82D0C524;
	// cmplwi cr6,r3,93
	cr6.compare<uint32_t>(ctx.r3.u32, 93, xer);
	// beq cr6,0x82d0c524
	if (cr6.eq) goto loc_82D0C524;
	// cmplwi cr6,r3,62
	cr6.compare<uint32_t>(ctx.r3.u32, 62, xer);
	// beq cr6,0x82d0c524
	if (cr6.eq) goto loc_82D0C524;
	// cmplwi cr6,r3,125
	cr6.compare<uint32_t>(ctx.r3.u32, 125, xer);
	// bne cr6,0x82d0c528
	if (!cr6.eq) goto loc_82D0C528;
loc_82D0C524:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0C528:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0c4c8
	if (!cr6.eq) goto loc_82D0C4C8;
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,33724
	ctx.r11.u64 = ctx.r11.u64 | 33724;
	// addi r9,r9,2096
	ctx.r9.s64 = ctx.r9.s64 + 2096;
loc_82D0C548:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d0c4c8
	if (cr6.eq) goto loc_82D0C4C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0c548
	if (!cr6.eq) goto loc_82D0C548;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C56C"))) PPC_WEAK_FUNC(sub_82D0C56C);
PPC_FUNC_IMPL(__imp__sub_82D0C56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C570"))) PPC_WEAK_FUNC(sub_82D0C570);
PPC_FUNC_IMPL(__imp__sub_82D0C570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,239
	ctx.r11.s64 = 15663104;
	// ori r10,r11,48264
	ctx.r10.u64 = ctx.r11.u64 | 48264;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0c5c0
	if (cr6.eq) goto loc_82D0C5C0;
	// lis r11,227
	ctx.r11.s64 = 14876672;
	// ori r10,r11,32908
	ctx.r10.u64 = ctx.r11.u64 | 32908;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0c5c0
	if (cr6.eq) goto loc_82D0C5C0;
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// beq cr6,0x82d0c5b4
	if (cr6.eq) goto loc_82D0C5B4;
	// cmplwi cr6,r3,91
	cr6.compare<uint32_t>(ctx.r3.u32, 91, xer);
	// beq cr6,0x82d0c5b4
	if (cr6.eq) goto loc_82D0C5B4;
	// cmplwi cr6,r3,60
	cr6.compare<uint32_t>(ctx.r3.u32, 60, xer);
	// beq cr6,0x82d0c5b4
	if (cr6.eq) goto loc_82D0C5B4;
	// cmplwi cr6,r3,123
	cr6.compare<uint32_t>(ctx.r3.u32, 123, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82d0c5b8
	if (!cr6.eq) goto loc_82D0C5B8;
loc_82D0C5B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D0C5B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82D0C5C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C5C8"))) PPC_WEAK_FUNC(sub_82D0C5C8);
PPC_FUNC_IMPL(__imp__sub_82D0C5C8) {
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
	// bl 0x82d0bdd0
	ctx.lr = 0x82D0C5E0;
	sub_82D0BDD0(ctx, base);
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

__attribute__((alias("__imp__sub_82D0C5F8"))) PPC_WEAK_FUNC(sub_82D0C5F8);
PPC_FUNC_IMPL(__imp__sub_82D0C5F8) {
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
	// bl 0x82d0bdd0
	ctx.lr = 0x82D0C618;
	sub_82D0BDD0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82d0c63c
	if (cr6.lt) goto loc_82D0C63C;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// beq cr6,0x82d0c63c
	if (cr6.eq) goto loc_82D0C63C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0c388
	ctx.lr = 0x82D0C638;
	sub_82D0C388(ctx, base);
	// b 0x82d0c648
	goto loc_82D0C648;
loc_82D0C63C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0c260
	ctx.lr = 0x82D0C648;
	sub_82D0C260(ctx, base);
loc_82D0C648:
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

__attribute__((alias("__imp__sub_82D0C660"))) PPC_WEAK_FUNC(sub_82D0C660);
PPC_FUNC_IMPL(__imp__sub_82D0C660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d0c680
	if (!cr6.eq) goto loc_82D0C680;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82D0C680:
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C688"))) PPC_WEAK_FUNC(sub_82D0C688);
PPC_FUNC_IMPL(__imp__sub_82D0C688) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2548
	ctx.r9.s64 = ctx.r10.s64 + 2548;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C6D4"))) PPC_WEAK_FUNC(sub_82D0C6D4);
PPC_FUNC_IMPL(__imp__sub_82D0C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C6D8"))) PPC_WEAK_FUNC(sub_82D0C6D8);
PPC_FUNC_IMPL(__imp__sub_82D0C6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C720"))) PPC_WEAK_FUNC(sub_82D0C720);
PPC_FUNC_IMPL(__imp__sub_82D0C720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C73C"))) PPC_WEAK_FUNC(sub_82D0C73C);
PPC_FUNC_IMPL(__imp__sub_82D0C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C740"))) PPC_WEAK_FUNC(sub_82D0C740);
PPC_FUNC_IMPL(__imp__sub_82D0C740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0C75C"))) PPC_WEAK_FUNC(sub_82D0C75C);
PPC_FUNC_IMPL(__imp__sub_82D0C75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C760"))) PPC_WEAK_FUNC(sub_82D0C760);
PPC_FUNC_IMPL(__imp__sub_82D0C760) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r10,2576
	ctx.r9.s64 = ctx.r10.s64 + 2576;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x82bee188
	ctx.lr = 0x82D0C7C4;
	sub_82BEE188(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82bee188
	ctx.lr = 0x82D0C7DC;
	sub_82BEE188(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
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

__attribute__((alias("__imp__sub_82D0C824"))) PPC_WEAK_FUNC(sub_82D0C824);
PPC_FUNC_IMPL(__imp__sub_82D0C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C828"))) PPC_WEAK_FUNC(sub_82D0C828);
PPC_FUNC_IMPL(__imp__sub_82D0C828) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,2576
	ctx.r10.s64 = ctx.r11.s64 + 2576;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d0c868
	if (cr6.eq) goto loc_82D0C868;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,-30188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30188);
	// bl 0x82d10070
	ctx.lr = 0x82D0C860;
	sub_82D10070(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
loc_82D0C868:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,-2300
	ctx.r10.s64 = ctx.r11.s64 + -2300;
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

__attribute__((alias("__imp__sub_82D0C888"))) PPC_WEAK_FUNC(sub_82D0C888);
PPC_FUNC_IMPL(__imp__sub_82D0C888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D0C890;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d0c95c
	if (cr6.eq) goto loc_82D0C95C;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0c95c
	if (cr6.eq) goto loc_82D0C95C;
	// bl 0x82d0f3e8
	ctx.lr = 0x82D0C8B4;
	sub_82D0F3E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x82d0f3f0
	ctx.lr = 0x82D0C8C0;
	sub_82D0F3F0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d0c95c
	if (cr6.eq) goto loc_82D0C95C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0c95c
	if (cr6.eq) goto loc_82D0C95C;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fdivs f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f5.f64));
	// stfs f1,76(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f1,56(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fdivs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f10.f64));
	// stfs f2,72(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82D0C95C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0C964"))) PPC_WEAK_FUNC(sub_82D0C964);
PPC_FUNC_IMPL(__imp__sub_82D0C964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0C968"))) PPC_WEAK_FUNC(sub_82D0C968);
PPC_FUNC_IMPL(__imp__sub_82D0C968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// stfs f7,52(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f4,48(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fadds f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fadds f8,f9,f4
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f8,56(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,64(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CA20"))) PPC_WEAK_FUNC(sub_82D0CA20);
PPC_FUNC_IMPL(__imp__sub_82D0CA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fadds f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f8,52(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f7,60(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CA54"))) PPC_WEAK_FUNC(sub_82D0CA54);
PPC_FUNC_IMPL(__imp__sub_82D0CA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CA58"))) PPC_WEAK_FUNC(sub_82D0CA58);
PPC_FUNC_IMPL(__imp__sub_82D0CA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f9,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fadds f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f8,56(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f7,64(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CA8C"))) PPC_WEAK_FUNC(sub_82D0CA8C);
PPC_FUNC_IMPL(__imp__sub_82D0CA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CA90"))) PPC_WEAK_FUNC(sub_82D0CA90);
PPC_FUNC_IMPL(__imp__sub_82D0CA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f11,44(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CAB4"))) PPC_WEAK_FUNC(sub_82D0CAB4);
PPC_FUNC_IMPL(__imp__sub_82D0CAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CAB8"))) PPC_WEAK_FUNC(sub_82D0CAB8);
PPC_FUNC_IMPL(__imp__sub_82D0CAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f2,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f7,f2,f9
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f7,56(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,48(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f7,64(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CAFC"))) PPC_WEAK_FUNC(sub_82D0CAFC);
PPC_FUNC_IMPL(__imp__sub_82D0CAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CB00"))) PPC_WEAK_FUNC(sub_82D0CB00);
PPC_FUNC_IMPL(__imp__sub_82D0CB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0cb1c
	if (cr6.eq) goto loc_82D0CB1C;
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r11,75(r3)
	PPC_STORE_U8(ctx.r3.u32 + 75, ctx.r11.u8);
	// blr 
	return;
loc_82D0CB1C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CB28"))) PPC_WEAK_FUNC(sub_82D0CB28);
PPC_FUNC_IMPL(__imp__sub_82D0CB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CB38"))) PPC_WEAK_FUNC(sub_82D0CB38);
PPC_FUNC_IMPL(__imp__sub_82D0CB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82d0cb78
	if (!cr6.gt) goto loc_82D0CB78;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgt cr6,0x82d0cb78
	if (cr6.gt) goto loc_82D0CB78;
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// li r10,255
	ctx.r10.s64 = 255;
	// lbz r9,73(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// lbz r8,74(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r10,79(r3)
	PPC_STORE_U8(ctx.r3.u32 + 79, ctx.r10.u8);
	// rlwinm r5,r8,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r7,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r7.u8);
	// stb r6,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r6.u8);
	// stb r5,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, ctx.r5.u8);
	// blr 
	return;
loc_82D0CB78:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CB84"))) PPC_WEAK_FUNC(sub_82D0CB84);
PPC_FUNC_IMPL(__imp__sub_82D0CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CB88"))) PPC_WEAK_FUNC(sub_82D0CB88);
PPC_FUNC_IMPL(__imp__sub_82D0CB88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2604
	ctx.r9.s64 = ctx.r10.s64 + 2604;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CBCC"))) PPC_WEAK_FUNC(sub_82D0CBCC);
PPC_FUNC_IMPL(__imp__sub_82D0CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CBD0"))) PPC_WEAK_FUNC(sub_82D0CBD0);
PPC_FUNC_IMPL(__imp__sub_82D0CBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CC0C"))) PPC_WEAK_FUNC(sub_82D0CC0C);
PPC_FUNC_IMPL(__imp__sub_82D0CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CC10"))) PPC_WEAK_FUNC(sub_82D0CC10);
PPC_FUNC_IMPL(__imp__sub_82D0CC10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CC2C"))) PPC_WEAK_FUNC(sub_82D0CC2C);
PPC_FUNC_IMPL(__imp__sub_82D0CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CC30"))) PPC_WEAK_FUNC(sub_82D0CC30);
PPC_FUNC_IMPL(__imp__sub_82D0CC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0CC4C"))) PPC_WEAK_FUNC(sub_82D0CC4C);
PPC_FUNC_IMPL(__imp__sub_82D0CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CC50"))) PPC_WEAK_FUNC(sub_82D0CC50);
PPC_FUNC_IMPL(__imp__sub_82D0CC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D0CC58;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82d0ced0
	if (!cr6.eq) goto loc_82D0CED0;
	// lbz r4,73(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// rlwinm r5,r11,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lbz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lbz r3,74(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// lfs f13,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f0,21700(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21700);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x82d0cd80
	if (cr6.eq) goto loc_82D0CD80;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82D0CD80:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb3e0
	ctx.lr = 0x82D0CD90;
	sub_833CB3E0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82d0ce7c
	if (!cr6.eq) goto loc_82D0CE7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f6,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfs f3,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,20(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfd f2,96(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,24(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfs f9,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,44(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f5,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfs f3,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f2,f4
	ctx.f2.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f2,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f2.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f1,96(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// stfs f3,60(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,64(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// bl 0x82d0c888
	ctx.lr = 0x82D0CE7C;
	sub_82D0C888(ctx, base);
loc_82D0CE7C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0ced0
	if (cr6.eq) goto loc_82D0CED0;
	// bl 0x825832f0
	ctx.lr = 0x82D0CE8C;
	sub_825832F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83779190
	ctx.lr = 0x82D0CE98;
	sub_83779190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833cb570
	ctx.lr = 0x82D0CEA4;
	sub_833CB570(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb348
	ctx.lr = 0x82D0CEB0;
	sub_833CB348(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d0ced0
	if (cr6.eq) goto loc_82D0CED0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r5,r27,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cb500
	ctx.lr = 0x82D0CED0;
	sub_833CB500(ctx, base);
loc_82D0CED0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0CED8"))) PPC_WEAK_FUNC(sub_82D0CED8);
PPC_FUNC_IMPL(__imp__sub_82D0CED8) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,2604
	ctx.r9.s64 = ctx.r11.s64 + 2604;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d0cf40
	if (cr6.eq) goto loc_82D0CF40;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D0CF1C;
	sub_82595150(ctx, base);
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d0cf38
	if (cr6.eq) goto loc_82D0CF38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0f2e8
	ctx.lr = 0x82D0CF30;
	sub_82D0F2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D0CF38;
	sub_82416268(ctx, base);
loc_82D0CF38:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D0CF40;
	sub_82595170(ctx, base);
loc_82D0CF40:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,-2300
	ctx.r10.s64 = ctx.r11.s64 + -2300;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D0CF64"))) PPC_WEAK_FUNC(sub_82D0CF64);
PPC_FUNC_IMPL(__imp__sub_82D0CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0CF68"))) PPC_WEAK_FUNC(sub_82D0CF68);
PPC_FUNC_IMPL(__imp__sub_82D0CF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D0CF70;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82d0f368
	ctx.lr = 0x82D0CF88;
	sub_82D0F368(ctx, base);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r27,r3,6
	ctx.r27.s64 = ctx.r3.s64 + 6;
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// bl 0x82d0f350
	ctx.lr = 0x82D0CF98;
	sub_82D0F350(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,36(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f0,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82D0CFF8;
	sub_82572FA0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825832e8
	ctx.lr = 0x82D0D000;
	sub_825832E8(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82D0D010;
	sub_82572FA0(ctx, base);
	// lwz r6,36(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82D0D024;
	sub_82572FA0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825832f0
	ctx.lr = 0x82D0D02C;
	sub_825832F0(ctx, base);
	// add r5,r3,r27
	ctx.r5.u64 = ctx.r3.u64 + ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82D0D040;
	sub_82572FA0(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// srawi r6,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stb r4,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r4.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// srawi r4,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82D0D098;
	sub_82572FA0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835ee688
	ctx.lr = 0x82D0D0A8;
	sub_835EE688(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x82D0D0B4;
	sub_82572FA0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0D0BC"))) PPC_WEAK_FUNC(sub_82D0D0BC);
PPC_FUNC_IMPL(__imp__sub_82D0D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D0C0"))) PPC_WEAK_FUNC(sub_82D0D0C0);
PPC_FUNC_IMPL(__imp__sub_82D0D0C0) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ecc50
	ctx.lr = 0x82D0D0F0;
	sub_833ECC50(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d0d114
	if (cr6.eq) goto loc_82D0D114;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833e3748
	ctx.lr = 0x82D0D10C;
	sub_833E3748(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d0d118
	goto loc_82D0D118;
loc_82D0D114:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82D0D118:
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

__attribute__((alias("__imp__sub_82D0D130"))) PPC_WEAK_FUNC(sub_82D0D130);
PPC_FUNC_IMPL(__imp__sub_82D0D130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D0D138;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82d0e298
	ctx.lr = 0x82D0D150;
	sub_82D0E298(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x82d0bba8
	ctx.lr = 0x82D0D160;
	sub_82D0BBA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0d1a4
	if (cr6.eq) goto loc_82D0D1A4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0d0c0
	ctx.lr = 0x82D0D178;
	sub_82D0D0C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82d0d194
	if (cr6.eq) goto loc_82D0D194;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D0D194:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82d0d1b4
	if (cr6.eq) goto loc_82D0D1B4;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x82d0d1b4
	goto loc_82D0D1B4;
loc_82D0D1A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d0b7c0
	ctx.lr = 0x82D0D1B0;
	sub_82D0B7C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82D0D1B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d0ea60
	ctx.lr = 0x82D0D1BC;
	sub_82D0EA60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d0d1d4
	if (!cr6.eq) goto loc_82D0D1D4;
loc_82D0D1C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D0D1D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0eb20
	ctx.lr = 0x82D0D1E0;
	sub_82D0EB20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82d0d234
	if (!cr6.eq) goto loc_82D0D234;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x82d0ea60
	ctx.lr = 0x82D0D1F8;
	sub_82D0EA60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0d1c8
	if (cr6.eq) goto loc_82D0D1C8;
	// lis r11,226
	ctx.r11.s64 = 14811136;
	// ori r28,r11,38560
	ctx.r28.u64 = ctx.r11.u64 | 38560;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d0eb20
	ctx.lr = 0x82D0D214;
	sub_82D0EB20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82d0d234
	if (!cr6.eq) goto loc_82D0D234;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,32
	ctx.r28.s64 = 32;
	// bl 0x82d0eb20
	ctx.lr = 0x82D0D230;
	sub_82D0EB20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82D0D234:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// bl 0x82d0f350
	ctx.lr = 0x82D0D244;
	sub_82D0F350(ctx, base);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stw r6,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r6.u32);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r4,9(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,7(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7);
	// stw r6,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r6.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r4,10(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// stw r4,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0D2B8"))) PPC_WEAK_FUNC(sub_82D0D2B8);
PPC_FUNC_IMPL(__imp__sub_82D0D2B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d0d130
	sub_82D0D130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0D2BC"))) PPC_WEAK_FUNC(sub_82D0D2BC);
PPC_FUNC_IMPL(__imp__sub_82D0D2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D2C0"))) PPC_WEAK_FUNC(sub_82D0D2C0);
PPC_FUNC_IMPL(__imp__sub_82D0D2C0) {
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
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82d0d130
	ctx.lr = 0x82D0D2E0;
	sub_82D0D130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d0d330
	if (cr6.lt) goto loc_82D0D330;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,-30188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30188);
	// bl 0x82d10368
	ctx.lr = 0x82D0D2FC;
	sub_82D10368(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0d30c
	if (cr6.eq) goto loc_82D0D30C;
	// bl 0x82d0f390
	ctx.lr = 0x82D0D30C;
	sub_82D0F390(ctx, base);
loc_82D0D30C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0d328
	if (cr6.eq) goto loc_82D0D328;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r11,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r11.u8);
	// b 0x82d0d330
	goto loc_82D0D330;
loc_82D0D328:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82D0D330:
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

__attribute__((alias("__imp__sub_82D0D348"))) PPC_WEAK_FUNC(sub_82D0D348);
PPC_FUNC_IMPL(__imp__sub_82D0D348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D0D350;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82d0d130
	ctx.lr = 0x82D0D364;
	sub_82D0D130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d0d3e4
	if (cr6.lt) goto loc_82D0D3E4;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,-30188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30188);
	// bl 0x82d10470
	ctx.lr = 0x82D0D388;
	sub_82D10470(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0d398
	if (cr6.eq) goto loc_82D0D398;
	// bl 0x82d0f390
	ctx.lr = 0x82D0D398;
	sub_82D0F390(ctx, base);
loc_82D0D398:
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// li r10,-256
	ctx.r10.s64 = -256;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d0d3d4
	if (cr6.eq) goto loc_82D0D3D4;
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r11,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r11.u8);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D0D3D4:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82D0D3E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0D3EC"))) PPC_WEAK_FUNC(sub_82D0D3EC);
PPC_FUNC_IMPL(__imp__sub_82D0D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D3F0"))) PPC_WEAK_FUNC(sub_82D0D3F0);
PPC_FUNC_IMPL(__imp__sub_82D0D3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D0D3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d0d130
	ctx.lr = 0x82D0D404;
	sub_82D0D130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d0d48c
	if (cr6.lt) goto loc_82D0D48C;
	// li r29,27
	ctx.r29.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D0D428;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0d48c
	if (cr6.eq) goto loc_82D0D48C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d0f3f8
	ctx.lr = 0x82D0D43C;
	sub_82D0F3F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0d48c
	if (cr6.eq) goto loc_82D0D48C;
	// bl 0x82d0f500
	ctx.lr = 0x82D0D44C;
	sub_82D0F500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0d488
	if (!cr6.eq) goto loc_82D0D488;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D0D468;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0f2e8
	ctx.lr = 0x82D0D470;
	sub_82D0F2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D0D478;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D0D480;
	sub_82595170(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D0D488:
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82D0D48C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0D494"))) PPC_WEAK_FUNC(sub_82D0D494);
PPC_FUNC_IMPL(__imp__sub_82D0D494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D498"))) PPC_WEAK_FUNC(sub_82D0D498);
PPC_FUNC_IMPL(__imp__sub_82D0D498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D0D4A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82d0d130
	ctx.lr = 0x82D0D4B4;
	sub_82D0D130(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d0d544
	if (cr6.lt) goto loc_82D0D544;
	// li r27,27
	ctx.r27.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D0D4D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0d544
	if (cr6.eq) goto loc_82D0D544;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d0f488
	ctx.lr = 0x82D0D4F4;
	sub_82D0F488(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0d544
	if (cr6.eq) goto loc_82D0D544;
	// bl 0x82d0fe38
	ctx.lr = 0x82D0D504;
	sub_82D0FE38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0d540
	if (!cr6.eq) goto loc_82D0D540;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D0D520;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0f2e8
	ctx.lr = 0x82D0D528;
	sub_82D0F2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D0D530;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D0D538;
	sub_82595170(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D0D540:
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82D0D544:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0D54C"))) PPC_WEAK_FUNC(sub_82D0D54C);
PPC_FUNC_IMPL(__imp__sub_82D0D54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D550"))) PPC_WEAK_FUNC(sub_82D0D550);
PPC_FUNC_IMPL(__imp__sub_82D0D550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,23248
	ctx.r9.s64 = ctx.r11.s64 + 23248;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D0D568"))) PPC_WEAK_FUNC(sub_82D0D568);
PPC_FUNC_IMPL(__imp__sub_82D0D568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,23260
	ctx.r9.s64 = ctx.r11.s64 + 23260;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D0D580"))) PPC_WEAK_FUNC(sub_82D0D580);
PPC_FUNC_IMPL(__imp__sub_82D0D580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D0D588;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,120(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d05818
	ctx.lr = 0x82D0D59C;
	sub_82D05818(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d06b10
	ctx.lr = 0x82D0D5A8;
	sub_82D06B10(ctx, base);
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d05818
	ctx.lr = 0x82D0D5B0;
	sub_82D05818(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d063c0
	ctx.lr = 0x82D0D5B8;
	sub_82D063C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103e98
	ctx.lr = 0x82D0D5C0;
	sub_83103E98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0D5C8"))) PPC_WEAK_FUNC(sub_82D0D5C8);
PPC_FUNC_IMPL(__imp__sub_82D0D5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D0D5D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d0d66c
	if (cr6.eq) goto loc_82D0D66C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0d660
	if (!cr6.eq) goto loc_82D0D660;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D0D60C;
	sub_82595718(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D0D620;
	sub_831CE980(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82d0d660
	if (!cr6.gt) goto loc_82D0D660;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_82D0D63C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82d0d63c
	if (cr6.lt) goto loc_82D0D63C;
loc_82D0D660:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82D0D66C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0D674"))) PPC_WEAK_FUNC(sub_82D0D674);
PPC_FUNC_IMPL(__imp__sub_82D0D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D678"))) PPC_WEAK_FUNC(sub_82D0D678);
PPC_FUNC_IMPL(__imp__sub_82D0D678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d0d6b0
	if (cr6.eq) goto loc_82D0D6B0;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
loc_82D0D694:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82d0d6bc
	if (cr6.eq) goto loc_82D0D6BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d0d694
	if (cr6.lt) goto loc_82D0D694;
loc_82D0D6B0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,23480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23480);
	// blr 
	return;
loc_82D0D6BC:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0D6C4"))) PPC_WEAK_FUNC(sub_82D0D6C4);
PPC_FUNC_IMPL(__imp__sub_82D0D6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D6C8"))) PPC_WEAK_FUNC(sub_82D0D6C8);
PPC_FUNC_IMPL(__imp__sub_82D0D6C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82d0d6f0
	if (!cr6.gt) goto loc_82D0D6F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82d0d714
	goto loc_82D0D714;
loc_82D0D6F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D0D704;
	sub_825952B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D0D714:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D0D72C"))) PPC_WEAK_FUNC(sub_82D0D72C);
PPC_FUNC_IMPL(__imp__sub_82D0D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0D730"))) PPC_WEAK_FUNC(sub_82D0D730);
PPC_FUNC_IMPL(__imp__sub_82D0D730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82D0D738;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// addi r31,r11,2884
	ctx.r31.s64 = ctx.r11.s64 + 2884;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x831ce980
	ctx.lr = 0x82D0D75C;
	sub_831CE980(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r31,-36
	ctx.r10.s64 = ctx.r31.s64 + -36;
	// addi r9,r1,91
	ctx.r9.s64 = ctx.r1.s64 + 91;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82D0D770:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82d0d770
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0D770;
	// lis r11,18742
	ctx.r11.s64 = 1228275712;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// ori r10,r11,13312
	ctx.r10.u64 = ctx.r11.u64 | 13312;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x82D0D798;
	sub_831CE980(ctx, base);
	// lhz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r25.u8);
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// stb r25,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r25.u8);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// stb r25,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r25.u8);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// beq cr6,0x82d0d800
	if (cr6.eq) goto loc_82D0D800;
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
	// stw r25,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r25.u32);
	// stw r25,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r25.u32);
	// stw r25,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r25.u32);
	// stw r25,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r25.u32);
	// stw r25,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r25.u32);
	// stw r25,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r25.u32);
loc_82D0D800:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82d0dc60
	if (cr6.eq) goto loc_82D0DC60;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0d974
	if (cr6.eq) goto loc_82D0D974;
loc_82D0D818:
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82D0D828;
	sub_831CEEB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0dc60
	if (cr6.eq) goto loc_82D0DC60;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// beq cr6,0x82d0d87c
	if (cr6.eq) goto loc_82D0D87C;
loc_82D0D844:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,36
	cr6.compare<int32_t>(ctx.r10.s32, 36, xer);
	// beq cr6,0x82d0d870
	if (cr6.eq) goto loc_82D0D870;
	// cmpwi cr6,r10,124
	cr6.compare<int32_t>(ctx.r10.s32, 124, xer);
	// beq cr6,0x82d0d870
	if (cr6.eq) goto loc_82D0D870;
	// cmpwi cr6,r10,37
	cr6.compare<int32_t>(ctx.r10.s32, 37, xer);
	// beq cr6,0x82d0d878
	if (cr6.eq) goto loc_82D0D878;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d0d844
	if (!cr6.eq) goto loc_82D0D844;
	// b 0x82d0d87c
	goto loc_82D0D87C;
loc_82D0D870:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82d0d87c
	goto loc_82D0D87C;
loc_82D0D878:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82D0D87C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d0d964
	if (cr6.eq) goto loc_82D0D964;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82d0d964
	if (cr6.eq) goto loc_82D0D964;
	// lbz r11,1(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r29,r24,1
	ctx.r29.s64 = ctx.r24.s64 + 1;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d0d8dc
	if (cr6.eq) goto loc_82D0D8DC;
loc_82D0D8AC:
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// beq cr6,0x82d0d8d0
	if (cr6.eq) goto loc_82D0D8D0;
	// cmpwi cr6,r11,124
	cr6.compare<int32_t>(ctx.r11.s32, 124, xer);
	// beq cr6,0x82d0d8d8
	if (cr6.eq) goto loc_82D0D8D8;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d0d8ac
	if (!cr6.eq) goto loc_82D0D8AC;
	// b 0x82d0d8dc
	goto loc_82D0D8DC;
loc_82D0D8D0:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82d0d8dc
	goto loc_82D0D8DC;
loc_82D0D8D8:
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
loc_82D0D8DC:
	// cmplw cr6,r29,r22
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, xer);
	// bne cr6,0x82d0d8e8
	if (!cr6.eq) goto loc_82D0D8E8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82D0D8E8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d0d8fc
	if (!cr6.eq) goto loc_82D0D8FC;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x82d0d968
	goto loc_82D0D968;
loc_82D0D8FC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82d0dc60
	if (cr6.eq) goto loc_82D0DC60;
	// addi r31,r23,1
	ctx.r31.s64 = ctx.r23.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0490
	ctx.lr = 0x82D0D914;
	sub_831D0490(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x831d8c98
	ctx.lr = 0x82D0D924;
	sub_831D8C98(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82D0D934;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82d0d94c
	if (cr6.eq) goto loc_82D0D94C;
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// bne cr6,0x82d0d94c
	if (!cr6.eq) goto loc_82D0D94C;
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, xer);
	// beq cr6,0x82d0d950
	if (cr6.eq) goto loc_82D0D950;
loc_82D0D94C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82D0D950:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d0d974
	if (!cr6.eq) goto loc_82D0D974;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x82d0d968
	goto loc_82D0D968;
loc_82D0D964:
	// addi r27,r24,1
	ctx.r27.s64 = ctx.r24.s64 + 1;
loc_82D0D968:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0d818
	if (!cr6.eq) goto loc_82D0D818;
loc_82D0D974:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0dc60
	if (cr6.eq) goto loc_82D0DC60;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplw cr6,r19,r23
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r23.u32, xer);
	// beq cr6,0x82d0d990
	if (cr6.eq) goto loc_82D0D990;
	// subf r27,r19,r23
	ctx.r27.s64 = ctx.r23.s64 - ctx.r19.s64;
loc_82D0D990:
	// addi r31,r24,1
	ctx.r31.s64 = ctx.r24.s64 + 1;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplw cr6,r22,r31
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r31.u32, xer);
	// beq cr6,0x82d0d9a4
	if (cr6.eq) goto loc_82D0D9A4;
	// subf r28,r31,r22
	ctx.r28.s64 = ctx.r22.s64 - ctx.r31.s64;
loc_82D0D9A4:
	// cmplwi cr6,r21,4
	cr6.compare<uint32_t>(ctx.r21.u32, 4, xer);
	// bge cr6,0x82d0dc60
	if (!cr6.lt) goto loc_82D0DC60;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r23,1
	ctx.r5.s64 = ctx.r23.s64 + 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831d0b58
	ctx.lr = 0x82D0D9C0;
	sub_831D0B58(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831d88a0
	ctx.lr = 0x82D0D9C8;
	sub_831D88A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82d0dc60
	if (!cr6.gt) goto loc_82D0DC60;
	// cmpwi cr6,r3,64
	cr6.compare<int32_t>(ctx.r3.s32, 64, xer);
	// bgt cr6,0x82d0dc60
	if (cr6.gt) goto loc_82D0DC60;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82d0db04
	if (cr6.eq) goto loc_82D0DB04;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D0D9F4:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82d0d9f4
	if (!cr6.eq) goto loc_82D0D9F4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82D0DA10:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d0da4c
	if (cr6.eq) goto loc_82D0DA4C;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_82D0DA24:
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// beq cr6,0x82d0da44
	if (cr6.eq) goto loc_82D0DA44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d0da24
	if (cr6.gt) goto loc_82D0DA24;
	// b 0x82d0da4c
	goto loc_82D0DA4C;
loc_82D0DA44:
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82D0DA4C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d0db04
	if (cr6.eq) goto loc_82D0DB04;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D0DA60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d0da60
	if (!cr6.eq) goto loc_82D0DA60;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0dab0
	if (cr6.eq) goto loc_82D0DAB0;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
loc_82D0DA8C:
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// beq cr6,0x82d0daac
	if (cr6.eq) goto loc_82D0DAAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d0da8c
	if (cr6.gt) goto loc_82D0DA8C;
	// b 0x82d0dab0
	goto loc_82D0DAB0;
loc_82D0DAAC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82D0DAB0:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0daf4
	if (!cr6.eq) goto loc_82D0DAF4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D0DAC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d0dac4
	if (!cr6.eq) goto loc_82D0DAC4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x831cef50
	ctx.lr = 0x82D0DAEC;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d0db04
	if (cr6.eq) goto loc_82D0DB04;
loc_82D0DAF4:
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82d0da10
	if (!cr6.eq) goto loc_82D0DA10;
loc_82D0DB04:
	// extsb r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	// addi r11,r11,-67
	ctx.r11.s64 = ctx.r11.s64 + -67;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bgt cr6,0x82d0dc60
	if (cr6.gt) goto loc_82D0DC60;
	// lis r12,-32047
	ctx.r12.s64 = -2100232192;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9428
	ctx.r12.s64 = ctx.r12.s64 + -9428;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82D0DC04;
	case 1:
		goto loc_82D0DC60;
	case 2:
		goto loc_82D0DC0C;
	case 3:
		goto loc_82D0DC60;
	case 4:
		goto loc_82D0DC0C;
	case 5:
		goto loc_82D0DC60;
	case 6:
		goto loc_82D0DC60;
	case 7:
		goto loc_82D0DC60;
	case 8:
		goto loc_82D0DC60;
	case 9:
		goto loc_82D0DC60;
	case 10:
		goto loc_82D0DC60;
	case 11:
		goto loc_82D0DC60;
	case 12:
		goto loc_82D0DC60;
	case 13:
		goto loc_82D0DC60;
	case 14:
		goto loc_82D0DC60;
	case 15:
		goto loc_82D0DC60;
	case 16:
		goto loc_82D0DC14;
	case 17:
		goto loc_82D0DC60;
	case 18:
		goto loc_82D0DC60;
	case 19:
		goto loc_82D0DC60;
	case 20:
		goto loc_82D0DC60;
	case 21:
		goto loc_82D0DC04;
	case 22:
		goto loc_82D0DC60;
	case 23:
		goto loc_82D0DC60;
	case 24:
		goto loc_82D0DC60;
	case 25:
		goto loc_82D0DC60;
	case 26:
		goto loc_82D0DC60;
	case 27:
		goto loc_82D0DC60;
	case 28:
		goto loc_82D0DC60;
	case 29:
		goto loc_82D0DC60;
	case 30:
		goto loc_82D0DC60;
	case 31:
		goto loc_82D0DC60;
	case 32:
		goto loc_82D0DC04;
	case 33:
		goto loc_82D0DC04;
	case 34:
		goto loc_82D0DC0C;
	case 35:
		goto loc_82D0DC0C;
	case 36:
		goto loc_82D0DC0C;
	case 37:
		goto loc_82D0DC60;
	case 38:
		goto loc_82D0DC04;
	case 39:
		goto loc_82D0DC60;
	case 40:
		goto loc_82D0DC60;
	case 41:
		goto loc_82D0DC60;
	case 42:
		goto loc_82D0DC60;
	case 43:
		goto loc_82D0DC14;
	case 44:
		goto loc_82D0DC04;
	case 45:
		goto loc_82D0DC14;
	case 46:
		goto loc_82D0DC60;
	case 47:
		goto loc_82D0DC60;
	case 48:
		goto loc_82D0DC14;
	case 49:
		goto loc_82D0DC60;
	case 50:
		goto loc_82D0DC04;
	case 51:
		goto loc_82D0DC60;
	case 52:
		goto loc_82D0DC60;
	case 53:
		goto loc_82D0DC04;
	default:
		return;
	}
	// lwz r22,-9212(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9212);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9204(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9204);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9204(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9204);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9196(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9196);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9212(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9212);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9212(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9212);
	// lwz r22,-9212(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9212);
	// lwz r22,-9204(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9204);
	// lwz r22,-9204(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9204);
	// lwz r22,-9204(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9204);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9212(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9212);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9196(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9196);
	// lwz r22,-9212(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9212);
	// lwz r22,-9196(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9196);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9196(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9196);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9212(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9212);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9120(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9120);
	// lwz r22,-9212(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -9212);
loc_82D0DC04:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82d0dc18
	goto loc_82D0DC18;
loc_82D0DC0C:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82d0dc18
	goto loc_82D0DC18;
loc_82D0DC14:
	// li r31,3
	ctx.r31.s64 = 3;
loc_82D0DC18:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831d0490
	ctx.lr = 0x82D0DC24;
	sub_831D0490(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82d0dc64
	if (cr6.eq) goto loc_82D0DC64;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// stw r27,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r27.u32);
	// stw r19,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r19.u32);
	// stw r23,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r23.u32);
	// stw r24,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r24.u32);
	// stw r22,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r22.u32);
	// stw r21,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r21.u32);
	// stw r28,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r28.u32);
	// stw r3,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r3.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82D0DC60:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82D0DC64:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0DC6C"))) PPC_WEAK_FUNC(sub_82D0DC6C);
PPC_FUNC_IMPL(__imp__sub_82D0DC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0DC70"))) PPC_WEAK_FUNC(sub_82D0DC70);
PPC_FUNC_IMPL(__imp__sub_82D0DC70) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D0DCA4;
	sub_825952B8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82D0DCCC"))) PPC_WEAK_FUNC(sub_82D0DCCC);
PPC_FUNC_IMPL(__imp__sub_82D0DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0DCD0"))) PPC_WEAK_FUNC(sub_82D0DCD0);
PPC_FUNC_IMPL(__imp__sub_82D0DCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D0DCD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,27
	ctx.r27.s64 = 27;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82595718
	ctx.lr = 0x82D0DD00;
	sub_82595718(ctx, base);
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d8218
	ctx.lr = 0x82D0DD1C;
	sub_831D8218(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d0dd30
	if (cr6.lt) goto loc_82D0DD30;
	// cmpwi cr6,r3,1023
	cr6.compare<int32_t>(ctx.r3.s32, 1023, xer);
	// blt cr6,0x82d0dd8c
	if (cr6.lt) goto loc_82D0DD8C;
loc_82D0DD30:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d8de0
	ctx.lr = 0x82D0DD3C;
	sub_831D8DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d0dd8c
	if (cr6.lt) goto loc_82D0DD8C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82D0DD58;
	sub_825952B8(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82D0DD70;
	sub_82595718(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d8218
	ctx.lr = 0x82D0DD88;
	sub_831D8218(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82D0DD8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D0DDB0;
	sub_8259CC28(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82D0DDC0;
	sub_825952B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0DDCC"))) PPC_WEAK_FUNC(sub_82D0DDCC);
PPC_FUNC_IMPL(__imp__sub_82D0DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0DDD0"))) PPC_WEAK_FUNC(sub_82D0DDD0);
PPC_FUNC_IMPL(__imp__sub_82D0DDD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d0dcd0
	ctx.lr = 0x82D0DE18;
	sub_82D0DCD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D0DE2C;
	sub_8259CB28(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d0de4c
	if (cr6.lt) goto loc_82D0DE4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D0DE4C;
	sub_825952B8(ctx, base);
loc_82D0DE4C:
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

__attribute__((alias("__imp__sub_82D0DE60"))) PPC_WEAK_FUNC(sub_82D0DE60);
PPC_FUNC_IMPL(__imp__sub_82D0DE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D0DE68;
	__savegprlr_23(ctx, base);
	// stwu r1,-3904(r1)
	ea = -3904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r23,15
	ctx.r23.s64 = 15;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lhz r11,2832(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2832);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x8246e3e8
	ctx.lr = 0x82D0DEB4;
	sub_8246E3E8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82d0dec8
	if (!cr6.eq) goto loc_82D0DEC8;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// b 0x82d0e238
	goto loc_82D0E238;
loc_82D0DEC8:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r1,1260
	ctx.r11.s64 = ctx.r1.s64 + 1260;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D0DED4:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stw r29,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// stwu r29,40(r11)
	ea = 40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d0ded4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0DED4;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D0DF0C:
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stwu r29,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d0df0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0DF0C;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// addi r8,r1,1268
	ctx.r8.s64 = ctx.r1.s64 + 1268;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D0DF30:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stwu r29,40(r11)
	ea = 40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stwu r29,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82d0df30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0DF30;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0dfa8
	if (cr6.eq) goto loc_82D0DFA8;
	// addi r31,r1,1288
	ctx.r31.s64 = ctx.r1.s64 + 1288;
loc_82D0DF70:
	// addi r5,r31,-24
	ctx.r5.s64 = ctx.r31.s64 + -24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d0d730
	ctx.lr = 0x82D0DF7C;
	sub_82D0D730(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d0dfa0
	if (cr6.eq) goto loc_82D0DFA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0df70
	if (!cr6.eq) goto loc_82D0DF70;
loc_82D0DFA0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82d0e008
	if (!cr6.eq) goto loc_82D0E008;
loc_82D0DFA8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d0dcd0
	ctx.lr = 0x82D0DFBC;
	sub_82D0DCD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82D0DFD0;
	sub_825A1DA8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d0dff0
	if (cr6.lt) goto loc_82D0DFF0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D0DFF0;
	sub_825952B8(ctx, base);
loc_82D0DFF0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// b 0x82d0e238
	goto loc_82D0E238;
loc_82D0E008:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82d0e034
	if (!cr6.gt) goto loc_82D0E034;
	// addi r9,r1,1264
	ctx.r9.s64 = ctx.r1.s64 + 1264;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
loc_82D0E01C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x82d0e02c
	if (!cr6.lt) goto loc_82D0E02C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D0E02C:
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// bdnz 0x82d0e01c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0E01C;
loc_82D0E034:
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, xer);
	// ble cr6,0x82d0e048
	if (!cr6.gt) goto loc_82D0E048;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// b 0x82d0e238
	goto loc_82D0E238;
loc_82D0E048:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82d0e204
	if (!cr6.gt) goto loc_82D0E204;
	// addi r9,r1,248
	ctx.r9.s64 = ctx.r1.s64 + 248;
loc_82D0E058:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r1,1264
	ctx.r10.s64 = ctx.r1.s64 + 1264;
loc_82D0E064:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x82d0e084
	if (cr6.eq) goto loc_82D0E084;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82d0e064
	if (cr6.gt) goto loc_82D0E064;
	// b 0x82d0e0c8
	goto loc_82D0E0C8;
loc_82D0E084:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,1268
	ctx.r7.s64 = ctx.r1.s64 + 1268;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stw r11,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r11.u32);
	// beq cr6,0x82d0e0b4
	if (cr6.eq) goto loc_82D0E0B4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d0e24c
	if (cr6.eq) goto loc_82D0E24C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82d0e0c8
	if (!cr6.eq) goto loc_82D0E0C8;
loc_82D0E0B4:
	// addi r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82D0E0C4:
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
loc_82D0E0C8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r8,r28
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, xer);
	// blt cr6,0x82d0e058
	if (cr6.lt) goto loc_82D0E058;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82d0e204
	if (!cr6.gt) goto loc_82D0E204;
	// addi r31,r1,1272
	ctx.r31.s64 = ctx.r1.s64 + 1272;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82D0E0E8:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82d0e100
	if (cr6.lt) goto loc_82D0E100;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825a1eb8
	ctx.lr = 0x82D0E100;
	sub_825A1EB8(ctx, base);
loc_82D0E100:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8246e3e8
	ctx.lr = 0x82D0E110;
	sub_8246E3E8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D0E118:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d0e118
	if (!cr6.eq) goto loc_82D0E118;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824733f0
	ctx.lr = 0x82D0E140;
	sub_824733F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x824733f0
	ctx.lr = 0x82D0E154;
	sub_824733F0(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82d0e18c
	if (cr6.eq) goto loc_82D0E18C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82d0e260
	if (cr6.eq) goto loc_82D0E260;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82d0e1c8
	if (!cr6.eq) goto loc_82D0E1C8;
loc_82D0E18C:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d0e1a0
	if (!cr6.lt) goto loc_82D0E1A0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82D0E1A0:
	// addi r10,r1,248
	ctx.r10.s64 = ctx.r1.s64 + 248;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d0ddd0
	ctx.lr = 0x82D0E1B4;
	sub_82D0DDD0(ctx, base);
loc_82D0E1B4:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82D0E1C8;
	sub_825A1DA8(ctx, base);
loc_82D0E1C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d0e1ec
	if (cr6.lt) goto loc_82D0E1EC;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82D0E1EC;
	sub_825952B8(ctx, base);
loc_82D0E1EC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// bne 0x82d0e0e8
	if (!cr0.eq) goto loc_82D0E0E8;
loc_82D0E204:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D0E208:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0e208
	if (!cr6.eq) goto loc_82D0E208;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82D0E230;
	sub_825A1EB8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
loc_82D0E238:
	// blt cr6,0x82d0e244
	if (cr6.lt) goto loc_82D0E244;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82D0E244;
	sub_82416268(ctx, base);
loc_82D0E244:
	// addi r1,r1,3904
	ctx.r1.s64 = ctx.r1.s64 + 3904;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D0E24C:
	// addi r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f0.u64);
	// b 0x82d0e0c4
	goto loc_82D0E0C4;
loc_82D0E260:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d0e274
	if (!cr6.lt) goto loc_82D0E274;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82D0E274:
	// addi r10,r1,248
	ctx.r10.s64 = ctx.r1.s64 + 248;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfdx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82d0ddd0
	ctx.lr = 0x82D0E290;
	sub_82D0DDD0(ctx, base);
	// b 0x82d0e1b4
	goto loc_82D0E1B4;
}

__attribute__((alias("__imp__sub_82D0E294"))) PPC_WEAK_FUNC(sub_82D0E294);
PPC_FUNC_IMPL(__imp__sub_82D0E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0E298"))) PPC_WEAK_FUNC(sub_82D0E298);
PPC_FUNC_IMPL(__imp__sub_82D0E298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,-30216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0E2A4"))) PPC_WEAK_FUNC(sub_82D0E2A4);
PPC_FUNC_IMPL(__imp__sub_82D0E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0E2A8"))) PPC_WEAK_FUNC(sub_82D0E2A8);
PPC_FUNC_IMPL(__imp__sub_82D0E2A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0E2B8"))) PPC_WEAK_FUNC(sub_82D0E2B8);
PPC_FUNC_IMPL(__imp__sub_82D0E2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82d0e320
	if (!cr6.gt) goto loc_82D0E320;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
loc_82D0E2D4:
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0e310
	if (cr6.eq) goto loc_82D0E310;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82D0E2E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x82d0e308
	if (cr6.eq) goto loc_82D0E308;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d0e2e4
	if (cr6.eq) goto loc_82D0E2E4;
loc_82D0E308:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D0E310:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// blt cr6,0x82d0e2d4
	if (cr6.lt) goto loc_82D0E2D4;
loc_82D0E320:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0E328"))) PPC_WEAK_FUNC(sub_82D0E328);
PPC_FUNC_IMPL(__imp__sub_82D0E328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0E338"))) PPC_WEAK_FUNC(sub_82D0E338);
PPC_FUNC_IMPL(__imp__sub_82D0E338) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0e3b0
	if (cr6.eq) goto loc_82D0E3B0;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D0E378;
	sub_82595150(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0e39c
	if (cr6.eq) goto loc_82D0E39C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D0E39C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D0E39C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D0E3A4;
	sub_82595170(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
loc_82D0E3B0:
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

__attribute__((alias("__imp__sub_82D0E3C8"))) PPC_WEAK_FUNC(sub_82D0E3C8);
PPC_FUNC_IMPL(__imp__sub_82D0E3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D0E3D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0e3f8
	if (cr6.eq) goto loc_82D0E3F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82D0E3F8;
	sub_831CC188(ctx, base);
loc_82D0E3F8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8330ee50
	ctx.lr = 0x82D0E404;
	sub_8330EE50(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82d0e420
	if (cr6.eq) goto loc_82D0E420;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82d0e444
	goto loc_82D0E444;
loc_82D0E420:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d0e438
	if (cr6.eq) goto loc_82D0E438;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82d0e444
	goto loc_82D0E444;
loc_82D0E438:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d0e530
	if (!cr6.eq) goto loc_82D0E530;
loc_82D0E444:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0e458
	if (!cr6.eq) goto loc_82D0E458;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D0E458:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d0e470
	if (!cr6.eq) goto loc_82D0E470;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82d0e488
	goto loc_82D0E488;
loc_82D0E470:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d0e484
	if (!cr6.eq) goto loc_82D0E484;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82d0e488
	goto loc_82D0E488;
loc_82D0E484:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82D0E488:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d0e4d8
	if (!cr6.eq) goto loc_82D0E4D8;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0e4ac
	if (cr6.eq) goto loc_82D0E4AC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82d0e4d4
	goto loc_82D0E4D4;
loc_82D0E4AC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d0e4d4
	if (!cr6.eq) goto loc_82D0E4D4;
loc_82D0E4C0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d0e4c0
	if (cr6.eq) goto loc_82D0E4C0;
loc_82D0E4D4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82D0E4D8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d0e5c4
	if (!cr6.eq) goto loc_82D0E5C4;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0e500
	if (cr6.eq) goto loc_82D0E500;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82d0e5c4
	goto loc_82D0E5C4;
loc_82D0E500:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d0e528
	if (!cr6.eq) goto loc_82D0E528;
loc_82D0E514:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d0e514
	if (cr6.eq) goto loc_82D0E514;
loc_82D0E528:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82d0e5c4
	goto loc_82D0E5C4;
loc_82D0E530:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d0e550
	if (!cr6.eq) goto loc_82D0E550;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82d0e578
	goto loc_82D0E578;
loc_82D0E550:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0e564
	if (!cr6.eq) goto loc_82D0E564;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D0E564:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82D0E578:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d0e590
	if (!cr6.eq) goto loc_82D0E590;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82d0e5ac
	goto loc_82D0E5AC;
loc_82D0E590:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d0e5a8
	if (!cr6.eq) goto loc_82D0E5A8;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82d0e5ac
	goto loc_82D0E5AC;
loc_82D0E5A8:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82D0E5AC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// lbz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 20);
	// stb r9,20(r25)
	PPC_STORE_U8(ctx.r25.u32 + 20, ctx.r9.u8);
	// stb r10,20(r26)
	PPC_STORE_U8(ctx.r26.u32 + 20, ctx.r10.u8);
loc_82D0E5C4:
	// lbz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d0e75c
	if (!cr6.eq) goto loc_82D0E75C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d0e758
	if (cr6.eq) goto loc_82D0E758;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D0E5E8:
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d0e758
	if (!cr6.eq) goto loc_82D0E758;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d0e6a0
	if (!cr6.eq) goto loc_82D0E6A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0e628
	if (!cr6.eq) goto loc_82D0E628;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x834a5fc8
	ctx.lr = 0x82D0E624;
	sub_834A5FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D0E628:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0e6f4
	if (!cr6.eq) goto loc_82D0E6F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d0e654
	if (!cr6.eq) goto loc_82D0E654;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d0e6f0
	if (cr6.eq) goto loc_82D0E6F0;
loc_82D0E654:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d0e67c
	if (!cr6.eq) goto loc_82D0E67C;
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df110
	ctx.lr = 0x82D0E678;
	sub_837DF110(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D0E67C:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// bl 0x834a5fc8
	ctx.lr = 0x82D0E69C;
	sub_834A5FC8(ctx, base);
	// b 0x82d0e758
	goto loc_82D0E758;
loc_82D0E6A0:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0e6c4
	if (!cr6.eq) goto loc_82D0E6C4;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df110
	ctx.lr = 0x82D0E6C0;
	sub_837DF110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D0E6C4:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0e6f4
	if (!cr6.eq) goto loc_82D0E6F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d0e710
	if (!cr6.eq) goto loc_82D0E710;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d0e710
	if (!cr6.eq) goto loc_82D0E710;
loc_82D0E6F0:
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
loc_82D0E6F4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d0e5e8
	if (!cr6.eq) goto loc_82D0E5E8;
	// b 0x82d0e758
	goto loc_82D0E758;
loc_82D0E710:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d0e738
	if (!cr6.eq) goto loc_82D0E738;
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x834a5fc8
	ctx.lr = 0x82D0E734;
	sub_834A5FC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D0E738:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// bl 0x837df110
	ctx.lr = 0x82D0E758;
	sub_837DF110(ctx, base);
loc_82D0E758:
	// stb r29,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r29.u8);
loc_82D0E75C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D0E770;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0e784
	if (cr6.eq) goto loc_82D0E784;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82D0E784:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0E794"))) PPC_WEAK_FUNC(sub_82D0E794);
PPC_FUNC_IMPL(__imp__sub_82D0E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0E798"))) PPC_WEAK_FUNC(sub_82D0E798);
PPC_FUNC_IMPL(__imp__sub_82D0E798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D0E7A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d0e7ec
	if (!cr6.eq) goto loc_82D0E7EC;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d0e7ec
	if (!cr6.eq) goto loc_82D0E7EC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82cd1830
	ctx.lr = 0x82D0E7D4;
	sub_82CD1830(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D0E7EC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d0e81c
	if (cr6.eq) goto loc_82D0E81C;
loc_82D0E7F4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8330ee50
	ctx.lr = 0x82D0E800;
	sub_8330EE50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d0e3c8
	ctx.lr = 0x82D0E810;
	sub_82D0E3C8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d0e7f4
	if (!cr6.eq) goto loc_82D0E7F4;
loc_82D0E81C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0E82C"))) PPC_WEAK_FUNC(sub_82D0E82C);
PPC_FUNC_IMPL(__imp__sub_82D0E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0E830"))) PPC_WEAK_FUNC(sub_82D0E830);
PPC_FUNC_IMPL(__imp__sub_82D0E830) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d0e874
	if (cr6.eq) goto loc_82D0E874;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D0E868;
	sub_825952B8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82D0E874:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,-30216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30216, ctx.r30.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x82D0E890;
	sub_82D0E798(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x825952b8
	ctx.lr = 0x82D0E8A4;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_82D0E8BC"))) PPC_WEAK_FUNC(sub_82D0E8BC);
PPC_FUNC_IMPL(__imp__sub_82D0E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0E8C0"))) PPC_WEAK_FUNC(sub_82D0E8C0);
PPC_FUNC_IMPL(__imp__sub_82D0E8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D0E8C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8381b9d0
	ctx.lr = 0x82D0E8F4;
	sub_8381B9D0(ctx, base);
	// lis r29,-31758
	ctx.r29.s64 = -2081292288;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,-30216(r29)
	PPC_STORE_U32(ctx.r29.u32 + -30216, ctx.r31.u32);
	// bl 0x82d106d0
	ctx.lr = 0x82D0E90C;
	sub_82D106D0(ctx, base);
	// lwz r29,-30216(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30216);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0e960
	if (!cr6.eq) goto loc_82D0E960;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D0E934;
	sub_82595718(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0e960
	if (cr6.eq) goto loc_82D0E960;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82D0E94C;
	sub_831CDCF0(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r10,36
	ctx.r10.s64 = 36;
	// addi r9,r11,3312
	ctx.r9.s64 = ctx.r11.s64 + 3312;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82D0E960:
	// bl 0x82d0a9f0
	ctx.lr = 0x82D0E964;
	sub_82D0A9F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x82D0E974;
	sub_82CD17D8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0E99C"))) PPC_WEAK_FUNC(sub_82D0E99C);
PPC_FUNC_IMPL(__imp__sub_82D0E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0E9A0"))) PPC_WEAK_FUNC(sub_82D0E9A0);
PPC_FUNC_IMPL(__imp__sub_82D0E9A0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D0E9C4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0e9e0
	if (cr6.eq) goto loc_82D0E9E0;
	// bl 0x82d0e8c0
	ctx.lr = 0x82D0E9D0;
	sub_82D0E8C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D0E9E0:
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

__attribute__((alias("__imp__sub_82D0E9F4"))) PPC_WEAK_FUNC(sub_82D0E9F4);
PPC_FUNC_IMPL(__imp__sub_82D0E9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0E9F8"))) PPC_WEAK_FUNC(sub_82D0E9F8);
PPC_FUNC_IMPL(__imp__sub_82D0E9F8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r31,-30216(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30216);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d0ea44
	if (cr6.eq) goto loc_82D0EA44;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D0EA2C;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0e830
	ctx.lr = 0x82D0EA34;
	sub_82D0E830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D0EA3C;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D0EA44;
	sub_82595170(ctx, base);
loc_82D0EA44:
	// bl 0x82d10628
	ctx.lr = 0x82D0EA48;
	sub_82D10628(ctx, base);
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

__attribute__((alias("__imp__sub_82D0EA5C"))) PPC_WEAK_FUNC(sub_82D0EA5C);
PPC_FUNC_IMPL(__imp__sub_82D0EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0EA60"))) PPC_WEAK_FUNC(sub_82D0EA60);
PPC_FUNC_IMPL(__imp__sub_82D0EA60) {
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
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x82d0ea9c
	if (cr6.eq) goto loc_82D0EA9C;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x82d0ea9c
	if (cr6.eq) goto loc_82D0EA9C;
	// cmplwi cr6,r3,27
	cr6.compare<uint32_t>(ctx.r3.u32, 27, xer);
	// beq cr6,0x82d0ea94
	if (cr6.eq) goto loc_82D0EA94;
	// cmplwi cr6,r3,28
	cr6.compare<uint32_t>(ctx.r3.u32, 28, xer);
	// bne cr6,0x82d0ead8
	if (!cr6.eq) goto loc_82D0EAD8;
loc_82D0EA94:
	// li r31,25
	ctx.r31.s64 = 25;
	// b 0x82d0ead8
	goto loc_82D0EAD8;
loc_82D0EA9C:
	// bl 0x82d0e298
	ctx.lr = 0x82D0EAA0;
	sub_82D0E298(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// beq cr6,0x82d0ead4
	if (cr6.eq) goto loc_82D0EAD4;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// beq cr6,0x82d0eacc
	if (cr6.eq) goto loc_82D0EACC;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// beq cr6,0x82d0eac4
	if (cr6.eq) goto loc_82D0EAC4;
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x82d0ead8
	goto loc_82D0EAD8;
loc_82D0EAC4:
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x82d0ead8
	goto loc_82D0EAD8;
loc_82D0EACC:
	// li r31,14
	ctx.r31.s64 = 14;
	// b 0x82d0ead8
	goto loc_82D0EAD8;
loc_82D0EAD4:
	// li r31,13
	ctx.r31.s64 = 13;
loc_82D0EAD8:
	// bl 0x82d0e298
	ctx.lr = 0x82D0EADC;
	sub_82D0E298(ctx, base);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x82d0eafc
	if (!cr6.eq) goto loc_82D0EAFC;
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
loc_82D0EAFC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D0EB1C"))) PPC_WEAK_FUNC(sub_82D0EB1C);
PPC_FUNC_IMPL(__imp__sub_82D0EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0EB20"))) PPC_WEAK_FUNC(sub_82D0EB20);
PPC_FUNC_IMPL(__imp__sub_82D0EB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82d0eb68
	if (cr0.lt) goto loc_82D0EB68;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
loc_82D0EB38:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r3,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// bge cr6,0x82d0eb5c
	if (!cr6.lt) goto loc_82D0EB5C;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// b 0x82d0eb60
	goto loc_82D0EB60;
loc_82D0EB5C:
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_82D0EB60:
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x82d0eb38
	if (!cr6.gt) goto loc_82D0EB38;
loc_82D0EB68:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0EB70"))) PPC_WEAK_FUNC(sub_82D0EB70);
PPC_FUNC_IMPL(__imp__sub_82D0EB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D0EB78;
	__savegprlr_28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r30,72(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x82d0ecd4
	if (cr6.eq) goto loc_82D0ECD4;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x82d0ec3c
	if (cr6.eq) goto loc_82D0EC3C;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x82d0eda0
	if (!cr6.eq) goto loc_82D0EDA0;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82d0eda0
	if (cr6.eq) goto loc_82D0EDA0;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_82D0EBD8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d0ec24
	if (!cr6.gt) goto loc_82D0EC24;
loc_82D0EBE4:
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d0ebe4
	if (cr6.lt) goto loc_82D0EBE4;
loc_82D0EC24:
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// blt cr6,0x82d0ebd8
	if (cr6.lt) goto loc_82D0EBD8;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D0EC3C:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82d0eda0
	if (cr6.eq) goto loc_82D0EDA0;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
loc_82D0EC68:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d0ecbc
	if (!cr6.gt) goto loc_82D0ECBC;
loc_82D0EC74:
	// lbzu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r30,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r30.u8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r30.u8);
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r30.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d0ec74
	if (cr6.lt) goto loc_82D0EC74;
loc_82D0ECBC:
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d0ec68
	if (cr6.lt) goto loc_82D0EC68;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D0ECD4:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82d0eda0
	if (cr6.eq) goto loc_82D0EDA0;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// add r29,r10,r6
	ctx.r29.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
loc_82D0ED00:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d0ed8c
	if (!cr6.gt) goto loc_82D0ED8C;
loc_82D0ED0C:
	// lbzu r7,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// add r6,r29,r9
	ctx.r6.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r10,r7,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r5,r7,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbzx r5,r5,r4
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lbz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stbx r11,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u8);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d0ed0c
	if (cr6.lt) goto loc_82D0ED0C;
loc_82D0ED8C:
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d0ed00
	if (cr6.lt) goto loc_82D0ED00;
loc_82D0EDA0:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0EDA4"))) PPC_WEAK_FUNC(sub_82D0EDA4);
PPC_FUNC_IMPL(__imp__sub_82D0EDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0EDA8"))) PPC_WEAK_FUNC(sub_82D0EDA8);
PPC_FUNC_IMPL(__imp__sub_82D0EDA8) {
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
	// bl 0x82d119d8
	ctx.lr = 0x82D0EDC8;
	sub_82D119D8(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,4388
	ctx.r9.s64 = ctx.r10.s64 + 4388;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D0EE10"))) PPC_WEAK_FUNC(sub_82D0EE10);
PPC_FUNC_IMPL(__imp__sub_82D0EE10) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,4388
	ctx.r10.s64 = ctx.r11.s64 + 4388;
	// li r30,27
	ctx.r30.s64 = 27;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d0ee58
	if (cr6.eq) goto loc_82D0EE58;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D0EE50;
	sub_825952B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82D0EE58:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x825952b8
	ctx.lr = 0x82D0EE68;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d11a28
	ctx.lr = 0x82D0EE70;
	sub_82D11A28(ctx, base);
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

__attribute__((alias("__imp__sub_82D0EE88"))) PPC_WEAK_FUNC(sub_82D0EE88);
PPC_FUNC_IMPL(__imp__sub_82D0EE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D0EE90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0eeb0
	if (cr6.eq) goto loc_82D0EEB0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82D0EEB0:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0eec4
	if (cr6.eq) goto loc_82D0EEC4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82D0EEC4:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r30,27
	ctx.r30.s64 = 27;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d0eee4
	if (cr6.eq) goto loc_82D0EEE4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D0EEE4;
	sub_825952B8(ctx, base);
loc_82D0EEE4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82d0ef04
	if (!cr6.gt) goto loc_82D0EF04;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82D0EF04:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D0EF14;
	sub_82595718(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x82d0ef6c
	if (!cr6.gt) goto loc_82D0EF6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
loc_82D0EF38:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0ef48
	if (cr6.eq) goto loc_82D0EF48;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82D0EF48:
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x82d0ef38
	if (cr6.lt) goto loc_82D0EF38;
loc_82D0EF6C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic. r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x82d0efd0
	if (cr0.lt) goto loc_82D0EFD0;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_82D0EF84:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// beq cr6,0x82d0efc0
	if (cr6.eq) goto loc_82D0EFC0;
	// bge cr6,0x82d0efac
	if (!cr6.lt) goto loc_82D0EFAC;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// b 0x82d0efb0
	goto loc_82D0EFB0;
loc_82D0EFAC:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_82D0EFB0:
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// ble cr6,0x82d0ef84
	if (!cr6.gt) goto loc_82D0EF84;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D0EFC0:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82d0efd0
	if (cr6.eq) goto loc_82D0EFD0;
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82D0EFD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0EFD8"))) PPC_WEAK_FUNC(sub_82D0EFD8);
PPC_FUNC_IMPL(__imp__sub_82D0EFD8) {
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
	// bl 0x82d0ee10
	ctx.lr = 0x82D0EFF8;
	sub_82D0EE10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d0f010
	if (cr6.eq) goto loc_82D0F010;
	// bl 0x82416268
	ctx.lr = 0x82D0F00C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D0F010:
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

__attribute__((alias("__imp__sub_82D0F028"))) PPC_WEAK_FUNC(sub_82D0F028);
PPC_FUNC_IMPL(__imp__sub_82D0F028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D0F030;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82d0f054
	if (!cr6.eq) goto loc_82D0F054;
loc_82D0F048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D0F054:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D0F06C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0f048
	if (cr6.eq) goto loc_82D0F048;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D0F084;
	sub_831CE980(ctx, base);
	// stw r31,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0ee88
	ctx.lr = 0x82D0F094;
	sub_82D0EE88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0F0A0"))) PPC_WEAK_FUNC(sub_82D0F0A0);
PPC_FUNC_IMPL(__imp__sub_82D0F0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D0F0A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0f2ac
	if (cr6.eq) goto loc_82D0F2AC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d0f2ac
	if (cr6.eq) goto loc_82D0F2AC;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r29,r10,4300
	ctx.r29.s64 = ctx.r10.s64 + 4300;
	// addi r10,r29,-294
	ctx.r10.s64 = ctx.r29.s64 + -294;
loc_82D0F0DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82d0f100
	if (cr6.eq) goto loc_82D0F100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d0f0dc
	if (cr6.eq) goto loc_82D0F0DC;
loc_82D0F100:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d0f2ac
	if (cr6.eq) goto loc_82D0F2AC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82D0F10C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0f10c
	if (!cr6.eq) goto loc_82D0F10C;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bgt cr6,0x82d0f2ac
	if (cr6.gt) goto loc_82D0F2AC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82D0F140;
	sub_837B0C10(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a7eb0
	ctx.lr = 0x82D0F158;
	sub_827A7EB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a7eb0
	ctx.lr = 0x82D0F170;
	sub_827A7EB0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d0f1c4
	if (cr6.eq) goto loc_82D0F1C4;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a7eb0
	ctx.lr = 0x82D0F18C;
	sub_827A7EB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a7eb0
	ctx.lr = 0x82D0F1A4;
	sub_827A7EB0(ctx, base);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, xer);
	// bge cr6,0x82d0f1c4
	if (!cr6.lt) goto loc_82D0F1C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a7eb0
	ctx.lr = 0x82D0F1C0;
	sub_827A7EB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82D0F1C4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831d0b58
	ctx.lr = 0x82D0F1D8;
	sub_831D0B58(ctx, base);
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x82d0f1ec
	if (!cr6.lt) goto loc_82D0F1EC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82D0F1EC:
	// bl 0x82d0e298
	ctx.lr = 0x82D0F1F0;
	sub_82D0E298(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d0e2b8
	ctx.lr = 0x82D0F1F8;
	sub_82D0E2B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d0f2a4
	if (cr6.eq) goto loc_82D0F2A4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0f228
	if (!cr6.eq) goto loc_82D0F228;
	// bl 0x82d0e298
	ctx.lr = 0x82D0F214;
	sub_82D0E298(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d0f2d4
	if (!cr6.eq) goto loc_82D0F2D4;
loc_82D0F228:
	// li r29,27
	ctx.r29.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D0F240;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0f2a4
	if (cr6.eq) goto loc_82D0F2A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d0eda8
	ctx.lr = 0x82D0F250;
	sub_82D0EDA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0f2a4
	if (cr6.eq) goto loc_82D0F2A4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d0f028
	ctx.lr = 0x82D0F268;
	sub_82D0F028(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0f2b8
	if (!cr6.eq) goto loc_82D0F2B8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D0F284;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D0F29C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D0F2A4;
	sub_82595170(ctx, base);
loc_82D0F2A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D0F2AC;
	sub_8387E8E0(ctx, base);
loc_82D0F2AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D0F2B8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d11a80
	ctx.lr = 0x82D0F2C4;
	sub_82D11A80(ctx, base);
	// bl 0x82d0e298
	ctx.lr = 0x82D0F2C8;
	sub_82D0E298(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d0e328
	ctx.lr = 0x82D0F2D4;
	sub_82D0E328(ctx, base);
loc_82D0F2D4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D0F2DC;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0F2E8"))) PPC_WEAK_FUNC(sub_82D0F2E8);
PPC_FUNC_IMPL(__imp__sub_82D0F2E8) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0f30c
	if (cr6.eq) goto loc_82D0F30C;
	// bl 0x833bbd78
	ctx.lr = 0x82D0F30C;
	sub_833BBD78(ctx, base);
loc_82D0F30C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82572fa0
	ctx.lr = 0x82D0F318;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_82D0F32C"))) PPC_WEAK_FUNC(sub_82D0F32C);
PPC_FUNC_IMPL(__imp__sub_82D0F32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D0F330"))) PPC_WEAK_FUNC(sub_82D0F330);
PPC_FUNC_IMPL(__imp__sub_82D0F330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0F340"))) PPC_WEAK_FUNC(sub_82D0F340);
PPC_FUNC_IMPL(__imp__sub_82D0F340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0F350"))) PPC_WEAK_FUNC(sub_82D0F350);
PPC_FUNC_IMPL(__imp__sub_82D0F350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,4496
	ctx.r11.s64 = ctx.r11.s64 + 4496;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0F368"))) PPC_WEAK_FUNC(sub_82D0F368);
PPC_FUNC_IMPL(__imp__sub_82D0F368) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D0F390"))) PPC_WEAK_FUNC(sub_82D0F390);
PPC_FUNC_IMPL(__imp__sub_82D0F390) {
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
	// bne cr6,0x82d0f3d4
	if (!cr6.eq) goto loc_82D0F3D4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d0f3d4
	if (cr6.eq) goto loc_82D0F3D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833bcae8
	ctx.lr = 0x82D0F3D0;
	sub_833BCAE8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82D0F3D4:
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

__attribute__((alias("__imp__sub_82D0F3E8"))) PPC_WEAK_FUNC(sub_82D0F3E8);
PPC_FUNC_IMPL(__imp__sub_82D0F3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825832e8
	sub_825832E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0F3F0"))) PPC_WEAK_FUNC(sub_82D0F3F0);
PPC_FUNC_IMPL(__imp__sub_82D0F3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825832f0
	sub_825832F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0F3F8"))) PPC_WEAK_FUNC(sub_82D0F3F8);
PPC_FUNC_IMPL(__imp__sub_82D0F3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D0F400;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82D0F42C;
	sub_82572FA0(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82D0F454:
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x82D0F46C;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// bne 0x82d0f454
	if (!cr0.eq) goto loc_82D0F454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0F488"))) PPC_WEAK_FUNC(sub_82D0F488);
PPC_FUNC_IMPL(__imp__sub_82D0F488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D0F490;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82D0F4C4;
	sub_82572FA0(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0F500"))) PPC_WEAK_FUNC(sub_82D0F500);
PPC_FUNC_IMPL(__imp__sub_82D0F500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82D0F508;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82d0ea60
	ctx.lr = 0x82D0F518;
	sub_82D0EA60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d0f52c
	if (!cr6.eq) goto loc_82D0F52C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82D0F52C:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r22,27
	ctx.r22.s64 = 27;
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r27,5(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// rotlwi r24,r29,2
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// mullw r31,r27,r29
	ctx.r31.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82595718
	ctx.lr = 0x82D0F568;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d0f598
	if (cr6.eq) goto loc_82D0F598;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82D0F584:
	// stb r23,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d0f584
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0F584;
loc_82D0F598:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d0eb70
	ctx.lr = 0x82D0F5B4;
	sub_82D0EB70(ctx, base);
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82d0f5d8
	if (!cr6.eq) goto loc_82D0F5D8;
	// lbz r11,49(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82d0f5d8
	if (!cr6.eq) goto loc_82D0F5D8;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82d0f630
	if (cr6.eq) goto loc_82D0F630;
loc_82D0F5D8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82d0f630
	if (cr6.eq) goto loc_82D0F630;
	// addi r10,r28,2
	ctx.r10.s64 = ctx.r28.s64 + 2;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82D0F5E8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d0f624
	if (cr6.eq) goto loc_82D0F624;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_82D0F5F8:
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d0f61c
	if (cr6.eq) goto loc_82D0F61C;
	// lbz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbz r7,49(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r6,50(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_82D0F61C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82d0f5f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0F5F8;
loc_82D0F624:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// bne 0x82d0f5e8
	if (!cr0.eq) goto loc_82D0F5E8;
loc_82D0F630:
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82D0F644;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0f680
	if (cr6.eq) goto loc_82D0F680;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x835ebb28
	ctx.lr = 0x82D0F678;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82d0f684
	goto loc_82D0F684;
loc_82D0F680:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82D0F684:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82572fa0
	ctx.lr = 0x82D0F68C;
	sub_82572FA0(ctx, base);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82D0F69C;
	sub_825952B8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,96(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// lwz r10,96(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,7(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0F6D8"))) PPC_WEAK_FUNC(sub_82D0F6D8);
PPC_FUNC_IMPL(__imp__sub_82D0F6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82D0F6E0;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r4,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r4.u32);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// addi r11,r9,4496
	ctx.r11.s64 = ctx.r9.s64 + 4496;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// bne cr6,0x82d0f760
	if (!cr6.eq) goto loc_82D0F760;
	// li r14,1
	ctx.r14.s64 = 1;
	// b 0x82d0f77c
	goto loc_82D0F77C;
loc_82D0F760:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82d0f778
	if (!cr6.gt) goto loc_82D0F778;
loc_82D0F76C:
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82d0f76c
	if (cr6.gt) goto loc_82D0F76C;
loc_82D0F778:
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
loc_82D0F77C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d0f79c
	if (cr6.eq) goto loc_82D0F79C;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82d0f79c
	if (!cr6.gt) goto loc_82D0F79C;
loc_82D0F790:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d0f790
	if (cr6.gt) goto loc_82D0F790;
loc_82D0F79C:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ee550
	ctx.lr = 0x82D0F7B0;
	sub_835EE550(ctx, base);
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stw r17,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ed758
	ctx.lr = 0x82D0F7C4;
	sub_835ED758(ctx, base);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// ble cr6,0x82d0f91c
	if (!cr6.gt) goto loc_82D0F91C;
	// rlwinm r22,r16,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_82D0F7D8:
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// ble cr6,0x82d0f90c
	if (!cr6.gt) goto loc_82D0F90C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_82D0F7E8:
	// lbz r24,0(r25)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82d0f8fc
	if (cr6.eq) goto loc_82D0F8FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d0f8fc
	if (!cr6.gt) goto loc_82D0F8FC;
loc_82D0F804:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// ble cr6,0x82d0f8ec
	if (!cr6.gt) goto loc_82D0F8EC;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
loc_82D0F83C:
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f12.u64);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r29,r7,24
	ctx.r29.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d0f8dc
	if (cr6.eq) goto loc_82D0F8DC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x835ed648
	ctx.lr = 0x82D0F894;
	sub_835ED648(ctx, base);
	// lbz r11,95(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d0f8bc
	if (!cr6.eq) goto loc_82D0F8BC;
	// lbz r11,52(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 52);
	// lbz r10,53(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 53);
	// lbz r9,54(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 54);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// b 0x82d0f8c4
	goto loc_82D0F8C4;
loc_82D0F8BC:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x82d0f8dc
	if (!cr6.lt) goto loc_82D0F8DC;
loc_82D0F8C4:
	// stb r29,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r29.u8);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ed5a8
	ctx.lr = 0x82D0F8DC;
	sub_835ED5A8(ctx, base);
loc_82D0F8DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d0f83c
	if (cr6.lt) goto loc_82D0F83C;
loc_82D0F8EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d0f804
	if (cr6.lt) goto loc_82D0F804;
loc_82D0F8FC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r27,r16
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r16.s32, xer);
	// blt cr6,0x82d0f7e8
	if (cr6.lt) goto loc_82D0F7E8;
loc_82D0F90C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// cmpw cr6,r26,r15
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r15.s32, xer);
	// blt cr6,0x82d0f7d8
	if (cr6.lt) goto loc_82D0F7D8;
loc_82D0F91C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x82d0fcd0
	if (!cr6.gt) goto loc_82D0FCD0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r20,r16,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r19,2
	ctx.r22.s64 = ctx.r19.s64 + 2;
	// lfs f29,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// li r25,255
	ctx.r25.s64 = 255;
	// lfs f31,-11356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11356);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,21700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21700);
	ctx.f30.f64 = double(temp.f32);
loc_82D0F964:
	// add r11,r23,r21
	ctx.r11.u64 = ctx.r23.u64 + ctx.r21.u64;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// ble cr6,0x82d0fcc0
	if (!cr6.gt) goto loc_82D0FCC0;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82D0F97C:
	// add r11,r26,r24
	ctx.r11.u64 = ctx.r26.u64 + ctx.r24.u64;
	// lbz r31,-2(r27)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r27.u32 + -2);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lbz r30,-1(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lbz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r28,1(r27)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// bl 0x835ed648
	ctx.lr = 0x82D0F9A8;
	sub_835ED648(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d0fcb0
	if (cr6.eq) goto loc_82D0FCB0;
	// cmplwi cr6,r31,255
	cr6.compare<uint32_t>(ctx.r31.u32, 255, xer);
	// bne cr6,0x82d0f9d0
	if (!cr6.eq) goto loc_82D0F9D0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// b 0x82d0fc9c
	goto loc_82D0FC9C;
loc_82D0F9D0:
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d0f9f0
	if (!cr6.eq) goto loc_82D0F9F0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// b 0x82d0fc9c
	goto loc_82D0FC9C;
loc_82D0F9F0:
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82d0faf0
	if (!cr6.eq) goto loc_82D0FAF0;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stb r25,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r25.u8);
	// subf r3,r6,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r6.s64;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lfd f11,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// lfd f10,216(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f13,152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// std r9,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r9.u64);
	// lfd f2,248(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r8.u64);
	// lfd f4,280(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcfid f9,f4
	ctx.f9.f64 = double(ctx.f4.s64);
	// fmuls f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// frsp f12,f6
	ctx.f12.f64 = double(float(ctx.f6.f64));
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f13,f0,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f6,f10,f0,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fctidz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f4.u64);
	// lbz r7,111(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// fctidz f3,f6
	ctx.f3.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f3.u64);
	// lbz r11,111(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// fmadds f2,f5,f0,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f1.u64);
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x82d0fc98
	goto loc_82D0FC98;
loc_82D0FAF0:
	// subfic r9,r11,255
	xer.ca = ctx.r11.u32 <= 255;
	ctx.r9.s64 = 255 - ctx.r11.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// lfd f13,232(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// std r5,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r5.u64);
	// lfd f12,264(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// fmuls f13,f8,f30
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x82d0fb5c
	if (!cr6.gt) goto loc_82D0FB5C;
	// fsubs f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x82d0fb5c
	if (!cr6.gt) goto loc_82D0FB5C;
	// fadds f0,f10,f29
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_82D0FB5C:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// ble cr6,0x82d0fb74
	if (!cr6.gt) goto loc_82D0FB74;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82D0FB74:
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// lfd f10,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// lfd f12,208(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f0,200(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// fmadds f5,f6,f13,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fdivs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f0.f64));
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f3.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// ble cr6,0x82d0fbdc
	if (!cr6.gt) goto loc_82D0FBDC;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82D0FBDC:
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// std r6,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r6.u64);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// std r4,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// lfd f11,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f12,240(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmadds f6,f8,f13,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fdivs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f0.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f4.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// ble cr6,0x82d0fc34
	if (!cr6.gt) goto loc_82D0FC34;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82D0FC34:
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// std r7,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r7.u64);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// std r3,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r3.u64);
	// lfd f12,272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f11,288(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmadds f6,f7,f13,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fdivs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f0.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f4.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x82d0fc8c
	if (!cr6.gt) goto loc_82D0FC8C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D0FC8C:
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_82D0FC98:
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
loc_82D0FC9C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ed5a8
	ctx.lr = 0x82D0FCB0;
	sub_835ED5A8(ctx, base);
loc_82D0FCB0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r16
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r16.s32, xer);
	// blt cr6,0x82d0f97c
	if (cr6.lt) goto loc_82D0F97C;
loc_82D0FCC0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r22,r22,r20
	ctx.r22.u64 = ctx.r22.u64 + ctx.r20.u64;
	// cmpw cr6,r23,r15
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r15.s32, xer);
	// blt cr6,0x82d0f964
	if (cr6.lt) goto loc_82D0F964;
loc_82D0FCD0:
	// lwz r11,44(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d0fd08
	if (cr6.eq) goto loc_82D0FD08;
	// std r17,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r17.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82572fa0
	ctx.lr = 0x82D0FCEC;
	sub_82572FA0(ctx, base);
	// addi r3,r18,8
	ctx.r3.s64 = ctx.r18.s64 + 8;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82572fa0
	ctx.lr = 0x82D0FCF8;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82572fa0
	ctx.lr = 0x82D0FD04;
	sub_82572FA0(ctx, base);
	// b 0x82d0fe10
	goto loc_82D0FE10;
loc_82D0FD08:
	// lwz r11,32(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,32(r18)
	PPC_STORE_U32(ctx.r18.u32 + 32, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d0fd34
	if (cr6.eq) goto loc_82D0FD34;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82d0fd34
	if (!cr6.gt) goto loc_82D0FD34;
loc_82D0FD28:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82d0fd28
	if (cr6.gt) goto loc_82D0FD28;
loc_82D0FD34:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x835ee550
	ctx.lr = 0x82D0FD48;
	sub_835EE550(ctx, base);
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x835ed758
	ctx.lr = 0x82D0FD58;
	sub_835ED758(ctx, base);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// ble cr6,0x82d0fde0
	if (!cr6.gt) goto loc_82D0FDE0;
	// addi r31,r14,-1
	ctx.r31.s64 = ctx.r14.s64 + -1;
loc_82D0FD6C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ble cr6,0x82d0fdd0
	if (!cr6.gt) goto loc_82D0FDD0;
loc_82D0FD84:
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ed648
	ctx.lr = 0x82D0FD98;
	sub_835ED648(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x835ed5a8
	ctx.lr = 0x82D0FDAC;
	sub_835ED5A8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// blt cr6,0x82d0fd84
	if (cr6.lt) goto loc_82D0FD84;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82D0FDD0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x82d0fd6c
	if (cr6.lt) goto loc_82D0FD6C;
loc_82D0FDE0:
	// std r17,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r17.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82572fa0
	ctx.lr = 0x82D0FDF0;
	sub_82572FA0(ctx, base);
	// addi r3,r18,8
	ctx.r3.s64 = ctx.r18.s64 + 8;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82572fa0
	ctx.lr = 0x82D0FDFC;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82572fa0
	ctx.lr = 0x82D0FE08;
	sub_82572FA0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x835ed308
	ctx.lr = 0x82D0FE10;
	sub_835ED308(ctx, base);
loc_82D0FE10:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ed308
	ctx.lr = 0x82D0FE18;
	sub_835ED308(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82572fa0
	ctx.lr = 0x82D0FE24;
	sub_82572FA0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D0FE38"))) PPC_WEAK_FUNC(sub_82D0FE38);
PPC_FUNC_IMPL(__imp__sub_82D0FE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82D0FE40;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82d0ea60
	ctx.lr = 0x82D0FE50;
	sub_82D0EA60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d0fe64
	if (!cr6.eq) goto loc_82D0FE64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82D0FE64:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r23,7(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d0fe90
	if (!cr6.eq) goto loc_82D0FE90;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82D0FE90:
	// li r22,27
	ctx.r22.s64 = 27;
	// mullw r31,r30,r23
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r23.s32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82595718
	ctx.lr = 0x82D0FEB4;
	sub_82595718(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82D0FEC4;
	sub_831CDCF0(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d0fef0
	if (cr6.eq) goto loc_82D0FEF0;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82D0FEDC:
	// stb r24,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r24.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d0fedc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0FEDC;
loc_82D0FEF0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0eb70
	ctx.lr = 0x82D0FF0C;
	sub_82D0EB70(ctx, base);
	// lbz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82d0ff30
	if (!cr6.eq) goto loc_82D0FF30;
	// lbz r11,49(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82d0ff30
	if (!cr6.eq) goto loc_82D0FF30;
	// lbz r11,50(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 50);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82d0ff88
	if (cr6.eq) goto loc_82D0FF88;
loc_82D0FF30:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82d0ff88
	if (cr6.eq) goto loc_82D0FF88;
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82D0FF40:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d0ff7c
	if (cr6.eq) goto loc_82D0FF7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_82D0FF50:
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d0ff74
	if (cr6.eq) goto loc_82D0FF74;
	// lbz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbz r7,49(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r6,50(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 50);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_82D0FF74:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82d0ff50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D0FF50;
loc_82D0FF7C:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bne 0x82d0ff40
	if (!cr0.eq) goto loc_82D0FF40;
loc_82D0FF88:
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82D0FF9C;
	sub_82595718(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d0ffd8
	if (cr6.eq) goto loc_82D0FFD8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x835ebb28
	ctx.lr = 0x82D0FFD0;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82d0ffdc
	goto loc_82D0FFDC;
loc_82D0FFD8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82D0FFDC:
	// std r24,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r24.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82D0FFE8;
	sub_82572FA0(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d10004
	if (!cr6.eq) goto loc_82D10004;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82572fa0
	ctx.lr = 0x82D10000;
	sub_82572FA0(ctx, base);
	// b 0x82d10048
	goto loc_82D10048;
loc_82D10004:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d10020
	if (!cr6.eq) goto loc_82D10020;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(ctx.r11.s32, 19, xer);
	// bne cr6,0x82d10020
	if (!cr6.eq) goto loc_82D10020;
	// stw r31,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r31.u32);
loc_82D10020:
	// std r24,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r24.u64);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82572fa0
	ctx.lr = 0x82D10030;
	sub_82572FA0(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d0f6d8
	ctx.lr = 0x82D10048;
	sub_82D0F6D8(ctx, base);
loc_82D10048:
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82D10058;
	sub_825952B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82D10064;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10070"))) PPC_WEAK_FUNC(sub_82D10070);
PPC_FUNC_IMPL(__imp__sub_82D10070) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d100d8
	if (cr6.eq) goto loc_82D100D8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d0f340
	ctx.lr = 0x82D1009C;
	sub_82D0F340(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bge cr6,0x82d100d8
	if (!cr6.lt) goto loc_82D100D8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r7.u8);
loc_82D100D8:
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

__attribute__((alias("__imp__sub_82D100F0"))) PPC_WEAK_FUNC(sub_82D100F0);
PPC_FUNC_IMPL(__imp__sub_82D100F0) {
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
	// bne cr6,0x82d10134
	if (!cr6.eq) goto loc_82D10134;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f8
	ctx.lr = 0x82D1012C;
	sub_825832F8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82d10154
	goto loc_82D10154;
loc_82D10134:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83131d70
	ctx.lr = 0x82D10140;
	sub_83131D70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825832f8
	ctx.lr = 0x82D1014C;
	sub_825832F8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D10154:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83131d70
	ctx.lr = 0x82D1015C;
	sub_83131D70(ctx, base);
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

__attribute__((alias("__imp__sub_82D10174"))) PPC_WEAK_FUNC(sub_82D10174);
PPC_FUNC_IMPL(__imp__sub_82D10174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10178"))) PPC_WEAK_FUNC(sub_82D10178);
PPC_FUNC_IMPL(__imp__sub_82D10178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D10180;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d10288
	if (!cr6.gt) goto loc_82D10288;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r26,27
	ctx.r26.s64 = 27;
loc_82D101A8:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r25,3
	ctx.r25.s64 = 3;
loc_82D101B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d10268
	if (cr6.eq) goto loc_82D10268;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d1025c
	if (cr6.eq) goto loc_82D1025C;
loc_82D101D0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bge cr6,0x82d10250
	if (!cr6.lt) goto loc_82D10250;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d10200
	if (cr6.eq) goto loc_82D10200;
	// bl 0x83131d70
	ctx.lr = 0x82D101FC;
	sub_83131D70(ctx, base);
	// b 0x82d10204
	goto loc_82D10204;
loc_82D10200:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
loc_82D10204:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d1021c
	if (cr6.eq) goto loc_82D1021C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825832f8
	ctx.lr = 0x82D10218;
	sub_825832F8(ctx, base);
	// b 0x82d10224
	goto loc_82D10224;
loc_82D1021C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82D10224:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D10234;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0f2e8
	ctx.lr = 0x82D1023C;
	sub_82D0F2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D10244;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D1024C;
	sub_82595170(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D10250:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82d101d0
	if (!cr6.eq) goto loc_82D101D0;
loc_82D1025C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r23,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r23.u8);
loc_82D10268:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82d101b0
	if (!cr0.eq) goto loc_82D101B0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, xer);
	// blt cr6,0x82d101a8
	if (cr6.lt) goto loc_82D101A8;
loc_82D10288:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10290"))) PPC_WEAK_FUNC(sub_82D10290);
PPC_FUNC_IMPL(__imp__sub_82D10290) {
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
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r11,21845
	ctx.r9.u64 = ctx.r11.u64 | 21845;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82d102e8
	if (cr6.gt) goto loc_82D102E8;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r4,r11
	ctx.r31.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r9,r11,21845
	ctx.r9.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82d102ec
	if (cr6.gt) goto loc_82D102EC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82d102f0
	goto loc_82D102F0;
loc_82D102E8:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82D102EC:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82D102F0:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D10304;
	sub_82595718(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d10340
	if (cr6.eq) goto loc_82D10340;
	// addic. r11,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82d10338
	if (cr0.lt) goto loc_82D10338;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D10328:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stbu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d10328
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D10328;
loc_82D10338:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82d10348
	goto loc_82D10348;
loc_82D10340:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82D10348:
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

__attribute__((alias("__imp__sub_82D10364"))) PPC_WEAK_FUNC(sub_82D10364);
PPC_FUNC_IMPL(__imp__sub_82D10364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10368"))) PPC_WEAK_FUNC(sub_82D10368);
PPC_FUNC_IMPL(__imp__sub_82D10368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D10370;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r3,r27,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d103b4
	if (cr6.eq) goto loc_82D103B4;
loc_82D1039C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x82d103b4
	if (cr6.eq) goto loc_82D103B4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d1039c
	if (!cr6.eq) goto loc_82D1039C;
loc_82D103B4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d103d0
	if (cr6.eq) goto loc_82D103D0;
	// bl 0x82d0f330
	ctx.lr = 0x82D103C4;
	sub_82D0F330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D103D0:
	// li r26,27
	ctx.r26.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D103E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d10440
	if (cr6.eq) goto loc_82D10440;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d0f3f8
	ctx.lr = 0x82D103FC;
	sub_82D0F3F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d10440
	if (cr6.eq) goto loc_82D10440;
	// bl 0x82d0f500
	ctx.lr = 0x82D1040C;
	sub_82D0F500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d1044c
	if (!cr6.eq) goto loc_82D1044C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D10428;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0f2e8
	ctx.lr = 0x82D10430;
	sub_82D0F2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D10438;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D10440;
	sub_82595170(ctx, base);
loc_82D10440:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D1044C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0f330
	ctx.lr = 0x82D10454;
	sub_82D0F330(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82d100f0
	ctx.lr = 0x82D10464;
	sub_82D100F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10470"))) PPC_WEAK_FUNC(sub_82D10470);
PPC_FUNC_IMPL(__imp__sub_82D10470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D10478;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm r25,r8,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r25,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d104e0
	if (cr6.eq) goto loc_82D104E0;
loc_82D104B8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82d104d4
	if (!cr6.eq) goto loc_82D104D4;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d104e0
	if (cr6.eq) goto loc_82D104E0;
loc_82D104D4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d104b8
	if (!cr6.eq) goto loc_82D104B8;
loc_82D104E0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d104fc
	if (cr6.eq) goto loc_82D104FC;
	// bl 0x82d0f330
	ctx.lr = 0x82D104F0;
	sub_82D0F330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D104FC:
	// li r24,27
	ctx.r24.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D10514;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d10574
	if (cr6.eq) goto loc_82D10574;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d0f488
	ctx.lr = 0x82D10530;
	sub_82D0F488(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d10574
	if (cr6.eq) goto loc_82D10574;
	// bl 0x82d0fe38
	ctx.lr = 0x82D10540;
	sub_82D0FE38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d10580
	if (!cr6.eq) goto loc_82D10580;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D1055C;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0f2e8
	ctx.lr = 0x82D10564;
	sub_82D0F2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D1056C;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D10574;
	sub_82595170(ctx, base);
loc_82D10574:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D10580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0f330
	ctx.lr = 0x82D10588;
	sub_82D0F330(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r25,r11
	ctx.r3.u64 = ctx.r25.u64 + ctx.r11.u64;
	// bl 0x82d100f0
	ctx.lr = 0x82D10598;
	sub_82D100F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D105A4"))) PPC_WEAK_FUNC(sub_82D105A4);
PPC_FUNC_IMPL(__imp__sub_82D105A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D105A8"))) PPC_WEAK_FUNC(sub_82D105A8);
PPC_FUNC_IMPL(__imp__sub_82D105A8) {
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
	// bl 0x82d10178
	ctx.lr = 0x82D105C8;
	sub_82D10178(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d105f8
	if (cr6.eq) goto loc_82D105F8;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D105E8;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82D105F0;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D105F8;
	sub_82595170(ctx, base);
loc_82D105F8:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d10610
	if (cr6.eq) goto loc_82D10610;
	// bl 0x82416268
	ctx.lr = 0x82D1060C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D10610:
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

__attribute__((alias("__imp__sub_82D10628"))) PPC_WEAK_FUNC(sub_82D10628);
PPC_FUNC_IMPL(__imp__sub_82D10628) {
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
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r31,-30188(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30188);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d106b4
	if (cr6.eq) goto loc_82D106B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,-30188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30188, ctx.r11.u32);
	// beq cr6,0x82d106b4
	if (cr6.eq) goto loc_82D106B4;
	// li r30,27
	ctx.r30.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x82D10670;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d10178
	ctx.lr = 0x82D10678;
	sub_82D10178(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d106a4
	if (cr6.eq) goto loc_82D106A4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D10694;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82D1069C;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D106A4;
	sub_82595170(ctx, base);
loc_82D106A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D106AC;
	sub_82416268(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x82D106B4;
	sub_82595170(ctx, base);
loc_82D106B4:
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

__attribute__((alias("__imp__sub_82D106CC"))) PPC_WEAK_FUNC(sub_82D106CC);
PPC_FUNC_IMPL(__imp__sub_82D106CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D106D0"))) PPC_WEAK_FUNC(sub_82D106D0);
PPC_FUNC_IMPL(__imp__sub_82D106D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D106D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-30188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d1077c
	if (!cr6.eq) goto loc_82D1077C;
	// li r29,27
	ctx.r29.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D10708;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d1075c
	if (cr6.eq) goto loc_82D1075C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,-30188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d10768
	if (cr6.eq) goto loc_82D10768;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D1073C;
	sub_82595150(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d105a8
	ctx.lr = 0x82D10748;
	sub_82D105A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D10750;
	sub_82595170(ctx, base);
	// lwz r3,-30188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30188);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D1075C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D10768:
	// stw r31,-30188(r30)
	PPC_STORE_U32(ctx.r30.u32 + -30188, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d10290
	ctx.lr = 0x82D10778;
	sub_82D10290(ctx, base);
	// lwz r3,-30188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30188);
loc_82D1077C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10784"))) PPC_WEAK_FUNC(sub_82D10784);
PPC_FUNC_IMPL(__imp__sub_82D10784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10788"))) PPC_WEAK_FUNC(sub_82D10788);
PPC_FUNC_IMPL(__imp__sub_82D10788) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82d107bc
	if (!cr6.eq) goto loc_82D107BC;
loc_82D107A4:
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
loc_82D107BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d06fa0
	ctx.lr = 0x82D107C4;
	sub_82D06FA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d107a4
	if (cr6.eq) goto loc_82D107A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D107E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D10800;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D10818;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82D10838"))) PPC_WEAK_FUNC(sub_82D10838);
PPC_FUNC_IMPL(__imp__sub_82D10838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D10840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82d0e298
	ctx.lr = 0x82D10854;
	sub_82D0E298(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d10930
	if (cr6.eq) goto loc_82D10930;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// bge cr6,0x82d10878
	if (!cr6.lt) goto loc_82D10878;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82d1087c
	goto loc_82D1087C;
loc_82D10878:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D1087C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d10894
	if (!cr6.eq) goto loc_82D10894;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d10930
	if (cr6.eq) goto loc_82D10930;
loc_82D10894:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D108C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D108E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D10900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D10918;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D10930;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D10930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10938"))) PPC_WEAK_FUNC(sub_82D10938);
PPC_FUNC_IMPL(__imp__sub_82D10938) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82d109a0
	if (cr6.eq) goto loc_82D109A0;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D10970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D10988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D109A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D109A0:
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

__attribute__((alias("__imp__sub_82D109B4"))) PPC_WEAK_FUNC(sub_82D109B4);
PPC_FUNC_IMPL(__imp__sub_82D109B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D109B8"))) PPC_WEAK_FUNC(sub_82D109B8);
PPC_FUNC_IMPL(__imp__sub_82D109B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,32(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D109EC"))) PPC_WEAK_FUNC(sub_82D109EC);
PPC_FUNC_IMPL(__imp__sub_82D109EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D109F0"))) PPC_WEAK_FUNC(sub_82D109F0);
PPC_FUNC_IMPL(__imp__sub_82D109F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D10A24"))) PPC_WEAK_FUNC(sub_82D10A24);
PPC_FUNC_IMPL(__imp__sub_82D10A24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D10A28"))) PPC_WEAK_FUNC(sub_82D10A28);
PPC_FUNC_IMPL(__imp__sub_82D10A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D10A4C"))) PPC_WEAK_FUNC(sub_82D10A4C);
PPC_FUNC_IMPL(__imp__sub_82D10A4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D10A50"))) PPC_WEAK_FUNC(sub_82D10A50);
PPC_FUNC_IMPL(__imp__sub_82D10A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D10A74"))) PPC_WEAK_FUNC(sub_82D10A74);
PPC_FUNC_IMPL(__imp__sub_82D10A74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D10A78"))) PPC_WEAK_FUNC(sub_82D10A78);
PPC_FUNC_IMPL(__imp__sub_82D10A78) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82d10ae0
	if (cr6.eq) goto loc_82D10AE0;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D10AB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D10AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82D10AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D10AE0:
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

__attribute__((alias("__imp__sub_82D10AF4"))) PPC_WEAK_FUNC(sub_82D10AF4);
PPC_FUNC_IMPL(__imp__sub_82D10AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10AF8"))) PPC_WEAK_FUNC(sub_82D10AF8);
PPC_FUNC_IMPL(__imp__sub_82D10AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r4.u8);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D10B20"))) PPC_WEAK_FUNC(sub_82D10B20);
PPC_FUNC_IMPL(__imp__sub_82D10B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D10B24"))) PPC_WEAK_FUNC(sub_82D10B24);
PPC_FUNC_IMPL(__imp__sub_82D10B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10B28"))) PPC_WEAK_FUNC(sub_82D10B28);
PPC_FUNC_IMPL(__imp__sub_82D10B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,45(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r4.u8);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D10B50"))) PPC_WEAK_FUNC(sub_82D10B50);
PPC_FUNC_IMPL(__imp__sub_82D10B50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D10B54"))) PPC_WEAK_FUNC(sub_82D10B54);
PPC_FUNC_IMPL(__imp__sub_82D10B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10B58"))) PPC_WEAK_FUNC(sub_82D10B58);
PPC_FUNC_IMPL(__imp__sub_82D10B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,-11356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,40(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D10B8C"))) PPC_WEAK_FUNC(sub_82D10B8C);
PPC_FUNC_IMPL(__imp__sub_82D10B8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D10B90"))) PPC_WEAK_FUNC(sub_82D10B90);
PPC_FUNC_IMPL(__imp__sub_82D10B90) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d10c08
	if (cr6.eq) goto loc_82D10C08;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D10BCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82d10c08
	if (cr6.eq) goto loc_82D10C08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D10BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D10C08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D10C08:
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

__attribute__((alias("__imp__sub_82D10C1C"))) PPC_WEAK_FUNC(sub_82D10C1C);
PPC_FUNC_IMPL(__imp__sub_82D10C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10C20"))) PPC_WEAK_FUNC(sub_82D10C20);
PPC_FUNC_IMPL(__imp__sub_82D10C20) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d05600
	ctx.lr = 0x82D10C3C;
	sub_82D05600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d10b90
	ctx.lr = 0x82D10C48;
	sub_82D10B90(ctx, base);
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

__attribute__((alias("__imp__sub_82D10C5C"))) PPC_WEAK_FUNC(sub_82D10C5C);
PPC_FUNC_IMPL(__imp__sub_82D10C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10C60"))) PPC_WEAK_FUNC(sub_82D10C60);
PPC_FUNC_IMPL(__imp__sub_82D10C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D10C68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82d10d9c
	if (cr6.eq) goto loc_82D10D9C;
	// lis r11,780
	ctx.r11.s64 = 51118080;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r10,r11,12483
	ctx.r10.u64 = ctx.r11.u64 | 12483;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d10ca4
	if (cr6.gt) goto loc_82D10CA4;
	// mulli r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 * 84;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d10ca8
	if (!cr6.gt) goto loc_82D10CA8;
loc_82D10CA4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82D10CA8:
	// li r27,27
	ctx.r27.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D10CBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d10cf0
	if (cr6.eq) goto loc_82D10CF0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82d10cf4
	if (cr0.lt) goto loc_82D10CF4;
loc_82D10CD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0c760
	ctx.lr = 0x82D10CE0;
	sub_82D0C760(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// bge 0x82d10cd8
	if (!cr0.lt) goto loc_82D10CD8;
	// b 0x82d10cf4
	goto loc_82D10CF4;
loc_82D10CF0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D10CF4:
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// stw r29,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d10d9c
	if (!cr6.eq) goto loc_82D10D9C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// ori r9,r10,52428
	ctx.r9.u64 = ctx.r10.u64 | 52428;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82d10d2c
	if (cr6.gt) goto loc_82D10D2C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82d10d30
	goto loc_82D10D30;
loc_82D10D2C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82D10D30:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D10D40;
	sub_82595718(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r3,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d10d9c
	if (cr6.eq) goto loc_82D10D9C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r10,255
	ctx.r10.s64 = 255;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82D10D68:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r10,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stfsu f0,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82d10d68
	if (cr6.lt) goto loc_82D10D68;
loc_82D10D9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10DA4"))) PPC_WEAK_FUNC(sub_82D10DA4);
PPC_FUNC_IMPL(__imp__sub_82D10DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10DA8"))) PPC_WEAK_FUNC(sub_82D10DA8);
PPC_FUNC_IMPL(__imp__sub_82D10DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D10DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d0c5c8
	ctx.lr = 0x82D10DC4;
	sub_82D0C5C8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,43
	ctx.r3.s64 = 43;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82d05600
	ctx.lr = 0x82D10DDC;
	sub_82D05600(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,61
	ctx.r3.s64 = 61;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d10df4
	if (cr6.eq) goto loc_82D10DF4;
	// li r3,43
	ctx.r3.s64 = 43;
loc_82D10DF4:
	// bl 0x82d05600
	ctx.lr = 0x82D10DF8;
	sub_82D05600(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82D10E00:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d0c5f8
	ctx.lr = 0x82D10E0C;
	sub_82D0C5F8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d10e5c
	if (!cr6.eq) goto loc_82D10E5C;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d10efc
	if (cr6.eq) goto loc_82D10EFC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82d10e44
	if (!cr6.eq) goto loc_82D10E44;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82d10e00
	goto loc_82D10E00;
loc_82D10E44:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82d10e00
	if (!cr6.eq) goto loc_82D10E00;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82d10e00
	goto loc_82D10E00;
loc_82D10E5C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bc70
	ctx.lr = 0x82D10E64;
	sub_82D0BC70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d10edc
	if (!cr6.eq) goto loc_82D10EDC;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d0bc98
	ctx.lr = 0x82D10E78;
	sub_82D0BC98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d10edc
	if (!cr6.eq) goto loc_82D10EDC;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d0bbd8
	ctx.lr = 0x82D10E90;
	sub_82D0BBD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d10eac
	if (cr6.eq) goto loc_82D10EAC;
	// bl 0x82d0cb28
	ctx.lr = 0x82D10EA4;
	sub_82D0CB28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82d10ee0
	goto loc_82D10EE0;
loc_82D10EAC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82d10ef0
	if (cr6.eq) goto loc_82D10EF0;
	// bl 0x82d0d550
	ctx.lr = 0x82D10ECC;
	sub_82D0D550(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0cb28
	ctx.lr = 0x82D10ED4;
	sub_82D0CB28(ctx, base);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// b 0x82d10e00
	goto loc_82D10E00;
loc_82D10EDC:
	// li r4,32
	ctx.r4.s64 = 32;
loc_82D10EE0:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D10EF0:
	// bl 0x82d0d550
	ctx.lr = 0x82D10EF4;
	sub_82D0D550(ctx, base);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// b 0x82d10e00
	goto loc_82D10E00;
loc_82D10EFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10F04"))) PPC_WEAK_FUNC(sub_82D10F04);
PPC_FUNC_IMPL(__imp__sub_82D10F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10F08"))) PPC_WEAK_FUNC(sub_82D10F08);
PPC_FUNC_IMPL(__imp__sub_82D10F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D10F10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x82d10f50
	if (!cr6.gt) goto loc_82D10F50;
	// addi r28,r3,108
	ctx.r28.s64 = ctx.r3.s64 + 108;
loc_82D10F2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d0cb00
	ctx.lr = 0x82D10F38;
	sub_82D0CB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82d0cb38
	ctx.lr = 0x82D10F44;
	sub_82D0CB38(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// bne 0x82d10f2c
	if (!cr0.eq) goto loc_82D10F2C;
loc_82D10F50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10F58"))) PPC_WEAK_FUNC(sub_82D10F58);
PPC_FUNC_IMPL(__imp__sub_82D10F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D10F60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d10fc4
	if (cr6.eq) goto loc_82D10FC4;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 * 84;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82d10fa4
	if (cr0.lt) goto loc_82D10FA4;
loc_82D10F90:
	// addi r30,r30,-84
	ctx.r30.s64 = ctx.r30.s64 + -84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0c828
	ctx.lr = 0x82D10F9C;
	sub_82D0C828(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x82d10f90
	if (!cr0.lt) goto loc_82D10F90;
loc_82D10FA4:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d10fb8
	if (cr6.eq) goto loc_82D10FB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x82D10FB8;
	sub_82416268(ctx, base);
loc_82D10FB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D10FC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0c828
	ctx.lr = 0x82D10FCC;
	sub_82D0C828(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d10fe0
	if (cr6.eq) goto loc_82D10FE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82D10FE0;
	sub_82416268(ctx, base);
loc_82D10FE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D10FEC"))) PPC_WEAK_FUNC(sub_82D10FEC);
PPC_FUNC_IMPL(__imp__sub_82D10FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D10FF0"))) PPC_WEAK_FUNC(sub_82D10FF0);
PPC_FUNC_IMPL(__imp__sub_82D10FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d11000
	if (cr6.lt) goto loc_82D11000;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D11000:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D11010"))) PPC_WEAK_FUNC(sub_82D11010);
PPC_FUNC_IMPL(__imp__sub_82D11010) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r30,-30164(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30164);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d11060
	if (cr6.eq) goto loc_82D11060;
loc_82D11038:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D11054;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d11038
	if (!cr6.eq) goto loc_82D11038;
loc_82D11060:
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

__attribute__((alias("__imp__sub_82D11078"))) PPC_WEAK_FUNC(sub_82D11078);
PPC_FUNC_IMPL(__imp__sub_82D11078) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d04220
	ctx.lr = 0x82D110B0;
	sub_82D04220(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82d110c4
	if (!cr6.lt) goto loc_82D110C4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82D110C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D110D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d1110c
	if (!cr6.eq) goto loc_82D1110C;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d11104
	if (cr6.lt) goto loc_82D11104;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D11104;
	sub_825952B8(ctx, base);
loc_82D11104:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d11130
	goto loc_82D11130;
loc_82D1110C:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d1112c
	if (cr6.lt) goto loc_82D1112C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D1112C;
	sub_825952B8(ctx, base);
loc_82D1112C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D11130:
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

__attribute__((alias("__imp__sub_82D11148"))) PPC_WEAK_FUNC(sub_82D11148);
PPC_FUNC_IMPL(__imp__sub_82D11148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D11150;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,92(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r26,r3,88
	ctx.r26.s64 = ctx.r3.s64 + 88;
	// lwz r31,88(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// beq cr6,0x82d11234
	if (cr6.eq) goto loc_82D11234;
	// li r28,27
	ctx.r28.s64 = 27;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D11170:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d111d4
	if (cr6.eq) goto loc_82D111D4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D1118C;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d111c8
	if (cr6.eq) goto loc_82D111C8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82d111c4
	if (cr6.eq) goto loc_82D111C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D111C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82d111c8
	goto loc_82D111C8;
loc_82D111C4:
	// bl 0x82416268
	ctx.lr = 0x82D111C8;
	sub_82416268(ctx, base);
loc_82D111C8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D111D0;
	sub_82595170(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82D111D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1120c
	if (cr6.eq) goto loc_82D1120C;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x82D111F8;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82416268
	ctx.lr = 0x82D11200;
	sub_82416268(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x82D11208;
	sub_82595170(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82D1120C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d11224
	if (cr6.eq) goto loc_82D11224;
	// bl 0x834ca948
	ctx.lr = 0x82D11224;
	sub_834CA948(ctx, base);
loc_82D11224:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x82d11170
	if (!cr6.eq) goto loc_82D11170;
loc_82D11234:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d11284
	if (cr6.eq) goto loc_82D11284;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d11280
	if (cr6.eq) goto loc_82D11280;
loc_82D11250:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d11250
	if (!cr6.eq) goto loc_82D11250;
loc_82D11280:
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82D11284:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D1128C"))) PPC_WEAK_FUNC(sub_82D1128C);
PPC_FUNC_IMPL(__imp__sub_82D1128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11290"))) PPC_WEAK_FUNC(sub_82D11290);
PPC_FUNC_IMPL(__imp__sub_82D11290) {
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
	// bl 0x82d11148
	ctx.lr = 0x82D112A8;
	sub_82D11148(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d11344
	if (cr6.eq) goto loc_82D11344;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d112f4
	if (cr6.eq) goto loc_82D112F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d08790
	ctx.lr = 0x82D112CC;
	sub_82D08790(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D112E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d08890
	ctx.lr = 0x82D112E8;
	sub_82D08890(ctx, base);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r8,r9,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
loc_82D112F4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d11318
	if (cr6.eq) goto loc_82D11318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d09df8
	ctx.lr = 0x82D1130C;
	sub_82D09DF8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_82D11318:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d1133c
	if (cr6.eq) goto loc_82D1133C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d10f08
	ctx.lr = 0x82D11330;
	sub_82D10F08(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_82D1133C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82D11344:
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

__attribute__((alias("__imp__sub_82D11358"))) PPC_WEAK_FUNC(sub_82D11358);
PPC_FUNC_IMPL(__imp__sub_82D11358) {
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
	// bl 0x82d07150
	ctx.lr = 0x82D11374;
	sub_82D07150(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,5560
	ctx.r10.s64 = ctx.r11.s64 + 5560;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x82bee188
	ctx.lr = 0x82D113B0;
	sub_82BEE188(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r3,r8,-30164
	ctx.r3.s64 = ctx.r8.s64 + -30164;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r4,-30164(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30164);
	// bl 0x82d3f908
	ctx.lr = 0x82D113D8;
	sub_82D3F908(ctx, base);
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

__attribute__((alias("__imp__sub_82D113F4"))) PPC_WEAK_FUNC(sub_82D113F4);
PPC_FUNC_IMPL(__imp__sub_82D113F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D113F8"))) PPC_WEAK_FUNC(sub_82D113F8);
PPC_FUNC_IMPL(__imp__sub_82D113F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mulli r10,r4,84
	ctx.r10.s64 = ctx.r4.s64 * 84;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11408"))) PPC_WEAK_FUNC(sub_82D11408);
PPC_FUNC_IMPL(__imp__sub_82D11408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11418"))) PPC_WEAK_FUNC(sub_82D11418);
PPC_FUNC_IMPL(__imp__sub_82D11418) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d11474
	if (cr6.eq) goto loc_82D11474;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x831b0e08
	ctx.lr = 0x82D11460;
	sub_831B0E08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82D11474:
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

__attribute__((alias("__imp__sub_82D11488"))) PPC_WEAK_FUNC(sub_82D11488);
PPC_FUNC_IMPL(__imp__sub_82D11488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D11490;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,5440
	ctx.r31.s64 = ctx.r11.s64 + 5440;
	// lis r28,-31758
	ctx.r28.s64 = -2081292288;
	// lbz r11,-30175(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -30175);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d114d8
	if (!cr6.eq) goto loc_82D114D8;
	// addi r3,r31,-96
	ctx.r3.s64 = ctx.r31.s64 + -96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x82D114C4;
	sub_83523FD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d114d4
	if (!cr6.eq) goto loc_82D114D4;
	// stb r11,-30176(r28)
	PPC_STORE_U8(ctx.r28.u32 + -30176, ctx.r11.u8);
loc_82D114D4:
	// stb r11,-30175(r30)
	PPC_STORE_U8(ctx.r30.u32 + -30175, ctx.r11.u8);
loc_82D114D8:
	// lbz r10,-30176(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + -30176);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82d1159c
	if (!cr6.eq) goto loc_82D1159C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d09c58
	ctx.lr = 0x82D114EC;
	sub_82D09C58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d1159c
	if (cr6.eq) goto loc_82D1159C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a8c428
	ctx.lr = 0x82D11508;
	sub_82A8C428(ctx, base);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r30,48(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bctrl 
	ctx.lr = 0x82D11520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82475d40
	ctx.lr = 0x82D11530;
	sub_82475D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,104(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82473550
	ctx.lr = 0x82D11544;
	sub_82473550(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x82473550
	ctx.lr = 0x82D1154C;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82474170
	ctx.lr = 0x82D11554;
	sub_82474170(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82473550
	ctx.lr = 0x82D1155C;
	sub_82473550(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82473550
	ctx.lr = 0x82D11564;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d74280
	ctx.lr = 0x82D1156C;
	sub_82D74280(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82473550
	ctx.lr = 0x82D11574;
	sub_82473550(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82473550
	ctx.lr = 0x82D1157C;
	sub_82473550(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d6c0a8
	ctx.lr = 0x82D11584;
	sub_82D6C0A8(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82473550
	ctx.lr = 0x82D1158C;
	sub_82473550(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824707c8
	ctx.lr = 0x82D11594;
	sub_824707C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a795b8
	ctx.lr = 0x82D1159C;
	sub_82A795B8(ctx, base);
loc_82D1159C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D115A8"))) PPC_WEAK_FUNC(sub_82D115A8);
PPC_FUNC_IMPL(__imp__sub_82D115A8) {
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
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D115D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d115ec
	if (cr6.eq) goto loc_82D115EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d11358
	ctx.lr = 0x82D115E4;
	sub_82D11358(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d115f0
	if (!cr6.eq) goto loc_82D115F0;
loc_82D115EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D115F0:
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

__attribute__((alias("__imp__sub_82D11604"))) PPC_WEAK_FUNC(sub_82D11604);
PPC_FUNC_IMPL(__imp__sub_82D11604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11608"))) PPC_WEAK_FUNC(sub_82D11608);
PPC_FUNC_IMPL(__imp__sub_82D11608) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// addi r9,r11,5560
	ctx.r9.s64 = ctx.r11.s64 + 5560;
	// addi r3,r10,-30164
	ctx.r3.s64 = ctx.r10.s64 + -30164;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d52bd8
	ctx.lr = 0x82D1163C;
	sub_82D52BD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d11418
	ctx.lr = 0x82D11644;
	sub_82D11418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d11148
	ctx.lr = 0x82D1164C;
	sub_82D11148(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d11668
	if (cr6.eq) goto loc_82D11668;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D11668;
	sub_825952B8(ctx, base);
loc_82D11668:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82d087f8
	ctx.lr = 0x82D11680;
	sub_82D087F8(ctx, base);
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

__attribute__((alias("__imp__sub_82D11694"))) PPC_WEAK_FUNC(sub_82D11694);
PPC_FUNC_IMPL(__imp__sub_82D11694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11698"))) PPC_WEAK_FUNC(sub_82D11698);
PPC_FUNC_IMPL(__imp__sub_82D11698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82D116A0;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d1197c
	if (cr6.eq) goto loc_82D1197C;
	// bl 0x82d11488
	ctx.lr = 0x82D116C8;
	sub_82D11488(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// lwz r29,84(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r28,20(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r20,116(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bne cr6,0x82d116f0
	if (!cr6.eq) goto loc_82D116F0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x833cb2c8
	ctx.lr = 0x82D116E8;
	sub_833CB2C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82d116f4
	goto loc_82D116F4;
loc_82D116F0:
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_82D116F4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833cb3d8
	ctx.lr = 0x82D11700;
	sub_833CB3D8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82D11704;
	sub_830FF290(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// lfs f13,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,7388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7388);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// beq cr6,0x82d11794
	if (cr6.eq) goto loc_82D11794;
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82D11794:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x833cb3e8
	ctx.lr = 0x82D117A0;
	sub_833CB3E8(ctx, base);
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d11804
	if (!cr6.eq) goto loc_82D11804;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82d117f4
	if (cr6.eq) goto loc_82D117F4;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82D117BC:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r7,120(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d0cc50
	ctx.lr = 0x82D117E0;
	sub_82D0CC50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82d117bc
	if (cr6.lt) goto loc_82D117BC;
loc_82D117F4:
	// rlwinm r4,r28,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFC;
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bl 0x833cb490
	ctx.lr = 0x82D11800;
	sub_833CB490(ctx, base);
	// stw r3,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r3.u32);
loc_82D11804:
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// lfs f13,16(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x82d1195c
	if (!cr6.gt) goto loc_82D1195C;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r11,r20,4
	ctx.r11.s64 = ctx.r20.s64 + 4;
	// lfs f10,5668(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5668);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,5664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5664);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-6668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -6668);
	ctx.f0.f64 = double(temp.f32);
loc_82D1183C:
	// lfs f9,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x82d1187c
	if (cr6.lt) goto loc_82D1187C;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fcmpu cr6,f8,f11
	cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bgt cr6,0x82d1187c
	if (cr6.gt) goto loc_82D1187C;
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f8,f10
	cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bgt cr6,0x82d1187c
	if (cr6.gt) goto loc_82D1187C;
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x82d11890
	if (!cr6.lt) goto loc_82D11890;
loc_82D1187C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmpw cr6,r25,r28
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, xer);
	// blt cr6,0x82d1183c
	if (cr6.lt) goto loc_82D1183C;
	// b 0x82d1195c
	goto loc_82D1195C;
loc_82D11890:
	// cmpw cr6,r25,r28
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, xer);
	// bge cr6,0x82d1195c
	if (!cr6.lt) goto loc_82D1195C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82d11908
	if (!cr6.gt) goto loc_82D11908;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82D118B4:
	// lfs f9,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x82d118f4
	if (cr6.lt) goto loc_82D118F4;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fcmpu cr6,f8,f11
	cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bgt cr6,0x82d118f4
	if (cr6.gt) goto loc_82D118F4;
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f8,f10
	cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bgt cr6,0x82d118f4
	if (cr6.gt) goto loc_82D118F4;
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x82d11904
	if (!cr6.lt) goto loc_82D11904;
loc_82D118F4:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-80
	ctx.r11.s64 = ctx.r11.s64 + -80;
	// bgt 0x82d118b4
	if (cr0.gt) goto loc_82D118B4;
	// b 0x82d11908
	goto loc_82D11908;
loc_82D11904:
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
loc_82D11908:
	// lwz r30,84(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt cr6,0x82d1195c
	if (cr6.lt) goto loc_82D1195C;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82D1191C:
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// blt cr6,0x82d11948
	if (cr6.lt) goto loc_82D11948;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r7,120(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0cc50
	ctx.lr = 0x82D11948;
	sub_82D0CC50(ctx, base);
loc_82D11948:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r31,r23
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, xer);
	// ble cr6,0x82d1191c
	if (!cr6.gt) goto loc_82D1191C;
loc_82D1195C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833cb3d8
	ctx.lr = 0x82D11968;
	sub_833CB3D8(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// bne cr6,0x82d1197c
	if (!cr6.eq) goto loc_82D1197C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833cb2f8
	ctx.lr = 0x82D1197C;
	sub_833CB2F8(ctx, base);
loc_82D1197C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D11984"))) PPC_WEAK_FUNC(sub_82D11984);
PPC_FUNC_IMPL(__imp__sub_82D11984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11988"))) PPC_WEAK_FUNC(sub_82D11988);
PPC_FUNC_IMPL(__imp__sub_82D11988) {
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
	// bl 0x82d11608
	ctx.lr = 0x82D119A8;
	sub_82D11608(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d119c0
	if (cr6.eq) goto loc_82D119C0;
	// bl 0x82416268
	ctx.lr = 0x82D119BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D119C0:
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

__attribute__((alias("__imp__sub_82D119D8"))) PPC_WEAK_FUNC(sub_82D119D8);
PPC_FUNC_IMPL(__imp__sub_82D119D8) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,5804
	ctx.r10.s64 = ctx.r11.s64 + 5804;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82D11A08;
	sub_831CDCF0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82D11A28"))) PPC_WEAK_FUNC(sub_82D11A28);
PPC_FUNC_IMPL(__imp__sub_82D11A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,5804
	ctx.r10.s64 = ctx.r11.s64 + 5804;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11A38"))) PPC_WEAK_FUNC(sub_82D11A38);
PPC_FUNC_IMPL(__imp__sub_82D11A38) {
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
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,5804
	ctx.r9.s64 = ctx.r11.s64 + 5804;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82d11a6c
	if (cr6.eq) goto loc_82D11A6C;
	// bl 0x82416268
	ctx.lr = 0x82D11A68;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D11A6C:
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

__attribute__((alias("__imp__sub_82D11A80"))) PPC_WEAK_FUNC(sub_82D11A80);
PPC_FUNC_IMPL(__imp__sub_82D11A80) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x831d0b58
	sub_831D0B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D11A94"))) PPC_WEAK_FUNC(sub_82D11A94);
PPC_FUNC_IMPL(__imp__sub_82D11A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11A98"))) PPC_WEAK_FUNC(sub_82D11A98);
PPC_FUNC_IMPL(__imp__sub_82D11A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r3,68
	ctx.r7.s64 = ctx.r3.s64 + 68;
loc_82D11AA0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82d11aa0
	if (!cr0.eq) goto loc_82D11AA0;
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11AC4"))) PPC_WEAK_FUNC(sub_82D11AC4);
PPC_FUNC_IMPL(__imp__sub_82D11AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11AC8"))) PPC_WEAK_FUNC(sub_82D11AC8);
PPC_FUNC_IMPL(__imp__sub_82D11AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
loc_82D11AD4:
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
	// bne 0x82d11ad4
	if (!cr0.eq) goto loc_82D11AD4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r3,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11B04"))) PPC_WEAK_FUNC(sub_82D11B04);
PPC_FUNC_IMPL(__imp__sub_82D11B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11B08"))) PPC_WEAK_FUNC(sub_82D11B08);
PPC_FUNC_IMPL(__imp__sub_82D11B08) {
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
	// bl 0x82d537f0
	ctx.lr = 0x82D11B18;
	sub_82D537F0(ctx, base);
	// bl 0x82d53720
	ctx.lr = 0x82D11B1C;
	sub_82D53720(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11B2C"))) PPC_WEAK_FUNC(sub_82D11B2C);
PPC_FUNC_IMPL(__imp__sub_82D11B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11B30"))) PPC_WEAK_FUNC(sub_82D11B30);
PPC_FUNC_IMPL(__imp__sub_82D11B30) {
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
	// bl 0x82d537f0
	ctx.lr = 0x82D11B48;
	sub_82D537F0(ctx, base);
	// lis r5,256
	ctx.r5.s64 = 16777216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d53980
	ctx.lr = 0x82D11B54;
	sub_82D53980(ctx, base);
	// bl 0x82d28028
	ctx.lr = 0x82D11B58;
	sub_82D28028(ctx, base);
	// bl 0x82d34b60
	ctx.lr = 0x82D11B5C;
	sub_82D34B60(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,6376
	ctx.r3.s64 = ctx.r11.s64 + 6376;
	// bl 0x82d26e30
	ctx.lr = 0x82D11B68;
	sub_82D26E30(ctx, base);
	// bl 0x82d4ef78
	ctx.lr = 0x82D11B6C;
	sub_82D4EF78(ctx, base);
	// bl 0x82d488b0
	ctx.lr = 0x82D11B70;
	sub_82D488B0(ctx, base);
	// bl 0x82d54b20
	ctx.lr = 0x82D11B74;
	sub_82D54B20(ctx, base);
	// bl 0x82d54410
	ctx.lr = 0x82D11B78;
	sub_82D54410(ctx, base);
	// bl 0x82d53c70
	ctx.lr = 0x82D11B7C;
	sub_82D53C70(ctx, base);
	// bl 0x82d34dd0
	ctx.lr = 0x82D11B80;
	sub_82D34DD0(ctx, base);
	// bl 0x82d0e9a0
	ctx.lr = 0x82D11B84;
	sub_82D0E9A0(ctx, base);
	// bl 0x82d06d90
	ctx.lr = 0x82D11B88;
	sub_82D06D90(ctx, base);
	// bl 0x82d265c8
	ctx.lr = 0x82D11B8C;
	sub_82D265C8(ctx, base);
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,-30143(r9)
	PPC_STORE_U8(ctx.r9.u32 + -30143, ctx.r11.u8);
	// stb r10,-30142(r8)
	PPC_STORE_U8(ctx.r8.u32 + -30142, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82D11BB8"))) PPC_WEAK_FUNC(sub_82D11BB8);
PPC_FUNC_IMPL(__imp__sub_82D11BB8) {
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
	// bl 0x82d17c08
	ctx.lr = 0x82D11BC8;
	sub_82D17C08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17aa0
	ctx.lr = 0x82D11BD0;
	sub_82D17AA0(ctx, base);
	// bl 0x82d48338
	ctx.lr = 0x82D11BD4;
	sub_82D48338(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11BE4"))) PPC_WEAK_FUNC(sub_82D11BE4);
PPC_FUNC_IMPL(__imp__sub_82D11BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11BE8"))) PPC_WEAK_FUNC(sub_82D11BE8);
PPC_FUNC_IMPL(__imp__sub_82D11BE8) {
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
	// bl 0x82d43668
	ctx.lr = 0x82D11BF8;
	sub_82D43668(ctx, base);
	// bl 0x82d38058
	ctx.lr = 0x82D11BFC;
	sub_82D38058(ctx, base);
	// bl 0x82d54d30
	ctx.lr = 0x82D11C00;
	sub_82D54D30(ctx, base);
	// bl 0x82d365d0
	ctx.lr = 0x82D11C04;
	sub_82D365D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11C14"))) PPC_WEAK_FUNC(sub_82D11C14);
PPC_FUNC_IMPL(__imp__sub_82D11C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11C18"))) PPC_WEAK_FUNC(sub_82D11C18);
PPC_FUNC_IMPL(__imp__sub_82D11C18) {
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
	// bl 0x82d46490
	ctx.lr = 0x82D11C28;
	sub_82D46490(ctx, base);
	// bl 0x82d067e8
	ctx.lr = 0x82D11C2C;
	sub_82D067E8(ctx, base);
	// bl 0x82d0e9f8
	ctx.lr = 0x82D11C30;
	sub_82D0E9F8(ctx, base);
	// bl 0x82d34bd8
	ctx.lr = 0x82D11C34;
	sub_82D34BD8(ctx, base);
	// bl 0x82d27538
	ctx.lr = 0x82D11C38;
	sub_82D27538(ctx, base);
	// bl 0x82d34e90
	ctx.lr = 0x82D11C3C;
	sub_82D34E90(ctx, base);
	// bl 0x82d25b00
	ctx.lr = 0x82D11C40;
	sub_82D25B00(ctx, base);
	// bl 0x82d53f28
	ctx.lr = 0x82D11C44;
	sub_82D53F28(ctx, base);
	// bl 0x82d54498
	ctx.lr = 0x82D11C48;
	sub_82D54498(ctx, base);
	// bl 0x82d48430
	ctx.lr = 0x82D11C4C;
	sub_82D48430(ctx, base);
	// bl 0x82d537f0
	ctx.lr = 0x82D11C50;
	sub_82D537F0(ctx, base);
	// bl 0x82d538b8
	ctx.lr = 0x82D11C54;
	sub_82D538B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11C64"))) PPC_WEAK_FUNC(sub_82D11C64);
PPC_FUNC_IMPL(__imp__sub_82D11C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11C68"))) PPC_WEAK_FUNC(sub_82D11C68);
PPC_FUNC_IMPL(__imp__sub_82D11C68) {
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
	// bl 0x82d537f0
	ctx.lr = 0x82D11C78;
	sub_82D537F0(ctx, base);
	// bl 0x82d53900
	ctx.lr = 0x82D11C7C;
	sub_82D53900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11C8C"))) PPC_WEAK_FUNC(sub_82D11C8C);
PPC_FUNC_IMPL(__imp__sub_82D11C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11C90"))) PPC_WEAK_FUNC(sub_82D11C90);
PPC_FUNC_IMPL(__imp__sub_82D11C90) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lbz r11,-30144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -30144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d11cb8
	if (!cr6.eq) goto loc_82D11CB8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-30144(r31)
	PPC_STORE_U8(ctx.r31.u32 + -30144, ctx.r11.u8);
loc_82D11CB8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82d462e8
	ctx.lr = 0x82D11CC0;
	sub_82D462E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d11d08
	if (cr6.eq) goto loc_82D11D08;
	// bl 0x82d0e298
	ctx.lr = 0x82D11CD0;
	sub_82D0E298(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d0e2a8
	ctx.lr = 0x82D11CDC;
	sub_82D0E2A8(ctx, base);
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,-30144(r31)
	PPC_STORE_U8(ctx.r31.u32 + -30144, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,-30142(r9)
	PPC_STORE_U8(ctx.r9.u32 + -30142, ctx.r10.u8);
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
loc_82D11D08:
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

__attribute__((alias("__imp__sub_82D11D20"))) PPC_WEAK_FUNC(sub_82D11D20);
PPC_FUNC_IMPL(__imp__sub_82D11D20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-30142(r10)
	PPC_STORE_U8(ctx.r10.u32 + -30142, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D11D30"))) PPC_WEAK_FUNC(sub_82D11D30);
PPC_FUNC_IMPL(__imp__sub_82D11D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D11D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d05818
	ctx.lr = 0x82D11D40;
	sub_82D05818(ctx, base);
	// lis r28,-31758
	ctx.r28.s64 = -2081292288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-29776(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29776);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d11dbc
	if (cr6.lt) goto loc_82D11DBC;
	// bne cr6,0x82d11df4
	if (!cr6.eq) goto loc_82D11DF4;
	// bl 0x82d06e70
	ctx.lr = 0x82D11D5C;
	sub_82D06E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d11df4
	if (cr6.eq) goto loc_82D11DF4;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r11,6368
	ctx.r30.s64 = ctx.r11.s64 + 6368;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82D11D74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d060f8
	ctx.lr = 0x82D11D80;
	sub_82D060F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d11df4
	if (cr6.eq) goto loc_82D11DF4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d11d74
	if (cr6.lt) goto loc_82D11D74;
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-29776(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29776, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,-30143(r9)
	PPC_STORE_U8(ctx.r9.u32 + -30143, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D11DBC:
	// bl 0x82d06e28
	ctx.lr = 0x82D11DC0;
	sub_82D06E28(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r11,6368
	ctx.r30.s64 = ctx.r11.s64 + 6368;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82D11DCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d06870
	ctx.lr = 0x82D11DD8;
	sub_82D06870(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d11dcc
	if (cr6.lt) goto loc_82D11DCC;
	// lwz r11,-29776(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-29776(r28)
	PPC_STORE_U32(ctx.r28.u32 + -29776, ctx.r11.u32);
loc_82D11DF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D11E00"))) PPC_WEAK_FUNC(sub_82D11E00);
PPC_FUNC_IMPL(__imp__sub_82D11E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D11E08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-30143(r10)
	PPC_STORE_U8(ctx.r10.u32 + -30143, ctx.r11.u8);
	// bl 0x82d05818
	ctx.lr = 0x82D11E1C;
	sub_82D05818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d06eb8
	ctx.lr = 0x82D11E24;
	sub_82D06EB8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r30,r11,6368
	ctx.r30.s64 = ctx.r11.s64 + 6368;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82D11E30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d069f0
	ctx.lr = 0x82D11E3C;
	sub_82D069F0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82d11e30
	if (cr6.lt) goto loc_82D11E30;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D11E54"))) PPC_WEAK_FUNC(sub_82D11E54);
PPC_FUNC_IMPL(__imp__sub_82D11E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11E58"))) PPC_WEAK_FUNC(sub_82D11E58);
PPC_FUNC_IMPL(__imp__sub_82D11E58) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82D11E6C;
	sub_82D34E50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34ce0
	ctx.lr = 0x82D11E74;
	sub_82D34CE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d11ea4
	if (!cr6.eq) goto loc_82D11EA4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d35038
	ctx.lr = 0x82D11E8C;
	sub_82D35038(ctx, base);
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
loc_82D11EA4:
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82D11EC4"))) PPC_WEAK_FUNC(sub_82D11EC4);
PPC_FUNC_IMPL(__imp__sub_82D11EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D11EC8"))) PPC_WEAK_FUNC(sub_82D11EC8);
PPC_FUNC_IMPL(__imp__sub_82D11EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D11ED0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d12050
	if (cr6.eq) goto loc_82D12050;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r26,r11,5874
	ctx.r26.s64 = ctx.r11.s64 + 5874;
loc_82D11F04:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D11F24;
	sub_8259CB28(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D11F3C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d11f90
	if (cr6.eq) goto loc_82D11F90;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d11f5c
	if (cr6.lt) goto loc_82D11F5C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d11f60
	goto loc_82D11F60;
loc_82D11F5C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82D11F60:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82D11F70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d11f90
	if (cr6.eq) goto loc_82D11F90;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d12038
	if (cr6.lt) goto loc_82D12038;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82d12030
	goto loc_82D12030;
loc_82D11F90:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d11fa4
	if (!cr6.lt) goto loc_82D11FA4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82D11FA4:
	// bl 0x82d12688
	ctx.lr = 0x82D11FA8;
	sub_82D12688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bne cr6,0x82d11fd4
	if (!cr6.eq) goto loc_82D11FD4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d11fc4
	if (!cr6.lt) goto loc_82D11FC4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82D11FC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12640
	ctx.lr = 0x82D11FCC;
	sub_82D12640(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82d1201c
	goto loc_82D1201C;
loc_82D11FD4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d11fe0
	if (!cr6.lt) goto loc_82D11FE0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82D11FE0:
	// bl 0x82d126b0
	ctx.lr = 0x82D11FE4;
	sub_82D126B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d11ff4
	if (!cr6.eq) goto loc_82D11FF4;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82d1201c
	goto loc_82D1201C;
loc_82D11FF4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d12008
	if (!cr6.lt) goto loc_82D12008;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82D12008:
	// bl 0x82d12cc0
	ctx.lr = 0x82D1200C;
	sub_82D12CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 & ctx.r28.u64;
loc_82D1201C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d12038
	if (cr6.lt) goto loc_82D12038;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82D12030:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D12038;
	sub_825952B8(ctx, base);
loc_82D12038:
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// bne 0x82d11f04
	if (!cr0.eq) goto loc_82D11F04;
loc_82D12050:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d1206c
	if (cr6.lt) goto loc_82D1206C;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D1206C;
	sub_825952B8(ctx, base);
loc_82D1206C:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D12084"))) PPC_WEAK_FUNC(sub_82D12084);
PPC_FUNC_IMPL(__imp__sub_82D12084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12088"))) PPC_WEAK_FUNC(sub_82D12088);
PPC_FUNC_IMPL(__imp__sub_82D12088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D12090;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d121a0
	if (cr6.eq) goto loc_82D121A0;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r27,r11,5875
	ctx.r27.s64 = ctx.r11.s64 + 5875;
loc_82D120C4:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82D120E4;
	sub_8259CB28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D120FC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d12150
	if (cr6.eq) goto loc_82D12150;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d1211c
	if (cr6.lt) goto loc_82D1211C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d12120
	goto loc_82D12120;
loc_82D1211C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82D12120:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82D12130;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d12150
	if (cr6.eq) goto loc_82D12150;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d12188
	if (cr6.lt) goto loc_82D12188;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82d12180
	goto loc_82D12180;
loc_82D12150:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d12164
	if (!cr6.lt) goto loc_82D12164;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82D12164:
	// bl 0x82d12668
	ctx.lr = 0x82D12168;
	sub_82D12668(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d12188
	if (cr6.lt) goto loc_82D12188;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82D12180:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D12188;
	sub_825952B8(ctx, base);
loc_82D12188:
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// bne 0x82d120c4
	if (!cr0.eq) goto loc_82D120C4;
loc_82D121A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d121bc
	if (cr6.lt) goto loc_82D121BC;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D121BC;
	sub_825952B8(ctx, base);
loc_82D121BC:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D121D4"))) PPC_WEAK_FUNC(sub_82D121D4);
PPC_FUNC_IMPL(__imp__sub_82D121D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D121D8"))) PPC_WEAK_FUNC(sub_82D121D8);
PPC_FUNC_IMPL(__imp__sub_82D121D8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_82D12204:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d12204
	if (!cr6.eq) goto loc_82D12204;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D1222C;
	sub_8259CC28(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r10,24344
	ctx.r3.s64 = ctx.r10.s64 + 24344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d11ec8
	ctx.lr = 0x82D12244;
	sub_82D11EC8(ctx, base);
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

__attribute__((alias("__imp__sub_82D12258"))) PPC_WEAK_FUNC(sub_82D12258);
PPC_FUNC_IMPL(__imp__sub_82D12258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_82D12280:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d12280
	if (!cr6.eq) goto loc_82D12280;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D122A4;
	sub_8259CC28(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,24344
	ctx.r3.s64 = ctx.r10.s64 + 24344;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12088
	ctx.lr = 0x82D122B8;
	sub_82D12088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D122C8"))) PPC_WEAK_FUNC(sub_82D122C8);
PPC_FUNC_IMPL(__imp__sub_82D122C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_82D122F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d122f0
	if (!cr6.eq) goto loc_82D122F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D12314;
	sub_8259CC28(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,24376
	ctx.r3.s64 = ctx.r10.s64 + 24376;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82d12088
	ctx.lr = 0x82D12328;
	sub_82D12088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D12338"))) PPC_WEAK_FUNC(sub_82D12338);
PPC_FUNC_IMPL(__imp__sub_82D12338) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,5906
	ctx.r4.s64 = ctx.r9.s64 + 5906;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82D12378;
	sub_8259CC28(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D1237C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d1237c
	if (!cr6.eq) goto loc_82D1237C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82D123AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d123ec
	if (!cr6.eq) goto loc_82D123EC;
	// bl 0x82d12258
	ctx.lr = 0x82D123BC;
	sub_82D12258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d122c8
	ctx.lr = 0x82D123C4;
	sub_82D122C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d123e4
	if (cr6.lt) goto loc_82D123E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D123E4;
	sub_825952B8(ctx, base);
loc_82D123E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d12430
	goto loc_82D12430;
loc_82D123EC:
	// bl 0x82d12258
	ctx.lr = 0x82D123F0;
	sub_82D12258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d12410
	if (cr6.eq) goto loc_82D12410;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D12408;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82d12430
	goto loc_82D12430;
loc_82D12410:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d122c8
	ctx.lr = 0x82D12418;
	sub_82D122C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bl 0x8387e8e0
	ctx.lr = 0x82D1242C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D12430:
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

__attribute__((alias("__imp__sub_82D12448"))) PPC_WEAK_FUNC(sub_82D12448);
PPC_FUNC_IMPL(__imp__sub_82D12448) {
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
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x82D12470;
	sub_830FF290(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d12494
	if (cr6.lt) goto loc_82D12494;
	// bne cr6,0x82d124a8
	if (!cr6.eq) goto loc_82D124A8;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r11,r11,6796
	ctx.r11.s64 = ctx.r11.s64 + 6796;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// b 0x82d124a0
	goto loc_82D124A0;
loc_82D12494:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,6796
	ctx.r4.s64 = ctx.r11.s64 + 6796;
loc_82D124A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82D124A8;
	sub_8259CC28(ctx, base);
loc_82D124A8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d124bc
	if (!cr6.lt) goto loc_82D124BC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82D124BC:
	// bl 0x82d58098
	ctx.lr = 0x82D124C0;
	sub_82D58098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d124e8
	if (!cr6.eq) goto loc_82D124E8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d12528
	if (cr6.lt) goto loc_82D12528;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82d12520
	goto loc_82D12520;
loc_82D124E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D124FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d57fb0
	ctx.lr = 0x82D12504;
	sub_82D57FB0(ctx, base);
	// bl 0x82d55178
	ctx.lr = 0x82D12508;
	sub_82D55178(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d12528
	if (cr6.lt) goto loc_82D12528;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82D12520:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D12528;
	sub_825952B8(ctx, base);
loc_82D12528:
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

__attribute__((alias("__imp__sub_82D1253C"))) PPC_WEAK_FUNC(sub_82D1253C);
PPC_FUNC_IMPL(__imp__sub_82D1253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12540"))) PPC_WEAK_FUNC(sub_82D12540);
PPC_FUNC_IMPL(__imp__sub_82D12540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D12548;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31758
	ctx.r28.s64 = -2081292288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,-30144(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -30144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d12568
	if (!cr6.eq) goto loc_82D12568;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-30144(r28)
	PPC_STORE_U8(ctx.r28.u32 + -30144, ctx.r11.u8);
loc_82D12568:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d121d8
	ctx.lr = 0x82D12574;
	sub_82D121D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d12600
	if (cr6.eq) goto loc_82D12600;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82D1259C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d1259c
	if (!cr6.eq) goto loc_82D1259C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D125C4;
	sub_8259CC28(ctx, base);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r10,24376
	ctx.r3.s64 = ctx.r10.s64 + 24376;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82d11ec8
	ctx.lr = 0x82D125DC;
	sub_82D11EC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d12600
	if (cr6.eq) goto loc_82D12600;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d12600
	if (!cr6.eq) goto loc_82D12600;
	// bl 0x82d12448
	ctx.lr = 0x82D125F8;
	sub_82D12448(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,-30144(r28)
	PPC_STORE_U8(ctx.r28.u32 + -30144, ctx.r29.u8);
loc_82D12600:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D1260C"))) PPC_WEAK_FUNC(sub_82D1260C);
PPC_FUNC_IMPL(__imp__sub_82D1260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12610"))) PPC_WEAK_FUNC(sub_82D12610);
PPC_FUNC_IMPL(__imp__sub_82D12610) {
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
	// bl 0x82d12338
	ctx.lr = 0x82D12620;
	sub_82D12338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d34cb0
	ctx.lr = 0x82D12628;
	sub_82D34CB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D12638"))) PPC_WEAK_FUNC(sub_82D12638);
PPC_FUNC_IMPL(__imp__sub_82D12638) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d121d8
	sub_82D121D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D12640"))) PPC_WEAK_FUNC(sub_82D12640);
PPC_FUNC_IMPL(__imp__sub_82D12640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-2568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d1265c
	if (!cr6.eq) goto loc_82D1265C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D1265C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82d52e88
	sub_82D52E88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D12668"))) PPC_WEAK_FUNC(sub_82D12668);
PPC_FUNC_IMPL(__imp__sub_82D12668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-2568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82d52dd0
	sub_82D52DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D12684"))) PPC_WEAK_FUNC(sub_82D12684);
PPC_FUNC_IMPL(__imp__sub_82D12684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D12688"))) PPC_WEAK_FUNC(sub_82D12688);
PPC_FUNC_IMPL(__imp__sub_82D12688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-2568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d126a4
	if (!cr6.eq) goto loc_82D126A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D126A4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82d52cb8
	sub_82D52CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D126AC"))) PPC_WEAK_FUNC(sub_82D126AC);
PPC_FUNC_IMPL(__imp__sub_82D126AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D126B0"))) PPC_WEAK_FUNC(sub_82D126B0);
PPC_FUNC_IMPL(__imp__sub_82D126B0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-2568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d12704
	if (cr6.eq) goto loc_82D12704;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d52cb8
	ctx.lr = 0x82D126D8;
	sub_82D52CB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12704
	if (cr6.eq) goto loc_82D12704;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d12708
	if (cr6.eq) goto loc_82D12708;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82D12704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D12708:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D12718"))) PPC_WEAK_FUNC(sub_82D12718);
PPC_FUNC_IMPL(__imp__sub_82D12718) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D12728"))) PPC_WEAK_FUNC(sub_82D12728);
PPC_FUNC_IMPL(__imp__sub_82D12728) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D12738"))) PPC_WEAK_FUNC(sub_82D12738);
PPC_FUNC_IMPL(__imp__sub_82D12738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D12740;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,7476
	ctx.r31.s64 = ctx.r11.s64 + 7476;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D12758:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d127a0
	if (cr6.eq) goto loc_82D127A0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d127a0
	if (cr6.eq) goto loc_82D127A0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D12770:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d12770
	if (!cr6.eq) goto loc_82D12770;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x831cef50
	ctx.lr = 0x82D12798;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d127bc
	if (cr6.eq) goto loc_82D127BC;
loc_82D127A0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// blt cr6,0x82d12758
	if (cr6.lt) goto loc_82D12758;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D127BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D127C8"))) PPC_WEAK_FUNC(sub_82D127C8);
PPC_FUNC_IMPL(__imp__sub_82D127C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
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

__attribute__((alias("__imp__sub_82D127E0"))) PPC_WEAK_FUNC(sub_82D127E0);
PPC_FUNC_IMPL(__imp__sub_82D127E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D127E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82D127FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r28,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble 0x82d12874
	if (!cr0.gt) goto loc_82D12874;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82D12818:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82d12864
	if (cr6.lt) goto loc_82D12864;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// bge cr6,0x82d12864
	if (!cr6.lt) goto loc_82D12864;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d12864
	if (cr6.eq) goto loc_82D12864;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x82d12864
	if (!cr6.lt) goto loc_82D12864;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12864
	if (cr6.eq) goto loc_82D12864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D12864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D12864:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82d12818
	if (cr6.lt) goto loc_82D12818;
loc_82D12874:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,-4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d128a4
	if (cr6.eq) goto loc_82D128A4;
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
	ctx.lr = 0x82D1289C;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_82D128A4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// blt cr6,0x82d127fc
	if (cr6.lt) goto loc_82D127FC;
	// lwz r3,84(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d128c8
	if (cr6.eq) goto loc_82D128C8;
	// bl 0x82d58508
	ctx.lr = 0x82D128C4;
	sub_82D58508(ctx, base);
	// stw r27,84(r25)
	PPC_STORE_U32(ctx.r25.u32 + 84, ctx.r27.u32);
loc_82D128C8:
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// addi r30,r25,88
	ctx.r30.s64 = ctx.r25.s64 + 88;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d128ec
	if (cr6.lt) goto loc_82D128EC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D128EC;
	sub_825952B8(ctx, base);
loc_82D128EC:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// addi r31,r25,64
	ctx.r31.s64 = ctx.r25.s64 + 64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// lwz r4,64(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d12918
	if (cr6.eq) goto loc_82D12918;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82D12918;
	sub_825952B8(ctx, base);
loc_82D12918:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_82D12928:
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12938
	if (cr6.eq) goto loc_82D12938;
	// bl 0x82416268
	ctx.lr = 0x82D12938;
	sub_82416268(ctx, base);
loc_82D12938:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bge 0x82d12928
	if (!cr0.lt) goto loc_82D12928;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D12954"))) PPC_WEAK_FUNC(sub_82D12954);
PPC_FUNC_IMPL(__imp__sub_82D12954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12958"))) PPC_WEAK_FUNC(sub_82D12958);
PPC_FUNC_IMPL(__imp__sub_82D12958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D12960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// bl 0x82d58520
	ctx.lr = 0x82D129BC;
	sub_82D58520(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_82D129DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d129dc
	if (!cr6.eq) goto loc_82D129DC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D12A00;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D12A0C"))) PPC_WEAK_FUNC(sub_82D12A0C);
PPC_FUNC_IMPL(__imp__sub_82D12A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D12A10"))) PPC_WEAK_FUNC(sub_82D12A10);
PPC_FUNC_IMPL(__imp__sub_82D12A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D12A18;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d12cb0
	if (cr6.eq) goto loc_82D12CB0;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82d12c6c
	if (!cr6.eq) goto loc_82D12C6C;
	// lwz r4,120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d12c6c
	if (cr6.eq) goto loc_82D12C6C;
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d12c08
	if (!cr6.eq) goto loc_82D12C08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831049a8
	ctx.lr = 0x82D12A64;
	sub_831049A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832e8
	ctx.lr = 0x82D12A6C;
	sub_825832E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82d12c00
	if (!cr6.gt) goto loc_82D12C00;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r25,r11,7524
	ctx.r25.s64 = ctx.r11.s64 + 7524;
loc_82D12A84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104a50
	ctx.lr = 0x82D12A90;
	sub_83104A50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104ab8
	ctx.lr = 0x82D12AA0;
	sub_83104AB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d12c64
	if (cr6.eq) goto loc_82D12C64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d12738
	ctx.lr = 0x82D12ABC;
	sub_82D12738(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d12b08
	if (!cr6.eq) goto loc_82D12B08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104b18
	ctx.lr = 0x82D12AD4;
	sub_83104B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82D12AE0;
	sub_837B0C10(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574d38
	ctx.lr = 0x82D12AF4;
	sub_82574D38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12b00
	if (cr6.eq) goto loc_82D12B00;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82D12B00:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82D12B08;
	sub_8387E8E0(ctx, base);
loc_82D12B08:
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// bgt cr6,0x82d12be8
	if (cr6.gt) goto loc_82D12BE8;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82d12bf4
	if (cr6.eq) goto loc_82D12BF4;
	// bdz 0x82d12b30
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D12B30;
	// bdz 0x82d12bf4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D12BF4;
	// bdz 0x82d12b58
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D12B58;
	// bdz 0x82d12b94
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D12B94;
	// b 0x82d12bb4
	goto loc_82D12BB4;
loc_82D12B30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104b18
	ctx.lr = 0x82D12B3C;
	sub_83104B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d587c8
	ctx.lr = 0x82D12B4C;
	sub_82D587C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82d12bd8
	goto loc_82D12BD8;
loc_82D12B58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104b18
	ctx.lr = 0x82D12B64;
	sub_83104B18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104ab8
	ctx.lr = 0x82D12B74;
	sub_83104AB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d45f90
	ctx.lr = 0x82D12B88;
	sub_82D45F90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// b 0x82d12bd8
	goto loc_82D12BD8;
loc_82D12B94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104b18
	ctx.lr = 0x82D12BA0;
	sub_83104B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d58178
	ctx.lr = 0x82D12BB0;
	sub_82D58178(ctx, base);
	// b 0x82d12bd0
	goto loc_82D12BD0;
loc_82D12BB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104b18
	ctx.lr = 0x82D12BC0;
	sub_83104B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82d58398
	ctx.lr = 0x82D12BD0;
	sub_82D58398(ctx, base);
loc_82D12BD0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
loc_82D12BD8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ab5f20
	ctx.lr = 0x82D12BE8;
	sub_82AB5F20(ctx, base);
loc_82D12BE8:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x82D12BF4;
	sub_835977D8(ctx, base);
loc_82D12BF4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x82d12a84
	if (cr6.lt) goto loc_82D12A84;
loc_82D12C00:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c688
	ctx.lr = 0x82D12C08;
	sub_82A5C688(ctx, base);
loc_82D12C08:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d12c8c
	if (cr6.eq) goto loc_82D12C8C;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
loc_82D12C1C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D12C30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82d12c78
	if (!cr6.gt) goto loc_82D12C78;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82D12C54;
	sub_831CE420(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// b 0x82d12c80
	goto loc_82D12C80;
loc_82D12C64:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c688
	ctx.lr = 0x82D12C6C;
	sub_82A5C688(ctx, base);
loc_82D12C6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D12C78:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82D12C80:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d12c1c
	if (!cr6.eq) goto loc_82D12C1C;
loc_82D12C8C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d12c6c
	if (!cr6.eq) goto loc_82D12C6C;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d12cb0
	if (cr6.eq) goto loc_82D12CB0;
	// bl 0x82d58508
	ctx.lr = 0x82D12CAC;
	sub_82D58508(ctx, base);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
loc_82D12CB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

