#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83210908"))) PPC_WEAK_FUNC(sub_83210908);
PPC_FUNC_IMPL(__imp__sub_83210908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// sth r8,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r8.u16);
	// stb r8,10(r5)
	PPC_STORE_U8(ctx.r5.u32 + 10, ctx.r8.u8);
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x83210948
	if (!cr6.lt) goto loc_83210948;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// sth r10,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r10.u16);
	// blr 
	return;
loc_83210948:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lhzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwimi r3,r9,16,14,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r3.u64 & 0xFFFFFFFFFFFCFFFF);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r7,r3,0,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3FFFC;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lhz r10,34(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832109a4
	if (!cr6.gt) goto loc_832109A4;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
loc_83210988:
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x832109b0
	if (cr6.eq) goto loc_832109B0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// blt cr6,0x83210988
	if (cr6.lt) goto loc_83210988;
loc_832109A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r11.u16);
	// blr 
	return;
loc_832109B0:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832109C4"))) PPC_WEAK_FUNC(sub_832109C4);
PPC_FUNC_IMPL(__imp__sub_832109C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832109C8"))) PPC_WEAK_FUNC(sub_832109C8);
PPC_FUNC_IMPL(__imp__sub_832109C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// beq cr6,0x83210a04
	if (cr6.eq) goto loc_83210A04;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83210908
	ctx.lr = 0x832109F8;
	sub_83210908(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83210a18
	if (!cr6.eq) goto loc_83210A18;
loc_83210A04:
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x83210A0C;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83210a18
	if (!cr6.eq) goto loc_83210A18;
	// bl 0x83227908
	ctx.lr = 0x83210A18;
	sub_83227908(ctx, base);
loc_83210A18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83210A28"))) PPC_WEAK_FUNC(sub_83210A28);
PPC_FUNC_IMPL(__imp__sub_83210A28) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83210a54
	if (cr6.eq) goto loc_83210A54;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_83210A54:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83210a78
	if (!cr6.eq) goto loc_83210A78;
loc_83210A5C:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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
loc_83210A78:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,34(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r4,r7,8
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83210a5c
	if (cr6.eq) goto loc_83210A5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83210908
	ctx.lr = 0x83210AB4;
	sub_83210908(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83210a5c
	if (cr6.eq) goto loc_83210A5C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83210a5c
	if (cr6.eq) goto loc_83210A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83237ad0
	ctx.lr = 0x83210AD4;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83210AF4"))) PPC_WEAK_FUNC(sub_83210AF4);
PPC_FUNC_IMPL(__imp__sub_83210AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210AF8"))) PPC_WEAK_FUNC(sub_83210AF8);
PPC_FUNC_IMPL(__imp__sub_83210AF8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83210b38
	if (!cr6.eq) goto loc_83210B38;
loc_83210B14:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83210B38:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,34(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r4,r7,8
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83210b14
	if (cr6.eq) goto loc_83210B14;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83210908
	ctx.lr = 0x83210B74;
	sub_83210908(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,595
	cr6.compare<uint32_t>(ctx.r11.u32, 595, xer);
	// beq cr6,0x83210b14
	if (cr6.eq) goto loc_83210B14;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x83210ba0
	if (!cr6.lt) goto loc_83210BA0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83210b14
	if (cr6.eq) goto loc_83210B14;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83210b14
	if (cr6.eq) goto loc_83210B14;
loc_83210BA0:
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_83210BC4"))) PPC_WEAK_FUNC(sub_83210BC4);
PPC_FUNC_IMPL(__imp__sub_83210BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210BC8"))) PPC_WEAK_FUNC(sub_83210BC8);
PPC_FUNC_IMPL(__imp__sub_83210BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83210BD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83210bf8
	if (cr6.eq) goto loc_83210BF8;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r25,r8,r25
	ctx.r25.u64 = ctx.r8.u64 & ctx.r25.u64;
loc_83210BF8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83210c10
	if (!cr6.eq) goto loc_83210C10;
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83210C10:
	// lhz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83210d20
	if (!cr6.gt) goto loc_83210D20;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x83210d20
	if (!cr6.gt) goto loc_83210D20;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83210C48:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83210c68
	if (cr6.eq) goto loc_83210C68;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
loc_83210C68:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83210c7c
	if (!cr6.eq) goto loc_83210C7C;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83210d04
	goto loc_83210D04;
loc_83210C7C:
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r4,r10,8
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83210ca4
	if (!cr6.eq) goto loc_83210CA4;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83210d04
	goto loc_83210D04;
loc_83210CA4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// bl 0x83210908
	ctx.lr = 0x83210CC0;
	sub_83210908(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83210cd8
	if (!cr6.eq) goto loc_83210CD8;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83210d04
	goto loc_83210D04;
loc_83210CD8:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83210cf0
	if (!cr6.eq) goto loc_83210CF0;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83210d04
	goto loc_83210D04;
loc_83210CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83237ad0
	ctx.lr = 0x83210CF8;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_83210D04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83210d2c
	if (!cr6.eq) goto loc_83210D2C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// blt cr6,0x83210c48
	if (cr6.lt) goto loc_83210C48;
loc_83210D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83210D2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210D38"))) PPC_WEAK_FUNC(sub_83210D38);
PPC_FUNC_IMPL(__imp__sub_83210D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83210D40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83210d70
	if (!cr6.eq) goto loc_83210D70;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83210D70:
	// lhz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83210ea8
	if (!cr6.gt) goto loc_83210EA8;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ble cr6,0x83210ea8
	if (!cr6.gt) goto loc_83210EA8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_83210DA8:
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83210dc8
	if (!cr6.eq) goto loc_83210DC8;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83210e8c
	goto loc_83210E8C;
loc_83210DC8:
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r4,r10,8
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83210df8
	if (!cr6.eq) goto loc_83210DF8;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83210e8c
	goto loc_83210E8C;
loc_83210DF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// bl 0x83210908
	ctx.lr = 0x83210E14;
	sub_83210908(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,595
	cr6.compare<uint32_t>(ctx.r11.u32, 595, xer);
	// bne cr6,0x83210e34
	if (!cr6.eq) goto loc_83210E34;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83210e8c
	goto loc_83210E8C;
loc_83210E34:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x83210e7c
	if (!cr6.lt) goto loc_83210E7C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83210e5c
	if (!cr6.eq) goto loc_83210E5C;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83210e8c
	goto loc_83210E8C;
loc_83210E5C:
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83210e7c
	if (!cr6.eq) goto loc_83210E7C;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83210e8c
	goto loc_83210E8C;
loc_83210E7C:
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83210E8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83210eb4
	if (!cr6.eq) goto loc_83210EB4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, xer);
	// blt cr6,0x83210da8
	if (cr6.lt) goto loc_83210DA8;
loc_83210EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83210EB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83210EC0"))) PPC_WEAK_FUNC(sub_83210EC0);
PPC_FUNC_IMPL(__imp__sub_83210EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
loc_83210EC0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r8,38(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bgt cr6,0x83210f4c
	if (cr6.gt) goto loc_83210F4C;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3844
	ctx.r12.s64 = ctx.r12.s64 + 3844;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_83210F30;
	case 1:
		goto loc_83210F4C;
	case 2:
		goto loc_83210F30;
	case 3:
		goto loc_83210F4C;
	case 4:
		goto loc_83210F50;
	case 5:
		goto loc_83210F4C;
	case 6:
		goto loc_83210F38;
	case 7:
		goto loc_83210F38;
	case 8:
		goto loc_83210F50;
	case 9:
		goto loc_83210F50;
	case 10:
		goto loc_83210F40;
	default:
		return;
	}
	// lwz r25,3888(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3888);
	// lwz r25,3916(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3916);
	// lwz r25,3888(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3888);
	// lwz r25,3916(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3916);
	// lwz r25,3920(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3920);
	// lwz r25,3916(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3916);
	// lwz r25,3896(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3896);
	// lwz r25,3896(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3896);
	// lwz r25,3920(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3920);
	// lwz r25,3920(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3920);
	// lwz r25,3904(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3904);
loc_83210F30:
	// clrlwi r3,r11,18
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFF;
	// blr 
	return;
loc_83210F38:
	// rlwinm r3,r11,18,18,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// blr 
	return;
loc_83210F40:
	// rlwinm r4,r11,18,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x83210ec0
	goto loc_83210EC0;
loc_83210F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83210F50:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83210F54"))) PPC_WEAK_FUNC(sub_83210F54);
PPC_FUNC_IMPL(__imp__sub_83210F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210F58"))) PPC_WEAK_FUNC(sub_83210F58);
PPC_FUNC_IMPL(__imp__sub_83210F58) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// sth r11,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r11.u16);
	// stb r11,10(r5)
	PPC_STORE_U8(ctx.r5.u32 + 10, ctx.r11.u8);
	// bl 0x83210ec0
	ctx.lr = 0x83210F8C;
	sub_83210EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83210fa4
	if (cr6.eq) goto loc_83210FA4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83210908
	ctx.lr = 0x83210FA4;
	sub_83210908(ctx, base);
loc_83210FA4:
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

__attribute__((alias("__imp__sub_83210FBC"))) PPC_WEAK_FUNC(sub_83210FBC);
PPC_FUNC_IMPL(__imp__sub_83210FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83210FC0"))) PPC_WEAK_FUNC(sub_83210FC0);
PPC_FUNC_IMPL(__imp__sub_83210FC0) {
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
	ctx.lr = 0x83210FC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lhz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r8,r11,0,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83211008
	if (cr6.eq) goto loc_83211008;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83211008:
	// rlwinm r11,r11,18,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321116c
	if (cr6.eq) goto loc_8321116C;
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// clrlwi r4,r10,8
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8321116c
	if (cr6.eq) goto loc_8321116C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832109c8
	ctx.lr = 0x83211038;
	sub_832109C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8321116c
	if (cr6.eq) goto loc_8321116C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321116c
	if (cr6.eq) goto loc_8321116C;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,18
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFF;
	// bl 0x832109c8
	ctx.lr = 0x83211060;
	sub_832109C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83255980
	ctx.lr = 0x83211068;
	sub_83255980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255980
	ctx.lr = 0x83211074;
	sub_83255980(ctx, base);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// rlwinm r31,r10,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83211088;
	sub_83209AA8(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r26,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832110d8
	if (!cr6.gt) goto loc_832110D8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_832110B8:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// beq cr6,0x832110d8
	if (cr6.eq) goto loc_832110D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x832110b8
	if (cr6.lt) goto loc_832110B8;
loc_832110D8:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// ble cr6,0x832110fc
	if (!cr6.gt) goto loc_832110FC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r9,46
	ctx.r9.s64 = 46;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u8);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stb r26,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r26.u8);
loc_832110FC:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf. r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + ctx.r27.u64;
	// ble 0x83211134
	if (!cr0.gt) goto loc_83211134;
	// subf r6,r10,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r10.s64;
loc_83211114:
	// lbzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// beq cr6,0x83211134
	if (cr6.eq) goto loc_83211134;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83211114
	if (cr6.lt) goto loc_83211114;
loc_83211134:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r8,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8321116c
	if (!cr0.gt) goto loc_8321116C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83211160:
	// stbx r26,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r26.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x83211160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83211160;
loc_8321116C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211178"))) PPC_WEAK_FUNC(sub_83211178);
PPC_FUNC_IMPL(__imp__sub_83211178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// sth r11,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r11.u16);
	// stb r11,10(r5)
	PPC_STORE_U8(ctx.r5.u32 + 10, ctx.r11.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r9,38(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r10,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x832111e8
	if (cr6.eq) goto loc_832111E8;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,5984
	ctx.r8.s64 = ctx.r11.s64 + 5984;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// addi r4,r6,-31504
	ctx.r4.s64 = ctx.r6.s64 + -31504;
	// addi r3,r5,-31512
	ctx.r3.s64 = ctx.r5.s64 + -31512;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
loc_832111E8:
	// li r10,595
	ctx.r10.s64 = 595;
	// sth r10,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r10.u16);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r9,18,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,34(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r4,r7,8
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83210908
	sub_83210908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211224"))) PPC_WEAK_FUNC(sub_83211224);
PPC_FUNC_IMPL(__imp__sub_83211224) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211228"))) PPC_WEAK_FUNC(sub_83211228);
PPC_FUNC_IMPL(__imp__sub_83211228) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83211260
	if (!cr6.eq) goto loc_83211260;
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x832277f8
	ctx.lr = 0x8321124C;
	sub_832277F8(ctx, base);
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
loc_83211260:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x83210ec0
	ctx.lr = 0x8321127C;
	sub_83210EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832112a0
	if (cr6.eq) goto loc_832112A0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83210908
	ctx.lr = 0x83211294;
	sub_83210908(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832112b4
	if (!cr6.eq) goto loc_832112B4;
loc_832112A0:
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x832112A8;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832112b4
	if (!cr6.eq) goto loc_832112B4;
	// bl 0x83227908
	ctx.lr = 0x832112B4;
	sub_83227908(ctx, base);
loc_832112B4:
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

__attribute__((alias("__imp__sub_832112C8"))) PPC_WEAK_FUNC(sub_832112C8);
PPC_FUNC_IMPL(__imp__sub_832112C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832112e0
	if (cr6.eq) goto loc_832112E0;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 & ctx.r5.u64;
loc_832112E0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832112f4
	if (!cr6.eq) goto loc_832112F4;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_832112F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,38(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8321135c
	if (cr6.eq) goto loc_8321135C;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x83211354
	if (cr6.eq) goto loc_83211354;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// beq cr6,0x8321134c
	if (cr6.eq) goto loc_8321134C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,5984
	ctx.r8.s64 = ctx.r11.s64 + 5984;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r3,r6,-31512
	ctx.r3.s64 = ctx.r6.s64 + -31512;
	// addi r4,r7,-31440
	ctx.r4.s64 = ctx.r7.s64 + -31440;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
loc_8321134C:
	// clrlwi r4,r11,18
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFF;
	// b 0x83210bc8
	sub_83210BC8(ctx, base);
	return;
loc_83211354:
	// clrlwi r4,r11,18
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFF;
	// b 0x83210bc8
	sub_83210BC8(ctx, base);
	return;
loc_8321135C:
	// rlwinm r4,r11,18,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// b 0x83210a28
	sub_83210A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211364"))) PPC_WEAK_FUNC(sub_83211364);
PPC_FUNC_IMPL(__imp__sub_83211364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211368"))) PPC_WEAK_FUNC(sub_83211368);
PPC_FUNC_IMPL(__imp__sub_83211368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8321137c
	if (!cr6.eq) goto loc_8321137C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8321137C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83211394
	if (!cr6.eq) goto loc_83211394;
loc_83211384:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_83211394:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,38(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x832113f4
	if (cr6.eq) goto loc_832113F4;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x832113ec
	if (cr6.eq) goto loc_832113EC;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// beq cr6,0x83211384
	if (cr6.eq) goto loc_83211384;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,5984
	ctx.r8.s64 = ctx.r11.s64 + 5984;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r3,r6,-31512
	ctx.r3.s64 = ctx.r6.s64 + -31512;
	// addi r4,r7,-31388
	ctx.r4.s64 = ctx.r7.s64 + -31388;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
loc_832113EC:
	// clrlwi r4,r11,18
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFF;
	// b 0x83210d38
	sub_83210D38(ctx, base);
	return;
loc_832113F4:
	// rlwinm r4,r11,18,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// b 0x83210af8
	sub_83210AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832113FC"))) PPC_WEAK_FUNC(sub_832113FC);
PPC_FUNC_IMPL(__imp__sub_832113FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211400"))) PPC_WEAK_FUNC(sub_83211400);
PPC_FUNC_IMPL(__imp__sub_83211400) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83211454
	if (!cr6.eq) goto loc_83211454;
loc_83211418:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83211440
	if (cr6.eq) goto loc_83211440;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
loc_83211440:
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
loc_83211454:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,38(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 38);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r5,r4,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xF;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bgt cr6,0x83211530
	if (cr6.gt) goto loc_83211530;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5264
	ctx.r12.s64 = ctx.r12.s64 + 5264;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8321151C;
	case 1:
		goto loc_83211530;
	case 2:
		goto loc_83211440;
	case 3:
		goto loc_83211530;
	case 4:
		goto loc_832114BC;
	case 5:
		goto loc_83211530;
	case 6:
		goto loc_8321151C;
	case 7:
		goto loc_8321151C;
	case 8:
		goto loc_83211418;
	case 9:
		goto loc_83211418;
	case 10:
		goto loc_832114F8;
	default:
		return;
	}
	// lwz r25,5404(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5404);
	// lwz r25,5424(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5424);
	// lwz r25,5184(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5184);
	// lwz r25,5424(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5424);
	// lwz r25,5308(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5308);
	// lwz r25,5424(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5424);
	// lwz r25,5404(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5404);
	// lwz r25,5404(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5404);
	// lwz r25,5144(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5144);
	// lwz r25,5144(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5144);
	// lwz r25,5368(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5368);
loc_832114BC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832114e4
	if (cr6.eq) goto loc_832114E4;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
loc_832114E4:
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
loc_832114F8:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5984
	ctx.r9.s64 = ctx.r11.s64 + 5984;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r4,r8,-31332
	ctx.r4.s64 = ctx.r8.s64 + -31332;
	// addi r3,r7,-31512
	ctx.r3.s64 = ctx.r7.s64 + -31512;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x832085e8
	ctx.lr = 0x8321151C;
	sub_832085E8(ctx, base);
loc_8321151C:
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
loc_83211530:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5984
	ctx.r9.s64 = ctx.r11.s64 + 5984;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r4,r8,-31332
	ctx.r4.s64 = ctx.r8.s64 + -31332;
	// addi r3,r7,-31512
	ctx.r3.s64 = ctx.r7.s64 + -31512;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83208568
	ctx.lr = 0x83211554;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83211554"))) PPC_WEAK_FUNC(sub_83211554);
PPC_FUNC_IMPL(__imp__sub_83211554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211558"))) PPC_WEAK_FUNC(sub_83211558);
PPC_FUNC_IMPL(__imp__sub_83211558) {
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
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,38(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r5,r7,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xF;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83211608
	if (cr6.gt) goto loc_83211608;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5536
	ctx.r12.s64 = ctx.r12.s64 + 5536;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832115F4;
	case 1:
		goto loc_832115CC;
	case 2:
		goto loc_832115F4;
	case 3:
		goto loc_832115CC;
	case 4:
		goto loc_832115F4;
	case 5:
		goto loc_832115CC;
	case 6:
		goto loc_832115F4;
	case 7:
		goto loc_832115CC;
	case 8:
		goto loc_832115F4;
	case 9:
		goto loc_832115CC;
	case 10:
		goto loc_832115E0;
	default:
		return;
	}
	// lwz r25,5620(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5620);
	// lwz r25,5580(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5580);
	// lwz r25,5620(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5620);
	// lwz r25,5580(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5580);
	// lwz r25,5620(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5620);
	// lwz r25,5580(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5580);
	// lwz r25,5620(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5620);
	// lwz r25,5580(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5580);
	// lwz r25,5620(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5620);
	// lwz r25,5580(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5580);
	// lwz r25,5600(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 5600);
loc_832115CC:
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
loc_832115E0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31284
	ctx.r4.s64 = ctx.r11.s64 + -31284;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// bl 0x832085e8
	ctx.lr = 0x832115F4;
	sub_832085E8(ctx, base);
loc_832115F4:
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
loc_83211608:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31284
	ctx.r4.s64 = ctx.r11.s64 + -31284;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// bl 0x83208568
	ctx.lr = 0x8321161C;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8321161C"))) PPC_WEAK_FUNC(sub_8321161C);
PPC_FUNC_IMPL(__imp__sub_8321161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211620"))) PPC_WEAK_FUNC(sub_83211620);
PPC_FUNC_IMPL(__imp__sub_83211620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83211628;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x83210ec0
	ctx.lr = 0x83211658;
	sub_83210EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83211670
	if (cr6.eq) goto loc_83211670;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83210908
	ctx.lr = 0x83211670;
	sub_83210908(ctx, base);
loc_83211670:
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x83282d50
	ctx.lr = 0x83211678;
	sub_83282D50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832116c0
	if (cr6.eq) goto loc_832116C0;
	// bl 0x8322a810
	ctx.lr = 0x83211688;
	sub_8322A810(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2179
	cr6.compare<uint32_t>(ctx.r11.u32, 2179, xer);
	// bne cr6,0x832116cc
	if (!cr6.eq) goto loc_832116CC;
	// cmplwi cr6,r30,225
	cr6.compare<uint32_t>(ctx.r30.u32, 225, xer);
	// beq cr6,0x832116b8
	if (cr6.eq) goto loc_832116B8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r9,r11,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832116e4
	if (cr6.eq) goto loc_832116E4;
loc_832116B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_832116C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832116CC:
	// cmplwi cr6,r11,2193
	cr6.compare<uint32_t>(ctx.r11.u32, 2193, xer);
	// beq cr6,0x832116b8
	if (cr6.eq) goto loc_832116B8;
	// cmplwi cr6,r11,2194
	cr6.compare<uint32_t>(ctx.r11.u32, 2194, xer);
	// beq cr6,0x832116b8
	if (cr6.eq) goto loc_832116B8;
	// cmplwi cr6,r11,2195
	cr6.compare<uint32_t>(ctx.r11.u32, 2195, xer);
	// beq cr6,0x832116b8
	if (cr6.eq) goto loc_832116B8;
loc_832116E4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832116fc
	if (cr6.eq) goto loc_832116FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832116FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83211368
	ctx.lr = 0x83211708;
	sub_83211368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211720"))) PPC_WEAK_FUNC(sub_83211720);
PPC_FUNC_IMPL(__imp__sub_83211720) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x83211620
	ctx.lr = 0x8321174C;
	sub_83211620(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83211760
	if (!cr6.eq) goto loc_83211760;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x832117a8
	goto loc_832117A8;
loc_83211760:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832117a4
	if (cr6.eq) goto loc_832117A4;
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
	// beq cr6,0x83211790
	if (cr6.eq) goto loc_83211790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83211790;
	sub_83222030(ctx, base);
loc_83211790:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_832117A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832117A8:
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

__attribute__((alias("__imp__sub_832117C0"))) PPC_WEAK_FUNC(sub_832117C0);
PPC_FUNC_IMPL(__imp__sub_832117C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832117E8"))) PPC_WEAK_FUNC(sub_832117E8);
PPC_FUNC_IMPL(__imp__sub_832117E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// bgt cr6,0x8321191c
	if (cr6.gt) goto loc_8321191C;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6160
	ctx.r12.s64 = ctx.r12.s64 + 6160;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8321190C;
	case 1:
		goto loc_83211914;
	case 2:
		goto loc_83211914;
	case 3:
		goto loc_8321190C;
	case 4:
		goto loc_8321190C;
	case 5:
		goto loc_83211914;
	case 6:
		goto loc_83211914;
	case 7:
		goto loc_8321190C;
	case 8:
		goto loc_8321190C;
	case 9:
		goto loc_8321191C;
	case 10:
		goto loc_8321191C;
	case 11:
		goto loc_8321190C;
	case 12:
		goto loc_8321190C;
	case 13:
		goto loc_8321191C;
	case 14:
		goto loc_8321191C;
	case 15:
		goto loc_8321191C;
	case 16:
		goto loc_8321191C;
	case 17:
		goto loc_8321191C;
	case 18:
		goto loc_83211914;
	case 19:
		goto loc_8321191C;
	case 20:
		goto loc_8321191C;
	case 21:
		goto loc_8321191C;
	case 22:
		goto loc_83211914;
	case 23:
		goto loc_8321191C;
	case 24:
		goto loc_8321191C;
	case 25:
		goto loc_8321191C;
	case 26:
		goto loc_8321191C;
	case 27:
		goto loc_8321191C;
	case 28:
		goto loc_8321191C;
	case 29:
		goto loc_8321191C;
	case 30:
		goto loc_8321191C;
	case 31:
		goto loc_8321191C;
	case 32:
		goto loc_8321191C;
	case 33:
		goto loc_8321191C;
	case 34:
		goto loc_83211914;
	case 35:
		goto loc_8321191C;
	case 36:
		goto loc_8321191C;
	case 37:
		goto loc_8321191C;
	case 38:
		goto loc_83211914;
	case 39:
		goto loc_8321191C;
	case 40:
		goto loc_8321191C;
	case 41:
		goto loc_8321191C;
	case 42:
		goto loc_83211914;
	case 43:
		goto loc_8321191C;
	case 44:
		goto loc_8321191C;
	case 45:
		goto loc_8321191C;
	case 46:
		goto loc_83211914;
	case 47:
		goto loc_8321191C;
	case 48:
		goto loc_8321191C;
	case 49:
		goto loc_8321191C;
	case 50:
		goto loc_8321191C;
	case 51:
		goto loc_8321191C;
	case 52:
		goto loc_8321191C;
	case 53:
		goto loc_8321191C;
	case 54:
		goto loc_8321191C;
	case 55:
		goto loc_8321191C;
	case 56:
		goto loc_8321191C;
	case 57:
		goto loc_8321191C;
	case 58:
		goto loc_83211914;
	case 59:
		goto loc_8321191C;
	case 60:
		goto loc_8321191C;
	case 61:
		goto loc_8321191C;
	case 62:
		goto loc_83211914;
	default:
		return;
	}
	// lwz r25,6412(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6412);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6412(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6412);
	// lwz r25,6412(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6412);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6412(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6412);
	// lwz r25,6412(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6412);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6412(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6412);
	// lwz r25,6412(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6412);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6428(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6428);
	// lwz r25,6420(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6420);
loc_8321190C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83211914:
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// blr 
	return;
loc_8321191C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31236
	ctx.r4.s64 = ctx.r11.s64 + -31236;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211930"))) PPC_WEAK_FUNC(sub_83211930);
PPC_FUNC_IMPL(__imp__sub_83211930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r5,39
	cr6.compare<int32_t>(ctx.r5.s32, 39, xer);
	// bgt cr6,0x832119f0
	if (cr6.gt) goto loc_832119F0;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r5,19
	cr6.compare<int32_t>(ctx.r5.s32, 19, xer);
	// bgt cr6,0x832119cc
	if (cr6.gt) goto loc_832119CC;
	// beq cr6,0x832119bc
	if (cr6.eq) goto loc_832119BC;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x83211a28
	if (cr6.gt) goto loc_83211A28;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6536
	ctx.r12.s64 = ctx.r12.s64 + 6536;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83211A68;
	case 1:
		goto loc_83211A68;
	case 2:
		goto loc_83211A68;
	case 3:
		goto loc_83211A68;
	case 4:
		goto loc_83211A68;
	case 5:
		goto loc_83211A68;
	case 6:
		goto loc_83211A68;
	case 7:
		goto loc_83211A68;
	case 8:
		goto loc_83211A68;
	case 9:
		goto loc_83211A28;
	case 10:
		goto loc_83211A28;
	case 11:
		goto loc_83211A68;
	case 12:
		goto loc_83211A68;
	default:
		return;
	}
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6696);
	// lwz r25,6696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6696);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
	// lwz r25,6760(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6760);
loc_832119BC:
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83211a48
	goto loc_83211A48;
loc_832119CC:
	// cmpwi cr6,r5,23
	cr6.compare<int32_t>(ctx.r5.s32, 23, xer);
	// beq cr6,0x832119e0
	if (cr6.eq) goto loc_832119E0;
	// cmpwi cr6,r5,35
	cr6.compare<int32_t>(ctx.r5.s32, 35, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83211a28
	goto loc_83211A28;
loc_832119E0:
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83211a48
	goto loc_83211A48;
loc_832119F0:
	// cmpwi cr6,r5,59
	cr6.compare<int32_t>(ctx.r5.s32, 59, xer);
	// bgt cr6,0x83211a20
	if (cr6.gt) goto loc_83211A20;
	// beq cr6,0x83211a10
	if (cr6.eq) goto loc_83211A10;
	// cmpwi cr6,r5,43
	cr6.compare<int32_t>(ctx.r5.s32, 43, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r5,47
	cr6.compare<int32_t>(ctx.r5.s32, 47, xer);
	// bne cr6,0x83211a28
	if (!cr6.eq) goto loc_83211A28;
	// blr 
	return;
loc_83211A10:
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// b 0x83211a48
	goto loc_83211A48;
loc_83211A20:
	// cmpwi cr6,r5,63
	cr6.compare<int32_t>(ctx.r5.s32, 63, xer);
	// beq cr6,0x83211a3c
	if (cr6.eq) goto loc_83211A3C;
loc_83211A28:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31188
	ctx.r4.s64 = ctx.r11.s64 + -31188;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
loc_83211A3C:
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_83211A48:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
loc_83211A68:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211A6C"))) PPC_WEAK_FUNC(sub_83211A6C);
PPC_FUNC_IMPL(__imp__sub_83211A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211A70"))) PPC_WEAK_FUNC(sub_83211A70);
PPC_FUNC_IMPL(__imp__sub_83211A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r8,18(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x83211aa4
	if (cr6.eq) goto loc_83211AA4;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x83211ab4
	goto loc_83211AB4;
loc_83211AA4:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
loc_83211AB4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211AD0"))) PPC_WEAK_FUNC(sub_83211AD0);
PPC_FUNC_IMPL(__imp__sub_83211AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// blt cr6,0x83211af8
	if (cr6.lt) goto loc_83211AF8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31140
	ctx.r4.s64 = ctx.r11.s64 + -31140;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
loc_83211AF8:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211B18"))) PPC_WEAK_FUNC(sub_83211B18);
PPC_FUNC_IMPL(__imp__sub_83211B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// blt cr6,0x83211b40
	if (cr6.lt) goto loc_83211B40;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31108
	ctx.r4.s64 = ctx.r11.s64 + -31108;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// b 0x83208568
	sub_83208568(ctx, base);
	return;
loc_83211B40:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211B60"))) PPC_WEAK_FUNC(sub_83211B60);
PPC_FUNC_IMPL(__imp__sub_83211B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,115
	cr6.compare<uint32_t>(ctx.r10.u32, 115, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,40
	cr6.compare<uint32_t>(ctx.r10.u32, 40, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x83211ba8
	if (!cr6.eq) goto loc_83211BA8;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_83211BA8:
	// cmplwi cr6,r10,115
	cr6.compare<uint32_t>(ctx.r10.u32, 115, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,49
	cr6.compare<uint32_t>(ctx.r10.u32, 49, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211BE4"))) PPC_WEAK_FUNC(sub_83211BE4);
PPC_FUNC_IMPL(__imp__sub_83211BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83211BE8"))) PPC_WEAK_FUNC(sub_83211BE8);
PPC_FUNC_IMPL(__imp__sub_83211BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83211BF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,48
	ctx.r11.s64 = ctx.r5.s64 + 48;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lhz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// lhz r11,18(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 18);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83211d30
	if (cr6.eq) goto loc_83211D30;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq cr6,0x83211c60
	if (cr6.eq) goto loc_83211C60;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r9,r8
	ctx.r26.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x83211c70
	goto loc_83211C70;
loc_83211C60:
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lhzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r9,r7
	ctx.r26.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_83211C70:
	// lbzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83211ce8
	if (!cr6.eq) goto loc_83211CE8;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83211d30
	if (!cr6.gt) goto loc_83211D30;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_83211C94:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83211cac
	if (cr6.eq) goto loc_83211CAC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x83211cb0
	goto loc_83211CB0;
loc_83211CAC:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
loc_83211CB0:
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327db88
	ctx.lr = 0x83211CC0;
	sub_8327DB88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83211b60
	ctx.lr = 0x83211CC8;
	sub_83211B60(ctx, base);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83211c94
	if (cr6.lt) goto loc_83211C94;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83211CE8:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83211d30
	if (!cr6.gt) goto loc_83211D30;
loc_83211CF4:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83211d0c
	if (cr6.eq) goto loc_83211D0C;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x83211d10
	goto loc_83211D10;
loc_83211D0C:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
loc_83211D10:
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x83211b60
	ctx.lr = 0x83211D18;
	sub_83211B60(ctx, base);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// blt cr6,0x83211cf4
	if (cr6.lt) goto loc_83211CF4;
loc_83211D30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211D38"))) PPC_WEAK_FUNC(sub_83211D38);
PPC_FUNC_IMPL(__imp__sub_83211D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83211D40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r3,r6,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83211D5C;
	sub_83209AA8(ctx, base);
	// stw r3,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83211db0
	if (!cr6.gt) goto loc_83211DB0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_83211D70:
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq 0x83211d94
	if (cr0.eq) goto loc_83211D94;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
loc_83211D94:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83211be8
	ctx.lr = 0x83211DA0;
	sub_83211BE8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x83211d70
	if (!cr0.eq) goto loc_83211D70;
loc_83211DB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83211DB8"))) PPC_WEAK_FUNC(sub_83211DB8);
PPC_FUNC_IMPL(__imp__sub_83211DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83211ed8
	if (cr6.eq) goto loc_83211ED8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq cr6,0x83211eac
	if (cr6.eq) goto loc_83211EAC;
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// ble cr6,0x83211eac
	if (!cr6.gt) goto loc_83211EAC;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83211ed8
	if (!cr6.gt) goto loc_83211ED8;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r9,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r11.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// srawi r8,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_83211E1C:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// blt cr6,0x83211e40
	if (cr6.lt) goto loc_83211E40;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83211ed8
	if (cr6.eq) goto loc_83211ED8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// b 0x83211e1c
	goto loc_83211E1C;
loc_83211E40:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// subf. r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83211e84
	if (cr0.eq) goto loc_83211E84;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83211ed8
	if (cr6.eq) goto loc_83211ED8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x83211e74
	if (!cr6.lt) goto loc_83211E74;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// b 0x83211e1c
	goto loc_83211E1C;
loc_83211E74:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// b 0x83211e1c
	goto loc_83211E1C;
loc_83211E84:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83211ed8
	if (cr6.lt) goto loc_83211ED8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
loc_83211EAC:
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83211ed8
	if (!cr6.gt) goto loc_83211ED8;
loc_83211EBC:
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x83211ee0
	if (cr6.eq) goto loc_83211EE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83211ebc
	if (cr6.lt) goto loc_83211EBC;
loc_83211ED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83211EE0:
	// lhz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r9,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFC;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83211EF8"))) PPC_WEAK_FUNC(sub_83211EF8);
PPC_FUNC_IMPL(__imp__sub_83211EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83211F00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,96(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83212018
	if (cr6.eq) goto loc_83212018;
	// lwz r31,108(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83212018
	if (cr6.eq) goto loc_83212018;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212018
	if (cr6.eq) goto loc_83212018;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83211fa0
	if (!cr6.eq) goto loc_83211FA0;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x83209aa8
	ctx.lr = 0x83211F4C;
	sub_83209AA8(ctx, base);
	// stw r3,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r3.u32);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x83211fa0
	if (cr6.eq) goto loc_83211FA0;
	// addi r29,r10,-2
	ctx.r29.s64 = ctx.r10.s64 + -2;
loc_83211F70:
	// lhzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,14,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x30000) | (ctx.r10.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r10,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFC;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x83210848
	ctx.lr = 0x83211F8C;
	sub_83210848(ctx, base);
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x83211f70
	if (cr6.lt) goto loc_83211F70;
loc_83211FA0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lbz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210848
	ctx.lr = 0x83211FB0;
	sub_83210848(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lhz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,112(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83212018
	if (!cr6.gt) goto loc_83212018;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r31,r25,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r25.s64;
loc_83211FD4:
	// lwzx r11,r31,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83212008
	if (!cr6.eq) goto loc_83212008;
	// lhz r10,2(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r9,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFC;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x83237ad0
	ctx.lr = 0x83211FFC;
	sub_83237AD0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83212024
	if (cr6.eq) goto loc_83212024;
loc_83212008:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x83211fd4
	if (cr6.lt) goto loc_83211FD4;
loc_83212018:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83212024:
	// lhz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83212030"))) PPC_WEAK_FUNC(sub_83212030);
PPC_FUNC_IMPL(__imp__sub_83212030) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832120b8
	if (cr6.eq) goto loc_832120B8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,31,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x3FF;
	// cmplwi cr6,r9,121
	cr6.compare<uint32_t>(ctx.r9.u32, 121, xer);
	// bne cr6,0x83212094
	if (!cr6.eq) goto loc_83212094;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832120b8
	if (cr6.eq) goto loc_832120B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// b 0x832120b8
	goto loc_832120B8;
loc_83212094:
	// cmplwi cr6,r9,132
	cr6.compare<uint32_t>(ctx.r9.u32, 132, xer);
	// bne cr6,0x832120b8
	if (!cr6.eq) goto loc_832120B8;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832120b8
	if (cr6.eq) goto loc_832120B8;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
loc_832120B8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212110
	if (cr6.eq) goto loc_83212110;
	// lwz r11,268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832120dc
	if (cr6.eq) goto loc_832120DC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83211db8
	ctx.lr = 0x832120DC;
	sub_83211DB8(ctx, base);
loc_832120DC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832120f8
	if (cr6.eq) goto loc_832120F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83212110
	goto loc_83212110;
loc_832120F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83212110
	if (cr6.eq) goto loc_83212110;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
loc_83212110:
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

__attribute__((alias("__imp__sub_83212128"))) PPC_WEAK_FUNC(sub_83212128);
PPC_FUNC_IMPL(__imp__sub_83212128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83212130;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83212280
	if (!cr6.eq) goto loc_83212280;
	// lwz r29,276(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83212280
	if (cr6.eq) goto loc_83212280;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83212280
	if (!cr6.gt) goto loc_83212280;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r24,12
	ctx.r24.s64 = 12;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r26,1
	ctx.r26.s64 = 1;
loc_83212180:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x8321226c
	if (!cr6.eq) goto loc_8321226C;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832121b8
	if (!cr6.eq) goto loc_832121B8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83277b98
	ctx.lr = 0x832121B4;
	sub_83277B98(ctx, base);
	// b 0x8321226c
	goto loc_8321226C;
loc_832121B8:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// sth r24,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r24.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r31.u16);
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stb r26,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r26.u8);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x8322d130
	ctx.lr = 0x83212220;
	sub_8322D130(ctx, base);
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x83212230
	if (!cr6.eq) goto loc_83212230;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x83212248
	goto loc_83212248;
loc_83212230:
	// cmpwi cr6,r3,-1000
	cr6.compare<int32_t>(ctx.r3.s32, -1000, xer);
	// bgt cr6,0x83212244
	if (cr6.gt) goto loc_83212244;
	// cmpwi cr6,r3,-3000
	cr6.compare<int32_t>(ctx.r3.s32, -3000, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bgt cr6,0x83212248
	if (cr6.gt) goto loc_83212248;
loc_83212244:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83212248:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321225c
	if (cr6.eq) goto loc_8321225C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83285fd8
	ctx.lr = 0x8321225C;
	sub_83285FD8(ctx, base);
loc_8321225C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83212264;
	sub_83222030(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x8321226C;
	sub_83222030(ctx, base);
loc_8321226C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x83212180
	if (cr6.lt) goto loc_83212180;
loc_83212280:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83212288"))) PPC_WEAK_FUNC(sub_83212288);
PPC_FUNC_IMPL(__imp__sub_83212288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83212290;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832122ac
	if (!cr6.eq) goto loc_832122AC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832122AC:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x832390b0
	ctx.lr = 0x832122C0;
	sub_832390B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832122e8
	if (!cr6.eq) goto loc_832122E8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31080
	ctx.r4.s64 = ctx.r11.s64 + -31080;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x832122E4;
	sub_832085E8(ctx, base);
	// b 0x83212448
	goto loc_83212448;
loc_832122E8:
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lhz r5,70(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 70);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lhz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x83212314
	if (cr6.lt) goto loc_83212314;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31140
	ctx.r4.s64 = ctx.r11.s64 + -31140;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// bl 0x83208568
	ctx.lr = 0x83212314;
	sub_83208568(ctx, base);
loc_83212314:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lhzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r4,r5,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83212360
	if (cr6.eq) goto loc_83212360;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x832123a0
	goto loc_832123A0;
loc_83212360:
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832123a0
	if (!cr6.eq) goto loc_832123A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,10(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// bl 0x83211a70
	ctx.lr = 0x83212378;
	sub_83211A70(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83212398
	if (cr6.eq) goto loc_83212398;
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// b 0x8321239c
	goto loc_8321239C;
loc_83212398:
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
loc_8321239C:
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
loc_832123A0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832123bc
	if (cr6.eq) goto loc_832123BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8327a7d8
	ctx.lr = 0x832123B8;
	sub_8327A7D8(ctx, base);
	// b 0x8321241c
	goto loc_8321241C;
loc_832123BC:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r29,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r29.u16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r10,66(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 66);
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// lhz r3,10(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// bl 0x832860f8
	ctx.lr = 0x832123F0;
	sub_832860F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83277b08
	ctx.lr = 0x83212410;
	sub_83277B08(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83286150
	ctx.lr = 0x8321241C;
	sub_83286150(ctx, base);
loc_8321241C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83212424;
	sub_83222030(ctx, base);
	// cmpwi cr6,r26,-17
	cr6.compare<int32_t>(ctx.r26.s32, -17, xer);
	// bne cr6,0x83212434
	if (!cr6.eq) goto loc_83212434;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8321244c
	goto loc_8321244C;
loc_83212434:
	// cmpwi cr6,r26,-1000
	cr6.compare<int32_t>(ctx.r26.s32, -1000, xer);
	// bgt cr6,0x83212448
	if (cr6.gt) goto loc_83212448;
	// cmpwi cr6,r26,-3000
	cr6.compare<int32_t>(ctx.r26.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8321244c
	if (cr6.gt) goto loc_8321244C;
loc_83212448:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8321244C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832124c8
	if (!cr6.eq) goto loc_832124C8;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83266af0
	ctx.lr = 0x83212474;
	sub_83266AF0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x83212488
	if (!cr6.eq) goto loc_83212488;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832124a0
	goto loc_832124A0;
loc_83212488:
	// cmpwi cr6,r26,-1000
	cr6.compare<int32_t>(ctx.r26.s32, -1000, xer);
	// bgt cr6,0x8321249c
	if (cr6.gt) goto loc_8321249C;
	// cmpwi cr6,r26,-3000
	cr6.compare<int32_t>(ctx.r26.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x832124a0
	if (cr6.gt) goto loc_832124A0;
loc_8321249C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832124A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832124c0
	if (!cr6.eq) goto loc_832124C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83266a30
	ctx.lr = 0x832124C0;
	sub_83266A30(ctx, base);
loc_832124C0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x832124C8;
	sub_83222030(ctx, base);
loc_832124C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832124D4"))) PPC_WEAK_FUNC(sub_832124D4);
PPC_FUNC_IMPL(__imp__sub_832124D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832124D8"))) PPC_WEAK_FUNC(sub_832124D8);
PPC_FUNC_IMPL(__imp__sub_832124D8) {
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
	// lwz r30,80(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83212288
	ctx.lr = 0x832124FC;
	sub_83212288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x83212510
	if (!cr6.eq) goto loc_83212510;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83212528
	goto loc_83212528;
loc_83212510:
	// cmpwi cr6,r31,-1000
	cr6.compare<int32_t>(ctx.r31.s32, -1000, xer);
	// bgt cr6,0x83212524
	if (cr6.gt) goto loc_83212524;
	// cmpwi cr6,r31,-3000
	cr6.compare<int32_t>(ctx.r31.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83212528
	if (cr6.gt) goto loc_83212528;
loc_83212524:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83212528:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83212584
	if (!cr6.eq) goto loc_83212584;
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212584
	if (cr6.eq) goto loc_83212584;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83212584
	if (!cr6.eq) goto loc_83212584;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83212584
	if (!cr6.gt) goto loc_83212584;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83212584
	if (!cr6.eq) goto loc_83212584;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83277bf8
	ctx.lr = 0x83212584;
	sub_83277BF8(ctx, base);
loc_83212584:
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

__attribute__((alias("__imp__sub_832125A0"))) PPC_WEAK_FUNC(sub_832125A0);
PPC_FUNC_IMPL(__imp__sub_832125A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832125A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832126f8
	if (!cr6.eq) goto loc_832126F8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832125d8
	if (!cr6.eq) goto loc_832125D8;
	// bl 0x83222030
	ctx.lr = 0x832125D0;
	sub_83222030(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832125D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r7,-20480
	ctx.r7.s64 = -1342177280;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// sth r11,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r11.u16);
	// stb r11,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lhz r10,38(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r4,r5,0,0,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// beq cr6,0x83212690
	if (cr6.eq) goto loc_83212690;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83210f58
	ctx.lr = 0x83212638;
	sub_83210F58(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83282d90
	ctx.lr = 0x83212640;
	sub_83282D90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83212664
	if (!cr6.eq) goto loc_83212664;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x83223d70
	ctx.lr = 0x83212654;
	sub_83223D70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8321265C;
	sub_83222030(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83212664:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83239460
	ctx.lr = 0x83212678;
	sub_83239460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83212690
	if (!cr6.eq) goto loc_83212690;
	// lhz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,817
	cr6.compare<uint32_t>(ctx.r3.u32, 817, xer);
	// bne cr6,0x832126a8
	if (!cr6.eq) goto loc_832126A8;
loc_83212690:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213150
	ctx.lr = 0x83212698;
	sub_83213150(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832126A0;
	sub_83222030(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832126A8:
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832126cc
	if (!cr6.eq) goto loc_832126CC;
	// bl 0x832277f8
	ctx.lr = 0x832126B8;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832126cc
	if (!cr6.eq) goto loc_832126CC;
	// bl 0x83227908
	ctx.lr = 0x832126C8;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_832126CC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31052
	ctx.r4.s64 = ctx.r11.s64 + -31052;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// bl 0x832085e8
	ctx.lr = 0x832126E0;
	sub_832085E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222030
	ctx.lr = 0x832126E8;
	sub_83222030(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832126F0;
	sub_83222030(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832126F8:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x832128b8
	if (cr6.gt) goto loc_832128B8;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10012
	ctx.r12.s64 = ctx.r12.s64 + 10012;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8321274C;
	case 1:
		goto loc_832128B8;
	case 2:
		goto loc_83212784;
	case 3:
		goto loc_832128B8;
	case 4:
		goto loc_832128B8;
	case 5:
		goto loc_832127D4;
	case 6:
		goto loc_832128B8;
	case 7:
		goto loc_83212830;
	case 8:
		goto loc_832128B8;
	case 9:
		goto loc_8321280C;
	case 10:
		goto loc_832127F8;
	case 11:
		goto loc_83212820;
	default:
		return;
	}
	// lwz r25,10060(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10060);
	// lwz r25,10424(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10424);
	// lwz r25,10116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10116);
	// lwz r25,10424(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10424);
	// lwz r25,10424(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10424);
	// lwz r25,10196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10196);
	// lwz r25,10424(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10424);
	// lwz r25,10288(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10288);
	// lwz r25,10424(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10424);
	// lwz r25,10252(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10252);
	// lwz r25,10232(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10232);
	// lwz r25,10272(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 10272);
loc_8321274C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// bl 0x83210908
	ctx.lr = 0x83212770;
	sub_83210908(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83223d00
	ctx.lr = 0x8321277C;
	sub_83223D00(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83212784:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lhz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r8,8400
	ctx.r6.u64 = ctx.r8.u64 | 8400;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhz r10,22(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 22);
	// sraw r4,r6,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r4.s64 = ctx.r6.s32 >> temp.u32;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwzx r31,r3,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// beq cr6,0x832127c0
	if (cr6.eq) goto loc_832127C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222030
	ctx.lr = 0x832127C0;
	sub_83222030(ctx, base);
loc_832127C0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832127D4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 28);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfdx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x832239d8
	ctx.lr = 0x832127F0;
	sub_832239D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832127F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320cf60
	ctx.lr = 0x83212804;
	sub_8320CF60(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8321280C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320cf60
	ctx.lr = 0x83212818;
	sub_8320CF60(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83212820:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213150
	ctx.lr = 0x83212828;
	sub_83213150(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83212830:
	// bl 0x83239c18
	ctx.lr = 0x83212834;
	sub_83239C18(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lhz r10,34(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 34);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r4,r6,8
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83212884
	if (cr6.eq) goto loc_83212884;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83210908
	ctx.lr = 0x83212878;
	sub_83210908(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832128a0
	if (!cr6.eq) goto loc_832128A0;
loc_83212884:
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// bl 0x832277f8
	ctx.lr = 0x8321288C;
	sub_832277F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832128a0
	if (!cr6.eq) goto loc_832128A0;
	// bl 0x83227908
	ctx.lr = 0x8321289C;
	sub_83227908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832128A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83239d48
	ctx.lr = 0x832128A8;
	sub_83239D48(ctx, base);
	// li r5,158
	ctx.r5.s64 = 158;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266dd0
	ctx.lr = 0x832128B8;
	sub_83266DD0(ctx, base);
loc_832128B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832128C0"))) PPC_WEAK_FUNC(sub_832128C0);
PPC_FUNC_IMPL(__imp__sub_832128C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832128C8;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83212e00
	if (cr6.eq) goto loc_83212E00;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832128fc
	if (!cr6.eq) goto loc_832128FC;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_832128FC:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// sth r25,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r25.u16);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// stb r25,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r25.u8);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ble cr6,0x83212df8
	if (!cr6.gt) goto loc_83212DF8;
	// addi r28,r6,6
	ctx.r28.s64 = ctx.r6.s64 + 6;
	// li r22,12288
	ctx.r22.s64 = 12288;
loc_83212938:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r31,r28,-6
	ctx.r31.s64 = ctx.r28.s64 + -6;
	// sth r25,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r25.u16);
	// stb r25,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r25.u8);
	// lhz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + -4);
	// bl 0x83210ec0
	ctx.lr = 0x83212958;
	sub_83210EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83212970
	if (cr6.eq) goto loc_83212970;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83210908
	ctx.lr = 0x83212970;
	sub_83210908(ctx, base);
loc_83212970:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// bgt cr6,0x83212d84
	if (cr6.gt) goto loc_83212D84;
	// beq cr6,0x83212ce0
	if (cr6.eq) goto loc_83212CE0;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83212e08
	if (cr6.gt) goto loc_83212E08;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83212c54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83212C54;
	// bdzf 4*cr6+eq,0x83212a9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83212A9C;
	// bdzf 4*cr6+eq,0x83212b78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83212B78;
	// bdzf 4*cr6+eq,0x83212e08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83212E08;
	// bdzf 4*cr6+eq,0x83212e08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83212E08;
	// bne cr6,0x83212cd0
	if (!cr6.eq) goto loc_83212CD0;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832129d0
	if (!cr6.eq) goto loc_832129D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322ab20
	ctx.lr = 0x832129C8;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83212de8
	if (!cr6.eq) goto loc_83212DE8;
loc_832129D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832125a0
	ctx.lr = 0x832129E8;
	sub_832125A0(ctx, base);
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x832129f8
	if (!cr6.eq) goto loc_832129F8;
	// stb r24,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r24.u8);
loc_832129F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x83212A10;
	sub_8322DFB0(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + -4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bl 0x832112c8
	ctx.lr = 0x83212A2C;
	sub_832112C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212a3c
	if (cr6.eq) goto loc_83212A3C;
	// li r31,33
	ctx.r31.s64 = 33;
loc_83212A3C:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// lhz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// bl 0x8322a890
	ctx.lr = 0x83212A54;
	sub_8322A890(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83212de8
	if (cr6.eq) goto loc_83212DE8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320b0b8
	ctx.lr = 0x83212A6C;
	sub_8320B0B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83212de8
	if (cr6.eq) goto loc_83212DE8;
	// lhz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x83266dd0
	ctx.lr = 0x83212A88;
	sub_83266DD0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// b 0x83212de8
	goto loc_83212DE8;
loc_83212A9C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x8322ab20
	ctx.lr = 0x83212AAC;
	sub_8322AB20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83212af8
	if (cr6.eq) goto loc_83212AF8;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r22,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r9,11
	ctx.r11.u64 = ctx.r9.u64 ^ 11;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83212b1c
	if (cr6.eq) goto loc_83212B1C;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83212b50
	goto loc_83212B50;
loc_83212AF8:
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83212b08
	if (!cr6.eq) goto loc_83212B08;
	// stb r24,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r24.u8);
loc_83212B08:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322add8
	ctx.lr = 0x83212B18;
	sub_8322ADD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83212B1C:
	// bl 0x8322b088
	ctx.lr = 0x83212B20;
	sub_8322B088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83266dd0
	ctx.lr = 0x83212B34;
	sub_83266DD0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x832240b8
	ctx.lr = 0x83212B44;
	sub_832240B8(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_83212B50:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212de8
	if (cr6.eq) goto loc_83212DE8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x832860f8
	ctx.lr = 0x83212B70;
	sub_832860F8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x83212de8
	goto loc_83212DE8;
loc_83212B78:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x8322ab20
	ctx.lr = 0x83212B88;
	sub_8322AB20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83212bd4
	if (cr6.eq) goto loc_83212BD4;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r22,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r9,11
	ctx.r11.u64 = ctx.r9.u64 ^ 11;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83212bf8
	if (cr6.eq) goto loc_83212BF8;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83212c2c
	goto loc_83212C2C;
loc_83212BD4:
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83212be4
	if (!cr6.eq) goto loc_83212BE4;
	// stb r24,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r24.u8);
loc_83212BE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322add8
	ctx.lr = 0x83212BF4;
	sub_8322ADD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83212BF8:
	// bl 0x8322b088
	ctx.lr = 0x83212BFC;
	sub_8322B088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83266dd0
	ctx.lr = 0x83212C10;
	sub_83266DD0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x832240b8
	ctx.lr = 0x83212C20;
	sub_832240B8(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_83212C2C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212de8
	if (cr6.eq) goto loc_83212DE8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x832860f8
	ctx.lr = 0x83212C4C;
	sub_832860F8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x83212de8
	goto loc_83212DE8;
loc_83212C54:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83212c74
	if (!cr6.eq) goto loc_83212C74;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322ab20
	ctx.lr = 0x83212C6C;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83212de8
	if (!cr6.eq) goto loc_83212DE8;
loc_83212C74:
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x832860f8
	ctx.lr = 0x83212C88;
	sub_832860F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,142
	ctx.r5.s64 = 142;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83266dd0
	ctx.lr = 0x83212C98;
	sub_83266DD0(ctx, base);
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83212ca8
	if (!cr6.eq) goto loc_83212CA8;
	// stb r24,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r24.u8);
loc_83212CA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x83212CC0;
	sub_8322DFB0(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// b 0x83212de8
	goto loc_83212DE8;
loc_83212CD0:
	// lhz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83212da0
	goto loc_83212DA0;
loc_83212CE0:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83212d00
	if (!cr6.eq) goto loc_83212D00;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322ab20
	ctx.lr = 0x83212CF8;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83212de8
	if (!cr6.eq) goto loc_83212DE8;
loc_83212D00:
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// bl 0x8322a890
	ctx.lr = 0x83212D0C;
	sub_8322A890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212d2c
	if (cr6.eq) goto loc_83212D2C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320b0b8
	ctx.lr = 0x83212D24;
	sub_8320B0B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83212de8
	if (!cr6.eq) goto loc_83212DE8;
loc_83212D2C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r5,-2(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + -2);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x832125a0
	ctx.lr = 0x83212D4C;
	sub_832125A0(ctx, base);
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83212d5c
	if (!cr6.eq) goto loc_83212D5C;
	// stb r24,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r24.u8);
loc_83212D5C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x83212D74;
	sub_8322DFB0(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// b 0x83212de8
	goto loc_83212DE8;
loc_83212D84:
	// cmpwi cr6,r11,262
	cr6.compare<int32_t>(ctx.r11.s32, 262, xer);
	// bne cr6,0x83212e08
	if (!cr6.eq) goto loc_83212E08;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r5,-2(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + -2);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
loc_83212DA0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832125a0
	ctx.lr = 0x83212DAC;
	sub_832125A0(ctx, base);
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83212dbc
	if (!cr6.eq) goto loc_83212DBC;
	// stb r24,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r24.u8);
loc_83212DBC:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x83212DDC;
	sub_8322DFB0(ctx, base);
	// lbz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
loc_83212DE8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r21,r20
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, xer);
	// blt cr6,0x83212938
	if (cr6.lt) goto loc_83212938;
loc_83212DF8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83212E00;
	sub_83222030(ctx, base);
loc_83212E00:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83212E08:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31016
	ctx.r4.s64 = ctx.r11.s64 + -31016;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// bl 0x83208568
	ctx.lr = 0x83212E20;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83212E20"))) PPC_WEAK_FUNC(sub_83212E20);
PPC_FUNC_IMPL(__imp__sub_83212E20) {
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
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212e54
	if (cr6.eq) goto loc_83212E54;
	// lhz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// b 0x83212e58
	goto loc_83212E58;
loc_83212E54:
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
loc_83212E58:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83212e88
	if (cr6.eq) goto loc_83212E88;
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212e70
	if (cr6.eq) goto loc_83212E70;
	// li r10,14
	ctx.r10.s64 = 14;
loc_83212E70:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x832128c0
	ctx.lr = 0x83212E88;
	sub_832128C0(ctx, base);
loc_83212E88:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83212ea4
	if (!cr6.eq) goto loc_83212EA4;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
loc_83212EA4:
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

__attribute__((alias("__imp__sub_83212EBC"))) PPC_WEAK_FUNC(sub_83212EBC);
PPC_FUNC_IMPL(__imp__sub_83212EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83212EC0"))) PPC_WEAK_FUNC(sub_83212EC0);
PPC_FUNC_IMPL(__imp__sub_83212EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83212EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8321303c
	if (cr6.eq) goto loc_8321303C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832390b0
	ctx.lr = 0x83212EE4;
	sub_832390B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83212f10
	if (!cr6.eq) goto loc_83212F10;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-31080
	ctx.r4.s64 = ctx.r11.s64 + -31080;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x83212F08;
	sub_832085E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83212F10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b2a0
	ctx.lr = 0x83212F20;
	sub_8322B2A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83237d90
	ctx.lr = 0x83212F28;
	sub_83237D90(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// addi r28,r11,-31512
	ctx.r28.s64 = ctx.r11.s64 + -31512;
	// beq cr6,0x83212fec
	if (cr6.eq) goto loc_83212FEC;
	// cmplwi cr6,r3,261
	cr6.compare<uint32_t>(ctx.r3.u32, 261, xer);
	// beq cr6,0x83212f64
	if (cr6.eq) goto loc_83212F64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x83212F4C;
	sub_83221C30(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-30972
	ctx.r4.s64 = ctx.r11.s64 + -30972;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83208330
	ctx.lr = 0x83212F60;
	sub_83208330(ctx, base);
	// b 0x83212fec
	goto loc_83212FEC;
loc_83212F64:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r10,127
	ctx.r10.s64 = 127;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,261
	ctx.r8.s64 = 261;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// oris r11,r9,512
	ctx.r11.u64 = ctx.r9.u64 | 33554432;
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// rlwinm r7,r7,0,25,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// beq cr6,0x83212fec
	if (cr6.eq) goto loc_83212FEC;
	// rlwinm r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83212fec
	if (cr6.eq) goto loc_83212FEC;
	// lhz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
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
	// bne cr6,0x83212fd4
	if (!cr6.eq) goto loc_83212FD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_83212FD4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8322ab20
	ctx.lr = 0x83212FDC;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83212fec
	if (cr6.eq) goto loc_83212FEC;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r11,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
loc_83212FEC:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lhz r5,70(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 70);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x83213014
	if (cr6.lt) goto loc_83213014;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-31140
	ctx.r4.s64 = ctx.r11.s64 + -31140;
	// bl 0x83208568
	ctx.lr = 0x83213014;
	sub_83208568(ctx, base);
loc_83213014:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83212e20
	ctx.lr = 0x8321303C;
	sub_83212E20(ctx, base);
loc_8321303C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83213044"))) PPC_WEAK_FUNC(sub_83213044);
PPC_FUNC_IMPL(__imp__sub_83213044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213048"))) PPC_WEAK_FUNC(sub_83213048);
PPC_FUNC_IMPL(__imp__sub_83213048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83213050;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83212030
	ctx.lr = 0x8321305C;
	sub_83212030(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83213148
	if (cr6.eq) goto loc_83213148;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83212ec0
	ctx.lr = 0x83213070;
	sub_83212EC0(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321308c
	if (cr6.eq) goto loc_8321308C;
	// addic. r11,r11,120
	xer.ca = ctx.r11.u32 > 4294967175;
	ctx.r11.s64 = ctx.r11.s64 + 120;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83213094
	if (!cr0.eq) goto loc_83213094;
loc_8321308C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8321309c
	goto loc_8321309C;
loc_83213094:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_8321309C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832130e4
	if (cr6.eq) goto loc_832130E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83212288
	ctx.lr = 0x832130B4;
	sub_83212288(ctx, base);
	// lwz r11,276(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83213148
	if (cr6.eq) goto loc_83213148;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// bl 0x83212128
	ctx.lr = 0x832130DC;
	sub_83212128(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832130E4:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8320dc50
	ctx.lr = 0x832130EC;
	sub_8320DC50(ctx, base);
	// lhz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83213120
	if (cr6.eq) goto loc_83213120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83213120;
	sub_83222030(ctx, base);
loc_83213120:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r9,r10,9216
	ctx.r9.u64 = ctx.r10.u64 | 603979776;
	// ori r9,r9,1024
	ctx.r9.u64 = ctx.r9.u64 | 1024;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
loc_83213148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83213150"))) PPC_WEAK_FUNC(sub_83213150);
PPC_FUNC_IMPL(__imp__sub_83213150) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	// beq cr6,0x83213188
	if (cr6.eq) goto loc_83213188;
	// bl 0x83222030
	ctx.lr = 0x83213188;
	sub_83222030(ctx, base);
loc_83213188:
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

__attribute__((alias("__imp__sub_832131B0"))) PPC_WEAK_FUNC(sub_832131B0);
PPC_FUNC_IMPL(__imp__sub_832131B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832131f8
	if (cr6.eq) goto loc_832131F8;
	// dcbt r0,r9
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x832131f8
	if (!cr6.gt) goto loc_832131F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832131D8:
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x832131d8
	if (cr6.lt) goto loc_832131D8;
loc_832131F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83213200"))) PPC_WEAK_FUNC(sub_83213200);
PPC_FUNC_IMPL(__imp__sub_83213200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8321321c
	if (!cr6.eq) goto loc_8321321C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8321321C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83213228"))) PPC_WEAK_FUNC(sub_83213228);
PPC_FUNC_IMPL(__imp__sub_83213228) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83213268
	if (!cr6.eq) goto loc_83213268;
loc_83213250:
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
loc_83213268:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8322cd48
	ctx.lr = 0x83213278;
	sub_8322CD48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83213250
	if (!cr6.eq) goto loc_83213250;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83213294
	if (cr6.eq) goto loc_83213294;
	// bl 0x8322f400
	ctx.lr = 0x83213294;
	sub_8322F400(ctx, base);
loc_83213294:
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

__attribute__((alias("__imp__sub_832132AC"))) PPC_WEAK_FUNC(sub_832132AC);
PPC_FUNC_IMPL(__imp__sub_832132AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832132B0"))) PPC_WEAK_FUNC(sub_832132B0);
PPC_FUNC_IMPL(__imp__sub_832132B0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832132fc
	if (cr6.eq) goto loc_832132FC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8322cd48
	ctx.lr = 0x832132E4;
	sub_8322CD48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832132fc
	if (!cr6.eq) goto loc_832132FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832132fc
	if (cr6.eq) goto loc_832132FC;
	// bl 0x83260cc8
	ctx.lr = 0x832132FC;
	sub_83260CC8(ctx, base);
loc_832132FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321330C"))) PPC_WEAK_FUNC(sub_8321330C);
PPC_FUNC_IMPL(__imp__sub_8321330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213310"))) PPC_WEAK_FUNC(sub_83213310);
PPC_FUNC_IMPL(__imp__sub_83213310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83213318;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r3,r11,31,22,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// bl 0x8320a108
	ctx.lr = 0x83213330;
	sub_8320A108(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831fbd90
	ctx.lr = 0x83213340;
	sub_831FBD90(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r10,-30412
	ctx.r8.s64 = ctx.r10.s64 + -30412;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r4,r9,-30448
	ctx.r4.s64 = ctx.r9.s64 + -30448;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r7,r29,31,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x3FF;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x83213368;
	sub_832085E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83213370"))) PPC_WEAK_FUNC(sub_83213370);
PPC_FUNC_IMPL(__imp__sub_83213370) {
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
	// bl 0x832260e8
	ctx.lr = 0x83213390;
	sub_832260E8(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r10,-30400
	ctx.r4.s64 = ctx.r10.s64 + -30400;
	// addi r3,r9,-30412
	ctx.r3.s64 = ctx.r9.s64 + -30412;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x832133B4;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_832133CC"))) PPC_WEAK_FUNC(sub_832133CC);
PPC_FUNC_IMPL(__imp__sub_832133CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832133D0"))) PPC_WEAK_FUNC(sub_832133D0);
PPC_FUNC_IMPL(__imp__sub_832133D0) {
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
	// li r10,12288
	ctx.r10.s64 = 12288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8321342c
	if (cr6.eq) goto loc_8321342C;
	// lhz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// bl 0x8322a890
	ctx.lr = 0x83213408;
	sub_8322A890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321342c
	if (cr6.eq) goto loc_8321342C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
loc_8321342C:
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

__attribute__((alias("__imp__sub_83213444"))) PPC_WEAK_FUNC(sub_83213444);
PPC_FUNC_IMPL(__imp__sub_83213444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213448"))) PPC_WEAK_FUNC(sub_83213448);
PPC_FUNC_IMPL(__imp__sub_83213448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r11,26,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x20000000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83213480"))) PPC_WEAK_FUNC(sub_83213480);
PPC_FUNC_IMPL(__imp__sub_83213480) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce75c
	ctx.lr = 0x83213498;
	__savefpr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_832134B4:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x832134b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832134B4;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,78(r11)
	PPC_STORE_U8(ctx.r11.u32 + 78, ctx.r30.u8);
	// stb r30,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r30.u8);
	// lbz r9,76(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 76);
	// stb r9,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// lfs f28,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f25,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f24,f28,f28
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f30,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f23,f26,f26
	ctx.f23.f64 = double(float(ctx.f26.f64 * ctx.f26.f64));
	// fadds f0,f23,f24
	ctx.f0.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f22,f25,f25
	ctx.f22.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// fmuls f21,f30,f30
	ctx.f21.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x83213510
	if (cr6.gt) goto loc_83213510;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x83213514
	goto loc_83213514;
loc_83213510:
	// fsqrts f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
loc_83213514:
	// fadds f0,f21,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f21.f64 + ctx.f22.f64));
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8321352c
	if (cr6.gt) goto loc_8321352C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x83213530
	goto loc_83213530;
loc_8321352C:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
loc_83213530:
	// fneg f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// lfs f29,25236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25236);
	ctx.f29.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// fsel f12,f30,f30,f13
	ctx.f12.f64 = ctx.f30.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// blt cr6,0x83213558
	if (cr6.lt) goto loc_83213558;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83213558:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83213588
	if (cr6.eq) goto loc_83213588;
	// fneg f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// fsel f13,f25,f25,f0
	ctx.f13.f64 = ctx.f25.f64 >= 0.0 ? ctx.f25.f64 : ctx.f0.f64;
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// blt cr6,0x8321357c
	if (cr6.lt) goto loc_8321357C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8321357C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832135b4
	if (!cr6.eq) goto loc_832135B4;
loc_83213588:
	// fneg f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x832135a4
	if (!cr6.eq) goto loc_832135A4;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x832135a4
	if (!cr6.eq) goto loc_832135A4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x832135b0
	goto loc_832135B0;
loc_832135A4:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x831d17c0
	ctx.lr = 0x832135AC;
	sub_831D17C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_832135B0:
	// fmr f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f0.f64;
loc_832135B4:
	// fneg f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// fsel f12,f28,f28,f13
	ctx.f12.f64 = ctx.f28.f64 >= 0.0 ? ctx.f28.f64 : ctx.f13.f64;
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// blt cr6,0x832135d0
	if (cr6.lt) goto loc_832135D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832135D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83213600
	if (cr6.eq) goto loc_83213600;
	// fneg f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// fsel f12,f26,f26,f13
	ctx.f12.f64 = ctx.f26.f64 >= 0.0 ? ctx.f26.f64 : ctx.f13.f64;
	// fcmpu cr6,f12,f29
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// blt cr6,0x832135f4
	if (cr6.lt) goto loc_832135F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832135F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83213628
	if (!cr6.eq) goto loc_83213628;
loc_83213600:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bne cr6,0x83213618
	if (!cr6.eq) goto loc_83213618;
	// fcmpu cr6,f26,f31
	cr6.compare(ctx.f26.f64, ctx.f31.f64);
	// bne cr6,0x83213618
	if (!cr6.eq) goto loc_83213618;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x83213628
	goto loc_83213628;
loc_83213618:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x831d17c0
	ctx.lr = 0x83213624;
	sub_831D17C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_83213628:
	// fmuls f13,f21,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f21.f64 * ctx.f24.f64));
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// fmuls f12,f22,f23
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f23.f64));
	// fsubs f11,f27,f0
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// stfs f11,260(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x832136a4
	if (cr6.lt) goto loc_832136A4;
	// fmuls f13,f30,f28
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x832136bc
	if (!cr6.lt) goto loc_832136BC;
	// fcmpu cr6,f28,f31
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bge cr6,0x832136b0
	if (!cr6.lt) goto loc_832136B0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// lfs f13,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x83213690
	if (!cr6.lt) goto loc_83213690;
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f11,260(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// b 0x832136bc
	goto loc_832136BC;
loc_83213690:
	// fadds f11,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,260(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// b 0x832136bc
	goto loc_832136BC;
loc_832136A4:
	// fmuls f0,f25,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f26.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x832136bc
	if (!cr6.gt) goto loc_832136BC;
loc_832136B0:
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,244(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
loc_832136BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7a8
	ctx.lr = 0x832136C8;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832136DC"))) PPC_WEAK_FUNC(sub_832136DC);
PPC_FUNC_IMPL(__imp__sub_832136DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832136E0"))) PPC_WEAK_FUNC(sub_832136E0);
PPC_FUNC_IMPL(__imp__sub_832136E0) {
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
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x831fe158
	ctx.lr = 0x832136FC;
	sub_831FE158(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f13,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,244(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
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

__attribute__((alias("__imp__sub_83213740"))) PPC_WEAK_FUNC(sub_83213740);
PPC_FUNC_IMPL(__imp__sub_83213740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lfs f6,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// b 0x831fc768
	sub_831FC768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83213764"))) PPC_WEAK_FUNC(sub_83213764);
PPC_FUNC_IMPL(__imp__sub_83213764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213768"))) PPC_WEAK_FUNC(sub_83213768);
PPC_FUNC_IMPL(__imp__sub_83213768) {
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
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x831fbe28
	ctx.lr = 0x83213784;
	sub_831FBE28(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832137A4"))) PPC_WEAK_FUNC(sub_832137A4);
PPC_FUNC_IMPL(__imp__sub_832137A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832137A8"))) PPC_WEAK_FUNC(sub_832137A8);
PPC_FUNC_IMPL(__imp__sub_832137A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r9,r11,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// b 0x83202120
	sub_83202120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832137D4"))) PPC_WEAK_FUNC(sub_832137D4);
PPC_FUNC_IMPL(__imp__sub_832137D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832137D8"))) PPC_WEAK_FUNC(sub_832137D8);
PPC_FUNC_IMPL(__imp__sub_832137D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832137F0"))) PPC_WEAK_FUNC(sub_832137F0);
PPC_FUNC_IMPL(__imp__sub_832137F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83213834
	if (cr6.eq) goto loc_83213834;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83213834
	if (!cr6.eq) goto loc_83213834;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x83202120
	ctx.lr = 0x83213834;
	sub_83202120(ctx, base);
loc_83213834:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83213848:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83213848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83213848;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,78(r11)
	PPC_STORE_U8(ctx.r11.u32 + 78, ctx.r10.u8);
	// stb r10,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r10.u8);
	// stb r9,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 262144;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8321388C"))) PPC_WEAK_FUNC(sub_8321388C);
PPC_FUNC_IMPL(__imp__sub_8321388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213890"))) PPC_WEAK_FUNC(sub_83213890);
PPC_FUNC_IMPL(__imp__sub_83213890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83213898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832138dc
	if (!cr6.eq) goto loc_832138DC;
	// bl 0x8326dd68
	ctx.lr = 0x832138B0;
	sub_8326DD68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8326dd30
	ctx.lr = 0x832138B8;
	sub_8326DD30(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831fe1d8
	ctx.lr = 0x832138C4;
	sub_831FE1D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c600
	ctx.lr = 0x832138D8;
	sub_8322C600(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_832138DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832138E4"))) PPC_WEAK_FUNC(sub_832138E4);
PPC_FUNC_IMPL(__imp__sub_832138E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832138E8"))) PPC_WEAK_FUNC(sub_832138E8);
PPC_FUNC_IMPL(__imp__sub_832138E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832138F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83213934
	if (!cr6.eq) goto loc_83213934;
	// bl 0x8326dd68
	ctx.lr = 0x8321390C;
	sub_8326DD68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8326dd30
	ctx.lr = 0x83213914;
	sub_8326DD30(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831fe1d8
	ctx.lr = 0x83213920;
	sub_831FE1D8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c600
	ctx.lr = 0x83213934;
	sub_8322C600(ctx, base);
loc_83213934:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x83213968
	if (cr6.eq) goto loc_83213968;
loc_83213940:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83213974
	if (cr6.eq) goto loc_83213974;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bgt cr6,0x83213974
	if (cr6.gt) goto loc_83213974;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bne cr6,0x83213940
	if (!cr6.eq) goto loc_83213940;
loc_83213968:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83213974:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83209aa8
	ctx.lr = 0x8321397C;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831fe1d8
	ctx.lr = 0x83213984;
	sub_831FE1D8(ctx, base);
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// beq cr6,0x832139a8
	if (cr6.eq) goto loc_832139A8;
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
loc_832139A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832139B4"))) PPC_WEAK_FUNC(sub_832139B4);
PPC_FUNC_IMPL(__imp__sub_832139B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832139B8"))) PPC_WEAK_FUNC(sub_832139B8);
PPC_FUNC_IMPL(__imp__sub_832139B8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832139e8
	if (cr6.eq) goto loc_832139E8;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x8322b7d0
	ctx.lr = 0x832139E0;
	sub_8322B7D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_832139E8:
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

__attribute__((alias("__imp__sub_832139FC"))) PPC_WEAK_FUNC(sub_832139FC);
PPC_FUNC_IMPL(__imp__sub_832139FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213A00"))) PPC_WEAK_FUNC(sub_83213A00);
PPC_FUNC_IMPL(__imp__sub_83213A00) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83213a2c
	if (!cr6.eq) goto loc_83213A2C;
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
loc_83213A2C:
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x832131b0
	ctx.lr = 0x83213A34;
	sub_832131B0(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83213A48"))) PPC_WEAK_FUNC(sub_83213A48);
PPC_FUNC_IMPL(__imp__sub_83213A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83213A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83213a90
	if (!cr6.eq) goto loc_83213A90;
	// bl 0x8326dd68
	ctx.lr = 0x83213A68;
	sub_8326DD68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8326dd30
	ctx.lr = 0x83213A70;
	sub_8326DD30(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831fe1d8
	ctx.lr = 0x83213A7C;
	sub_831FE1D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c600
	ctx.lr = 0x83213A90;
	sub_8322C600(ctx, base);
loc_83213A90:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// bl 0x83201380
	ctx.lr = 0x83213A9C;
	sub_83201380(ctx, base);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// bl 0x831feaa0
	ctx.lr = 0x83213AD4;
	sub_831FEAA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83213ADC"))) PPC_WEAK_FUNC(sub_83213ADC);
PPC_FUNC_IMPL(__imp__sub_83213ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213AE0"))) PPC_WEAK_FUNC(sub_83213AE0);
PPC_FUNC_IMPL(__imp__sub_83213AE0) {
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
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83213b48
	if (cr6.eq) goto loc_83213B48;
	// dcbt r0,r8
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83213b48
	if (!cr6.gt) goto loc_83213B48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83213B20:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r7,5(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r7,48
	cr6.compare<uint32_t>(ctx.r7.u32, 48, xer);
	// beq cr6,0x83213b54
	if (cr6.eq) goto loc_83213B54;
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x83213b20
	if (cr6.lt) goto loc_83213B20;
loc_83213B48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x83213bb8
	goto loc_83213BB8;
loc_83213B54:
	// li r4,57
	ctx.r4.s64 = 57;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x83221378
	ctx.lr = 0x83213B60;
	sub_83221378(ctx, base);
	// bl 0x8326dd30
	ctx.lr = 0x83213B64;
	sub_8326DD30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83213bb8
	if (cr6.eq) goto loc_83213BB8;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83201380
	ctx.lr = 0x83213B80;
	sub_83201380(ctx, base);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// bl 0x831fe358
	ctx.lr = 0x83213BB8;
	sub_831FE358(ctx, base);
loc_83213BB8:
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

__attribute__((alias("__imp__sub_83213BD0"))) PPC_WEAK_FUNC(sub_83213BD0);
PPC_FUNC_IMPL(__imp__sub_83213BD0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83213c64
	if (cr6.eq) goto loc_83213C64;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83213c14
	if (!cr6.eq) goto loc_83213C14;
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x8322b7d0
	ctx.lr = 0x83213C04;
	sub_8322B7D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83213C14:
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lhz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// bl 0x8322c388
	ctx.lr = 0x83213C2C;
	sub_8322C388(ctx, base);
	// lis r8,-31748
	ctx.r8.s64 = -2080636928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24688
	ctx.r7.s64 = ctx.r8.s64 + 24688;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83213c48
	if (cr6.eq) goto loc_83213C48;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_83213C48:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83213c64
	if (!cr6.eq) goto loc_83213C64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83213c64
	if (cr6.eq) goto loc_83213C64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_83213C64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83213C74"))) PPC_WEAK_FUNC(sub_83213C74);
PPC_FUNC_IMPL(__imp__sub_83213C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213C78"))) PPC_WEAK_FUNC(sub_83213C78);
PPC_FUNC_IMPL(__imp__sub_83213C78) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83213d14
	if (cr6.eq) goto loc_83213D14;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83213cbc
	if (!cr6.eq) goto loc_83213CBC;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r30,20(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x83213cc0
	goto loc_83213CC0;
loc_83213CBC:
	// lwz r30,268(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
loc_83213CC0:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x83213cd4
	if (cr6.eq) goto loc_83213CD4;
	// bl 0x83206068
	ctx.lr = 0x83213CD0;
	sub_83206068(ctx, base);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
loc_83213CD4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x83213d0c
	if (cr6.eq) goto loc_83213D0C;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83213d0c
	if (cr6.eq) goto loc_83213D0C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r11,26,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x20000000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_83213D0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83213D14:
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

__attribute__((alias("__imp__sub_83213D2C"))) PPC_WEAK_FUNC(sub_83213D2C);
PPC_FUNC_IMPL(__imp__sub_83213D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213D30"))) PPC_WEAK_FUNC(sub_83213D30);
PPC_FUNC_IMPL(__imp__sub_83213D30) {
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
	// beq cr6,0x83213d70
	if (cr6.eq) goto loc_83213D70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,31,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// cmplwi cr6,r11,121
	cr6.compare<uint32_t>(ctx.r11.u32, 121, xer);
	// beq cr6,0x83213d84
	if (cr6.eq) goto loc_83213D84;
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(ctx.r11.u32, 123, xer);
	// beq cr6,0x83213d70
	if (cr6.eq) goto loc_83213D70;
	// cmplwi cr6,r11,126
	cr6.compare<uint32_t>(ctx.r11.u32, 126, xer);
	// beq cr6,0x83213d70
	if (cr6.eq) goto loc_83213D70;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x83213310
	ctx.lr = 0x83213D70;
	sub_83213310(ctx, base);
loc_83213D70:
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
loc_83213D84:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83213D9C"))) PPC_WEAK_FUNC(sub_83213D9C);
PPC_FUNC_IMPL(__imp__sub_83213D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213DA0"))) PPC_WEAK_FUNC(sub_83213DA0);
PPC_FUNC_IMPL(__imp__sub_83213DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83213dcc
	if (cr6.eq) goto loc_83213DCC;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83213dc4
	if (!cr6.eq) goto loc_83213DC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83213DC4:
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// blr 
	return;
loc_83213DCC:
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x83213d30
	sub_83213D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83213DD4"))) PPC_WEAK_FUNC(sub_83213DD4);
PPC_FUNC_IMPL(__imp__sub_83213DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213DD8"))) PPC_WEAK_FUNC(sub_83213DD8);
PPC_FUNC_IMPL(__imp__sub_83213DD8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83213e08
	if (cr6.eq) goto loc_83213E08;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83213e18
	if (cr6.eq) goto loc_83213E18;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// b 0x83213e10
	goto loc_83213E10;
loc_83213E08:
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x83213d30
	ctx.lr = 0x83213E10;
	sub_83213D30(ctx, base);
loc_83213E10:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83213e2c
	if (!cr6.eq) goto loc_83213E2C;
loc_83213E18:
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
loc_83213E2C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83213E44"))) PPC_WEAK_FUNC(sub_83213E44);
PPC_FUNC_IMPL(__imp__sub_83213E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213E48"))) PPC_WEAK_FUNC(sub_83213E48);
PPC_FUNC_IMPL(__imp__sub_83213E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83213e54
	if (!cr6.eq) goto loc_83213E54;
	// blr 
	return;
loc_83213E54:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83213E60:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r10,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83213e60
	if (!cr6.eq) goto loc_83213E60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83213E84"))) PPC_WEAK_FUNC(sub_83213E84);
PPC_FUNC_IMPL(__imp__sub_83213E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83213E88"))) PPC_WEAK_FUNC(sub_83213E88);
PPC_FUNC_IMPL(__imp__sub_83213E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83213E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83213ef4
	if (cr6.eq) goto loc_83213EF4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83213f44
	if (cr6.eq) goto loc_83213F44;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83213EB4:
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83213f0c
	if (!cr6.eq) goto loc_83213F0C;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83213ee8
	if (!cr6.eq) goto loc_83213EE8;
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83213ef4
	if (!cr6.eq) goto loc_83213EF4;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83213f04
	if (!cr6.eq) goto loc_83213F04;
loc_83213EE8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83213eb4
	if (!cr6.eq) goto loc_83213EB4;
loc_83213EF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83213150
	ctx.lr = 0x83213EFC;
	sub_83213150(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83213F04:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83213f20
	if (cr6.eq) goto loc_83213F20;
loc_83213F0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x83237b90
	ctx.lr = 0x83213F18;
	sub_83237B90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83213F20:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83213fb8
	if (cr6.eq) goto loc_83213FB8;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83237b90
	ctx.lr = 0x83213F3C;
	sub_83237B90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83213F44:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83213f7c
	if (cr6.eq) goto loc_83213F7C;
loc_83213F58:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r10,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83213f7c
	if (!cr6.eq) goto loc_83213F7C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83213f58
	if (!cr6.eq) goto loc_83213F58;
loc_83213F7C:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
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
	// beq cr6,0x83213fa8
	if (cr6.eq) goto loc_83213FA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x83213FA8;
	sub_83222030(ctx, base);
loc_83213FA8:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r30,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r30.u16);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_83213FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83213FC0"))) PPC_WEAK_FUNC(sub_83213FC0);
PPC_FUNC_IMPL(__imp__sub_83213FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83213FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83214020
	if (cr6.eq) goto loc_83214020;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
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
	// beq cr6,0x83214008
	if (cr6.eq) goto loc_83214008;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83222030
	ctx.lr = 0x83214008;
	sub_83222030(ctx, base);
loc_83214008:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83214020:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214064
	if (cr6.eq) goto loc_83214064;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214050
	if (cr6.eq) goto loc_83214050;
	// bl 0x83213150
	ctx.lr = 0x83214048;
	sub_83213150(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83214050:
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83237b90
	ctx.lr = 0x8321405C;
	sub_83237B90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83214064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8321406C;
	sub_83222030(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83214074"))) PPC_WEAK_FUNC(sub_83214074);
PPC_FUNC_IMPL(__imp__sub_83214074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83214078"))) PPC_WEAK_FUNC(sub_83214078);
PPC_FUNC_IMPL(__imp__sub_83214078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832140a4
	if (cr6.eq) goto loc_832140A4;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832140a4
	if (cr6.eq) goto loc_832140A4;
loc_8321408C:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8321408c
	if (!cr6.eq) goto loc_8321408C;
loc_832140A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832140AC"))) PPC_WEAK_FUNC(sub_832140AC);
PPC_FUNC_IMPL(__imp__sub_832140AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832140B0"))) PPC_WEAK_FUNC(sub_832140B0);
PPC_FUNC_IMPL(__imp__sub_832140B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832140ec
	if (!cr6.eq) goto loc_832140EC;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832140ec
	if (!cr6.eq) goto loc_832140EC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// b 0x832140f4
	goto loc_832140F4;
loc_832140EC:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_832140F4:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214108
	if (cr6.eq) goto loc_83214108;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_83214108:
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321413c
	if (cr6.eq) goto loc_8321413C;
loc_83214114:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bge cr6,0x83214138
	if (!cr6.lt) goto loc_83214138;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8321413c
	if (cr6.eq) goto loc_8321413C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x83214114
	if (!cr6.eq) goto loc_83214114;
	// b 0x8321413c
	goto loc_8321413C;
loc_83214138:
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
loc_8321413C:
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83214158
	if (!cr6.eq) goto loc_83214158;
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r3,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r3.u32);
	// b 0x83214164
	goto loc_83214164;
loc_83214158:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
loc_83214164:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83214178"))) PPC_WEAK_FUNC(sub_83214178);
PPC_FUNC_IMPL(__imp__sub_83214178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83214188:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832141bc
	if (!cr6.eq) goto loc_832141BC;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,12288
	cr6.compare<int32_t>(ctx.r11.s32, 12288, xer);
	// beq cr6,0x832141bc
	if (cr6.eq) goto loc_832141BC;
	// cmpwi cr6,r11,12289
	cr6.compare<int32_t>(ctx.r11.s32, 12289, xer);
	// beq cr6,0x832141bc
	if (cr6.eq) goto loc_832141BC;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x832141bc
	if (cr6.lt) goto loc_832141BC;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_832141BC:
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83214188
	if (!cr6.eq) goto loc_83214188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832141CC"))) PPC_WEAK_FUNC(sub_832141CC);
PPC_FUNC_IMPL(__imp__sub_832141CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832141D0"))) PPC_WEAK_FUNC(sub_832141D0);
PPC_FUNC_IMPL(__imp__sub_832141D0) {
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
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83214220
	if (cr6.eq) goto loc_83214220;
loc_832141F4:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r9,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r9.u16);
	// beq cr6,0x83214214
	if (cr6.eq) goto loc_83214214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832141d0
	ctx.lr = 0x83214214;
	sub_832141D0(ctx, base);
loc_83214214:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832141f4
	if (!cr6.eq) goto loc_832141F4;
loc_83214220:
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

__attribute__((alias("__imp__sub_83214238"))) PPC_WEAK_FUNC(sub_83214238);
PPC_FUNC_IMPL(__imp__sub_83214238) {
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
	// lbz r11,78(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 78);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83214294
	if (!cr6.gt) goto loc_83214294;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// stb r9,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, ctx.r9.u8);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832142a4
	if (cr6.eq) goto loc_832142A4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
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
loc_83214294:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b580
	ctx.lr = 0x8321429C;
	sub_8320B580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x832142A4;
	sub_832356E0(ctx, base);
loc_832142A4:
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

__attribute__((alias("__imp__sub_832142B8"))) PPC_WEAK_FUNC(sub_832142B8);
PPC_FUNC_IMPL(__imp__sub_832142B8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83214348
	if (!cr6.eq) goto loc_83214348;
	// bl 0x83201cf0
	ctx.lr = 0x832142E0;
	sub_83201CF0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// ori r9,r11,12
	ctx.r9.u64 = ctx.r11.u64 | 12;
	// ori r8,r10,1024
	ctx.r8.u64 = ctx.r10.u64 | 1024;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r8.u16);
	// bl 0x8322b0b8
	ctx.lr = 0x83214304;
	sub_8322B0B8(ctx, base);
	// lis r7,-31748
	ctx.r7.s64 = -2080636928;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r7,24688
	ctx.r5.s64 = ctx.r7.s64 + 24688;
	// stb r6,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r6.u8);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214328
	if (cr6.eq) goto loc_83214328;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
loc_83214328:
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83214348
	if (cr6.eq) goto loc_83214348;
loc_83214334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832142b8
	ctx.lr = 0x8321433C;
	sub_832142B8(ctx, base);
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83214334
	if (!cr6.eq) goto loc_83214334;
loc_83214348:
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

__attribute__((alias("__imp__sub_8321435C"))) PPC_WEAK_FUNC(sub_8321435C);
PPC_FUNC_IMPL(__imp__sub_8321435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83214360"))) PPC_WEAK_FUNC(sub_83214360);
PPC_FUNC_IMPL(__imp__sub_83214360) {
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
	// li r4,12288
	ctx.r4.s64 = 12288;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x832140b0
	ctx.lr = 0x83214378;
	sub_832140B0(ctx, base);
	// bl 0x832142b8
	ctx.lr = 0x8321437C;
	sub_832142B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8321438C"))) PPC_WEAK_FUNC(sub_8321438C);
PPC_FUNC_IMPL(__imp__sub_8321438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83214390"))) PPC_WEAK_FUNC(sub_83214390);
PPC_FUNC_IMPL(__imp__sub_83214390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83214398;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832143bc
	if (cr6.eq) goto loc_832143BC;
	// li r10,12288
	ctx.r10.s64 = 12288;
loc_832143AC:
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832143ac
	if (!cr6.eq) goto loc_832143AC;
loc_832143BC:
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83214454
	if (cr6.eq) goto loc_83214454;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
loc_832143D8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83214448
	if (!cr6.eq) goto loc_83214448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201cf0
	ctx.lr = 0x832143F0;
	sub_83201CF0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// ori r9,r11,12
	ctx.r9.u64 = ctx.r11.u64 | 12;
	// ori r8,r10,1024
	ctx.r8.u64 = ctx.r10.u64 | 1024;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r8.u16);
	// bl 0x8322b0b8
	ctx.lr = 0x83214414;
	sub_8322B0B8(ctx, base);
	// stb r28,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r28.u8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214428
	if (cr6.eq) goto loc_83214428;
	// stb r27,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r27.u8);
loc_83214428:
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83214448
	if (cr6.eq) goto loc_83214448;
loc_83214434:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832142b8
	ctx.lr = 0x8321443C;
	sub_832142B8(ctx, base);
	// lwz r30,64(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83214434
	if (!cr6.eq) goto loc_83214434;
loc_83214448:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832143d8
	if (!cr6.eq) goto loc_832143D8;
loc_83214454:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321445C"))) PPC_WEAK_FUNC(sub_8321445C);
PPC_FUNC_IMPL(__imp__sub_8321445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83214460"))) PPC_WEAK_FUNC(sub_83214460);
PPC_FUNC_IMPL(__imp__sub_83214460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83214468;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832144a0
	if (cr6.eq) goto loc_832144A0;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832146a4
	if (cr6.eq) goto loc_832146A4;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// b 0x832144a8
	goto loc_832144A8;
loc_832144A0:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x83213d30
	ctx.lr = 0x832144A8;
	sub_83213D30(ctx, base);
loc_832144A8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832146a4
	if (cr6.eq) goto loc_832146A4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832146a4
	if (!cr6.gt) goto loc_832146A4;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r11,r8,12
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFF;
	// rlwinm r9,r8,1,11,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFFE;
	// rlwinm r27,r8,12,20,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x83214650
	if (!cr6.gt) goto loc_83214650;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// ori r23,r8,65535
	ctx.r23.u64 = ctx.r8.u64 | 65535;
	// addi r25,r9,-30448
	ctx.r25.s64 = ctx.r9.s64 + -30448;
	// addi r24,r10,-22544
	ctx.r24.s64 = ctx.r10.s64 + -22544;
	// addi r28,r11,-30412
	ctx.r28.s64 = ctx.r11.s64 + -30412;
loc_83214518:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r3,r11,31,22,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// addi r11,r3,-120
	ctx.r11.s64 = ctx.r3.s64 + -120;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x83214610
	if (cr6.gt) goto loc_83214610;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17732
	ctx.r12.s64 = ctx.r12.s64 + 17732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83214640;
	case 1:
		goto loc_83214640;
	case 2:
		goto loc_832145E8;
	case 3:
		goto loc_83214640;
	case 4:
		goto loc_83214640;
	case 5:
		goto loc_83214640;
	case 6:
		goto loc_83214640;
	case 7:
		goto loc_8321458C;
	case 8:
		goto loc_832145CC;
	case 9:
		goto loc_83214610;
	case 10:
		goto loc_83214640;
	case 11:
		goto loc_83214640;
	case 12:
		goto loc_83214640;
	case 13:
		goto loc_83214640;
	case 14:
		goto loc_83214610;
	case 15:
		goto loc_83214610;
	case 16:
		goto loc_832145BC;
	case 17:
		goto loc_83214640;
	default:
		return;
	}
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17896(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17896);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17804);
	// lwz r25,17868(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17868);
	// lwz r25,17936(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17936);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r25,17936(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17936);
	// lwz r25,17936(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17936);
	// lwz r25,17852(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17852);
	// lwz r25,17984(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
loc_8321458C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmpw cr6,r6,r23
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r23.s32, xer);
	// beq cr6,0x832146ac
	if (cr6.eq) goto loc_832146AC;
	// cmpw cr6,r6,r21
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r21.s32, xer);
	// ble cr6,0x83214640
	if (!cr6.gt) goto loc_83214640;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83287630
	ctx.lr = 0x832145B8;
	sub_83287630(ctx, base);
	// b 0x83214640
	goto loc_83214640;
loc_832145BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83288638
	ctx.lr = 0x832145C8;
	sub_83288638(ctx, base);
	// b 0x83214640
	goto loc_83214640;
loc_832145CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// bl 0x83288798
	ctx.lr = 0x832145E4;
	sub_83288798(ctx, base);
	// b 0x83214640
	goto loc_83214640;
loc_832145E8:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214640
	if (cr6.eq) goto loc_83214640;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,268(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320df08
	ctx.lr = 0x8321460C;
	sub_8320DF08(ctx, base);
	// b 0x83214640
	goto loc_83214640;
loc_83214610:
	// bl 0x8320a108
	ctx.lr = 0x83214614;
	sub_8320A108(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r19,0(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831fbd90
	ctx.lr = 0x83214624;
	sub_831FBD90(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r7,r19,31,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 31) & 0x3FF;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// bl 0x832085e8
	ctx.lr = 0x83214640;
	sub_832085E8(ctx, base);
loc_83214640:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// blt cr6,0x83214518
	if (cr6.lt) goto loc_83214518;
loc_83214650:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832146a4
	if (cr6.eq) goto loc_832146A4;
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214684
	if (cr6.eq) goto loc_83214684;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// bl 0x83212128
	ctx.lr = 0x83214684;
	sub_83212128(ctx, base);
loc_83214684:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832146a4
	if (cr6.eq) goto loc_832146A4;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832146a4
	if (cr6.eq) goto loc_832146A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83284df0
	ctx.lr = 0x832146A4;
	sub_83284DF0(ctx, base);
loc_832146A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_832146AC:
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r4,r10,-30344
	ctx.r4.s64 = ctx.r10.s64 + -30344;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x83208568
	ctx.lr = 0x832146C8;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_832146C8"))) PPC_WEAK_FUNC(sub_832146C8);
PPC_FUNC_IMPL(__imp__sub_832146C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832146f4
	if (cr6.eq) goto loc_832146F4;
	// lhz r11,86(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 86);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x832146f4
	if (cr6.eq) goto loc_832146F4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x832146f0
	if (!cr6.eq) goto loc_832146F0;
	// lhz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,228(r3)
	PPC_STORE_U16(ctx.r3.u32 + 228, ctx.r11.u16);
loc_832146F0:
	// sth r4,86(r3)
	PPC_STORE_U16(ctx.r3.u32 + 86, ctx.r4.u16);
loc_832146F4:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x83214460
	sub_83214460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83214700"))) PPC_WEAK_FUNC(sub_83214700);
PPC_FUNC_IMPL(__imp__sub_83214700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lhz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 88);
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x1)));
	// li r7,16
	ctx.r7.s64 = 16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// li r8,32
	ctx.r8.s64 = 32;
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// li r9,48
	ctx.r9.s64 = 48;
	// vor128 v60,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// vor128 v59,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vor128 v58,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v61,8,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 228), 8));
	// vrlimi128 v60,v61,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 228), 4));
	// vrlimi128 v59,v61,2,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 228), 2));
	// vrlimi128 v58,v61,1,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 228), 1));
	// vcsxwfp128 v63,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v13,v60,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vcsxwfp128 v12,v59,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vcsxwfp128 v0,v58,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// ble cr6,0x832148b0
	if (!cr6.gt) goto loc_832148B0;
	// lbz r10,172(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 172);
	// addi r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 + 96;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83214774
	if (!cr6.eq) goto loc_83214774;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83214774:
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// li r6,64
	ctx.r6.s64 = 64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832147c0
	if (cr6.eq) goto loc_832147C0;
	// vcsxwfp128 v57,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vspltisw128 v56,-1
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v55,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v54,v56,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vrlimi128 v55,v57,1,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vmulfp128 v53,v55,v54
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vrlimi128 v53,v57,1,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// vspltw128 v8,v53,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xAA));
	// vspltw128 v10,v53,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0x55));
	// vspltw128 v11,v53,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0x0));
	// vmulfp128 v9,v63,v52
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmaddfp v9,v13,v8,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v12,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v0,v11,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v10.f32)));
loc_832147C0:
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832148b0
	if (cr6.eq) goto loc_832148B0;
	// vspltisw128 v51,-1
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// vcsxwfp128 v50,v51,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v50.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vsldoi128 v26,v50,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
loc_832147D8:
	// lhz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 88);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// ble cr6,0x832148b0
	if (!cr6.gt) goto loc_832148B0;
	// lbz r4,173(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 173);
	// addi r11,r10,96
	ctx.r11.s64 = ctx.r10.s64 + 96;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83214808
	if (cr6.eq) goto loc_83214808;
	// vcsxwfp128 v49,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// lvx128 v48,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v48,v49,1,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 228), 1));
	// vmaddfp128 v0,v48,v26,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v26.f32)), simde_mm_load_ps(ctx.v0.f32)));
loc_83214808:
	// lbz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832148a4
	if (!cr6.eq) goto loc_832148A4;
	// vspltw128 v47,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v46,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v45,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v11,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v44,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v10,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v43,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v9,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v27,v46,v47
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v27.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vspltw128 v28,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v29,v46,v45
	simde_mm_store_ps(ctx.v29.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vspltw v30,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vmulfp128 v31,v46,v44
	simde_mm_store_ps(ctx.v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vspltw v1,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v2,v46,v43
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vspltw v3,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v4,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw v5,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// vspltw v6,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vspltw v7,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw128 v63,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vspltw v12,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// vspltw v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vmaddfp v28,v11,v28,v27
	simde_mm_store_ps(ctx.v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vmaddfp v30,v11,v30,v29
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vmaddfp v1,v11,v1,v31
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v11,v11,v3,v2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v4,v10,v4,v28
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v28.f32)));
	// vmaddfp v5,v10,v5,v30
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v6,v10,v6,v1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v11,v10,v7,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v63,v9,v63,v4
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v13,v9,v13,v5
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v12,v9,v12,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v0,v9,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
loc_832148A4:
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832147d8
	if (!cr6.eq) goto loc_832147D8;
loc_832148B0:
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832148C4"))) PPC_WEAK_FUNC(sub_832148C4);
PPC_FUNC_IMPL(__imp__sub_832148C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832148C8"))) PPC_WEAK_FUNC(sub_832148C8);
PPC_FUNC_IMPL(__imp__sub_832148C8) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83214700
	ctx.lr = 0x832148E4;
	sub_83214700(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83200c10
	ctx.lr = 0x832148EC;
	sub_83200C10(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83210238
	ctx.lr = 0x832148FC;
	sub_83210238(ctx, base);
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

__attribute__((alias("__imp__sub_83214910"))) PPC_WEAK_FUNC(sub_83214910);
PPC_FUNC_IMPL(__imp__sub_83214910) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 + 96;
	// lbz r11,77(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 77);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214978
	if (cr6.eq) goto loc_83214978;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x832102f8
	ctx.lr = 0x83214968;
	sub_832102F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83214978:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83214988:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83214988
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83214988;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832149A4"))) PPC_WEAK_FUNC(sub_832149A4);
PPC_FUNC_IMPL(__imp__sub_832149A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832149A8"))) PPC_WEAK_FUNC(sub_832149A8);
PPC_FUNC_IMPL(__imp__sub_832149A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832149B4:
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r8,r11,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832149e8
	if (!cr6.eq) goto loc_832149E8;
	// lhz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 88);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x832149f8
	if (!cr6.gt) goto loc_832149F8;
	// lwz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832149b4
	if (!cr6.eq) goto loc_832149B4;
	// b 0x832149f8
	goto loc_832149F8;
loc_832149E8:
	// addi r11,r4,176
	ctx.r11.s64 = ctx.r4.s64 + 176;
	// li r10,1
	ctx.r10.s64 = 1;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_832149F8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83214a08
	if (!cr6.eq) goto loc_83214A08;
	// b 0x831fbe28
	sub_831FBE28(ctx, base);
	return;
loc_83214A08:
	// lhz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 88);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83214a64
	if (!cr6.gt) goto loc_83214A64;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214a64
	if (cr6.eq) goto loc_83214A64;
loc_83214A24:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r10,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83214a48
	if (cr6.eq) goto loc_83214A48;
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// lvx128 v12,r10,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
loc_83214A48:
	// lhz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 88);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83214a64
	if (!cr6.gt) goto loc_83214A64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83214a24
	if (!cr6.eq) goto loc_83214A24;
loc_83214A64:
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83214A70"))) PPC_WEAK_FUNC(sub_83214A70);
PPC_FUNC_IMPL(__imp__sub_83214A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83214A78;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,272(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83214bd4
	if (cr6.eq) goto loc_83214BD4;
	// cmplwi cr6,r4,35
	cr6.compare<uint32_t>(ctx.r4.u32, 35, xer);
	// bge cr6,0x83214bd4
	if (!cr6.lt) goto loc_83214BD4;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r30,r10,-30928
	ctx.r30.s64 = ctx.r10.s64 + -30928;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r29,r30
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83214bd4
	if (cr6.eq) goto loc_83214BD4;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83214ad4
	if (!cr6.eq) goto loc_83214AD4;
	// lwz r27,268(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// b 0x83214ad8
	goto loc_83214AD8;
loc_83214AD4:
	// lwz r27,268(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
loc_83214AD8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214bd4
	if (cr6.eq) goto loc_83214BD4;
	// lhz r11,10(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 10);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r23,12
	ctx.r31.s64 = ctx.r23.s64 + 12;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214bd4
	if (cr6.eq) goto loc_83214BD4;
	// lis r21,2
	ctx.r21.s64 = 131072;
loc_83214B04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214bc0
	if (cr6.eq) goto loc_83214BC0;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bne cr6,0x83214b44
	if (!cr6.eq) goto loc_83214B44;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// bne cr6,0x83214bc0
	if (!cr6.eq) goto loc_83214BC0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83237868
	ctx.lr = 0x83214B30;
	sub_83237868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83214bc0
	if (!cr6.eq) goto loc_83214BC0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x832378f8
	ctx.lr = 0x83214B44;
	sub_832378F8(ctx, base);
loc_83214B44:
	// addi r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 7;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lbzx r8,r29,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x83214b90
	if (cr6.eq) goto loc_83214B90;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r26,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r26.u8);
	// lhzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x832100d0
	ctx.lr = 0x83214B8C;
	sub_832100D0(ctx, base);
	// b 0x83214bc0
	goto loc_83214BC0;
loc_83214B90:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8320de88
	ctx.lr = 0x83214BA0;
	sub_8320DE88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83214bc0
	if (cr6.eq) goto loc_83214BC0;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// oris r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 67108864;
	// lhzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// sth r8,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r8.u16);
loc_83214BC0:
	// lhz r11,10(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 10);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// blt cr6,0x83214b04
	if (cr6.lt) goto loc_83214B04;
loc_83214BD4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83214BDC"))) PPC_WEAK_FUNC(sub_83214BDC);
PPC_FUNC_IMPL(__imp__sub_83214BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83214BE0"))) PPC_WEAK_FUNC(sub_83214BE0);
PPC_FUNC_IMPL(__imp__sub_83214BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83214BE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 82);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83214c1c
	if (cr6.eq) goto loc_83214C1C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214c1c
	if (cr6.eq) goto loc_83214C1C;
	// bl 0x83237a08
	ctx.lr = 0x83214C1C;
	sub_83237A08(ctx, base);
loc_83214C1C:
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83214d70
	if (cr6.eq) goto loc_83214D70;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// addi r29,r11,-30412
	ctx.r29.s64 = ctx.r11.s64 + -30412;
	// addi r28,r10,-30400
	ctx.r28.s64 = ctx.r10.s64 + -30400;
	// addi r30,r9,-22544
	ctx.r30.s64 = ctx.r9.s64 + -22544;
loc_83214C40:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83214d64
	if (!cr6.eq) goto loc_83214D64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83214ce0
	if (!cr6.eq) goto loc_83214CE0;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,-122
	ctx.r11.s64 = ctx.r11.s64 + -122;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83214cb0
	if (cr6.gt) goto loc_83214CB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83214ca4
	if (cr6.eq) goto loc_83214CA4;
	// bdz 0x83214c98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83214C98;
	// bdz 0x83214cb0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83214CB0;
	// bdz 0x83214cb0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83214CB0;
	// bdz 0x83214ca4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83214CA4;
	// bdz 0x83214ca4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83214CA4;
	// bdz 0x83214ca4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83214CA4;
	// bdz 0x83214d64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83214D64;
	// b 0x83214ca4
	goto loc_83214CA4;
loc_83214C98:
	// rlwinm r11,r10,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214d64
	if (cr6.eq) goto loc_83214D64;
loc_83214CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214be0
	ctx.lr = 0x83214CAC;
	sub_83214BE0(ctx, base);
	// b 0x83214d64
	goto loc_83214D64;
loc_83214CB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832260e8
	ctx.lr = 0x83214CB8;
	sub_832260E8(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x832085e8
	ctx.lr = 0x83214CD4;
	sub_832085E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214be0
	ctx.lr = 0x83214CDC;
	sub_83214BE0(ctx, base);
	// b 0x83214d64
	goto loc_83214D64;
loc_83214CE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,31,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// addi r11,r11,-121
	ctx.r11.s64 = ctx.r11.s64 + -121;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x83214d5c
	if (cr6.gt) goto loc_83214D5C;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19724
	ctx.r12.s64 = ctx.r12.s64 + 19724;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83214CA4;
	case 1:
		goto loc_83214D5C;
	case 2:
		goto loc_83214D64;
	case 3:
		goto loc_83214D5C;
	case 4:
		goto loc_83214D64;
	case 5:
		goto loc_83214D44;
	case 6:
		goto loc_83214D5C;
	case 7:
		goto loc_83214D5C;
	case 8:
		goto loc_83214D5C;
	case 9:
		goto loc_83214D64;
	case 10:
		goto loc_83214D64;
	case 11:
		goto loc_83214D64;
	case 12:
		goto loc_83214D5C;
	case 13:
		goto loc_83214D64;
	default:
		return;
	}
	// lwz r25,19620(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19620);
	// lwz r25,19804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19804);
	// lwz r25,19812(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19812);
	// lwz r25,19804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19804);
	// lwz r25,19812(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19812);
	// lwz r25,19780(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19780);
	// lwz r25,19804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19804);
	// lwz r25,19804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19804);
	// lwz r25,19804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19804);
	// lwz r25,19812(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19812);
	// lwz r25,19812(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19812);
	// lwz r25,19812(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19812);
	// lwz r25,19804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19804);
	// lwz r25,19812(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 19812);
loc_83214D44:
	// rlwinm r11,r10,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214d64
	if (cr6.eq) goto loc_83214D64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214be0
	ctx.lr = 0x83214D58;
	sub_83214BE0(ctx, base);
	// b 0x83214d64
	goto loc_83214D64;
loc_83214D5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83213310
	ctx.lr = 0x83214D64;
	sub_83213310(ctx, base);
loc_83214D64:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83214c40
	if (!cr6.eq) goto loc_83214C40;
loc_83214D70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83214D78"))) PPC_WEAK_FUNC(sub_83214D78);
PPC_FUNC_IMPL(__imp__sub_83214D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83214D80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,22,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F0;
	// rlwinm r10,r10,0,27,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214e20
	if (cr6.eq) goto loc_83214E20;
	// lis r12,0
	ctx.r12.s64 = 0;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r12,r12,65007
	ctx.r12.u64 = ctx.r12.u64 | 65007;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// and r29,r11,r12
	ctx.r29.u64 = ctx.r11.u64 & ctx.r12.u64;
	// beq cr6,0x83214e1c
	if (cr6.eq) goto loc_83214E1C;
loc_83214DB8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83214e10
	if (!cr6.eq) goto loc_83214E10;
	// lhz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 | ctx.r30.u64;
	// rlwinm r7,r8,0,22,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F0;
	// rlwinm r7,r7,0,27,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83214e10
	if (cr6.eq) goto loc_83214E10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214d78
	ctx.lr = 0x83214DF8;
	sub_83214D78(ctx, base);
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// or r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 | ctx.r30.u64;
	// rlwinm r8,r9,0,22,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0;
	// rlwinm r8,r8,0,27,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// or r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 | ctx.r11.u64;
loc_83214E10:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83214db8
	if (!cr6.eq) goto loc_83214DB8;
loc_83214E1C:
	// sth r29,84(r28)
	PPC_STORE_U16(ctx.r28.u32 + 84, ctx.r29.u16);
loc_83214E20:
	// rlwinm r11,r27,0,22,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3F0;
	// rlwinm r11,r11,0,27,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214e9c
	if (cr6.eq) goto loc_83214E9C;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214e9c
	if (cr6.eq) goto loc_83214E9C;
	// rlwinm r31,r27,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83214e7c
	if (cr6.eq) goto loc_83214E7C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83214E60;
	sub_83266348(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83214e7c
	if (cr6.eq) goto loc_83214E7C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83214E7C;
	sub_83266348(ctx, base);
loc_83214E7C:
	// rlwinm r11,r27,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214e9c
	if (cr6.eq) goto loc_83214E9C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83214E9C;
	sub_83266348(ctx, base);
loc_83214E9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83214EA4"))) PPC_WEAK_FUNC(sub_83214EA4);
PPC_FUNC_IMPL(__imp__sub_83214EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83214EA8"))) PPC_WEAK_FUNC(sub_83214EA8);
PPC_FUNC_IMPL(__imp__sub_83214EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83214EB0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83214ee0
	if (cr6.eq) goto loc_83214EE0;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214ee0
	if (cr6.eq) goto loc_83214EE0;
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
loc_83214EE0:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lhz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 84);
	// lwz r31,56(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// clrlwi r22,r11,16
	ctx.r22.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// rlwinm r22,r22,0,22,20
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// beq cr6,0x83215138
	if (cr6.eq) goto loc_83215138;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r25,r7,-30448
	ctx.r25.s64 = ctx.r7.s64 + -30448;
	// addi r27,r8,-30412
	ctx.r27.s64 = ctx.r8.s64 + -30412;
	// addi r24,r9,-30400
	ctx.r24.s64 = ctx.r9.s64 + -30400;
	// addi r23,r10,24688
	ctx.r23.s64 = ctx.r10.s64 + 24688;
	// addi r26,r11,-22544
	ctx.r26.s64 = ctx.r11.s64 + -22544;
loc_83214F28:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83214f9c
	if (cr6.eq) goto loc_83214F9C;
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83214f50
	if (cr6.eq) goto loc_83214F50;
	// dcbt r0,r30
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r30
loc_83214F50:
	// lbz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 78);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83214f84
	if (!cr6.gt) goto loc_83214F84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r11.u8);
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214f94
	if (cr6.eq) goto loc_83214F94;
	// stb r20,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r20.u8);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x83215130
	goto loc_83215130;
loc_83214F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b580
	ctx.lr = 0x83214F8C;
	sub_8320B580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x83214F94;
	sub_832356E0(ctx, base);
loc_83214F94:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x83215130
	goto loc_83215130;
loc_83214F9C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83214fc0
	if (cr6.eq) goto loc_83214FC0;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83214fc0
	if (cr6.eq) goto loc_83214FC0;
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
loc_83214FC0:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lhz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// or r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bne cr6,0x83215040
	if (!cr6.eq) goto loc_83215040;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// beq cr6,0x832150b4
	if (cr6.eq) goto loc_832150B4;
	// cmplwi cr6,r11,125
	cr6.compare<uint32_t>(ctx.r11.u32, 125, xer);
	// ble cr6,0x83214ff8
	if (!cr6.gt) goto loc_83214FF8;
	// cmplwi cr6,r11,130
	cr6.compare<uint32_t>(ctx.r11.u32, 130, xer);
	// ble cr6,0x832150b4
	if (!cr6.gt) goto loc_832150B4;
loc_83214FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832260e8
	ctx.lr = 0x83215000;
	sub_832260E8(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x832085e8
	ctx.lr = 0x8321501C;
	sub_832085E8(ctx, base);
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// or r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 | ctx.r29.u64;
	// rlwinm r8,r9,0,21,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83215118
	if (cr6.eq) goto loc_83215118;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83218e58
	ctx.lr = 0x8321503C;
	sub_83218E58(ctx, base);
	// b 0x83215118
	goto loc_83215118;
loc_83215040:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r3,r10,31,22,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x3FF;
	// addi r10,r3,-121
	ctx.r10.s64 = ctx.r3.s64 + -121;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bgt cr6,0x832150d8
	if (cr6.gt) goto loc_832150D8;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20588
	ctx.r12.s64 = ctx.r12.s64 + 20588;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_832150B4;
	case 1:
		goto loc_832150D8;
	case 2:
		goto loc_832150B4;
	case 3:
		goto loc_832150D8;
	case 4:
		goto loc_832150A4;
	case 5:
		goto loc_832150D8;
	case 6:
		goto loc_832150D8;
	case 7:
		goto loc_832150D8;
	case 8:
		goto loc_832150D8;
	case 9:
		goto loc_832150D8;
	case 10:
		goto loc_832150A4;
	case 11:
		goto loc_832150A4;
	case 12:
		goto loc_832150D8;
	case 13:
		goto loc_832150A4;
	default:
		return;
	}
	// lwz r25,20660(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20660);
	// lwz r25,20696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20696);
	// lwz r25,20660(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20660);
	// lwz r25,20696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20696);
	// lwz r25,20644(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20644);
	// lwz r25,20696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20696);
	// lwz r25,20696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20696);
	// lwz r25,20696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20696);
	// lwz r25,20696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20696);
	// lwz r25,20696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20696);
	// lwz r25,20644(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20644);
	// lwz r25,20644(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20644);
	// lwz r25,20696(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20696);
	// lwz r25,20644(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20644);
loc_832150A4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// sth r11,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r11.u16);
	// b 0x83215118
	goto loc_83215118;
loc_832150B4:
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// or r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83215118
	if (cr6.eq) goto loc_83215118;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83218e58
	ctx.lr = 0x832150D4;
	sub_83218E58(ctx, base);
	// b 0x83215118
	goto loc_83215118;
loc_832150D8:
	// bl 0x8320a108
	ctx.lr = 0x832150DC;
	sub_8320A108(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831fbd90
	ctx.lr = 0x832150EC;
	sub_831FBD90(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r7,r30,31,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x3FF;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// bl 0x832085e8
	ctx.lr = 0x83215108;
	sub_832085E8(ctx, base);
	// lhz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// sth r10,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r10.u16);
loc_83215118:
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r8,r9,0,21,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	// or r22,r8,r10
	ctx.r22.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_83215130:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83214f28
	if (!cr6.eq) goto loc_83214F28;
loc_83215138:
	// sth r22,84(r21)
	PPC_STORE_U16(ctx.r21.u32 + 84, ctx.r22.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83215144"))) PPC_WEAK_FUNC(sub_83215144);
PPC_FUNC_IMPL(__imp__sub_83215144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83215148"))) PPC_WEAK_FUNC(sub_83215148);
PPC_FUNC_IMPL(__imp__sub_83215148) {
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
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x8322de40
	ctx.lr = 0x83215164;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83215194
	if (cr6.eq) goto loc_83215194;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83215194
	if (cr6.eq) goto loc_83215194;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x83215194;
	sub_83266348(ctx, base);
loc_83215194:
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

__attribute__((alias("__imp__sub_832151A8"))) PPC_WEAK_FUNC(sub_832151A8);
PPC_FUNC_IMPL(__imp__sub_832151A8) {
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
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8322de40
	ctx.lr = 0x832151C4;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832151f4
	if (cr6.eq) goto loc_832151F4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832151f4
	if (cr6.eq) goto loc_832151F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x832151F4;
	sub_83266348(ctx, base);
loc_832151F4:
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

__attribute__((alias("__imp__sub_83215208"))) PPC_WEAK_FUNC(sub_83215208);
PPC_FUNC_IMPL(__imp__sub_83215208) {
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
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x8322de40
	ctx.lr = 0x83215224;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83215254
	if (cr6.eq) goto loc_83215254;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83215254
	if (cr6.eq) goto loc_83215254;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x83215254;
	sub_83266348(ctx, base);
loc_83215254:
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

__attribute__((alias("__imp__sub_83215268"))) PPC_WEAK_FUNC(sub_83215268);
PPC_FUNC_IMPL(__imp__sub_83215268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83214a70
	sub_83214A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321528C"))) PPC_WEAK_FUNC(sub_8321528C);
PPC_FUNC_IMPL(__imp__sub_8321528C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83215290"))) PPC_WEAK_FUNC(sub_83215290);
PPC_FUNC_IMPL(__imp__sub_83215290) {
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
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832152c0
	if (cr6.eq) goto loc_832152C0;
loc_832152AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215290
	ctx.lr = 0x832152B4;
	sub_83215290(ctx, base);
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832152ac
	if (!cr6.eq) goto loc_832152AC;
loc_832152C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8322de40
	ctx.lr = 0x832152C8;
	sub_8322DE40(ctx, base);
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

__attribute__((alias("__imp__sub_832152DC"))) PPC_WEAK_FUNC(sub_832152DC);
PPC_FUNC_IMPL(__imp__sub_832152DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832152E0"))) PPC_WEAK_FUNC(sub_832152E0);
PPC_FUNC_IMPL(__imp__sub_832152E0) {
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
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83215318
	if (cr6.eq) goto loc_83215318;
loc_83215304:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832152e0
	ctx.lr = 0x8321530C;
	sub_832152E0(ctx, base);
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83215304
	if (!cr6.eq) goto loc_83215304;
loc_83215318:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8322de40
	ctx.lr = 0x83215320;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83215350
	if (cr6.eq) goto loc_83215350;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83215350
	if (cr6.eq) goto loc_83215350;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83266348
	ctx.lr = 0x83215350;
	sub_83266348(ctx, base);
loc_83215350:
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

__attribute__((alias("__imp__sub_83215368"))) PPC_WEAK_FUNC(sub_83215368);
PPC_FUNC_IMPL(__imp__sub_83215368) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r10,r11,6
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFF;
	// rlwinm r10,r10,0,31,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE000001;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8321539c
	if (!cr6.eq) goto loc_8321539C;
	// li r31,1024
	ctx.r31.s64 = 1024;
loc_8321539C:
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832153c4
	if (cr6.eq) goto loc_832153C4;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832153c0
	if (!cr6.eq) goto loc_832153C0;
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(ctx.r11.u32, 123, xer);
	// bne cr6,0x832153c4
	if (!cr6.eq) goto loc_832153C4;
loc_832153C0:
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
loc_832153C4:
	// rlwinm r11,r31,0,21,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x7F0;
	// rlwinm r11,r11,0,27,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832153e0
	if (cr6.eq) goto loc_832153E0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322b0b8
	ctx.lr = 0x832153E0;
	sub_8322B0B8(ctx, base);
loc_832153E0:
	// sth r31,82(r30)
	PPC_STORE_U16(ctx.r30.u32 + 82, ctx.r31.u16);
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

__attribute__((alias("__imp__sub_832153FC"))) PPC_WEAK_FUNC(sub_832153FC);
PPC_FUNC_IMPL(__imp__sub_832153FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83215400"))) PPC_WEAK_FUNC(sub_83215400);
PPC_FUNC_IMPL(__imp__sub_83215400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24880
	ctx.r10.s64 = ctx.r11.s64 + 24880;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83215424
	if (cr6.eq) goto loc_83215424;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_83215424:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83215448
	if (!cr6.eq) goto loc_83215448;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-30316
	ctx.r5.s64 = ctx.r11.s64 + -30316;
	// addi r4,r10,-30368
	ctx.r4.s64 = ctx.r10.s64 + -30368;
	// addi r3,r9,-30412
	ctx.r3.s64 = ctx.r9.s64 + -30412;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
loc_83215448:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,31,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// addi r11,r11,-121
	ctx.r11.s64 = ctx.r11.s64 + -121;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x832154b8
	if (cr6.gt) goto loc_832154B8;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21620
	ctx.r12.s64 = ctx.r12.s64 + 21620;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832154B4;
	case 1:
		goto loc_832154B8;
	case 2:
		goto loc_832154B8;
	case 3:
		goto loc_832154B8;
	case 4:
		goto loc_832154B8;
	case 5:
		goto loc_832154B8;
	case 6:
		goto loc_832154B8;
	case 7:
		goto loc_832154B8;
	case 8:
		goto loc_832154B8;
	case 9:
		goto loc_832154B8;
	case 10:
		goto loc_832154C8;
	case 11:
		goto loc_832154AC;
	case 12:
		goto loc_832154B8;
	case 13:
		goto loc_832154C8;
	default:
		return;
	}
	// lwz r25,21684(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21684);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21704(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21704);
	// lwz r25,21676(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21676);
	// lwz r25,21688(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21688);
	// lwz r25,21704(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21704);
loc_832154AC:
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x83260cc8
	sub_83260CC8(ctx, base);
	return;
loc_832154B4:
	// b 0x8321d340
	sub_8321D340(ctx, base);
	return;
loc_832154B8:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// b 0x83213310
	sub_83213310(ctx, base);
	return;
loc_832154C8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832154CC"))) PPC_WEAK_FUNC(sub_832154CC);
PPC_FUNC_IMPL(__imp__sub_832154CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832154D0"))) PPC_WEAK_FUNC(sub_832154D0);
PPC_FUNC_IMPL(__imp__sub_832154D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832154D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83215554
	if (!cr6.gt) goto loc_83215554;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
loc_83215504:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8321551c
	if (cr6.eq) goto loc_8321551C;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r9,-4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83215554
	if (!cr6.gt) goto loc_83215554;
loc_8321551C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83215544
	if (cr6.eq) goto loc_83215544;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206c48
	ctx.lr = 0x83215534;
	sub_83206C48(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83206ce8
	ctx.lr = 0x83215544;
	sub_83206CE8(ctx, base);
loc_83215544:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt 0x83215504
	if (cr0.gt) goto loc_83215504;
loc_83215554:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83215588
	if (cr6.eq) goto loc_83215588;
	// add. r30,r29,r31
	ctx.r30.u64 = ctx.r29.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x83215588
	if (!cr0.gt) goto loc_83215588;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x83206c48
	ctx.lr = 0x83215578;
	sub_83206C48(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83206ce8
	ctx.lr = 0x83215588;
	sub_83206CE8(ctx, base);
loc_83215588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83215594"))) PPC_WEAK_FUNC(sub_83215594);
PPC_FUNC_IMPL(__imp__sub_83215594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83215598"))) PPC_WEAK_FUNC(sub_83215598);
PPC_FUNC_IMPL(__imp__sub_83215598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 | ctx.r4.u64;
	// ble cr6,0x83215668
	if (!cr6.gt) goto loc_83215668;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832155d4
	if (cr6.eq) goto loc_832155D4;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// b 0x8321567c
	goto loc_8321567C;
loc_832155D4:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x832155f4
	if (!cr6.lt) goto loc_832155F4;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x832155f4
	if (!cr6.gt) goto loc_832155F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_832155F4:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83215614
	if (!cr6.lt) goto loc_83215614;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83215618
	if (cr6.gt) goto loc_83215618;
loc_83215614:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_83215618:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83215638
	if (!cr6.lt) goto loc_83215638;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8321563c
	if (cr6.gt) goto loc_8321563C;
loc_83215638:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8321563C:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8321565c
	if (!cr6.lt) goto loc_8321565C;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83215660
	if (cr6.gt) goto loc_83215660;
loc_8321565C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_83215660:
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x83215684
	goto loc_83215684;
loc_83215668:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321567c
	if (cr6.eq) goto loc_8321567C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
loc_8321567C:
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83215684:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x832156a8
	if (cr6.eq) goto loc_832156A8;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x832156ac
	if (!cr6.eq) goto loc_832156AC;
loc_832156A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832156AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832156B4"))) PPC_WEAK_FUNC(sub_832156B4);
PPC_FUNC_IMPL(__imp__sub_832156B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832156B8"))) PPC_WEAK_FUNC(sub_832156B8);
PPC_FUNC_IMPL(__imp__sub_832156B8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83215720
	if (cr6.eq) goto loc_83215720;
	// li r4,76
	ctx.r4.s64 = 76;
	// bl 0x832131b0
	ctx.lr = 0x832156E0;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83215714
	if (cr6.eq) goto loc_83215714;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83215720
	if (cr6.eq) goto loc_83215720;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83215714:
	// lwz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// rlwinm r10,r11,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r10,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r10.u32);
loc_83215720:
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

__attribute__((alias("__imp__sub_83215734"))) PPC_WEAK_FUNC(sub_83215734);
PPC_FUNC_IMPL(__imp__sub_83215734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83215738"))) PPC_WEAK_FUNC(sub_83215738);
PPC_FUNC_IMPL(__imp__sub_83215738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83215740;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83215768
	if (!cr6.eq) goto loc_83215768;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83215768:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,336
	ctx.r10.s64 = 336;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// bl 0x8322ab20
	ctx.lr = 0x83215790;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832157e4
	if (cr6.eq) goto loc_832157E4;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x832157A8;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832157c8
	if (!cr6.eq) goto loc_832157C8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r6,47
	ctx.r6.s64 = 47;
	// li r5,336
	ctx.r5.s64 = 336;
	// bl 0x8320d628
	ctx.lr = 0x832157C4;
	sub_8320D628(ctx, base);
	// b 0x832157d0
	goto loc_832157D0;
loc_832157C8:
	// bl 0x83268ba8
	ctx.lr = 0x832157CC;
	sub_83268BA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_832157D0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832157dc
	if (cr6.eq) goto loc_832157DC;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_832157DC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832157f0
	if (!cr6.eq) goto loc_832157F0;
loc_832157E4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
loc_832157F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832157FC"))) PPC_WEAK_FUNC(sub_832157FC);
PPC_FUNC_IMPL(__imp__sub_832157FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83215800"))) PPC_WEAK_FUNC(sub_83215800);
PPC_FUNC_IMPL(__imp__sub_83215800) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83215834
	if (!cr6.eq) goto loc_83215834;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8321588c
	goto loc_8321588C;
loc_83215834:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,337
	ctx.r10.s64 = 337;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x8322ab20
	ctx.lr = 0x83215858;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83215874
	if (!cr6.eq) goto loc_83215874;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,-4
	ctx.r3.s64 = -4;
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// b 0x8321588c
	goto loc_8321588C;
loc_83215874:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83222578
	ctx.lr = 0x8321587C;
	sub_83222578(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83215888
	if (cr6.eq) goto loc_83215888;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_83215888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8321588C:
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

__attribute__((alias("__imp__sub_832158A4"))) PPC_WEAK_FUNC(sub_832158A4);
PPC_FUNC_IMPL(__imp__sub_832158A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832158A8"))) PPC_WEAK_FUNC(sub_832158A8);
PPC_FUNC_IMPL(__imp__sub_832158A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832158B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x8325acb0
	ctx.lr = 0x832158D4;
	sub_8325ACB0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8325b058
	ctx.lr = 0x832158E4;
	sub_8325B058(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83215598
	ctx.lr = 0x832158FC;
	sub_83215598(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83215914
	if (cr6.eq) goto loc_83215914;
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83215914:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832159cc
	if (cr6.eq) goto loc_832159CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206c48
	ctx.lr = 0x83215938;
	sub_83206C48(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83206ce8
	ctx.lr = 0x83215948;
	sub_83206CE8(ctx, base);
	// bl 0x83206ac0
	ctx.lr = 0x8321594C;
	sub_83206AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83207240
	ctx.lr = 0x83215954;
	sub_83207240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8325d400
	ctx.lr = 0x83215960;
	sub_8325D400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83206dc8
	ctx.lr = 0x83215968;
	sub_83206DC8(ctx, base);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,24880
	ctx.r31.s64 = ctx.r10.s64 + 24880;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// bl 0x83206d50
	ctx.lr = 0x83215980;
	sub_83206D50(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x832159b0
	if (cr6.eq) goto loc_832159B0;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lfs f0,132(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_832159B0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832077f8
	ctx.lr = 0x832159C8;
	sub_832077F8(ctx, base);
	// bl 0x83206b20
	ctx.lr = 0x832159CC;
	sub_83206B20(ctx, base);
loc_832159CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206c48
	ctx.lr = 0x832159D8;
	sub_83206C48(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83206ce8
	ctx.lr = 0x832159E8;
	sub_83206CE8(ctx, base);
	// bl 0x832070b8
	ctx.lr = 0x832159EC;
	sub_832070B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832159F8"))) PPC_WEAK_FUNC(sub_832159F8);
PPC_FUNC_IMPL(__imp__sub_832159F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83215A00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,44(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83215ab4
	if (cr6.eq) goto loc_83215AB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,31,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// addi r11,r11,-121
	ctx.r11.s64 = ctx.r11.s64 + -121;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83215aa8
	if (cr6.gt) goto loc_83215AA8;
	// lis r12,-31967
	ctx.r12.s64 = -2094989312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23108
	ctx.r12.s64 = ctx.r12.s64 + 23108;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83215AB4;
	case 1:
		goto loc_83215AA8;
	case 2:
		goto loc_83215AB4;
	case 3:
		goto loc_83215AA8;
	case 4:
		goto loc_83215AA8;
	case 5:
		goto loc_83215AA8;
	case 6:
		goto loc_83215AA8;
	case 7:
		goto loc_83215AA8;
	case 8:
		goto loc_83215AA8;
	case 9:
		goto loc_83215AA8;
	case 10:
		goto loc_83215AB4;
	case 11:
		goto loc_83215A74;
	default:
		return;
	}
	// lwz r25,23220(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23220);
	// lwz r25,23208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23208);
	// lwz r25,23220(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23220);
	// lwz r25,23208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23208);
	// lwz r25,23208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23208);
	// lwz r25,23208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23208);
	// lwz r25,23208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23208);
	// lwz r25,23208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23208);
	// lwz r25,23208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23208);
	// lwz r25,23208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23208);
	// lwz r25,23220(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23220);
	// lwz r25,23156(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23156);
loc_83215A74:
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83215a90
	if (cr6.eq) goto loc_83215A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83260638
	ctx.lr = 0x83215A90;
	sub_83260638(ctx, base);
loc_83215A90:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325b058
	ctx.lr = 0x83215AA0;
	sub_8325B058(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83215AA8:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x83213310
	ctx.lr = 0x83215AB4;
	sub_83213310(ctx, base);
loc_83215AB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83215ABC"))) PPC_WEAK_FUNC(sub_83215ABC);
PPC_FUNC_IMPL(__imp__sub_83215ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83215AC0"))) PPC_WEAK_FUNC(sub_83215AC0);
PPC_FUNC_IMPL(__imp__sub_83215AC0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83215b1c
	if (cr6.eq) goto loc_83215B1C;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lwz r30,36(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// bl 0x83270ac8
	ctx.lr = 0x83215B04;
	sub_83270AC8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83270fa0
	ctx.lr = 0x83215B14;
	sub_83270FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83215B1C;
	sub_83222030(ctx, base);
loc_83215B1C:
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

__attribute__((alias("__imp__sub_83215B34"))) PPC_WEAK_FUNC(sub_83215B34);
PPC_FUNC_IMPL(__imp__sub_83215B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83215B38"))) PPC_WEAK_FUNC(sub_83215B38);
PPC_FUNC_IMPL(__imp__sub_83215B38) {
	PPC_FUNC_PROLOGUE();
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
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83215b80
	if (cr6.eq) goto loc_83215B80;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83215b80
	if (cr6.eq) goto loc_83215B80;
loc_83215B5C:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83215b74
	if (cr6.lt) goto loc_83215B74;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x83215b94
	if (!cr6.gt) goto loc_83215B94;
loc_83215B74:
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83215b5c
	if (!cr6.eq) goto loc_83215B5C;
loc_83215B80:
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
loc_83215B94:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832197e8
	ctx.lr = 0x83215BA8;
	sub_832197E8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83215BC0"))) PPC_WEAK_FUNC(sub_83215BC0);
PPC_FUNC_IMPL(__imp__sub_83215BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83215BC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832264e0
	ctx.lr = 0x83215C00;
	sub_832264E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83215c94
	if (cr6.eq) goto loc_83215C94;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x83215c98
	if (!cr6.lt) goto loc_83215C98;
	// bl 0x83255980
	ctx.lr = 0x83215C1C;
	sub_83255980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ble cr6,0x83215c94
	if (!cr6.gt) goto loc_83215C94;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x83215c94
	if (!cr6.eq) goto loc_83215C94;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x83215c64
	if (cr6.eq) goto loc_83215C64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83255c58
	ctx.lr = 0x83215C5C;
	sub_83255C58(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83215C64:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
	// bl 0x832277e8
	ctx.lr = 0x83215C74;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83215c98
	if (!cr6.eq) goto loc_83215C98;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x83215c98
	goto loc_83215C98;
loc_83215C94:
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_83215C98:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83215cc4
	if (!cr6.eq) goto loc_83215CC4;
	// bl 0x832277e8
	ctx.lr = 0x83215CA8;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83215cc4
	if (!cr6.eq) goto loc_83215CC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_83215CC4:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// bge cr6,0x83215de0
	if (!cr6.lt) goto loc_83215DE0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83215ce4
	if (!cr6.eq) goto loc_83215CE4;
loc_83215CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215CE4:
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// bge cr6,0x83215de0
	if (!cr6.lt) goto loc_83215DE0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83215d14
	if (!cr6.eq) goto loc_83215D14;
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 & ctx.r29.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215D14:
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x83215dac
	if (!cr6.eq) goto loc_83215DAC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83215d60
	if (cr6.eq) goto loc_83215D60;
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r11,r29,52
	ctx.r11.s64 = ctx.r29.s64 + 52;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83215d5c
	if (cr6.eq) goto loc_83215D5C;
loc_83215D38:
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r9,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83215d5c
	if (!cr6.eq) goto loc_83215D5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 + 52;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83215d38
	if (!cr6.eq) goto loc_83215D38;
loc_83215D5C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_83215D60:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83215f90
	if (cr6.eq) goto loc_83215F90;
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// bl 0x83209b18
	ctx.lr = 0x83215D7C;
	sub_83209B18(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215bc0
	ctx.lr = 0x83215D94;
	sub_83215BC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83222030
	ctx.lr = 0x83215DA0;
	sub_83222030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215DAC:
	// li r4,47
	ctx.r4.s64 = 47;
	// bl 0x83296d40
	ctx.lr = 0x83215DB4;
	sub_83296D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83215eec
	if (!cr6.eq) goto loc_83215EEC;
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83296d40
	ctx.lr = 0x83215DCC;
	sub_83296D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83215eec
	if (!cr6.eq) goto loc_83215EEC;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83215DE0:
	// rlwinm r10,r27,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83215e04
	if (cr6.eq) goto loc_83215E04;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,595
	cr6.compare<uint32_t>(ctx.r10.u32, 595, xer);
	// bne cr6,0x83215e04
	if (!cr6.eq) goto loc_83215E04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215E04:
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83215e28
	if (cr6.eq) goto loc_83215E28;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,288
	cr6.compare<uint32_t>(ctx.r10.u32, 288, xer);
	// bne cr6,0x83215e28
	if (!cr6.eq) goto loc_83215E28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215E28:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,290
	cr6.compare<uint32_t>(ctx.r11.u32, 290, xer);
	// beq cr6,0x83215ed8
	if (cr6.eq) goto loc_83215ED8;
	// cmplwi cr6,r11,540
	cr6.compare<uint32_t>(ctx.r11.u32, 540, xer);
	// beq cr6,0x83215ed8
	if (cr6.eq) goto loc_83215ED8;
	// cmplwi cr6,r11,289
	cr6.compare<uint32_t>(ctx.r11.u32, 289, xer);
	// beq cr6,0x83215e7c
	if (cr6.eq) goto loc_83215E7C;
	// cmplwi cr6,r11,539
	cr6.compare<uint32_t>(ctx.r11.u32, 539, xer);
	// beq cr6,0x83215e7c
	if (cr6.eq) goto loc_83215E7C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83215e68
	if (!cr6.eq) goto loc_83215E68;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x83215e68
	if (cr6.lt) goto loc_83215E68;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832277f8
	ctx.lr = 0x83215E64;
	sub_832277F8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83215E68:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320b098
	ctx.lr = 0x83215E74;
	sub_8320B098(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215E7C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83215e98
	if (!cr6.eq) goto loc_83215E98;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215E98:
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r11,r29,52
	ctx.r11.s64 = ctx.r29.s64 + 52;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83215ecc
	if (cr6.eq) goto loc_83215ECC;
loc_83215EA8:
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r9,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83215ecc
	if (!cr6.eq) goto loc_83215ECC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 + 52;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83215ea8
	if (!cr6.eq) goto loc_83215EA8;
loc_83215ECC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215ED8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83215cd8
	if (cr6.eq) goto loc_83215CD8;
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83215EEC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x83215f18
	if (cr6.lt) goto loc_83215F18;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r4,r11,-30308
	ctx.r4.s64 = ctx.r11.s64 + -30308;
	// addi r3,r9,-30412
	ctx.r3.s64 = ctx.r9.s64 + -30412;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bl 0x83208568
	ctx.lr = 0x83215F18;
	sub_83208568(ctx, base);
loc_83215F18:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x832556a8
	ctx.lr = 0x83215F30;
	sub_832556A8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// bl 0x83209c20
	ctx.lr = 0x83215F40;
	sub_83209C20(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83215bc0
	ctx.lr = 0x83215F58;
	sub_83215BC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83215f88
	if (cr6.eq) goto loc_83215F88;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83223a60
	ctx.lr = 0x83215F70;
	sub_83223A60(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215bc0
	ctx.lr = 0x83215F84;
	sub_83215BC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83215F88:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83222030
	ctx.lr = 0x83215F90;
	sub_83222030(ctx, base);
loc_83215F90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83215F9C"))) PPC_WEAK_FUNC(sub_83215F9C);
PPC_FUNC_IMPL(__imp__sub_83215F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83215FA0"))) PPC_WEAK_FUNC(sub_83215FA0);
PPC_FUNC_IMPL(__imp__sub_83215FA0) {
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
	// bne cr6,0x83215fe0
	if (!cr6.eq) goto loc_83215FE0;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x832277f8
	ctx.lr = 0x83215FCC;
	sub_832277F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83215fe0
	if (!cr6.eq) goto loc_83215FE0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r31,r11,960
	ctx.r31.s64 = ctx.r11.s64 + 960;
loc_83215FE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83225c80
	ctx.lr = 0x83215FE8;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,-30412
	ctx.r9.s64 = ctx.r11.s64 + -30412;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-30268
	ctx.r4.s64 = ctx.r10.s64 + -30268;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x83216008;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83216020"))) PPC_WEAK_FUNC(sub_83216020);
PPC_FUNC_IMPL(__imp__sub_83216020) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r9,r11,-30508
	ctx.r9.s64 = ctx.r11.s64 + -30508;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83216048:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x832160bc
	if (cr6.eq) goto loc_832160BC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,56
	ctx.r8.s64 = ctx.r9.s64 + 56;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83216048
	if (cr6.lt) goto loc_83216048;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8321608c
	if (!cr6.eq) goto loc_8321608C;
	// bl 0x832277f8
	ctx.lr = 0x83216078;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8321608c
	if (!cr6.eq) goto loc_8321608C;
	// bl 0x83227908
	ctx.lr = 0x83216088;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8321608C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30220
	ctx.r4.s64 = ctx.r11.s64 + -30220;
	// addi r3,r10,-30412
	ctx.r3.s64 = ctx.r10.s64 + -30412;
	// bl 0x832085e8
	ctx.lr = 0x832160A4;
	sub_832085E8(ctx, base);
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
loc_832160BC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832160DC"))) PPC_WEAK_FUNC(sub_832160DC);
PPC_FUNC_IMPL(__imp__sub_832160DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832160E0"))) PPC_WEAK_FUNC(sub_832160E0);
PPC_FUNC_IMPL(__imp__sub_832160E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832160E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r9,r11,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq cr6,0x83216134
	if (cr6.eq) goto loc_83216134;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8321612c
	if (!cr6.eq) goto loc_8321612C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x83216140
	goto loc_83216140;
loc_8321612C:
	// addi r30,r10,52
	ctx.r30.s64 = ctx.r10.s64 + 52;
	// b 0x83216140
	goto loc_83216140;
loc_83216134:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x83213d30
	ctx.lr = 0x8321613C;
	sub_83213D30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83216140:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83216164
	if (cr6.eq) goto loc_83216164;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216174
	if (cr6.eq) goto loc_83216174;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// b 0x8321616c
	goto loc_8321616C;
loc_83216164:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x83213d30
	ctx.lr = 0x8321616C;
	sub_83213D30(ctx, base);
loc_8321616C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8321617c
	if (!cr6.eq) goto loc_8321617C;
loc_83216174:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x83216184
	goto loc_83216184;
loc_8321617C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83216184:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83216258
	if (cr6.eq) goto loc_83216258;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216258
	if (cr6.eq) goto loc_83216258;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83216258
	if (cr6.eq) goto loc_83216258;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x83216258
	if (cr6.eq) goto loc_83216258;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
loc_832161C4:
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwimi r4,r10,16,14,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r4.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r4,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3FFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne cr6,0x832161ec
	if (!cr6.eq) goto loc_832161EC;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8321623c
	goto loc_8321623C;
loc_832161EC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832161fc
	if (!cr6.eq) goto loc_832161FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8321623c
	goto loc_8321623C;
loc_832161FC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83216230
	if (!cr0.eq) goto loc_83216230;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_83216210:
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83216238
	if (cr6.eq) goto loc_83216238;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x83216210
	if (cr0.eq) goto loc_83216210;
loc_83216230:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8321623c
	goto loc_8321623C;
loc_83216238:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8321623C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216270
	if (cr6.eq) goto loc_83216270;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x832161c4
	if (cr6.lt) goto loc_832161C4;
loc_83216258:
	// stw r5,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r5.u32);
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83216270:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// bge cr6,0x832162ac
	if (!cr6.lt) goto loc_832162AC;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832162AC:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832162C4"))) PPC_WEAK_FUNC(sub_832162C4);
PPC_FUNC_IMPL(__imp__sub_832162C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832162C8"))) PPC_WEAK_FUNC(sub_832162C8);
PPC_FUNC_IMPL(__imp__sub_832162C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f1,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f10,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83216308
	if (!cr6.gt) goto loc_83216308;
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
loc_83216308:
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83216310"))) PPC_WEAK_FUNC(sub_83216310);
PPC_FUNC_IMPL(__imp__sub_83216310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83216354
	if (cr6.eq) goto loc_83216354;
	// lfs f0,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83216354
	if (!cr6.gt) goto loc_83216354;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
loc_83216354:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83216374
	if (!cr6.eq) goto loc_83216374;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_83216374:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832248d8
	sub_832248D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321637C"))) PPC_WEAK_FUNC(sub_8321637C);
PPC_FUNC_IMPL(__imp__sub_8321637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216380"))) PPC_WEAK_FUNC(sub_83216380);
PPC_FUNC_IMPL(__imp__sub_83216380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f1,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f10,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x832163c0
	if (!cr6.gt) goto loc_832163C0;
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
loc_832163C0:
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832163C8"))) PPC_WEAK_FUNC(sub_832163C8);
PPC_FUNC_IMPL(__imp__sub_832163C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321640c
	if (cr6.eq) goto loc_8321640C;
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8321640c
	if (!cr6.gt) goto loc_8321640C;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
loc_8321640C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8321642c
	if (!cr6.eq) goto loc_8321642C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8321642C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832248d8
	sub_832248D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83216434"))) PPC_WEAK_FUNC(sub_83216434);
PPC_FUNC_IMPL(__imp__sub_83216434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216438"))) PPC_WEAK_FUNC(sub_83216438);
PPC_FUNC_IMPL(__imp__sub_83216438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r10,5696
	ctx.r8.s64 = ctx.r10.s64 + 5696;
	// rlwinm r7,r9,4,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lfs f0,132(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x83216484
	if (cr6.eq) goto loc_83216484;
	// lfs f0,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83216484
	if (!cr6.gt) goto loc_83216484;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
loc_83216484:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x832248d8
	sub_832248D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83216490"))) PPC_WEAK_FUNC(sub_83216490);
PPC_FUNC_IMPL(__imp__sub_83216490) {
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
	// lbz r11,175(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 175);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832164dc
	if (cr6.eq) goto loc_832164DC;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fde78
	ctx.lr = 0x832164BC;
	sub_831FDE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r11.u8);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f13,252(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f12,256(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
loc_832164DC:
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

__attribute__((alias("__imp__sub_832164F0"))) PPC_WEAK_FUNC(sub_832164F0);
PPC_FUNC_IMPL(__imp__sub_832164F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,175(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 175);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216544
	if (cr6.eq) goto loc_83216544;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fde78
	ctx.lr = 0x83216524;
	sub_831FDE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r11.u8);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f13,252(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f12,256(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
loc_83216544:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f13,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-30452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832248d8
	ctx.lr = 0x8321655C;
	sub_832248D8(ctx, base);
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

__attribute__((alias("__imp__sub_83216574"))) PPC_WEAK_FUNC(sub_83216574);
PPC_FUNC_IMPL(__imp__sub_83216574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216578"))) PPC_WEAK_FUNC(sub_83216578);
PPC_FUNC_IMPL(__imp__sub_83216578) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,175(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 175);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832165cc
	if (cr6.eq) goto loc_832165CC;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fde78
	ctx.lr = 0x832165AC;
	sub_831FDE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r11.u8);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f13,252(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f12,256(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
loc_832165CC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f13,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-30452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832248d8
	ctx.lr = 0x832165E4;
	sub_832248D8(ctx, base);
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

__attribute__((alias("__imp__sub_832165FC"))) PPC_WEAK_FUNC(sub_832165FC);
PPC_FUNC_IMPL(__imp__sub_832165FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216600"))) PPC_WEAK_FUNC(sub_83216600);
PPC_FUNC_IMPL(__imp__sub_83216600) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,175(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 175);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216654
	if (cr6.eq) goto loc_83216654;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fde78
	ctx.lr = 0x83216634;
	sub_831FDE78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r11.u8);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f13,252(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f12,256(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
loc_83216654:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f13,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-30452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832248d8
	ctx.lr = 0x8321666C;
	sub_832248D8(ctx, base);
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

__attribute__((alias("__imp__sub_83216684"))) PPC_WEAK_FUNC(sub_83216684);
PPC_FUNC_IMPL(__imp__sub_83216684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216688"))) PPC_WEAK_FUNC(sub_83216688);
PPC_FUNC_IMPL(__imp__sub_83216688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lfs f0,188(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// lfs f1,132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x832166b8
	if (!cr6.lt) goto loc_832166B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x832166b8
	if (!cr6.gt) goto loc_832166B8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_832166B8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832166d4
	if (!cr6.eq) goto loc_832166D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_832166D4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x832248d8
	sub_832248D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832166DC"))) PPC_WEAK_FUNC(sub_832166DC);
PPC_FUNC_IMPL(__imp__sub_832166DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832166E0"))) PPC_WEAK_FUNC(sub_832166E0);
PPC_FUNC_IMPL(__imp__sub_832166E0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83288cd0
	ctx.lr = 0x8321670C;
	sub_83288CD0(ctx, base);
	// lhz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_83216730"))) PPC_WEAK_FUNC(sub_83216730);
PPC_FUNC_IMPL(__imp__sub_83216730) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216760
	if (cr6.eq) goto loc_83216760;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r11,21,11,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83216760:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832167dc
	if (!cr6.eq) goto loc_832167DC;
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832167a4
	if (cr6.eq) goto loc_832167A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// bl 0x83201380
	ctx.lr = 0x83216790;
	sub_83201380(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832167A4:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832167dc
	if (cr6.eq) goto loc_832167DC;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x832167dc
	if (cr6.eq) goto loc_832167DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83201380
	ctx.lr = 0x832167C8;
	sub_83201380(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832167DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832167F0"))) PPC_WEAK_FUNC(sub_832167F0);
PPC_FUNC_IMPL(__imp__sub_832167F0) {
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
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// not r6,r9
	ctx.r6.u64 = ~ctx.r9.u64;
	// sraw r5,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r5.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// rlwinm r30,r6,15,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8321683c
	if (cr6.eq) goto loc_8321683C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8321683C;
	sub_83222030(ctx, base);
loc_8321683C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83216860"))) PPC_WEAK_FUNC(sub_83216860);
PPC_FUNC_IMPL(__imp__sub_83216860) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8322ab20
	ctx.lr = 0x83216878;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x832168a8
	if (cr6.eq) goto loc_832168A8;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x83216894;
	sub_832240B8(ctx, base);
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
loc_832168A8:
	// bl 0x83213150
	ctx.lr = 0x832168AC;
	sub_83213150(ctx, base);
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

__attribute__((alias("__imp__sub_832168C0"))) PPC_WEAK_FUNC(sub_832168C0);
PPC_FUNC_IMPL(__imp__sub_832168C0) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r6,r10,0,6,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	// addic r5,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// ori r3,r9,8400
	ctx.r3.u64 = ctx.r9.u64 | 8400;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r9,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sraw r4,r3,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r4.s64 = ctx.r3.s32 >> temp.u32;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// and r30,r5,r3
	ctx.r30.u64 = ctx.r5.u64 & ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216928
	if (cr6.eq) goto loc_83216928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83216928;
	sub_83222030(ctx, base);
loc_83216928:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8321694C"))) PPC_WEAK_FUNC(sub_8321694C);
PPC_FUNC_IMPL(__imp__sub_8321694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216950"))) PPC_WEAK_FUNC(sub_83216950);
PPC_FUNC_IMPL(__imp__sub_83216950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83216960
	if (!cr6.eq) goto loc_83216960;
	// blr 
	return;
loc_83216960:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83216994
	if (cr6.eq) goto loc_83216994;
loc_83216970:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r8,r9,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83216994
	if (!cr6.eq) goto loc_83216994;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83216970
	if (!cr6.eq) goto loc_83216970;
loc_83216994:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832169A4"))) PPC_WEAK_FUNC(sub_832169A4);
PPC_FUNC_IMPL(__imp__sub_832169A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832169A8"))) PPC_WEAK_FUNC(sub_832169A8);
PPC_FUNC_IMPL(__imp__sub_832169A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832169b8
	if (!cr6.eq) goto loc_832169B8;
loc_832169B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832169B8:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832169b0
	if (!cr6.eq) goto loc_832169B0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832169D0"))) PPC_WEAK_FUNC(sub_832169D0);
PPC_FUNC_IMPL(__imp__sub_832169D0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83216a70
	if (cr6.eq) goto loc_83216A70;
loc_832169F4:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r9,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83216a48
	if (!cr6.eq) goto loc_83216A48;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83216a28
	if (!cr6.eq) goto loc_83216A28;
	// rlwinm r9,r9,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83216a70
	if (!cr6.eq) goto loc_83216A70;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83216a40
	if (!cr6.eq) goto loc_83216A40;
loc_83216A28:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832169f4
	if (!cr6.eq) goto loc_832169F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213150
	ctx.lr = 0x83216A3C;
	sub_83213150(ctx, base);
	// b 0x83216ab8
	goto loc_83216AB8;
loc_83216A40:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83216a54
	if (cr6.eq) goto loc_83216A54;
loc_83216A48:
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// bl 0x8323e0d8
	ctx.lr = 0x83216A50;
	sub_8323E0D8(ctx, base);
	// b 0x83216a64
	goto loc_83216A64;
loc_83216A54:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83216a70
	if (cr6.eq) goto loc_83216A70;
	// bl 0x83201a00
	ctx.lr = 0x83216A64;
	sub_83201A00(ctx, base);
loc_83216A64:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83216a7c
	if (!cr6.eq) goto loc_83216A7C;
loc_83216A70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213150
	ctx.lr = 0x83216A78;
	sub_83213150(ctx, base);
	// b 0x83216ab8
	goto loc_83216AB8;
loc_83216A7C:
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
	// beq cr6,0x83216aa4
	if (cr6.eq) goto loc_83216AA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83216AA4;
	sub_83222030(ctx, base);
loc_83216AA4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
loc_83216AB8:
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

__attribute__((alias("__imp__sub_83216AD0"))) PPC_WEAK_FUNC(sub_83216AD0);
PPC_FUNC_IMPL(__imp__sub_83216AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83216AD8;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83216bb8
	if (cr6.eq) goto loc_83216BB8;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x83216b08
	if (cr6.eq) goto loc_83216B08;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x83216b5c
	if (!cr6.eq) goto loc_83216B5C;
loc_83216B08:
	// li r4,16
	ctx.r4.s64 = 16;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8322a890
	ctx.lr = 0x83216B14;
	sub_8322A890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216b5c
	if (cr6.eq) goto loc_83216B5C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83216bb8
	if (!cr6.eq) goto loc_83216BB8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322b2e0
	ctx.lr = 0x83216B4C;
	sub_8322B2E0(ctx, base);
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x83216bbc
	if (!cr6.eq) goto loc_83216BBC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83216B5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x83216B68;
	sub_83221C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83216b94
	if (cr6.eq) goto loc_83216B94;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83216b9c
	if (!cr6.eq) goto loc_83216B9C;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x83216B88;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83216b9c
	if (!cr6.eq) goto loc_83216B9C;
loc_83216B94:
	// bl 0x83227908
	ctx.lr = 0x83216B98;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_83216B9C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30188
	ctx.r4.s64 = ctx.r11.s64 + -30188;
	// addi r3,r10,-30412
	ctx.r3.s64 = ctx.r10.s64 + -30412;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83216BB8;
	sub_832085E8(ctx, base);
loc_83216BB8:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_83216BBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83216BC4"))) PPC_WEAK_FUNC(sub_83216BC4);
PPC_FUNC_IMPL(__imp__sub_83216BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216BC8"))) PPC_WEAK_FUNC(sub_83216BC8);
PPC_FUNC_IMPL(__imp__sub_83216BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83216BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8320b0b8
	ctx.lr = 0x83216BDC;
	sub_8320B0B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83216bf4
	if (!cr6.eq) goto loc_83216BF4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83216BF4:
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
	// beq cr6,0x83216c24
	if (cr6.eq) goto loc_83216C24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83216C24;
	sub_83222030(ctx, base);
loc_83216C24:
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
}

__attribute__((alias("__imp__sub_83216C40"))) PPC_WEAK_FUNC(sub_83216C40);
PPC_FUNC_IMPL(__imp__sub_83216C40) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832217a8
	ctx.lr = 0x83216C64;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216c98
	if (cr6.eq) goto loc_83216C98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x83216C78;
	sub_83220448(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r11,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r11.u8);
	// stb r10,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r10.u8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 262144;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_83216C98:
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

__attribute__((alias("__imp__sub_83216CB0"))) PPC_WEAK_FUNC(sub_83216CB0);
PPC_FUNC_IMPL(__imp__sub_83216CB0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832217a8
	ctx.lr = 0x83216CD4;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216d08
	if (cr6.eq) goto loc_83216D08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x83216CE8;
	sub_83220448(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stb r11,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r11.u8);
	// stb r10,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r10.u8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 262144;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_83216D08:
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

__attribute__((alias("__imp__sub_83216D20"))) PPC_WEAK_FUNC(sub_83216D20);
PPC_FUNC_IMPL(__imp__sub_83216D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83216D28;
	__savegprlr_29(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832217a8
	ctx.lr = 0x83216D40;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216dcc
	if (cr6.eq) goto loc_83216DCC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83216d74
	if (cr6.eq) goto loc_83216D74;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83216d74
	if (!cr6.eq) goto loc_83216D74;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x83202120
	ctx.lr = 0x83216D74;
	sub_83202120(ctx, base);
loc_83216D74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216490
	ctx.lr = 0x83216D7C;
	sub_83216490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220448
	ctx.lr = 0x83216D84;
	sub_83220448(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f0,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lfs f3,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831fdd60
	ctx.lr = 0x83216DB0;
	sub_831FDD60(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r9,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r9.u8);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 262144;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
loc_83216DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83216DD4"))) PPC_WEAK_FUNC(sub_83216DD4);
PPC_FUNC_IMPL(__imp__sub_83216DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216DD8"))) PPC_WEAK_FUNC(sub_83216DD8);
PPC_FUNC_IMPL(__imp__sub_83216DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83216DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x83216f64
	if (!cr6.lt) goto loc_83216F64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x832217a8
	ctx.lr = 0x83216E00;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83216f64
	if (cr6.eq) goto loc_83216F64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220448
	ctx.lr = 0x83216E14;
	sub_83220448(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83216f1c
	if (cr6.eq) goto loc_83216F1C;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f9,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f12,f11,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x83216e64
	if (cr6.gt) goto loc_83216E64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x83216e68
	goto loc_83216E68;
loc_83216E64:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
loc_83216E68:
	// fneg f7,f12
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f8,25236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25236);
	ctx.f8.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsel f6,f12,f12,f7
	ctx.f6.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f7.f64;
	// fcmpu cr6,f6,f8
	cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// blt cr6,0x83216e88
	if (cr6.lt) goto loc_83216E88;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83216E88:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83216ed4
	if (cr6.eq) goto loc_83216ED4;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfsx f0,r9,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stb r10,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// stb r11,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, ctx.r11.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83216ED4:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x83216ee0
	if (cr6.eq) goto loc_83216EE0;
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_83216EE0:
	// fmuls f13,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, ctx.r11.u8);
	// stb r10,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83216F1C:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// beq cr6,0x83216f58
	if (cr6.eq) goto loc_83216F58;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lfs f6,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831fc768
	ctx.lr = 0x83216F58;
	sub_831FC768(ctx, base);
loc_83216F58:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_83216F64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83216F6C"))) PPC_WEAK_FUNC(sub_83216F6C);
PPC_FUNC_IMPL(__imp__sub_83216F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83216F70"))) PPC_WEAK_FUNC(sub_83216F70);
PPC_FUNC_IMPL(__imp__sub_83216F70) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83216fa8
	if (cr6.eq) goto loc_83216FA8;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x83216d20
	ctx.lr = 0x83216FA4;
	sub_83216D20(ctx, base);
	// b 0x832170e0
	goto loc_832170E0;
loc_83216FA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x83216FB0;
	sub_832217A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832170e0
	if (cr6.eq) goto loc_832170E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x83216FC4;
	sub_83220448(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83216fdc
	if (!cr6.lt) goto loc_83216FDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83216FDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321704c
	if (cr6.eq) goto loc_8321704C;
	// li r11,360
	ctx.r11.s64 = 360;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r9,r10,r11
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// mulli r8,r9,360
	ctx.r8.s64 = ctx.r9.s64 * 360;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83217034
	if (cr6.gt) goto loc_83217034;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83217034:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832170a8
	if (cr6.eq) goto loc_832170A8;
	// lfs f13,216(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x832170a8
	goto loc_832170A8;
loc_8321704C:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// li r11,-360
	ctx.r11.s64 = -360;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r9,r10,r11
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mulli r8,r9,360
	ctx.r8.s64 = ctx.r9.s64 * 360;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,25948(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25948);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83217090
	if (cr6.lt) goto loc_83217090;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83217090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832170a8
	if (cr6.eq) goto loc_832170A8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,11412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11412);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_832170A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f6,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// lfs f5,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f3,256(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// bl 0x831fc768
	ctx.lr = 0x832170D4;
	sub_831FC768(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// oris r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 262144;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
loc_832170E0:
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

__attribute__((alias("__imp__sub_832170F8"))) PPC_WEAK_FUNC(sub_832170F8);
PPC_FUNC_IMPL(__imp__sub_832170F8) {
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
	// sth r4,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r4.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83216020
	ctx.lr = 0x83217128;
	sub_83216020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r11.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217158
	if (cr6.eq) goto loc_83217158;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217158
	if (cr6.eq) goto loc_83217158;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_83217158:
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

__attribute__((alias("__imp__sub_8321716C"))) PPC_WEAK_FUNC(sub_8321716C);
PPC_FUNC_IMPL(__imp__sub_8321716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217170"))) PPC_WEAK_FUNC(sub_83217170);
PPC_FUNC_IMPL(__imp__sub_83217170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r8,0,15,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ctx.r7.u64;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83217198"))) PPC_WEAK_FUNC(sub_83217198);
PPC_FUNC_IMPL(__imp__sub_83217198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832171A0;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217278
	if (cr6.eq) goto loc_83217278;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x832171d0
	if (cr6.eq) goto loc_832171D0;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x8321721c
	if (!cr6.eq) goto loc_8321721C;
loc_832171D0:
	// li r4,16
	ctx.r4.s64 = 16;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8322a890
	ctx.lr = 0x832171DC;
	sub_8322A890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321721c
	if (cr6.eq) goto loc_8321721C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83217278
	if (!cr6.eq) goto loc_83217278;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x83217210;
	sub_8322DFB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8321721C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x83217228;
	sub_83221C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83217254
	if (cr6.eq) goto loc_83217254;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8321725c
	if (!cr6.eq) goto loc_8321725C;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x83217248;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8321725c
	if (!cr6.eq) goto loc_8321725C;
loc_83217254:
	// bl 0x83227908
	ctx.lr = 0x83217258;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8321725C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30148
	ctx.r4.s64 = ctx.r11.s64 + -30148;
	// addi r3,r10,-30412
	ctx.r3.s64 = ctx.r10.s64 + -30412;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83217278;
	sub_832085E8(ctx, base);
loc_83217278:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83217284"))) PPC_WEAK_FUNC(sub_83217284);
PPC_FUNC_IMPL(__imp__sub_83217284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217288"))) PPC_WEAK_FUNC(sub_83217288);
PPC_FUNC_IMPL(__imp__sub_83217288) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83217398
	if (cr6.eq) goto loc_83217398;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r4,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r4.u32);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832172d0
	if (cr6.eq) goto loc_832172D0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r10,26,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x20000000;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
loc_832172D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83239018
	ctx.lr = 0x832172D8;
	sub_83239018(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 16777216;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x8322de40
	ctx.lr = 0x832172EC;
	sub_8322DE40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8321731c
	if (cr6.eq) goto loc_8321731C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8321731c
	if (cr6.eq) goto loc_8321731C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x8321731C;
	sub_83266348(ctx, base);
loc_8321731C:
	// lhz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321733c
	if (cr6.eq) goto loc_8321733C;
	// lhz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r10,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r10.u16);
	// sth r9,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r9.u16);
loc_8321733C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214460
	ctx.lr = 0x83217350;
	sub_83214460(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r10,1024
	ctx.r8.u64 = ctx.r10.u64 | 1024;
	// ori r7,r9,144
	ctx.r7.u64 = ctx.r9.u64 | 144;
	// sth r8,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r8.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// bl 0x8322b0b8
	ctx.lr = 0x83217378;
	sub_8322B0B8(ctx, base);
	// lis r6,-31748
	ctx.r6.s64 = -2080636928;
	// addi r5,r6,24688
	ctx.r5.s64 = ctx.r6.s64 + 24688;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217398
	if (cr6.eq) goto loc_83217398;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// oris r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 524288;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83217398:
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

__attribute__((alias("__imp__sub_832173AC"))) PPC_WEAK_FUNC(sub_832173AC);
PPC_FUNC_IMPL(__imp__sub_832173AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832173B0"))) PPC_WEAK_FUNC(sub_832173B0);
PPC_FUNC_IMPL(__imp__sub_832173B0) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x832173D0;
	sub_83294018(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_832173EC"))) PPC_WEAK_FUNC(sub_832173EC);
PPC_FUNC_IMPL(__imp__sub_832173EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832173F0"))) PPC_WEAK_FUNC(sub_832173F0);
PPC_FUNC_IMPL(__imp__sub_832173F0) {
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
	// lhz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,1144
	cr6.compare<uint32_t>(ctx.r30.u32, 1144, xer);
	// bgt cr6,0x83217444
	if (cr6.gt) goto loc_83217444;
	// beq cr6,0x83217454
	if (cr6.eq) goto loc_83217454;
	// cmplwi cr6,r30,1088
	cr6.compare<uint32_t>(ctx.r30.u32, 1088, xer);
	// blt cr6,0x83217428
	if (cr6.lt) goto loc_83217428;
	// cmplwi cr6,r30,1127
	cr6.compare<uint32_t>(ctx.r30.u32, 1127, xer);
	// ble cr6,0x83217454
	if (!cr6.gt) goto loc_83217454;
loc_83217428:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8321742C:
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
loc_83217444:
	// cmplwi cr6,r11,2067
	cr6.compare<uint32_t>(ctx.r11.u32, 2067, xer);
	// blt cr6,0x83217428
	if (cr6.lt) goto loc_83217428;
	// cmplwi cr6,r11,2069
	cr6.compare<uint32_t>(ctx.r11.u32, 2069, xer);
	// bgt cr6,0x83217428
	if (cr6.gt) goto loc_83217428;
loc_83217454:
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
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
	// beq cr6,0x83217480
	if (cr6.eq) goto loc_83217480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83217480;
	sub_83222030(ctx, base);
loc_83217480:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// li r10,122
	ctx.r10.s64 = 122;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// b 0x8321742c
	goto loc_8321742C;
}

__attribute__((alias("__imp__sub_8321749C"))) PPC_WEAK_FUNC(sub_8321749C);
PPC_FUNC_IMPL(__imp__sub_8321749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832174A0"))) PPC_WEAK_FUNC(sub_832174A0);
PPC_FUNC_IMPL(__imp__sub_832174A0) {
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
	// beq cr6,0x832174e8
	if (cr6.eq) goto loc_832174E8;
loc_832174BC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832174dc
	if (!cr6.eq) goto loc_832174DC;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x832174a0
	ctx.lr = 0x832174DC;
	sub_832174A0(ctx, base);
loc_832174DC:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832174bc
	if (!cr6.eq) goto loc_832174BC;
loc_832174E8:
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

__attribute__((alias("__imp__sub_832174FC"))) PPC_WEAK_FUNC(sub_832174FC);
PPC_FUNC_IMPL(__imp__sub_832174FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217500"))) PPC_WEAK_FUNC(sub_83217500);
PPC_FUNC_IMPL(__imp__sub_83217500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x832174a0
	sub_832174A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8321750C"))) PPC_WEAK_FUNC(sub_8321750C);
PPC_FUNC_IMPL(__imp__sub_8321750C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83217510"))) PPC_WEAK_FUNC(sub_83217510);
PPC_FUNC_IMPL(__imp__sub_83217510) {
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
loc_83217524:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83217564
	if (cr6.eq) goto loc_83217564;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8321753c
	if (cr6.eq) goto loc_8321753C;
	// bl 0x83217510
	ctx.lr = 0x8321753C;
	sub_83217510(ctx, base);
loc_8321753C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83217554
	if (!cr6.eq) goto loc_83217554;
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// b 0x83217524
	goto loc_83217524;
loc_83217554:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r11.u8);
	// bl 0x83214238
	ctx.lr = 0x83217564;
	sub_83214238(ctx, base);
loc_83217564:
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

__attribute__((alias("__imp__sub_83217578"))) PPC_WEAK_FUNC(sub_83217578);
PPC_FUNC_IMPL(__imp__sub_83217578) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832175d8
	if (!cr6.eq) goto loc_832175D8;
	// lhz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 82);
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832175b8
	if (cr6.eq) goto loc_832175B8;
	// bl 0x83215208
	ctx.lr = 0x832175B8;
	sub_83215208(ctx, base);
loc_832175B8:
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832175d8
	if (cr6.eq) goto loc_832175D8;
loc_832175C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217578
	ctx.lr = 0x832175CC;
	sub_83217578(ctx, base);
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832175c4
	if (!cr6.eq) goto loc_832175C4;
loc_832175D8:
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

__attribute__((alias("__imp__sub_832175EC"))) PPC_WEAK_FUNC(sub_832175EC);
PPC_FUNC_IMPL(__imp__sub_832175EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832175F0"))) PPC_WEAK_FUNC(sub_832175F0);
PPC_FUNC_IMPL(__imp__sub_832175F0) {
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
	// lbz r11,81(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83217624
	if (cr6.lt) goto loc_83217624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83260c60
	ctx.lr = 0x83217620;
	sub_83260C60(ctx, base);
	// b 0x83217654
	goto loc_83217654;
loc_83217624:
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83217654
	if (cr6.eq) goto loc_83217654;
loc_83217630:
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83217648
	if (cr6.lt) goto loc_83217648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832175f0
	ctx.lr = 0x83217648;
	sub_832175F0(ctx, base);
loc_83217648:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83217630
	if (!cr6.eq) goto loc_83217630;
loc_83217654:
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

__attribute__((alias("__imp__sub_8321766C"))) PPC_WEAK_FUNC(sub_8321766C);
PPC_FUNC_IMPL(__imp__sub_8321766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217670"))) PPC_WEAK_FUNC(sub_83217670);
PPC_FUNC_IMPL(__imp__sub_83217670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8321767C:
	// lbz r11,81(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 81);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x832176a4
	if (cr6.eq) goto loc_832176A4;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8321767c
	if (!cr6.eq) goto loc_8321767C;
	// blr 
	return;
loc_832176A4:
	// b 0x832175f0
	sub_832175F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832176A8"))) PPC_WEAK_FUNC(sub_832176A8);
PPC_FUNC_IMPL(__imp__sub_832176A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217724
	if (cr6.eq) goto loc_83217724;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r11,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// rlwinm r8,r10,6,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// andc r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83217700
	if (cr6.eq) goto loc_83217700;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217700
	if (cr6.eq) goto loc_83217700;
	// bl 0x83209d68
	ctx.lr = 0x832176FC;
	sub_83209D68(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_83217700:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// rlwinm r8,r10,0,6,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// sth r30,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r30.u16);
loc_83217724:
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

__attribute__((alias("__imp__sub_8321773C"))) PPC_WEAK_FUNC(sub_8321773C);
PPC_FUNC_IMPL(__imp__sub_8321773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217740"))) PPC_WEAK_FUNC(sub_83217740);
PPC_FUNC_IMPL(__imp__sub_83217740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83217748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// sth r10,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r10.u16);
	// stb r10,10(r4)
	PPC_STORE_U8(ctx.r4.u32 + 10, ctx.r10.u8);
	// beq cr6,0x8321780c
	if (cr6.eq) goto loc_8321780C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r11,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83217794
	if (cr6.eq) goto loc_83217794;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 76);
	// sth r10,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83217794:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8321780c
	if (cr6.eq) goto loc_8321780C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r31,r11,25552
	ctx.r31.s64 = ctx.r11.s64 + 25552;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r9,-30108
	ctx.r5.s64 = ctx.r9.s64 + -30108;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,68(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x832177E4;
	sub_83297A40(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// sth r8,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r8.u16);
loc_8321780C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83217814"))) PPC_WEAK_FUNC(sub_83217814);
PPC_FUNC_IMPL(__imp__sub_83217814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217818"))) PPC_WEAK_FUNC(sub_83217818);
PPC_FUNC_IMPL(__imp__sub_83217818) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83217860
	if (cr6.eq) goto loc_83217860;
loc_83217840:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83217884
	if (!cr6.eq) goto loc_83217884;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83217840
	if (!cr6.eq) goto loc_83217840;
loc_83217860:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832178fc
	if (cr6.eq) goto loc_832178FC;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832178d0
	if (!cr6.eq) goto loc_832178D0;
	// b 0x832178d8
	goto loc_832178D8;
loc_83217884:
	// lwz r31,48(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832178a4
	if (cr6.eq) goto loc_832178A4;
loc_83217894:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83217894
	if (!cr6.eq) goto loc_83217894;
loc_832178A4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83214700
	ctx.lr = 0x832178B0;
	sub_83214700(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83200c10
	ctx.lr = 0x832178B8;
	sub_83200C10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83210238
	ctx.lr = 0x832178C8;
	sub_83210238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832178f0
	goto loc_832178F0;
loc_832178D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_832178D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832178fc
	if (cr6.eq) goto loc_832178FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83200b38
	ctx.lr = 0x832178EC;
	sub_83200B38(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_832178F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831fe368
	ctx.lr = 0x832178FC;
	sub_831FE368(ctx, base);
loc_832178FC:
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

__attribute__((alias("__imp__sub_83217914"))) PPC_WEAK_FUNC(sub_83217914);
PPC_FUNC_IMPL(__imp__sub_83217914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217918"))) PPC_WEAK_FUNC(sub_83217918);
PPC_FUNC_IMPL(__imp__sub_83217918) {
	PPC_FUNC_PROLOGUE();
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83217940
	if (!cr6.eq) goto loc_83217940;
loc_8321792C:
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
loc_83217940:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8321792c
	if (cr6.eq) goto loc_8321792C;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x832131b0
	ctx.lr = 0x83217958;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8321792c
	if (cr6.eq) goto loc_8321792C;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x832133d0
	ctx.lr = 0x8321796C;
	sub_832133D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217988
	if (cr6.eq) goto loc_83217988;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_83217988:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83217998"))) PPC_WEAK_FUNC(sub_83217998);
PPC_FUNC_IMPL(__imp__sub_83217998) {
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
	// bne cr6,0x832179c0
	if (!cr6.eq) goto loc_832179C0;
loc_832179AC:
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
loc_832179C0:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832179ac
	if (cr6.eq) goto loc_832179AC;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x832131b0
	ctx.lr = 0x832179D8;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832179ac
	if (cr6.eq) goto loc_832179AC;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x832133d0
	ctx.lr = 0x832179EC;
	sub_832133D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832179FC"))) PPC_WEAK_FUNC(sub_832179FC);
PPC_FUNC_IMPL(__imp__sub_832179FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217A00"))) PPC_WEAK_FUNC(sub_83217A00);
PPC_FUNC_IMPL(__imp__sub_83217A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83217A08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83217a2c
	if (!cr6.eq) goto loc_83217A2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83217A2C:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832131b0
	ctx.lr = 0x83217A38;
	sub_832131B0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217a94
	if (cr6.eq) goto loc_83217A94;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x832133d0
	ctx.lr = 0x83217A54;
	sub_832133D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217a78
	if (cr6.eq) goto loc_83217A78;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83217b2c
	if (cr6.eq) goto loc_83217B2C;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_83217A78:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c388
	ctx.lr = 0x83217A8C;
	sub_8322C388(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83217b2c
	if (!cr6.eq) goto loc_83217B2C;
loc_83217A94:
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832131b0
	ctx.lr = 0x83217AA0;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217b2c
	if (cr6.eq) goto loc_83217B2C;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83215bc0
	ctx.lr = 0x83217AC0;
	sub_83215BC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83217b18
	if (!cr6.eq) goto loc_83217B18;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217b2c
	if (cr6.eq) goto loc_83217B2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lhz r30,86(r30)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r30.u32 + 86);
	// bl 0x83225c80
	ctx.lr = 0x83217AE8;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,-30412
	ctx.r9.s64 = ctx.r11.s64 + -30412;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-30096
	ctx.r4.s64 = ctx.r10.s64 + -30096;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r7,r29,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// bl 0x832085e8
	ctx.lr = 0x83217B0C;
	sub_832085E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83217B18:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c388
	ctx.lr = 0x83217B2C;
	sub_8322C388(ctx, base);
loc_83217B2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83217B38"))) PPC_WEAK_FUNC(sub_83217B38);
PPC_FUNC_IMPL(__imp__sub_83217B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83217B40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r27,r4,24
	ctx.r27.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83217b70
	if (cr6.eq) goto loc_83217B70;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217b70
	if (cr6.eq) goto loc_83217B70;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x8322b7d0
	ctx.lr = 0x83217B6C;
	sub_8322B7D0(ctx, base);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
loc_83217B70:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83217c24
	if (!cr6.gt) goto loc_83217C24;
loc_83217B84:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217c0c
	if (cr6.eq) goto loc_83217C0C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83217ba8
	if (!cr6.eq) goto loc_83217BA8;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x83217c0c
	if (cr6.eq) goto loc_83217C0C;
loc_83217BA8:
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// bne cr6,0x83217bd4
	if (!cr6.eq) goto loc_83217BD4;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x832133d0
	ctx.lr = 0x83217BBC;
	sub_832133D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217c04
	if (cr6.eq) goto loc_83217C04;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,22
	ctx.r4.s64 = 22;
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// b 0x83217bfc
	goto loc_83217BFC;
loc_83217BD4:
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bne cr6,0x83217c04
	if (!cr6.eq) goto loc_83217C04;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x832133d0
	ctx.lr = 0x83217BE8;
	sub_832133D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217c04
	if (cr6.eq) goto loc_83217C04;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r4,21
	ctx.r4.s64 = 21;
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_83217BFC:
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x8322b7d0
	ctx.lr = 0x83217C04;
	sub_8322B7D0(ctx, base);
loc_83217C04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322a9e8
	ctx.lr = 0x83217C0C;
	sub_8322A9E8(ctx, base);
loc_83217C0C:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x83217b84
	if (cr6.lt) goto loc_83217B84;
loc_83217C24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832899e8
	ctx.lr = 0x83217C2C;
	sub_832899E8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r11,0,23,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFC1FF;
	// rlwinm r10,r10,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83217C44"))) PPC_WEAK_FUNC(sub_83217C44);
PPC_FUNC_IMPL(__imp__sub_83217C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217C48"))) PPC_WEAK_FUNC(sub_83217C48);
PPC_FUNC_IMPL(__imp__sub_83217C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83217C50;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83217e0c
	if (cr6.eq) goto loc_83217E0C;
	// li r25,12288
	ctx.r25.s64 = 12288;
loc_83217C74:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83217c9c
	if (cr6.eq) goto loc_83217C9C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,12288
	cr6.compare<int32_t>(ctx.r11.s32, 12288, xer);
	// bge cr6,0x83217c94
	if (!cr6.lt) goto loc_83217C94;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_83217C94:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// b 0x83217dac
	goto loc_83217DAC;
loc_83217C9C:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217d2c
	if (cr6.eq) goto loc_83217D2C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266af0
	ctx.lr = 0x83217CC4;
	sub_83266AF0(ctx, base);
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x83217cd4
	if (!cr6.eq) goto loc_83217CD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83217cec
	goto loc_83217CEC;
loc_83217CD4:
	// cmpwi cr6,r3,-1000
	cr6.compare<int32_t>(ctx.r3.s32, -1000, xer);
	// bgt cr6,0x83217ce8
	if (cr6.gt) goto loc_83217CE8;
	// cmpwi cr6,r3,-3000
	cr6.compare<int32_t>(ctx.r3.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83217cec
	if (cr6.gt) goto loc_83217CEC;
loc_83217CE8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83217CEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83217d20
	if (!cr6.eq) goto loc_83217D20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83216950
	ctx.lr = 0x83217D00;
	sub_83216950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217d20
	if (cr6.eq) goto loc_83217D20;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266a90
	ctx.lr = 0x83217D20;
	sub_83266A90(ctx, base);
loc_83217D20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83217D28;
	sub_83222030(ctx, base);
	// b 0x83217d54
	goto loc_83217D54;
loc_83217D2C:
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83217d4c
	if (cr6.eq) goto loc_83217D4C;
loc_83217D38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83215290
	ctx.lr = 0x83217D40;
	sub_83215290(ctx, base);
	// lwz r30,64(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83217d38
	if (!cr6.eq) goto loc_83217D38;
loc_83217D4C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8322de40
	ctx.lr = 0x83217D54;
	sub_8322DE40(ctx, base);
loc_83217D54:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83217d70
	if (!cr6.eq) goto loc_83217D70;
	// stw r11,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r11.u32);
	// b 0x83217d74
	goto loc_83217D74;
loc_83217D70:
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
loc_83217D74:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217d88
	if (cr6.eq) goto loc_83217D88;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_83217D88:
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83217d98
	if (cr6.eq) goto loc_83217D98;
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
loc_83217D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x832142b8
	ctx.lr = 0x83217DA4;
	sub_832142B8(ctx, base);
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83217DAC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83217c74
	if (!cr6.eq) goto loc_83217C74;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83217e0c
	if (cr6.eq) goto loc_83217E0C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83217dd4
	if (!cr6.eq) goto loc_83217DD4;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r29,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
	// stw r27,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
	// b 0x83217de0
	goto loc_83217DE0;
loc_83217DD4:
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// stw r29,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r29.u32);
	// stw r26,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r26.u32);
loc_83217DE0:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83217dfc
	if (cr6.eq) goto loc_83217DFC;
loc_83217DEC:
	// lwz r29,64(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83217dec
	if (!cr6.eq) goto loc_83217DEC;
loc_83217DFC:
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217e0c
	if (cr6.eq) goto loc_83217E0C;
	// stw r29,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r29.u32);
loc_83217E0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83217E14"))) PPC_WEAK_FUNC(sub_83217E14);
PPC_FUNC_IMPL(__imp__sub_83217E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83217E18"))) PPC_WEAK_FUNC(sub_83217E18);
PPC_FUNC_IMPL(__imp__sub_83217E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83217E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217ef0
	if (cr6.eq) goto loc_83217EF0;
loc_83217E3C:
	// lwz r3,56(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83217e8c
	if (cr6.eq) goto loc_83217E8C;
loc_83217E48:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x83217ed8
	if (cr6.eq) goto loc_83217ED8;
	// ble cr6,0x83217e70
	if (!cr6.gt) goto loc_83217E70;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83217e6c
	if (cr6.eq) goto loc_83217E6C;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x83217e70
	if (!cr6.gt) goto loc_83217E70;
loc_83217E6C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83217E70:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83217e48
	if (!cr6.eq) goto loc_83217E48;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83217e8c
	if (cr6.eq) goto loc_83217E8C;
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
loc_83217E8C:
	// bl 0x83234de8
	ctx.lr = 0x83217E90;
	sub_83234DE8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// ori r7,r9,128
	ctx.r7.u64 = ctx.r9.u64 | 128;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83217ec0
	if (cr6.eq) goto loc_83217EC0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// oris r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 524288;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83217EC0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83217f18
	if (!cr6.eq) goto loc_83217F18;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r8.u32);
	// stw r11,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r11.u32);
	// b 0x83217f20
	goto loc_83217F20;
loc_83217ED8:
	// li r4,12288
	ctx.r4.s64 = 12288;
	// bl 0x832140b0
	ctx.lr = 0x83217EE0;
	sub_832140B0(ctx, base);
	// bl 0x832142b8
	ctx.lr = 0x83217EE4;
	sub_832142B8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83217e3c
	goto loc_83217E3C;
loc_83217EF0:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,-30064
	ctx.r4.s64 = ctx.r10.s64 + -30064;
	// addi r3,r9,-30412
	ctx.r3.s64 = ctx.r9.s64 + -30412;
	// bl 0x83208330
	ctx.lr = 0x83217F0C;
	sub_83208330(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83217F18:
	// stw r31,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r31.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
loc_83217F20:
	// stw r30,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83217f30
	if (cr6.eq) goto loc_83217F30;
	// stw r8,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r8.u32);
loc_83217F30:
	// lwz r11,268(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// stw r11,268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 268, ctx.r11.u32);
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwimi r9,r10,0,3,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFDFFFFFFF) | (ctx.r9.u64 & 0x20000000);
	// stw r9,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// stw r29,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r29.u32);
	// stw r28,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r28.u32);
	// lhz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 88);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,88(r8)
	PPC_STORE_U16(ctx.r8.u32 + 88, ctx.r6.u16);
	// bl 0x832141d0
	ctx.lr = 0x83217F64;
	sub_832141D0(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83217F70"))) PPC_WEAK_FUNC(sub_83217F70);
PPC_FUNC_IMPL(__imp__sub_83217F70) {
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
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832181ac
	if (cr6.eq) goto loc_832181AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8321804c
	if (cr6.eq) goto loc_8321804C;
	// rlwinm r11,r11,0,21,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FE;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83217fd4
	if (!cr6.eq) goto loc_83217FD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// bl 0x83258e90
	ctx.lr = 0x83217FBC;
	sub_83258E90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,21,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83217fd4
	if (!cr6.eq) goto loc_83217FD4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x832181b0
	goto loc_832181B0;
loc_83217FD4:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8321804c
	if (!cr6.gt) goto loc_8321804C;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83217FF0:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// beq cr6,0x83218014
	if (cr6.eq) goto loc_83218014;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x83217ff0
	if (cr6.lt) goto loc_83217FF0;
	// b 0x8321804c
	goto loc_8321804C;
loc_83218014:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321804c
	if (cr6.eq) goto loc_8321804C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321804c
	if (cr6.eq) goto loc_8321804C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r11,26,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x20000000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_8321804C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,31,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x3FF;
	// cmplwi cr6,r10,121
	cr6.compare<uint32_t>(ctx.r10.u32, 121, xer);
	// beq cr6,0x83218130
	if (cr6.eq) goto loc_83218130;
	// cmplwi cr6,r10,131
	cr6.compare<uint32_t>(ctx.r10.u32, 131, xer);
	// beq cr6,0x832180ec
	if (cr6.eq) goto loc_832180EC;
	// cmplwi cr6,r10,132
	cr6.compare<uint32_t>(ctx.r10.u32, 132, xer);
	// beq cr6,0x83218098
	if (cr6.eq) goto loc_83218098;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x83213310
	ctx.lr = 0x83218088;
	sub_83213310(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 33554432;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// b 0x832181ac
	goto loc_832181AC;
loc_83218098:
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832180d4
	if (cr6.eq) goto loc_832180D4;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,262
	ctx.r8.s64 = 262;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r7,0,25,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// bl 0x83213048
	ctx.lr = 0x832180D4;
	sub_83213048(ctx, base);
loc_832180D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215368
	ctx.lr = 0x832180DC;
	sub_83215368(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x832181ac
	goto loc_832181AC;
loc_832180EC:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r10,130
	ctx.r10.s64 = 130;
	// li r9,264
	ctx.r9.s64 = 264;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// bl 0x83262418
	ctx.lr = 0x83218118;
	sub_83262418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215368
	ctx.lr = 0x83218120;
	sub_83215368(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r6,r7,512
	ctx.r6.u64 = ctx.r7.u64 | 33554432;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// b 0x832181ac
	goto loc_832181AC;
loc_83218130:
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83218154
	if (cr6.eq) goto loc_83218154;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
loc_83218154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83215368
	ctx.lr = 0x8321815C;
	sub_83215368(ctx, base);
	// lhz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321817c
	if (cr6.eq) goto loc_8321817C;
	// lhz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r10,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r10.u16);
	// sth r9,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r9.u16);
loc_8321817C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214460
	ctx.lr = 0x83218190;
	sub_83214460(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832181ac
	if (cr6.eq) goto loc_832181AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// bl 0x83213048
	ctx.lr = 0x832181AC;
	sub_83213048(ctx, base);
loc_832181AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832181B0:
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

__attribute__((alias("__imp__sub_832181C8"))) PPC_WEAK_FUNC(sub_832181C8);
PPC_FUNC_IMPL(__imp__sub_832181C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832181D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,86(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 86);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// beq cr6,0x832182c4
	if (cr6.eq) goto loc_832182C4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x832181fc
	if (!cr6.eq) goto loc_832181FC;
	// lhz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 228);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,228(r3)
	PPC_STORE_U16(ctx.r3.u32 + 228, ctx.r10.u16);
loc_832181FC:
	// sth r31,86(r29)
	PPC_STORE_U16(ctx.r29.u32 + 86, ctx.r31.u16);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// ble cr6,0x83218250
	if (!cr6.gt) goto loc_83218250;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// bge cr6,0x83218234
	if (!cr6.lt) goto loc_83218234;
loc_83218214:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214460
	ctx.lr = 0x83218228;
	sub_83214460(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// blt cr6,0x83218214
	if (cr6.lt) goto loc_83218214;
loc_83218234:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214460
	ctx.lr = 0x83218248;
	sub_83214460(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83218250:
	// bge cr6,0x832182c4
	if (!cr6.lt) goto loc_832182C4;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321827c
	if (cr6.eq) goto loc_8321827C;
loc_83218260:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,14,16,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83218260
	if (!cr6.eq) goto loc_83218260;
loc_8321827C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832182a8
	if (!cr6.gt) goto loc_832182A8;
loc_83218288:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214460
	ctx.lr = 0x8321829C;
	sub_83214460(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// blt cr6,0x83218288
	if (cr6.lt) goto loc_83218288;
loc_832182A8:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83214460
	ctx.lr = 0x832182BC;
	sub_83214460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83217c48
	ctx.lr = 0x832182C4;
	sub_83217C48(ctx, base);
loc_832182C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832182CC"))) PPC_WEAK_FUNC(sub_832182CC);
PPC_FUNC_IMPL(__imp__sub_832182CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832182D0"))) PPC_WEAK_FUNC(sub_832182D0);
PPC_FUNC_IMPL(__imp__sub_832182D0) {
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
	// bl 0x832181c8
	ctx.lr = 0x832182EC;
	sub_832181C8(ctx, base);
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832183b0
	if (cr6.eq) goto loc_832183B0;
loc_832182F8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832183a4
	if (!cr6.eq) goto loc_832183A4;
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832183a4
	if (!cr6.eq) goto loc_832183A4;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218334
	if (cr6.eq) goto loc_83218334;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218354
	if (cr6.eq) goto loc_83218354;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// b 0x8321833c
	goto loc_8321833C;
loc_83218334:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x83213d30
	ctx.lr = 0x8321833C;
	sub_83213D30(ctx, base);
loc_8321833C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83218354
	if (cr6.eq) goto loc_83218354;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x83218364
	if (cr6.gt) goto loc_83218364;
loc_83218354:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x832183a4
	goto loc_832183A4;
loc_83218364:
	// lhz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 232);
	// twllei r11,0
	// lhz r9,86(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 86);
	// lhz r8,86(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r6,r7,r11
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// andc r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// twlgei r11,-1
	// beq cr6,0x832183a4
	if (cr6.eq) goto loc_832183A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832182d0
	ctx.lr = 0x832183A4;
	sub_832182D0(ctx, base);
loc_832183A4:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832182f8
	if (!cr6.eq) goto loc_832182F8;
loc_832183B0:
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

__attribute__((alias("__imp__sub_832183C8"))) PPC_WEAK_FUNC(sub_832183C8);
PPC_FUNC_IMPL(__imp__sub_832183C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83214700
	ctx.lr = 0x832183E8;
	sub_83214700(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83200b78
	ctx.lr = 0x832183F0;
	sub_83200B78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fc3a0
	ctx.lr = 0x83218400;
	sub_831FC3A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83218444"))) PPC_WEAK_FUNC(sub_83218444);
PPC_FUNC_IMPL(__imp__sub_83218444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83218448"))) PPC_WEAK_FUNC(sub_83218448);
PPC_FUNC_IMPL(__imp__sub_83218448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83218450;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lhz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r24,r11,24688
	ctx.r24.s64 = ctx.r11.s64 + 24688;
	// clrlwi r31,r10,31
	ctx.r31.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r29,r10,0,29,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// rlwinm r30,r10,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm r25,r9,0,30,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// rlwinm r26,r9,24,8,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x832184b0
	if (cr6.eq) goto loc_832184B0;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// bne cr6,0x832184b8
	if (!cr6.eq) goto loc_832184B8;
loc_832184B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832184bc
	goto loc_832184BC;
loc_832184B8:
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
loc_832184BC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x832184c8
	if (cr6.eq) goto loc_832184C8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_832184C8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r9,r11,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832184e4
	if (cr6.eq) goto loc_832184E4;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x832184e4
	if (!cr6.eq) goto loc_832184E4;
	// li r18,2
	ctx.r18.s64 = 2;
loc_832184E4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83218508
	if (cr6.eq) goto loc_83218508;
loc_832184EC:
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// beq cr6,0x83218504
	if (cr6.eq) goto loc_83218504;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832184ec
	if (!cr6.eq) goto loc_832184EC;
	// b 0x83218508
	goto loc_83218508;
loc_83218504:
	// li r19,2
	ctx.r19.s64 = 2;
loc_83218508:
	// bl 0x83201e38
	ctx.lr = 0x8321850C;
	sub_83201E38(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8321851c
	if (cr6.eq) goto loc_8321851C;
	// li r20,4
	ctx.r20.s64 = 4;
loc_8321851C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83289ac8
	ctx.lr = 0x8321852C;
	sub_83289AC8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83289ac8
	ctx.lr = 0x83218540;
	sub_83289AC8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x832189c8
	if (cr6.eq) goto loc_832189C8;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// beq cr6,0x832185d0
	if (cr6.eq) goto loc_832185D0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83218590
	if (!cr6.eq) goto loc_83218590;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x832185d0
	if (cr6.eq) goto loc_832185D0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8322de40
	ctx.lr = 0x8321856C;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832185d0
	if (cr6.eq) goto loc_832185D0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832185d0
	if (cr6.eq) goto loc_832185D0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x832185c0
	goto loc_832185C0;
loc_83218590:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bne cr6,0x832185d0
	if (!cr6.eq) goto loc_832185D0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8322de40
	ctx.lr = 0x832185A0;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832185d0
	if (cr6.eq) goto loc_832185D0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832185d0
	if (cr6.eq) goto loc_832185D0;
	// li r4,5
	ctx.r4.s64 = 5;
loc_832185C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x832185D0;
	sub_83266348(ctx, base);
loc_832185D0:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x832185e4
	if (!cr6.eq) goto loc_832185E4;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// beq cr6,0x83218750
	if (cr6.eq) goto loc_83218750;
	// b 0x832186e0
	goto loc_832186E0;
loc_832185E4:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// bne cr6,0x83218664
	if (!cr6.eq) goto loc_83218664;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8322de40
	ctx.lr = 0x832185F4;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218624
	if (cr6.eq) goto loc_83218624;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83218624
	if (cr6.eq) goto loc_83218624;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83218624;
	sub_83266348(ctx, base);
loc_83218624:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8322de40
	ctx.lr = 0x8321862C;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321865c
	if (cr6.eq) goto loc_8321865C;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8321865c
	if (cr6.eq) goto loc_8321865C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x8321865C;
	sub_83266348(ctx, base);
loc_8321865C:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// beq cr6,0x83218750
	if (cr6.eq) goto loc_83218750;
loc_83218664:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218750
	if (cr6.eq) goto loc_83218750;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x8322de40
	ctx.lr = 0x83218678;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832186a8
	if (cr6.eq) goto loc_832186A8;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832186a8
	if (cr6.eq) goto loc_832186A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x832186A8;
	sub_83266348(ctx, base);
loc_832186A8:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8322de40
	ctx.lr = 0x832186B0;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832186e0
	if (cr6.eq) goto loc_832186E0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832186e0
	if (cr6.eq) goto loc_832186E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x832186E0;
	sub_83266348(ctx, base);
loc_832186E0:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8322de40
	ctx.lr = 0x832186E8;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218718
	if (cr6.eq) goto loc_83218718;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83218718
	if (cr6.eq) goto loc_83218718;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83218718;
	sub_83266348(ctx, base);
loc_83218718:
	// li r3,33
	ctx.r3.s64 = 33;
	// bl 0x8322de40
	ctx.lr = 0x83218720;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218750
	if (cr6.eq) goto loc_83218750;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83218750
	if (cr6.eq) goto loc_83218750;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83218750;
	sub_83266348(ctx, base);
loc_83218750:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// bne cr6,0x832188fc
	if (!cr6.eq) goto loc_832188FC;
	// cmpwi cr6,r23,3
	cr6.compare<int32_t>(ctx.r23.s32, 3, xer);
	// beq cr6,0x83218770
	if (cr6.eq) goto loc_83218770;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(ctx.r23.s32, 1, xer);
	// bne cr6,0x832188fc
	if (!cr6.eq) goto loc_832188FC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x832188fc
	if (cr6.eq) goto loc_832188FC;
loc_83218770:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218794
	if (cr6.eq) goto loc_83218794;
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218794
	if (cr6.eq) goto loc_83218794;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
loc_83218794:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x83218844
	if (cr6.eq) goto loc_83218844;
	// lwz r7,24(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83218844
	if (cr6.eq) goto loc_83218844;
	// dcbt r0,r7
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83218844
	if (!cr6.gt) goto loc_83218844;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832187D4:
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,82
	cr6.compare<uint32_t>(ctx.r6.u32, 82, xer);
	// beq cr6,0x832187f8
	if (cr6.eq) goto loc_832187F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x832187d4
	if (cr6.lt) goto loc_832187D4;
	// b 0x83218844
	goto loc_83218844;
loc_832187F8:
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x83220448
	ctx.lr = 0x83218800;
	sub_83220448(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83218814
	if (!cr6.eq) goto loc_83218814;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x83218818
	goto loc_83218818;
loc_83218814:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_83218818:
	// fsubs f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83218834
	if (cr6.lt) goto loc_83218834;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83218834:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218844
	if (cr6.eq) goto loc_83218844;
	// li r31,1
	ctx.r31.s64 = 1;
loc_83218844:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218898
	if (cr6.eq) goto loc_83218898;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x8322de40
	ctx.lr = 0x83218858;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218888
	if (cr6.eq) goto loc_83218888;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83218888
	if (cr6.eq) goto loc_83218888;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83218888;
	sub_83266348(ctx, base);
loc_83218888:
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322b7d0
	ctx.lr = 0x83218894;
	sub_8322B7D0(ctx, base);
	// b 0x832188fc
	goto loc_832188FC;
loc_83218898:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8322de40
	ctx.lr = 0x832188A0;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832188d0
	if (cr6.eq) goto loc_832188D0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832188d0
	if (cr6.eq) goto loc_832188D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x832188D0;
	sub_83266348(ctx, base);
loc_832188D0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832188fc
	if (cr6.eq) goto loc_832188FC;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832188ec
	if (!cr6.eq) goto loc_832188EC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x832188f0
	goto loc_832188F0;
loc_832188EC:
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
loc_832188F0:
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322c038
	ctx.lr = 0x832188FC;
	sub_8322C038(ctx, base);
loc_832188FC:
	// rlwinm r11,r17,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x1FC;
	// rlwinm r11,r11,0,29,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832189c8
	if (cr6.eq) goto loc_832189C8;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// beq cr6,0x832189c8
	if (cr6.eq) goto loc_832189C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83201f28
	ctx.lr = 0x8321891C;
	sub_83201F28(ctx, base);
	// rlwinm r11,r17,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218978
	if (cr6.eq) goto loc_83218978;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83218940
	if (!cr6.eq) goto loc_83218940;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83218978
	if (cr6.eq) goto loc_83218978;
loc_83218940:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8322de40
	ctx.lr = 0x83218948;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218978
	if (cr6.eq) goto loc_83218978;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83218978
	if (cr6.eq) goto loc_83218978;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83218978;
	sub_83266348(ctx, base);
loc_83218978:
	// rlwinm r11,r17,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832189c8
	if (cr6.eq) goto loc_832189C8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832189c8
	if (cr6.eq) goto loc_832189C8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8322de40
	ctx.lr = 0x83218998;
	sub_8322DE40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832189c8
	if (cr6.eq) goto loc_832189C8;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832189c8
	if (cr6.eq) goto loc_832189C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x832189C8;
	sub_83266348(ctx, base);
loc_832189C8:
	// rlwinm r11,r23,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 | ctx.r19.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r21
	ctx.r8.u64 = ctx.r9.u64 | ctx.r21.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r18
	ctx.r6.u64 = ctx.r7.u64 | ctx.r18.u64;
	// or r5,r6,r20
	ctx.r5.u64 = ctx.r6.u64 | ctx.r20.u64;
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stw r4,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r4.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832189F8"))) PPC_WEAK_FUNC(sub_832189F8);
PPC_FUNC_IMPL(__imp__sub_832189F8) {
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
	// beq cr6,0x83218ac8
	if (cr6.eq) goto loc_83218AC8;
loc_83218A14:
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83218a7c
	if (cr6.eq) goto loc_83218A7C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83218a54
	if (cr6.eq) goto loc_83218A54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213dd8
	ctx.lr = 0x83218A44;
	sub_83213DD8(ctx, base);
	// lhz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83218a64
	if (!cr6.lt) goto loc_83218A64;
loc_83218A54:
	// lwz r31,52(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83218a14
	if (!cr6.eq) goto loc_83218A14;
	// b 0x83218ac8
	goto loc_83218AC8;
loc_83218A64:
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
loc_83218A7C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83218aac
	if (!cr6.eq) goto loc_83218AAC;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218aa0
	if (cr6.eq) goto loc_83218AA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
loc_83218AA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218ac8
	if (cr6.eq) goto loc_83218AC8;
loc_83218AAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213dd8
	ctx.lr = 0x83218AB4;
	sub_83213DD8(ctx, base);
	// lhz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83218acc
	if (!cr6.lt) goto loc_83218ACC;
loc_83218AC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83218ACC:
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

__attribute__((alias("__imp__sub_83218AE0"))) PPC_WEAK_FUNC(sub_83218AE0);
PPC_FUNC_IMPL(__imp__sub_83218AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83218b1c
	if (cr6.eq) goto loc_83218B1C;
loc_83218AE8:
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83218b2c
	if (cr6.eq) goto loc_83218B2C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83218b24
	if (!cr6.eq) goto loc_83218B24;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83218ae8
	if (!cr6.eq) goto loc_83218AE8;
loc_83218B1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83218B24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83218B2C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83218b24
	if (!cr6.eq) goto loc_83218B24;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83218b58
	if (!cr6.eq) goto loc_83218B58;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83218B58:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_83218B70"))) PPC_WEAK_FUNC(sub_83218B70);
PPC_FUNC_IMPL(__imp__sub_83218B70) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83218c1c
	if (cr6.eq) goto loc_83218C1C;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83218bb8
	if (cr6.eq) goto loc_83218BB8;
loc_83218BA4:
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// bl 0x832356e0
	ctx.lr = 0x83218BAC;
	sub_832356E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83218ba4
	if (!cr6.eq) goto loc_83218BA4;
loc_83218BB8:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// bl 0x83213c78
	ctx.lr = 0x83218BC8;
	sub_83213C78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83217b38
	ctx.lr = 0x83218BD4;
	sub_83217B38(ctx, base);
	// lhz r9,82(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// lhz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 84);
	// lis r12,-257
	ctx.r12.s64 = -16842752;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ori r12,r12,48895
	ctx.r12.u64 = ctx.r12.u64 | 48895;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// rlwinm r8,r11,0,18,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// and r6,r10,r12
	ctx.r6.u64 = ctx.r10.u64 & ctx.r12.u64;
	// rlwinm r5,r5,0,20,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// rlwinm r4,r4,0,20,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r6,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r6.u32);
	// sth r5,82(r30)
	PPC_STORE_U16(ctx.r30.u32 + 82, ctx.r5.u16);
	// sth r4,84(r30)
	PPC_STORE_U16(ctx.r30.u32 + 84, ctx.r4.u16);
	// b 0x83218c84
	goto loc_83218C84;
loc_83218C1C:
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83218c64
	if (cr6.eq) goto loc_83218C64;
loc_83218C28:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83218c58
	if (!cr6.eq) goto loc_83218C58;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83218c58
	if (cr6.eq) goto loc_83218C58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83218b70
	ctx.lr = 0x83218C58;
	sub_83218B70(ctx, base);
loc_83218C58:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83218c28
	if (!cr6.eq) goto loc_83218C28;
loc_83218C64:
	// lhz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// lhz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 84);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r9,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// rlwinm r8,r8,0,20,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// sth r9,82(r30)
	PPC_STORE_U16(ctx.r30.u32 + 82, ctx.r9.u16);
	// sth r8,84(r30)
	PPC_STORE_U16(ctx.r30.u32 + 84, ctx.r8.u16);
loc_83218C84:
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

__attribute__((alias("__imp__sub_83218C9C"))) PPC_WEAK_FUNC(sub_83218C9C);
PPC_FUNC_IMPL(__imp__sub_83218C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83218CA0"))) PPC_WEAK_FUNC(sub_83218CA0);
PPC_FUNC_IMPL(__imp__sub_83218CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83218CA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 82);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83218d20
	if (cr6.eq) goto loc_83218D20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x8322c870
	ctx.lr = 0x83218CDC;
	sub_8322C870(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r5,r7,0,2,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000000;
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x83218d10
	if (cr6.eq) goto loc_83218D10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83218448
	ctx.lr = 0x83218D10;
	sub_83218448(ctx, base);
loc_83218D10:
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322bf60
	ctx.lr = 0x83218D20;
	sub_8322BF60(ctx, base);
loc_83218D20:
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83218e4c
	if (cr6.eq) goto loc_83218E4C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// addi r29,r11,-30412
	ctx.r29.s64 = ctx.r11.s64 + -30412;
	// addi r28,r10,-30400
	ctx.r28.s64 = ctx.r10.s64 + -30400;
	// addi r30,r9,-22544
	ctx.r30.s64 = ctx.r9.s64 + -22544;
loc_83218D44:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83218e40
	if (!cr6.eq) goto loc_83218E40;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83218dc8
	if (!cr6.eq) goto loc_83218DC8;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,-122
	ctx.r11.s64 = ctx.r11.s64 + -122;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x83218d98
	if (cr6.gt) goto loc_83218D98;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83218e2c
	if (cr6.eq) goto loc_83218E2C;
	// bdz 0x83218d98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83218D98;
	// bdz 0x83218d98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83218D98;
	// bdz 0x83218d98
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83218D98;
	// bdz 0x83218e2c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83218E2C;
	// bdz 0x83218e2c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83218E2C;
	// bdz 0x83218e2c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83218E2C;
	// bdnz 0x83218e2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83218E2C;
loc_83218D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832260e8
	ctx.lr = 0x83218DA0;
	sub_832260E8(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x832085e8
	ctx.lr = 0x83218DBC;
	sub_832085E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83218ca0
	ctx.lr = 0x83218DC4;
	sub_83218CA0(ctx, base);
	// b 0x83218e40
	goto loc_83218E40;
loc_83218DC8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,31,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// addi r11,r11,-121
	ctx.r11.s64 = ctx.r11.s64 + -121;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x83218e38
	if (cr6.gt) goto loc_83218E38;
	// lis r12,-31966
	ctx.r12.s64 = -2094923776;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29196
	ctx.r12.s64 = ctx.r12.s64 + -29196;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83218E2C;
	case 1:
		goto loc_83218E38;
	case 2:
		goto loc_83218E38;
	case 3:
		goto loc_83218E38;
	case 4:
		goto loc_83218E40;
	case 5:
		goto loc_83218E38;
	case 6:
		goto loc_83218E38;
	case 7:
		goto loc_83218E38;
	case 8:
		goto loc_83218E38;
	case 9:
		goto loc_83218E40;
	case 10:
		goto loc_83218E40;
	case 11:
		goto loc_83218E40;
	case 12:
		goto loc_83218E38;
	case 13:
		goto loc_83218E40;
	default:
		return;
	}
	// lwz r25,-29140(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29140);
	// lwz r25,-29128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29128);
	// lwz r25,-29128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29128);
	// lwz r25,-29128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29128);
	// lwz r25,-29120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29120);
	// lwz r25,-29128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29128);
	// lwz r25,-29128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29128);
	// lwz r25,-29128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29128);
	// lwz r25,-29128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29128);
	// lwz r25,-29120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29120);
	// lwz r25,-29120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29120);
	// lwz r25,-29120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29120);
	// lwz r25,-29128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29128);
	// lwz r25,-29120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -29120);
loc_83218E2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83218ca0
	ctx.lr = 0x83218E34;
	sub_83218CA0(ctx, base);
	// b 0x83218e40
	goto loc_83218E40;
loc_83218E38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83213310
	ctx.lr = 0x83218E40;
	sub_83213310(ctx, base);
loc_83218E40:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83218d44
	if (!cr6.eq) goto loc_83218D44;
loc_83218E4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83218E54"))) PPC_WEAK_FUNC(sub_83218E54);
PPC_FUNC_IMPL(__imp__sub_83218E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83218E58"))) PPC_WEAK_FUNC(sub_83218E58);
PPC_FUNC_IMPL(__imp__sub_83218E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83218E60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,25696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25696);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r11.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83218e9c
	if (cr6.eq) goto loc_83218E9C;
	// bl 0x83214238
	ctx.lr = 0x83218E94;
	sub_83214238(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83218E9C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83218ef8
	if (cr6.eq) goto loc_83218EF8;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218ec0
	if (cr6.eq) goto loc_83218EC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83218edc
	goto loc_83218EDC;
loc_83218EC0:
	// lhz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r7,r8,0,22,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F0;
	// rlwinm r7,r7,0,27,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_83218EDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218ef8
	if (cr6.eq) goto loc_83218EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832142b8
	ctx.lr = 0x83218EF0;
	sub_832142B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83218EF8:
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83218f10
	if (cr6.eq) goto loc_83218F10;
	// dcbt r0,r30
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r30
loc_83218F10:
	// rlwinm r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218f2c
	if (cr6.eq) goto loc_83218F2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213228
	ctx.lr = 0x83218F28;
	sub_83213228(ctx, base);
	// li r24,1024
	ctx.r24.s64 = 1024;
loc_83218F2C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83218f54
	if (cr6.eq) goto loc_83218F54;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83218f54
	if (!cr6.eq) goto loc_83218F54;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214ea8
	ctx.lr = 0x83218F54;
	sub_83214EA8(ctx, base);
loc_83218F54:
	// lis r12,512
	ctx.r12.s64 = 33554432;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r12,r12,129
	ctx.r12.u64 = ctx.r12.u64 | 129;
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832191d0
	if (!cr6.eq) goto loc_832191D0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x83218f8c
	if (!cr6.lt) goto loc_83218F8C;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832191d0
	if (!cr6.eq) goto loc_832191D0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
loc_83218F8C:
	// beq cr6,0x832191d0
	if (cr6.eq) goto loc_832191D0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x832189f8
	ctx.lr = 0x83218F98;
	sub_832189F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832191d0
	if (!cr6.eq) goto loc_832191D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213dd8
	ctx.lr = 0x83218FAC;
	sub_83213DD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83218fc0
	if (cr6.gt) goto loc_83218FC0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_83218FC0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r27,r3,-1
	ctx.r27.s64 = ctx.r3.s64 + -1;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lhz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, xer);
	// blt cr6,0x8321900c
	if (cr6.lt) goto loc_8321900C;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8321900c
	if (!cr6.eq) goto loc_8321900C;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321900c
	if (cr6.eq) goto loc_8321900C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 536870912;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8321900C:
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// ori r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 512;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// beq cr6,0x8321903c
	if (cr6.eq) goto loc_8321903C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321903c
	if (cr6.eq) goto loc_8321903C;
	// dcbt r0,r11
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r11
loc_8321903C:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// bge cr6,0x832190a4
	if (!cr6.lt) goto loc_832190A4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x832190a4
	if (cr6.lt) goto loc_832190A4;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x83219068
	if (!cr6.lt) goto loc_83219068;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832182d0
	ctx.lr = 0x83219064;
	sub_832182D0(ctx, base);
	// b 0x832191c0
	goto loc_832191C0;
loc_83219068:
	// lhz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x8321908c
	if (cr6.eq) goto loc_8321908C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83219088
	if (!cr6.eq) goto loc_83219088;
	// lhz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r11.u16);
loc_83219088:
	// sth r29,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r29.u16);
loc_8321908C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214460
	ctx.lr = 0x832190A0;
	sub_83214460(ctx, base);
	// b 0x832191c0
	goto loc_832191C0;
loc_832190A4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832190cc
	if (!cr6.eq) goto loc_832190CC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832190d0
	if (cr6.eq) goto loc_832190D0;
loc_832190CC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_832190D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83219188
	if (!cr6.eq) goto loc_83219188;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83219158
	if (!cr6.eq) goto loc_83219158;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x83219114
	if (cr6.eq) goto loc_83219114;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x83219144
	goto loc_83219144;
loc_83219114:
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83219128
	if (cr6.eq) goto loc_83219128;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x83219144
	goto loc_83219144;
loc_83219128:
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83219140
	if (!cr6.eq) goto loc_83219140;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83219144
	if (!cr6.eq) goto loc_83219144;
loc_83219140:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83219144:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83219188
	if (cr6.eq) goto loc_83219188;
	// bl 0x83201510
	ctx.lr = 0x83219154;
	sub_83201510(ctx, base);
	// b 0x83219188
	goto loc_83219188;
loc_83219158:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83219170
	if (cr6.eq) goto loc_83219170;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x83219188
	goto loc_83219188;
loc_83219170:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x83218ae0
	ctx.lr = 0x83219178;
	sub_83218AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83219188
	if (cr6.eq) goto loc_83219188;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83219188:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832191c0
	if (!cr6.eq) goto loc_832191C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x832191a4
	if (!cr6.lt) goto loc_832191A4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_832191A4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832191bc
	if (cr6.eq) goto loc_832191BC;
	// bl 0x832182d0
	ctx.lr = 0x832191B8;
	sub_832182D0(ctx, base);
	// b 0x832191c0
	goto loc_832191C0;
loc_832191BC:
	// bl 0x832181c8
	ctx.lr = 0x832191C0;
	sub_832181C8(ctx, base);
loc_832191C0:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
loc_832191D0:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r11,r10,6
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwinm r11,r11,0,31,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE000001;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832191ec
	if (!cr6.eq) goto loc_832191EC;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// ori r24,r11,1024
	ctx.r24.u64 = ctx.r11.u64 | 1024;
loc_832191EC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83219230
	if (cr6.eq) goto loc_83219230;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83219218
	if (cr6.eq) goto loc_83219218;
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83219218
	if (cr6.eq) goto loc_83219218;
	// dcbt r0,r11
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r11
loc_83219218:
	// rlwinm r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83219230
	if (cr6.eq) goto loc_83219230;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83214ea8
	ctx.lr = 0x83219230;
	sub_83214EA8(ctx, base);
loc_83219230:
	// lhz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,0,22,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r8,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r8.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83219250"))) PPC_WEAK_FUNC(sub_83219250);
PPC_FUNC_IMPL(__imp__sub_83219250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83219258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83219294
	if (cr6.eq) goto loc_83219294;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83217918
	ctx.lr = 0x83219290;
	sub_83217918(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_83219294:
	// lis r12,256
	ctx.r12.s64 = 16777216;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// ori r12,r12,11776
	ctx.r12.u64 = ctx.r12.u64 | 11776;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83219310
	if (cr6.eq) goto loc_83219310;
	// rlwinm r11,r11,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832192ec
	if (cr6.eq) goto loc_832192EC;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832131b0
	ctx.lr = 0x832192C4;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832192ec
	if (cr6.eq) goto loc_832192EC;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832192ec
	if (cr6.eq) goto loc_832192EC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x832192f0
	goto loc_832192F0;
loc_832192EC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832192F0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83215738
	ctx.lr = 0x83219300;
	sub_83215738(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832156b8
	ctx.lr = 0x8321930C;
	sub_832156B8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_83219310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83219318"))) PPC_WEAK_FUNC(sub_83219318);
PPC_FUNC_IMPL(__imp__sub_83219318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83219320;
	__savegprlr_23(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832196c4
	if (!cr6.eq) goto loc_832196C4;
	// clrlwi r23,r6,24
	ctx.r23.u64 = ctx.r6.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83219470
	if (cr6.eq) goto loc_83219470;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83217918
	ctx.lr = 0x83219368;
	sub_83217918(ctx, base);
	// lbz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8321944c
	if (cr6.eq) goto loc_8321944C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83214700
	ctx.lr = 0x8321938C;
	sub_83214700(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x83200c10
	ctx.lr = 0x83219394;
	sub_83200C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83210238
	ctx.lr = 0x832193A4;
	sub_83210238(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83210350
	ctx.lr = 0x832193B0;
	sub_83210350(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83210238
	ctx.lr = 0x832193C0;
	sub_83210238(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83214700
	ctx.lr = 0x832193D0;
	sub_83214700(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x83200c10
	ctx.lr = 0x832193D8;
	sub_83200C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83210238
	ctx.lr = 0x832193E8;
	sub_83210238(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83210238
	ctx.lr = 0x832193F8;
	sub_83210238(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8325acb0
	ctx.lr = 0x83219400;
	sub_8325ACB0(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83219318
	ctx.lr = 0x83219414;
	sub_83219318(ctx, base);
	// lfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8321943c
	if (cr6.lt) goto loc_8321943C;
	// lfs f0,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8321943c
	if (cr6.lt) goto loc_8321943C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8321943C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832196c4
	if (cr6.eq) goto loc_832196C4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8321944C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83219470
	if (cr6.eq) goto loc_83219470;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832156b8
	ctx.lr = 0x83219460;
	sub_832156B8(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,1
	ctx.r30.s64 = 1;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83219470:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213228
	ctx.lr = 0x83219478;
	sub_83213228(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832194fc
	if (cr6.eq) goto loc_832194FC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832194d4
	if (cr6.eq) goto loc_832194D4;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8325acb0
	ctx.lr = 0x83219498;
	sub_8325ACB0(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832194b0
	if (cr6.eq) goto loc_832194B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83260638
	ctx.lr = 0x832194B0;
	sub_83260638(ctx, base);
loc_832194B0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8325b058
	ctx.lr = 0x832194C0;
	sub_8325B058(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8325b100
	ctx.lr = 0x832194D0;
	sub_8325B100(ctx, base);
	// b 0x832194fc
	goto loc_832194FC;
loc_832194D4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832194ec
	if (cr6.eq) goto loc_832194EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83260638
	ctx.lr = 0x832194EC;
	sub_83260638(ctx, base);
loc_832194EC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8325b058
	ctx.lr = 0x832194FC;
	sub_8325B058(ctx, base);
loc_832194FC:
	// clrlwi r27,r30,24
	ctx.r27.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83219534
	if (cr6.eq) goto loc_83219534;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8325acb0
	ctx.lr = 0x83219510;
	sub_8325ACB0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x832159f8
	ctx.lr = 0x83219520;
	sub_832159F8(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8325b100
	ctx.lr = 0x83219530;
	sub_8325B100(ctx, base);
	// b 0x83219544
	goto loc_83219544;
loc_83219534:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832159f8
	ctx.lr = 0x83219544;
	sub_832159F8(ctx, base);
loc_83219544:
	// lwz r31,56(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832196c4
	if (cr6.eq) goto loc_832196C4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r29,r11,5696
	ctx.r29.s64 = ctx.r11.s64 + 5696;
loc_8321955C:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832196b8
	if (!cr6.eq) goto loc_832196B8;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x83210238
	ctx.lr = 0x83219588;
	sub_83210238(ctx, base);
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832195d0
	if (cr6.eq) goto loc_832195D0;
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,132(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x832102f8
	ctx.lr = 0x832195D0;
	sub_832102F8(ctx, base);
loc_832195D0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x832196a4
	if (cr6.eq) goto loc_832196A4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8325acb0
	ctx.lr = 0x832195E0;
	sub_8325ACB0(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83219318
	ctx.lr = 0x832195F4;
	sub_83219318(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832196b8
	if (!cr6.eq) goto loc_832196B8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83219628
	if (cr6.lt) goto loc_83219628;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x832196b8
	goto loc_832196B8;
loc_83219628:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83219644
	if (cr6.lt) goto loc_83219644;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8325ac48
	ctx.lr = 0x83219644;
	sub_8325AC48(ctx, base);
loc_83219644:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8321965c
	if (cr6.eq) goto loc_8321965C;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8325ac48
	ctx.lr = 0x8321965C;
	sub_8325AC48(ctx, base);
loc_8321965C:
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83219684
	if (cr6.lt) goto loc_83219684;
	// lfs f0,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83219684
	if (cr6.lt) goto loc_83219684;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83219684:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832196b8
	if (cr6.eq) goto loc_832196B8;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8325abe0
	ctx.lr = 0x832196A0;
	sub_8325ABE0(ctx, base);
	// b 0x832196b8
	goto loc_832196B8;
loc_832196A4:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83219318
	ctx.lr = 0x832196B8;
	sub_83219318(ctx, base);
loc_832196B8:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8321955c
	if (!cr6.eq) goto loc_8321955C;
loc_832196C4:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832196CC"))) PPC_WEAK_FUNC(sub_832196CC);
PPC_FUNC_IMPL(__imp__sub_832196CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832196D0"))) PPC_WEAK_FUNC(sub_832196D0);
PPC_FUNC_IMPL(__imp__sub_832196D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832196D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8325acb0
	ctx.lr = 0x832196F0;
	sub_8325ACB0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83219738
	if (cr6.eq) goto loc_83219738;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8321970c
	if (!cr6.eq) goto loc_8321970C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83219714
	goto loc_83219714;
loc_8321970C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
loc_83219714:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8321972c
	if (cr6.eq) goto loc_8321972C;
loc_83219720:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8321972C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83219720
	if (!cr6.lt) goto loc_83219720;
loc_83219738:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210190
	ctx.lr = 0x83219740;
	sub_83210190(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83219318
	ctx.lr = 0x83219754;
	sub_83219318(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8325b1b0
	ctx.lr = 0x83219760;
	sub_8325B1B0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83219768"))) PPC_WEAK_FUNC(sub_83219768);
PPC_FUNC_IMPL(__imp__sub_83219768) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83214700
	ctx.lr = 0x83219790;
	sub_83214700(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83200c10
	ctx.lr = 0x83219798;
	sub_83200C10(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210238
	ctx.lr = 0x832197A8;
	sub_83210238(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8325acb0
	ctx.lr = 0x832197B0;
	sub_8325ACB0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83219318
	ctx.lr = 0x832197C4;
	sub_83219318(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325b1b0
	ctx.lr = 0x832197D0;
	sub_8325B1B0(ctx, base);
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

