#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A7D93C"))) PPC_WEAK_FUNC(sub_83A7D93C);
PPC_FUNC_IMPL(__imp__sub_83A7D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D940"))) PPC_WEAK_FUNC(sub_83A7D940);
PPC_FUNC_IMPL(__imp__sub_83A7D940) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26368);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,26368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26368, ctx.r11.u32);
	// lwz r11,26368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26368);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D958"))) PPC_WEAK_FUNC(sub_83A7D958);
PPC_FUNC_IMPL(__imp__sub_83A7D958) {
	PPC_FUNC_PROLOGUE();
	// b 0x832d30f8
	sub_832D30F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7D95C"))) PPC_WEAK_FUNC(sub_83A7D95C);
PPC_FUNC_IMPL(__imp__sub_83A7D95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D960"))) PPC_WEAK_FUNC(sub_83A7D960);
PPC_FUNC_IMPL(__imp__sub_83A7D960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// subf r3,r3,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r3.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D96C"))) PPC_WEAK_FUNC(sub_83A7D96C);
PPC_FUNC_IMPL(__imp__sub_83A7D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D970"))) PPC_WEAK_FUNC(sub_83A7D970);
PPC_FUNC_IMPL(__imp__sub_83A7D970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// blt cr6,0x83a7d980
	if (cr6.lt) goto loc_83A7D980;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A7D980:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-15080
	ctx.r11.s64 = ctx.r11.s64 + -15080;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D994"))) PPC_WEAK_FUNC(sub_83A7D994);
PPC_FUNC_IMPL(__imp__sub_83A7D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7D998"))) PPC_WEAK_FUNC(sub_83A7D998);
PPC_FUNC_IMPL(__imp__sub_83A7D998) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r3,8
	ctx.r3.s64 = 8;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7D9FC"))) PPC_WEAK_FUNC(sub_83A7D9FC);
PPC_FUNC_IMPL(__imp__sub_83A7D9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7DA00"))) PPC_WEAK_FUNC(sub_83A7DA00);
PPC_FUNC_IMPL(__imp__sub_83A7DA00) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r10.u16);
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,18(r4)
	PPC_STORE_U16(ctx.r4.u32 + 18, ctx.r10.u16);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r9,22(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r8,23(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7DB08"))) PPC_WEAK_FUNC(sub_83A7DB08);
PPC_FUNC_IMPL(__imp__sub_83A7DB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,26
	cr6.compare<uint32_t>(ctx.r4.u32, 26, xer);
	// bge cr6,0x83a7db18
	if (!cr6.lt) goto loc_83A7DB18;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A7DB18:
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lbz r10,25(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7DB30"))) PPC_WEAK_FUNC(sub_83A7DB30);
PPC_FUNC_IMPL(__imp__sub_83A7DB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A7DB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x83a7db60
	if (cr6.lt) goto loc_83A7DB60;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-2256
	ctx.r4.s64 = ctx.r11.s64 + -2256;
loc_83A7DB54:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A7DB5C;
	sub_831EA3F0(ctx, base);
	// b 0x83a7dba8
	goto loc_83A7DBA8;
loc_83A7DB60:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7db80
	if (!cr6.eq) goto loc_83A7DB80;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-2284
	ctx.r4.s64 = ctx.r11.s64 + -2284;
	// b 0x83a7db54
	goto loc_83A7DB54;
loc_83A7DB80:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7db90
	if (cr6.eq) goto loc_83A7DB90;
	// bl 0x83a777e8
	ctx.lr = 0x83A7DB90;
	sub_83A777E8(ctx, base);
loc_83A7DB90:
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_83A7DBA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7DBB0"))) PPC_WEAK_FUNC(sub_83A7DBB0);
PPC_FUNC_IMPL(__imp__sub_83A7DBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A7DBB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-2152
	ctx.r11.s64 = ctx.r11.s64 + -2152;
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r11,26380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26380, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7DBF4;
	sub_831CDCF0(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a7d998
	ctx.lr = 0x83A7DC30;
	sub_83A7D998(ctx, base);
	// lis r11,16469
	ctx.r11.s64 = 1079312384;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r30,r3,r26
	ctx.r30.u64 = ctx.r3.u64 + ctx.r26.u64;
	// ori r11,r11,21574
	ctx.r11.u64 = ctx.r11.u64 | 21574;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a7dc60
	if (cr6.eq) goto loc_83A7DC60;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-1984
	ctx.r4.s64 = ctx.r11.s64 + -1984;
	// bl 0x831ea3f0
	ctx.lr = 0x83A7DC58;
	sub_831EA3F0(ctx, base);
loc_83A7DC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7ddc8
	goto loc_83A7DDC8;
loc_83A7DC60:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x83a7dc88
	if (!cr6.gt) goto loc_83A7DC88;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,-2032
	ctx.r4.s64 = ctx.r11.s64 + -2032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x83A7DC84;
	sub_831EA410(ctx, base);
	// b 0x83a7dc58
	goto loc_83A7DC58;
loc_83A7DC88:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7da00
	ctx.lr = 0x83A7DC9C;
	sub_83A7DA00(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// add r28,r3,r30
	ctx.r28.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,114(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r5,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r5.u16);
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// sth r7,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r7.u16);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// bne cr6,0x83a7dd10
	if (!cr6.eq) goto loc_83A7DD10;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-2044
	ctx.r4.s64 = ctx.r11.s64 + -2044;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A7DD0C;
	sub_831EA418(ctx, base);
	// b 0x83a7dc58
	goto loc_83A7DC58;
loc_83A7DD10:
	// clrlwi. r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x83a7dda4
	if (cr0.eq) goto loc_83A7DDA4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A7DD20:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x83a776f0
	ctx.lr = 0x83A7DD34;
	sub_83A776F0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a7dd80
	if (cr6.eq) goto loc_83A7DD80;
	// addi r27,r11,9
	ctx.r27.s64 = ctx.r11.s64 + 9;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_83A7DD50:
	// lbz r11,-1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83a7dd74
	if (!cr0.eq) goto loc_83A7DD74;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a7dd74
	if (cr0.eq) goto loc_83A7DD74;
	// lwz r3,-9(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9);
	// bl 0x83a7d970
	ctx.lr = 0x83A7DD70;
	sub_83A7D970(ctx, base);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
loc_83A7DD74:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// bne 0x83a7dd50
	if (!cr0.eq) goto loc_83A7DD50;
loc_83A7DD80:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7dd20
	if (cr6.lt) goto loc_83A7DD20;
loc_83A7DDA4:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A7DDB0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a7ddb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7DDB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A7DDC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7DDD0"))) PPC_WEAK_FUNC(sub_83A7DDD0);
PPC_FUNC_IMPL(__imp__sub_83A7DDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A7DDD8;
	__savegprlr_29(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// blt cr6,0x83a7ddf0
	if (cr6.lt) goto loc_83A7DDF0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83A7DDF0:
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x83a7e01c
	if (cr6.eq) goto loc_83A7E01C;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r30,r11,-14984
	ctx.r30.s64 = ctx.r11.s64 + -14984;
loc_83A7DE10:
	// cmpwi cr6,r9,24
	cr6.compare<int32_t>(ctx.r9.s32, 24, xer);
	// bgt cr6,0x83a7de40
	if (cr6.gt) goto loc_83A7DE40;
	// subfic r11,r9,24
	xer.ca = ctx.r9.u32 <= 24;
	ctx.r11.s64 = 24 - ctx.r9.s64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A7DE30:
	// lbzu r11,-1(r5)
	ea = -1 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// bdnz 0x83a7de30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7DE30;
loc_83A7DE40:
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// lwzx r9,r7,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7de7c
	if (!cr0.eq) goto loc_83A7DE7C;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x83a7de68
	if (!cr6.eq) goto loc_83A7DE68;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x83a7e018
	if (cr6.lt) goto loc_83A7E018;
loc_83A7DE68:
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// srw r11,r8,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x83a7e008
	goto loc_83A7E008;
loc_83A7DE7C:
	// addi r9,r11,-13
	ctx.r9.s64 = ctx.r11.s64 + -13;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// addi r7,r9,-2
	ctx.r7.s64 = ctx.r9.s64 + -2;
	// srw r6,r8,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srw r11,r8,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r4,r6,19
	ctx.r4.u64 = ctx.r6.u32 & 0x1FFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83a7df64
	if (!cr6.eq) goto loc_83A7DF64;
	// addi r11,r9,-3
	ctx.r11.s64 = ctx.r9.s64 + -3;
	// li r7,3
	ctx.r7.s64 = 3;
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x83a7df64
	if (!cr6.eq) goto loc_83A7DF64;
	// addi r11,r9,-5
	ctx.r11.s64 = ctx.r9.s64 + -5;
	// li r7,10
	ctx.r7.s64 = 10;
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r9,r9,-5
	ctx.r9.s64 = ctx.r9.s64 + -5;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bne cr6,0x83a7df64
	if (!cr6.eq) goto loc_83A7DF64;
	// lbzu r11,-1(r5)
	ea = -1 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// li r7,41
	ctx.r7.s64 = 41;
	// srw r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x83a7df64
	if (!cr6.eq) goto loc_83A7DF64;
	// lbzu r11,-1(r5)
	ea = -1 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// li r7,296
	ctx.r7.s64 = 296;
	// srw r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x83a7df64
	if (!cr6.eq) goto loc_83A7DF64;
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
loc_83A7DF3C:
	// lbzu r11,-1(r5)
	ea = -1 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// addi r7,r7,255
	ctx.r7.s64 = ctx.r7.s64 + 255;
	// srw r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x83a7df3c
	if (cr6.eq) goto loc_83A7DF3C;
loc_83A7DF64:
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// bne cr6,0x83a7df80
	if (!cr6.eq) goto loc_83A7DF80;
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x83a7e018
	if (cr6.lt) goto loc_83A7E018;
loc_83A7DF80:
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// beq cr6,0x83a7dff4
	if (cr6.eq) goto loc_83A7DFF4;
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// beq cr6,0x83a7dfec
	if (cr6.eq) goto loc_83A7DFEC;
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// beq cr6,0x83a7dfe4
	if (cr6.eq) goto loc_83A7DFE4;
	// cmplwi cr6,r7,6
	cr6.compare<uint32_t>(ctx.r7.u32, 6, xer);
	// beq cr6,0x83a7dfdc
	if (cr6.eq) goto loc_83A7DFDC;
	// cmplwi cr6,r7,7
	cr6.compare<uint32_t>(ctx.r7.u32, 7, xer);
	// beq cr6,0x83a7dfd4
	if (cr6.eq) goto loc_83A7DFD4;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x83a7e00c
	if (!cr6.gt) goto loc_83A7E00C;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83A7DFC4:
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83a7dfc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7DFC4;
	// b 0x83a7e00c
	goto loc_83A7E00C;
loc_83A7DFD4:
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
loc_83A7DFDC:
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
loc_83A7DFE4:
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
loc_83A7DFEC:
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
loc_83A7DFF4:
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbzu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
loc_83A7E008:
	// stbu r11,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
loc_83A7E00C:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x83a7de10
	if (!cr6.eq) goto loc_83A7DE10;
	// b 0x83a7e01c
	goto loc_83A7E01C;
loc_83A7E018:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_83A7E01C:
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7E024"))) PPC_WEAK_FUNC(sub_83A7E024);
PPC_FUNC_IMPL(__imp__sub_83A7E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E028"))) PPC_WEAK_FUNC(sub_83A7E028);
PPC_FUNC_IMPL(__imp__sub_83A7E028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x83a7e038
	if (!cr6.lt) goto loc_83A7E038;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83a7e060
	goto loc_83A7E060;
loc_83A7E038:
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_83A7E060:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E068"))) PPC_WEAK_FUNC(sub_83A7E068);
PPC_FUNC_IMPL(__imp__sub_83A7E068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// addi r11,r11,-14848
	ctx.r11.s64 = ctx.r11.s64 + -14848;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E07C"))) PPC_WEAK_FUNC(sub_83A7E07C);
PPC_FUNC_IMPL(__imp__sub_83A7E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E080"))) PPC_WEAK_FUNC(sub_83A7E080);
PPC_FUNC_IMPL(__imp__sub_83A7E080) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26392);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26392, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a7e0a8
	if (!cr6.eq) goto loc_83A7E0A8;
	// bl 0x83a80448
	ctx.lr = 0x83A7E0A8;
	sub_83A80448(ctx, base);
loc_83A7E0A8:
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

__attribute__((alias("__imp__sub_83A7E0BC"))) PPC_WEAK_FUNC(sub_83A7E0BC);
PPC_FUNC_IMPL(__imp__sub_83A7E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E0C0"))) PPC_WEAK_FUNC(sub_83A7E0C0);
PPC_FUNC_IMPL(__imp__sub_83A7E0C0) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26392);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,26392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26392, ctx.r11.u32);
	// bne 0x83a7e0e4
	if (!cr0.eq) goto loc_83A7E0E4;
	// bl 0x83a804c8
	ctx.lr = 0x83A7E0E4;
	sub_83A804C8(ctx, base);
loc_83A7E0E4:
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

__attribute__((alias("__imp__sub_83A7E0F8"))) PPC_WEAK_FUNC(sub_83A7E0F8);
PPC_FUNC_IMPL(__imp__sub_83A7E0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A7E100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a7e118
	if (!cr6.eq) goto loc_83A7E118;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A7E118:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a7e160
	if (!cr6.gt) goto loc_83A7E160;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83A7E134:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a7e154
	if (cr6.eq) goto loc_83A7E154;
	// lwz r3,1288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7e154
	if (cr6.eq) goto loc_83A7E154;
	// bl 0x83a80528
	ctx.lr = 0x83A7E150;
	sub_83A80528(ctx, base);
	// stw r28,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r28.u32);
loc_83A7E154:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83a7e134
	if (!cr0.eq) goto loc_83A7E134;
loc_83A7E160:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7E16C"))) PPC_WEAK_FUNC(sub_83A7E16C);
PPC_FUNC_IMPL(__imp__sub_83A7E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E170"))) PPC_WEAK_FUNC(sub_83A7E170);
PPC_FUNC_IMPL(__imp__sub_83A7E170) {
	PPC_FUNC_PROLOGUE();
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E17C"))) PPC_WEAK_FUNC(sub_83A7E17C);
PPC_FUNC_IMPL(__imp__sub_83A7E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E180"))) PPC_WEAK_FUNC(sub_83A7E180);
PPC_FUNC_IMPL(__imp__sub_83A7E180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A7E188;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 + 84;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a7e1c0
	if (!cr6.gt) goto loc_83A7E1C0;
loc_83A7E1A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,1288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a7e1b4
	if (cr6.eq) goto loc_83A7E1B4;
	// bl 0x83a80528
	ctx.lr = 0x83A7E1B4;
	sub_83A80528(ctx, base);
loc_83A7E1B4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a7e1a0
	if (!cr0.eq) goto loc_83A7E1A0;
loc_83A7E1C0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrldi r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r11.u32);
	// std r11,176(r29)
	PPC_STORE_U64(ctx.r29.u32 + 176, ctx.r11.u64);
	// std r9,184(r29)
	PPC_STORE_U64(ctx.r29.u32 + 184, ctx.r9.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7E1E8"))) PPC_WEAK_FUNC(sub_83A7E1E8);
PPC_FUNC_IMPL(__imp__sub_83A7E1E8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a7e3c4
	if (cr6.gt) goto loc_83A7E3C4;
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a7e3c4
	if (cr6.gt) goto loc_83A7E3C4;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a7e3c4
	if (!cr6.eq) goto loc_83A7E3C4;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// bne cr6,0x83a7e3c4
	if (!cr6.eq) goto loc_83A7E3C4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// lwz r4,60(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r8,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r8.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r7,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r7.u32);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r6,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r6.u32);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r5.u32);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r4,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r4.u32);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// neg r10,r3
	ctx.r10.s64 = -ctx.r3.s64;
	// andc r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// ble cr6,0x83a7e340
	if (!cr6.gt) goto loc_83A7E340;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// twllei r11,0
	// twllei r11,0
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r5,r11
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// andc r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// andc r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// subf. r4,r3,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// divw r11,r5,r11
	ctx.r11.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// twlgei r8,-1
	// twlgei r7,-1
	// ble 0x83a7e344
	if (!cr0.gt) goto loc_83A7E344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x83a7e344
	goto loc_83A7E344;
loc_83A7E340:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A7E344:
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x83a807c8
	ctx.lr = 0x83A7E360;
	sub_83A807C8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r30,84
	ctx.r10.s64 = ctx.r30.s64 + 84;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a7e3bc
	if (!cr6.gt) goto loc_83A7E3BC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_83A7E380:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// beq cr6,0x83a7e39c
	if (cr6.eq) goto loc_83A7E39C;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_83A7E39C:
	// stw r9,1296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1296, ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,1292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1292, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a7e380
	if (cr6.lt) goto loc_83A7E380;
loc_83A7E3BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a7e3c8
	goto loc_83A7E3C8;
loc_83A7E3C4:
	// li r3,11
	ctx.r3.s64 = 11;
loc_83A7E3C8:
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

__attribute__((alias("__imp__sub_83A7E3E0"))) PPC_WEAK_FUNC(sub_83A7E3E0);
PPC_FUNC_IMPL(__imp__sub_83A7E3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7e3ec
	if (!cr6.eq) goto loc_83A7E3EC;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
loc_83A7E3EC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a7e408
	if (cr6.gt) goto loc_83A7E408;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83A7E408:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E418"))) PPC_WEAK_FUNC(sub_83A7E418);
PPC_FUNC_IMPL(__imp__sub_83A7E418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7e424
	if (!cr6.eq) goto loc_83A7E424;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
loc_83A7E424:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a7e440
	if (cr6.gt) goto loc_83A7E440;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83A7E440:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E450"))) PPC_WEAK_FUNC(sub_83A7E450);
PPC_FUNC_IMPL(__imp__sub_83A7E450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7e45c
	if (!cr6.eq) goto loc_83A7E45C;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
loc_83A7E45C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a7e478
	if (cr6.gt) goto loc_83A7E478;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83A7E478:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E488"))) PPC_WEAK_FUNC(sub_83A7E488);
PPC_FUNC_IMPL(__imp__sub_83A7E488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7e498
	if (!cr6.eq) goto loc_83A7E498;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
loc_83A7E498:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a7e4ac
	if (!cr6.eq) goto loc_83A7E4AC;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
loc_83A7E4AC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a7e4bc
	if (!cr6.eq) goto loc_83A7E4BC;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
loc_83A7E4BC:
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a7e4d4
	if (cr6.gt) goto loc_83A7E4D4;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83A7E4D4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E4F4"))) PPC_WEAK_FUNC(sub_83A7E4F4);
PPC_FUNC_IMPL(__imp__sub_83A7E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E4F8"))) PPC_WEAK_FUNC(sub_83A7E4F8);
PPC_FUNC_IMPL(__imp__sub_83A7E4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7e508
	if (!cr6.eq) goto loc_83A7E508;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
loc_83A7E508:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a7e51c
	if (!cr6.eq) goto loc_83A7E51C;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
loc_83A7E51C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a7e52c
	if (!cr6.eq) goto loc_83A7E52C;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
loc_83A7E52C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a7e53c
	if (!cr6.eq) goto loc_83A7E53C;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
loc_83A7E53C:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a7e554
	if (cr6.gt) goto loc_83A7E554;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83A7E554:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E57C"))) PPC_WEAK_FUNC(sub_83A7E57C);
PPC_FUNC_IMPL(__imp__sub_83A7E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E580"))) PPC_WEAK_FUNC(sub_83A7E580);
PPC_FUNC_IMPL(__imp__sub_83A7E580) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r4,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r4.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r5,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E594"))) PPC_WEAK_FUNC(sub_83A7E594);
PPC_FUNC_IMPL(__imp__sub_83A7E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E598"))) PPC_WEAK_FUNC(sub_83A7E598);
PPC_FUNC_IMPL(__imp__sub_83A7E598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7e5a4
	if (!cr6.eq) goto loc_83A7E5A4;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
loc_83A7E5A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 184);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// bgt cr6,0x83a7e5d4
	if (cr6.gt) goto loc_83A7E5D4;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83A7E5D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E5DC"))) PPC_WEAK_FUNC(sub_83A7E5DC);
PPC_FUNC_IMPL(__imp__sub_83A7E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E5E0"))) PPC_WEAK_FUNC(sub_83A7E5E0);
PPC_FUNC_IMPL(__imp__sub_83A7E5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A7E5E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,44(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r27,164(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r8,192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x83a7e624
	if (!cr6.lt) goto loc_83A7E624;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A7E624:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x83a7e638
	if (cr6.lt) goto loc_83A7E638;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83a7e63c
	goto loc_83A7E63C;
loc_83A7E638:
	// subf r29,r31,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_83A7E63C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a7e69c
	if (cr6.eq) goto loc_83A7E69C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a7e670
	if (cr6.eq) goto loc_83A7E670;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_83A7E658:
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83a7e658
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7E658;
loc_83A7E670:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a7e6d8
	if (cr6.eq) goto loc_83A7E6D8;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_83A7E684:
	// lbzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83a7e684
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7E684;
	// b 0x83a7e6d8
	goto loc_83A7E6D8;
loc_83A7E69C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a7e6b8
	if (cr6.eq) goto loc_83A7E6B8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831d0080
	ctx.lr = 0x83A7E6B8;
	sub_831D0080(ctx, base);
loc_83A7E6B8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a7e6d8
	if (cr6.eq) goto loc_83A7E6D8;
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r3,r27,r31
	ctx.r3.u64 = ctx.r27.u64 + ctx.r31.u64;
	// bl 0x831d0080
	ctx.lr = 0x83A7E6D8;
	sub_831D0080(ctx, base);
loc_83A7E6D8:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x83a7e710
	if (!cr6.eq) goto loc_83A7E710;
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x83a7e710
	if (!cr6.eq) goto loc_83A7E710;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r10.u32);
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A7E710:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7E71C"))) PPC_WEAK_FUNC(sub_83A7E71C);
PPC_FUNC_IMPL(__imp__sub_83A7E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7E720"))) PPC_WEAK_FUNC(sub_83A7E720);
PPC_FUNC_IMPL(__imp__sub_83A7E720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a7e72c
	if (!cr6.eq) goto loc_83A7E72C;
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
loc_83A7E72C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a7e748
	if (!cr6.gt) goto loc_83A7E748;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x83a7e750
	if (cr6.lt) goto loc_83A7E750;
loc_83A7E748:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_83A7E750:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7E758"))) PPC_WEAK_FUNC(sub_83A7E758);
PPC_FUNC_IMPL(__imp__sub_83A7E758) {
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
	ctx.lr = 0x83A7E760;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// lwz r20,160(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r16,164(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r18,r3,84
	ctx.r18.s64 = ctx.r3.s64 + 84;
	// srawi r8,r20,3
	xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r20.s32 >> 3;
	// lwz r17,4(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r20,29
	ctx.r10.u64 = ctx.r20.u32 & 0x7;
	// add r11,r8,r16
	ctx.r11.u64 = ctx.r8.u64 + ctx.r16.u64;
	// stw r8,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r8.u32);
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// li r19,0
	ctx.r19.s64 = 0;
	// lbzx r10,r8,r16
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r16.u32);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 | ctx.r7.u64;
	// ble cr6,0x83a7f1e0
	if (!cr6.gt) goto loc_83A7F1E0;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1128
	ctx.r10.s64 = ctx.r10.s64 + -1128;
loc_83A7E7BC:
	// lwzx r23,r11,r18
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r22,1296(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1296);
	// addic. r11,r22,-7
	xer.ca = ctx.r22.u32 > 6;
	ctx.r11.s64 = ctx.r22.s64 + -7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83a7edb0
	if (!cr0.gt) goto loc_83A7EDB0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r26,r23,1152
	ctx.r26.s64 = ctx.r23.s64 + 1152;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r23,-4
	ctx.r4.s64 = ctx.r23.s64 + -4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A7E7E8:
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lfs f8,516(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,520(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	ctx.f7.f64 = double(temp.f32);
	// lbzx r8,r26,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r25.u32);
	// lfs f6,524(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	ctx.f6.f64 = double(temp.f32);
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// lfs f5,528(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 528);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,532(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 532);
	ctx.f4.f64 = double(temp.f32);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lfs f3,536(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 536);
	ctx.f3.f64 = double(temp.f32);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lfs f2,540(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 540);
	ctx.f2.f64 = double(temp.f32);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lfs f1,544(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r27,7(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// bge cr6,0x83a7e854
	if (!cr6.lt) goto loc_83A7E854;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,1(r24)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 | ctx.r30.u64;
loc_83A7E854:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r15,r11,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r11,r9
	ctx.r14.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srw r14,r30,r14
	ctx.r14.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r14.u8 & 0x3F));
	// lwzx r7,r15,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r7.u32);
	// and r7,r14,r7
	ctx.r7.u64 = ctx.r14.u64 & ctx.r7.u64;
	// bge cr6,0x83a7e8a0
	if (!cr6.lt) goto loc_83A7E8A0;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,-512
	ctx.r8.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f30,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f30.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83a7e8cc
	goto loc_83A7E8CC;
loc_83A7E8A0:
	// rlwinm r8,r7,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r8,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r8.s64;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// mullw. r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83a7e8b8
	if (!cr0.eq) goto loc_83A7E8B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7E8B8:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-280(r1)
	PPC_STORE_U64(ctx.r1.u32 + -280, ctx.r8.u64);
	// lfd f0,-280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
loc_83A7E8CC:
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bge cr6,0x83a7e8fc
	if (!cr6.lt) goto loc_83A7E8FC;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r7,r6
	ctx.r30.u64 = ctx.r7.u64 | ctx.r6.u64;
loc_83A7E8FC:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r15,r11,r8
	ctx.r15.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r15,r30,r15
	ctx.r15.u64 = ctx.r15.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r15.u8 & 0x3F));
	// lwzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// and r7,r15,r7
	ctx.r7.u64 = ctx.r15.u64 & ctx.r7.u64;
	// bge cr6,0x83a7e948
	if (!cr6.lt) goto loc_83A7E948;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-512
	ctx.r9.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f31,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x83a7e974
	goto loc_83A7E974;
loc_83A7E948:
	// rlwinm r9,r7,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r6,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r9.s64;
	// srawi r9,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// mullw. r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7e960
	if (!cr0.eq) goto loc_83A7E960;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7E960:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-272(r1)
	PPC_STORE_U64(ctx.r1.u32 + -272, ctx.r9.u64);
	// lfd f0,-272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
loc_83A7E974:
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bge cr6,0x83a7e9a4
	if (!cr6.lt) goto loc_83A7E9A4;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r11,r6
	ctx.r30.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_83A7E9A4:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r6,r30,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r6.u8 & 0x3F));
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// bge cr6,0x83a7e9f0
	if (!cr6.lt) goto loc_83A7E9F0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-512
	ctx.r9.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f9,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x83a7ea1c
	goto loc_83A7EA1C;
loc_83A7E9F0:
	// rlwinm r9,r7,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r6,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r9.s64;
	// srawi r5,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw. r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7ea08
	if (!cr0.eq) goto loc_83A7EA08;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7EA08:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-264(r1)
	PPC_STORE_U64(ctx.r1.u32 + -264, ctx.r9.u64);
	// lfd f0,-264(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
loc_83A7EA1C:
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bge cr6,0x83a7ea4c
	if (!cr6.lt) goto loc_83A7EA4C;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r3,r6
	ctx.r30.u64 = ctx.r3.u64 | ctx.r6.u64;
loc_83A7EA4C:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r6,r30,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// bge cr6,0x83a7ea98
	if (!cr6.lt) goto loc_83A7EA98;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-512
	ctx.r9.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f10,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x83a7eac4
	goto loc_83A7EAC4;
loc_83A7EA98:
	// rlwinm r9,r7,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r6,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r9.s64;
	// srawi r5,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw. r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7eab0
	if (!cr0.eq) goto loc_83A7EAB0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7EAB0:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-256(r1)
	PPC_STORE_U64(ctx.r1.u32 + -256, ctx.r9.u64);
	// lfd f0,-256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
loc_83A7EAC4:
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bge cr6,0x83a7eaf4
	if (!cr6.lt) goto loc_83A7EAF4;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r3,r6
	ctx.r30.u64 = ctx.r3.u64 | ctx.r6.u64;
loc_83A7EAF4:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r6,r30,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// bge cr6,0x83a7eb40
	if (!cr6.lt) goto loc_83A7EB40;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-512
	ctx.r9.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f11,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x83a7eb6c
	goto loc_83A7EB6C;
loc_83A7EB40:
	// rlwinm r9,r7,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r6,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r9.s64;
	// srawi r5,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw. r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7eb58
	if (!cr0.eq) goto loc_83A7EB58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7EB58:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-248(r1)
	PPC_STORE_U64(ctx.r1.u32 + -248, ctx.r9.u64);
	// lfd f0,-248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
loc_83A7EB6C:
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bge cr6,0x83a7eb9c
	if (!cr6.lt) goto loc_83A7EB9C;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r3,r6
	ctx.r30.u64 = ctx.r3.u64 | ctx.r6.u64;
loc_83A7EB9C:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r6,r30,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// bge cr6,0x83a7ebe8
	if (!cr6.lt) goto loc_83A7EBE8;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-512
	ctx.r9.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f12,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x83a7ec14
	goto loc_83A7EC14;
loc_83A7EBE8:
	// rlwinm r9,r7,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r6,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r9.s64;
	// srawi r5,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw. r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7ec00
	if (!cr0.eq) goto loc_83A7EC00;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7EC00:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.r9.u64);
	// lfd f0,-240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
loc_83A7EC14:
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bge cr6,0x83a7ec44
	if (!cr6.lt) goto loc_83A7EC44;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r3,r6
	ctx.r30.u64 = ctx.r3.u64 | ctx.r6.u64;
loc_83A7EC44:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r6,r30,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// bge cr6,0x83a7ec90
	if (!cr6.lt) goto loc_83A7EC90;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-512
	ctx.r9.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f13,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x83a7ecbc
	goto loc_83A7ECBC;
loc_83A7EC90:
	// rlwinm r9,r7,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r6,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r9.s64;
	// srawi r5,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw. r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7eca8
	if (!cr0.eq) goto loc_83A7ECA8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7ECA8:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.r9.u64);
	// lfd f0,-232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_83A7ECBC:
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmpwi cr6,r8,16
	cr6.compare<int32_t>(ctx.r8.s32, 16, xer);
	// bge cr6,0x83a7ecec
	if (!cr6.lt) goto loc_83A7ECEC;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r3,r6
	ctx.r30.u64 = ctx.r3.u64 | ctx.r6.u64;
loc_83A7ECEC:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r6,r30,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// bge cr6,0x83a7ed38
	if (!cr6.lt) goto loc_83A7ED38;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-512
	ctx.r9.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f0,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x83a7ed64
	goto loc_83A7ED64;
loc_83A7ED38:
	// rlwinm r9,r7,1,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r6,r9,1
	xer.ca = ctx.r9.u32 <= 1;
	ctx.r6.s64 = 1 - ctx.r9.s64;
	// srawi r5,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw. r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a7ed50
	if (!cr0.eq) goto loc_83A7ED50;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7ED50:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.r9.u64);
	// lfd f0,-224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_83A7ED64:
	// fmuls f8,f30,f8
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f6,12(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmuls f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f5,16(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmuls f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// stfs f4,20(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fmuls f3,f12,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f3,24(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// fmuls f2,f13,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f2,28(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsu f1,32(r4)
	ea = 32 + ctx.r4.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r4.u32 = ea;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// bdnz 0x83a7e7e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7E7E8;
loc_83A7EDB0:
	// cmpw cr6,r25,r22
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, xer);
	// bge cr6,0x83a7f19c
	if (!cr6.lt) goto loc_83A7F19C;
	// subf r11,r25,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r25.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83a7f0c0
	if (cr6.lt) goto loc_83A7F0C0;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r23,1152
	ctx.r29.s64 = ctx.r23.s64 + 1152;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r5,r23,1153
	ctx.r5.s64 = ctx.r23.s64 + 1153;
	// addi r4,r23,1154
	ctx.r4.s64 = ctx.r23.s64 + 1154;
	// addi r3,r23,1155
	ctx.r3.s64 = ctx.r23.s64 + 1155;
	// addi r31,r22,-3
	ctx.r31.s64 = ctx.r22.s64 + -3;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_83A7EDE4:
	// lbzx r8,r29,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r25.u32);
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// bge cr6,0x83a7ee10
	if (!cr6.lt) goto loc_83A7EE10;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,1(r24)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 | ctx.r30.u64;
loc_83A7EE10:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r11,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srw r27,r30,r27
	ctx.r27.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r27.u8 & 0x3F));
	// lwzx r7,r28,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// and r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 & ctx.r7.u64;
	// bge cr6,0x83a7ee5c
	if (!cr6.lt) goto loc_83A7EE5C;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,-512
	ctx.r8.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83a7ee88
	goto loc_83A7EE88;
loc_83A7EE5C:
	// rlwinm r8,r7,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r8,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r8.s64;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// mullw. r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83a7ee74
	if (!cr0.eq) goto loc_83A7EE74;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7EE74:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.r8.u64);
	// lfd f0,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_83A7EE88:
	// lfs f13,516(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lbzx r8,r5,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// bge cr6,0x83a7eec4
	if (!cr6.lt) goto loc_83A7EEC4;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,1(r24)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 | ctx.r30.u64;
loc_83A7EEC4:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r11,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srw r27,r30,r27
	ctx.r27.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r27.u8 & 0x3F));
	// lwzx r7,r28,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// and r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 & ctx.r7.u64;
	// bge cr6,0x83a7ef10
	if (!cr6.lt) goto loc_83A7EF10;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,-512
	ctx.r8.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83a7ef3c
	goto loc_83A7EF3C;
loc_83A7EF10:
	// rlwinm r8,r7,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r8,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r8.s64;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// mullw. r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83a7ef28
	if (!cr0.eq) goto loc_83A7EF28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7EF28:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.r8.u64);
	// lfd f0,-208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_83A7EF3C:
	// lfs f13,520(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbzx r8,r4,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// bge cr6,0x83a7ef78
	if (!cr6.lt) goto loc_83A7EF78;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,1(r24)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 | ctx.r30.u64;
loc_83A7EF78:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r11,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srw r27,r30,r27
	ctx.r27.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r27.u8 & 0x3F));
	// lwzx r7,r28,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// and r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 & ctx.r7.u64;
	// bge cr6,0x83a7efc4
	if (!cr6.lt) goto loc_83A7EFC4;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,-512
	ctx.r8.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83a7eff0
	goto loc_83A7EFF0;
loc_83A7EFC4:
	// rlwinm r8,r7,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r8,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r8.s64;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// mullw. r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83a7efdc
	if (!cr0.eq) goto loc_83A7EFDC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7EFDC:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.r8.u64);
	// lfd f0,-200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_83A7EFF0:
	// lfs f13,524(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// lbzx r8,r3,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r25.u32);
	// bge cr6,0x83a7f02c
	if (!cr6.lt) goto loc_83A7F02C;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,1(r24)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 | ctx.r30.u64;
loc_83A7F02C:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r11,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srw r27,r30,r27
	ctx.r27.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r27.u8 & 0x3F));
	// lwzx r7,r28,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// and r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 & ctx.r7.u64;
	// bge cr6,0x83a7f078
	if (!cr6.lt) goto loc_83A7F078;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,-512
	ctx.r8.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83a7f0a4
	goto loc_83A7F0A4;
loc_83A7F078:
	// rlwinm r8,r7,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r8,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r8.s64;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// mullw. r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83a7f090
	if (!cr0.eq) goto loc_83A7F090;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7F090:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r8.u64);
	// lfd f0,-192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_83A7F0A4:
	// lfs f13,528(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,16(r6)
	ea = 16 + ctx.r6.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpw cr6,r25,r31
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a7ede4
	if (cr6.lt) goto loc_83A7EDE4;
loc_83A7F0C0:
	// cmpw cr6,r25,r22
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, xer);
	// bge cr6,0x83a7f19c
	if (!cr6.lt) goto loc_83A7F19C;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r25,r22
	ctx.r8.s64 = ctx.r22.s64 - ctx.r25.s64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r5,r23,1152
	ctx.r5.s64 = ctx.r23.s64 + 1152;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A7F0E0:
	// lbzx r8,r5,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// bge cr6,0x83a7f10c
	if (!cr6.lt) goto loc_83A7F10C;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,1(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// or r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_83A7F10C:
	// addi r11,r10,-528
	ctx.r11.s64 = ctx.r10.s64 + -528;
	// addi r7,r10,-592
	ctx.r7.s64 = ctx.r10.s64 + -592;
	// cmpwi cr6,r8,8
	cr6.compare<int32_t>(ctx.r8.s32, 8, xer);
	// lbzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srw r4,r30,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r4.u8 & 0x3F));
	// lwzx r3,r3,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// and r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ctx.r3.u64;
	// bge cr6,0x83a7f158
	if (!cr6.lt) goto loc_83A7F158;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,-512
	ctx.r8.s64 = ctx.r10.s64 + -512;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// b 0x83a7f184
	goto loc_83A7F184;
loc_83A7F158:
	// rlwinm r8,r7,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x2;
	// subfic r4,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r8.s64;
	// srawi r3,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// mullw. r8,r4,r3
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83a7f170
	if (!cr0.eq) goto loc_83A7F170;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A7F170:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-184(r1)
	PPC_STORE_U64(ctx.r1.u32 + -184, ctx.r8.u64);
	// lfd f0,-184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_83A7F184:
	// lfs f13,516(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bdnz 0x83a7f0e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F0E0;
loc_83A7F19C:
	// cmpwi cr6,r25,128
	cr6.compare<int32_t>(ctx.r25.s32, 128, xer);
	// bge cr6,0x83a7f1cc
	if (!cr6.lt) goto loc_83A7F1CC;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r25,128
	xer.ca = ctx.r25.u32 <= 128;
	ctx.r11.s64 = 128 - ctx.r25.s64;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7f1cc
	if (cr6.eq) goto loc_83A7F1CC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A7F1C4:
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83a7f1c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F1C4;
loc_83A7F1CC:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r19,r17
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r17.s32, xer);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x83a7e7bc
	if (cr6.lt) goto loc_83A7E7BC;
	// lwz r8,-288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -288);
loc_83A7F1E0:
	// subf r10,r8,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r8.s64;
	// lwz r8,48(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// clrlwi r11,r20,29
	ctx.r11.u64 = ctx.r20.u32 & 0x7;
	// subf r7,r16,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r16.s64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subf r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgt cr6,0x83a7f20c
	if (cr6.gt) goto loc_83A7F20C;
	// stw r11,160(r21)
	PPC_STORE_U32(ctx.r21.u32 + 160, ctx.r11.u32);
loc_83A7F20C:
	// lwz r11,156(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r21)
	PPC_STORE_U32(ctx.r21.u32 + 156, ctx.r11.u32);
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7F228"))) PPC_WEAK_FUNC(sub_83A7F228);
PPC_FUNC_IMPL(__imp__sub_83A7F228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A7F230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rlwinm r9,r4,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1C;
	// addi r7,r10,-1752
	ctx.r7.s64 = ctx.r10.s64 + -1752;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r3,r4,29
	ctx.r3.u64 = ctx.r4.u32 & 0x7;
	// addi r31,r4,3
	ctx.r31.s64 = ctx.r4.s64 + 3;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// subfic r3,r3,7
	xer.ca = ctx.r3.u32 <= 7;
	ctx.r3.s64 = 7 - ctx.r3.s64;
	// or r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 | ctx.r4.u64;
	// and r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 & ctx.r10.u64;
	// srw r11,r4,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83a7f2a4
	if (!cr6.eq) goto loc_83A7F2A4;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7F294;
	sub_831CDCF0(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A7F2A4:
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// bge cr6,0x83a7f378
	if (!cr6.lt) goto loc_83A7F378;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// slw r10,r3,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// srawi r30,r31,1
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 1;
	// ble cr6,0x83a7f3d0
	if (!cr6.gt) goto loc_83A7F3D0;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A7F2D8:
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r5,r11,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r28,r11,29
	ctx.r28.u64 = ctx.r11.u32 & 0x7;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subfic r28,r28,16
	xer.ca = ctx.r28.u32 <= 16;
	ctx.r28.s64 = 16 - ctx.r28.s64;
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lbz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf r28,r9,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r9.s64;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r27,r27,8
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// and r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ctx.r5.u64;
	// srw r10,r5,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r28.u8 & 0x3F));
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// beq cr6,0x83a7f324
	if (cr6.eq) goto loc_83A7F324;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x83a7f358
	goto loc_83A7F358;
loc_83A7F324:
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r5,r11,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// subfic r4,r4,10
	xer.ca = ctx.r4.u32 <= 10;
	ctx.r4.s64 = 10 - ctx.r4.s64;
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r28,r28,8
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// and r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ctx.r5.u64;
	// srw r4,r5,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r4.u8 & 0x3F));
loc_83A7F358:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r10,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x83a7f2d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F2D8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A7F378:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// ble cr6,0x83a7f3d0
	if (!cr6.gt) goto loc_83A7F3D0;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A7F38C:
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfic r3,r4,10
	xer.ca = ctx.r4.u32 <= 10;
	ctx.r3.s64 = 10 - ctx.r4.s64;
	// rlwinm r5,r11,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lwzx r5,r5,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// and r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ctx.r5.u64;
	// srw r4,r5,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stbx r3,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x83a7f38c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F38C;
loc_83A7F3D0:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7F3E0"))) PPC_WEAK_FUNC(sub_83A7F3E0);
PPC_FUNC_IMPL(__imp__sub_83A7F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A7F3E8;
	__savegprlr_27(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r8,148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a7f4e0
	if (!cr6.gt) goto loc_83A7F4E0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r31,r9,r8
	ctx.r31.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-884
	ctx.r28.s64 = ctx.r11.s64 + -884;
loc_83A7F41C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r6,r11,1152
	ctx.r6.s64 = ctx.r11.s64 + 1152;
	// lwz r7,1296(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83a7f4b0
	if (!cr6.gt) goto loc_83A7F4B0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// subf r5,r31,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r4,r6,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r6.s64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_83A7F44C:
	// add r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lbzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a7f464
	if (!cr6.eq) goto loc_83A7F464;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// b 0x83a7f4a0
	goto loc_83A7F4A0;
loc_83A7F464:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// srawi r11,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 8;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addic. r11,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a7f488
	if (!cr0.lt) goto loc_83A7F488;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x83a7f49c
	goto loc_83A7F49C;
loc_83A7F488:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// blt cr6,0x83a7f498
	if (cr6.lt) goto loc_83A7F498;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83a7f49c
	goto loc_83A7F49C;
loc_83A7F498:
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
loc_83A7F49C:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
loc_83A7F4A0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x83a7f44c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F44C;
	// cmpwi cr6,r7,128
	cr6.compare<int32_t>(ctx.r7.s32, 128, xer);
	// bge cr6,0x83a7f4d4
	if (!cr6.lt) goto loc_83A7F4D4;
loc_83A7F4B0:
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subfic r11,r3,128
	xer.ca = ctx.r3.u32 <= 128;
	ctx.r11.s64 = 128 - ctx.r3.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a7f4d4
	if (cr6.eq) goto loc_83A7F4D4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A7F4CC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83a7f4cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F4CC;
loc_83A7F4D4:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83a7f41c
	if (!cr0.eq) goto loc_83A7F41C;
loc_83A7F4E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7F4E8"))) PPC_WEAK_FUNC(sub_83A7F4E8);
PPC_FUNC_IMPL(__imp__sub_83A7F4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A7F4F0;
	__savegprlr_22(ctx, base);
	// lwz r28,68(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83a7f70c
	if (!cr6.gt) goto loc_83A7F70C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r3,84
	ctx.r8.s64 = ctx.r3.s64 + 84;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r29,52(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r25,64(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ble cr6,0x83a7f70c
	if (!cr6.gt) goto loc_83A7F70C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r4,r11,-760
	ctx.r4.s64 = ctx.r11.s64 + -760;
	// lfs f13,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
loc_83A7F538:
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,1292(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1292);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a7f704
	if (cr6.eq) goto loc_83A7F704;
	// add r11,r27,r26
	ctx.r11.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r6,r27,1024
	ctx.r6.s64 = ctx.r27.s64 + 1024;
	// addi r5,r11,1024
	ctx.r5.s64 = ctx.r11.s64 + 1024;
	// addi r10,r26,-1
	ctx.r10.s64 = ctx.r26.s64 + -1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a7f700
	if (!cr6.gt) goto loc_83A7F700;
loc_83A7F568:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// blt cr6,0x83a7f678
	if (cr6.lt) goto loc_83A7F678;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// add r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 + ctx.r27.u64;
loc_83A7F58C:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bge cr6,0x83a7f6f4
	if (!cr6.lt) goto loc_83A7F6F4;
	// lbzx r3,r10,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r31,r4,252
	ctx.r31.s64 = ctx.r4.s64 + 252;
	// lbzx r23,r7,r5
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r3,r3,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r3.s64;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r3,r31
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bge cr6,0x83a7f6e0
	if (!cr6.lt) goto loc_83A7F6E0;
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r31,r7,r5
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// addi r23,r4,252
	ctx.r23.s64 = ctx.r4.s64 + 252;
	// lfs f0,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// lbz r3,-1(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r3,r23
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bge cr6,0x83a7f6e8
	if (!cr6.lt) goto loc_83A7F6E8;
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r31,r7,r5
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// addi r23,r4,252
	ctx.r23.s64 = ctx.r4.s64 + 252;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// lbz r3,-2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + -2);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r3,r23
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,4(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bge cr6,0x83a7f6f0
	if (!cr6.lt) goto loc_83A7F6F0;
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r31,r7,r5
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// addi r23,r4,252
	ctx.r23.s64 = ctx.r4.s64 + 252;
	// lfsu f0,-16(r9)
	ea = -16 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r22,r28,-3
	ctx.r22.s64 = ctx.r28.s64 + -3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r3,-3(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + -3);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r30,r22
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, xer);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r3,r23
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// blt cr6,0x83a7f58c
	if (cr6.lt) goto loc_83A7F58C;
loc_83A7F678:
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// bge cr6,0x83a7f6f4
	if (!cr6.lt) goto loc_83A7F6F4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + ctx.r27.u64;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,-4
	ctx.r3.s64 = ctx.r8.s64 + -4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r8,r31,r27
	ctx.r8.u64 = ctx.r31.u64 + ctx.r27.u64;
loc_83A7F69C:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bge cr6,0x83a7f6f4
	if (!cr6.lt) goto loc_83A7F6F4;
	// lbzx r31,r10,r6
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r30,r4,252
	ctx.r30.s64 = ctx.r4.s64 + 252;
	// lbzx r23,r7,r5
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// lfsu f0,-4(r8)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r31,r31,r23
	ctx.r31.s64 = ctx.r23.s64 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, xer);
	// lfsx f12,r31,r30
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// blt cr6,0x83a7f69c
	if (cr6.lt) goto loc_83A7F69C;
	// b 0x83a7f6f4
	goto loc_83A7F6F4;
loc_83A7F6E0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x83a7f6f4
	goto loc_83A7F6F4;
loc_83A7F6E8:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// b 0x83a7f6f4
	goto loc_83A7F6F4;
loc_83A7F6F0:
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
loc_83A7F6F4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r25
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, xer);
	// blt cr6,0x83a7f568
	if (cr6.lt) goto loc_83A7F568;
loc_83A7F700:
	// stfs f13,508(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 508, temp.u32);
loc_83A7F704:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bdnz 0x83a7f538
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F538;
loc_83A7F70C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7F714"))) PPC_WEAK_FUNC(sub_83A7F714);
PPC_FUNC_IMPL(__imp__sub_83A7F714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7F718"))) PPC_WEAK_FUNC(sub_83A7F718);
PPC_FUNC_IMPL(__imp__sub_83A7F718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A7F720;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce774
	ctx.lr = 0x83A7F728;
	__savefpr_27(ctx, base);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a7f948
	if (!cr6.gt) goto loc_83A7F948;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// lwz r9,156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r27,r9,-3
	ctx.r27.s64 = ctx.r9.s64 + -3;
	// ble 0x83a7f948
	if (!cr0.gt) goto loc_83A7F948;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r28,r11,-824
	ctx.r28.s64 = ctx.r11.s64 + -824;
	// lfs f12,-10804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f12.f64 = double(temp.f32);
loc_83A7F76C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a7f93c
	if (!cr6.eq) goto loc_83A7F93C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r29,-7
	ctx.r11.s64 = ctx.r29.s64 + -7;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + ctx.r27.u64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// lbz r8,1280(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1280);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lfsx f0,r7,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bge cr6,0x83a7f878
	if (!cr6.lt) goto loc_83A7F878;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A7F7C4:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfsx f11,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f31,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f29,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f31,f0
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfsx f10,r8,r7
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// fmuls f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f27,f29,f0
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f7,f5,f13
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f30,20(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f28,24(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f4,f31,f13
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// stfs f27,28(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f3,f29,f13
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// stfsx f8,r8,r9
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f7,12(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f6,16(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f5,20(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f4,24(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f3,28(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// bdnz 0x83a7f7c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F7C4;
loc_83A7F878:
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, xer);
	// bge cr6,0x83a7f93c
	if (!cr6.lt) goto loc_83A7F93C;
	// subf r11,r5,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83a7f908
	if (cr6.lt) goto loc_83A7F908;
	// addi r31,r29,-3
	ctx.r31.s64 = ctx.r29.s64 + -3;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A7F894:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lfsx f11,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f10,r10,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfsx f9,r10,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f6,4(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsx f5,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfsx f4,r7,r11
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfsx f3,r7,r9
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, temp.u32);
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, xer);
	// lfsx f2,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfsx f1,r8,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// fmuls f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfsx f11,r8,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x83a7f894
	if (cr6.lt) goto loc_83A7F894;
loc_83A7F908:
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, xer);
	// bge cr6,0x83a7f93c
	if (!cr6.lt) goto loc_83A7F93C;
	// subf r10,r5,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r5.s64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A7F91C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfsx f11,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f10,r11,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfsx f9,r11,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a7f91c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F91C;
loc_83A7F93C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x83a7f76c
	if (!cr0.eq) goto loc_83A7F76C;
loc_83A7F948:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c0
	ctx.lr = 0x83A7F954;
	__restfpr_27(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7F958"))) PPC_WEAK_FUNC(sub_83A7F958);
PPC_FUNC_IMPL(__imp__sub_83A7F958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83a7f96c
	if (!cr6.eq) goto loc_83A7F96C;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
loc_83A7F96C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// bne cr6,0x83a7f980
	if (!cr6.eq) goto loc_83A7F980;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
loc_83A7F980:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r9,r8,84
	ctx.r9.s64 = ctx.r8.s64 + 84;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a7f9ac
	if (!cr6.gt) goto loc_83A7F9AC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_83A7F99C:
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a7f99c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7F99C;
loc_83A7F9AC:
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A7F9C0"))) PPC_WEAK_FUNC(sub_83A7F9C0);
PPC_FUNC_IMPL(__imp__sub_83A7F9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A7F9C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83a7f9f0
	if (!cr6.eq) goto loc_83A7F9F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A7F9F0:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// lwz r11,26392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26392);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a7fa14
	if (cr6.gt) goto loc_83A7FA14;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A7FA14:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83a7fb30
	if (!cr6.gt) goto loc_83A7FB30;
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(ctx.r29.s32, 16, xer);
	// bgt cr6,0x83a7fb30
	if (cr6.gt) goto loc_83A7FB30;
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mulli r11,r10,1584
	ctx.r11.s64 = ctx.r10.s64 * 1584;
	// addi r9,r11,1828
	ctx.r9.s64 = ctx.r11.s64 + 1828;
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// addi r25,r11,312
	ctx.r25.s64 = ctx.r11.s64 + 312;
	// beq cr6,0x83a7fae8
	if (cr6.eq) goto loc_83A7FAE8;
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// blt cr6,0x83a7fae8
	if (cr6.lt) goto loc_83A7FAE8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A7FA5C;
	sub_831CDCF0(ctx, base);
	// addi r11,r27,15
	ctx.r11.s64 = ctx.r27.s64 + 15;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r31,r11,200
	ctx.r31.s64 = ctx.r11.s64 + 200;
	// ble cr6,0x83a7fac8
	if (!cr6.gt) goto loc_83A7FAC8;
	// addi r30,r11,84
	ctx.r30.s64 = ctx.r11.s64 + 84;
loc_83A7FA78:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r31,r11,1300
	ctx.r31.s64 = ctx.r11.s64 + 1300;
	// bne cr6,0x83a7fab8
	if (!cr6.eq) goto loc_83A7FAB8;
	// li r4,1584
	ctx.r4.s64 = 1584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r22,r11,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83a804e8
	ctx.lr = 0x83A7FAA0;
	sub_83A804E8(ctx, base);
	// stw r3,1288(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1288, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1584
	ctx.r31.s64 = ctx.r31.s64 + 1584;
	// lwz r10,1288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a7fae0
	if (cr6.eq) goto loc_83A7FAE0;
loc_83A7FAB8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a7fa78
	if (cr6.lt) goto loc_83A7FA78;
loc_83A7FAC8:
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// ble cr6,0x83a7faf4
	if (!cr6.gt) goto loc_83A7FAF4;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A7FAE0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7e0f8
	ctx.lr = 0x83A7FAE8;
	sub_83A7E0F8(ctx, base);
loc_83A7FAE8:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A7FAF4:
	// subf r11,r31,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r31.s64;
	// rlwinm r10,r29,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 9) & 0xFFFFFE00;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7fae8
	if (cr6.lt) goto loc_83A7FAE8;
	// stw r31,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,168(r26)
	PPC_STORE_U32(ctx.r26.u32 + 168, ctx.r11.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// bl 0x83a7e180
	ctx.lr = 0x83A7FB20;
	sub_83A7E180(ctx, base);
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A7FB30:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7FB3C"))) PPC_WEAK_FUNC(sub_83A7FB3C);
PPC_FUNC_IMPL(__imp__sub_83A7FB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7FB40"))) PPC_WEAK_FUNC(sub_83A7FB40);
PPC_FUNC_IMPL(__imp__sub_83A7FB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A7FB48;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a7fb70
	if (!cr6.eq) goto loc_83A7FB70;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
loc_83A7FB70:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83a7fb90
	if (!cr6.eq) goto loc_83A7FB90;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A7FB90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a7fba4
	if (!cr6.eq) goto loc_83A7FBA4;
loc_83A7FB98:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A7FBA4:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,72
	cr6.compare<uint32_t>(ctx.r10.u32, 72, xer);
	// beq cr6,0x83a7fbd4
	if (cr6.eq) goto loc_83A7FBD4;
loc_83A7FBB4:
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// addi r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 1;
	// bl 0x83a80688
	ctx.lr = 0x83A7FBC0;
	sub_83A80688(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A7FBD4:
	// lwz r11,168(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// add r28,r31,r30
	ctx.r28.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a7fbf0
	if (cr6.lt) goto loc_83A7FBF0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a7fbfc
	goto loc_83A7FBFC;
loc_83A7FBF0:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a7fc00
	if (!cr6.gt) goto loc_83A7FC00;
	// subf r30,r31,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_83A7FBFC:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83A7FC00:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a809d0
	ctx.lr = 0x83A7FC10;
	sub_83A809D0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a7fc68
	if (!cr6.eq) goto loc_83A7FC68;
	// lwz r29,164(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,168(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d0080
	ctx.lr = 0x83A7FC30;
	sub_831D0080(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83a7fc50
	if (cr6.eq) goto loc_83A7FC50;
	// lwz r11,168(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 168);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x831d0080
	ctx.lr = 0x83A7FC50;
	sub_831D0080(ctx, base);
loc_83A7FC50:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a809d0
	ctx.lr = 0x83A7FC60;
	sub_83A809D0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a7fb98
	if (cr6.eq) goto loc_83A7FB98;
loc_83A7FC68:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a7fbb4
	if (!cr6.eq) goto loc_83A7FBB4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7e1e8
	ctx.lr = 0x83A7FC7C;
	sub_83A7E1E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a7fc90
	if (!cr6.eq) goto loc_83A7FC90;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r11,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_83A7FC90:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7FC98"))) PPC_WEAK_FUNC(sub_83A7FC98);
PPC_FUNC_IMPL(__imp__sub_83A7FC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A7FCA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a7fcbc
	if (!cr6.eq) goto loc_83A7FCBC;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
loc_83A7FCBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a7fcdc
	if (cr6.gt) goto loc_83A7FCDC;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A7FCDC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a7fcf4
	if (!cr6.eq) goto loc_83A7FCF4;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_83A7FCF4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a7fd08
	if (!cr6.eq) goto loc_83A7FD08;
loc_83A7FCFC:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A7FD08:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x83a7fd50
	if (cr6.eq) goto loc_83A7FD50;
	// addic. r10,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83a7fd3c
	if (cr0.eq) goto loc_83A7FD3C;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
loc_83A7FD24:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// beq cr6,0x83a7fd3c
	if (cr6.eq) goto loc_83A7FD3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7fd24
	if (cr6.lt) goto loc_83A7FD24;
loc_83A7FD3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A7FD50:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a7e5e0
	ctx.lr = 0x83A7FD60;
	sub_83A7E5E0(ctx, base);
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83a7fcfc
	if (cr6.eq) goto loc_83A7FCFC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a7fda8
	if (cr6.eq) goto loc_83A7FDA8;
	// addic. r10,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x83a7fd98
	if (cr0.eq) goto loc_83A7FD98;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
loc_83A7FD80:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// beq cr6,0x83a7fd98
	if (cr6.eq) goto loc_83A7FD98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a7fd80
	if (cr6.lt) goto loc_83A7FD80;
loc_83A7FD98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A7FDA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A7FDB4"))) PPC_WEAK_FUNC(sub_83A7FDB4);
PPC_FUNC_IMPL(__imp__sub_83A7FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A7FDB8"))) PPC_WEAK_FUNC(sub_83A7FDB8);
PPC_FUNC_IMPL(__imp__sub_83A7FDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A7FDC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,-1752
	ctx.r29.s64 = ctx.r11.s64 + -1752;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r30,164(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,64(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r23,r3,84
	ctx.r23.s64 = ctx.r3.s64 + 84;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r8,r11,2,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// subfic r6,r7,7
	xer.ca = ctx.r7.u32 <= 7;
	ctx.r6.s64 = 7 - ctx.r7.s64;
	// lwzx r5,r8,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r4,r11,2,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// or r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 | ctx.r7.u64;
	// subfic r3,r8,9
	xer.ca = ctx.r8.u32 <= 9;
	ctx.r3.s64 = 9 - ctx.r8.s64;
	// and r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addi r31,r11,7
	ctx.r31.s64 = ctx.r11.s64 + 7;
	// srw r7,r8,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r7,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r7.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lwzx r5,r4,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r11,r4,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// and r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ctx.r5.u64;
	// srw r7,r8,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r7,152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 152, ctx.r7.u32);
	// ble cr6,0x83a7ffd8
	if (!cr6.gt) goto loc_83A7FFD8;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
loc_83A7FE78:
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r28,1024
	ctx.r6.s64 = ctx.r28.s64 + 1024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1296(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1296);
	// bl 0x83a7f228
	ctx.lr = 0x83A7FE94;
	sub_83A7F228(ctx, base);
	// lwz r11,1292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1292);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a7ff5c
	if (!cr6.eq) goto loc_83A7FF5C;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r28,1280
	ctx.r8.s64 = ctx.r28.s64 + 1280;
	// srawi r11,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// rlwinm r10,r31,2,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x1C;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r9,r31,29
	ctx.r9.u64 = ctx.r31.u32 & 0x7;
	// subfic r7,r9,8
	xer.ca = ctx.r9.u32 <= 8;
	ctx.r7.s64 = 8 - ctx.r9.s64;
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r3,r5,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// and r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 & ctx.r6.u64;
	// srw r11,r10,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r11,28,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFF;
	// stb r9,1280(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1280, ctx.r9.u8);
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// bge cr6,0x83a7ffcc
	if (!cr6.lt) goto loc_83A7FFCC;
	// li r9,3
	ctx.r9.s64 = 3;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stb r10,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r10.u8);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r10,2
	ctx.r10.s64 = 2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A7FF04:
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// rlwinm r6,r11,2,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// subfic r4,r5,8
	xer.ca = ctx.r5.u32 <= 8;
	ctx.r4.s64 = 8 - ctx.r5.s64;
	// lwzx r3,r6,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r9,r6,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// srw r4,r5,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r3,r4,28,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFF;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// stbx r3,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u8);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83a7ff04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7FF04;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83a7ffcc
	goto loc_83A7FFCC;
loc_83A7FF5C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83a7ffc8
	if (!cr6.gt) goto loc_83A7FFC8;
	// add r10,r28,r25
	ctx.r10.u64 = ctx.r28.u64 + ctx.r25.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// addi r8,r10,1024
	ctx.r8.s64 = ctx.r10.s64 + 1024;
loc_83A7FF78:
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r7,r11,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// subfic r5,r6,10
	xer.ca = ctx.r6.u32 <= 10;
	ctx.r5.s64 = 10 - ctx.r6.s64;
	// lwzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r7,r3,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 & ctx.r4.u64;
	// srw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x83a7ff78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A7FF78;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83a7ffcc
	goto loc_83A7FFCC;
loc_83A7FFC8:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83A7FFCC:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x83a7fe78
	if (!cr0.eq) goto loc_83A7FE78;
loc_83A7FFD8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a7f3e0
	ctx.lr = 0x83A7FFE0;
	sub_83A7F3E0(ctx, base);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a80010
	if (!cr6.gt) goto loc_83A80010;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
loc_83A7FFF0:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r6,r11,512
	ctx.r6.s64 = ctx.r11.s64 + 512;
	// addi r4,r11,1152
	ctx.r4.s64 = ctx.r11.s64 + 1152;
	// addi r3,r11,1024
	ctx.r3.s64 = ctx.r11.s64 + 1024;
	// lwz r5,1296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// bl 0x83a80f10
	ctx.lr = 0x83A80008;
	sub_83A80F10(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a7fff0
	if (!cr0.eq) goto loc_83A7FFF0;
loc_83A80010:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a80020
	if (cr6.gt) goto loc_83A80020;
	// stw r31,160(r27)
	PPC_STORE_U32(ctx.r27.u32 + 160, ctx.r31.u32);
loc_83A80020:
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r27)
	PPC_STORE_U32(ctx.r27.u32 + 156, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A80038"))) PPC_WEAK_FUNC(sub_83A80038);
PPC_FUNC_IMPL(__imp__sub_83A80038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A80040;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a80064
	if (!cr6.eq) goto loc_83A80064;
	// bl 0x83a7fdb8
	ctx.lr = 0x83A8005C;
	sub_83A7FDB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a800ec
	if (!cr6.eq) goto loc_83A800EC;
loc_83A80064:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7e758
	ctx.lr = 0x83A8006C;
	sub_83A7E758(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a800ec
	if (!cr6.eq) goto loc_83A800EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7f4e8
	ctx.lr = 0x83A8007C;
	sub_83A7F4E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7f718
	ctx.lr = 0x83A80084;
	sub_83A7F718(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a800d4
	if (cr6.eq) goto loc_83A800D4;
	// lwz r27,4(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r28,84
	ctx.r11.s64 = ctx.r28.s64 + 84;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a800d4
	if (!cr6.gt) goto loc_83A800D4;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_83A800A4:
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r3,1288(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a800d4
	if (cr6.eq) goto loc_83A800D4;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a800c4
	if (cr6.eq) goto loc_83A800C4;
	// bl 0x83a80538
	ctx.lr = 0x83A800C4;
	sub_83A80538(ctx, base);
loc_83A800C4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x83a800a4
	if (cr6.lt) goto loc_83A800A4;
loc_83A800D4:
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83a800e8
	if (!cr6.eq) goto loc_83A800E8;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_83A800E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A800EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A800F4"))) PPC_WEAK_FUNC(sub_83A800F4);
PPC_FUNC_IMPL(__imp__sub_83A800F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A800F8"))) PPC_WEAK_FUNC(sub_83A800F8);
PPC_FUNC_IMPL(__imp__sub_83A800F8) {
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
	ctx.lr = 0x83A80100;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a8011c
	if (!cr6.eq) goto loc_83A8011C;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
loc_83A8011C:
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a8013c
	if (cr6.gt) goto loc_83A8013C;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A8013C:
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a803a8
	if (!cr6.gt) goto loc_83A803A8;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x83a803a8
	if (!cr6.lt) goto loc_83A803A8;
	// ld r31,176(r28)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r28.u32 + 176);
	// ld r30,184(r28)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r28.u32 + 184);
	// cmpdi cr6,r31,0
	cr6.compare<int64_t>(ctx.r31.s64, 0, xer);
	// bgt cr6,0x83a801a8
	if (cr6.gt) goto loc_83A801A8;
	// cmpdi cr6,r30,128
	cr6.compare<int64_t>(ctx.r30.s64, 128, xer);
	// blt cr6,0x83a801a8
	if (cr6.lt) goto loc_83A801A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a80038
	ctx.lr = 0x83A80174;
	sub_83A80038(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a803ac
	if (!cr6.eq) goto loc_83A803AC;
	// ld r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 184);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// std r11,184(r28)
	PPC_STORE_U64(ctx.r28.u32 + 184, ctx.r11.u64);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bgt cr6,0x83a80198
	if (cr6.gt) goto loc_83A80198;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_83A80198:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A801A8:
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// bgt cr6,0x83a801c4
	if (cr6.gt) goto loc_83A801C4;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A801C4:
	// cmpdi cr6,r31,1152
	cr6.compare<int64_t>(ctx.r31.s64, 1152, xer);
	// ble cr6,0x83a8020c
	if (!cr6.gt) goto loc_83A8020C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a801dc
	if (!cr6.eq) goto loc_83A801DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_83A801DC:
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83a801f8
	if (!cr6.eq) goto loc_83A801F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_83A801F8:
	// addi r11,r31,-128
	ctx.r11.s64 = ctx.r31.s64 + -128;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,176(r28)
	PPC_STORE_U64(ctx.r28.u32 + 176, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A8020C:
	// cmpdi cr6,r31,256
	cr6.compare<int64_t>(ctx.r31.s64, 256, xer);
	// ble cr6,0x83a80278
	if (!cr6.gt) goto loc_83A80278;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a8022c
	if (!cr6.eq) goto loc_83A8022C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7fdb8
	ctx.lr = 0x83A80224;
	sub_83A7FDB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a803ac
	if (!cr6.eq) goto loc_83A803AC;
loc_83A8022C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7e758
	ctx.lr = 0x83A80234;
	sub_83A7E758(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a803ac
	if (!cr6.eq) goto loc_83A803AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7f4e8
	ctx.lr = 0x83A80244;
	sub_83A7F4E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7f718
	ctx.lr = 0x83A8024C;
	sub_83A7F718(ctx, base);
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83a80260
	if (!cr6.eq) goto loc_83A80260;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_83A80260:
	// ld r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 176);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// std r11,176(r28)
	PPC_STORE_U64(ctx.r28.u32 + 176, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A80278:
	// cmpdi cr6,r31,128
	cr6.compare<int64_t>(ctx.r31.s64, 128, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// blt cr6,0x83a802a8
	if (cr6.lt) goto loc_83A802A8;
	// bl 0x83a80038
	ctx.lr = 0x83A8028C;
	sub_83A80038(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a803ac
	if (!cr6.eq) goto loc_83A803AC;
	// ld r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 176);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// std r11,176(r28)
	PPC_STORE_U64(ctx.r28.u32 + 176, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A802A8:
	// bl 0x83a80038
	ctx.lr = 0x83A802AC;
	sub_83A80038(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a803ac
	if (!cr6.eq) goto loc_83A803AC;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpdi cr6,r11,128
	cr6.compare<int64_t>(ctx.r11.s64, 128, xer);
	// blt cr6,0x83a802c4
	if (cr6.lt) goto loc_83A802C4;
	// li r11,128
	ctx.r11.s64 = 128;
loc_83A802C4:
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// cmpdi cr6,r31,0
	cr6.compare<int64_t>(ctx.r31.s64, 0, xer);
	// ble cr6,0x83a80384
	if (!cr6.gt) goto loc_83A80384;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a80384
	if (cr6.eq) goto loc_83A80384;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// ble cr6,0x83a80380
	if (!cr6.gt) goto loc_83A80380;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83A802F4:
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// add r5,r8,r3
	ctx.r5.u64 = ctx.r8.u64 + ctx.r3.u64;
	// blt cr6,0x83a80348
	if (cr6.lt) goto loc_83A80348;
	// addi r7,r4,-3
	ctx.r7.s64 = ctx.r4.s64 + -3;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// subf r6,r8,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r8.s64;
loc_83A80318:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
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
	// blt cr6,0x83a80318
	if (cr6.lt) goto loc_83A80318;
loc_83A80348:
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bge cr6,0x83a80374
	if (!cr6.lt) goto loc_83A80374;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83A80364:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a80364
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A80364;
loc_83A80374:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x83a802f4
	if (!cr0.eq) goto loc_83A802F4;
loc_83A80380:
	// std r27,176(r28)
	PPC_STORE_U64(ctx.r28.u32 + 176, ctx.r27.u64);
loc_83A80384:
	// ld r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 184);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r9,184(r28)
	PPC_STORE_U64(ctx.r28.u32 + 184, ctx.r9.u64);
	// cmpdi cr6,r9,0
	cr6.compare<int64_t>(ctx.r9.s64, 0, xer);
	// bgt cr6,0x83a803a4
	if (cr6.gt) goto loc_83A803A4;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_83A803A4:
	// stw r4,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
loc_83A803A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A803AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A803B4"))) PPC_WEAK_FUNC(sub_83A803B4);
PPC_FUNC_IMPL(__imp__sub_83A803B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A803B8"))) PPC_WEAK_FUNC(sub_83A803B8);
PPC_FUNC_IMPL(__imp__sub_83A803B8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a803d4
	if (!cr6.eq) goto loc_83A803D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_83A803D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x83a800f8
	ctx.lr = 0x83A803E4;
	sub_83A800F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A803F4"))) PPC_WEAK_FUNC(sub_83A803F4);
PPC_FUNC_IMPL(__imp__sub_83A803F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A803F8"))) PPC_WEAK_FUNC(sub_83A803F8);
PPC_FUNC_IMPL(__imp__sub_83A803F8) {
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
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83a80410
	if (!cr6.eq) goto loc_83A80410;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_83A80410:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bl 0x83a800f8
	ctx.lr = 0x83A80420;
	sub_83A800F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A80430"))) PPC_WEAK_FUNC(sub_83A80430);
PPC_FUNC_IMPL(__imp__sub_83A80430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addi r11,r11,-176
	ctx.r11.s64 = ctx.r11.s64 + -176;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,26396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A80448"))) PPC_WEAK_FUNC(sub_83A80448);
PPC_FUNC_IMPL(__imp__sub_83A80448) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,26400
	ctx.r31.s64 = ctx.r11.s64 + 26400;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a804b0
	if (!cr6.eq) goto loc_83A804B0;
	// bl 0x83a81078
	ctx.lr = 0x83A80478;
	sub_83A81078(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,27636
	ctx.r9.s64 = ctx.r11.s64 + 27636;
	// li r8,12
	ctx.r8.s64 = 12;
	// li r7,4
	ctx.r7.s64 = 4;
	// lvlx128 v63,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v61,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vrlimi128 v63,v61,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 78), 2));
	// vrlimi128 v63,v60,1,1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 147), 1));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83A804B0:
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

__attribute__((alias("__imp__sub_83A804C4"))) PPC_WEAK_FUNC(sub_83A804C4);
PPC_FUNC_IMPL(__imp__sub_83A804C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A804C8"))) PPC_WEAK_FUNC(sub_83A804C8);
PPC_FUNC_IMPL(__imp__sub_83A804C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26416);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,26416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26416, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x83a811c8
	sub_83A811C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A804E0"))) PPC_WEAK_FUNC(sub_83A804E0);
PPC_FUNC_IMPL(__imp__sub_83A804E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A804E4"))) PPC_WEAK_FUNC(sub_83A804E4);
PPC_FUNC_IMPL(__imp__sub_83A804E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A804E8"))) PPC_WEAK_FUNC(sub_83A804E8);
PPC_FUNC_IMPL(__imp__sub_83A804E8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A80508;
	sub_831CDCF0(ctx, base);
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,0,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_83A80524"))) PPC_WEAK_FUNC(sub_83A80524);
PPC_FUNC_IMPL(__imp__sub_83A80524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A80528"))) PPC_WEAK_FUNC(sub_83A80528);
PPC_FUNC_IMPL(__imp__sub_83A80528) {
	PPC_FUNC_PROLOGUE();
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A80534"))) PPC_WEAK_FUNC(sub_83A80534);
PPC_FUNC_IMPL(__imp__sub_83A80534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A80538"))) PPC_WEAK_FUNC(sub_83A80538);
PPC_FUNC_IMPL(__imp__sub_83A80538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A80540;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r30,1024
	ctx.r28.s64 = ctx.r30.s64 + 1024;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r30,512
	ctx.r4.s64 = ctx.r30.s64 + 512;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r31,r28,256
	ctx.r31.s64 = ctx.r28.s64 + 256;
	// addi r27,r29,256
	ctx.r27.s64 = ctx.r29.s64 + 256;
	// addi r26,r30,256
	ctx.r26.s64 = ctx.r30.s64 + 256;
	// bl 0x83a81620
	ctx.lr = 0x83A8056C;
	sub_83A81620(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r7,r31,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// subf r6,r31,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_83A80590:
	// lvx128 v13,r7,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r6,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvlx v0,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx v0,r9,r5
	ea = ctx.r9.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// bdnz 0x83a80590
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A80590;
	// addi r7,r8,256
	ctx.r7.s64 = ctx.r8.s64 + 256;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r4,r8,256
	ctx.r4.s64 = ctx.r8.s64 + 256;
	// subf r6,r7,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r7.s64;
	// lis r7,-31739
	ctx.r7.s64 = -2080047104;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// subf r9,r27,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r27.s64;
	// addi r4,r7,26400
	ctx.r4.s64 = ctx.r7.s64 + 26400;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83A805E0:
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvx128 v11,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// vperm128 v13,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v12,r7,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v11,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvlx v13,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83a805e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A805E0;
	// addi r9,r8,256
	ctx.r9.s64 = ctx.r8.s64 + 256;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r11,r28,240
	ctx.r11.s64 = ctx.r28.s64 + 240;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
loc_83A80620:
	// lvx128 v63,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v61,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v61,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bdnz 0x83a80620
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A80620;
	// vspltisw128 v60,-1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r8,240
	ctx.r10.s64 = ctx.r8.s64 + 240;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// subf r9,r26,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r26.s64;
	// vslw128 v62,v60,v60
	ctx.v62.u32[0] = ctx.v60.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v62.u32[1] = ctx.v60.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v62.u32[2] = ctx.v60.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v62.u32[3] = ctx.v60.u32[3] << (ctx.v60.u8[12] & 0x1F);
loc_83A8065C:
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// lvx128 v59,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v58,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v57,v58,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vxor128 v56,v57,v62
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvx128 v56,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83a8065c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8065C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A80688"))) PPC_WEAK_FUNC(sub_83A80688);
PPC_FUNC_IMPL(__imp__sub_83A80688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83A80698:
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplwi cr6,r9,72
	cr6.compare<uint32_t>(ctx.r9.u32, 72, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// blt cr6,0x83a80698
	if (cr6.lt) goto loc_83A80698;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A806B8"))) PPC_WEAK_FUNC(sub_83A806B8);
PPC_FUNC_IMPL(__imp__sub_83A806B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a807c0
	if (!cr6.gt) goto loc_83A807C0;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bgt cr6,0x83a807c0
	if (cr6.gt) goto loc_83A807C0;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a807c0
	if (cr6.gt) goto loc_83A807C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a807b8
	if (!cr6.gt) goto loc_83A807B8;
	// lis r10,127
	ctx.r10.s64 = 8323072;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x83a807b8
	if (cr6.gt) goto loc_83A807B8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83a807b0
	if (cr6.lt) goto loc_83A807B0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x83a807b0
	if (cr6.gt) goto loc_83A807B0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83a807a8
	if (cr6.lt) goto loc_83A807A8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, xer);
	// bgt cr6,0x83a807a8
	if (cr6.gt) goto loc_83A807A8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a807a8
	if (cr6.lt) goto loc_83A807A8;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x83a80744
	if (!cr6.lt) goto loc_83A80744;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83A80744:
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83a807a0
	if (cr6.lt) goto loc_83A807A0;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a807a0
	if (cr6.lt) goto loc_83A807A0;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x83a807a0
	if (cr6.gt) goto loc_83A807A0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a80774
	if (!cr6.gt) goto loc_83A80774;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a807a0
	if (!cr6.lt) goto loc_83A807A0;
loc_83A80774:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a80798
	if (cr6.eq) goto loc_83A80798;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a80798
	if (cr6.eq) goto loc_83A80798;
	// cmpwi cr6,r11,56
	cr6.compare<int32_t>(ctx.r11.s32, 56, xer);
	// beq cr6,0x83a80798
	if (cr6.eq) goto loc_83A80798;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83A80798:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A807A0:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83A807A8:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_83A807B0:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83A807B8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83A807C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A807C8"))) PPC_WEAK_FUNC(sub_83A807C8);
PPC_FUNC_IMPL(__imp__sub_83A807C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r31,r3,r4
	ctx.r31.s32 = PPCDivide(ctx.r3.s32, ctx.r4.s32);
	// andc r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// twllei r4,0
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// twlgei r9,-1
	// beq cr6,0x83a8099c
	if (cr6.eq) goto loc_83A8099C;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x83a8099c
	if (cr6.eq) goto loc_83A8099C;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a80964
	if (!cr6.gt) goto loc_83A80964;
	// addi r30,r31,-2
	ctx.r30.s64 = ctx.r31.s64 + -2;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
loc_83A80818:
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// bgt cr6,0x83a80934
	if (cr6.gt) goto loc_83A80934;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a80850
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A80850;
	// bdzf 4*cr6+eq,0x83a80864
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A80864;
	// bdzf 4*cr6+eq,0x83a80894
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A80894;
	// bdzf 4*cr6+eq,0x83a808c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A808C8;
	// bdzf 4*cr6+eq,0x83a808e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A808E8;
	// bne cr6,0x83a8090c
	if (!cr6.eq) goto loc_83A8090C;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A80850:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A80864:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x83a80884
	if (!cr6.eq) goto loc_83A80884;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A80884:
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A80894:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bgt cr6,0x83a808b8
	if (cr6.gt) goto loc_83A808B8;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A808B8:
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A808C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A808E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A8090C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x83a8095c
	goto loc_83A8095C;
loc_83A80934:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83a80954
	if (!cr6.gt) goto loc_83A80954;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a80954
	if (cr6.eq) goto loc_83A80954;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_83A8094C:
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x83a8094c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A8094C;
loc_83A80954:
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_83A8095C:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x83a80818
	if (!cr0.eq) goto loc_83A80818;
loc_83A80964:
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bge cr6,0x83a809c0
	if (!cr6.lt) goto loc_83A809C0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// beq 0x83a809c0
	if (cr0.eq) goto loc_83A809C0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A80988:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a80988
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A80988;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83A8099C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a809c0
	if (!cr6.gt) goto loc_83A809C0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a809c0
	if (cr6.eq) goto loc_83A809C0;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
loc_83A809B8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a809b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A809B8;
loc_83A809C0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A809CC"))) PPC_WEAK_FUNC(sub_83A809CC);
PPC_FUNC_IMPL(__imp__sub_83A809CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A809D0"))) PPC_WEAK_FUNC(sub_83A809D0);
PPC_FUNC_IMPL(__imp__sub_83A809D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A809D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A809F8;
	sub_831CDCF0(ctx, base);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// blt cr6,0x83a80a94
	if (cr6.lt) goto loc_83A80A94;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lis r10,18499
	ctx.r10.s64 = 1212350464;
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// ori r5,r10,16640
	ctx.r5.u64 = ctx.r10.u64 | 16640;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r3,r6,24,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7FFFFFFF;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x83a80f00
	if (!cr6.eq) goto loc_83A80F00;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// ble cr6,0x83a80a70
	if (!cr6.gt) goto loc_83A80A70;
loc_83A80A64:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A80A70:
	// cmplwi cr6,r11,257
	cr6.compare<uint32_t>(ctx.r11.u32, 257, xer);
	// ble cr6,0x83a80a64
	if (!cr6.gt) goto loc_83A80A64;
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a80aa0
	if (!cr6.lt) goto loc_83A80AA0;
loc_83A80A94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A80AA0:
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// lis r9,26221
	ctx.r9.s64 = 1718419456;
	// lbz r8,10(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,11(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// ori r4,r9,29696
	ctx.r4.u64 = ctx.r9.u64 | 29696;
	// lbz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r5,24,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x7FFFFFFF;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x83a80f00
	if (!cr6.eq) goto loc_83A80F00;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lis r9,25455
	ctx.r9.s64 = 1668218880;
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// ori r8,r9,28016
	ctx.r8.u64 = ctx.r9.u64 | 28016;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lbzu r7,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lbzu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lbzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// lbzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r10,r9,r12
	ctx.r10.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x83a80c00
	if (!cr6.eq) goto loc_83A80C00;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lbzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lbzu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// b 0x83a80c88
	goto loc_83A80C88;
loc_83A80C00:
	// lis r9,25701
	ctx.r9.s64 = 1684340736;
	// ori r8,r9,25344
	ctx.r8.u64 = ctx.r9.u64 | 25344;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x83a80f00
	if (!cr6.eq) goto loc_83A80F00;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lbzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lbzu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a80c58
	if (!cr6.eq) goto loc_83A80C58;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x83a80c64
	goto loc_83A80C64;
loc_83A80C58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_83A80C64:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r4,r5,28
	ctx.r4.u64 = ctx.r5.u32 & 0xF;
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
loc_83A80C88:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a80ca0
	if (cr6.gt) goto loc_83A80CA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_83A80CA0:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r9,24948
	ctx.r9.s64 = 1634992128;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// ori r4,r9,26624
	ctx.r4.u64 = ctx.r9.u64 | 26624;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r5,24,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x7FFFFFFF;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x83a80ce8
	if (!cr6.eq) goto loc_83A80CE8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_83A80CE8:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r9,27759
	ctx.r9.s64 = 1819213824;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// ori r4,r9,28528
	ctx.r4.u64 = ctx.r9.u64 | 28528;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r5,24,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x7FFFFFFF;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x83a80db0
	if (!cr6.eq) goto loc_83A80DB0;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lbzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lbzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_83A80DB0:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r9,25449
	ctx.r9.s64 = 1667825664;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// ori r4,r9,28776
	ctx.r4.u64 = ctx.r9.u64 | 28776;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r5,24,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x7FFFFFFF;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x83a80e0c
	if (!cr6.eq) goto loc_83A80E0C;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
loc_83A80E0C:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lis r9,29302
	ctx.r9.s64 = 1920335872;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// ori r4,r9,24832
	ctx.r4.u64 = ctx.r9.u64 | 24832;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r5,24,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x7FFFFFFF;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x83a80e88
	if (!cr6.eq) goto loc_83A80E88;
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83a80e90
	goto loc_83A80E90;
loc_83A80E88:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_83A80E90:
	// stfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lis r9,25455
	ctx.r9.s64 = 1668218880;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// ori r4,r9,28013
	ctx.r4.u64 = ctx.r9.u64 | 28013;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r10,r5,24,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x7FFFFFFF;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x83a80ee0
	if (!cr6.eq) goto loc_83A80EE0;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_83A80EE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a806b8
	ctx.lr = 0x83A80EE8;
	sub_83A806B8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A80F00:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A80F0C"))) PPC_WEAK_FUNC(sub_83A80F0C);
PPC_FUNC_IMPL(__imp__sub_83A80F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A80F10"))) PPC_WEAK_FUNC(sub_83A80F10);
PPC_FUNC_IMPL(__imp__sub_83A80F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83A80F18;
	__savegprlr_14(ctx, base);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83a81070
	if (!cr6.gt) goto loc_83A81070;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r8,r3,-8
	ctx.r8.s64 = ctx.r3.s64 + -8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 + 528;
loc_83A80F48:
	// lbz r6,9(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// lbz r23,-1(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// rotlwi r22,r6,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,11(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11);
	// rotlwi r23,r23,2
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r23.u32, 2);
	// lbz r31,12(r8)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// rotlwi r19,r6,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r21,1(r10)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lbz r29,13(r8)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r8.u32 + 13);
	// rotlwi r4,r4,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lbz r20,2(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r31,r31,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// lbz r18,3(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rotlwi r21,r21,2
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r21.u32, 2);
	// lbzx r16,r10,r7
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// lbz r27,14(r8)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + 14);
	// addi r26,r11,256
	ctx.r26.s64 = ctx.r11.s64 + 256;
	// lbz r25,15(r8)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r8.u32 + 15);
	// rotlwi r20,r20,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r20.u32, 2);
	// lbz r17,4(r10)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rotlwi r29,r29,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// lbz r15,-2(r10)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// rotlwi r16,r16,2
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 2);
	// lbzu r6,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// rotlwi r18,r18,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r18.u32, 2);
	// lfsx f13,r23,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lbz r14,5(r10)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lfsx f0,r22,r11
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r11,256
	ctx.r24.s64 = ctx.r11.s64 + 256;
	// lfsx f12,r19,r3
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r27,r27,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// rotlwi r22,r17,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r17.u32, 2);
	// lfsx f9,r21,r30
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lfsx f10,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// lfsx f8,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// rotlwi r3,r15,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r15.u32, 2);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfsx f11,r16,r11
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// lfsx f7,r20,r28
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r28.u32);
	ctx.f7.f64 = double(temp.f32);
	// rotlwi r30,r25,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r25.u32, 2);
	// lfsx f6,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// rotlwi r31,r14,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r14.u32, 2);
	// lfsx f13,r18,r26
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r26.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfsx f9,r22,r24
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfsx f11,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfsx f6,r3,r5
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f7,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfsx f9,r30,r11
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f6,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f8,20(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f13,24(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f11,28(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfsu f9,32(r9)
	ea = 32 + ctx.r9.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83a80f48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A80F48;
loc_83A81070:
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81074"))) PPC_WEAK_FUNC(sub_83A81074);
PPC_FUNC_IMPL(__imp__sub_83A81074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81078"))) PPC_WEAK_FUNC(sub_83A81078);
PPC_FUNC_IMPL(__imp__sub_83A81078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26576);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,26576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26576, ctx.r9.u32);
	// lwz r8,26576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26576);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r11,27636
	ctx.r9.s64 = ctx.r11.s64 + 27636;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,12
	ctx.r8.s64 = 12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// lvlx128 v51,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,20
	ctx.r4.s64 = 20;
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v47,v51,v51
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v51.u8));
	// vor128 v50,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// lvlx128 v56,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v45,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// lvlx128 v46,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r3,28
	ctx.r3.s64 = 28;
	// vrlimi128 v47,v52,4,3
	simde_mm_store_ps(ctx.v47.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 57), 4));
	// lvlx128 v48,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v50,v56,4,3
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 57), 4));
	// lvlx128 v44,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v45,v46,4,3
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v46.f32), 57), 4));
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// vor128 v54,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// li r10,16
	ctx.r10.s64 = 16;
	// vor128 v62,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// lvlx128 v43,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// addi r8,r11,26432
	ctx.r8.s64 = ctx.r11.s64 + 26432;
	// vor128 v60,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// li r7,64
	ctx.r7.s64 = 64;
	// vor128 v53,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// li r6,112
	ctx.r6.s64 = 112;
	// vrlimi128 v62,v44,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 78), 2));
	// li r5,48
	ctx.r5.s64 = 48;
	// vrlimi128 v63,v48,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 78), 2));
	// li r4,32
	ctx.r4.s64 = 32;
	// vor128 v49,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// li r3,128
	ctx.r3.s64 = 128;
	// vrlimi128 v54,v52,4,3
	simde_mm_store_ps(ctx.v54.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 57), 4));
	// li r11,80
	ctx.r11.s64 = 80;
	// vrlimi128 v62,v43,1,1
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v43.f32), 147), 1));
	// li r9,96
	ctx.r9.s64 = 96;
	// vrlimi128 v63,v46,1,1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v46.f32), 147), 1));
	// vrlimi128 v60,v52,2,2
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 78), 2));
	// vrlimi128 v53,v51,4,3
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 57), 4));
	// vrlimi128 v49,v48,4,3
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 57), 4));
	// stvx128 v62,r8,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v52,v56,4,3
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 57), 4));
	// stvx128 v63,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v58,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vor128 v59,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vor128 v61,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v57,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vor128 v63,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vor128 v62,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vrlimi128 v61,v51,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 78), 2));
	// vrlimi128 v59,v48,2,2
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 78), 2));
	// vrlimi128 v58,v46,2,2
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v46.f32), 78), 2));
	// vrlimi128 v57,v44,2,2
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 78), 2));
	// vrlimi128 v63,v43,2,2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v43.f32), 78), 2));
	// vrlimi128 v62,v51,2,2
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 78), 2));
	// vrlimi128 v61,v44,1,1
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 147), 1));
	// vrlimi128 v60,v43,1,1
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v43.f32), 147), 1));
	// vrlimi128 v59,v44,1,1
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 147), 1));
	// vrlimi128 v58,v43,1,1
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v43.f32), 147), 1));
	// vrlimi128 v57,v48,1,1
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v48.f32), 147), 1));
	// stvx128 v61,r8,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v46,1,1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v46.f32), 147), 1));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v62,v55,1,1
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 147), 1));
	// stvx128 v59,r8,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r8,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r8,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A811C8"))) PPC_WEAK_FUNC(sub_83A811C8);
PPC_FUNC_IMPL(__imp__sub_83A811C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,26576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26576);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,26576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26576, ctx.r9.u32);
	// lwz r8,26576(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A811E0"))) PPC_WEAK_FUNC(sub_83A811E0);
PPC_FUNC_IMPL(__imp__sub_83A811E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A811E8;
	__savegprlr_25(ctx, base);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r25,r10,26432
	ctx.r25.s64 = ctx.r10.s64 + 26432;
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lvx128 v0,r25,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,64
	ctx.r31.s64 = 64;
	// lvx128 v7,r25,r7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,5
	ctx.r26.s64 = 5;
	// li r8,16
	ctx.r8.s64 = 16;
loc_83A81218:
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a81290
	if (!cr6.gt) goto loc_83A81290;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83A81230:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83a81280
	if (!cr6.gt) goto loc_83A81280;
	// addi r7,r31,-1
	ctx.r7.s64 = ctx.r31.s64 + -1;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83A81248:
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vperm128 v61,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddfp128 v59,v61,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vsubfp128 v58,v61,v60
	simde_mm_store_ps(ctx.v58.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v60.f32)));
	// stvlx128 v59,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvlx128 v58,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x83a81248
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A81248;
loc_83A81280:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// bne 0x83a81230
	if (!cr0.eq) goto loc_83A81230;
loc_83A81290:
	// addi r10,r11,-512
	ctx.r10.s64 = ctx.r11.s64 + -512;
	// srawi r31,r31,1
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bne 0x83a81218
	if (!cr0.eq) goto loc_83A81218;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v6,r25,r9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r25,r7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83A812C4:
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// lvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vperm128 v57,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v56,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddfp128 v63,v57,v56
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v62,v57,v56
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vperm128 v55,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v54,v63,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// stvlx128 v55,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvlx128 v54,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// bdnz 0x83a812c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A812C4;
	// li r7,112
	ctx.r7.s64 = 112;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r10,r11,-512
	ctx.r10.s64 = ctx.r11.s64 + -512;
	// lvx128 v5,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// li r8,-16
	ctx.r8.s64 = -16;
	// lvx128 v6,r25,r7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83A81324:
	// lvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v53,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v52,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddfp128 v63,v53,v52
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vsubfp128 v62,v53,v52
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vperm128 v51,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v50,v63,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// stvx128 v51,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvx128 v50,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x83a81324
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A81324;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81364"))) PPC_WEAK_FUNC(sub_83A81364);
PPC_FUNC_IMPL(__imp__sub_83A81364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81368"))) PPC_WEAK_FUNC(sub_83A81368);
PPC_FUNC_IMPL(__imp__sub_83A81368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83A81370;
	__savegprlr_20(ctx, base);
	// li r22,16
	ctx.r22.s64 = 16;
	// li r30,16
	ctx.r30.s64 = 16;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// li r29,64
	ctx.r29.s64 = 64;
	// addi r31,r8,26432
	ctx.r31.s64 = ctx.r8.s64 + 26432;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// li r28,112
	ctx.r28.s64 = 112;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v7,r31,r30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lvx128 v6,r31,r29
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,0
	ctx.r10.s64 = 0;
	// lvx128 v5,r31,r28
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,-16
	ctx.r6.s64 = -16;
	// lvx128 v4,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r8,928
	ctx.r24.s64 = ctx.r8.s64 + 928;
loc_83A813BC:
	// lvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r24,1792
	ctx.r8.s64 = ctx.r24.s64 + 1792;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r24,1536
	ctx.r30.s64 = ctx.r24.s64 + 1536;
	// addi r8,r8,1536
	ctx.r8.s64 = ctx.r8.s64 + 1536;
	// vperm128 v61,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v12,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v11,r10,r30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v13,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// lvx128 v60,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v10,v60,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vmulfp128 v9,v60,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v10,v11,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v11,v12,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vperm128 v59,v10,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v58,v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvx128 v59,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvx128 v58,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x83a813bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A813BC;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r30,32
	ctx.r30.s64 = 32;
	// li r29,128
	ctx.r29.s64 = 128;
	// li r28,80
	ctx.r28.s64 = 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvx128 v7,r31,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lvx128 v6,r31,r30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lvx128 v5,r31,r29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,0
	ctx.r10.s64 = 0;
	// lvx128 v4,r31,r28
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,-16
	ctx.r6.s64 = -16;
loc_83A81450:
	// lvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r24,1792
	ctx.r8.s64 = ctx.r24.s64 + 1792;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r24,1280
	ctx.r30.s64 = ctx.r24.s64 + 1280;
	// addi r8,r8,1280
	ctx.r8.s64 = ctx.r8.s64 + 1280;
	// vperm128 v57,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v12,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v11,r10,r30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v0,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// lvx128 v56,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v10,v56,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vor v13,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vmulfp128 v9,v56,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v11,v12,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vperm128 v55,v10,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v54,v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvx128 v55,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvx128 v54,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x83a81450
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A81450;
	// li r11,96
	ctx.r11.s64 = 96;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r28,32
	ctx.r28.s64 = 32;
	// li r30,4
	ctx.r30.s64 = 4;
	// lvx128 v7,r31,r11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,0
	ctx.r25.s64 = 0;
loc_83A814C8:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi. r28,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r11,r24,1792
	ctx.r11.s64 = ctx.r24.s64 + 1792;
	// srawi r29,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 1;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// addi r9,r24,1024
	ctx.r9.s64 = ctx.r24.s64 + 1024;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r7,r25,r11
	ctx.r7.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r6,r25,r9
	ctx.r6.u64 = ctx.r25.u64 + ctx.r9.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r8,r3,r26
	ctx.r8.u64 = ctx.r3.u64 + ctx.r26.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// ble 0x83a815a8
	if (!cr0.gt) goto loc_83A815A8;
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A81514:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83a81590
	if (!cr6.gt) goto loc_83A81590;
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// rlwinm r31,r31,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r20,r31,4,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r20,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r20.s64;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_83A81538:
	// lvx128 v53,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// vmulfp128 v10,v53,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v9,v53,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v63,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// lvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vor v13,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// vmaddcfp128 v63,v11,v63,v10
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vnmsubfp v9,v13,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vperm128 v52,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvlx v9,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r11,r22
	ea = ctx.r11.u32 + ctx.r22.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v52,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r10,r22
	ea = ctx.r10.u32 + ctx.r22.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// bdnz 0x83a81538
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A81538;
loc_83A81590:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r4,r21,r4
	ctx.r4.u64 = ctx.r21.u64 + ctx.r4.u64;
	// bne 0x83a81514
	if (!cr0.eq) goto loc_83A81514;
loc_83A815A8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r25,r25,-256
	ctx.r25.s64 = ctx.r25.s64 + -256;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmpwi cr6,r25,-1024
	cr6.compare<int32_t>(ctx.r25.s32, -1024, xer);
	// bge cr6,0x83a814c8
	if (!cr6.lt) goto loc_83A814C8;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// subf r8,r5,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r5.s64;
loc_83A815D4:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfsu f0,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x83a815d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A815D4;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81620"))) PPC_WEAK_FUNC(sub_83A81620);
PPC_FUNC_IMPL(__imp__sub_83A81620) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83a811e0
	ctx.lr = 0x83A81640;
	sub_83A811E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83a81368
	ctx.lr = 0x83A81650;
	sub_83A81368(ctx, base);
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

__attribute__((alias("__imp__sub_83A81664"))) PPC_WEAK_FUNC(sub_83A81664);
PPC_FUNC_IMPL(__imp__sub_83A81664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81668"))) PPC_WEAK_FUNC(sub_83A81668);
PPC_FUNC_IMPL(__imp__sub_83A81668) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,16
	ctx.r31.s64 = 16;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a81718
	if (!cr6.eq) goto loc_83A81718;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lis r7,528
	ctx.r7.s64 = 34603008;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lis r6,529
	ctx.r6.s64 = 34668544;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f13,16948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16948);
	ctx.f13.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r7,r7,13312
	ctx.r7.u64 = ctx.r7.u64 | 13312;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r6,r6,768
	ctx.r6.u64 = ctx.r6.u64 | 768;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
loc_83A81718:
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// ble cr6,0x83a81744
	if (!cr6.gt) goto loc_83A81744;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,5200
	ctx.r4.s64 = ctx.r11.s64 + 5200;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x83A81738;
	sub_831EA410(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r31,-14740(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14740, ctx.r31.u32);
	// b 0x83a8174c
	goto loc_83A8174C;
loc_83A81744:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stw r5,-14740(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14740, ctx.r5.u32);
loc_83A8174C:
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a9b168
	ctx.lr = 0x83A81754;
	sub_83A9B168(ctx, base);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x83aa1d78
	ctx.lr = 0x83A8175C;
	sub_83AA1D78(ctx, base);
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

__attribute__((alias("__imp__sub_83A81774"))) PPC_WEAK_FUNC(sub_83A81774);
PPC_FUNC_IMPL(__imp__sub_83A81774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81778"))) PPC_WEAK_FUNC(sub_83A81778);
PPC_FUNC_IMPL(__imp__sub_83A81778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A81780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A8179C;
	sub_831EA7A0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,528
	ctx.r10.s64 = 34603008;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r10,13312
	ctx.r10.u64 = ctx.r10.u64 | 13312;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// bl 0x831ea7a0
	ctx.lr = 0x83A81808;
	sub_831EA7A0(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lfs f0,16948(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16948);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r9.u32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81858"))) PPC_WEAK_FUNC(sub_83A81858);
PPC_FUNC_IMPL(__imp__sub_83A81858) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26744
	ctx.r30.s64 = ctx.r11.s64 + 26744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83a8bae0
	ctx.lr = 0x83A81888;
	sub_83A8BAE0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a81984
	if (cr6.eq) goto loc_83A81984;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a818a8
	if (cr6.gt) goto loc_83A818A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A818A8:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a818c0
	if (cr6.gt) goto loc_83A818C0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A818C0:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a818d8
	if (cr6.gt) goto loc_83A818D8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A818D8:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a818f0
	if (cr6.gt) goto loc_83A818F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A818F0:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a81908
	if (cr6.gt) goto loc_83A81908;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A81908:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a81920
	if (cr6.gt) goto loc_83A81920;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A81920:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a81938
	if (cr6.gt) goto loc_83A81938;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A81938:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a81950
	if (cr6.gt) goto loc_83A81950;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A81950:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83a81968
	if (cr6.gt) goto loc_83A81968;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83A81968:
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a81980
	if (cr6.gt) goto loc_83A81980;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A81980:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_83A81984:
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

__attribute__((alias("__imp__sub_83A8199C"))) PPC_WEAK_FUNC(sub_83A8199C);
PPC_FUNC_IMPL(__imp__sub_83A8199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A819A0"))) PPC_WEAK_FUNC(sub_83A819A0);
PPC_FUNC_IMPL(__imp__sub_83A819A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addi r11,r10,26744
	ctx.r11.s64 = ctx.r10.s64 + 26744;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,26744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26744);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 & ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A819C4"))) PPC_WEAK_FUNC(sub_83A819C4);
PPC_FUNC_IMPL(__imp__sub_83A819C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A819C8"))) PPC_WEAK_FUNC(sub_83A819C8);
PPC_FUNC_IMPL(__imp__sub_83A819C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addi r11,r10,26744
	ctx.r11.s64 = ctx.r10.s64 + 26744;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// lwz r11,26744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26744);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 & ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A819EC"))) PPC_WEAK_FUNC(sub_83A819EC);
PPC_FUNC_IMPL(__imp__sub_83A819EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A819F0"))) PPC_WEAK_FUNC(sub_83A819F0);
PPC_FUNC_IMPL(__imp__sub_83A819F0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,26628
	ctx.r31.s64 = ctx.r11.s64 + 26628;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a81a38
	if (!cr6.eq) goto loc_83A81A38;
	// bl 0x831ef7e0
	ctx.lr = 0x83A81A18;
	sub_831EF7E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// beq cr6,0x83a81a38
	if (cr6.eq) goto loc_83A81A38;
	// bl 0x83a82d38
	ctx.lr = 0x83A81A30;
	sub_83A82D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A81A38:
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

__attribute__((alias("__imp__sub_83A81A4C"))) PPC_WEAK_FUNC(sub_83A81A4C);
PPC_FUNC_IMPL(__imp__sub_83A81A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81A50"))) PPC_WEAK_FUNC(sub_83A81A50);
PPC_FUNC_IMPL(__imp__sub_83A81A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26620);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A81A5C"))) PPC_WEAK_FUNC(sub_83A81A5C);
PPC_FUNC_IMPL(__imp__sub_83A81A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81A60"))) PPC_WEAK_FUNC(sub_83A81A60);
PPC_FUNC_IMPL(__imp__sub_83A81A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lfs f1,-14752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14752);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A81A6C"))) PPC_WEAK_FUNC(sub_83A81A6C);
PPC_FUNC_IMPL(__imp__sub_83A81A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81A70"))) PPC_WEAK_FUNC(sub_83A81A70);
PPC_FUNC_IMPL(__imp__sub_83A81A70) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a765f0
	sub_83A765F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81A74"))) PPC_WEAK_FUNC(sub_83A81A74);
PPC_FUNC_IMPL(__imp__sub_83A81A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81A78"))) PPC_WEAK_FUNC(sub_83A81A78);
PPC_FUNC_IMPL(__imp__sub_83A81A78) {
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
	// bl 0x83a76208
	ctx.lr = 0x83A81A8C;
	sub_83A76208(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a81ab8
	if (cr0.eq) goto loc_83A81AB8;
	// bl 0x82927020
	ctx.lr = 0x83A81A98;
	sub_82927020(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82590fc8
	ctx.lr = 0x83A81AA0;
	sub_82590FC8(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x83a81ab8
	if (!cr6.eq) goto loc_83A81AB8;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,26724
	ctx.r11.s64 = ctx.r11.s64 + 26724;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83a81ac0
	goto loc_83A81AC0;
loc_83A81AB8:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26724);
loc_83A81AC0:
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

__attribute__((alias("__imp__sub_83A81AD4"))) PPC_WEAK_FUNC(sub_83A81AD4);
PPC_FUNC_IMPL(__imp__sub_83A81AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81AD8"))) PPC_WEAK_FUNC(sub_83A81AD8);
PPC_FUNC_IMPL(__imp__sub_83A81AD8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26728
	ctx.r31.s64 = ctx.r11.s64 + 26728;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a81b28
	if (cr6.eq) goto loc_83A81B28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a81b28
	if (cr6.eq) goto loc_83A81B28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa1f40
	ctx.lr = 0x83A81B1C;
	sub_83AA1F40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83aa1f40
	ctx.lr = 0x83A81B28;
	sub_83AA1F40(ctx, base);
loc_83A81B28:
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

__attribute__((alias("__imp__sub_83A81B40"))) PPC_WEAK_FUNC(sub_83A81B40);
PPC_FUNC_IMPL(__imp__sub_83A81B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A81B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26632);
	// bl 0x83a75cd8
	ctx.lr = 0x83A81B60;
	sub_83A75CD8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26632);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r31,26588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26588, ctx.r31.u32);
	// stw r30,26592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26592, ctx.r30.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A81B78;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81B80"))) PPC_WEAK_FUNC(sub_83A81B80);
PPC_FUNC_IMPL(__imp__sub_83A81B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A81B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26632);
	// bl 0x83a75cd8
	ctx.lr = 0x83A81BA0;
	sub_83A75CD8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26632);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r31,26596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26596, ctx.r31.u32);
	// stw r30,26600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26600, ctx.r30.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A81BB8;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81BC0"))) PPC_WEAK_FUNC(sub_83A81BC0);
PPC_FUNC_IMPL(__imp__sub_83A81BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A81BC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26632);
	// bl 0x83a75cd8
	ctx.lr = 0x83A81BE0;
	sub_83A75CD8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26632);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r31,26604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26604, ctx.r31.u32);
	// stw r30,26608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26608, ctx.r30.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A81BF8;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81C00"))) PPC_WEAK_FUNC(sub_83A81C00);
PPC_FUNC_IMPL(__imp__sub_83A81C00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce778
	ctx.lr = 0x83A81C18;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fcmpu cr6,f3,f1
	cr6.compare(ctx.f3.f64, ctx.f1.f64);
	// bge cr6,0x83a81c8c
	if (!cr6.lt) goto loc_83A81C8C;
	// fcmpu cr6,f1,f2
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x83a81c8c
	if (!cr6.lt) goto loc_83A81C8C;
	// fcmpu cr6,f2,f4
	cr6.compare(ctx.f2.f64, ctx.f4.f64);
	// bge cr6,0x83a81c8c
	if (!cr6.lt) goto loc_83A81C8C;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// addi r30,r31,26636
	ctx.r30.s64 = ctx.r31.s64 + 26636;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x83a75cd8
	ctx.lr = 0x83A81C54;
	sub_83A75CD8(ctx, base);
	// lwz r11,26636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26636);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,26636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26636, ctx.r11.u32);
	// bl 0x83aa26e8
	ctx.lr = 0x83A81C74;
	sub_83AA26E8(ctx, base);
	// lwz r11,26636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26636);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,26636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26636, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A81C88;
	sub_83A75D58(ctx, base);
	// b 0x83a81c9c
	goto loc_83A81C9C;
loc_83A81C8C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,5368
	ctx.r4.s64 = ctx.r11.s64 + 5368;
	// bl 0x831ea3f0
	ctx.lr = 0x83A81C9C;
	sub_831EA3F0(ctx, base);
loc_83A81C9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x83A81CA8;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A81CBC"))) PPC_WEAK_FUNC(sub_83A81CBC);
PPC_FUNC_IMPL(__imp__sub_83A81CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81CC0"))) PPC_WEAK_FUNC(sub_83A81CC0);
PPC_FUNC_IMPL(__imp__sub_83A81CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A81CC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x83aa3a38
	ctx.lr = 0x83A81CD8;
	sub_83AA3A38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83aa3a48
	ctx.lr = 0x83A81CE0;
	sub_83AA3A48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83aa3550
	ctx.lr = 0x83A81CE8;
	sub_83AA3550(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83aa3540
	ctx.lr = 0x83A81CF0;
	sub_83AA3540(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a81d10
	if (cr6.eq) goto loc_83A81D10;
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a81d0c
	if (!cr6.gt) goto loc_83A81D0C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A81D0C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83A81D10:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a81d28
	if (cr6.eq) goto loc_83A81D28;
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, xer);
	// ble cr6,0x83a81d24
	if (!cr6.gt) goto loc_83A81D24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83A81D24:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_83A81D28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81D30"))) PPC_WEAK_FUNC(sub_83A81D30);
PPC_FUNC_IMPL(__imp__sub_83A81D30) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// ld r31,26736(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26736);
	// bl 0x83aa4f98
	ctx.lr = 0x83A81D4C;
	sub_83AA4F98(ctx, base);
	// cmpld cr6,r3,r31
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r31.u64, xer);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
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

__attribute__((alias("__imp__sub_83A81D68"))) PPC_WEAK_FUNC(sub_83A81D68);
PPC_FUNC_IMPL(__imp__sub_83A81D68) {
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
	// bl 0x83aa4f98
	ctx.lr = 0x83A81D78;
	sub_83AA4F98(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// std r3,26736(r11)
	PPC_STORE_U64(ctx.r11.u32 + 26736, ctx.r3.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A81D90"))) PPC_WEAK_FUNC(sub_83A81D90);
PPC_FUNC_IMPL(__imp__sub_83A81D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A81D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83aa5418
	ctx.lr = 0x83A81DA8;
	sub_83AA5418(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83aa53f8
	ctx.lr = 0x83A81DB0;
	sub_83AA53F8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a81dc0
	if (cr6.eq) goto loc_83A81DC0;
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A81DC0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a81dcc
	if (cr6.eq) goto loc_83A81DCC;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83A81DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81DD4"))) PPC_WEAK_FUNC(sub_83A81DD4);
PPC_FUNC_IMPL(__imp__sub_83A81DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81DD8"))) PPC_WEAK_FUNC(sub_83A81DD8);
PPC_FUNC_IMPL(__imp__sub_83A81DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A81DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83aa5458
	ctx.lr = 0x83A81DF0;
	sub_83AA5458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83aa5438
	ctx.lr = 0x83A81DF8;
	sub_83AA5438(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a81e08
	if (cr6.eq) goto loc_83A81E08;
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A81E08:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a81e14
	if (cr6.eq) goto loc_83A81E14;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83A81E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81E1C"))) PPC_WEAK_FUNC(sub_83A81E1C);
PPC_FUNC_IMPL(__imp__sub_83A81E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81E20"))) PPC_WEAK_FUNC(sub_83A81E20);
PPC_FUNC_IMPL(__imp__sub_83A81E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A81E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83aa5498
	ctx.lr = 0x83A81E38;
	sub_83AA5498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83aa5478
	ctx.lr = 0x83A81E40;
	sub_83AA5478(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a81e50
	if (cr6.eq) goto loc_83A81E50;
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A81E50:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a81e5c
	if (cr6.eq) goto loc_83A81E5C;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83A81E5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81E64"))) PPC_WEAK_FUNC(sub_83A81E64);
PPC_FUNC_IMPL(__imp__sub_83A81E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81E68"))) PPC_WEAK_FUNC(sub_83A81E68);
PPC_FUNC_IMPL(__imp__sub_83A81E68) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a8fae0
	sub_83A8FAE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81E6C"))) PPC_WEAK_FUNC(sub_83A81E6C);
PPC_FUNC_IMPL(__imp__sub_83A81E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81E70"))) PPC_WEAK_FUNC(sub_83A81E70);
PPC_FUNC_IMPL(__imp__sub_83A81E70) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a8fb40
	sub_83A8FB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81E74"))) PPC_WEAK_FUNC(sub_83A81E74);
PPC_FUNC_IMPL(__imp__sub_83A81E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81E78"))) PPC_WEAK_FUNC(sub_83A81E78);
PPC_FUNC_IMPL(__imp__sub_83A81E78) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x83a8ff98
	ctx.lr = 0x83A81E98;
	sub_83A8FF98(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A81EAC"))) PPC_WEAK_FUNC(sub_83A81EAC);
PPC_FUNC_IMPL(__imp__sub_83A81EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81EB0"))) PPC_WEAK_FUNC(sub_83A81EB0);
PPC_FUNC_IMPL(__imp__sub_83A81EB0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83a81ed4
	if (cr6.lt) goto loc_83A81ED4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83a81ed4
	if (cr6.gt) goto loc_83A81ED4;
	// b 0x83a90040
	sub_83A90040(ctx, base);
	return;
loc_83A81ED4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,5452
	ctx.r4.s64 = ctx.r11.s64 + 5452;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A81EE4"))) PPC_WEAK_FUNC(sub_83A81EE4);
PPC_FUNC_IMPL(__imp__sub_83A81EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81EE8"))) PPC_WEAK_FUNC(sub_83A81EE8);
PPC_FUNC_IMPL(__imp__sub_83A81EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r3,-14740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14740);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A81EF4"))) PPC_WEAK_FUNC(sub_83A81EF4);
PPC_FUNC_IMPL(__imp__sub_83A81EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A81EF8"))) PPC_WEAK_FUNC(sub_83A81EF8);
PPC_FUNC_IMPL(__imp__sub_83A81EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A81F00;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,16
	ctx.r29.s64 = 16;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a81fa0
	if (!cr6.eq) goto loc_83A81FA0;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// stw r29,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r29.u32);
	// lis r7,528
	ctx.r7.s64 = 34603008;
	// stw r29,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r29.u32);
	// lis r6,529
	ctx.r6.s64 = 34668544;
	// stw r29,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r29.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r29,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r29.u32);
	// lfs f0,24504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r11,32
	ctx.r11.s64 = 32;
	// lfs f13,16948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16948);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// ori r7,r7,13312
	ctx.r7.u64 = ctx.r7.u64 | 13312;
	// stfs f13,48(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// ori r6,r6,768
	ctx.r6.u64 = ctx.r6.u64 | 768;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// stw r30,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r30.u32);
	// stw r10,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
	// stw r30,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r30.u32);
	// stw r30,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r30.u32);
	// stw r30,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r30.u32);
	// stw r30,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r30.u32);
	// stw r30,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r30.u32);
	// stw r7,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r7.u32);
	// stw r6,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r6.u32);
	// b 0x83a81fb0
	goto loc_83A81FB0;
loc_83A81FA0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A81FB0;
	sub_831CE980(ctx, base);
loc_83A81FB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x83a82278
	if (cr6.lt) goto loc_83A82278;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a82278
	if (cr6.lt) goto loc_83A82278;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(ctx.r11.s32, 32767, xer);
	// bgt cr6,0x83a82278
	if (cr6.gt) goto loc_83A82278;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a82164
	if (cr6.eq) goto loc_83A82164;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x831ea3d8
	ctx.lr = 0x83A81FF0;
	sub_831EA3D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8200c
	if (!cr0.eq) goto loc_83A8200C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,5632
	ctx.r4.s64 = ctx.r11.s64 + 5632;
loc_83A82000:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A82008;
	sub_831EA3F0(ctx, base);
	// b 0x83a8228c
	goto loc_83A8228C;
loc_83A8200C:
	// bl 0x83a82d00
	ctx.lr = 0x83A82010;
	sub_83A82D00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a82024
	if (!cr0.eq) goto loc_83A82024;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,5576
	ctx.r4.s64 = ctx.r11.s64 + 5576;
	// b 0x83a82000
	goto loc_83A82000;
loc_83A82024:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a82134
	if (cr6.eq) goto loc_83A82134;
	// bl 0x831eef18
	ctx.lr = 0x83A82038;
	sub_831EEF18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a82114
	if (!cr0.eq) goto loc_83A82114;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a82090
	if (!cr6.eq) goto loc_83A82090;
	// lis r11,626
	ctx.r11.s64 = 41025536;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// ori r11,r11,1792
	ctx.r11.u64 = ctx.r11.u64 | 1792;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x831eeb80
	ctx.lr = 0x83A82088;
	sub_831EEB80(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// b 0x83a8209c
	goto loc_83A8209C;
loc_83A82090:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x831ce980
	ctx.lr = 0x83A8209C;
	sub_831CE980(ctx, base);
loc_83A8209C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x831ef048
	ctx.lr = 0x83A820B0;
	sub_831EF048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8228c
	if (!cr0.eq) goto loc_83A8228C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a82d10
	ctx.lr = 0x83A820C0;
	sub_83A82D10(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83a820e8
	if (!cr0.eq) goto loc_83A820E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,5564
	ctx.r4.s64 = ctx.r11.s64 + 5564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A820DC;
	sub_831EA418(ctx, base);
	// bl 0x83a83088
	ctx.lr = 0x83A820E0;
	sub_83A83088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a82290
	goto loc_83A82290;
loc_83A820E8:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r29,r11,26624
	ctx.r29.s64 = ctx.r11.s64 + 26624;
	// stw r4,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// bl 0x831ef8f0
	ctx.lr = 0x83A82100;
	sub_831EF8F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8228c
	if (!cr0.eq) goto loc_83A8228C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83a82130
	goto loc_83A82130;
loc_83A82114:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a82130
	if (cr6.eq) goto loc_83A82130;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,5508
	ctx.r4.s64 = ctx.r11.s64 + 5508;
	// bl 0x831ea3f0
	ctx.lr = 0x83A82130;
	sub_831EA3F0(ctx, base);
loc_83A82130:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_83A82134:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83a8c748
	ctx.lr = 0x83A82144;
	sub_83A8C748(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a82154
	if (!cr0.eq) goto loc_83A82154;
	// bl 0x83a819f0
	ctx.lr = 0x83A82150;
	sub_83A819F0(ctx, base);
	// b 0x83a8228c
	goto loc_83A8228C;
loc_83A82154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83a81858
	ctx.lr = 0x83A82164;
	sub_83A81858(ctx, base);
loc_83A82164:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a81778
	ctx.lr = 0x83A82174;
	sub_83A81778(ctx, base);
	// bl 0x83a8c990
	ctx.lr = 0x83A82178;
	sub_83A8C990(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83ab5ad8
	ctx.lr = 0x83A82184;
	sub_83AB5AD8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r30,r11,72
	ctx.r30.s64 = ctx.r11.s64 + 72;
	// bl 0x831ea7a0
	ctx.lr = 0x83A821AC;
	sub_831EA7A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83aa4fb8
	ctx.lr = 0x83A821E4;
	sub_83AA4FB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x83ab5720
	ctx.lr = 0x83A82208;
	sub_83AB5720(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 * 6;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,596
	ctx.r11.s64 = ctx.r11.s64 + 596;
	// mulli r10,r9,160
	ctx.r10.s64 = ctx.r9.s64 * 160;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mulli r9,r8,180
	ctx.r9.s64 = ctx.r8.s64 * 180;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,24
	ctx.r28.s64 = ctx.r10.s64 + 24;
	// addi r27,r9,8
	ctx.r27.s64 = ctx.r9.s64 + 8;
	// bl 0x83aa1d78
	ctx.lr = 0x83A82240;
	sub_83AA1D78(ctx, base);
	// bl 0x83aa1dc8
	ctx.lr = 0x83A82244;
	sub_83AA1DC8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x83aabbb8
	ctx.lr = 0x83A82270;
	sub_83AABBB8(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// b 0x83a82290
	goto loc_83A82290;
loc_83A82278:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,5496
	ctx.r4.s64 = ctx.r11.s64 + 5496;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A8228C;
	sub_831EA418(ctx, base);
loc_83A8228C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A82290:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82298"))) PPC_WEAK_FUNC(sub_83A82298);
PPC_FUNC_IMPL(__imp__sub_83A82298) {
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
	// bl 0x83a9b230
	ctx.lr = 0x83A822AC;
	sub_83A9B230(ctx, base);
	// bl 0x83a96708
	ctx.lr = 0x83A822B0;
	sub_83A96708(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8bf00
	ctx.lr = 0x83A822B8;
	sub_83A8BF00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a822c4
	if (cr0.eq) goto loc_83A822C4;
	// bl 0x83a8be20
	ctx.lr = 0x83A822C4;
	sub_83A8BE20(ctx, base);
loc_83A822C4:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,26632
	ctx.r31.s64 = ctx.r11.s64 + 26632;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a822e4
	if (cr6.eq) goto loc_83A822E4;
	// bl 0x83aa1e78
	ctx.lr = 0x83A822DC;
	sub_83AA1E78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83A822E4:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a822fc
	if (cr6.eq) goto loc_83A822FC;
	// bl 0x83aa1e78
	ctx.lr = 0x83A822F4;
	sub_83AA1E78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_83A822FC:
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a76620
	ctx.lr = 0x83A82308;
	sub_83A76620(ctx, base);
	// bl 0x83a76550
	ctx.lr = 0x83A8230C;
	sub_83A76550(ctx, base);
	// bl 0x83ab7d30
	ctx.lr = 0x83A82310;
	sub_83AB7D30(ctx, base);
	// bl 0x83a97620
	ctx.lr = 0x83A82314;
	sub_83A97620(ctx, base);
	// bl 0x83a95b10
	ctx.lr = 0x83A82318;
	sub_83A95B10(ctx, base);
	// bl 0x83a9f0d0
	ctx.lr = 0x83A8231C;
	sub_83A9F0D0(ctx, base);
	// bl 0x83ab7120
	ctx.lr = 0x83A82320;
	sub_83AB7120(ctx, base);
	// bl 0x83aa45c8
	ctx.lr = 0x83A82324;
	sub_83AA45C8(ctx, base);
	// bl 0x83ab5918
	ctx.lr = 0x83A82328;
	sub_83AB5918(ctx, base);
	// bl 0x83aaba40
	ctx.lr = 0x83A8232C;
	sub_83AABA40(ctx, base);
	// bl 0x83a893b8
	ctx.lr = 0x83A82330;
	sub_83A893B8(ctx, base);
	// bl 0x83ab64f0
	ctx.lr = 0x83A82334;
	sub_83AB64F0(ctx, base);
	// bl 0x83ab5c88
	ctx.lr = 0x83A82338;
	sub_83AB5C88(ctx, base);
	// bl 0x83a91c80
	ctx.lr = 0x83A8233C;
	sub_83A91C80(ctx, base);
	// bl 0x83aabc30
	ctx.lr = 0x83A82340;
	sub_83AABC30(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a82358
	if (cr6.eq) goto loc_83A82358;
	// bl 0x83a82d38
	ctx.lr = 0x83A82350;
	sub_83A82D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_83A82358:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a82378
	if (cr6.eq) goto loc_83A82378;
	// bl 0x83a75c60
	ctx.lr = 0x83A82370;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A82378:
	// bl 0x83a819f0
	ctx.lr = 0x83A8237C;
	sub_83A819F0(ctx, base);
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

__attribute__((alias("__imp__sub_83A82390"))) PPC_WEAK_FUNC(sub_83A82390);
PPC_FUNC_IMPL(__imp__sub_83A82390) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,26636
	ctx.r31.s64 = ctx.r11.s64 + 26636;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x83a75cd8
	ctx.lr = 0x83A823B0;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83aa4eb0
	ctx.lr = 0x83A823C0;
	sub_83AA4EB0(ctx, base);
	// bl 0x83aa4f98
	ctx.lr = 0x83A823C4;
	sub_83AA4F98(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divdu r10,r3,r10
	ctx.r10.u64 = PPCDivide(ctx.r3.u64, ctx.r10.u64);
	// lwz r11,-14748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14748);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a823e8
	if (!cr6.eq) goto loc_83A823E8;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x83a823f4
	goto loc_83A823F4;
loc_83A823E8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r4,r11,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83aabc58
	ctx.lr = 0x83A823F4;
	sub_83AABC58(ctx, base);
loc_83A823F4:
	// bl 0x83aa1c38
	ctx.lr = 0x83A823F8;
	sub_83AA1C38(ctx, base);
	// bl 0x83a87bd0
	ctx.lr = 0x83A823FC;
	sub_83A87BD0(ctx, base);
	// bl 0x83aab918
	ctx.lr = 0x83A82400;
	sub_83AAB918(ctx, base);
	// bl 0x83a9f390
	ctx.lr = 0x83A82404;
	sub_83A9F390(ctx, base);
	// bl 0x83ab85c0
	ctx.lr = 0x83A82408;
	sub_83AB85C0(ctx, base);
	// bl 0x83ab5d38
	ctx.lr = 0x83A8240C;
	sub_83AB5D38(ctx, base);
	// bl 0x83a970d0
	ctx.lr = 0x83A82410;
	sub_83A970D0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83A82414;
	sub_83102DB0(ctx, base);
	// bl 0x83aabea8
	ctx.lr = 0x83A82418;
	sub_83AABEA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A8242C;
	sub_83A75D58(ctx, base);
	// bl 0x83a83190
	ctx.lr = 0x83A82430;
	sub_83A83190(ctx, base);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x83a75cd8
	ctx.lr = 0x83A82438;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83aa4f78
	ctx.lr = 0x83A82448;
	sub_83AA4F78(ctx, base);
	// bl 0x83ab5d38
	ctx.lr = 0x83A8244C;
	sub_83AB5D38(ctx, base);
	// bl 0x83a9f340
	ctx.lr = 0x83A82450;
	sub_83A9F340(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A82464;
	sub_83A75D58(ctx, base);
	// bl 0x83a83350
	ctx.lr = 0x83A82468;
	sub_83A83350(ctx, base);
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

__attribute__((alias("__imp__sub_83A8247C"))) PPC_WEAK_FUNC(sub_83A8247C);
PPC_FUNC_IMPL(__imp__sub_83A8247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82480"))) PPC_WEAK_FUNC(sub_83A82480);
PPC_FUNC_IMPL(__imp__sub_83A82480) {
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
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// addi r11,r31,26636
	ctx.r11.s64 = ctx.r31.s64 + 26636;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x83a75cd8
	ctx.lr = 0x83A824A0;
	sub_83A75CD8(ctx, base);
	// lwz r11,26636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26636, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A824C0"))) PPC_WEAK_FUNC(sub_83A824C0);
PPC_FUNC_IMPL(__imp__sub_83A824C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r11,26632
	ctx.r10.s64 = ctx.r11.s64 + 26632;
	// lwz r3,26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26632);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x83a75d58
	sub_83A75D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A824DC"))) PPC_WEAK_FUNC(sub_83A824DC);
PPC_FUNC_IMPL(__imp__sub_83A824DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A824E0"))) PPC_WEAK_FUNC(sub_83A824E0);
PPC_FUNC_IMPL(__imp__sub_83A824E0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r11,26712
	ctx.r10.s64 = ctx.r11.s64 + 26712;
	// lwz r11,-92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a82544
	if (cr6.eq) goto loc_83A82544;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r9,-14748
	ctx.r31.s64 = ctx.r9.s64 + -14748;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// divwu r9,r11,r10
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// twllei r10,0
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83a82540
	if (!cr0.eq) goto loc_83A82540;
	// bl 0x83a82390
	ctx.lr = 0x83A82534;
	sub_83A82390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83a82544
	goto loc_83A82544;
loc_83A82540:
	// bl 0x83a83250
	ctx.lr = 0x83A82544;
	sub_83A83250(ctx, base);
loc_83A82544:
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

__attribute__((alias("__imp__sub_83A82558"))) PPC_WEAK_FUNC(sub_83A82558);
PPC_FUNC_IMPL(__imp__sub_83A82558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A82560;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,5096
	ctx.r10.s64 = ctx.r10.s64 + 5096;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,26584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26584, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r27,r11,26584
	ctx.r27.s64 = ctx.r11.s64 + 26584;
	// bl 0x83a81ef8
	ctx.lr = 0x83A8258C;
	sub_83A81EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a829dc
	if (cr0.lt) goto loc_83A829DC;
	// lis r11,529
	ctx.r11.s64 = 34668544;
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// ori r5,r11,768
	ctx.r5.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x83a825bc
	if (cr6.eq) goto loc_83A825BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,5968
	ctx.r4.s64 = ctx.r11.s64 + 5968;
	// bl 0x831ea410
	ctx.lr = 0x83A825B8;
	sub_831EA410(ctx, base);
	// b 0x83a829dc
	goto loc_83A829DC;
loc_83A825BC:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a825e8
	if (!cr6.eq) goto loc_83A825E8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a825e8
	if (!cr6.eq) goto loc_83A825E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83A825D8;
	sub_83A82D10(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r3,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83a825f0
	goto loc_83A825F0;
loc_83A825E8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r25.u32);
loc_83A825F0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a829b0
	if (cr6.eq) goto loc_83A829B0;
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a829b0
	if (cr6.lt) goto loc_83A829B0;
	// addi r3,r27,56
	ctx.r3.s64 = ctx.r27.s64 + 56;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A8260C;
	sub_83A75BE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// bl 0x83aa1d78
	ctx.lr = 0x83A8261C;
	sub_83AA1D78(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x83aabbb8
	ctx.lr = 0x83A82624;
	sub_83AABBB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83aabbc8
	ctx.lr = 0x83A82634;
	sub_83AABBC8(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x83a81778
	ctx.lr = 0x83A82648;
	sub_83A81778(ctx, base);
	// bl 0x83a8c990
	ctx.lr = 0x83A8264C;
	sub_83A8C990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a8c998
	ctx.lr = 0x83A82660;
	sub_83A8C998(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x83ab5ad8
	ctx.lr = 0x83A8266C;
	sub_83AB5AD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83ab5b60
	ctx.lr = 0x83A82680;
	sub_83AB5B60(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mulli r11,r3,180
	ctx.r11.s64 = ctx.r3.s64 * 180;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83ab6730
	ctx.lr = 0x83A8269C;
	sub_83AB6730(ctx, base);
	// lwz r30,156(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// ble cr6,0x83a826d8
	if (!cr6.gt) goto loc_83A826D8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r11,5800
	ctx.r4.s64 = ctx.r11.s64 + 5800;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x83A826C4;
	sub_831EA410(ctx, base);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r26,r10,-14752
	ctx.r26.s64 = ctx.r10.s64 + -14752;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// b 0x83a826e4
	goto loc_83A826E4;
loc_83A826D8:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r26,r11,-14752
	ctx.r26.s64 = ctx.r11.s64 + -14752;
	// stw r30,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r30.u32);
loc_83A826E4:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,1170
	ctx.r11.s64 = ctx.r11.s64 + 1170;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r31,r11,72
	ctx.r31.s64 = ctx.r11.s64 + 72;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x83a892c8
	ctx.lr = 0x83A8270C;
	sub_83A892C8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A8271C;
	sub_831EA7A0(ctx, base);
	// lwz r31,140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x83aa4fb8
	ctx.lr = 0x83A82750;
	sub_83AA4FB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83aa6500
	ctx.lr = 0x83A82764;
	sub_83AA6500(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x83ab5720
	ctx.lr = 0x83A82780;
	sub_83AB5720(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83ab5748
	ctx.lr = 0x83A82794;
	sub_83AB5748(ctx, base);
	// mulli r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 * 6;
	// addi r11,r11,596
	ctx.r11.s64 = ctx.r11.s64 + 596;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3820
	ctx.lr = 0x83A827BC;
	sub_83AA3820(ctx, base);
	// mulli r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 * 160;
	// add r30,r28,r29
	ctx.r30.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab6828
	ctx.lr = 0x83A827D8;
	sub_83AB6828(ctx, base);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x83a9b260
	ctx.lr = 0x83A827E0;
	sub_83A9B260(ctx, base);
	// bl 0x83a95ab0
	ctx.lr = 0x83A827E4;
	sub_83A95AB0(ctx, base);
	// bl 0x83a96ac8
	ctx.lr = 0x83A827E8;
	sub_83A96AC8(ctx, base);
	// bl 0x83ab7900
	ctx.lr = 0x83A827EC;
	sub_83AB7900(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x83a82808
	if (!cr6.gt) goto loc_83A82808;
	// stfs f31,0(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x83a8280c
	goto loc_83A8280C;
loc_83A82808:
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_83A8280C:
	// lwz r31,136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// ble cr6,0x83a8282c
	if (!cr6.gt) goto loc_83A8282C;
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// b 0x83a82834
	goto loc_83A82834;
loc_83A8282C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r29.u32);
loc_83A82834:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a82860
	if (cr6.eq) goto loc_83A82860;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a82854
	if (cr6.eq) goto loc_83A82854;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83a82864
	goto loc_83A82864;
loc_83A82854:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// b 0x83a82868
	goto loc_83A82868;
loc_83A82860:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
loc_83A82864:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_83A82868:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a76928
	ctx.lr = 0x83A82870;
	sub_83A76928(ctx, base);
	// bl 0x83a76350
	ctx.lr = 0x83A82874;
	sub_83A76350(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a82884
	if (!cr0.eq) goto loc_83A82884;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a76370
	ctx.lr = 0x83A82884;
	sub_83A76370(ctx, base);
loc_83A82884:
	// lis r11,-31832
	ctx.r11.s64 = -2086141952;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,9440
	ctx.r3.s64 = ctx.r11.s64 + 9440;
	// bl 0x83a76620
	ctx.lr = 0x83A82894;
	sub_83A76620(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-11296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11296);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83aa4f88
	ctx.lr = 0x83A828C8;
	sub_83AA4F88(ctx, base);
	// bl 0x83aa4f98
	ctx.lr = 0x83A828CC;
	sub_83AA4F98(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r3,152(r27)
	PPC_STORE_U64(ctx.r27.u32 + 152, ctx.r3.u64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a828f4
	if (cr6.lt) goto loc_83A828F4;
	// beq cr6,0x83a82918
	if (cr6.eq) goto loc_83A82918;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,5788
	ctx.r4.s64 = ctx.r11.s64 + 5788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A828F4;
	sub_831EA418(ctx, base);
loc_83A828F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A828F8:
	// bl 0x83ab8700
	ctx.lr = 0x83A828FC;
	sub_83AB8700(ctx, base);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a82920
	if (!cr6.eq) goto loc_83A82920;
loc_83A82910:
	// bl 0x83a82298
	ctx.lr = 0x83A82914;
	sub_83A82298(ctx, base);
	// b 0x83a829dc
	goto loc_83A829DC;
loc_83A82918:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a828f8
	goto loc_83A828F8;
loc_83A82920:
	// bl 0x83aa1dc8
	ctx.lr = 0x83A82924;
	sub_83AA1DC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83aa1e20
	ctx.lr = 0x83A82934;
	sub_83AA1E20(ctx, base);
	// stw r3,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a82954
	if (!cr0.eq) goto loc_83A82954;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,5744
	ctx.r4.s64 = ctx.r11.s64 + 5744;
loc_83A82948:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A82950;
	sub_831EA3F0(ctx, base);
	// b 0x83a82910
	goto loc_83A82910;
loc_83A82954:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x83aa1e20
	ctx.lr = 0x83A82960;
	sub_83AA1E20(ctx, base);
	// stw r3,144(r27)
	PPC_STORE_U32(ctx.r27.u32 + 144, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a82978
	if (!cr0.eq) goto loc_83A82978;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,5700
	ctx.r4.s64 = ctx.r11.s64 + 5700;
	// b 0x83a82948
	goto loc_83A82948;
loc_83A82978:
	// lwz r4,148(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// lwz r3,140(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x83aa1f40
	ctx.lr = 0x83A82984;
	sub_83AA1F40(ctx, base);
	// lwz r4,148(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// lwz r3,144(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// bl 0x83aa1f40
	ctx.lr = 0x83A82990;
	sub_83AA1F40(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a829a8
	if (cr6.eq) goto loc_83A829A8;
	// bl 0x83a8c848
	ctx.lr = 0x83A829A0;
	sub_83A8C848(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a82910
	if (cr0.eq) goto loc_83A82910;
loc_83A829A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83a829e0
	goto loc_83A829E0;
loc_83A829B0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,5688
	ctx.r4.s64 = ctx.r11.s64 + 5688;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A829C4;
	sub_831EA418(ctx, base);
	// lwz r3,136(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a829dc
	if (cr6.eq) goto loc_83A829DC;
	// bl 0x83a82d38
	ctx.lr = 0x83A829D4;
	sub_83A82D38(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r25.u32);
loc_83A829DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A829E0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A829EC"))) PPC_WEAK_FUNC(sub_83A829EC);
PPC_FUNC_IMPL(__imp__sub_83A829EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A829F0"))) PPC_WEAK_FUNC(sub_83A829F0);
PPC_FUNC_IMPL(__imp__sub_83A829F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A829F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a82ae8
	if (!cr6.eq) goto loc_83A82AE8;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// lis r30,529
	ctx.r30.s64 = 34668544;
	// lis r3,528
	ctx.r3.s64 = 34603008;
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r7,48000
	ctx.r10.u64 = ctx.r7.u64 | 48000;
	// lfs f13,16948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16948);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ori r28,r30,768
	ctx.r28.u64 = ctx.r30.u64 | 768;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r29,1024
	ctx.r29.s64 = 1024;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// ori r3,r3,13312
	ctx.r3.u64 = ctx.r3.u64 | 13312;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
loc_83A82AE8:
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831ea798
	ctx.lr = 0x83A82AF8;
	sub_831EA798(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A82B08;
	sub_831CE980(ctx, base);
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x831ce980
	ctx.lr = 0x83A82B1C;
	sub_831CE980(ctx, base);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831ce980
	ctx.lr = 0x83A82B30;
	sub_831CE980(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83ab8c60
	ctx.lr = 0x83A82B38;
	sub_83AB8C60(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82B40"))) PPC_WEAK_FUNC(sub_83A82B40);
PPC_FUNC_IMPL(__imp__sub_83A82B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A82B48;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a82c40
	if (!cr6.eq) goto loc_83A82C40;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// lis r30,529
	ctx.r30.s64 = 34668544;
	// lis r3,528
	ctx.r3.s64 = 34603008;
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r7,48000
	ctx.r10.u64 = ctx.r7.u64 | 48000;
	// lfs f13,16948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16948);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ori r26,r30,768
	ctx.r26.u64 = ctx.r30.u64 | 768;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r27,1024
	ctx.r27.s64 = 1024;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// ori r3,r3,13312
	ctx.r3.u64 = ctx.r3.u64 | 13312;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
loc_83A82C40:
	// li r5,152
	ctx.r5.s64 = 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831ea798
	ctx.lr = 0x83A82C50;
	sub_831EA798(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A82C60;
	sub_831CE980(ctx, base);
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x831ce980
	ctx.lr = 0x83A82C74;
	sub_831CE980(ctx, base);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831ce980
	ctx.lr = 0x83A82C88;
	sub_831CE980(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83ab8e70
	ctx.lr = 0x83A82C98;
	sub_83AB8E70(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82CA0"))) PPC_WEAK_FUNC(sub_83A82CA0);
PPC_FUNC_IMPL(__imp__sub_83A82CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab8f50
	sub_83AB8F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82CA4"))) PPC_WEAK_FUNC(sub_83A82CA4);
PPC_FUNC_IMPL(__imp__sub_83A82CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82CA8"))) PPC_WEAK_FUNC(sub_83A82CA8);
PPC_FUNC_IMPL(__imp__sub_83A82CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,528
	ctx.r3.s64 = 34603008;
	// ori r3,r3,13312
	ctx.r3.u64 = ctx.r3.u64 | 13312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A82CB4"))) PPC_WEAK_FUNC(sub_83A82CB4);
PPC_FUNC_IMPL(__imp__sub_83A82CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82CB8"))) PPC_WEAK_FUNC(sub_83A82CB8);
PPC_FUNC_IMPL(__imp__sub_83A82CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r3,26880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26880, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A82CC4"))) PPC_WEAK_FUNC(sub_83A82CC4);
PPC_FUNC_IMPL(__imp__sub_83A82CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82CC8"))) PPC_WEAK_FUNC(sub_83A82CC8);
PPC_FUNC_IMPL(__imp__sub_83A82CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26880(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A82CD4"))) PPC_WEAK_FUNC(sub_83A82CD4);
PPC_FUNC_IMPL(__imp__sub_83A82CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82CD8"))) PPC_WEAK_FUNC(sub_83A82CD8);
PPC_FUNC_IMPL(__imp__sub_83A82CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,26884(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26884);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A82CE4"))) PPC_WEAK_FUNC(sub_83A82CE4);
PPC_FUNC_IMPL(__imp__sub_83A82CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82CE8"))) PPC_WEAK_FUNC(sub_83A82CE8);
PPC_FUNC_IMPL(__imp__sub_83A82CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-14736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14736);
	// b 0x83a76068
	sub_83A76068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82CFC"))) PPC_WEAK_FUNC(sub_83A82CFC);
PPC_FUNC_IMPL(__imp__sub_83A82CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82D00"))) PPC_WEAK_FUNC(sub_83A82D00);
PPC_FUNC_IMPL(__imp__sub_83A82D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r3,-14736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14736);
	// b 0x83a76190
	sub_83A76190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82D0C"))) PPC_WEAK_FUNC(sub_83A82D0C);
PPC_FUNC_IMPL(__imp__sub_83A82D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82D10"))) PPC_WEAK_FUNC(sub_83A82D10);
PPC_FUNC_IMPL(__imp__sub_83A82D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-14736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14736);
	// b 0x83a760b8
	sub_83A760B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82D20"))) PPC_WEAK_FUNC(sub_83A82D20);
PPC_FUNC_IMPL(__imp__sub_83A82D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-14736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14736);
	// b 0x83a76090
	sub_83A76090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82D34"))) PPC_WEAK_FUNC(sub_83A82D34);
PPC_FUNC_IMPL(__imp__sub_83A82D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82D38"))) PPC_WEAK_FUNC(sub_83A82D38);
PPC_FUNC_IMPL(__imp__sub_83A82D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-14736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14736);
	// b 0x83a76130
	sub_83A76130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82D48"))) PPC_WEAK_FUNC(sub_83A82D48);
PPC_FUNC_IMPL(__imp__sub_83A82D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A82D50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a82da8
	if (!cr6.eq) goto loc_83A82DA8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a82da8
	if (!cr6.eq) goto loc_83A82DA8;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,-14736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14736);
	// bl 0x83a760b8
	ctx.lr = 0x83A82D88;
	sub_83A760B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A82D90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a82dcc
	if (!cr6.eq) goto loc_83A82DCC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,6372
	ctx.r4.s64 = ctx.r11.s64 + 6372;
	// b 0x83a82dbc
	goto loc_83A82DBC;
loc_83A82DA8:
	// cmpw cr6,r4,r29
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, xer);
	// bge cr6,0x83a82d90
	if (!cr6.lt) goto loc_83A82D90;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,6360
	ctx.r4.s64 = ctx.r11.s64 + 6360;
loc_83A82DBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A82DC4;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a82de0
	goto loc_83A82DE0;
loc_83A82DCC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A82DD8;
	sub_831EA7A0(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A82DE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82DE8"))) PPC_WEAK_FUNC(sub_83A82DE8);
PPC_FUNC_IMPL(__imp__sub_83A82DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r3,-14736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14736);
	// b 0x83a76130
	sub_83A76130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82E00"))) PPC_WEAK_FUNC(sub_83A82E00);
PPC_FUNC_IMPL(__imp__sub_83A82E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A82E04"))) PPC_WEAK_FUNC(sub_83A82E04);
PPC_FUNC_IMPL(__imp__sub_83A82E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82E08"))) PPC_WEAK_FUNC(sub_83A82E08);
PPC_FUNC_IMPL(__imp__sub_83A82E08) {
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
	// bl 0x83ab9f48
	ctx.lr = 0x83A82E28;
	sub_83AB9F48(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r11,26952
	ctx.r10.s64 = ctx.r11.s64 + 26952;
	// stw r30,26952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26952, ctx.r30.u32);
	// stw r31,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r31.u32);
	// bl 0x83ab9f88
	ctx.lr = 0x83A82E3C;
	sub_83AB9F88(ctx, base);
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

__attribute__((alias("__imp__sub_83A82E54"))) PPC_WEAK_FUNC(sub_83A82E54);
PPC_FUNC_IMPL(__imp__sub_83A82E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82E58"))) PPC_WEAK_FUNC(sub_83A82E58);
PPC_FUNC_IMPL(__imp__sub_83A82E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lfs f1,-14732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14732);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A82E64"))) PPC_WEAK_FUNC(sub_83A82E64);
PPC_FUNC_IMPL(__imp__sub_83A82E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82E68"))) PPC_WEAK_FUNC(sub_83A82E68);
PPC_FUNC_IMPL(__imp__sub_83A82E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// blt cr6,0x83a82e78
	if (cr6.lt) goto loc_83A82E78;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A82E78:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,26972
	ctx.r11.s64 = ctx.r11.s64 + 26972;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A82E8C"))) PPC_WEAK_FUNC(sub_83A82E8C);
PPC_FUNC_IMPL(__imp__sub_83A82E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82E90"))) PPC_WEAK_FUNC(sub_83A82E90);
PPC_FUNC_IMPL(__imp__sub_83A82E90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83a82ec8
	if (!cr6.eq) goto loc_83A82EC8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,6408
	ctx.r4.s64 = ctx.r11.s64 + 6408;
	// bl 0x831ea418
	ctx.lr = 0x83A82EC0;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a82f40
	goto loc_83A82F40;
loc_83A82EC8:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,26884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26884);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a82f04
	if (!cr6.eq) goto loc_83A82F04;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,6396
	ctx.r4.s64 = ctx.r11.s64 + 6396;
loc_83A82EE4:
	// bl 0x831ea418
	ctx.lr = 0x83A82EE8;
	sub_831EA418(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x83a82f3c
	goto loc_83A82F3C;
loc_83A82F04:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a796d8
	ctx.lr = 0x83A82F0C;
	sub_83A796D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a82f24
	if (!cr0.eq) goto loc_83A82F24;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,6384
	ctx.r4.s64 = ctx.r11.s64 + 6384;
	// b 0x83a82ee4
	goto loc_83A82EE4;
loc_83A82F24:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A82F3C:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_83A82F40:
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

__attribute__((alias("__imp__sub_83A82F54"))) PPC_WEAK_FUNC(sub_83A82F54);
PPC_FUNC_IMPL(__imp__sub_83A82F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82F58"))) PPC_WEAK_FUNC(sub_83A82F58);
PPC_FUNC_IMPL(__imp__sub_83A82F58) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a79680
	sub_83A79680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A82F64"))) PPC_WEAK_FUNC(sub_83A82F64);
PPC_FUNC_IMPL(__imp__sub_83A82F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A82F68"))) PPC_WEAK_FUNC(sub_83A82F68);
PPC_FUNC_IMPL(__imp__sub_83A82F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,26964
	ctx.r11.s64 = ctx.r11.s64 + 26964;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A82F8C"))) PPC_WEAK_FUNC(sub_83A82F8C);
PPC_FUNC_IMPL(__imp__sub_83A82F8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A82F90"))) PPC_WEAK_FUNC(sub_83A82F90);
PPC_FUNC_IMPL(__imp__sub_83A82F90) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x83a82fe4
	if (!cr6.eq) goto loc_83A82FE4;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,528
	ctx.r9.s64 = 34603008;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// ori r11,r9,13312
	ctx.r11.u64 = ctx.r9.u64 | 13312;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lfs f0,24504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_83A82FE4:
	// bl 0x831eef18
	ctx.lr = 0x83A82FE8;
	sub_831EEF18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a8300c
	if (!cr0.eq) goto loc_83A8300C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831ef048
	ctx.lr = 0x83A82FFC;
	sub_831EF048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8300c
	if (cr0.eq) goto loc_83A8300C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a83070
	goto loc_83A83070;
loc_83A8300C:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea7a0
	ctx.lr = 0x83A83018;
	sub_831EA7A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x83a83810
	ctx.lr = 0x83A83044;
	sub_83A83810(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x83a83054
	if (!cr0.lt) goto loc_83A83054;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x83a83068
	goto loc_83A83068;
loc_83A83054:
	// bl 0x83ab9008
	ctx.lr = 0x83A83058;
	sub_83AB9008(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// blt 0x83a83068
	if (cr0.lt) goto loc_83A83068;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_83A83068:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83A83070:
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

__attribute__((alias("__imp__sub_83A83084"))) PPC_WEAK_FUNC(sub_83A83084);
PPC_FUNC_IMPL(__imp__sub_83A83084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83088"))) PPC_WEAK_FUNC(sub_83A83088);
PPC_FUNC_IMPL(__imp__sub_83A83088) {
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x83a76228
	ctx.lr = 0x83A830A4;
	sub_83A76228(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a830bc
	if (cr0.eq) goto loc_83A830BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,6424
	ctx.r4.s64 = ctx.r11.s64 + 6424;
	// bl 0x831ea3f0
	ctx.lr = 0x83A830BC;
	sub_831EA3F0(ctx, base);
loc_83A830BC:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,26884
	ctx.r31.s64 = ctx.r11.s64 + 26884;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a830e4
	if (cr6.eq) goto loc_83A830E4;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a76620
	ctx.lr = 0x83A830DC;
	sub_83A76620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A830E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a830fc
	if (cr6.eq) goto loc_83A830FC;
	// bl 0x83102db0
	ctx.lr = 0x83A830F4;
	sub_83102DB0(ctx, base);
	// bl 0x83ab90b0
	ctx.lr = 0x83A830F8;
	sub_83AB90B0(ctx, base);
	// bl 0x83a865e8
	ctx.lr = 0x83A830FC;
	sub_83A865E8(ctx, base);
loc_83A830FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a83114
	if (cr6.eq) goto loc_83A83114;
	// bl 0x83a76550
	ctx.lr = 0x83A8310C;
	sub_83A76550(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83A83114:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r30,-31767
	ctx.r30.s64 = -2081882112;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a83134
	if (cr6.eq) goto loc_83A83134;
	// lwz r3,-14736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14736);
	// bl 0x83a76130
	ctx.lr = 0x83A8312C;
	sub_83A76130(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83A83134:
	// bl 0x831ef008
	ctx.lr = 0x83A83138;
	sub_831EF008(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a8316c
	if (!cr6.eq) goto loc_83A8316C;
	// bl 0x831ef7e0
	ctx.lr = 0x83A83148;
	sub_831EF7E0(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x83a8316c
	if (cr6.eq) goto loc_83A8316C;
	// lwz r3,-14736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14736);
	// bl 0x83a76130
	ctx.lr = 0x83A83164;
	sub_83A76130(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_83A8316C:
	// bl 0x83ab9ef0
	ctx.lr = 0x83A83170;
	sub_83AB9EF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A83190"))) PPC_WEAK_FUNC(sub_83A83190);
PPC_FUNC_IMPL(__imp__sub_83A83190) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,26956
	ctx.r31.s64 = ctx.r11.s64 + 26956;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a8322c
	if (cr6.eq) goto loc_83A8322C;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,26932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26932);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a831d4
	if (cr6.eq) goto loc_83A831D4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A831D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A831D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a831f0
	if (cr6.eq) goto loc_83A831F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A831F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A831F0:
	// bl 0x83ab9f48
	ctx.lr = 0x83A831F4;
	sub_83AB9F48(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a83228
	if (!cr6.eq) goto loc_83A83228;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r11.u32);
	// bl 0x83572958
	ctx.lr = 0x83A8320C;
	sub_83572958(ctx, base);
	// bl 0x83a958b8
	ctx.lr = 0x83A83210;
	sub_83A958B8(ctx, base);
	// bl 0x83ab90e0
	ctx.lr = 0x83A83214;
	sub_83AB90E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a87038
	ctx.lr = 0x83A8321C;
	sub_83A87038(ctx, base);
	// bl 0x83ab9ec8
	ctx.lr = 0x83A83220;
	sub_83AB9EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a87038
	ctx.lr = 0x83A83228;
	sub_83A87038(ctx, base);
loc_83A83228:
	// bl 0x83ab9f88
	ctx.lr = 0x83A8322C;
	sub_83AB9F88(ctx, base);
loc_83A8322C:
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

__attribute__((alias("__imp__sub_83A83240"))) PPC_WEAK_FUNC(sub_83A83240);
PPC_FUNC_IMPL(__imp__sub_83A83240) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab9f48
	sub_83AB9F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A83244"))) PPC_WEAK_FUNC(sub_83A83244);
PPC_FUNC_IMPL(__imp__sub_83A83244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83248"))) PPC_WEAK_FUNC(sub_83A83248);
PPC_FUNC_IMPL(__imp__sub_83A83248) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab9f88
	sub_83AB9F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8324C"))) PPC_WEAK_FUNC(sub_83A8324C);
PPC_FUNC_IMPL(__imp__sub_83A8324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83250"))) PPC_WEAK_FUNC(sub_83A83250);
PPC_FUNC_IMPL(__imp__sub_83A83250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A83258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,26940
	ctx.r31.s64 = ctx.r11.s64 + 26940;
	// lwz r11,-56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a83344
	if (cr6.eq) goto loc_83A83344;
	// lis r29,-31739
	ctx.r29.s64 = -2080047104;
	// lwz r11,26932(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26932);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a83290
	if (cr6.eq) goto loc_83A83290;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A83290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A83290:
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// lwz r11,26956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a832b0
	if (cr6.eq) goto loc_83A832B0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A832B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A832B0:
	// bl 0x83ab9f48
	ctx.lr = 0x83A832B4;
	sub_83AB9F48(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a83324
	if (!cr6.eq) goto loc_83A83324;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r11.u32);
	// bl 0x83572958
	ctx.lr = 0x83A832CC;
	sub_83572958(ctx, base);
	// bl 0x83a958b8
	ctx.lr = 0x83A832D0;
	sub_83A958B8(ctx, base);
	// bl 0x83ab90e0
	ctx.lr = 0x83A832D4;
	sub_83AB90E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a87038
	ctx.lr = 0x83A832DC;
	sub_83A87038(ctx, base);
	// bl 0x83ab9ec8
	ctx.lr = 0x83A832E0;
	sub_83AB9EC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a87038
	ctx.lr = 0x83A832E8;
	sub_83A87038(ctx, base);
	// bl 0x83aa0eb8
	ctx.lr = 0x83A832EC;
	sub_83AA0EB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// stw r11,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r11.u32);
	// lwz r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r8,-12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,26956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26956, ctx.r7.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// stw r11,26932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26932, ctx.r11.u32);
loc_83A83324:
	// bl 0x83ab9f88
	ctx.lr = 0x83A83328;
	sub_83AB9F88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a83344
	if (cr6.eq) goto loc_83A83344;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A83344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A83344:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8334C"))) PPC_WEAK_FUNC(sub_83A8334C);
PPC_FUNC_IMPL(__imp__sub_83A8334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83350"))) PPC_WEAK_FUNC(sub_83A83350);
PPC_FUNC_IMPL(__imp__sub_83A83350) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,26940
	ctx.r31.s64 = ctx.r11.s64 + 26940;
	// lwz r11,-56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a833f0
	if (cr6.eq) goto loc_83A833F0;
	// bl 0x83ab9f48
	ctx.lr = 0x83A83378;
	sub_83AB9F48(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a833d0
	if (!cr6.eq) goto loc_83A833D0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r11.u32);
	// bl 0x83a87038
	ctx.lr = 0x83A83394;
	sub_83A87038(ctx, base);
	// bl 0x83aa0eb8
	ctx.lr = 0x83A83398;
	sub_83AA0EB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// stw r11,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r11.u32);
	// lwz r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r8,-12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
loc_83A833D0:
	// bl 0x83ab9f88
	ctx.lr = 0x83A833D4;
	sub_83AB9F88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a833f0
	if (cr6.eq) goto loc_83A833F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A833F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A833F0:
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

__attribute__((alias("__imp__sub_83A83404"))) PPC_WEAK_FUNC(sub_83A83404);
PPC_FUNC_IMPL(__imp__sub_83A83404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83408"))) PPC_WEAK_FUNC(sub_83A83408);
PPC_FUNC_IMPL(__imp__sub_83A83408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83A83410;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r24,r11,26888
	ctx.r24.s64 = ctx.r11.s64 + 26888;
	// addi r11,r10,6264
	ctx.r11.s64 = ctx.r10.s64 + 6264;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stw r11,-12(r24)
	PPC_STORE_U32(ctx.r24.u32 + -12, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x83a76228
	ctx.lr = 0x83A83440;
	sub_83A76228(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a83460
	if (cr0.eq) goto loc_83A83460;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,6896
	ctx.r4.s64 = ctx.r11.s64 + 6896;
	// bl 0x831ea3f0
	ctx.lr = 0x83A83458;
	sub_831EA3F0(ctx, base);
loc_83A83458:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a83808
	goto loc_83A83808;
loc_83A83460:
	// lis r11,528
	ctx.r11.s64 = 34603008;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r5,r11,13312
	ctx.r5.u64 = ctx.r11.u64 | 13312;
	// li r31,16
	ctx.r31.s64 = 16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a8349c
	if (!cr6.eq) goto loc_83A8349C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_83A8349C:
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x83a834bc
	if (cr6.eq) goto loc_83A834BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,6744
	ctx.r4.s64 = ctx.r11.s64 + 6744;
	// bl 0x831ea410
	ctx.lr = 0x83A834B8;
	sub_831EA410(ctx, base);
	// b 0x83a83458
	goto loc_83A83458;
loc_83A834BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11800);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x83a834e8
	if (!cr6.lt) goto loc_83A834E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,6688
	ctx.r4.s64 = ctx.r11.s64 + 6688;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A834E4;
	sub_831EA400(ctx, base);
	// b 0x83a83458
	goto loc_83A83458;
loc_83A834E8:
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r21,-4(r24)
	PPC_STORE_U32(ctx.r24.u32 + -4, ctx.r21.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bl 0x83ab9fa8
	ctx.lr = 0x83A834F8;
	sub_83AB9FA8(ctx, base);
	// bl 0x831eef18
	ctx.lr = 0x83A834FC;
	sub_831EEF18(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r22,2
	ctx.r22.s64 = 2;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r25,r11,-14736
	ctx.r25.s64 = ctx.r11.s64 + -14736;
	// bne 0x83a8361c
	if (!cr0.eq) goto loc_83A8361C;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a8355c
	if (!cr6.eq) goto loc_83A8355C;
	// lis r11,626
	ctx.r11.s64 = 41025536;
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// ori r11,r11,1792
	ctx.r11.u64 = ctx.r11.u64 | 1792;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r22.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// bl 0x831eeb80
	ctx.lr = 0x83A83554;
	sub_831EEB80(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// b 0x83a83568
	goto loc_83A83568;
loc_83A8355C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x831ce980
	ctx.lr = 0x83A83568;
	sub_831CE980(ctx, base);
loc_83A83568:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x831ef048
	ctx.lr = 0x83A8357C;
	sub_831EF048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a8358c
	if (cr0.eq) goto loc_83A8358C;
loc_83A83584:
	// bl 0x83a83088
	ctx.lr = 0x83A83588;
	sub_83A83088(ctx, base);
	// b 0x83a83458
	goto loc_83A83458;
loc_83A8358C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a835d4
	if (!cr6.eq) goto loc_83A835D4;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x83a835d4
	if (!cr6.eq) goto loc_83A835D4;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a760b8
	ctx.lr = 0x83A835A8;
	sub_83A760B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83a835c8
	if (!cr0.eq) goto loc_83A835C8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,6676
	ctx.r4.s64 = ctx.r11.s64 + 6676;
loc_83A835B8:
	// li r5,-3
	ctx.r5.s64 = -3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A835C4;
	sub_831EA418(ctx, base);
	// b 0x83a83584
	goto loc_83A83584;
loc_83A835C8:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r4.u32);
	// b 0x83a83600
	goto loc_83A83600;
loc_83A835D4:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r5,r26
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, xer);
	// ble cr6,0x83a835f4
	if (!cr6.gt) goto loc_83A835F4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,6636
	ctx.r4.s64 = ctx.r11.s64 + 6636;
loc_83A835E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83A835F0;
	sub_831EA3F0(ctx, base);
	// b 0x83a83584
	goto loc_83A83584;
loc_83A835F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r26,r5,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r5.s64;
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
loc_83A83600:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831ef8f0
	ctx.lr = 0x83A83608;
	sub_831EF8F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a83584
	if (!cr0.eq) goto loc_83A83584;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r21.u32);
	// b 0x83a83638
	goto loc_83A83638;
loc_83A8361C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a83638
	if (cr6.eq) goto loc_83A83638;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,6580
	ctx.r4.s64 = ctx.r11.s64 + 6580;
	// bl 0x831ea3f0
	ctx.lr = 0x83A83638;
	sub_831EA3F0(ctx, base);
loc_83A83638:
	// bl 0x831eeff0
	ctx.lr = 0x83A8363C;
	sub_831EEFF0(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831ea7a0
	ctx.lr = 0x83A83650;
	sub_831EA7A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x83a83810
	ctx.lr = 0x83A8367C;
	sub_83A83810(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a83584
	if (cr0.lt) goto loc_83A83584;
	// bl 0x83ab9008
	ctx.lr = 0x83A83688;
	sub_83AB9008(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a83584
	if (cr0.lt) goto loc_83A83584;
	// add. r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt 0x83a83584
	if (cr0.lt) goto loc_83A83584;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a836d0
	if (!cr6.eq) goto loc_83A836D0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x83a836d0
	if (!cr6.eq) goto loc_83A836D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x83a760b8
	ctx.lr = 0x83A836B4;
	sub_83A760B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r3.u32);
loc_83A836BC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a836e4
	if (!cr6.eq) goto loc_83A836E4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,6568
	ctx.r4.s64 = ctx.r11.s64 + 6568;
	// b 0x83a835b8
	goto loc_83A835B8;
loc_83A836D0:
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bge cr6,0x83a836bc
	if (!cr6.lt) goto loc_83A836BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,6528
	ctx.r4.s64 = ctx.r11.s64 + 6528;
	// b 0x83a835e8
	goto loc_83A835E8;
loc_83A836E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A836F0;
	sub_831EA7A0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831ea7a0
	ctx.lr = 0x83A836FC;
	sub_831EA7A0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a83724
	if (cr6.eq) goto loc_83A83724;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a83718
	if (cr6.eq) goto loc_83A83718;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// b 0x83a83728
	goto loc_83A83728;
loc_83A83718:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// b 0x83a8372c
	goto loc_83A8372C;
loc_83A83724:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
loc_83A83728:
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
loc_83A8372C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a76928
	ctx.lr = 0x83A83734;
	sub_83A76928(ctx, base);
	// stw r21,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r21.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bl 0x83a76350
	ctx.lr = 0x83A83740;
	sub_83A76350(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a83750
	if (!cr0.eq) goto loc_83A83750;
	// lfs f1,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a76370
	ctx.lr = 0x83A83750;
	sub_83A76370(ctx, base);
loc_83A83750:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea7a0
	ctx.lr = 0x83A8375C;
	sub_831EA7A0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a83810
	ctx.lr = 0x83A83780;
	sub_83A83810(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a83584
	if (cr0.lt) goto loc_83A83584;
	// bl 0x83ab9008
	ctx.lr = 0x83A8378C;
	sub_83AB9008(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x83a83584
	if (cr0.lt) goto loc_83A83584;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a86f30
	ctx.lr = 0x83A837A4;
	sub_83A86F30(ctx, base);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a837c0
	if (!cr6.gt) goto loc_83A837C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab9040
	ctx.lr = 0x83A837BC;
	sub_83AB9040(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_83A837C0:
	// bl 0x83102db0
	ctx.lr = 0x83A837C4;
	sub_83102DB0(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// stw r21,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r21.u32);
	// beq cr6,0x83a837ec
	if (cr6.eq) goto loc_83A837EC;
	// lis r11,-31832
	ctx.r11.s64 = -2086141952;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,12880
	ctx.r3.s64 = ctx.r11.s64 + 12880;
	// bl 0x83a76620
	ctx.lr = 0x83A837E4;
	sub_83A76620(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r21.u32);
loc_83A837EC:
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x83a83804
	if (!cr6.gt) goto loc_83A83804;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,6492
	ctx.r4.s64 = ctx.r11.s64 + 6492;
	// b 0x83a835e8
	goto loc_83A835E8;
loc_83A83804:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A83808:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A83810"))) PPC_WEAK_FUNC(sub_83A83810);
PPC_FUNC_IMPL(__imp__sub_83A83810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x83a9fd38
	ctx.lr = 0x83A83848;
	sub_83A9FD38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a83858
	if (!cr0.lt) goto loc_83A83858;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a83860
	goto loc_83A83860;
loc_83A83858:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_83A83860:
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

__attribute__((alias("__imp__sub_83A83874"))) PPC_WEAK_FUNC(sub_83A83874);
PPC_FUNC_IMPL(__imp__sub_83A83874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83878"))) PPC_WEAK_FUNC(sub_83A83878);
PPC_FUNC_IMPL(__imp__sub_83A83878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,27016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27016);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A83884"))) PPC_WEAK_FUNC(sub_83A83884);
PPC_FUNC_IMPL(__imp__sub_83A83884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83888"))) PPC_WEAK_FUNC(sub_83A83888);
PPC_FUNC_IMPL(__imp__sub_83A83888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A83890;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x83a83b5c
	if (cr6.eq) goto loc_83A83B5C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x83a83b38
	if (cr6.eq) goto loc_83A83B38;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x83a83ae4
	if (cr6.eq) goto loc_83A83AE4;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// beq cr6,0x83a83a88
	if (cr6.eq) goto loc_83A83A88;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// beq cr6,0x83a83a10
	if (cr6.eq) goto loc_83A83A10;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// beq cr6,0x83a83960
	if (cr6.eq) goto loc_83A83960;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x83a83910
	if (cr6.eq) goto loc_83A83910;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a83b70
	if (!cr6.gt) goto loc_83A83B70;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83A838EC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83900;
	sub_83AA00F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a838ec
	if (cr6.lt) goto loc_83A838EC;
	// b 0x83a83b70
	goto loc_83A83B70;
loc_83A83910:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_83A83918:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A8392C;
	sub_83AA00F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// blt cr6,0x83a83918
	if (cr6.lt) goto loc_83A83918;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,10700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10700);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83954;
	sub_83AA00F8(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x83a83ad4
	goto loc_83A83AD4;
loc_83A83960:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x83a82e68
	ctx.lr = 0x83A83968;
	sub_83A82E68(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// bne 0x83a839a0
	if (!cr0.eq) goto loc_83A839A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A8397C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83990;
	sub_83AA00F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// blt cr6,0x83a8397c
	if (cr6.lt) goto loc_83A8397C;
	// b 0x83a83b70
	goto loc_83A83B70;
loc_83A839A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A839B4;
	sub_83AA00F8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A839C8;
	sub_83AA00F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A839DC;
	sub_83AA00F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A839F0;
	sub_83AA00F8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,4
	ctx.r4.s64 = 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83A04;
	sub_83AA00F8(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x83a83ad4
	goto loc_83A83AD4;
loc_83A83A10:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x83a82e68
	ctx.lr = 0x83A83A18;
	sub_83A82E68(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r11,-26260
	ctx.r11.s64 = ctx.r11.s64 + -26260;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// beq 0x83a83a40
	if (cr0.eq) goto loc_83A83A40;
	// li r5,3
	ctx.r5.s64 = 3;
loc_83A83A40:
	// bl 0x83aa00f8
	ctx.lr = 0x83A83A44;
	sub_83AA00F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83A58;
	sub_83AA00F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83A6C;
	sub_83AA00F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83A80;
	sub_83AA00F8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x83a83ad0
	goto loc_83A83AD0;
loc_83A83A88:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83AA4;
	sub_83AA00F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83AB8;
	sub_83AA00F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83ACC;
	sub_83AA00F8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
loc_83A83AD0:
	// li r5,5
	ctx.r5.s64 = 5;
loc_83A83AD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83AE0;
	sub_83AA00F8(ctx, base);
	// b 0x83a83b70
	goto loc_83A83B70;
loc_83A83AE4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83B00;
	sub_83AA00F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83B14;
	sub_83AA00F8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,10700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10700);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa00f8
	ctx.lr = 0x83A83B30;
	sub_83AA00F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83a83ad0
	goto loc_83A83AD0;
loc_83A83B38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aa0040
	ctx.lr = 0x83A83B4C;
	sub_83AA0040(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83a83b68
	goto loc_83A83B68;
loc_83A83B5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
loc_83A83B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa0040
	ctx.lr = 0x83A83B70;
	sub_83AA0040(ctx, base);
loc_83A83B70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A83B7C"))) PPC_WEAK_FUNC(sub_83A83B7C);
PPC_FUNC_IMPL(__imp__sub_83A83B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83B80"))) PPC_WEAK_FUNC(sub_83A83B80);
PPC_FUNC_IMPL(__imp__sub_83A83B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A83B88;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,392(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x83a83cd8
	if (!cr6.gt) goto loc_83A83CD8;
	// lfs f0,396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x83a83cd8
	if (cr6.gt) goto loc_83A83CD8;
	// lfs f0,384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,392(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x83a83cd8
	if (cr6.eq) goto loc_83A83CD8;
	// lwa r11,308(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 308));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r3,300
	ctx.r30.s64 = ctx.r3.s64 + 300;
	// clrlwi r29,r9,12
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFFF;
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, xer);
	// ble cr6,0x83a83c44
	if (!cr6.gt) goto loc_83A83C44;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,7088
	ctx.r4.s64 = ctx.r11.s64 + 7088;
	// bl 0x831ea400
	ctx.lr = 0x83A83C18;
	sub_831EA400(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_83A83C44:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// bne cr6,0x83a83c84
	if (!cr6.eq) goto loc_83A83C84;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r4,27008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// bl 0x83ab9240
	ctx.lr = 0x83A83C70;
	sub_83AB9240(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa0028
	ctx.lr = 0x83A83C7C;
	sub_83AA0028(ctx, base);
	// stfs f31,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// b 0x83a83cd8
	goto loc_83A83CD8;
loc_83A83C84:
	// lfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x83a83ca0
	if (cr6.gt) goto loc_83A83CA0;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa0028
	ctx.lr = 0x83A83C9C;
	sub_83AA0028(ctx, base);
	// b 0x83a83cd8
	goto loc_83A83CD8;
loc_83A83CA0:
	// lfs f0,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x83a83ccc
	if (!cr6.gt) goto loc_83A83CCC;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,27008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// bl 0x83ab9240
	ctx.lr = 0x83A83CC8;
	sub_83AB9240(ctx, base);
	// b 0x83a83cd4
	goto loc_83A83CD4;
loc_83A83CCC:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83aa0028
	ctx.lr = 0x83A83CD4;
	sub_83AA0028(ctx, base);
loc_83A83CD4:
	// stfs f31,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
loc_83A83CD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A83CE8"))) PPC_WEAK_FUNC(sub_83A83CE8);
PPC_FUNC_IMPL(__imp__sub_83A83CE8) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x83a83da4
	if (!cr6.gt) goto loc_83A83DA4;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a83d34
	if (!cr6.gt) goto loc_83A83D34;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// b 0x83a83da4
	goto loc_83A83DA4;
loc_83A83D34:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83a83da4
	if (cr6.lt) goto loc_83A83DA4;
	// lfs f0,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x83a83d60
	if (!cr6.gt) goto loc_83A83D60;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83aa0028
	ctx.lr = 0x83A83D5C;
	sub_83AA0028(ctx, base);
	// b 0x83a83d88
	goto loc_83A83D88;
loc_83A83D60:
	// lfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x83a83d70
	if (cr6.gt) goto loc_83A83D70;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83A83D70:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r6,308(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r4,27008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// bl 0x83ab9240
	ctx.lr = 0x83A83D88;
	sub_83AB9240(ctx, base);
loc_83A83D88:
	// lfs f0,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// stfs f30,396(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// ble cr6,0x83a83da4
	if (!cr6.gt) goto loc_83A83DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a83b80
	ctx.lr = 0x83A83DA4;
	sub_83A83B80(ctx, base);
loc_83A83DA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A83DC0"))) PPC_WEAK_FUNC(sub_83A83DC0);
PPC_FUNC_IMPL(__imp__sub_83A83DC0) {
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
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a83df0
	if (!cr6.eq) goto loc_83A83DF0;
loc_83A83DE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a83e1c
	goto loc_83A83E1C;
loc_83A83DF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x83a761b8
	ctx.lr = 0x83A83DFC;
	sub_83A761B8(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x83a83de8
	if (cr6.eq) goto loc_83A83DE8;
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A83E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A83E1C:
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

__attribute__((alias("__imp__sub_83A83E34"))) PPC_WEAK_FUNC(sub_83A83E34);
PPC_FUNC_IMPL(__imp__sub_83A83E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83E38"))) PPC_WEAK_FUNC(sub_83A83E38);
PPC_FUNC_IMPL(__imp__sub_83A83E38) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a83e68
	if (cr6.gt) goto loc_83A83E68;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7392
	ctx.r4.s64 = ctx.r11.s64 + 7392;
	// bl 0x831ea3f0
	ctx.lr = 0x83A83E60;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a83ec0
	goto loc_83A83EC0;
loc_83A83E68:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a83ebc
	if (cr6.eq) goto loc_83A83EBC;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// cmpd cr6,r4,r11
	cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, xer);
	// blt cr6,0x83a83ebc
	if (cr6.lt) goto loc_83A83EBC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// tdllei r9,0
	// rotldi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 1);
	// divd r7,r8,r9
	ctx.r7.s64 = PPCDivide(ctx.r8.s64, ctx.r9.s64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulld r7,r7,r9
	ctx.r7.s64 = ctx.r7.s64 * ctx.r9.s64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// tdlgei r9,-1
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83A83EBC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_83A83EC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A83ED0"))) PPC_WEAK_FUNC(sub_83A83ED0);
PPC_FUNC_IMPL(__imp__sub_83A83ED0) {
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
	// addi r31,r3,300
	ctx.r31.s64 = ctx.r3.s64 + 300;
	// ld r4,408(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 408);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a83e38
	ctx.lr = 0x83A83EF0;
	sub_83A83E38(ctx, base);
	// lwa r11,12(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 12));
	// cmpd cr6,r3,r11
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, xer);
	// blt cr6,0x83a83f04
	if (cr6.lt) goto loc_83A83F04;
loc_83A83EFC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a83f74
	goto loc_83A83F74;
loc_83A83F04:
	// lwa r7,60(r31)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 60));
	// rotldi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 1);
	// lwa r9,56(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 56));
	// divd r6,r3,r7
	ctx.r6.s64 = PPCDivide(ctx.r3.s64, ctx.r7.s64);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwa r10,52(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 52));
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// mulld r11,r6,r9
	ctx.r11.s64 = ctx.r6.s64 * ctx.r9.s64;
	// ori r9,r8,65535
	ctx.r9.u64 = ctx.r8.u64 | 65535;
	// andc r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// tdllei r7,0
	// tdlgei r8,-1
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// ble cr6,0x83a83f54
	if (!cr6.gt) goto loc_83A83F54;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7444
	ctx.r4.s64 = ctx.r11.s64 + 7444;
	// bl 0x831ea3f0
	ctx.lr = 0x83A83F50;
	sub_831EA3F0(ctx, base);
	// b 0x83a83efc
	goto loc_83A83EFC;
loc_83A83F54:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a83f70
	if (cr6.eq) goto loc_83A83F70;
	// lwa r10,32(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 32));
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x83a83f70
	if (cr6.lt) goto loc_83A83F70;
	// lwa r11,28(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 28));
loc_83A83F70:
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
loc_83A83F74:
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

__attribute__((alias("__imp__sub_83A83F88"))) PPC_WEAK_FUNC(sub_83A83F88);
PPC_FUNC_IMPL(__imp__sub_83A83F88) {
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
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a83fe0
	if (cr6.eq) goto loc_83A83FE0;
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a83fc0
	if (!cr6.eq) goto loc_83A83FC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,383(r3)
	PPC_STORE_U8(ctx.r3.u32 + 383, ctx.r11.u8);
	// b 0x83a83fe0
	goto loc_83A83FE0;
loc_83A83FC0:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x83A83FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A83FE0:
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

__attribute__((alias("__imp__sub_83A83FF4"))) PPC_WEAK_FUNC(sub_83A83FF4);
PPC_FUNC_IMPL(__imp__sub_83A83FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A83FF8"))) PPC_WEAK_FUNC(sub_83A83FF8);
PPC_FUNC_IMPL(__imp__sub_83A83FF8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,11800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11800);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83a8402c
	if (!cr6.lt) goto loc_83A8402C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7508
	ctx.r4.s64 = ctx.r11.s64 + 7508;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A84028;
	sub_831EA418(ctx, base);
	// b 0x83a84040
	goto loc_83A84040;
loc_83A8402C:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,27012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27012, ctx.r11.u32);
loc_83A84040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A84050"))) PPC_WEAK_FUNC(sub_83A84050);
PPC_FUNC_IMPL(__imp__sub_83A84050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A84058;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a8408c
	if (!cr6.eq) goto loc_83A8408C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7584
	ctx.r4.s64 = ctx.r11.s64 + 7584;
loc_83A84080:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A84088;
	sub_831EA418(ctx, base);
	// b 0x83a841b4
	goto loc_83A841B4;
loc_83A8408C:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,27012
	ctx.r11.s64 = ctx.r11.s64 + 27012;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a840bc
	if (!cr6.eq) goto loc_83A840BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a840bc
	if (!cr6.eq) goto loc_83A840BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,7572
	ctx.r4.s64 = ctx.r11.s64 + 7572;
	// b 0x83a84080
	goto loc_83A84080;
loc_83A840BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r31,r11,8,26,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x83a841a0
	if (!cr0.gt) goto loc_83A841A0;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bgt cr6,0x83a841a0
	if (cr6.gt) goto loc_83A841A0;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// clrlwi r30,r11,12
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// bl 0x83a9fdb0
	ctx.lr = 0x83A84114;
	sub_83A9FDB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x83a841b4
	if (!cr0.gt) goto loc_83A841B4;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ea7a0
	ctx.lr = 0x83A84128;
	sub_831EA7A0(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// bl 0x83ab9760
	ctx.lr = 0x83A84140;
	sub_83AB9760(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a8418c
	if (cr0.eq) goto loc_83A8418C;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831ea7a0
	ctx.lr = 0x83A8415C;
	sub_831EA7A0(ctx, base);
	// bl 0x83a94050
	ctx.lr = 0x83A84160;
	sub_83A94050(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// lfs f0,7568(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7568);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x83aba510
	ctx.lr = 0x83A84184;
	sub_83ABA510(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// b 0x83a84190
	goto loc_83A84190;
loc_83A8418C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A84190:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,512
	ctx.r3.s64 = ctx.r11.s64 + 512;
	// b 0x83a841b8
	goto loc_83A841B8;
loc_83A841A0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,7520
	ctx.r4.s64 = ctx.r11.s64 + 7520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x83A841B4;
	sub_831EA400(ctx, base);
loc_83A841B4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A841B8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A841C4"))) PPC_WEAK_FUNC(sub_83A841C4);
PPC_FUNC_IMPL(__imp__sub_83A841C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A841C8"))) PPC_WEAK_FUNC(sub_83A841C8);
PPC_FUNC_IMPL(__imp__sub_83A841C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-5
	ctx.r5.s64 = -5;
	// addi r4,r11,7596
	ctx.r4.s64 = ctx.r11.s64 + 7596;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A841DC"))) PPC_WEAK_FUNC(sub_83A841DC);
PPC_FUNC_IMPL(__imp__sub_83A841DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A841E0"))) PPC_WEAK_FUNC(sub_83A841E0);
PPC_FUNC_IMPL(__imp__sub_83A841E0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83aba1b0
	ctx.lr = 0x83A84210;
	sub_83ABA1B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a84230
	if (!cr0.eq) goto loc_83A84230;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,7608
	ctx.r4.s64 = ctx.r11.s64 + 7608;
	// bl 0x831ea3f0
	ctx.lr = 0x83A84228;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a8426c
	goto loc_83A8426C;
loc_83A84230:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a8424c
	if (!cr6.gt) goto loc_83A8424C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A8424C:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// stb r7,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r7.u8);
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
loc_83A8426C:
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

__attribute__((alias("__imp__sub_83A84284"))) PPC_WEAK_FUNC(sub_83A84284);
PPC_FUNC_IMPL(__imp__sub_83A84284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84288"))) PPC_WEAK_FUNC(sub_83A84288);
PPC_FUNC_IMPL(__imp__sub_83A84288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A84290;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a842dc
	if (!cr6.eq) goto loc_83A842DC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7652
	ctx.r4.s64 = ctx.r11.s64 + 7652;
	// bl 0x831ea3f0
	ctx.lr = 0x83A842CC;
	sub_831EA3F0(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// b 0x83a84368
	goto loc_83A84368;
loc_83A842DC:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83A842E8;
	sub_831EA7A0(ctx, base);
	// ld r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// ble cr6,0x83a84334
	if (!cr6.gt) goto loc_83A84334;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpdi cr6,r29,0
	cr6.compare<int64_t>(ctx.r29.s64, 0, xer);
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// blt cr6,0x83a84334
	if (cr6.lt) goto loc_83A84334;
	// cmpd cr6,r29,r11
	cr6.compare<int64_t>(ctx.r29.s64, ctx.r11.s64, xer);
	// bge cr6,0x83a84334
	if (!cr6.lt) goto loc_83A84334;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
loc_83A84334:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x83aba5d0
	ctx.lr = 0x83A84340;
	sub_83ABA5D0(ctx, base);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a84368
	if (cr6.eq) goto loc_83A84368;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r3,492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	ctx.lr = 0x83A84368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A84368:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84370"))) PPC_WEAK_FUNC(sub_83A84370);
PPC_FUNC_IMPL(__imp__sub_83A84370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a84388
	if (!cr6.eq) goto loc_83A84388;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7788
	ctx.r4.s64 = ctx.r11.s64 + 7788;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A84388:
	// stw r4,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A84390"))) PPC_WEAK_FUNC(sub_83A84390);
PPC_FUNC_IMPL(__imp__sub_83A84390) {
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
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r10,-14696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14696);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x83a843f8
	if (cr6.eq) goto loc_83A843F8;
	// lwz r11,428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a843f8
	if (!cr6.eq) goto loc_83A843F8;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r9,27416(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27416);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a843f8
	if (cr6.eq) goto loc_83A843F8;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r11,27416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27416);
	// lwz r3,27420(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27420);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A843F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A843F8:
	// lhz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a8442c
	if (cr6.eq) goto loc_83A8442C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a8442c
	if (cr6.eq) goto loc_83A8442C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83a8442c
	if (cr6.eq) goto loc_83A8442C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a83dc0
	ctx.lr = 0x83A84428;
	sub_83A83DC0(ctx, base);
	// b 0x83a84434
	goto loc_83A84434;
loc_83A8442C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 381, ctx.r11.u8);
loc_83A84434:
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

__attribute__((alias("__imp__sub_83A84448"))) PPC_WEAK_FUNC(sub_83A84448);
PPC_FUNC_IMPL(__imp__sub_83A84448) {
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
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a84390
	ctx.lr = 0x83A84464;
	sub_83A84390(ctx, base);
	// lhz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a84480
	if (cr6.eq) goto loc_83A84480;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a84480
	if (cr6.eq) goto loc_83A84480;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83a84488
	if (!cr6.eq) goto loc_83A84488;
loc_83A84480:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r11.u8);
loc_83A84488:
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

__attribute__((alias("__imp__sub_83A8449C"))) PPC_WEAK_FUNC(sub_83A8449C);
PPC_FUNC_IMPL(__imp__sub_83A8449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A844A0"))) PPC_WEAK_FUNC(sub_83A844A0);
PPC_FUNC_IMPL(__imp__sub_83A844A0) {
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
	// bne cr6,0x83a844cc
	if (!cr6.eq) goto loc_83A844CC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7800
	ctx.r4.s64 = ctx.r11.s64 + 7800;
	// bl 0x831ea418
	ctx.lr = 0x83A844C4;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a844d4
	goto loc_83A844D4;
loc_83A844CC:
	// lbz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 380);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
loc_83A844D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A844E4"))) PPC_WEAK_FUNC(sub_83A844E4);
PPC_FUNC_IMPL(__imp__sub_83A844E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A844E8"))) PPC_WEAK_FUNC(sub_83A844E8);
PPC_FUNC_IMPL(__imp__sub_83A844E8) {
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
	// bne cr6,0x83a84514
	if (!cr6.eq) goto loc_83A84514;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7812
	ctx.r4.s64 = ctx.r11.s64 + 7812;
	// bl 0x831ea418
	ctx.lr = 0x83A8450C;
	sub_831EA418(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83a84518
	goto loc_83A84518;
loc_83A84514:
	// lhz r3,376(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 376);
loc_83A84518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A84528"))) PPC_WEAK_FUNC(sub_83A84528);
PPC_FUNC_IMPL(__imp__sub_83A84528) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a845a0
	if (cr6.eq) goto loc_83A845A0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a845a0
	if (cr6.eq) goto loc_83A845A0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,376(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a845b4
	if (!cr6.gt) goto loc_83A845B4;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwa r10,312(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 312));
	// std r10,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// lwa r10,336(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 336));
	// std r10,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r10.u64);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r11.u64);
	// b 0x83a845b8
	goto loc_83A845B8;
loc_83A845A0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7824
	ctx.r4.s64 = ctx.r11.s64 + 7824;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A845B4;
	sub_831EA418(ctx, base);
loc_83A845B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A845B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A845C8"))) PPC_WEAK_FUNC(sub_83A845C8);
PPC_FUNC_IMPL(__imp__sub_83A845C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A845D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,308(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83a84650
	if (!cr6.gt) goto loc_83A84650;
	// lhz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 376);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a84650
	if (cr0.eq) goto loc_83A84650;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a84650
	if (cr6.eq) goto loc_83A84650;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83a9ffb0
	ctx.lr = 0x83A84610;
	sub_83A9FFB0(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// blt cr6,0x83a84640
	if (cr6.lt) goto loc_83A84640;
	// ld r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 408);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,60(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83A84640:
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x83a84664
	goto loc_83A84664;
loc_83A84650:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_83A84664:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8466C"))) PPC_WEAK_FUNC(sub_83A8466C);
PPC_FUNC_IMPL(__imp__sub_83A8466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84670"))) PPC_WEAK_FUNC(sub_83A84670);
PPC_FUNC_IMPL(__imp__sub_83A84670) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// b 0x83ab9470
	sub_83AB9470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84678"))) PPC_WEAK_FUNC(sub_83A84678);
PPC_FUNC_IMPL(__imp__sub_83A84678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a84690
	if (!cr6.eq) goto loc_83A84690;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7836
	ctx.r4.s64 = ctx.r11.s64 + 7836;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A84690:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83a846a4
	if (cr6.gt) goto loc_83A846A4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83A846A4:
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// b 0x83a9fff8
	sub_83A9FFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A846AC"))) PPC_WEAK_FUNC(sub_83A846AC);
PPC_FUNC_IMPL(__imp__sub_83A846AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A846B0"))) PPC_WEAK_FUNC(sub_83A846B0);
PPC_FUNC_IMPL(__imp__sub_83A846B0) {
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
	// bne cr6,0x83a846dc
	if (!cr6.eq) goto loc_83A846DC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7848
	ctx.r4.s64 = ctx.r11.s64 + 7848;
	// bl 0x831ea418
	ctx.lr = 0x83A846D4;
	sub_831EA418(ctx, base);
loc_83A846D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a846ec
	goto loc_83A846EC;
loc_83A846DC:
	// lwz r3,248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a846d4
	if (cr6.eq) goto loc_83A846D4;
	// bl 0x83aba660
	ctx.lr = 0x83A846EC;
	sub_83ABA660(ctx, base);
loc_83A846EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A846FC"))) PPC_WEAK_FUNC(sub_83A846FC);
PPC_FUNC_IMPL(__imp__sub_83A846FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84700"))) PPC_WEAK_FUNC(sub_83A84700);
PPC_FUNC_IMPL(__imp__sub_83A84700) {
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
	// bne cr6,0x83a8472c
	if (!cr6.eq) goto loc_83A8472C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7860
	ctx.r4.s64 = ctx.r11.s64 + 7860;
	// bl 0x831ea418
	ctx.lr = 0x83A84724;
	sub_831EA418(ctx, base);
loc_83A84724:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a8473c
	goto loc_83A8473C;
loc_83A8472C:
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a84724
	if (cr6.eq) goto loc_83A84724;
	// bl 0x83a9ff60
	ctx.lr = 0x83A8473C;
	sub_83A9FF60(ctx, base);
loc_83A8473C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A8474C"))) PPC_WEAK_FUNC(sub_83A8474C);
PPC_FUNC_IMPL(__imp__sub_83A8474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84750"))) PPC_WEAK_FUNC(sub_83A84750);
PPC_FUNC_IMPL(__imp__sub_83A84750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A84758;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a84788
	if (!cr6.eq) goto loc_83A84788;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7872
	ctx.r4.s64 = ctx.r11.s64 + 7872;
	// bl 0x831ea418
	ctx.lr = 0x83A84784;
	sub_831EA418(ctx, base);
	// b 0x83a847b8
	goto loc_83A847B8;
loc_83A84788:
	// lbz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a847a4
	if (cr0.eq) goto loc_83A847A4;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83aa01c0
	ctx.lr = 0x83A8479C;
	sub_83AA01C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
loc_83A847A4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83aa0138
	ctx.lr = 0x83A847B8;
	sub_83AA0138(ctx, base);
loc_83A847B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A847C0"))) PPC_WEAK_FUNC(sub_83A847C0);
PPC_FUNC_IMPL(__imp__sub_83A847C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a847f0
	if (!cr6.eq) goto loc_83A847F0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
	// b 0x83a8484c
	goto loc_83A8484C;
loc_83A847F0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x83a84844
	if (cr6.lt) goto loc_83A84844;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a84844
	if (!cr6.lt) goto loc_83A84844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83aa0040
	ctx.lr = 0x83A84814;
	sub_83AA0040(ctx, base);
	// lbz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83a84858
	if (cr0.eq) goto loc_83A84858;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
	// not r11,r30
	ctx.r11.u64 = ~ctx.r30.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aa0040
	ctx.lr = 0x83A84840;
	sub_83AA0040(ctx, base);
	// b 0x83a84858
	goto loc_83A84858;
loc_83A84844:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,7884
	ctx.r4.s64 = ctx.r11.s64 + 7884;
loc_83A8484C:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A84858;
	sub_831EA418(ctx, base);
loc_83A84858:
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

__attribute__((alias("__imp__sub_83A84870"))) PPC_WEAK_FUNC(sub_83A84870);
PPC_FUNC_IMPL(__imp__sub_83A84870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a84888
	if (cr6.eq) goto loc_83A84888;
	// cmpwi cr6,r4,-3
	cr6.compare<int32_t>(ctx.r4.s32, -3, xer);
	// blt cr6,0x83a84888
	if (cr6.lt) goto loc_83A84888;
	// stw r4,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r4.u32);
	// blr 
	return;
loc_83A84888:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,7908
	ctx.r4.s64 = ctx.r11.s64 + 7908;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A8489C"))) PPC_WEAK_FUNC(sub_83A8489C);
PPC_FUNC_IMPL(__imp__sub_83A8489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A848A0"))) PPC_WEAK_FUNC(sub_83A848A0);
PPC_FUNC_IMPL(__imp__sub_83A848A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A848A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a84988
	if (cr6.eq) goto loc_83A84988;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83a84988
	if (!cr6.gt) goto loc_83A84988;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r3,16
	ctx.r23.s64 = ctx.r3.s64 + 16;
loc_83A848EC:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a8491c
	if (cr6.eq) goto loc_83A8491C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83b663d0
	ctx.lr = 0x83A84914;
	sub_83B663D0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83a8492c
	if (!cr0.lt) goto loc_83A8492C;
loc_83A8491C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// blt cr6,0x83a848ec
	if (cr6.lt) goto loc_83A848EC;
loc_83A8492C:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// blt cr6,0x83a8497c
	if (cr6.lt) goto loc_83A8497C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r4,r10,8008
	ctx.r4.s64 = ctx.r10.s64 + 8008;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r3,0
	ctx.r3.s64 = 0;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 | ctx.r5.u64;
	// bl 0x831ea308
	ctx.lr = 0x83A84974;
	sub_831EA308(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83a8499c
	goto loc_83A8499C;
loc_83A8497C:
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83a8499c
	goto loc_83A8499C;
loc_83A84988:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,7920
	ctx.r4.s64 = ctx.r11.s64 + 7920;
	// bl 0x831ea3f0
	ctx.lr = 0x83A84998;
	sub_831EA3F0(ctx, base);
	// li r3,-5
	ctx.r3.s64 = -5;
loc_83A8499C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A849A4"))) PPC_WEAK_FUNC(sub_83A849A4);
PPC_FUNC_IMPL(__imp__sub_83A849A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A849A8"))) PPC_WEAK_FUNC(sub_83A849A8);
PPC_FUNC_IMPL(__imp__sub_83A849A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r4.u32);
	// stw r5,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A849B4"))) PPC_WEAK_FUNC(sub_83A849B4);
PPC_FUNC_IMPL(__imp__sub_83A849B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A849B8"))) PPC_WEAK_FUNC(sub_83A849B8);
PPC_FUNC_IMPL(__imp__sub_83A849B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r4.u32);
	// stw r5,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A849C4"))) PPC_WEAK_FUNC(sub_83A849C4);
PPC_FUNC_IMPL(__imp__sub_83A849C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A849C8"))) PPC_WEAK_FUNC(sub_83A849C8);
PPC_FUNC_IMPL(__imp__sub_83A849C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a849e0
	if (!cr6.eq) goto loc_83A849E0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8224
	ctx.r4.s64 = ctx.r11.s64 + 8224;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A849E0:
	// lhz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 376);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a84a04
	if (cr6.eq) goto loc_83A84A04;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a84a04
	if (cr6.eq) goto loc_83A84A04;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83a84a04
	if (cr6.eq) goto loc_83A84A04;
	// stw r4,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r4.u32);
	// blr 
	return;
loc_83A84A04:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8136
	ctx.r4.s64 = ctx.r11.s64 + 8136;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84A14"))) PPC_WEAK_FUNC(sub_83A84A14);
PPC_FUNC_IMPL(__imp__sub_83A84A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84A18"))) PPC_WEAK_FUNC(sub_83A84A18);
PPC_FUNC_IMPL(__imp__sub_83A84A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a84a38
	if (cr6.eq) goto loc_83A84A38;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a84a38
	if (cr6.lt) goto loc_83A84A38;
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// bgt cr6,0x83a84a38
	if (cr6.gt) goto loc_83A84A38;
	// stb r4,229(r3)
	PPC_STORE_U8(ctx.r3.u32 + 229, ctx.r4.u8);
	// blr 
	return;
loc_83A84A38:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8236
	ctx.r4.s64 = ctx.r11.s64 + 8236;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84A4C"))) PPC_WEAK_FUNC(sub_83A84A4C);
PPC_FUNC_IMPL(__imp__sub_83A84A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84A50"))) PPC_WEAK_FUNC(sub_83A84A50);
PPC_FUNC_IMPL(__imp__sub_83A84A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a84a70
	if (cr6.eq) goto loc_83A84A70;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a84a70
	if (cr6.lt) goto loc_83A84A70;
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// bgt cr6,0x83a84a70
	if (cr6.gt) goto loc_83A84A70;
	// stb r4,230(r3)
	PPC_STORE_U8(ctx.r3.u32 + 230, ctx.r4.u8);
	// blr 
	return;
loc_83A84A70:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8248
	ctx.r4.s64 = ctx.r11.s64 + 8248;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84A84"))) PPC_WEAK_FUNC(sub_83A84A84);
PPC_FUNC_IMPL(__imp__sub_83A84A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84A88"))) PPC_WEAK_FUNC(sub_83A84A88);
PPC_FUNC_IMPL(__imp__sub_83A84A88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a84ab8
	if (!cr6.eq) goto loc_83A84AB8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// bl 0x831ea418
	ctx.lr = 0x83A84AB4;
	sub_831EA418(ctx, base);
	// b 0x83a84b00
	goto loc_83A84B00;
loc_83A84AB8:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x83aa0708
	ctx.lr = 0x83A84AC0;
	sub_83AA0708(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r8.u8);
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stw r7,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r7.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stfs f13,392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f13,396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
loc_83A84B00:
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

__attribute__((alias("__imp__sub_83A84B14"))) PPC_WEAK_FUNC(sub_83A84B14);
PPC_FUNC_IMPL(__imp__sub_83A84B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A84B18"))) PPC_WEAK_FUNC(sub_83A84B18);
PPC_FUNC_IMPL(__imp__sub_83A84B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// b 0x83aa0218
	sub_83AA0218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84B20"))) PPC_WEAK_FUNC(sub_83A84B20);
PPC_FUNC_IMPL(__imp__sub_83A84B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// b 0x83aa0260
	sub_83AA0260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84B28"))) PPC_WEAK_FUNC(sub_83A84B28);
PPC_FUNC_IMPL(__imp__sub_83A84B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// b 0x83aa02b8
	sub_83AA02B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84B30"))) PPC_WEAK_FUNC(sub_83A84B30);
PPC_FUNC_IMPL(__imp__sub_83A84B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// b 0x83aa0300
	sub_83AA0300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84B38"))) PPC_WEAK_FUNC(sub_83A84B38);
PPC_FUNC_IMPL(__imp__sub_83A84B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// b 0x83aa0358
	sub_83AA0358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84B40"))) PPC_WEAK_FUNC(sub_83A84B40);
PPC_FUNC_IMPL(__imp__sub_83A84B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// b 0x83aa03b0
	sub_83AA03B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A84B48"))) PPC_WEAK_FUNC(sub_83A84B48);
PPC_FUNC_IMPL(__imp__sub_83A84B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lbz r11,381(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 381);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A84B60"))) PPC_WEAK_FUNC(sub_83A84B60);
PPC_FUNC_IMPL(__imp__sub_83A84B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A84B68;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x83a7a038
	ctx.lr = 0x83A84B88;
	sub_83A7A038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a84b98
	if (!cr0.eq) goto loc_83A84B98;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83a84cb0
	goto loc_83A84CB0;
loc_83A84B98:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a84bfc
	if (!cr6.gt) goto loc_83A84BFC;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a84bb4
	if (!cr6.lt) goto loc_83A84BB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A84BB4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a7a2f0
	ctx.lr = 0x83A84BC4;
	sub_83A7A2F0(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a84bfc
	if (!cr6.eq) goto loc_83A84BFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a7a0d8
	ctx.lr = 0x83A84BF0;
	sub_83A7A0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a84b60
	ctx.lr = 0x83A84BF8;
	sub_83A84B60(ctx, base);
	// b 0x83a84cb0
	goto loc_83A84CB0;
loc_83A84BFC:
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r27,24(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r28,1024
	cr6.compare<int32_t>(ctx.r28.s32, 1024, xer);
	// bge cr6,0x83a84c28
	if (!cr6.lt) goto loc_83A84C28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a038
	ctx.lr = 0x83A84C18;
	sub_83A7A038(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83a84c28
	if (cr0.eq) goto loc_83A84C28;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r25,20(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
loc_83A84C28:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a848a0
	ctx.lr = 0x83A84C54;
	sub_83A848A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a84c6c
	if (cr6.eq) goto loc_83A84C6C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a090
	ctx.lr = 0x83A84C6C;
	sub_83A7A090(ctx, base);
loc_83A84C6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x83a7a090
	ctx.lr = 0x83A84C78;
	sub_83A7A090(ctx, base);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x83a84c90
	if (!cr6.eq) goto loc_83A84C90;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// b 0x83a84cb0
	goto loc_83A84CB0;
loc_83A84C90:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x83a84cac
	if (!cr6.lt) goto loc_83A84CAC;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// b 0x83a84cb0
	goto loc_83A84CB0;
loc_83A84CAC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83A84CB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

