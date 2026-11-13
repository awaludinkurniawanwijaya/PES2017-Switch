#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831E16F4"))) PPC_WEAK_FUNC(sub_831E16F4);
PPC_FUNC_IMPL(__imp__sub_831E16F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E16F8"))) PPC_WEAK_FUNC(sub_831E16F8);
PPC_FUNC_IMPL(__imp__sub_831E16F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,3568
	ctx.r3.s64 = ctx.r11.s64 + 3568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E1704"))) PPC_WEAK_FUNC(sub_831E1704);
PPC_FUNC_IMPL(__imp__sub_831E1704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1708"))) PPC_WEAK_FUNC(sub_831E1708);
PPC_FUNC_IMPL(__imp__sub_831E1708) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831e1738
	if (!cr6.eq) goto loc_831E1738;
	// bl 0x831d3050
	ctx.lr = 0x831E1724;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E1730;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e1840
	goto loc_831E1840;
loc_831E1738:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831e1758
	if (!cr6.eq) goto loc_831E1758;
loc_831E1740:
	// bl 0x831d3050
	ctx.lr = 0x831E1744;
	sub_831D3050(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_831E1748:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E1750;
	sub_831CF000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831e1840
	goto loc_831E1840;
loc_831E1758:
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x831e1784
	if (cr6.gt) goto loc_831E1784;
loc_831E1778:
	// bl 0x831d3050
	ctx.lr = 0x831E177C;
	sub_831D3050(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x831e1748
	goto loc_831E1748;
loc_831E1784:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// blt cr6,0x831e1740
	if (cr6.lt) goto loc_831E1740;
	// cmplwi cr6,r6,36
	cr6.compare<uint32_t>(ctx.r6.u32, 36, xer);
	// bgt cr6,0x831e1740
	if (cr6.gt) goto loc_831E1740;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831e17b8
	if (cr6.eq) goto loc_831E17B8;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_831E17B8:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_831E17BC:
	// divwu r10,r3,r6
	ctx.r10.u32 = PPCDivide(ctx.r3.u32, ctx.r6.u32);
	// twllei r6,0
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r6
	ctx.r3.u32 = PPCDivide(ctx.r3.u32, ctx.r6.u32);
	// twllei r6,0
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// ble cr6,0x831e17e4
	if (!cr6.gt) goto loc_831E17E4;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x831e17e8
	goto loc_831E17E8;
loc_831E17E4:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_831E17E8:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e1804
	if (cr6.eq) goto loc_831E1804;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x831e17bc
	if (cr6.lt) goto loc_831E17BC;
loc_831E1804:
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x831e1814
	if (cr6.lt) goto loc_831E1814;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// b 0x831e1778
	goto loc_831E1778;
loc_831E1814:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831E181C:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e181c
	if (cr6.lt) goto loc_831E181C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E1840:
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

__attribute__((alias("__imp__sub_831E1854"))) PPC_WEAK_FUNC(sub_831E1854);
PPC_FUNC_IMPL(__imp__sub_831E1854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1858"))) PPC_WEAK_FUNC(sub_831E1858);
PPC_FUNC_IMPL(__imp__sub_831E1858) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x831e1708
	sub_831E1708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E1860"))) PPC_WEAK_FUNC(sub_831E1860);
PPC_FUNC_IMPL(__imp__sub_831E1860) {
	PPC_FUNC_PROLOGUE();
	// b 0x831ceef0
	sub_831CEEF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E1864"))) PPC_WEAK_FUNC(sub_831E1864);
PPC_FUNC_IMPL(__imp__sub_831E1864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1868"))) PPC_WEAK_FUNC(sub_831E1868);
PPC_FUNC_IMPL(__imp__sub_831E1868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10568(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10568);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831E1878;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bl 0x831d9e80
	ctx.lr = 0x831E1890;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// addi r30,r11,24072
	ctx.r30.s64 = ctx.r11.s64 + 24072;
	// addi r10,r10,24076
	ctx.r10.s64 = ctx.r10.s64 + 24076;
loc_831E18A4:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x831e1934
	if (!cr6.lt) goto loc_831E1934;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831e1928
	if (cr6.eq) goto loc_831E1928;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1928
	if (cr0.eq) goto loc_831E1928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cfa58
	ctx.lr = 0x831E18E4;
	sub_831CFA58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e191c
	if (cr0.eq) goto loc_831E191C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e191c
	if (cr6.eq) goto loc_831E191C;
	// bl 0x831d0878
	ctx.lr = 0x831E1910;
	sub_831D0878(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_831E191C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e199c
	ctx.lr = 0x831E1928;
	sub_831E199C(ctx, base);
loc_831E1928:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x831e18a4
	goto loc_831E18A4;
loc_831E1934:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e194c
	ctx.lr = 0x831E1940;
	sub_831E194C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E1870"))) PPC_WEAK_FUNC(sub_831E1870);
PPC_FUNC_IMPL(__imp__sub_831E1870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831E1878;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bl 0x831d9e80
	ctx.lr = 0x831E1890;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// addi r30,r11,24072
	ctx.r30.s64 = ctx.r11.s64 + 24072;
	// addi r10,r10,24076
	ctx.r10.s64 = ctx.r10.s64 + 24076;
loc_831E18A4:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x831e1934
	if (!cr6.lt) goto loc_831E1934;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831e1928
	if (cr6.eq) goto loc_831E1928;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1928
	if (cr0.eq) goto loc_831E1928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cfa58
	ctx.lr = 0x831E18E4;
	sub_831CFA58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e191c
	if (cr0.eq) goto loc_831E191C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e191c
	if (cr6.eq) goto loc_831E191C;
	// bl 0x831d0878
	ctx.lr = 0x831E1910;
	sub_831D0878(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_831E191C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e199c
	ctx.lr = 0x831E1928;
	sub_831E199C(ctx, base);
loc_831E1928:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x831e18a4
	goto loc_831E18A4;
loc_831E1934:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e194c
	ctx.lr = 0x831E1940;
	sub_831E194C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E194C"))) PPC_WEAK_FUNC(sub_831E194C);
PPC_FUNC_IMPL(__imp__sub_831E194C) {
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
	ctx.lr = 0x831E1960;
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

__attribute__((alias("__imp__sub_831E1970"))) PPC_WEAK_FUNC(sub_831E1970);
PPC_FUNC_IMPL(__imp__sub_831E1970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r11,24072
	ctx.r30.s64 = ctx.r11.s64 + 24072;
	// b 0x831e19b8
	goto loc_831E19B8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831E19B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x831cfae8
	ctx.lr = 0x831E19CC;
	sub_831CFAE8(ctx, base);
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r30,r10,24072
	ctx.r30.s64 = ctx.r10.s64 + 24072;
	// addi r10,r11,24076
	ctx.r10.s64 = ctx.r11.s64 + 24076;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E199C"))) PPC_WEAK_FUNC(sub_831E199C);
PPC_FUNC_IMPL(__imp__sub_831E199C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x831cfae8
	ctx.lr = 0x831E19CC;
	sub_831CFAE8(ctx, base);
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r30,r10,24072
	ctx.r30.s64 = ctx.r10.s64 + 24072;
	// addi r10,r11,24076
	ctx.r10.s64 = ctx.r11.s64 + 24076;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E19FC"))) PPC_WEAK_FUNC(sub_831E19FC);
PPC_FUNC_IMPL(__imp__sub_831E19FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1A00"))) PPC_WEAK_FUNC(sub_831E1A00);
PPC_FUNC_IMPL(__imp__sub_831E1A00) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831e1a40
	if (!cr6.eq) goto loc_831E1A40;
loc_831E1A1C:
	// bl 0x831d3088
	ctx.lr = 0x831E1A20;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E1A2C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E1A38;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e1aa0
	goto loc_831E1AA0;
loc_831E1A40:
	// rlwinm. r11,r31,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e1a1c
	if (!cr0.eq) goto loc_831E1A1C;
	// bl 0x832d4520
	ctx.lr = 0x831E1A4C;
	sub_832D4520(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e1a68
	if (!cr6.eq) goto loc_831E1A68;
	// bl 0x82417100
	ctx.lr = 0x831E1A58;
	sub_82417100(ctx, base);
	// bl 0x831d30c0
	ctx.lr = 0x831E1A5C;
	sub_831D30C0(ctx, base);
loc_831E1A5C:
	// bl 0x831d3050
	ctx.lr = 0x831E1A60;
	sub_831D3050(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831e1aa0
	goto loc_831E1AA0;
loc_831E1A68:
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e1a9c
	if (!cr0.eq) goto loc_831E1A9C;
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1a9c
	if (cr0.eq) goto loc_831E1A9C;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1a9c
	if (cr0.eq) goto loc_831E1A9C;
	// bl 0x831d3088
	ctx.lr = 0x831E1A84;
	sub_831D3088(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E1A90;
	sub_831D3050(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831e1a5c
	goto loc_831E1A5C;
loc_831E1A9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E1AA0:
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

__attribute__((alias("__imp__sub_831E1AB4"))) PPC_WEAK_FUNC(sub_831E1AB4);
PPC_FUNC_IMPL(__imp__sub_831E1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E1AB8"))) PPC_WEAK_FUNC(sub_831E1AB8);
PPC_FUNC_IMPL(__imp__sub_831E1AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E1AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e1b3c
	if (cr6.eq) goto loc_831E1B3C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_831E1AD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e1ad4
	if (!cr6.eq) goto loc_831E1AD4;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x831E1AFC;
	sub_831D2BF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831e1b3c
	if (cr0.eq) goto loc_831E1B3C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x831E1B14;
	sub_831CE7D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e1b24
	if (!cr0.eq) goto loc_831E1B24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831e1b40
	goto loc_831E1B40;
loc_831E1B24:
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
	ctx.lr = 0x831E1B3C;
	sub_831CF0D8(ctx, base);
loc_831E1B3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E1B40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E1B48"))) PPC_WEAK_FUNC(sub_831E1B48);
PPC_FUNC_IMPL(__imp__sub_831E1B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x831E1B50;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// bl 0x831e8c58
	ctx.lr = 0x831E1B80;
	sub_831E8C58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e204c
	if (!cr0.eq) goto loc_831E204C;
	// rlwinm. r11,r21,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e1b94
	if (!cr0.eq) goto loc_831E1B94;
	// li r27,-128
	ctx.r27.s64 = -128;
loc_831E1B94:
	// clrlwi r11,r21,30
	ctx.r11.u64 = ctx.r21.u32 & 0x3;
	// lis r20,-16384
	ctx.r20.s64 = -1073741824;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x831e1bec
	if (cr6.lt) goto loc_831E1BEC;
	// beq cr6,0x831e1be4
	if (cr6.eq) goto loc_831E1BE4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x831e1bdc
	if (cr6.lt) goto loc_831E1BDC;
loc_831E1BB0:
	// bl 0x831d3088
	ctx.lr = 0x831E1BB4;
	sub_831D3088(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E1BC4;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E1BD0;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
loc_831E1BD4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_831E1BDC:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// b 0x831e1bf0
	goto loc_831E1BF0;
loc_831E1BE4:
	// lis r25,16384
	ctx.r25.s64 = 1073741824;
	// b 0x831e1bf0
	goto loc_831E1BF0;
loc_831E1BEC:
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
loc_831E1BF0:
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(ctx.r31.s32, 16, xer);
	// beq cr6,0x831e1c44
	if (cr6.eq) goto loc_831E1C44;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// beq cr6,0x831e1c3c
	if (cr6.eq) goto loc_831E1C3C;
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(ctx.r31.s32, 48, xer);
	// beq cr6,0x831e1c34
	if (cr6.eq) goto loc_831E1C34;
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(ctx.r31.s32, 64, xer);
	// beq cr6,0x831e1c2c
	if (cr6.eq) goto loc_831E1C2C;
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(ctx.r31.s32, 128, xer);
	// bne cr6,0x831e1bb0
	if (!cr6.eq) goto loc_831E1BB0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x831e1c48
	goto loc_831E1C48;
loc_831E1C2C:
	// li r24,3
	ctx.r24.s64 = 3;
	// b 0x831e1c48
	goto loc_831E1C48;
loc_831E1C34:
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x831e1c48
	goto loc_831E1C48;
loc_831E1C3C:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x831e1c48
	goto loc_831E1C48;
loc_831E1C44:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_831E1C48:
	// rlwinm r11,r21,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x700;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(ctx.r11.s32, 1024, xer);
	// bgt cr6,0x831e1c90
	if (cr6.gt) goto loc_831E1C90;
	// beq cr6,0x831e1c88
	if (cr6.eq) goto loc_831E1C88;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e1c88
	if (cr6.eq) goto loc_831E1C88;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// beq cr6,0x831e1c80
	if (cr6.eq) goto loc_831E1C80;
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(ctx.r11.s32, 512, xer);
	// beq cr6,0x831e1d00
	if (cr6.eq) goto loc_831E1D00;
	// cmpwi cr6,r11,768
	cr6.compare<int32_t>(ctx.r11.s32, 768, xer);
	// bne cr6,0x831e1bb0
	if (!cr6.eq) goto loc_831E1BB0;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x831e1cac
	goto loc_831E1CAC;
loc_831E1C80:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x831e1cac
	goto loc_831E1CAC;
loc_831E1C88:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x831e1cac
	goto loc_831E1CAC;
loc_831E1C90:
	// cmpwi cr6,r11,1280
	cr6.compare<int32_t>(ctx.r11.s32, 1280, xer);
	// beq cr6,0x831e1ca8
	if (cr6.eq) goto loc_831E1CA8;
	// cmpwi cr6,r11,1536
	cr6.compare<int32_t>(ctx.r11.s32, 1536, xer);
	// beq cr6,0x831e1d00
	if (cr6.eq) goto loc_831E1D00;
	// cmpwi cr6,r11,1792
	cr6.compare<int32_t>(ctx.r11.s32, 1792, xer);
	// bne cr6,0x831e1bb0
	if (!cr6.eq) goto loc_831E1BB0;
loc_831E1CA8:
	// li r31,1
	ctx.r31.s64 = 1;
loc_831E1CAC:
	// rlwinm. r11,r21,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r26,128
	ctx.r26.s64 = 128;
	// beq 0x831e1cd0
	if (cr0.eq) goto loc_831E1CD0;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,2604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2604);
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e1cd0
	if (!cr0.eq) goto loc_831E1CD0;
	// li r26,1
	ctx.r26.s64 = 1;
loc_831E1CD0:
	// rlwinm. r11,r21,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1ce4
	if (cr0.eq) goto loc_831E1CE4;
	// oris r26,r26,1024
	ctx.r26.u64 = ctx.r26.u64 | 67108864;
	// oris r25,r25,1
	ctx.r25.u64 = ctx.r25.u64 | 65536;
	// ori r24,r24,4
	ctx.r24.u64 = ctx.r24.u64 | 4;
loc_831E1CE4:
	// rlwinm. r11,r21,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1cf0
	if (cr0.eq) goto loc_831E1CF0;
	// ori r26,r26,256
	ctx.r26.u64 = ctx.r26.u64 | 256;
loc_831E1CF0:
	// rlwinm. r11,r21,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1d08
	if (cr0.eq) goto loc_831E1D08;
	// oris r26,r26,2048
	ctx.r26.u64 = ctx.r26.u64 | 134217728;
	// b 0x831e1d14
	goto loc_831E1D14;
loc_831E1D00:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x831e1cac
	goto loc_831E1CAC;
loc_831E1D08:
	// rlwinm. r11,r21,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1d14
	if (cr0.eq) goto loc_831E1D14;
	// oris r26,r26,4096
	ctx.r26.u64 = ctx.r26.u64 | 268435456;
loc_831E1D14:
	// bl 0x831e75a0
	ctx.lr = 0x831E1D18;
	sub_831E75A0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e1d4c
	if (!cr6.eq) goto loc_831E1D4C;
	// bl 0x831d3088
	ctx.lr = 0x831E1D28;
	sub_831D3088(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E1D38;
	sub_831D3050(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E1D44;
	sub_831D3050(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831e1bd4
	goto loc_831E1BD4;
loc_831E1D4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832d1bd8
	ctx.lr = 0x831E1D74;
	sub_832D1BD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e1e0c
	if (!cr6.eq) goto loc_831E1E0C;
	// rlwinm r11,r25,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bne cr6,0x831e1dc4
	if (!cr6.eq) goto loc_831E1DC4;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1dc4
	if (cr0.eq) goto loc_831E1DC4;
	// clrlwi r25,r25,1
	ctx.r25.u64 = ctx.r25.u32 & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832d1bd8
	ctx.lr = 0x831E1DB8;
	sub_832D1BD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e1e0c
	if (!cr6.eq) goto loc_831E1E0C;
loc_831E1DC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// srawi r9,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bl 0x82417100
	ctx.lr = 0x831E1DFC;
	sub_82417100(ctx, base);
	// bl 0x831d30c0
	ctx.lr = 0x831E1E00;
	sub_831D30C0(ctx, base);
loc_831E1E00:
	// bl 0x831d3050
	ctx.lr = 0x831E1E04;
	sub_831D3050(ctx, base);
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831e2044
	goto loc_831E2044;
loc_831E1E0C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831e7290
	ctx.lr = 0x831E1E18;
	sub_831E7290(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addi r31,r11,23808
	ctx.r31.s64 = ctx.r11.s64 + 23808;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// ori r11,r27,1
	ctx.r11.u64 = ctx.r27.u64 | 1;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// andi. r30,r11,72
	ctx.r30.u64 = ctx.r11.u64 & 72;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi r30,0
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r9,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// bne 0x831e1f18
	if (!cr0.eq) goto loc_831E1F18;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1f18
	if (cr0.eq) goto loc_831E1F18;
	// rlwinm. r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1f18
	if (cr0.eq) goto loc_831E1F18;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x831e2c08
	ctx.lr = 0x831E1E9C;
	sub_831E2C08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e1ec4
	if (!cr6.eq) goto loc_831E1EC4;
	// bl 0x831d3088
	ctx.lr = 0x831E1EAC;
	sub_831D3088(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,131
	cr6.compare<uint32_t>(ctx.r11.u32, 131, xer);
	// beq cr6,0x831e1f18
	if (cr6.eq) goto loc_831E1F18;
loc_831E1EB8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831dc840
	ctx.lr = 0x831E1EC0;
	sub_831DC840(ctx, base);
	// b 0x831e1e00
	goto loc_831E1E00;
loc_831E1EC4:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831e2440
	ctx.lr = 0x831E1ED8;
	sub_831E2440(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e1f00
	if (!cr0.eq) goto loc_831E1F00;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bne cr6,0x831e1f00
	if (!cr6.eq) goto loc_831E1F00;
	// extsw r4,r27
	ctx.r4.s64 = ctx.r27.s32;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831e8a30
	ctx.lr = 0x831E1EF8;
	sub_831E8A30(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e1eb8
	if (cr6.eq) goto loc_831E1EB8;
loc_831E1F00:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831e2c08
	ctx.lr = 0x831E1F10;
	sub_831E2C08(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e1eb8
	if (cr6.eq) goto loc_831E1EB8;
loc_831E1F18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// bne cr6,0x831e1fa4
	if (!cr6.eq) goto loc_831E1FA4;
	// rlwinm. r11,r21,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e1fa4
	if (cr0.eq) goto loc_831E1FA4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_831E1FA4:
	// rlwinm r11,r25,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bne cr6,0x831e2044
	if (!cr6.eq) goto loc_831E2044;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e2044
	if (cr0.eq) goto loc_831E2044;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1a68
	ctx.lr = 0x831E1FC0;
	sub_832D1A68(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r4,r25,1
	ctx.r4.u64 = ctx.r25.u32 & 0x7FFFFFFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832d1bd8
	ctx.lr = 0x831E1FE0;
	sub_832D1BD8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e2028
	if (!cr6.eq) goto loc_831E2028;
	// bl 0x82417100
	ctx.lr = 0x831E1FEC;
	sub_82417100(ctx, base);
	// bl 0x831d30c0
	ctx.lr = 0x831E1FF0;
	sub_831D30C0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831e7318
	ctx.lr = 0x831E2024;
	sub_831E7318(ctx, base);
	// b 0x831e1e00
	goto loc_831E1E00;
loc_831E2028:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_831E2044:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x831e1bd4
	goto loc_831E1BD4;
loc_831E204C:
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
	ctx.lr = 0x831E2064;
	sub_831CF0D8(ctx, base);
}

__attribute__((alias("__imp__sub_831E2064"))) PPC_WEAK_FUNC(sub_831E2064);
PPC_FUNC_IMPL(__imp__sub_831E2064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E2068"))) PPC_WEAK_FUNC(sub_831E2068);
PPC_FUNC_IMPL(__imp__sub_831E2068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10608(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10608);
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
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// addic r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfe. r11,r11,r7
	temp.u8 = (~ctx.r11.u32 + ctx.r7.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x831e20bc
	if (!cr0.eq) goto loc_831E20BC;
loc_831E20A4:
	// bl 0x831d3050
	ctx.lr = 0x831E20A8;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E20B4;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e2134
	goto loc_831E2134;
loc_831E20BC:
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x831e20a4
	if (cr0.eq) goto loc_831E20A4;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x831e20e8
	if (cr6.eq) goto loc_831E20E8;
	// rlwinm r11,r6,0,25,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e20a4
	if (cr0.eq) goto loc_831E20A4;
loc_831E20E8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831e1b48
	ctx.lr = 0x831E210C;
	sub_831E1B48(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831e216c
	ctx.lr = 0x831E211C;
	sub_831E216C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831e2134
	if (cr6.eq) goto loc_831E2134;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831E2134:
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

__attribute__((alias("__imp__sub_831E2070"))) PPC_WEAK_FUNC(sub_831E2070);
PPC_FUNC_IMPL(__imp__sub_831E2070) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// addic r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfe. r11,r11,r7
	temp.u8 = (~ctx.r11.u32 + ctx.r7.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x831e20bc
	if (!cr0.eq) goto loc_831E20BC;
loc_831E20A4:
	// bl 0x831d3050
	ctx.lr = 0x831E20A8;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E20B4;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e2134
	goto loc_831E2134;
loc_831E20BC:
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x831e20a4
	if (cr0.eq) goto loc_831E20A4;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x831e20e8
	if (cr6.eq) goto loc_831E20E8;
	// rlwinm r11,r6,0,25,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e20a4
	if (cr0.eq) goto loc_831E20A4;
loc_831E20E8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831e1b48
	ctx.lr = 0x831E210C;
	sub_831E1B48(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831e216c
	ctx.lr = 0x831E211C;
	sub_831E216C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831e2134
	if (cr6.eq) goto loc_831E2134;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831E2134:
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

__attribute__((alias("__imp__sub_831E214C"))) PPC_WEAK_FUNC(sub_831E214C);
PPC_FUNC_IMPL(__imp__sub_831E214C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x831e2184
	goto loc_831E2184;
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
loc_831E2184:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e21dc
	if (cr6.eq) goto loc_831E21DC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e21d4
	if (cr6.eq) goto loc_831E21D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// srawi r9,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
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
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_831E21D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831e7570
	ctx.lr = 0x831E21DC;
	sub_831E7570(ctx, base);
loc_831E21DC:
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

__attribute__((alias("__imp__sub_831E216C"))) PPC_WEAK_FUNC(sub_831E216C);
PPC_FUNC_IMPL(__imp__sub_831E216C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e21dc
	if (cr6.eq) goto loc_831E21DC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e21d4
	if (cr6.eq) goto loc_831E21D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// srawi r9,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
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
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_831E21D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831e7570
	ctx.lr = 0x831E21DC;
	sub_831E7570(ctx, base);
loc_831E21DC:
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

__attribute__((alias("__imp__sub_831E21F4"))) PPC_WEAK_FUNC(sub_831E21F4);
PPC_FUNC_IMPL(__imp__sub_831E21F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E21F8"))) PPC_WEAK_FUNC(sub_831E21F8);
PPC_FUNC_IMPL(__imp__sub_831E21F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x831e2070
	sub_831E2070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E2218"))) PPC_WEAK_FUNC(sub_831E2218);
PPC_FUNC_IMPL(__imp__sub_831E2218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10632(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10632);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831E2228;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// bl 0x831d9e80
	ctx.lr = 0x831E2244;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lis r29,-31738
	ctx.r29.s64 = -2079981568;
	// lis r24,-31738
	ctx.r24.s64 = -2079981568;
loc_831E2254:
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,24076(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24076);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x831e2368
	if (!cr6.lt) goto loc_831E2368;
	// lwz r27,24072(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e2304
	if (cr6.eq) goto loc_831E2304;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e2294
	if (!cr0.eq) goto loc_831E2294;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e229c
	if (cr0.eq) goto loc_831E229C;
loc_831E2294:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e22f0
	goto loc_831E22F0;
loc_831E229C:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// ble cr6,0x831e22bc
	if (!cr6.gt) goto loc_831E22BC;
	// cmpwi cr6,r28,20
	cr6.compare<int32_t>(ctx.r28.s32, 20, xer);
	// bge cr6,0x831e22bc
	if (!cr6.lt) goto loc_831E22BC;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x831d9d40
	ctx.lr = 0x831E22B4;
	sub_831D9D40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e2368
	if (cr0.eq) goto loc_831E2368;
loc_831E22BC:
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x831cfa58
	ctx.lr = 0x831E22CC;
	sub_831CFA58(ctx, base);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e22f8
	if (cr0.eq) goto loc_831E22F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cfae8
	ctx.lr = 0x831E22EC;
	sub_831CFAE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831E22F0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x831e2254
	goto loc_831E2254;
loc_831E22F8:
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// b 0x831e2368
	goto loc_831E2368;
loc_831E2304:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x831d2bf8
	ctx.lr = 0x831E230C;
	sub_831D2BF8(ctx, base);
	// stwx r3,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e2368
	if (cr0.eq) goto loc_831E2368;
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x831d9c20
	ctx.lr = 0x831E232C;
	sub_831D9C20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// bne 0x831e234c
	if (!cr0.eq) goto loc_831E234C;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x831cf100
	ctx.lr = 0x831E2340;
	sub_831CF100(ctx, base);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// stwx r25,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u32);
	// b 0x831e2368
	goto loc_831E2368;
loc_831E234C:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x83d7554c
	ctx.lr = 0x831E2358;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// lwzx r26,r30,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
loc_831E2368:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831e2394
	if (cr6.eq) goto loc_831E2394;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// stw r25,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r25.u32);
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
loc_831E2394:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831e23ac
	ctx.lr = 0x831E23A0;
	sub_831E23AC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E2220"))) PPC_WEAK_FUNC(sub_831E2220);
PPC_FUNC_IMPL(__imp__sub_831E2220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831E2228;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// bl 0x831d9e80
	ctx.lr = 0x831E2244;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lis r29,-31738
	ctx.r29.s64 = -2079981568;
	// lis r24,-31738
	ctx.r24.s64 = -2079981568;
loc_831E2254:
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,24076(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24076);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x831e2368
	if (!cr6.lt) goto loc_831E2368;
	// lwz r27,24072(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e2304
	if (cr6.eq) goto loc_831E2304;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e2294
	if (!cr0.eq) goto loc_831E2294;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e229c
	if (cr0.eq) goto loc_831E229C;
loc_831E2294:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e22f0
	goto loc_831E22F0;
loc_831E229C:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// ble cr6,0x831e22bc
	if (!cr6.gt) goto loc_831E22BC;
	// cmpwi cr6,r28,20
	cr6.compare<int32_t>(ctx.r28.s32, 20, xer);
	// bge cr6,0x831e22bc
	if (!cr6.lt) goto loc_831E22BC;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x831d9d40
	ctx.lr = 0x831E22B4;
	sub_831D9D40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e2368
	if (cr0.eq) goto loc_831E2368;
loc_831E22BC:
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x831cfa58
	ctx.lr = 0x831E22CC;
	sub_831CFA58(ctx, base);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e22f8
	if (cr0.eq) goto loc_831E22F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cfae8
	ctx.lr = 0x831E22EC;
	sub_831CFAE8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831E22F0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x831e2254
	goto loc_831E2254;
loc_831E22F8:
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// b 0x831e2368
	goto loc_831E2368;
loc_831E2304:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x831d2bf8
	ctx.lr = 0x831E230C;
	sub_831D2BF8(ctx, base);
	// stwx r3,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e2368
	if (cr0.eq) goto loc_831E2368;
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x831d9c20
	ctx.lr = 0x831E232C;
	sub_831D9C20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// bne 0x831e234c
	if (!cr0.eq) goto loc_831E234C;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x831cf100
	ctx.lr = 0x831E2340;
	sub_831CF100(ctx, base);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// stwx r25,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u32);
	// b 0x831e2368
	goto loc_831E2368;
loc_831E234C:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x83d7554c
	ctx.lr = 0x831E2358;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,24072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24072);
	// lwzx r26,r30,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
loc_831E2368:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831e2394
	if (cr6.eq) goto loc_831E2394;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// stw r25,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r25.u32);
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
loc_831E2394:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831e23ac
	ctx.lr = 0x831E23A0;
	sub_831E23AC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E23AC"))) PPC_WEAK_FUNC(sub_831E23AC);
PPC_FUNC_IMPL(__imp__sub_831E23AC) {
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
	ctx.lr = 0x831E23C0;
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

__attribute__((alias("__imp__sub_831E23D0"))) PPC_WEAK_FUNC(sub_831E23D0);
PPC_FUNC_IMPL(__imp__sub_831E23D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// lwz r11,2840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2840);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E23EC"))) PPC_WEAK_FUNC(sub_831E23EC);
PPC_FUNC_IMPL(__imp__sub_831E23EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E23F0"))) PPC_WEAK_FUNC(sub_831E23F0);
PPC_FUNC_IMPL(__imp__sub_831E23F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_831E23F8:
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x831e2410
	if (cr6.lt) goto loc_831E2410;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x831e2410
	if (cr6.gt) goto loc_831E2410;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_831E2410:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x831e2428
	if (cr6.lt) goto loc_831E2428;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// bgt cr6,0x831e2428
	if (cr6.gt) goto loc_831E2428;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_831E2428:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831e2438
	if (cr6.eq) goto loc_831E2438;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x831e23f8
	if (cr6.eq) goto loc_831E23F8;
loc_831E2438:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E2440"))) PPC_WEAK_FUNC(sub_831E2440);
PPC_FUNC_IMPL(__imp__sub_831E2440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x831E2448;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r18,-2
	ctx.r18.s64 = -2;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831e248c
	if (!cr6.eq) goto loc_831E248C;
	// bl 0x831d3088
	ctx.lr = 0x831E246C;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2478;
	sub_831D3050(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_831E247C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e2a50
	goto loc_831E2A50;
loc_831E248C:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// blt cr6,0x831e24a4
	if (cr6.lt) goto loc_831E24A4;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e24c8
	if (cr6.lt) goto loc_831E24C8;
loc_831E24A4:
	// bl 0x831d3088
	ctx.lr = 0x831E24A8;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E24B4;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_831E24B8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E24C0;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e2a50
	goto loc_831E2A50;
loc_831E24C8:
	// srawi r11,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,23808
	ctx.r28.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r21,27
	ctx.r11.u64 = ctx.r21.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831e24a4
	if (cr0.eq) goto loc_831E24A4;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x831e2520
	if (!cr6.gt) goto loc_831E2520;
	// bl 0x831d3088
	ctx.lr = 0x831E250C;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831E2514:
	// bl 0x831d3050
	ctx.lr = 0x831E2518;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x831e24b8
	goto loc_831E24B8;
loc_831E2520:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// beq cr6,0x831e2a4c
	if (cr6.eq) goto loc_831E2A4C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2a4c
	if (!cr0.eq) goto loc_831E2A4C;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// bne cr6,0x831e254c
	if (!cr6.eq) goto loc_831E254C;
loc_831E2540:
	// bl 0x831d3088
	ctx.lr = 0x831E2544;
	sub_831D3088(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// b 0x831e2514
	goto loc_831E2514;
loc_831E254C:
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// srawi r11,r11,25
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// extsb r22,r11
	ctx.r22.s64 = ctx.r11.s8;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// beq cr6,0x831e2584
	if (cr6.eq) goto loc_831E2584;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// bne cr6,0x831e257c
	if (!cr6.eq) goto loc_831E257C;
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e2540
	if (cr0.eq) goto loc_831E2540;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_831E257C:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// b 0x831e25e4
	goto loc_831E25E4;
loc_831E2584:
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e2540
	if (cr0.eq) goto loc_831E2540;
	// rlwinm r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bge cr6,0x831e25a0
	if (!cr6.lt) goto loc_831E25A0;
	// li r31,4
	ctx.r31.s64 = 4;
loc_831E25A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x831E25A8;
	sub_831D2BF8(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne 0x831e25c8
	if (!cr0.eq) goto loc_831E25C8;
	// bl 0x831d3050
	ctx.lr = 0x831E25B4;
	sub_831D3050(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E25C0;
	sub_831D3088(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x831e247c
	goto loc_831E247C;
loc_831E25C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831dc5f0
	ctx.lr = 0x831E25D8;
	sub_831DC5F0(ctx, base);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// std r3,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r3.u64);
loc_831E25E4:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r24,10
	ctx.r24.s64 = 10;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r10,r10,72
	ctx.r10.u64 = ctx.r10.u64 & 72;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e26b4
	if (cr0.eq) goto loc_831E26B4;
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x831e26b4
	if (cr6.eq) goto loc_831E26B4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e26b4
	if (cr6.eq) goto loc_831E26B4;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r4,r23,1
	ctx.r4.s64 = ctx.r23.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r24,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq cr6,0x831e26b4
	if (cr6.eq) goto loc_831E26B4;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,41(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x831e26b4
	if (cr6.eq) goto loc_831E26B4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e26b4
	if (cr6.eq) goto loc_831E26B4;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// stb r24,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// bne cr6,0x831e26b4
	if (!cr6.eq) goto loc_831E26B4;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,42(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x831e26b4
	if (cr6.eq) goto loc_831E26B4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e26b4
	if (cr6.eq) goto loc_831E26B4;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// stb r24,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_831E26B4:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x832d1dd0
	ctx.lr = 0x831E26CC;
	sub_832D1DD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e2a18
	if (cr0.eq) goto loc_831E2A18;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x831e2a18
	if (cr6.lt) goto loc_831E2A18;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x831e2a18
	if (cr6.gt) goto loc_831E2A18;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831e29d4
	if (cr0.eq) goto loc_831E29D4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831e2720
	if (cr6.eq) goto loc_831E2720;
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x831e2720
	if (!cr6.eq) goto loc_831E2720;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x831e272c
	goto loc_831E272C;
loc_831E2720:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_831E272C:
	// add r25,r23,r30
	ctx.r25.u64 = ctx.r23.u64 + ctx.r30.u64;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r25
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, xer);
	// bge cr6,0x831e2894
	if (!cr6.lt) goto loc_831E2894;
	// li r26,13
	ctx.r26.s64 = 13;
loc_831E2748:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// beq cr6,0x831e2868
	if (cr6.eq) goto loc_831E2868;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x831e276c
	if (cr6.eq) goto loc_831E276C;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x831e2858
	goto loc_831E2858;
loc_831E276C:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e27a0
	if (!cr6.lt) goto loc_831E27A0;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x831e2794
	if (!cr6.eq) goto loc_831E2794;
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x831e2858
	goto loc_831E2858;
loc_831E2794:
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x831e2858
	goto loc_831E2858;
loc_831E27A0:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x832d1dd0
	ctx.lr = 0x831E27C0;
	sub_832D1DD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e27d4
	if (!cr0.eq) goto loc_831E27D4;
	// bl 0x82417100
	ctx.lr = 0x831E27CC;
	sub_82417100(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831e2854
	if (!cr0.eq) goto loc_831E2854;
loc_831E27D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e2854
	if (cr6.eq) goto loc_831E2854;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r11,r11,72
	ctx.r11.u64 = ctx.r11.u64 & 72;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e2824
	if (cr0.eq) goto loc_831E2824;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x831e280c
	if (!cr6.eq) goto loc_831E280C;
loc_831E2804:
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// b 0x831e2858
	goto loc_831E2858;
loc_831E280C:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// b 0x831e2858
	goto loc_831E2858;
loc_831E2824:
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// bne cr6,0x831e2838
	if (!cr6.eq) goto loc_831E2838;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x831e2804
	if (cr6.eq) goto loc_831E2804;
loc_831E2838:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831dc5f0
	ctx.lr = 0x831E2848;
	sub_831DC5F0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x831e285c
	if (cr6.eq) goto loc_831E285C;
loc_831E2854:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
loc_831E2858:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831E285C:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// blt cr6,0x831e2748
	if (cr6.lt) goto loc_831E2748;
	// b 0x831e2894
	goto loc_831E2894;
loc_831E2868:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831e288c
	if (!cr0.eq) goto loc_831E288C;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x831e2894
	goto loc_831E2894;
loc_831E288C:
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831E2894:
	// subf r30,r23,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r23.s64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// bne cr6,0x831e29d4
	if (!cr6.eq) goto loc_831E29D4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831e29d4
	if (cr6.eq) goto loc_831E29D4;
	// lbzu r7,-1(r31)
	ea = -1 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm. r11,r7,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// bne 0x831e28c0
	if (!cr0.eq) goto loc_831E28C0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x831e299c
	goto loc_831E299C;
loc_831E28C0:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,3584
	ctx.r9.s64 = ctx.r11.s64 + 3584;
	// lbzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// b 0x831e28f4
	goto loc_831E28F4;
loc_831E28D4:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bgt cr6,0x831e28fc
	if (cr6.gt) goto loc_831E28FC;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// blt cr6,0x831e28fc
	if (cr6.lt) goto loc_831E28FC;
	// lbzu r7,-1(r31)
	ea = -1 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
loc_831E28F4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e28d4
	if (cr0.eq) goto loc_831E28D4;
loc_831E28FC:
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2914
	if (!cr0.eq) goto loc_831E2914;
	// bl 0x831d3050
	ctx.lr = 0x831E2908;
	sub_831D3050(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
loc_831E290C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831e29d0
	goto loc_831E29D0;
loc_831E2914:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831e2928
	if (!cr6.eq) goto loc_831E2928;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// b 0x831e299c
	goto loc_831E299C;
loc_831E2928:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r9,r9,72
	ctx.r9.u64 = ctx.r9.u64 & 72;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831e2988
	if (cr0.eq) goto loc_831E2988;
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x831e2964
	if (cr6.lt) goto loc_831E2964;
	// lwzx r9,r27,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stb r8,41(r9)
	PPC_STORE_U8(ctx.r9.u32 + 41, ctx.r8.u8);
loc_831E2964:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x831e2980
	if (!cr6.eq) goto loc_831E2980;
	// lwzx r9,r27,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stb r8,42(r9)
	PPC_STORE_U8(ctx.r9.u32 + 42, ctx.r8.u8);
loc_831E2980:
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x831e299c
	goto loc_831E299C;
loc_831E2988:
	// neg r11,r10
	ctx.r11.s64 = -ctx.r10.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831dc5f0
	ctx.lr = 0x831E299C;
	sub_831DC5F0(ctx, base);
loc_831E299C:
	// subf r31,r23,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r23.s64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r20,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x832d2e80
	ctx.lr = 0x831E29C0;
	sub_832D2E80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x831e29f8
	if (!cr0.eq) goto loc_831E29F8;
	// bl 0x82417100
	ctx.lr = 0x831E29CC;
	sub_82417100(ctx, base);
loc_831E29CC:
	// bl 0x831d30c0
	ctx.lr = 0x831E29D0;
	sub_831D30C0(ctx, base);
loc_831E29D0:
	// li r18,-1
	ctx.r18.s64 = -1;
loc_831E29D4:
	// cmplw cr6,r23,r19
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, xer);
	// beq cr6,0x831e29e4
	if (cr6.eq) goto loc_831E29E4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831cf100
	ctx.lr = 0x831E29E4;
	sub_831CF100(ctx, base);
loc_831E29E4:
	// cmpwi cr6,r18,-2
	cr6.compare<int32_t>(ctx.r18.s32, -2, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x831e2a50
	if (cr6.eq) goto loc_831E2A50;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// b 0x831e2a50
	goto loc_831E2A50;
loc_831E29F8:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x831e29d4
	goto loc_831E29D4;
loc_831E2A18:
	// bl 0x82417100
	ctx.lr = 0x831E2A1C;
	sub_82417100(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bne cr6,0x831e2a3c
	if (!cr6.eq) goto loc_831E2A3C;
	// bl 0x831d3050
	ctx.lr = 0x831E2A28;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E2A34;
	sub_831D3088(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831e290c
	goto loc_831E290C;
loc_831E2A3C:
	// cmplwi cr6,r3,109
	cr6.compare<uint32_t>(ctx.r3.u32, 109, xer);
	// bne cr6,0x831e29cc
	if (!cr6.eq) goto loc_831E29CC;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// b 0x831e29d4
	goto loc_831E29D4;
loc_831E2A4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E2A50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E2A58"))) PPC_WEAK_FUNC(sub_831E2A58);
PPC_FUNC_IMPL(__imp__sub_831E2A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10656(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10656);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831E2A68;
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
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831e2aac
	if (!cr6.eq) goto loc_831E2AAC;
	// bl 0x831d3088
	ctx.lr = 0x831E2A8C;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2A98;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e2ba8
	goto loc_831E2BA8;
loc_831E2AAC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831e2ac4
	if (cr6.lt) goto loc_831E2AC4;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e2ae8
	if (cr6.lt) goto loc_831E2AE8;
loc_831E2AC4:
	// bl 0x831d3088
	ctx.lr = 0x831E2AC8;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2AD4;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_831E2AD8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E2AE0;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e2ba8
	goto loc_831E2BA8;
loc_831E2AE8:
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
	// beq 0x831e2ac4
	if (cr0.eq) goto loc_831E2AC4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r25,r11
	xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfze. r11,r26
	temp.u8 = ~ctx.r26.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r26.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2b44
	if (!cr0.eq) goto loc_831E2B44;
	// bl 0x831d3088
	ctx.lr = 0x831E2B30;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2B3C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x831e2ad8
	goto loc_831E2AD8;
loc_831E2B44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831E2B4C;
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
	// beq 0x831e2b7c
	if (cr0.eq) goto loc_831E2B7C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e2440
	ctx.lr = 0x831E2B74;
	sub_831E2440(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x831e2b98
	goto loc_831E2B98;
loc_831E2B7C:
	// bl 0x831d3050
	ctx.lr = 0x831E2B80;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E2B8C;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_831E2B98:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831e2bd0
	ctx.lr = 0x831E2BA4;
	sub_831E2BD0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831E2BA8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E2A60"))) PPC_WEAK_FUNC(sub_831E2A60);
PPC_FUNC_IMPL(__imp__sub_831E2A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831E2A68;
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
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831e2aac
	if (!cr6.eq) goto loc_831E2AAC;
	// bl 0x831d3088
	ctx.lr = 0x831E2A8C;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2A98;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e2ba8
	goto loc_831E2BA8;
loc_831E2AAC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831e2ac4
	if (cr6.lt) goto loc_831E2AC4;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e2ae8
	if (cr6.lt) goto loc_831E2AE8;
loc_831E2AC4:
	// bl 0x831d3088
	ctx.lr = 0x831E2AC8;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2AD4;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_831E2AD8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E2AE0;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e2ba8
	goto loc_831E2BA8;
loc_831E2AE8:
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
	// beq 0x831e2ac4
	if (cr0.eq) goto loc_831E2AC4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r25,r11
	xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfze. r11,r26
	temp.u8 = ~ctx.r26.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r26.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2b44
	if (!cr0.eq) goto loc_831E2B44;
	// bl 0x831d3088
	ctx.lr = 0x831E2B30;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2B3C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x831e2ad8
	goto loc_831E2AD8;
loc_831E2B44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831E2B4C;
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
	// beq 0x831e2b7c
	if (cr0.eq) goto loc_831E2B7C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e2440
	ctx.lr = 0x831E2B74;
	sub_831E2440(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x831e2b98
	goto loc_831E2B98;
loc_831E2B7C:
	// bl 0x831d3050
	ctx.lr = 0x831E2B80;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E2B8C;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_831E2B98:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831e2bd0
	ctx.lr = 0x831E2BA4;
	sub_831E2BD0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831E2BA8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E2BB0"))) PPC_WEAK_FUNC(sub_831E2BB0);
PPC_FUNC_IMPL(__imp__sub_831E2BB0) {
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
	// b 0x831e2be8
	goto loc_831E2BE8;
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
loc_831E2BE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7570
	ctx.lr = 0x831E2BF0;
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

__attribute__((alias("__imp__sub_831E2BD0"))) PPC_WEAK_FUNC(sub_831E2BD0);
PPC_FUNC_IMPL(__imp__sub_831E2BD0) {
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
	ctx.lr = 0x831E2BF0;
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

__attribute__((alias("__imp__sub_831E2C08"))) PPC_WEAK_FUNC(sub_831E2C08);
PPC_FUNC_IMPL(__imp__sub_831E2C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E2C10;
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
	// bl 0x831e73b0
	ctx.lr = 0x831E2C24;
	sub_831E73B0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e2c44
	if (!cr6.eq) goto loc_831E2C44;
	// bl 0x831d3050
	ctx.lr = 0x831E2C30;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e2cb8
	goto loc_831E2CB8;
loc_831E2C44:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832d4860
	ctx.lr = 0x831E2C54;
	sub_832D4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e2c68
	if (!cr6.eq) goto loc_831E2C68;
	// bl 0x82417100
	ctx.lr = 0x831E2C64;
	sub_82417100(ctx, base);
	// b 0x831e2c6c
	goto loc_831E2C6C;
loc_831E2C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E2C6C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e2c80
	if (cr6.eq) goto loc_831E2C80;
	// bl 0x831d30c0
	ctx.lr = 0x831E2C78;
	sub_831D30C0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e2cb8
	goto loc_831E2CB8;
loc_831E2C80:
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
loc_831E2CB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E2CC0"))) PPC_WEAK_FUNC(sub_831E2CC0);
PPC_FUNC_IMPL(__imp__sub_831E2CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10680(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10680);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831E2CD0;
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
	// bne cr6,0x831e2d14
	if (!cr6.eq) goto loc_831E2D14;
	// bl 0x831d3088
	ctx.lr = 0x831E2CF4;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2D00;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e2de4
	goto loc_831E2DE4;
loc_831E2D14:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831e2d2c
	if (cr6.lt) goto loc_831E2D2C;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e2d50
	if (cr6.lt) goto loc_831E2D50;
loc_831E2D2C:
	// bl 0x831d3088
	ctx.lr = 0x831E2D30;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2D3C;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E2D48;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e2de4
	goto loc_831E2DE4;
loc_831E2D50:
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
	// beq 0x831e2d2c
	if (cr0.eq) goto loc_831E2D2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831E2D84;
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
	// beq 0x831e2db4
	if (cr0.eq) goto loc_831E2DB4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e2c08
	ctx.lr = 0x831E2DAC;
	sub_831E2C08(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x831e2dd4
	goto loc_831E2DD4;
loc_831E2DB4:
	// bl 0x831d3050
	ctx.lr = 0x831E2DB8;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E2DC4;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_831E2DD4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831e2e0c
	ctx.lr = 0x831E2DE0;
	sub_831E2E0C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831E2DE4:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E2CC8"))) PPC_WEAK_FUNC(sub_831E2CC8);
PPC_FUNC_IMPL(__imp__sub_831E2CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831E2CD0;
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
	// bne cr6,0x831e2d14
	if (!cr6.eq) goto loc_831E2D14;
	// bl 0x831d3088
	ctx.lr = 0x831E2CF4;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2D00;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e2de4
	goto loc_831E2DE4;
loc_831E2D14:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831e2d2c
	if (cr6.lt) goto loc_831E2D2C;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e2d50
	if (cr6.lt) goto loc_831E2D50;
loc_831E2D2C:
	// bl 0x831d3088
	ctx.lr = 0x831E2D30;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E2D3C;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E2D48;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e2de4
	goto loc_831E2DE4;
loc_831E2D50:
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
	// beq 0x831e2d2c
	if (cr0.eq) goto loc_831E2D2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7470
	ctx.lr = 0x831E2D84;
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
	// beq 0x831e2db4
	if (cr0.eq) goto loc_831E2DB4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e2c08
	ctx.lr = 0x831E2DAC;
	sub_831E2C08(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x831e2dd4
	goto loc_831E2DD4;
loc_831E2DB4:
	// bl 0x831d3050
	ctx.lr = 0x831E2DB8;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E2DC4;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_831E2DD4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831e2e0c
	ctx.lr = 0x831E2DE0;
	sub_831E2E0C(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831E2DE4:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E2DEC"))) PPC_WEAK_FUNC(sub_831E2DEC);
PPC_FUNC_IMPL(__imp__sub_831E2DEC) {
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
	// b 0x831e2e24
	goto loc_831E2E24;
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
loc_831E2E24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e7570
	ctx.lr = 0x831E2E2C;
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

__attribute__((alias("__imp__sub_831E2E0C"))) PPC_WEAK_FUNC(sub_831E2E0C);
PPC_FUNC_IMPL(__imp__sub_831E2E0C) {
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
	ctx.lr = 0x831E2E2C;
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

__attribute__((alias("__imp__sub_831E2E44"))) PPC_WEAK_FUNC(sub_831E2E44);
PPC_FUNC_IMPL(__imp__sub_831E2E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E2E48"))) PPC_WEAK_FUNC(sub_831E2E48);
PPC_FUNC_IMPL(__imp__sub_831E2E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E2E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,3340(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3340);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x831e2e88
	if (!cr6.eq) goto loc_831E2E88;
loc_831E2E78:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x831e2e78
	if (cr6.eq) goto loc_831E2E78;
loc_831E2E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// beq cr6,0x831e2ed0
	if (cr6.eq) goto loc_831E2ED0;
	// cmplwi cr6,r11,114
	cr6.compare<uint32_t>(ctx.r11.u32, 114, xer);
	// beq cr6,0x831e2ec4
	if (cr6.eq) goto loc_831E2EC4;
	// cmplwi cr6,r11,119
	cr6.compare<uint32_t>(ctx.r11.u32, 119, xer);
	// beq cr6,0x831e2ebc
	if (cr6.eq) goto loc_831E2EBC;
loc_831E2EA4:
	// bl 0x831d3050
	ctx.lr = 0x831E2EA8;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E2EB4;
	sub_831CF000(ctx, base);
loc_831E2EB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831e3080
	goto loc_831E3080;
loc_831E2EBC:
	// li r9,769
	ctx.r9.s64 = 769;
	// b 0x831e2ed4
	goto loc_831E2ED4;
loc_831E2EC4:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// ori r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 | 1;
	// b 0x831e2ed8
	goto loc_831E2ED8;
loc_831E2ED0:
	// li r9,265
	ctx.r9.s64 = 265;
loc_831E2ED4:
	// ori r31,r10,2
	ctx.r31.u64 = ctx.r10.u64 | 2;
loc_831E2ED8:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2EE0:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x831e3020
	if (cr6.eq) goto loc_831E3020;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(ctx.r11.u32, 83, xer);
	// bgt cr6,0x831e2f84
	if (cr6.gt) goto loc_831E2F84;
	// beq cr6,0x831e2f70
	if (cr6.eq) goto loc_831E2F70;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x831e3008
	if (cr6.eq) goto loc_831E3008;
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// beq cr6,0x831e2f54
	if (cr6.eq) goto loc_831E2F54;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x831e2ffc
	if (cr6.eq) goto loc_831E2FFC;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// beq cr6,0x831e2f44
	if (cr6.eq) goto loc_831E2F44;
	// cmplwi cr6,r11,78
	cr6.compare<uint32_t>(ctx.r11.u32, 78, xer);
	// beq cr6,0x831e2f3c
	if (cr6.eq) goto loc_831E2F3C;
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, xer);
	// bne cr6,0x831e2ea4
	if (!cr6.eq) goto loc_831E2EA4;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x831e2ffc
	if (!cr6.eq) goto loc_831E2FFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2F3C:
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2F44:
	// rlwinm. r11,r9,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2ffc
	if (!cr0.eq) goto loc_831E2FFC;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2F54:
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2ffc
	if (!cr0.eq) goto loc_831E2FFC;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// ori r31,r10,128
	ctx.r31.u64 = ctx.r10.u64 | 128;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2F70:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x831e2ffc
	if (!cr6.eq) goto loc_831E2FFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2F84:
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(ctx.r11.u32, 84, xer);
	// beq cr6,0x831e2ff4
	if (cr6.eq) goto loc_831E2FF4;
	// cmplwi cr6,r11,98
	cr6.compare<uint32_t>(ctx.r11.u32, 98, xer);
	// beq cr6,0x831e2fe4
	if (cr6.eq) goto loc_831E2FE4;
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, xer);
	// beq cr6,0x831e2fd0
	if (cr6.eq) goto loc_831E2FD0;
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(ctx.r11.u32, 110, xer);
	// beq cr6,0x831e2fbc
	if (cr6.eq) goto loc_831E2FBC;
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(ctx.r11.u32, 116, xer);
	// bne cr6,0x831e2ea4
	if (!cr6.eq) goto loc_831E2EA4;
	// rlwinm. r11,r9,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2ffc
	if (!cr0.eq) goto loc_831E2FFC;
	// ori r9,r9,16384
	ctx.r9.u64 = ctx.r9.u64 | 16384;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2FBC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x831e2ffc
	if (!cr6.eq) goto loc_831E2FFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r31,r31,0,18,16
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2FD0:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x831e2ffc
	if (!cr6.eq) goto loc_831E2FFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r31,r31,16384
	ctx.r31.u64 = ctx.r31.u64 | 16384;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2FE4:
	// rlwinm. r11,r9,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2ffc
	if (!cr0.eq) goto loc_831E2FFC;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E2FF4:
	// rlwinm. r11,r9,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e3004
	if (cr0.eq) goto loc_831E3004;
loc_831E2FFC:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// b 0x831e3008
	goto loc_831E3008;
loc_831E3004:
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
loc_831E3008:
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e2ee0
	if (!cr0.eq) goto loc_831E2EE0;
	// b 0x831e3020
	goto loc_831E3020;
loc_831E3018:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_831E3020:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// beq cr6,0x831e3018
	if (cr6.eq) goto loc_831E3018;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e2ea4
	if (!cr6.eq) goto loc_831E2EA4;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831e21f8
	ctx.lr = 0x831E3048;
	sub_831E21F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e2eb4
	if (!cr0.eq) goto loc_831E2EB4;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2648);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2648, ctx.r11.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
loc_831E3080:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E3088"))) PPC_WEAK_FUNC(sub_831E3088);
PPC_FUNC_IMPL(__imp__sub_831E3088) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E308C"))) PPC_WEAK_FUNC(sub_831E308C);
PPC_FUNC_IMPL(__imp__sub_831E308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E3090"))) PPC_WEAK_FUNC(sub_831E3090);
PPC_FUNC_IMPL(__imp__sub_831E3090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83d7569c
	ctx.lr = 0x831E30A8;
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E30B8"))) PPC_WEAK_FUNC(sub_831E30B8);
PPC_FUNC_IMPL(__imp__sub_831E30B8) {
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
	ctx.lr = 0x831E30C0;
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
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
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
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// bne cr6,0x831e3110
	if (!cr6.eq) goto loc_831E3110;
loc_831E30F8:
	// bl 0x831d3050
	ctx.lr = 0x831E30FC;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E3108;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e3bf8
	goto loc_831E3BF8;
loc_831E3110:
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e31ac
	if (!cr0.eq) goto loc_831E31AC;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x831db880
	ctx.lr = 0x831E3124;
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
	// beq cr6,0x831e3160
	if (cr6.eq) goto loc_831E3160;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831e3160
	if (cr6.eq) goto loc_831E3160;
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
	// b 0x831e3164
	goto loc_831E3164;
loc_831E3160:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831E3164:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e30f8
	if (!cr0.eq) goto loc_831E30F8;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e319c
	if (cr6.eq) goto loc_831E319C;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831e319c
	if (cr6.eq) goto loc_831E319C;
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
	// b 0x831e31a0
	goto loc_831E31A0;
loc_831E319C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831E31A0:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e30f8
	if (!cr0.eq) goto loc_831E30F8;
loc_831E31AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e30f8
	if (cr6.eq) goto loc_831E30F8;
	// bl 0x831cf870
	ctx.lr = 0x831E31B8;
	sub_831CF870(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e3bc4
	if (cr6.eq) goto loc_831E3BC4;
	// bl 0x831cf870
	ctx.lr = 0x831E31C8;
	sub_831CF870(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e3bc4
	if (cr6.eq) goto loc_831E3BC4;
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// extsb. r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// beq 0x831e3bbc
	if (cr0.eq) goto loc_831E3BBC;
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
	// addi r17,r9,7936
	ctx.r17.s64 = ctx.r9.s64 + 7936;
loc_831E3224:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x831e3ba8
	if (cr6.lt) goto loc_831E3BA8;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// blt cr6,0x831e3250
	if (cr6.lt) goto loc_831E3250;
	// cmpwi cr6,r8,120
	cr6.compare<int32_t>(ctx.r8.s32, 120, xer);
	// bgt cr6,0x831e3250
	if (cr6.gt) goto loc_831E3250;
	// add r11,r8,r17
	ctx.r11.u64 = ctx.r8.u64 + ctx.r17.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x831e3254
	goto loc_831E3254;
loc_831E3250:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831E3254:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 * 9;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r17
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x831e30f8
	if (cr6.eq) goto loc_831E30F8;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x831e3b90
	if (cr6.gt) goto loc_831E3B90;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e3474
	if (cr6.eq) goto loc_831E3474;
	// bdz 0x831e32a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E32A8;
	// bdz 0x831e32c8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E32C8;
	// bdz 0x831e3318
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E3318;
	// bdz 0x831e3364
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E3364;
	// bdz 0x831e336c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E336C;
	// bdz 0x831e33a4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E33A4;
	// b 0x831e34c0
	goto loc_831E34C0;
loc_831E32A8:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E32C8:
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x831e3310
	if (cr6.eq) goto loc_831E3310;
	// cmpwi cr6,r8,35
	cr6.compare<int32_t>(ctx.r8.s32, 35, xer);
	// beq cr6,0x831e3308
	if (cr6.eq) goto loc_831E3308;
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// beq cr6,0x831e3300
	if (cr6.eq) goto loc_831E3300;
	// cmpwi cr6,r8,45
	cr6.compare<int32_t>(ctx.r8.s32, 45, xer);
	// beq cr6,0x831e32f8
	if (cr6.eq) goto loc_831E32F8;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// bne cr6,0x831e3b90
	if (!cr6.eq) goto loc_831E3B90;
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E32F8:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E3300:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E3308:
	// ori r27,r27,128
	ctx.r27.u64 = ctx.r27.u64 | 128;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E3310:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E3318:
	// cmpwi cr6,r8,42
	cr6.compare<int32_t>(ctx.r8.s32, 42, xer);
	// bne cr6,0x831e334c
	if (!cr6.eq) goto loc_831E334C;
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
	// bge cr6,0x831e3b90
	if (!cr6.lt) goto loc_831E3B90;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x831e335c
	goto loc_831E335C;
loc_831E334C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_831E335C:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E3364:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E336C:
	// cmpwi cr6,r8,42
	cr6.compare<int32_t>(ctx.r8.s32, 42, xer);
	// bne cr6,0x831e3394
	if (!cr6.eq) goto loc_831E3394;
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
	// bge cr6,0x831e3b90
	if (!cr6.lt) goto loc_831E3B90;
	// li r25,-1
	ctx.r25.s64 = -1;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E3394:
	// mulli r11,r25,10
	ctx.r11.s64 = ctx.r25.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	ctx.r25.s64 = ctx.r11.s64 + -48;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E33A4:
	// cmpwi cr6,r8,73
	cr6.compare<int32_t>(ctx.r8.s32, 73, xer);
	// beq cr6,0x831e33f4
	if (cr6.eq) goto loc_831E33F4;
	// cmpwi cr6,r8,104
	cr6.compare<int32_t>(ctx.r8.s32, 104, xer);
	// beq cr6,0x831e33ec
	if (cr6.eq) goto loc_831E33EC;
	// cmpwi cr6,r8,108
	cr6.compare<int32_t>(ctx.r8.s32, 108, xer);
	// beq cr6,0x831e33cc
	if (cr6.eq) goto loc_831E33CC;
	// cmpwi cr6,r8,119
	cr6.compare<int32_t>(ctx.r8.s32, 119, xer);
	// bne cr6,0x831e3b90
	if (!cr6.eq) goto loc_831E3B90;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E33CC:
	// lbz r11,1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// bne cr6,0x831e33e4
	if (!cr6.eq) goto loc_831E33E4;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// ori r27,r27,4096
	ctx.r27.u64 = ctx.r27.u64 | 4096;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E33E4:
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E33EC:
	// ori r27,r27,32
	ctx.r27.u64 = ctx.r27.u64 | 32;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E33F4:
	// lbz r11,1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(ctx.r11.s32, 54, xer);
	// bne cr6,0x831e341c
	if (!cr6.eq) goto loc_831E341C;
	// lbz r10,2(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x831e341c
	if (!cr6.eq) goto loc_831E341C;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// ori r27,r27,32768
	ctx.r27.u64 = ctx.r27.u64 | 32768;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E341C:
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// bne cr6,0x831e343c
	if (!cr6.eq) goto loc_831E343C;
	// lbz r10,2(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x831e343c
	if (!cr6.eq) goto loc_831E343C;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E343C:
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// beq cr6,0x831e3b90
	if (cr6.eq) goto loc_831E3B90;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(ctx.r11.s32, 105, xer);
	// beq cr6,0x831e3b90
	if (cr6.eq) goto loc_831E3B90;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(ctx.r11.s32, 111, xer);
	// beq cr6,0x831e3b90
	if (cr6.eq) goto loc_831E3B90;
	// cmpwi cr6,r11,117
	cr6.compare<int32_t>(ctx.r11.s32, 117, xer);
	// beq cr6,0x831e3b90
	if (cr6.eq) goto loc_831E3B90;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x831e3b90
	if (cr6.eq) goto loc_831E3B90;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x831e3b90
	if (cr6.eq) goto loc_831E3B90;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_831E3474:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// li r16,0
	ctx.r16.s64 = 0;
	// bl 0x831e23d0
	ctx.lr = 0x831E3484;
	sub_831E23D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e34a8
	if (cr0.eq) goto loc_831E34A8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dca88
	ctx.lr = 0x831E349C;
	sub_831DCA88(ctx, base);
	// lbzu r29,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// cmplwi r29,0
	cr0.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq 0x831e30f8
	if (cr0.eq) goto loc_831E30F8;
loc_831E34A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dca88
	ctx.lr = 0x831E34B8;
	sub_831DCA88(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x831e3b90
	goto loc_831E3B90;
loc_831E34C0:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bgt cr6,0x831e39c0
	if (cr6.gt) goto loc_831E39C0;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,8032
	ctx.r12.s64 = ctx.r12.s64 + 8032;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31970
	ctx.r12.s64 = -2095185920;
	// addi r12,r12,13556
	ctx.r12.s64 = ctx.r12.s64 + 13556;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831E36D0;
	case 1:
		goto loc_831E39C0;
	case 2:
		goto loc_831E34F4;
	case 3:
		goto loc_831E39C0;
	case 4:
		goto loc_831E36D0;
	case 5:
		goto loc_831E39C0;
	case 6:
		goto loc_831E36D0;
	case 7:
		goto loc_831E39C0;
	case 8:
		goto loc_831E39C0;
	case 9:
		goto loc_831E39C0;
	case 10:
		goto loc_831E39C0;
	case 11:
		goto loc_831E39C0;
	case 12:
		goto loc_831E39C0;
	case 13:
		goto loc_831E39C0;
	case 14:
		goto loc_831E39C0;
	case 15:
		goto loc_831E39C0;
	case 16:
		goto loc_831E39C0;
	case 17:
		goto loc_831E39C0;
	case 18:
		goto loc_831E35DC;
	case 19:
		goto loc_831E39C0;
	case 20:
		goto loc_831E39C0;
	case 21:
		goto loc_831E39C0;
	case 22:
		goto loc_831E39C0;
	case 23:
		goto loc_831E3810;
	case 24:
		goto loc_831E39C0;
	case 25:
		goto loc_831E3560;
	case 26:
		goto loc_831E39C0;
	case 27:
		goto loc_831E39C0;
	case 28:
		goto loc_831E39C0;
	case 29:
		goto loc_831E39C0;
	case 30:
		goto loc_831E39C0;
	case 31:
		goto loc_831E39C0;
	case 32:
		goto loc_831E36DC;
	case 33:
		goto loc_831E39C0;
	case 34:
		goto loc_831E3504;
	case 35:
		goto loc_831E3800;
	case 36:
		goto loc_831E36DC;
	case 37:
		goto loc_831E36DC;
	case 38:
		goto loc_831E36DC;
	case 39:
		goto loc_831E39C0;
	case 40:
		goto loc_831E3800;
	case 41:
		goto loc_831E39C0;
	case 42:
		goto loc_831E39C0;
	case 43:
		goto loc_831E39C0;
	case 44:
		goto loc_831E39C0;
	case 45:
		goto loc_831E3694;
	case 46:
		goto loc_831E3848;
	case 47:
		goto loc_831E380C;
	case 48:
		goto loc_831E39C0;
	case 49:
		goto loc_831E39C0;
	case 50:
		goto loc_831E35EC;
	case 51:
		goto loc_831E39C0;
	case 52:
		goto loc_831E3804;
	case 53:
		goto loc_831E39C0;
	case 54:
		goto loc_831E39C0;
	case 55:
		goto loc_831E3818;
	default:
		return;
	}
loc_831E34F4:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e3504
	if (!cr0.eq) goto loc_831E3504;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_831E3504:
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
	// beq 0x831e3544
	if (cr0.eq) goto loc_831E3544;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831d8898
	ctx.lr = 0x831E3530;
	sub_831D8898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e3554
	if (cr0.eq) goto loc_831E3554;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x831e3554
	goto loc_831E3554;
loc_831E3544:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_831E3554:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// b 0x831e39c0
	goto loc_831E39C0;
loc_831E3560:
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
	// beq cr6,0x831e35b0
	if (cr6.eq) goto loc_831E35B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e35b0
	if (cr6.eq) goto loc_831E35B0;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq 0x831e35a4
	if (cr0.eq) goto loc_831E35A4;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,1
	ctx.r16.s64 = 1;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// b 0x831e39bc
	goto loc_831E39BC;
loc_831E35A4:
	// lha r7,0(r11)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x831e39bc
	goto loc_831E39BC;
loc_831E35B0:
	// lwz r28,5656(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 5656);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_831E35BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e35bc
	if (!cr6.eq) goto loc_831E35BC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_831E35D0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x831e39bc
	goto loc_831E39BC;
loc_831E35DC:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e35ec
	if (!cr0.eq) goto loc_831E35EC;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_831E35EC:
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(ctx.r25.s32, -1, xer);
	// bne cr6,0x831e3600
	if (!cr6.eq) goto loc_831E3600;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x831e3604
	goto loc_831E3604;
loc_831E3600:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_831E3604:
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
	// beq 0x831e3660
	if (cr0.eq) goto loc_831E3660;
	// bne cr6,0x831e362c
	if (!cr6.eq) goto loc_831E362C;
	// lwz r28,5660(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5660);
loc_831E362C:
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x831e364c
	goto loc_831E364C;
loc_831E3638:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x831e3654
	if (cr0.eq) goto loc_831E3654;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_831E364C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831e3638
	if (!cr6.eq) goto loc_831E3638;
loc_831E3654:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r7,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// b 0x831e39bc
	goto loc_831E39BC;
loc_831E3660:
	// bne cr6,0x831e3668
	if (!cr6.eq) goto loc_831E3668;
	// lwz r28,5656(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 5656);
loc_831E3668:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x831e3684
	goto loc_831E3684;
loc_831E3670:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x831e368c
	if (cr0.eq) goto loc_831E368C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831E3684:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831e3670
	if (!cr6.eq) goto loc_831E3670;
loc_831E368C:
	// subf r7,r28,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x831e39bc
	goto loc_831E39BC;
loc_831E3694:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x831e7a18
	ctx.lr = 0x831E36A8;
	sub_831E7A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e30f8
	if (cr0.eq) goto loc_831E30F8;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e36c0
	if (cr0.eq) goto loc_831E36C0;
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// b 0x831e36c4
	goto loc_831E36C4;
loc_831E36C0:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_831E36C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x831e3b7c
	goto loc_831E3B7C;
loc_831E36D0:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r21,1
	ctx.r21.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831E36DC:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x831e36f8
	if (!cr6.lt) goto loc_831E36F8;
	// li r25,6
	ctx.r25.s64 = 6;
	// b 0x831e3748
	goto loc_831E3748;
loc_831E36F8:
	// bne cr6,0x831e3710
	if (!cr6.eq) goto loc_831E3710;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// bne cr6,0x831e3748
	if (!cr6.eq) goto loc_831E3748;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x831e3748
	goto loc_831E3748;
loc_831E3710:
	// cmpwi cr6,r25,512
	cr6.compare<int32_t>(ctx.r25.s32, 512, xer);
	// ble cr6,0x831e371c
	if (!cr6.gt) goto loc_831E371C;
	// li r25,512
	ctx.r25.s64 = 512;
loc_831E371C:
	// cmpwi cr6,r25,163
	cr6.compare<int32_t>(ctx.r25.s32, 163, xer);
	// ble cr6,0x831e3748
	if (!cr6.gt) goto loc_831E3748;
	// addi r31,r25,349
	ctx.r31.s64 = ctx.r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x831E3730;
	sub_831D2BF8(ctx, base);
	// mr. r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r14.s32, 0, xer);
	// beq 0x831e3744
	if (cr0.eq) goto loc_831E3744;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x831e3748
	goto loc_831E3748;
loc_831E3744:
	// li r25,163
	ctx.r25.s64 = 163;
loc_831E3748:
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
	ctx.lr = 0x831E3788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r30,r27,0,24,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x831e37ac
	if (cr0.eq) goto loc_831E37AC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x831e37ac
	if (!cr6.eq) goto loc_831E37AC;
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E37AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831E37AC:
	// cmpwi cr6,r31,103
	cr6.compare<int32_t>(ctx.r31.s32, 103, xer);
	// bne cr6,0x831e37d0
	if (!cr6.eq) goto loc_831E37D0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831e37d0
	if (!cr6.eq) goto loc_831E37D0;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E37D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831E37D0:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x831e37e4
	if (!cr6.eq) goto loc_831E37E4;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_831E37E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831E37E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e37e8
	if (!cr6.eq) goto loc_831E37E8;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x831e35d0
	goto loc_831E35D0;
loc_831E3800:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
loc_831E3804:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x831e3858
	goto loc_831E3858;
loc_831E380C:
	// li r25,8
	ctx.r25.s64 = 8;
loc_831E3810:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x831e381c
	goto loc_831E381C;
loc_831E3818:
	// li r11,39
	ctx.r11.s64 = 39;
loc_831E381C:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x831e3858
	if (cr0.eq) goto loc_831E3858;
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
	// b 0x831e3858
	goto loc_831E3858;
loc_831E3848:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x831e3858
	if (cr0.eq) goto loc_831E3858;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_831E3858:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e3868
	if (!cr0.eq) goto loc_831E3868;
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e387c
	if (cr0.eq) goto loc_831E387C;
loc_831E3868:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x831e38cc
	goto loc_831E38CC;
loc_831E387C:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e38ac
	if (cr0.eq) goto loc_831E38AC;
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
	// beq 0x831e38a4
	if (cr0.eq) goto loc_831E38A4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x831e38cc
	goto loc_831E38CC;
loc_831E38A4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x831e38cc
	goto loc_831E38CC;
loc_831E38AC:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// beq 0x831e38c8
	if (cr0.eq) goto loc_831E38C8;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x831e38cc
	goto loc_831E38CC;
loc_831E38C8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831E38CC:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e38e4
	if (cr0.eq) goto loc_831E38E4;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x831e38e4
	if (!cr6.lt) goto loc_831E38E4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
loc_831E38E4:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e38f8
	if (!cr0.eq) goto loc_831E38F8;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e38f8
	if (!cr0.eq) goto loc_831E38F8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_831E38F8:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x831e3908
	if (!cr6.lt) goto loc_831E3908;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x831e3918
	goto loc_831E3918;
loc_831E3908:
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	cr6.compare<int32_t>(ctx.r25.s32, 512, xer);
	// ble cr6,0x831e3918
	if (!cr6.gt) goto loc_831E3918;
	// li r25,512
	ctx.r25.s64 = 512;
loc_831E3918:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x831e3928
	if (!cr6.eq) goto loc_831E3928;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_831E3928:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_831E392C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// bgt cr6,0x831e3940
	if (cr6.gt) goto loc_831E3940;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x831e3984
	if (cr6.eq) goto loc_831E3984;
loc_831E3940:
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
	// ble cr6,0x831e3974
	if (!cr6.gt) goto loc_831E3974;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_831E3974:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x831e392c
	goto loc_831E392C;
loc_831E3984:
	// addi r11,r1,655
	ctx.r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r28,r9,1
	ctx.r28.s64 = ctx.r9.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq 0x831e39c0
	if (cr0.eq) goto loc_831E39C0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831e39b0
	if (cr6.eq) goto loc_831E39B0;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831e39c0
	if (cr6.eq) goto loc_831E39C0;
loc_831E39B0:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbu r11,-1(r28)
	ea = -1 + ctx.r28.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
loc_831E39BC:
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_831E39C0:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e3b7c
	if (!cr6.eq) goto loc_831E3B7C;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e3a10
	if (cr0.eq) goto loc_831E3A10;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e39e4
	if (cr0.eq) goto loc_831E39E4;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x831e39f0
	goto loc_831E39F0;
loc_831E39E4:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e3a00
	if (cr0.eq) goto loc_831E3A00;
	// li r11,43
	ctx.r11.s64 = 43;
loc_831E39F0:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// b 0x831e3a14
	goto loc_831E3A14;
loc_831E3A00:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e3a10
	if (cr0.eq) goto loc_831E3A10;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x831e39f0
	goto loc_831E39F0;
loc_831E3A10:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_831E3A14:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bne 0x831e3a5c
	if (!cr0.eq) goto loc_831E3A5C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x831e3a5c
	if (!cr6.gt) goto loc_831E3A5C;
loc_831E3A34:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831dca88
	ctx.lr = 0x831E3A48;
	sub_831DCA88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831e3a5c
	if (cr6.eq) goto loc_831E3A5C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e3a34
	if (cr6.gt) goto loc_831E3A34;
loc_831E3A5C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831dcb20
	ctx.lr = 0x831E3A70;
	sub_831DCB20(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e3ab4
	if (cr0.eq) goto loc_831E3AB4;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e3ab4
	if (!cr0.eq) goto loc_831E3AB4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x831e3ab4
	if (!cr6.gt) goto loc_831E3AB4;
loc_831E3A8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831dca88
	ctx.lr = 0x831E3AA0;
	sub_831DCA88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831e3ab4
	if (cr6.eq) goto loc_831E3AB4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e3a8c
	if (cr6.gt) goto loc_831E3A8C;
loc_831E3AB4:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x831e3b24
	if (cr6.eq) goto loc_831E3B24;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x831e3b24
	if (!cr6.gt) goto loc_831E3B24;
	// addi r30,r28,-2
	ctx.r30.s64 = ctx.r28.s64 + -2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_831E3AD0:
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
	ctx.lr = 0x831E3AE8;
	sub_831D8898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e3b18
	if (!cr0.eq) goto loc_831E3B18;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x831e3b18
	if (cr6.eq) goto loc_831E3B18;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x831dcb20
	ctx.lr = 0x831E3B0C;
	sub_831DCB20(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x831e3ad0
	if (!cr6.eq) goto loc_831E3AD0;
	// b 0x831e3b34
	goto loc_831E3B34;
loc_831E3B18:
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// b 0x831e3b38
	goto loc_831E3B38;
loc_831E3B24:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831dcb20
	ctx.lr = 0x831E3B34;
	sub_831DCB20(ctx, base);
loc_831E3B34:
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831E3B38:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x831e3b7c
	if (cr6.lt) goto loc_831E3B7C;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e3b7c
	if (cr0.eq) goto loc_831E3B7C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x831e3b7c
	if (!cr6.gt) goto loc_831E3B7C;
loc_831E3B54:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831dca88
	ctx.lr = 0x831E3B68;
	sub_831DCA88(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(ctx.r24.s32, -1, xer);
	// beq cr6,0x831e3b7c
	if (cr6.eq) goto loc_831E3B7C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e3b54
	if (cr6.gt) goto loc_831E3B54;
loc_831E3B7C:
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(ctx.r14.u32, 0, xer);
	// beq cr6,0x831e3b90
	if (cr6.eq) goto loc_831E3B90;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x831cf100
	ctx.lr = 0x831E3B8C;
	sub_831CF100(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
loc_831E3B90:
	// lbz r29,1(r19)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// extsb. r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x831e3ba8
	if (cr0.eq) goto loc_831E3BA8;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831e3224
	goto loc_831E3224;
loc_831E3BA8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e3bbc
	if (cr6.eq) goto loc_831E3BBC;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x831e30f8
	if (!cr6.eq) goto loc_831E30F8;
loc_831E3BBC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x831e3bf8
	goto loc_831E3BF8;
loc_831E3BC4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x831e7908
	ctx.lr = 0x831E3BD8;
	sub_831E7908(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e3bec
	if (!cr6.eq) goto loc_831E3BEC;
	// li r31,511
	ctx.r31.s64 = 511;
	// stb r30,1167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1167, ctx.r30.u8);
loc_831E3BEC:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x832d30b8
	ctx.lr = 0x831E3BF4;
	sub_832D30B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831E3BF8:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E3C00"))) PPC_WEAK_FUNC(sub_831E3C00);
PPC_FUNC_IMPL(__imp__sub_831E3C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x831E3C08;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e3c68
	if (!cr6.eq) goto loc_831E3C68;
	// bl 0x831d3050
	ctx.lr = 0x831E3C54;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E3C60;
	sub_831CF000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831e4558
	goto loc_831E4558;
loc_831E3C68:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_831E3C6C:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x831e3c94
	if (cr6.eq) goto loc_831E3C94;
	// cmpwi cr6,r8,9
	cr6.compare<int32_t>(ctx.r8.s32, 9, xer);
	// beq cr6,0x831e3c94
	if (cr6.eq) goto loc_831E3C94;
	// cmpwi cr6,r8,10
	cr6.compare<int32_t>(ctx.r8.s32, 10, xer);
	// beq cr6,0x831e3c94
	if (cr6.eq) goto loc_831E3C94;
	// cmpwi cr6,r8,13
	cr6.compare<int32_t>(ctx.r8.s32, 13, xer);
	// bne cr6,0x831e3c9c
	if (!cr6.eq) goto loc_831E3C9C;
loc_831E3C94:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x831e3c6c
	goto loc_831E3C6C;
loc_831E3C9C:
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r21,r8,32768
	ctx.r21.u64 = ctx.r8.u64 | 32768;
loc_831E3CA4:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x831e4038
	if (cr6.gt) goto loc_831E4038;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,8256
	ctx.r12.s64 = ctx.r12.s64 + 8256;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31970
	ctx.r12.s64 = -2095185920;
	// nop 
	// addi r12,r12,15580
	ctx.r12.s64 = ctx.r12.s64 + 15580;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831E3CDC;
	case 1:
		goto loc_831E3D58;
	case 2:
		goto loc_831E3DE0;
	case 3:
		goto loc_831E3E64;
	case 4:
		goto loc_831E3EDC;
	case 5:
		goto loc_831E3F4C;
	case 6:
		goto loc_831E3F6C;
	case 7:
		goto loc_831E3FEC;
	case 8:
		goto loc_831E3FB4;
	case 9:
		goto loc_831E4044;
	case 10:
		goto loc_831E4038;
	case 11:
		goto loc_831E4004;
	default:
		return;
	}
loc_831E3CDC:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(ctx.r11.s32, 49, xer);
	// blt cr6,0x831e3cfc
	if (cr6.lt) goto loc_831E3CFC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x831e3cfc
	if (cr6.gt) goto loc_831E3CFC;
loc_831E3CF0:
	// li r11,3
	ctx.r11.s64 = 3;
loc_831E3CF4:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3CFC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x831e3d20
	if (!cr6.eq) goto loc_831E3D20;
loc_831E3D18:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3D20:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831e3d4c
	if (cr6.eq) goto loc_831E3D4C;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831e3d40
	if (cr6.eq) goto loc_831E3D40;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x831e3fe4
	if (!cr6.eq) goto loc_831E3FE4;
loc_831E3D38:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3D40:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3D4C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3D58:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(ctx.r11.s32, 49, xer);
	// blt cr6,0x831e3d70
	if (cr6.lt) goto loc_831E3D70;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// ble cr6,0x831e3cf0
	if (!cr6.gt) goto loc_831E3CF0;
loc_831E3D70:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x831e3d94
	if (!cr6.eq) goto loc_831E3D94;
loc_831E3D8C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3D94:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831e3dd4
	if (cr6.eq) goto loc_831E3DD4;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831e3dd4
	if (cr6.eq) goto loc_831E3DD4;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x831e3d38
	if (cr6.eq) goto loc_831E3D38;
loc_831E3DAC:
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// ble cr6,0x831e3fe4
	if (!cr6.gt) goto loc_831E3FE4;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// ble cr6,0x831e3dcc
	if (!cr6.gt) goto loc_831E3DCC;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(ctx.r11.s32, 99, xer);
	// ble cr6,0x831e3fe4
	if (!cr6.gt) goto loc_831E3FE4;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(ctx.r11.s32, 101, xer);
	// bgt cr6,0x831e3fe4
	if (cr6.gt) goto loc_831E3FE4;
loc_831E3DCC:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3DD4:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3DE0:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(ctx.r11.s32, 49, xer);
	// blt cr6,0x831e3df4
	if (cr6.lt) goto loc_831E3DF4;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// ble cr6,0x831e3cf0
	if (!cr6.gt) goto loc_831E3CF0;
loc_831E3DF4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x831e3d18
	if (cr6.eq) goto loc_831E3D18;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x831e3d38
	if (cr6.eq) goto loc_831E3D38;
loc_831E3E18:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_831E3E1C:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831e44f4
	if (cr6.eq) goto loc_831E44F4;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// ble cr6,0x831e3e54
	if (!cr6.gt) goto loc_831E3E54;
	// lbz r11,151(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x831e3e48
	if (cr6.lt) goto loc_831E3E48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
loc_831E3E48:
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831E3E54:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831e44e0
	if (cr6.eq) goto loc_831E44E0;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x831e40c0
	goto loc_831E40C0;
loc_831E3E64:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x831e3ea4
	goto loc_831E3EA4;
loc_831E3E70:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x831e3eac
	if (cr6.gt) goto loc_831E3EAC;
	// cmplwi cr6,r6,25
	cr6.compare<uint32_t>(ctx.r6.u32, 25, xer);
	// bge cr6,0x831e3e94
	if (!cr6.lt) goto loc_831E3E94;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x831e3e98
	goto loc_831E3E98;
loc_831E3E94:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831E3E98:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_831E3EA4:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bge cr6,0x831e3e70
	if (!cr6.lt) goto loc_831E3E70;
loc_831E3EAC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x831e3d8c
	if (cr6.eq) goto loc_831E3D8C;
loc_831E3EC8:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831e3dd4
	if (cr6.eq) goto loc_831E3DD4;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831e3dd4
	if (cr6.eq) goto loc_831E3DD4;
	// b 0x831e3dac
	goto loc_831E3DAC;
loc_831E3EDC:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831e3f08
	if (!cr6.eq) goto loc_831E3F08;
	// b 0x831e3efc
	goto loc_831E3EFC;
loc_831E3EF0:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_831E3EFC:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x831e3ef0
	if (cr6.eq) goto loc_831E3EF0;
loc_831E3F08:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// b 0x831e3f40
	goto loc_831E3F40;
loc_831E3F10:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x831e3ec8
	if (cr6.gt) goto loc_831E3EC8;
	// cmplwi cr6,r6,25
	cr6.compare<uint32_t>(ctx.r6.u32, 25, xer);
	// bge cr6,0x831e3f34
	if (!cr6.lt) goto loc_831E3F34;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_831E3F34:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_831E3F40:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bge cr6,0x831e3f10
	if (!cr6.lt) goto loc_831E3F10;
	// b 0x831e3ec8
	goto loc_831E3EC8;
loc_831E3F4C:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x831e3e18
	if (cr6.lt) goto loc_831E3E18;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x831e3e18
	if (cr6.gt) goto loc_831E3E18;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x831e3cf4
	goto loc_831E3CF4;
loc_831E3F6C:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(ctx.r11.s32, 49, xer);
	// blt cr6,0x831e3f8c
	if (cr6.lt) goto loc_831E3F8C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x831e3f8c
	if (cr6.gt) goto loc_831E3F8C;
loc_831E3F84:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x831e3cf4
	goto loc_831E3CF4;
loc_831E3F8C:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831e3fac
	if (cr6.eq) goto loc_831E3FAC;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831e4024
	if (cr6.eq) goto loc_831E4024;
loc_831E3F9C:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x831e3e18
	if (!cr6.eq) goto loc_831E3E18;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3FAC:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E3FB4:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x831e3fcc
	goto loc_831E3FCC;
loc_831E3FC0:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_831E3FCC:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x831e3fc0
	if (cr6.eq) goto loc_831E3FC0;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(ctx.r11.s32, 49, xer);
	// blt cr6,0x831e3fe4
	if (cr6.lt) goto loc_831E3FE4;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// ble cr6,0x831e3f84
	if (!cr6.gt) goto loc_831E3F84;
loc_831E3FE4:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x831e3e1c
	goto loc_831E3E1C;
loc_831E3FEC:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(ctx.r11.s32, 49, xer);
	// blt cr6,0x831e3f9c
	if (cr6.lt) goto loc_831E3F9C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// ble cr6,0x831e3f84
	if (!cr6.gt) goto loc_831E3F84;
	// b 0x831e3f9c
	goto loc_831E3F9C;
loc_831E4004:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831e4030
	if (cr6.eq) goto loc_831E4030;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831e3fac
	if (cr6.eq) goto loc_831E3FAC;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x831e3e18
	if (!cr6.eq) goto loc_831E3E18;
loc_831E4024:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r27,-1
	ctx.r27.s64 = -1;
	// b 0x831e3ca4
	goto loc_831E3CA4;
loc_831E4030:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_831E4038:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x831e3ca4
	if (!cr6.eq) goto loc_831E3CA4;
	// b 0x831e3e1c
	goto loc_831E3E1C;
loc_831E4044:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// b 0x831e407c
	goto loc_831E407C;
loc_831E4054:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x831e408c
	if (cr6.gt) goto loc_831E408C;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmpwi cr6,r10,5200
	cr6.compare<int32_t>(ctx.r10.s32, 5200, xer);
	// bgt cr6,0x831e4088
	if (cr6.gt) goto loc_831E4088;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_831E407C:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bge cr6,0x831e4054
	if (!cr6.lt) goto loc_831E4054;
	// b 0x831e408c
	goto loc_831E408C;
loc_831E4088:
	// li r10,5201
	ctx.r10.s64 = 5201;
loc_831E408C:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x831e40a8
	goto loc_831E40A8;
loc_831E4094:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x831e3fe4
	if (cr6.gt) goto loc_831E3FE4;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_831E40A8:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bge cr6,0x831e4094
	if (!cr6.lt) goto loc_831E4094;
	// b 0x831e3fe4
	goto loc_831E3FE4;
loc_831E40B4:
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831E40C0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831e40b4
	if (cr0.eq) goto loc_831E40B4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831e8ca8
	ctx.lr = 0x831E40D8;
	sub_831E8CA8(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge cr6,0x831e40e4
	if (!cr6.lt) goto loc_831E40E4;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_831E40E4:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x831e40f4
	if (!cr6.eq) goto loc_831E40F4;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_831E40F4:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x831e4100
	if (!cr6.eq) goto loc_831E4100;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_831E4100:
	// cmpwi cr6,r11,5200
	cr6.compare<int32_t>(ctx.r11.s32, 5200, xer);
	// bgt cr6,0x831e450c
	if (cr6.gt) goto loc_831E450C;
	// cmpwi cr6,r11,-5200
	cr6.compare<int32_t>(ctx.r11.s32, -5200, xer);
	// blt cr6,0x831e4524
	if (cr6.lt) goto loc_831E4524;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r10,r10,4416
	ctx.r10.s64 = ctx.r10.s64 + 4416;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r25,r10,-96
	ctx.r25.s64 = ctx.r10.s64 + -96;
	// beq cr6,0x831e44cc
	if (cr6.eq) goto loc_831E44CC;
	// bge cr6,0x831e413c
	if (!cr6.lt) goto loc_831E413C;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// neg r26,r11
	ctx.r26.s64 = -ctx.r11.s64;
	// addi r11,r10,4768
	ctx.r11.s64 = ctx.r10.s64 + 4768;
	// addi r25,r11,-96
	ctx.r25.s64 = ctx.r11.s64 + -96;
loc_831E413C:
	// subfic r11,r23,0
	xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r23.s64;
	// lhz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// beq cr6,0x831e44cc
	if (cr6.eq) goto loc_831E44CC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// li r24,-32768
	ctx.r24.s64 = -32768;
	// ori r23,r10,32768
	ctx.r23.u64 = ctx.r10.u64 | 32768;
loc_831E416C:
	// clrlwi. r11,r26,29
	ctx.r11.u64 = ctx.r26.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r25,r25,84
	ctx.r25.s64 = ctx.r25.s64 + 84;
	// srawi r26,r26,3
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 3;
	// beq 0x831e44c4
	if (cr0.eq) goto loc_831E44C4;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// blt cr6,0x831e41ac
	if (cr6.lt) goto loc_831E41AC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831ce980
	ctx.lr = 0x831E419C;
	sub_831CE980(ctx, base);
	// lwz r11,118(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 118);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,118(r1)
	PPC_STORE_U32(ctx.r1.u32 + 118, ctx.r11.u32);
loc_831E41AC:
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// rlwinm r28,r8,0,16,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x831e44ac
	if (!cr6.lt) goto loc_831E44AC;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// bge cr6,0x831e44ac
	if (!cr6.lt) goto loc_831E44AC;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	cr6.compare<uint32_t>(ctx.r11.u32, 49149, xer);
	// bgt cr6,0x831e44ac
	if (cr6.gt) goto loc_831E44AC;
	// cmplwi cr6,r11,16319
	cr6.compare<uint32_t>(ctx.r11.u32, 16319, xer);
	// bgt cr6,0x831e4210
	if (cr6.gt) goto loc_831E4210;
loc_831E4208:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x831e44bc
	goto loc_831E44BC;
loc_831E4210:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e424c
	if (!cr6.eq) goto loc_831E424C;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x831e424c
	if (!cr0.eq) goto loc_831E424C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e424c
	if (!cr6.eq) goto loc_831E424C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e424c
	if (!cr6.eq) goto loc_831E424C;
	// sth r22,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r22.u16);
	// b 0x831e44c4
	goto loc_831E44C4;
loc_831E424C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e4284
	if (!cr6.eq) goto loc_831E4284;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x831e4284
	if (!cr0.eq) goto loc_831E4284;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e4284
	if (!cr6.eq) goto loc_831E4284;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e4208
	if (cr6.eq) goto loc_831E4208;
loc_831E4284:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// li r3,5
	ctx.r3.s64 = 5;
loc_831E4290:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831e42fc
	if (!cr6.gt) goto loc_831E42FC;
	// addi r10,r1,106
	ctx.r10.s64 = ctx.r1.s64 + 106;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_831E42AC:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e42d4
	if (cr6.lt) goto loc_831E42D4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x831e42d8
	if (!cr6.lt) goto loc_831E42D8;
loc_831E42D4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_831E42D8:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831e42f0
	if (cr6.eq) goto loc_831E42F0;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_831E42F0:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x831e42ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E42AC;
loc_831E42FC:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bgt 0x831e4290
	if (cr0.gt) goto loc_831E4290;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16382
	ctx.r11.s64 = ctx.r11.s64 + -16382;
loc_831E431C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x831e436c
	if (!cr0.gt) goto loc_831E436C;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x831e436c
	if (!cr0.eq) goto loc_831E436C;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x831e431c
	goto loc_831E431C;
loc_831E436C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x831e43f4
	if (cr6.gt) goto loc_831E43F4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x831e43f4
	if (!cr0.lt) goto loc_831E43F4;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_831E4390:
	// lhz r7,90(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x831e43a0
	if (cr0.eq) goto loc_831E43A0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_831E43A0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x831e4390
	if (cr0.lt) goto loc_831E4390;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x831e43f4
	if (cr6.eq) goto loc_831E43F4;
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_831E43F4:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bgt cr6,0x831e4414
	if (cr6.gt) goto loc_831E4414;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831e4474
	if (!cr6.eq) goto loc_831E4474;
loc_831E4414:
	// lwz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 86);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x831e446c
	if (!cr6.eq) goto loc_831E446C;
	// lwz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 82);
	// stw r22,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x831e4460
	if (!cr6.eq) goto loc_831E4460;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r22,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x831e4454
	if (!cr6.eq) goto loc_831E4454;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r21,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r21.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x831e4474
	goto loc_831E4474;
loc_831E4454:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x831e4474
	goto loc_831E4474;
loc_831E4460:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r10.u32);
	// b 0x831e4474
	goto loc_831E4474;
loc_831E446C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r10.u32);
loc_831E4474:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// bge cr6,0x831e44ac
	if (!cr6.lt) goto loc_831E44AC;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// stw r8,102(r1)
	PPC_STORE_U32(ctx.r1.u32 + 102, ctx.r8.u32);
	// stw r7,98(r1)
	PPC_STORE_U32(ctx.r1.u32 + 98, ctx.r7.u32);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// b 0x831e44c4
	goto loc_831E44C4;
loc_831E44AC:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// clrlwi. r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e44bc
	if (!cr0.eq) goto loc_831E44BC;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
loc_831E44BC:
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
loc_831E44C4:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x831e416c
	if (!cr6.eq) goto loc_831E416C;
loc_831E44CC:
	// lhz r11,106(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lwz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 102);
	// lwz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 98);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// b 0x831e4538
	goto loc_831E4538;
loc_831E44E0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// b 0x831e4538
	goto loc_831E4538;
loc_831E44F4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r22,4
	ctx.r22.s64 = 4;
	// b 0x831e4538
	goto loc_831E4538;
loc_831E450C:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r22,2
	ctx.r22.s64 = 2;
	// b 0x831e4538
	goto loc_831E4538;
loc_831E4524:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r22,1
	ctx.r22.s64 = 1;
loc_831E4538:
	// sth r11,10(r20)
	PPC_STORE_U16(ctx.r20.u32 + 10, ctx.r11.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r19,16
	ctx.r11.u64 = ctx.r19.u32 & 0xFFFF;
	// stw r8,6(r20)
	PPC_STORE_U32(ctx.r20.u32 + 6, ctx.r8.u32);
	// stw r9,2(r20)
	PPC_STORE_U32(ctx.r20.u32 + 2, ctx.r9.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
loc_831E4558:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E4560"))) PPC_WEAK_FUNC(sub_831E4560);
PPC_FUNC_IMPL(__imp__sub_831E4560) {
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
	ctx.lr = 0x831E4568;
	__savegprlr_14(ctx, base);
	// stwu r1,-2336(r1)
	ea = -2336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// bne cr6,0x831e45b8
	if (!cr6.eq) goto loc_831E45B8;
loc_831E45A0:
	// bl 0x831d3050
	ctx.lr = 0x831E45A4;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E45B0;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e4fb4
	goto loc_831E4FB4;
loc_831E45B8:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x831e45a0
	if (cr6.eq) goto loc_831E45A0;
	// bl 0x831cf870
	ctx.lr = 0x831E45C4;
	sub_831CF870(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e4f80
	if (cr6.eq) goto loc_831E4F80;
	// bl 0x831cf870
	ctx.lr = 0x831E45D4;
	sub_831CF870(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e4f80
	if (cr6.eq) goto loc_831E4F80;
	// lhz r29,0(r17)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr. r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// beq 0x831e4f78
	if (cr0.eq) goto loc_831E4F78;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r18,104(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r19,r10,2136
	ctx.r19.s64 = ctx.r10.s64 + 2136;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r9,5664
	ctx.r10.s64 = ctx.r9.s64 + 5664;
	// addi r22,r11,2840
	ctx.r22.s64 = ctx.r11.s64 + 2840;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_831E4624:
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// blt cr6,0x831e4f78
	if (cr6.lt) goto loc_831E4F78;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// blt cr6,0x831e4650
	if (cr6.lt) goto loc_831E4650;
	// cmplwi cr6,r8,120
	cr6.compare<uint32_t>(ctx.r8.u32, 120, xer);
	// bgt cr6,0x831e4650
	if (cr6.gt) goto loc_831E4650;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x831e4654
	goto loc_831E4654;
loc_831E4650:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831E4654:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x831e4f5c
	if (cr6.gt) goto loc_831E4F5C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e4858
	if (cr6.eq) goto loc_831E4858;
	// bdz 0x831e46a0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E46A0;
	// bdz 0x831e46c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E46C0;
	// bdz 0x831e4710
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E4710;
	// bdz 0x831e474c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E474C;
	// bdz 0x831e4754
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E4754;
	// bdz 0x831e478c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E478C;
	// b 0x831e4874
	goto loc_831E4874;
loc_831E46A0:
	// li r20,0
	ctx.r20.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E46C0:
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x831e4708
	if (cr6.eq) goto loc_831E4708;
	// cmpwi cr6,r8,35
	cr6.compare<int32_t>(ctx.r8.s32, 35, xer);
	// beq cr6,0x831e4700
	if (cr6.eq) goto loc_831E4700;
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// beq cr6,0x831e46f8
	if (cr6.eq) goto loc_831E46F8;
	// cmpwi cr6,r8,45
	cr6.compare<int32_t>(ctx.r8.s32, 45, xer);
	// beq cr6,0x831e46f0
	if (cr6.eq) goto loc_831E46F0;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// bne cr6,0x831e4f5c
	if (!cr6.eq) goto loc_831E4F5C;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E46F0:
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E46F8:
	// ori r25,r25,1
	ctx.r25.u64 = ctx.r25.u64 | 1;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E4700:
	// ori r25,r25,128
	ctx.r25.u64 = ctx.r25.u64 | 128;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E4708:
	// ori r25,r25,2
	ctx.r25.u64 = ctx.r25.u64 | 2;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E4710:
	// cmplwi cr6,r8,42
	cr6.compare<uint32_t>(ctx.r8.u32, 42, xer);
	// bne cr6,0x831e473c
	if (!cr6.eq) goto loc_831E473C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r14,4(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bge cr6,0x831e4f5c
	if (!cr6.lt) goto loc_831E4F5C;
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// neg r14,r14
	ctx.r14.s64 = -ctx.r14.s64;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E473C:
	// mulli r11,r14,10
	ctx.r11.s64 = ctx.r14.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r14,r11,-48
	ctx.r14.s64 = ctx.r11.s64 + -48;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E474C:
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E4754:
	// cmplwi cr6,r8,42
	cr6.compare<uint32_t>(ctx.r8.u32, 42, xer);
	// bne cr6,0x831e477c
	if (!cr6.eq) goto loc_831E477C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bge cr6,0x831e4f5c
	if (!cr6.lt) goto loc_831E4F5C;
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E477C:
	// mulli r11,r23,10
	ctx.r11.s64 = ctx.r23.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r23,r11,-48
	ctx.r23.s64 = ctx.r11.s64 + -48;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E478C:
	// cmpwi cr6,r8,73
	cr6.compare<int32_t>(ctx.r8.s32, 73, xer);
	// beq cr6,0x831e47dc
	if (cr6.eq) goto loc_831E47DC;
	// cmpwi cr6,r8,104
	cr6.compare<int32_t>(ctx.r8.s32, 104, xer);
	// beq cr6,0x831e47d4
	if (cr6.eq) goto loc_831E47D4;
	// cmpwi cr6,r8,108
	cr6.compare<int32_t>(ctx.r8.s32, 108, xer);
	// beq cr6,0x831e47b4
	if (cr6.eq) goto loc_831E47B4;
	// cmpwi cr6,r8,119
	cr6.compare<int32_t>(ctx.r8.s32, 119, xer);
	// bne cr6,0x831e4f5c
	if (!cr6.eq) goto loc_831E4F5C;
	// ori r25,r25,2048
	ctx.r25.u64 = ctx.r25.u64 | 2048;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E47B4:
	// lhz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// bne cr6,0x831e47cc
	if (!cr6.eq) goto loc_831E47CC;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// ori r25,r25,4096
	ctx.r25.u64 = ctx.r25.u64 | 4096;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E47CC:
	// ori r25,r25,16
	ctx.r25.u64 = ctx.r25.u64 | 16;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E47D4:
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E47DC:
	// lhz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// bne cr6,0x831e4800
	if (!cr6.eq) goto loc_831E4800;
	// lhz r10,2(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 2);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x831e4800
	if (!cr6.eq) goto loc_831E4800;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// ori r25,r25,32768
	ctx.r25.u64 = ctx.r25.u64 | 32768;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E4800:
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// bne cr6,0x831e4820
	if (!cr6.eq) goto loc_831E4820;
	// lhz r10,2(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 2);
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x831e4820
	if (!cr6.eq) goto loc_831E4820;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// rlwinm r25,r25,0,17,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E4820:
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// beq cr6,0x831e4f5c
	if (cr6.eq) goto loc_831E4F5C;
	// cmplwi cr6,r11,105
	cr6.compare<uint32_t>(ctx.r11.u32, 105, xer);
	// beq cr6,0x831e4f5c
	if (cr6.eq) goto loc_831E4F5C;
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(ctx.r11.u32, 111, xer);
	// beq cr6,0x831e4f5c
	if (cr6.eq) goto loc_831E4F5C;
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(ctx.r11.u32, 117, xer);
	// beq cr6,0x831e4f5c
	if (cr6.eq) goto loc_831E4F5C;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// beq cr6,0x831e4f5c
	if (cr6.eq) goto loc_831E4F5C;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(ctx.r11.u32, 88, xer);
	// beq cr6,0x831e4f5c
	if (cr6.eq) goto loc_831E4F5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_831E4858:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E486C;
	sub_831E4FC0(ctx, base);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x831e4f5c
	goto loc_831E4F5C;
loc_831E4874:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bgt cr6,0x831e4d9c
	if (cr6.gt) goto loc_831E4D9C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,8272
	ctx.r12.s64 = ctx.r12.s64 + 8272;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31970
	ctx.r12.s64 = -2095185920;
	// addi r12,r12,18600
	ctx.r12.s64 = ctx.r12.s64 + 18600;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831E4AB8;
	case 1:
		goto loc_831E4D9C;
	case 2:
		goto loc_831E48A8;
	case 3:
		goto loc_831E4D9C;
	case 4:
		goto loc_831E4AB8;
	case 5:
		goto loc_831E4D9C;
	case 6:
		goto loc_831E4AB8;
	case 7:
		goto loc_831E4D9C;
	case 8:
		goto loc_831E4D9C;
	case 9:
		goto loc_831E4D9C;
	case 10:
		goto loc_831E4D9C;
	case 11:
		goto loc_831E4D9C;
	case 12:
		goto loc_831E4D9C;
	case 13:
		goto loc_831E4D9C;
	case 14:
		goto loc_831E4D9C;
	case 15:
		goto loc_831E4D9C;
	case 16:
		goto loc_831E4D9C;
	case 17:
		goto loc_831E4D9C;
	case 18:
		goto loc_831E49A4;
	case 19:
		goto loc_831E4D9C;
	case 20:
		goto loc_831E4D9C;
	case 21:
		goto loc_831E4D9C;
	case 22:
		goto loc_831E4D9C;
	case 23:
		goto loc_831E4BFC;
	case 24:
		goto loc_831E4D9C;
	case 25:
		goto loc_831E4924;
	case 26:
		goto loc_831E4D9C;
	case 27:
		goto loc_831E4D9C;
	case 28:
		goto loc_831E4D9C;
	case 29:
		goto loc_831E4D9C;
	case 30:
		goto loc_831E4D9C;
	case 31:
		goto loc_831E4D9C;
	case 32:
		goto loc_831E4AC4;
	case 33:
		goto loc_831E4D9C;
	case 34:
		goto loc_831E48B8;
	case 35:
		goto loc_831E4BEC;
	case 36:
		goto loc_831E4AC4;
	case 37:
		goto loc_831E4AC4;
	case 38:
		goto loc_831E4AC4;
	case 39:
		goto loc_831E4D9C;
	case 40:
		goto loc_831E4BEC;
	case 41:
		goto loc_831E4D9C;
	case 42:
		goto loc_831E4D9C;
	case 43:
		goto loc_831E4D9C;
	case 44:
		goto loc_831E4D9C;
	case 45:
		goto loc_831E4A7C;
	case 46:
		goto loc_831E4C30;
	case 47:
		goto loc_831E4BF8;
	case 48:
		goto loc_831E4D9C;
	case 49:
		goto loc_831E4D9C;
	case 50:
		goto loc_831E49B4;
	case 51:
		goto loc_831E4D9C;
	case 52:
		goto loc_831E4BF0;
	case 53:
		goto loc_831E4D9C;
	case 54:
		goto loc_831E4D9C;
	case 55:
		goto loc_831E4C04;
	default:
		return;
	}
loc_831E48A8:
	// andi. r11,r25,2096
	ctx.r11.u64 = ctx.r25.u64 & 2096;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e48b8
	if (!cr0.eq) goto loc_831E48B8;
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
loc_831E48B8:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// beq 0x831e4918
	if (cr0.eq) goto loc_831E4918;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x831e7b08
	ctx.lr = 0x831E4908;
	sub_831E7B08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831e491c
	if (!cr0.lt) goto loc_831E491C;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// b 0x831e491c
	goto loc_831E491C;
loc_831E4918:
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
loc_831E491C:
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// b 0x831e4d9c
	goto loc_831E4D9C;
loc_831E4924:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e4974
	if (cr6.eq) goto loc_831E4974;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e4974
	if (cr6.eq) goto loc_831E4974;
	// rlwinm. r9,r25,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// beq 0x831e4968
	if (cr0.eq) goto loc_831E4968;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r20,1
	ctx.r20.s64 = 1;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// b 0x831e4d9c
	goto loc_831E4D9C;
loc_831E4968:
	// lha r26,0(r11)
	ctx.r26.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x831e4d9c
	goto loc_831E4D9C;
loc_831E4974:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r27,5656(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5656);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_831E4984:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e4984
	if (!cr6.eq) goto loc_831E4984;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_831E4998:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x831e4d9c
	goto loc_831E4D9C;
loc_831E49A4:
	// andi. r11,r25,2096
	ctx.r11.u64 = ctx.r25.u64 & 2096;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e49b4
	if (!cr0.eq) goto loc_831E49B4;
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
loc_831E49B4:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// bne cr6,0x831e49c8
	if (!cr6.eq) goto loc_831E49C8;
	// lis r30,32767
	ctx.r30.s64 = 2147418112;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// b 0x831e49cc
	goto loc_831E49CC;
loc_831E49C8:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_831E49CC:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq 0x831e4a3c
	if (cr0.eq) goto loc_831E4A3C;
	// bne cr6,0x831e49f4
	if (!cr6.eq) goto loc_831E49F4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r27,5656(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5656);
loc_831E49F4:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831e4d9c
	if (!cr6.gt) goto loc_831E4D9C;
loc_831E4A04:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831e4d9c
	if (cr0.eq) goto loc_831E4D9C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831e23d0
	ctx.lr = 0x831E4A1C;
	sub_831E23D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e4a28
	if (cr0.eq) goto loc_831E4A28;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831E4A28:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// blt cr6,0x831e4a04
	if (cr6.lt) goto loc_831E4A04;
	// b 0x831e4d9c
	goto loc_831E4D9C;
loc_831E4A3C:
	// bne cr6,0x831e4a48
	if (!cr6.eq) goto loc_831E4A48;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r27,5660(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5660);
loc_831E4A48:
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x831e4a68
	goto loc_831E4A68;
loc_831E4A54:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831e4a70
	if (cr0.eq) goto loc_831E4A70;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_831E4A68:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831e4a54
	if (!cr6.eq) goto loc_831E4A54;
loc_831E4A70:
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// srawi r26,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// b 0x831e4d9c
	goto loc_831E4D9C;
loc_831E4A7C:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x831e7a18
	ctx.lr = 0x831E4A90;
	sub_831E7A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e45a0
	if (cr0.eq) goto loc_831E45A0;
	// rlwinm. r11,r25,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4aa8
	if (cr0.eq) goto loc_831E4AA8;
	// sth r21,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r21.u16);
	// b 0x831e4aac
	goto loc_831E4AAC;
loc_831E4AA8:
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_831E4AAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x831e4f44
	goto loc_831E4F44;
loc_831E4AB8:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r18,1
	ctx.r18.s64 = 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_831E4AC4:
	// ori r25,r25,64
	ctx.r25.u64 = ctx.r25.u64 | 64;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bge cr6,0x831e4ae0
	if (!cr6.lt) goto loc_831E4AE0;
	// li r23,6
	ctx.r23.s64 = 6;
	// b 0x831e4b34
	goto loc_831E4B34;
loc_831E4AE0:
	// bne cr6,0x831e4af8
	if (!cr6.eq) goto loc_831E4AF8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bne cr6,0x831e4b34
	if (!cr6.eq) goto loc_831E4B34;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x831e4b34
	goto loc_831E4B34;
loc_831E4AF8:
	// cmpwi cr6,r23,512
	cr6.compare<int32_t>(ctx.r23.s32, 512, xer);
	// ble cr6,0x831e4b04
	if (!cr6.gt) goto loc_831E4B04;
	// li r23,512
	ctx.r23.s64 = 512;
loc_831E4B04:
	// cmpwi cr6,r23,163
	cr6.compare<int32_t>(ctx.r23.s32, 163, xer);
	// ble cr6,0x831e4b34
	if (!cr6.gt) goto loc_831E4B34;
	// addi r31,r23,349
	ctx.r31.s64 = ctx.r23.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x831E4B18;
	sub_831D2BF8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e4b30
	if (cr0.eq) goto loc_831E4B30;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x831e4b34
	goto loc_831E4B34;
loc_831E4B30:
	// li r23,163
	ctx.r23.s64 = 163;
loc_831E4B34:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// extsb r6,r29
	ctx.r6.s64 = ctx.r29.s8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x831E4B70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r31,r25,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831e4b94
	if (cr0.eq) goto loc_831E4B94;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x831e4b94
	if (!cr6.eq) goto loc_831E4B94;
	// lwz r11,36(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E4B94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831E4B94:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bne cr6,0x831e4bbc
	if (!cr6.eq) goto loc_831E4BBC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x831e4bbc
	if (!cr6.eq) goto loc_831E4BBC;
	// lwz r11,32(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E4BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831E4BBC:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x831e4bd0
	if (!cr6.eq) goto loc_831E4BD0;
	// ori r25,r25,256
	ctx.r25.u64 = ctx.r25.u64 | 256;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_831E4BD0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_831E4BD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e4bd4
	if (!cr6.eq) goto loc_831E4BD4;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// b 0x831e4998
	goto loc_831E4998;
loc_831E4BEC:
	// ori r25,r25,64
	ctx.r25.u64 = ctx.r25.u64 | 64;
loc_831E4BF0:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x831e4c40
	goto loc_831E4C40;
loc_831E4BF8:
	// li r23,8
	ctx.r23.s64 = 8;
loc_831E4BFC:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x831e4c08
	goto loc_831E4C08;
loc_831E4C04:
	// li r11,39
	ctx.r11.s64 = 39;
loc_831E4C08:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// rlwinm. r10,r25,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x831e4c40
	if (cr0.eq) goto loc_831E4C40;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r15,2
	ctx.r15.s64 = 2;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// b 0x831e4c40
	goto loc_831E4C40;
loc_831E4C30:
	// rlwinm. r11,r25,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x831e4c40
	if (cr0.eq) goto loc_831E4C40;
	// ori r25,r25,512
	ctx.r25.u64 = ctx.r25.u64 | 512;
loc_831E4C40:
	// rlwinm. r11,r25,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e4c50
	if (!cr0.eq) goto loc_831E4C50;
	// rlwinm. r11,r25,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4c64
	if (cr0.eq) goto loc_831E4C64;
loc_831E4C50:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x831e4cb4
	goto loc_831E4CB4;
loc_831E4C64:
	// rlwinm. r11,r25,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4c94
	if (cr0.eq) goto loc_831E4C94;
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x831e4c8c
	if (cr0.eq) goto loc_831E4C8C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x831e4cb4
	goto loc_831E4CB4;
loc_831E4C8C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x831e4cb4
	goto loc_831E4CB4;
loc_831E4C94:
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// beq 0x831e4cb0
	if (cr0.eq) goto loc_831E4CB0;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x831e4cb4
	goto loc_831E4CB4;
loc_831E4CB0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831E4CB4:
	// rlwinm. r10,r25,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e4ccc
	if (cr0.eq) goto loc_831E4CCC;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x831e4ccc
	if (!cr6.lt) goto loc_831E4CCC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r25,r25,256
	ctx.r25.u64 = ctx.r25.u64 | 256;
loc_831E4CCC:
	// rlwinm. r10,r25,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e4ce0
	if (!cr0.eq) goto loc_831E4CE0;
	// rlwinm. r10,r25,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e4ce0
	if (!cr0.eq) goto loc_831E4CE0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_831E4CE0:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bge cr6,0x831e4cf0
	if (!cr6.lt) goto loc_831E4CF0;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x831e4d00
	goto loc_831E4D00;
loc_831E4CF0:
	// rlwinm r25,r25,0,29,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r23,512
	cr6.compare<int32_t>(ctx.r23.s32, 512, xer);
	// ble cr6,0x831e4d00
	if (!cr6.gt) goto loc_831E4D00;
	// li r23,512
	ctx.r23.s64 = 512;
loc_831E4D00:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x831e4d0c
	if (!cr6.eq) goto loc_831E4D0C;
	// li r15,0
	ctx.r15.s64 = 0;
loc_831E4D0C:
	// addi r9,r1,639
	ctx.r9.s64 = ctx.r1.s64 + 639;
loc_831E4D10:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bgt cr6,0x831e4d24
	if (cr6.gt) goto loc_831E4D24;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x831e4d68
	if (cr6.eq) goto loc_831E4D68;
loc_831E4D24:
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
	// ble cr6,0x831e4d58
	if (!cr6.gt) goto loc_831E4D58;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_831E4D58:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x831e4d10
	goto loc_831E4D10;
loc_831E4D68:
	// addi r11,r1,639
	ctx.r11.s64 = ctx.r1.s64 + 639;
	// rlwinm. r10,r25,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r26,r9,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// beq 0x831e4d9c
	if (cr0.eq) goto loc_831E4D9C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x831e4d90
	if (cr6.eq) goto loc_831E4D90;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831e4d9c
	if (cr6.eq) goto loc_831E4D9C;
loc_831E4D90:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stbu r11,-1(r27)
	ea = -1 + ctx.r27.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r27.u32 = ea;
loc_831E4D9C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e4f44
	if (!cr6.eq) goto loc_831E4F44;
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4de4
	if (cr0.eq) goto loc_831E4DE4;
	// rlwinm. r11,r25,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4dc0
	if (cr0.eq) goto loc_831E4DC0;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x831e4ddc
	goto loc_831E4DDC;
loc_831E4DC0:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4dd0
	if (cr0.eq) goto loc_831E4DD0;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x831e4ddc
	goto loc_831E4DDC;
loc_831E4DD0:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4de4
	if (cr0.eq) goto loc_831E4DE4;
	// li r11,32
	ctx.r11.s64 = 32;
loc_831E4DDC:
	// li r15,1
	ctx.r15.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_831E4DE4:
	// subf r11,r26,r14
	ctx.r11.s64 = ctx.r14.s64 - ctx.r26.s64;
	// rlwinm. r10,r25,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r28,r15,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r15.s64;
	// bne 0x831e4e28
	if (!cr0.eq) goto loc_831E4E28;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831e4e28
	if (!cr6.gt) goto loc_831E4E28;
loc_831E4E00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E4E14;
	sub_831E4FC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831e4e28
	if (cr6.eq) goto loc_831E4E28;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e4e00
	if (cr6.gt) goto loc_831E4E00;
loc_831E4E28:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831e5028
	ctx.lr = 0x831E4E3C;
	sub_831E5028(ctx, base);
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4e80
	if (cr0.eq) goto loc_831E4E80;
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e4e80
	if (!cr0.eq) goto loc_831E4E80;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831e4e80
	if (!cr6.gt) goto loc_831E4E80;
loc_831E4E58:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E4E6C;
	sub_831E4FC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831e4e80
	if (cr6.eq) goto loc_831E4E80;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e4e58
	if (cr6.gt) goto loc_831E4E58;
loc_831E4E80:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bne cr6,0x831e4ee8
	if (!cr6.eq) goto loc_831E4EE8;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x831e4ee8
	if (!cr6.gt) goto loc_831E4EE8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_831E4E98:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x831e7b08
	ctx.lr = 0x831E4EB4;
	sub_831E7B08(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x831e4edc
	if (!cr0.gt) goto loc_831E4EDC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x831e4fc0
	ctx.lr = 0x831E4ECC;
	sub_831E4FC0(ctx, base);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e4e98
	if (cr6.gt) goto loc_831E4E98;
	// b 0x831e4efc
	goto loc_831E4EFC;
loc_831E4EDC:
	// li r21,-1
	ctx.r21.s64 = -1;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// b 0x831e4f00
	goto loc_831E4F00;
loc_831E4EE8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e5028
	ctx.lr = 0x831E4EFC;
	sub_831E5028(ctx, base);
loc_831E4EFC:
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831E4F00:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// blt cr6,0x831e4f44
	if (cr6.lt) goto loc_831E4F44;
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4f44
	if (cr0.eq) goto loc_831E4F44;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831e4f44
	if (!cr6.gt) goto loc_831E4F44;
loc_831E4F1C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E4F30;
	sub_831E4FC0(ctx, base);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// beq cr6,0x831e4f44
	if (cr6.eq) goto loc_831E4F44;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e4f1c
	if (cr6.gt) goto loc_831E4F1C;
loc_831E4F44:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e4f5c
	if (cr6.eq) goto loc_831E4F5C;
	// bl 0x831cf100
	ctx.lr = 0x831E4F54;
	sub_831CF100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_831E4F5C:
	// lhz r29,0(r17)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// mr. r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x831e4f78
	if (cr0.eq) goto loc_831E4F78;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x831e4624
	goto loc_831E4624;
loc_831E4F78:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x831e4fb4
	goto loc_831E4FB4;
loc_831E4F80:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x831e92c0
	ctx.lr = 0x831E4F94;
	sub_831E92C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e4fa8
	if (!cr6.eq) goto loc_831E4FA8;
	// li r31,511
	ctx.r31.s64 = 511;
	// sth r30,2174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2174, ctx.r30.u16);
loc_831E4FA8:
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x832d47b0
	ctx.lr = 0x831E4FB0;
	sub_832D47B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831E4FB4:
	// addi r1,r1,2336
	ctx.r1.s64 = ctx.r1.s64 + 2336;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E4FBC"))) PPC_WEAK_FUNC(sub_831E4FBC);
PPC_FUNC_IMPL(__imp__sub_831E4FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E4FC0"))) PPC_WEAK_FUNC(sub_831E4FC0);
PPC_FUNC_IMPL(__imp__sub_831E4FC0) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e4fec
	if (cr0.eq) goto loc_831E4FEC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e5004
	if (cr6.eq) goto loc_831E5004;
loc_831E4FEC:
	// bl 0x831e8f40
	ctx.lr = 0x831E4FF0;
	sub_831E8F40(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x831e5004
	if (!cr6.eq) goto loc_831E5004;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x831e500c
	goto loc_831E500C;
loc_831E5004:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831E500C:
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

__attribute__((alias("__imp__sub_831E5024"))) PPC_WEAK_FUNC(sub_831E5024);
PPC_FUNC_IMPL(__imp__sub_831E5024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E5028"))) PPC_WEAK_FUNC(sub_831E5028);
PPC_FUNC_IMPL(__imp__sub_831E5028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831E5030;
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
	ctx.lr = 0x831E5048;
	sub_831D3050(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5074
	if (cr0.eq) goto loc_831E5074;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e5074
	if (!cr6.eq) goto loc_831E5074;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831e50ec
	goto loc_831E50EC;
loc_831E5074:
	// bl 0x831d3050
	ctx.lr = 0x831E5078;
	sub_831D3050(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x831e50d4
	if (!cr6.gt) goto loc_831E50D4;
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
loc_831E508C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhzu r3,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E50A0;
	sub_831E4FC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831e50cc
	if (!cr6.eq) goto loc_831E50CC;
	// bl 0x831d3050
	ctx.lr = 0x831E50B0;
	sub_831D3050(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(ctx.r11.s32, 42, xer);
	// bne cr6,0x831e50d4
	if (!cr6.eq) goto loc_831E50D4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x831e4fc0
	ctx.lr = 0x831E50CC;
	sub_831E4FC0(ctx, base);
loc_831E50CC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x831e508c
	if (cr6.gt) goto loc_831E508C;
loc_831E50D4:
	// bl 0x831d3050
	ctx.lr = 0x831E50D8;
	sub_831D3050(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e50ec
	if (!cr6.eq) goto loc_831E50EC;
	// bl 0x831d3050
	ctx.lr = 0x831E50E8;
	sub_831D3050(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_831E50EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E50F4"))) PPC_WEAK_FUNC(sub_831E50F4);
PPC_FUNC_IMPL(__imp__sub_831E50F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E50F8"))) PPC_WEAK_FUNC(sub_831E50F8);
PPC_FUNC_IMPL(__imp__sub_831E50F8) {
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
	ctx.lr = 0x831E5100;
	__savegprlr_14(ctx, base);
	// stwu r1,-2336(r1)
	ea = -2336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// bne cr6,0x831e5150
	if (!cr6.eq) goto loc_831E5150;
loc_831E5138:
	// bl 0x831d3050
	ctx.lr = 0x831E513C;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E5148;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e5b64
	goto loc_831E5B64;
loc_831E5150:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x831e5138
	if (cr6.eq) goto loc_831E5138;
	// bl 0x831cf870
	ctx.lr = 0x831E515C;
	sub_831CF870(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e5b30
	if (cr6.eq) goto loc_831E5B30;
	// bl 0x831cf870
	ctx.lr = 0x831E516C;
	sub_831CF870(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e5b30
	if (cr6.eq) goto loc_831E5B30;
	// lhz r29,0(r17)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr. r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// beq 0x831e5b28
	if (cr0.eq) goto loc_831E5B28;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r18,104(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r19,r10,2136
	ctx.r19.s64 = ctx.r10.s64 + 2136;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r9,7936
	ctx.r10.s64 = ctx.r9.s64 + 7936;
	// addi r22,r11,2840
	ctx.r22.s64 = ctx.r11.s64 + 2840;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_831E51BC:
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// blt cr6,0x831e5b14
	if (cr6.lt) goto loc_831E5B14;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// blt cr6,0x831e51e8
	if (cr6.lt) goto loc_831E51E8;
	// cmplwi cr6,r8,120
	cr6.compare<uint32_t>(ctx.r8.u32, 120, xer);
	// bgt cr6,0x831e51e8
	if (cr6.gt) goto loc_831E51E8;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x831e51ec
	goto loc_831E51EC;
loc_831E51E8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831E51EC:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 * 9;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x831e5138
	if (cr6.eq) goto loc_831E5138;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x831e5afc
	if (cr6.gt) goto loc_831E5AFC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e53f8
	if (cr6.eq) goto loc_831E53F8;
	// bdz 0x831e5240
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E5240;
	// bdz 0x831e5260
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E5260;
	// bdz 0x831e52b0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E52B0;
	// bdz 0x831e52ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E52EC;
	// bdz 0x831e52f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E52F4;
	// bdz 0x831e532c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831E532C;
	// b 0x831e5414
	goto loc_831E5414;
loc_831E5240:
	// li r20,0
	ctx.r20.s64 = 0;
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E5260:
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x831e52a8
	if (cr6.eq) goto loc_831E52A8;
	// cmpwi cr6,r8,35
	cr6.compare<int32_t>(ctx.r8.s32, 35, xer);
	// beq cr6,0x831e52a0
	if (cr6.eq) goto loc_831E52A0;
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// beq cr6,0x831e5298
	if (cr6.eq) goto loc_831E5298;
	// cmpwi cr6,r8,45
	cr6.compare<int32_t>(ctx.r8.s32, 45, xer);
	// beq cr6,0x831e5290
	if (cr6.eq) goto loc_831E5290;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// bne cr6,0x831e5afc
	if (!cr6.eq) goto loc_831E5AFC;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E5290:
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E5298:
	// ori r25,r25,1
	ctx.r25.u64 = ctx.r25.u64 | 1;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E52A0:
	// ori r25,r25,128
	ctx.r25.u64 = ctx.r25.u64 | 128;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E52A8:
	// ori r25,r25,2
	ctx.r25.u64 = ctx.r25.u64 | 2;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E52B0:
	// cmplwi cr6,r8,42
	cr6.compare<uint32_t>(ctx.r8.u32, 42, xer);
	// bne cr6,0x831e52dc
	if (!cr6.eq) goto loc_831E52DC;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r14,4(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(ctx.r14.s32, 0, xer);
	// bge cr6,0x831e5afc
	if (!cr6.lt) goto loc_831E5AFC;
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// neg r14,r14
	ctx.r14.s64 = -ctx.r14.s64;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E52DC:
	// mulli r11,r14,10
	ctx.r11.s64 = ctx.r14.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r14,r11,-48
	ctx.r14.s64 = ctx.r11.s64 + -48;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E52EC:
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E52F4:
	// cmplwi cr6,r8,42
	cr6.compare<uint32_t>(ctx.r8.u32, 42, xer);
	// bne cr6,0x831e531c
	if (!cr6.eq) goto loc_831E531C;
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bge cr6,0x831e5afc
	if (!cr6.lt) goto loc_831E5AFC;
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E531C:
	// mulli r11,r23,10
	ctx.r11.s64 = ctx.r23.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r23,r11,-48
	ctx.r23.s64 = ctx.r11.s64 + -48;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E532C:
	// cmpwi cr6,r8,73
	cr6.compare<int32_t>(ctx.r8.s32, 73, xer);
	// beq cr6,0x831e537c
	if (cr6.eq) goto loc_831E537C;
	// cmpwi cr6,r8,104
	cr6.compare<int32_t>(ctx.r8.s32, 104, xer);
	// beq cr6,0x831e5374
	if (cr6.eq) goto loc_831E5374;
	// cmpwi cr6,r8,108
	cr6.compare<int32_t>(ctx.r8.s32, 108, xer);
	// beq cr6,0x831e5354
	if (cr6.eq) goto loc_831E5354;
	// cmpwi cr6,r8,119
	cr6.compare<int32_t>(ctx.r8.s32, 119, xer);
	// bne cr6,0x831e5afc
	if (!cr6.eq) goto loc_831E5AFC;
	// ori r25,r25,2048
	ctx.r25.u64 = ctx.r25.u64 | 2048;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E5354:
	// lhz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// bne cr6,0x831e536c
	if (!cr6.eq) goto loc_831E536C;
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// ori r25,r25,4096
	ctx.r25.u64 = ctx.r25.u64 | 4096;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E536C:
	// ori r25,r25,16
	ctx.r25.u64 = ctx.r25.u64 | 16;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E5374:
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E537C:
	// lhz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// bne cr6,0x831e53a0
	if (!cr6.eq) goto loc_831E53A0;
	// lhz r10,2(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 2);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x831e53a0
	if (!cr6.eq) goto loc_831E53A0;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// ori r25,r25,32768
	ctx.r25.u64 = ctx.r25.u64 | 32768;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E53A0:
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// bne cr6,0x831e53c0
	if (!cr6.eq) goto loc_831E53C0;
	// lhz r10,2(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 2);
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x831e53c0
	if (!cr6.eq) goto loc_831E53C0;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// rlwinm r25,r25,0,17,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E53C0:
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// beq cr6,0x831e5afc
	if (cr6.eq) goto loc_831E5AFC;
	// cmplwi cr6,r11,105
	cr6.compare<uint32_t>(ctx.r11.u32, 105, xer);
	// beq cr6,0x831e5afc
	if (cr6.eq) goto loc_831E5AFC;
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(ctx.r11.u32, 111, xer);
	// beq cr6,0x831e5afc
	if (cr6.eq) goto loc_831E5AFC;
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(ctx.r11.u32, 117, xer);
	// beq cr6,0x831e5afc
	if (cr6.eq) goto loc_831E5AFC;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// beq cr6,0x831e5afc
	if (cr6.eq) goto loc_831E5AFC;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(ctx.r11.u32, 88, xer);
	// beq cr6,0x831e5afc
	if (cr6.eq) goto loc_831E5AFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_831E53F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E540C;
	sub_831E4FC0(ctx, base);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x831e5afc
	goto loc_831E5AFC;
loc_831E5414:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bgt cr6,0x831e593c
	if (cr6.gt) goto loc_831E593C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,8384
	ctx.r12.s64 = ctx.r12.s64 + 8384;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31970
	ctx.r12.s64 = -2095185920;
	// addi r12,r12,21576
	ctx.r12.s64 = ctx.r12.s64 + 21576;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831E5658;
	case 1:
		goto loc_831E593C;
	case 2:
		goto loc_831E5448;
	case 3:
		goto loc_831E593C;
	case 4:
		goto loc_831E5658;
	case 5:
		goto loc_831E593C;
	case 6:
		goto loc_831E5658;
	case 7:
		goto loc_831E593C;
	case 8:
		goto loc_831E593C;
	case 9:
		goto loc_831E593C;
	case 10:
		goto loc_831E593C;
	case 11:
		goto loc_831E593C;
	case 12:
		goto loc_831E593C;
	case 13:
		goto loc_831E593C;
	case 14:
		goto loc_831E593C;
	case 15:
		goto loc_831E593C;
	case 16:
		goto loc_831E593C;
	case 17:
		goto loc_831E593C;
	case 18:
		goto loc_831E5544;
	case 19:
		goto loc_831E593C;
	case 20:
		goto loc_831E593C;
	case 21:
		goto loc_831E593C;
	case 22:
		goto loc_831E593C;
	case 23:
		goto loc_831E579C;
	case 24:
		goto loc_831E593C;
	case 25:
		goto loc_831E54C4;
	case 26:
		goto loc_831E593C;
	case 27:
		goto loc_831E593C;
	case 28:
		goto loc_831E593C;
	case 29:
		goto loc_831E593C;
	case 30:
		goto loc_831E593C;
	case 31:
		goto loc_831E593C;
	case 32:
		goto loc_831E5664;
	case 33:
		goto loc_831E593C;
	case 34:
		goto loc_831E5458;
	case 35:
		goto loc_831E578C;
	case 36:
		goto loc_831E5664;
	case 37:
		goto loc_831E5664;
	case 38:
		goto loc_831E5664;
	case 39:
		goto loc_831E593C;
	case 40:
		goto loc_831E578C;
	case 41:
		goto loc_831E593C;
	case 42:
		goto loc_831E593C;
	case 43:
		goto loc_831E593C;
	case 44:
		goto loc_831E593C;
	case 45:
		goto loc_831E561C;
	case 46:
		goto loc_831E57D0;
	case 47:
		goto loc_831E5798;
	case 48:
		goto loc_831E593C;
	case 49:
		goto loc_831E593C;
	case 50:
		goto loc_831E5554;
	case 51:
		goto loc_831E593C;
	case 52:
		goto loc_831E5790;
	case 53:
		goto loc_831E593C;
	case 54:
		goto loc_831E593C;
	case 55:
		goto loc_831E57A4;
	default:
		return;
	}
loc_831E5448:
	// andi. r11,r25,2096
	ctx.r11.u64 = ctx.r25.u64 & 2096;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e5458
	if (!cr0.eq) goto loc_831E5458;
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
loc_831E5458:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// beq 0x831e54b8
	if (cr0.eq) goto loc_831E54B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x831e7b08
	ctx.lr = 0x831E54A8;
	sub_831E7B08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831e54bc
	if (!cr0.lt) goto loc_831E54BC;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// b 0x831e54bc
	goto loc_831E54BC;
loc_831E54B8:
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
loc_831E54BC:
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// b 0x831e593c
	goto loc_831E593C;
loc_831E54C4:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e5514
	if (cr6.eq) goto loc_831E5514;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e5514
	if (cr6.eq) goto loc_831E5514;
	// rlwinm. r9,r25,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// beq 0x831e5508
	if (cr0.eq) goto loc_831E5508;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r20,1
	ctx.r20.s64 = 1;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// b 0x831e593c
	goto loc_831E593C;
loc_831E5508:
	// lha r26,0(r11)
	ctx.r26.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x831e593c
	goto loc_831E593C;
loc_831E5514:
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r27,5656(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5656);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_831E5524:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e5524
	if (!cr6.eq) goto loc_831E5524;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_831E5538:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x831e593c
	goto loc_831E593C;
loc_831E5544:
	// andi. r11,r25,2096
	ctx.r11.u64 = ctx.r25.u64 & 2096;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e5554
	if (!cr0.eq) goto loc_831E5554;
	// ori r25,r25,32
	ctx.r25.u64 = ctx.r25.u64 | 32;
loc_831E5554:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// bne cr6,0x831e5568
	if (!cr6.eq) goto loc_831E5568;
	// lis r30,32767
	ctx.r30.s64 = 2147418112;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// b 0x831e556c
	goto loc_831E556C;
loc_831E5568:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_831E556C:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq 0x831e55dc
	if (cr0.eq) goto loc_831E55DC;
	// bne cr6,0x831e5594
	if (!cr6.eq) goto loc_831E5594;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r27,5656(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5656);
loc_831E5594:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831e593c
	if (!cr6.gt) goto loc_831E593C;
loc_831E55A4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831e593c
	if (cr0.eq) goto loc_831E593C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831e23d0
	ctx.lr = 0x831E55BC;
	sub_831E23D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e55c8
	if (cr0.eq) goto loc_831E55C8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831E55C8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// blt cr6,0x831e55a4
	if (cr6.lt) goto loc_831E55A4;
	// b 0x831e593c
	goto loc_831E593C;
loc_831E55DC:
	// bne cr6,0x831e55e8
	if (!cr6.eq) goto loc_831E55E8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r27,5660(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5660);
loc_831E55E8:
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x831e5608
	goto loc_831E5608;
loc_831E55F4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831e5610
	if (cr0.eq) goto loc_831E5610;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_831E5608:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831e55f4
	if (!cr6.eq) goto loc_831E55F4;
loc_831E5610:
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// srawi r26,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
	// b 0x831e593c
	goto loc_831E593C;
loc_831E561C:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x831e7a18
	ctx.lr = 0x831E5630;
	sub_831E7A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e5138
	if (cr0.eq) goto loc_831E5138;
	// rlwinm. r11,r25,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5648
	if (cr0.eq) goto loc_831E5648;
	// sth r21,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r21.u16);
	// b 0x831e564c
	goto loc_831E564C;
loc_831E5648:
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_831E564C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x831e5ae4
	goto loc_831E5AE4;
loc_831E5658:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r18,1
	ctx.r18.s64 = 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_831E5664:
	// ori r25,r25,64
	ctx.r25.u64 = ctx.r25.u64 | 64;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bge cr6,0x831e5680
	if (!cr6.lt) goto loc_831E5680;
	// li r23,6
	ctx.r23.s64 = 6;
	// b 0x831e56d4
	goto loc_831E56D4;
loc_831E5680:
	// bne cr6,0x831e5698
	if (!cr6.eq) goto loc_831E5698;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bne cr6,0x831e56d4
	if (!cr6.eq) goto loc_831E56D4;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x831e56d4
	goto loc_831E56D4;
loc_831E5698:
	// cmpwi cr6,r23,512
	cr6.compare<int32_t>(ctx.r23.s32, 512, xer);
	// ble cr6,0x831e56a4
	if (!cr6.gt) goto loc_831E56A4;
	// li r23,512
	ctx.r23.s64 = 512;
loc_831E56A4:
	// cmpwi cr6,r23,163
	cr6.compare<int32_t>(ctx.r23.s32, 163, xer);
	// ble cr6,0x831e56d4
	if (!cr6.gt) goto loc_831E56D4;
	// addi r31,r23,349
	ctx.r31.s64 = ctx.r23.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x831E56B8;
	sub_831D2BF8(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e56d0
	if (cr0.eq) goto loc_831E56D0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x831e56d4
	goto loc_831E56D4;
loc_831E56D0:
	// li r23,163
	ctx.r23.s64 = 163;
loc_831E56D4:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// extsb r6,r29
	ctx.r6.s64 = ctx.r29.s8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x831E5710;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r31,r25,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831e5734
	if (cr0.eq) goto loc_831E5734;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x831e5734
	if (!cr6.eq) goto loc_831E5734;
	// lwz r11,36(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 36);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E5734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831E5734:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// bne cr6,0x831e575c
	if (!cr6.eq) goto loc_831E575C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x831e575c
	if (!cr6.eq) goto loc_831E575C;
	// lwz r11,32(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E575C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831E575C:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x831e5770
	if (!cr6.eq) goto loc_831E5770;
	// ori r25,r25,256
	ctx.r25.u64 = ctx.r25.u64 | 256;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_831E5770:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_831E5774:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e5774
	if (!cr6.eq) goto loc_831E5774;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// b 0x831e5538
	goto loc_831E5538;
loc_831E578C:
	// ori r25,r25,64
	ctx.r25.u64 = ctx.r25.u64 | 64;
loc_831E5790:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x831e57e0
	goto loc_831E57E0;
loc_831E5798:
	// li r23,8
	ctx.r23.s64 = 8;
loc_831E579C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x831e57a8
	goto loc_831E57A8;
loc_831E57A4:
	// li r11,39
	ctx.r11.s64 = 39;
loc_831E57A8:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rlwinm. r10,r25,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x831e57e0
	if (cr0.eq) goto loc_831E57E0;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r15,2
	ctx.r15.s64 = 2;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// b 0x831e57e0
	goto loc_831E57E0;
loc_831E57D0:
	// rlwinm. r11,r25,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x831e57e0
	if (cr0.eq) goto loc_831E57E0;
	// ori r25,r25,512
	ctx.r25.u64 = ctx.r25.u64 | 512;
loc_831E57E0:
	// rlwinm. r11,r25,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e57f0
	if (!cr0.eq) goto loc_831E57F0;
	// rlwinm. r11,r25,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5804
	if (cr0.eq) goto loc_831E5804;
loc_831E57F0:
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x831e5854
	goto loc_831E5854;
loc_831E5804:
	// rlwinm. r11,r25,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5834
	if (cr0.eq) goto loc_831E5834;
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x831e582c
	if (cr0.eq) goto loc_831E582C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x831e5854
	goto loc_831E5854;
loc_831E582C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x831e5854
	goto loc_831E5854;
loc_831E5834:
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r24,7
	ctx.r11.s64 = ctx.r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// beq 0x831e5850
	if (cr0.eq) goto loc_831E5850;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x831e5854
	goto loc_831E5854;
loc_831E5850:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831E5854:
	// rlwinm. r10,r25,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e586c
	if (cr0.eq) goto loc_831E586C;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x831e586c
	if (!cr6.lt) goto loc_831E586C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r25,r25,256
	ctx.r25.u64 = ctx.r25.u64 | 256;
loc_831E586C:
	// rlwinm. r10,r25,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e5880
	if (!cr0.eq) goto loc_831E5880;
	// rlwinm. r10,r25,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831e5880
	if (!cr0.eq) goto loc_831E5880;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_831E5880:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bge cr6,0x831e5890
	if (!cr6.lt) goto loc_831E5890;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x831e58a0
	goto loc_831E58A0;
loc_831E5890:
	// rlwinm r25,r25,0,29,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r23,512
	cr6.compare<int32_t>(ctx.r23.s32, 512, xer);
	// ble cr6,0x831e58a0
	if (!cr6.gt) goto loc_831E58A0;
	// li r23,512
	ctx.r23.s64 = 512;
loc_831E58A0:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x831e58ac
	if (!cr6.eq) goto loc_831E58AC;
	// li r15,0
	ctx.r15.s64 = 0;
loc_831E58AC:
	// addi r9,r1,639
	ctx.r9.s64 = ctx.r1.s64 + 639;
loc_831E58B0:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bgt cr6,0x831e58c4
	if (cr6.gt) goto loc_831E58C4;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x831e5908
	if (cr6.eq) goto loc_831E5908;
loc_831E58C4:
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
	// ble cr6,0x831e58f8
	if (!cr6.gt) goto loc_831E58F8;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_831E58F8:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x831e58b0
	goto loc_831E58B0;
loc_831E5908:
	// addi r11,r1,639
	ctx.r11.s64 = ctx.r1.s64 + 639;
	// rlwinm. r10,r25,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r26,r9,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// beq 0x831e593c
	if (cr0.eq) goto loc_831E593C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x831e5930
	if (cr6.eq) goto loc_831E5930;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831e593c
	if (cr6.eq) goto loc_831E593C;
loc_831E5930:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stbu r11,-1(r27)
	ea = -1 + ctx.r27.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r27.u32 = ea;
loc_831E593C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e5ae4
	if (!cr6.eq) goto loc_831E5AE4;
	// rlwinm. r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5984
	if (cr0.eq) goto loc_831E5984;
	// rlwinm. r11,r25,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5960
	if (cr0.eq) goto loc_831E5960;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x831e597c
	goto loc_831E597C;
loc_831E5960:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5970
	if (cr0.eq) goto loc_831E5970;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x831e597c
	goto loc_831E597C;
loc_831E5970:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5984
	if (cr0.eq) goto loc_831E5984;
	// li r11,32
	ctx.r11.s64 = 32;
loc_831E597C:
	// li r15,1
	ctx.r15.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_831E5984:
	// subf r11,r26,r14
	ctx.r11.s64 = ctx.r14.s64 - ctx.r26.s64;
	// rlwinm. r10,r25,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r28,r15,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r15.s64;
	// bne 0x831e59c8
	if (!cr0.eq) goto loc_831E59C8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831e59c8
	if (!cr6.gt) goto loc_831E59C8;
loc_831E59A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E59B4;
	sub_831E4FC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831e59c8
	if (cr6.eq) goto loc_831E59C8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e59a0
	if (cr6.gt) goto loc_831E59A0;
loc_831E59C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831e5028
	ctx.lr = 0x831E59DC;
	sub_831E5028(ctx, base);
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5a20
	if (cr0.eq) goto loc_831E5A20;
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e5a20
	if (!cr0.eq) goto loc_831E5A20;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831e5a20
	if (!cr6.gt) goto loc_831E5A20;
loc_831E59F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E5A0C;
	sub_831E4FC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831e5a20
	if (cr6.eq) goto loc_831E5A20;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e59f8
	if (cr6.gt) goto loc_831E59F8;
loc_831E5A20:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bne cr6,0x831e5a88
	if (!cr6.eq) goto loc_831E5A88;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x831e5a88
	if (!cr6.gt) goto loc_831E5A88;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_831E5A38:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x831e7b08
	ctx.lr = 0x831E5A54;
	sub_831E7B08(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x831e5a7c
	if (!cr0.gt) goto loc_831E5A7C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x831e4fc0
	ctx.lr = 0x831E5A6C;
	sub_831E4FC0(ctx, base);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e5a38
	if (cr6.gt) goto loc_831E5A38;
	// b 0x831e5a9c
	goto loc_831E5A9C;
loc_831E5A7C:
	// li r21,-1
	ctx.r21.s64 = -1;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// b 0x831e5aa0
	goto loc_831E5AA0;
loc_831E5A88:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e5028
	ctx.lr = 0x831E5A9C;
	sub_831E5028(ctx, base);
loc_831E5A9C:
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831E5AA0:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// blt cr6,0x831e5ae4
	if (cr6.lt) goto loc_831E5AE4;
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5ae4
	if (cr0.eq) goto loc_831E5AE4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831e5ae4
	if (!cr6.gt) goto loc_831E5AE4;
loc_831E5ABC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x831e4fc0
	ctx.lr = 0x831E5AD0;
	sub_831E4FC0(ctx, base);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(ctx.r21.s32, -1, xer);
	// beq cr6,0x831e5ae4
	if (cr6.eq) goto loc_831E5AE4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x831e5abc
	if (cr6.gt) goto loc_831E5ABC;
loc_831E5AE4:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e5afc
	if (cr6.eq) goto loc_831E5AFC;
	// bl 0x831cf100
	ctx.lr = 0x831E5AF4;
	sub_831CF100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_831E5AFC:
	// lhz r29,0(r17)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// mr. r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x831e5b14
	if (cr0.eq) goto loc_831E5B14;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831e51bc
	goto loc_831E51BC;
loc_831E5B14:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e5b28
	if (cr6.eq) goto loc_831E5B28;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x831e5138
	if (!cr6.eq) goto loc_831E5138;
loc_831E5B28:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x831e5b64
	goto loc_831E5B64;
loc_831E5B30:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x831e92c0
	ctx.lr = 0x831E5B44;
	sub_831E92C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831e5b58
	if (!cr6.eq) goto loc_831E5B58;
	// li r31,511
	ctx.r31.s64 = 511;
	// sth r30,2174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2174, ctx.r30.u16);
loc_831E5B58:
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x832d47b0
	ctx.lr = 0x831E5B60;
	sub_832D47B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831E5B64:
	// addi r1,r1,2336
	ctx.r1.s64 = ctx.r1.s64 + 2336;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E5B6C"))) PPC_WEAK_FUNC(sub_831E5B6C);
PPC_FUNC_IMPL(__imp__sub_831E5B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E5B70"))) PPC_WEAK_FUNC(sub_831E5B70);
PPC_FUNC_IMPL(__imp__sub_831E5B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10704(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10704);
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x831d9e80
	ctx.lr = 0x831E5B9C;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e5bfc
	if (cr6.eq) goto loc_831E5BFC;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r9,r11,3344
	ctx.r9.s64 = ctx.r11.s64 + 3344;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_831E5BBC:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e5bec
	if (cr6.eq) goto loc_831E5BEC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x831e5be0
	if (cr6.eq) goto loc_831E5BE0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e5bbc
	goto loc_831E5BBC;
loc_831E5BE0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x831cf100
	ctx.lr = 0x831E5BEC;
	sub_831CF100(ctx, base);
loc_831E5BEC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831cf100
	ctx.lr = 0x831E5BF4;
	sub_831CF100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_831E5BFC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831e5c20
	ctx.lr = 0x831E5C08;
	sub_831E5C20(ctx, base);
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

__attribute__((alias("__imp__sub_831E5B78"))) PPC_WEAK_FUNC(sub_831E5B78);
PPC_FUNC_IMPL(__imp__sub_831E5B78) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x831d9e80
	ctx.lr = 0x831E5B9C;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e5bfc
	if (cr6.eq) goto loc_831E5BFC;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r9,r11,3344
	ctx.r9.s64 = ctx.r11.s64 + 3344;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_831E5BBC:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e5bec
	if (cr6.eq) goto loc_831E5BEC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x831e5be0
	if (cr6.eq) goto loc_831E5BE0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e5bbc
	goto loc_831E5BBC;
loc_831E5BE0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x831cf100
	ctx.lr = 0x831E5BEC;
	sub_831CF100(ctx, base);
loc_831E5BEC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831cf100
	ctx.lr = 0x831E5BF4;
	sub_831CF100(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_831E5BFC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x831e5c20
	ctx.lr = 0x831E5C08;
	sub_831E5C20(ctx, base);
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

__attribute__((alias("__imp__sub_831E5C20"))) PPC_WEAK_FUNC(sub_831E5C20);
PPC_FUNC_IMPL(__imp__sub_831E5C20) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x831d9c00
	ctx.lr = 0x831E5C34;
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

__attribute__((alias("__imp__sub_831E5C44"))) PPC_WEAK_FUNC(sub_831E5C44);
PPC_FUNC_IMPL(__imp__sub_831E5C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E5C48"))) PPC_WEAK_FUNC(sub_831E5C48);
PPC_FUNC_IMPL(__imp__sub_831E5C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831E5C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,-4096
	ctx.r30.s64 = -4096;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e5c8c
	if (cr6.eq) goto loc_831E5C8C;
	// divwu r11,r30,r3
	ctx.r11.u32 = PPCDivide(ctx.r30.u32, ctx.r3.u32);
	// twllei r3,0
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x831e5c8c
	if (!cr6.lt) goto loc_831E5C8C;
	// bl 0x831d3050
	ctx.lr = 0x831E5C78;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e5d04
	goto loc_831E5D04;
loc_831E5C8C:
	// mullw. r31,r3,r4
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831e5c98
	if (!cr0.eq) goto loc_831E5C98;
	// li r31,1
	ctx.r31.s64 = 1;
loc_831E5C98:
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
loc_831E5C9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bgt cr6,0x831e5cc0
	if (cr6.gt) goto loc_831E5CC0;
	// bl 0x8241a538
	ctx.lr = 0x831E5CAC;
	sub_8241A538(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82418f88
	ctx.lr = 0x831E5CB8;
	sub_82418F88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831e5d04
	if (!cr0.eq) goto loc_831E5D04;
loc_831E5CC0:
	// lwz r11,3140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e5cf4
	if (cr6.eq) goto loc_831E5CF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d9fd0
	ctx.lr = 0x831E5CD4;
	sub_831D9FD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e5c9c
	if (!cr0.eq) goto loc_831E5C9C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831e5cec
	if (cr6.eq) goto loc_831E5CEC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_831E5CEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831e5d04
	goto loc_831E5D04;
loc_831E5CF4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831e5d04
	if (cr6.eq) goto loc_831E5D04;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_831E5D04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E5D0C"))) PPC_WEAK_FUNC(sub_831E5D0C);
PPC_FUNC_IMPL(__imp__sub_831E5D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E5D10"))) PPC_WEAK_FUNC(sub_831E5D10);
PPC_FUNC_IMPL(__imp__sub_831E5D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E5D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831e5d30
	if (!cr6.eq) goto loc_831E5D30;
	// bl 0x831d9f48
	ctx.lr = 0x831E5D30;
	sub_831D9F48(ctx, base);
loc_831E5D30:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831e5d40
	if (!cr6.eq) goto loc_831E5D40;
	// bl 0x831d9f48
	ctx.lr = 0x831E5D40;
	sub_831D9F48(ctx, base);
loc_831E5D40:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e5d50
	if (!cr6.eq) goto loc_831E5D50;
	// bl 0x831d9f48
	ctx.lr = 0x831E5D50;
	sub_831D9F48(ctx, base);
loc_831E5D50:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e5d84
	if (cr6.eq) goto loc_831E5D84;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
loc_831E5D64:
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x831e5d9c
	if (cr6.eq) goto loc_831E5D9C;
	// blt cr6,0x831e5dac
	if (cr6.lt) goto loc_831E5DAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// blt cr6,0x831e5d64
	if (cr6.lt) goto loc_831E5D64;
loc_831E5D84:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_831E5D90:
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_831E5D94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831E5D9C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831e5d94
	goto loc_831E5D94;
loc_831E5DAC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e5dbc
	if (!cr6.eq) goto loc_831E5DBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e5d94
	goto loc_831E5D94;
loc_831E5DBC:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x831e5d90
	goto loc_831E5D90;
}

__attribute__((alias("__imp__sub_831E5DC8"))) PPC_WEAK_FUNC(sub_831E5DC8);
PPC_FUNC_IMPL(__imp__sub_831E5DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e5df8
	if (cr6.eq) goto loc_831E5DF8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e5df8
	if (cr6.eq) goto loc_831E5DF8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, xer);
	// beq cr6,0x831e5df8
	if (cr6.eq) goto loc_831E5DF8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_831E5DF8:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x831e5d10
	sub_831E5D10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E5E04"))) PPC_WEAK_FUNC(sub_831E5E04);
PPC_FUNC_IMPL(__imp__sub_831E5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E5E08"))) PPC_WEAK_FUNC(sub_831E5E08);
PPC_FUNC_IMPL(__imp__sub_831E5E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
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
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E5E28"))) PPC_WEAK_FUNC(sub_831E5E28);
PPC_FUNC_IMPL(__imp__sub_831E5E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e5ecc
	if (cr6.eq) goto loc_831E5ECC;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x831e5ecc
	if (cr0.eq) goto loc_831E5ECC;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x831e5e88
	if (cr6.eq) goto loc_831E5E88;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_831E5E54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x831e5e78
	if (cr0.eq) goto loc_831E5E78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831e5e54
	if (cr6.eq) goto loc_831E5E54;
loc_831E5E78:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831e5e88
	if (cr0.eq) goto loc_831E5E88;
loc_831E5E80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831E5E88:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5ea0
	if (cr0.eq) goto loc_831E5EA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5e80
	if (cr0.eq) goto loc_831E5E80;
loc_831E5EA0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e5eb8
	if (cr0.eq) goto loc_831E5EB8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e5e80
	if (cr0.eq) goto loc_831E5E80;
loc_831E5EB8:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5ecc
	if (cr0.eq) goto loc_831E5ECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5e80
	if (cr0.eq) goto loc_831E5E80;
loc_831E5ECC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E5ED4"))) PPC_WEAK_FUNC(sub_831E5ED4);
PPC_FUNC_IMPL(__imp__sub_831E5ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E5ED8"))) PPC_WEAK_FUNC(sub_831E5ED8);
PPC_FUNC_IMPL(__imp__sub_831E5ED8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-8125
	ctx.r10.s64 = -532480000;
	// ori r10,r10,17234
	ctx.r10.u64 = ctx.r10.u64 | 17234;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e5f24
	if (cr0.eq) goto loc_831E5F24;
	// cmplwi cr6,r11,3067
	cr6.compare<uint32_t>(ctx.r11.u32, 3067, xer);
	// beq cr6,0x831e5f24
	if (cr6.eq) goto loc_831E5F24;
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// ori r10,r10,12305
	ctx.r10.u64 = ctx.r10.u64 | 12305;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831e5f48
	if (!cr6.eq) goto loc_831E5F48;
	// bl 0x831ce1d0
	ctx.lr = 0x831E5F18;
	sub_831CE1D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// bl 0x831d9ee8
	ctx.lr = 0x831E5F24;
	sub_831D9EE8(ctx, base);
loc_831E5F24:
	// bl 0x831ce1d0
	ctx.lr = 0x831E5F28;
	sub_831CE1D0(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831e5f48
	if (!cr6.gt) goto loc_831E5F48;
	// bl 0x831ce1d0
	ctx.lr = 0x831E5F38;
	sub_831CE1D0(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_831E5F48:
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

__attribute__((alias("__imp__sub_831E5F5C"))) PPC_WEAK_FUNC(sub_831E5F5C);
PPC_FUNC_IMPL(__imp__sub_831E5F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E5F60"))) PPC_WEAK_FUNC(sub_831E5F60);
PPC_FUNC_IMPL(__imp__sub_831E5F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10728(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10728);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831E5F70;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// bl 0x831e5dc8
	ctx.lr = 0x831E5F9C;
	sub_831E5DC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// beq cr6,0x831e5fd8
	if (cr6.eq) goto loc_831E5FD8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_831E5FB4:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e5fd8
	if (!cr6.eq) goto loc_831E5FD8;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// stw r27,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// bne cr6,0x831e5fb4
	if (!cr6.eq) goto loc_831E5FB4;
loc_831E5FD8:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// bne cr6,0x831e5fe8
	if (!cr6.eq) goto loc_831E5FE8;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// beq cr6,0x831e60dc
	if (cr6.eq) {
		// ERROR 831E60DC
		return;
	}
loc_831E5FE8:
	// bl 0x831ce1d0
	ctx.lr = 0x831E5FEC;
	sub_831CE1D0(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, xer);
	// beq cr6,0x831e60a8
	if (cr6.eq) {
		sub_831E60A8(ctx, base);
		return;
	}
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// ble cr6,0x831e601c
	if (!cr6.gt) goto loc_831E601C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x831e6020
	if (cr6.lt) goto loc_831E6020;
loc_831E601C:
	// bl 0x831d9f48
	ctx.lr = 0x831E6020;
	sub_831D9F48(ctx, base);
loc_831E6020:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r29,r28,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6078
	if (cr6.eq) goto loc_831E6078;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831e5e08
	ctx.lr = 0x831E605C;
	sub_831E5E08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x831e92d0
	ctx.lr = 0x831E6078;
	sub_831E92D0(ctx, base);
loc_831E6078:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e609c
	// ERROR 831E609C
	return;
}

__attribute__((alias("__imp__sub_831E5F68"))) PPC_WEAK_FUNC(sub_831E5F68);
PPC_FUNC_IMPL(__imp__sub_831E5F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831E5F70;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// bl 0x831e5dc8
	ctx.lr = 0x831E5F9C;
	sub_831E5DC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// beq cr6,0x831e5fd8
	if (cr6.eq) goto loc_831E5FD8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_831E5FB4:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e5fd8
	if (!cr6.eq) goto loc_831E5FD8;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// stw r27,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// bne cr6,0x831e5fb4
	if (!cr6.eq) goto loc_831E5FB4;
loc_831E5FD8:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// bne cr6,0x831e5fe8
	if (!cr6.eq) goto loc_831E5FE8;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// beq cr6,0x831e60dc
	if (cr6.eq) goto loc_831E60DC;
loc_831E5FE8:
	// bl 0x831ce1d0
	ctx.lr = 0x831E5FEC;
	sub_831CE1D0(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831E6000:
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, xer);
	// beq cr6,0x831e60a8
	if (cr6.eq) goto loc_831E60A8;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// ble cr6,0x831e601c
	if (!cr6.gt) goto loc_831E601C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x831e6020
	if (cr6.lt) goto loc_831E6020;
loc_831E601C:
	// bl 0x831d9f48
	ctx.lr = 0x831E6020;
	sub_831D9F48(ctx, base);
loc_831E6020:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r29,r28,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6078
	if (cr6.eq) goto loc_831E6078;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831e5e08
	ctx.lr = 0x831E605C;
	sub_831E5E08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x831e92d0
	ctx.lr = 0x831E6078;
	sub_831E92D0(ctx, base);
loc_831E6078:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e609c
	goto loc_831E609C;
	// lwz r27,204(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r25,188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r26,180(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_831E609C:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e6000
	goto loc_831E6000;
loc_831E60A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831e60e4
	ctx.lr = 0x831E60B4;
	sub_831E60E4(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x831e60c8
	if (cr6.eq) goto loc_831E60C8;
	// bl 0x831d9f48
	ctx.lr = 0x831E60C8;
	sub_831D9F48(ctx, base);
loc_831E60C8:
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x831e5e08
	ctx.lr = 0x831E60DC;
	sub_831E5E08(ctx, base);
loc_831E60DC:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E6088"))) PPC_WEAK_FUNC(sub_831E6088);
PPC_FUNC_IMPL(__imp__sub_831E6088) {
	PPC_FUNC_PROLOGUE();
	// lwz r27,204(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r30,196(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r25,188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r26,180(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e6000
	// ERROR 831E6000
	return;
}

__attribute__((alias("__imp__sub_831E60A8"))) PPC_WEAK_FUNC(sub_831E60A8);
PPC_FUNC_IMPL(__imp__sub_831E60A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x831e60e4
	ctx.lr = 0x831E60B4;
	sub_831E60E4(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x831e60c8
	if (cr6.eq) goto loc_831E60C8;
	// bl 0x831d9f48
	ctx.lr = 0x831E60C8;
	sub_831D9F48(ctx, base);
loc_831E60C8:
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x831e5e08
	ctx.lr = 0x831E60DC;
	sub_831E5E08(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E60E4"))) PPC_WEAK_FUNC(sub_831E60E4);
PPC_FUNC_IMPL(__imp__sub_831E60E4) {
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
	// bl 0x831ce1d0
	ctx.lr = 0x831E60F4;
	sub_831CE1D0(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831e6114
	if (!cr6.gt) goto loc_831E6114;
	// bl 0x831ce1d0
	ctx.lr = 0x831E6104;
	sub_831CE1D0(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_831E6114:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6124"))) PPC_WEAK_FUNC(sub_831E6124);
PPC_FUNC_IMPL(__imp__sub_831E6124) {
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
	// bl 0x831e5ed8
	ctx.lr = 0x831E6134;
	sub_831E5ED8(ctx, base);
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

__attribute__((alias("__imp__sub_831E6148"))) PPC_WEAK_FUNC(sub_831E6148);
PPC_FUNC_IMPL(__imp__sub_831E6148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r11,r11,102
	ctx.r11.u64 = ctx.r11.u64 & 102;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831e6160
	if (!cr0.eq) goto loc_831E6160;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831E6160:
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 48);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 56);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// ld r11,64(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 64);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6184"))) PPC_WEAK_FUNC(sub_831E6184);
PPC_FUNC_IMPL(__imp__sub_831E6184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E6188"))) PPC_WEAK_FUNC(sub_831E6188);
PPC_FUNC_IMPL(__imp__sub_831E6188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10768(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10768);
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
	// stb r4,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r4.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e6204
	if (cr6.eq) {
		// ERROR 831E6204
		return;
	}
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831e6204
	if (!cr6.eq) {
		// ERROR 831E6204
		return;
	}
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6204
	if (cr6.eq) {
		// ERROR 831E6204
		return;
	}
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6204
	if (cr6.eq) {
		// ERROR 831E6204
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E61F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e6204
	// ERROR 831E6204
	return;
}

__attribute__((alias("__imp__sub_831E6190"))) PPC_WEAK_FUNC(sub_831E6190);
PPC_FUNC_IMPL(__imp__sub_831E6190) {
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
	// stb r4,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r4.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e6204
	if (cr6.eq) goto loc_831E6204;
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831e6204
	if (!cr6.eq) goto loc_831E6204;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6204
	if (cr6.eq) goto loc_831E6204;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6204
	if (cr6.eq) goto loc_831E6204;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E61F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e6204
	goto loc_831E6204;
	// bl 0x831d9ee8
	ctx.lr = 0x831E6204;
	sub_831D9EE8(ctx, base);
loc_831E6204:
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

__attribute__((alias("__imp__sub_831E6200"))) PPC_WEAK_FUNC(sub_831E6200);
PPC_FUNC_IMPL(__imp__sub_831E6200) {
	PPC_FUNC_PROLOGUE();
	// bl 0x831d9ee8
	ctx.lr = 0x831E6204;
	sub_831D9EE8(ctx, base);
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

__attribute__((alias("__imp__sub_831E6218"))) PPC_WEAK_FUNC(sub_831E6218);
PPC_FUNC_IMPL(__imp__sub_831E6218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-96
	ctx.r31.s64 = ctx.r12.s64 + -96;
	// lbz r11,127(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 127);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6238"))) PPC_WEAK_FUNC(sub_831E6238);
PPC_FUNC_IMPL(__imp__sub_831E6238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831E6240;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x831ce1d0
	ctx.lr = 0x831E6260;
	sub_831CE1D0(ctx, base);
	// lwz r25,124(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6268;
	sub_831CE1D0(ctx, base);
	// lwz r24,128(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6270;
	sub_831CE1D0(ctx, base);
	// stw r30,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6278;
	sub_831CE1D0(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r28,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x831e92d0
	ctx.lr = 0x831E62A8;
	sub_831E92D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d9a38
	ctx.lr = 0x831E62B4;
	sub_831D9A38(ctx, base);
	// bl 0x831ce1d0
	ctx.lr = 0x831E62B8;
	sub_831CE1D0(ctx, base);
	// stw r25,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r25.u32);
	// bl 0x831ce1d0
	ctx.lr = 0x831E62C0;
	sub_831CE1D0(ctx, base);
	// stw r24,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831e62f0
	if (cr6.eq) goto loc_831E62F0;
	// bl 0x831d99e0
	ctx.lr = 0x831E62D4;
	sub_831D99E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e62f0
	if (cr0.eq) goto loc_831E62F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e6190
	ctx.lr = 0x831E62E8;
	sub_831E6190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E62F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E62FC"))) PPC_WEAK_FUNC(sub_831E62FC);
PPC_FUNC_IMPL(__imp__sub_831E62FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E6300"))) PPC_WEAK_FUNC(sub_831E6300);
PPC_FUNC_IMPL(__imp__sub_831E6300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10792(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10792);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831E6310;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6578
	if (cr6.eq) {
		sub_831E6578(ctx, base);
		return;
	}
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831e6578
	if (cr0.eq) {
		sub_831E6578(ctx, base);
		return;
	}
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e6358
	if (!cr6.eq) goto loc_831E6358;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e6578
	if (cr0.eq) {
		sub_831E6578(ctx, base);
		return;
	}
loc_831E6358:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bne 0x831e636c
	if (!cr0.eq) goto loc_831E636C;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_831E636C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// beq 0x831e63f4
	if (cr0.eq) goto loc_831E63F4;
	// bl 0x831e93f0
	ctx.lr = 0x831E638C;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E63A0;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// blt cr6,0x831e63ec
	if (cr6.lt) goto loc_831E63EC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
loc_831E63EC:
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// b 0x831e655c
	goto loc_831E655C;
loc_831E63F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e648c
	if (cr0.eq) goto loc_831E648C;
	// bl 0x831e93f0
	ctx.lr = 0x831E6404;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E6418;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x831ce420
	ctx.lr = 0x831E6430;
	sub_831CE420(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x831e655c
	if (!cr6.eq) goto loc_831E655C;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831e655c
	if (cr6.eq) goto loc_831E655C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// blt cr6,0x831e6484
	if (cr6.lt) goto loc_831E6484;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_831E6484:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x831e655c
	goto loc_831E655C;
loc_831E648C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e6508
	if (!cr6.eq) goto loc_831E6508;
	// bl 0x831e93f0
	ctx.lr = 0x831E649C;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E64B0;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// blt cr6,0x831e64f8
	if (cr6.lt) goto loc_831E64F8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
loc_831E64F8:
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x831E6504;
	sub_831CE420(ctx, base);
	// b 0x831e655c
	goto loc_831E655C;
loc_831E6508:
	// bl 0x831e93f0
	ctx.lr = 0x831E650C;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E6520;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x831e93f0
	ctx.lr = 0x831E6530;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x831e655c
	goto loc_831E655C;
loc_831E6558:
	// bl 0x831d9f48
	ctx.lr = 0x831E655C;
	sub_831D9F48(ctx, base);
loc_831E655C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e6570
	// ERROR 831E6570
	return;
}

__attribute__((alias("__imp__sub_831E6308"))) PPC_WEAK_FUNC(sub_831E6308);
PPC_FUNC_IMPL(__imp__sub_831E6308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831E6310;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6578
	if (cr6.eq) goto loc_831E6578;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831e6578
	if (cr0.eq) goto loc_831E6578;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e6358
	if (!cr6.eq) goto loc_831E6358;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e6578
	if (cr0.eq) goto loc_831E6578;
loc_831E6358:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bne 0x831e636c
	if (!cr0.eq) goto loc_831E636C;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_831E636C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// beq 0x831e63f4
	if (cr0.eq) goto loc_831E63F4;
	// bl 0x831e93f0
	ctx.lr = 0x831E638C;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E63A0;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// blt cr6,0x831e63ec
	if (cr6.lt) goto loc_831E63EC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
loc_831E63EC:
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// b 0x831e655c
	goto loc_831E655C;
loc_831E63F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e648c
	if (cr0.eq) goto loc_831E648C;
	// bl 0x831e93f0
	ctx.lr = 0x831E6404;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E6418;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x831ce420
	ctx.lr = 0x831E6430;
	sub_831CE420(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x831e655c
	if (!cr6.eq) goto loc_831E655C;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831e655c
	if (cr6.eq) goto loc_831E655C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// blt cr6,0x831e6484
	if (cr6.lt) goto loc_831E6484;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_831E6484:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x831e655c
	goto loc_831E655C;
loc_831E648C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e6508
	if (!cr6.eq) goto loc_831E6508;
	// bl 0x831e93f0
	ctx.lr = 0x831E649C;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E64B0;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// blt cr6,0x831e64f8
	if (cr6.lt) goto loc_831E64F8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
loc_831E64F8:
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x831E6504;
	sub_831CE420(ctx, base);
	// b 0x831e655c
	goto loc_831E655C;
loc_831E6508:
	// bl 0x831e93f0
	ctx.lr = 0x831E650C;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E6520;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x831e93f0
	ctx.lr = 0x831E6530;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6558
	if (cr0.eq) goto loc_831E6558;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x831e655c
	goto loc_831E655C;
loc_831E6558:
	// bl 0x831d9f48
	ctx.lr = 0x831E655C;
	sub_831D9F48(ctx, base);
loc_831E655C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e6570
	goto loc_831E6570;
	// bl 0x831d9ee8
	ctx.lr = 0x831E6570;
	sub_831D9EE8(ctx, base);
loc_831E6570:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x831e657c
	goto loc_831E657C;
loc_831E6578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E657C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E656C"))) PPC_WEAK_FUNC(sub_831E656C);
PPC_FUNC_IMPL(__imp__sub_831E656C) {
	PPC_FUNC_PROLOGUE();
	// bl 0x831d9ee8
	ctx.lr = 0x831E6570;
	sub_831D9EE8(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x831e657c
	// ERROR 831E657C
	return;
}

__attribute__((alias("__imp__sub_831E6578"))) PPC_WEAK_FUNC(sub_831E6578);
PPC_FUNC_IMPL(__imp__sub_831E6578) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E6584"))) PPC_WEAK_FUNC(sub_831E6584);
PPC_FUNC_IMPL(__imp__sub_831E6584) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6590"))) PPC_WEAK_FUNC(sub_831E6590);
PPC_FUNC_IMPL(__imp__sub_831E6590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10816(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10816);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831E65A0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e65c4
	if (cr0.eq) goto loc_831E65C4;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// b 0x831e65cc
	goto loc_831E65CC;
loc_831E65C4:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_831E65CC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e6308
	ctx.lr = 0x831E65E4;
	sub_831E6308(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831e664c
	if (cr6.eq) goto loc_831E664C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831e669c
	if (!cr6.eq) goto loc_831E669C;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// blt cr6,0x831e6634
	if (cr6.lt) goto loc_831E6634;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
loc_831E6634:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E6648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831e669c
	goto loc_831E669C;
loc_831E664C:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// blt cr6,0x831e668c
	if (cr6.lt) goto loc_831E668C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
loc_831E668C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E669C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831E669C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e66b0
	// ERROR 831E66B0
	return;
}

__attribute__((alias("__imp__sub_831E6598"))) PPC_WEAK_FUNC(sub_831E6598);
PPC_FUNC_IMPL(__imp__sub_831E6598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831E65A0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e65c4
	if (cr0.eq) goto loc_831E65C4;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// b 0x831e65cc
	goto loc_831E65CC;
loc_831E65C4:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_831E65CC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831e6308
	ctx.lr = 0x831E65E4;
	sub_831E6308(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831e664c
	if (cr6.eq) goto loc_831E664C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831e669c
	if (!cr6.eq) goto loc_831E669C;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// blt cr6,0x831e6634
	if (cr6.lt) goto loc_831E6634;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
loc_831E6634:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E6648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831e669c
	goto loc_831E669C;
loc_831E664C:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// blt cr6,0x831e668c
	if (cr6.lt) goto loc_831E668C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
loc_831E668C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E669C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831E669C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e66b0
	goto loc_831E66B0;
	// bl 0x831d9ee8
	ctx.lr = 0x831E66B0;
	sub_831D9EE8(ctx, base);
loc_831E66B0:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E66AC"))) PPC_WEAK_FUNC(sub_831E66AC);
PPC_FUNC_IMPL(__imp__sub_831E66AC) {
	PPC_FUNC_PROLOGUE();
	// bl 0x831d9ee8
	ctx.lr = 0x831E66B0;
	sub_831D9EE8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E66B8"))) PPC_WEAK_FUNC(sub_831E66B8);
PPC_FUNC_IMPL(__imp__sub_831E66B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E66C4"))) PPC_WEAK_FUNC(sub_831E66C4);
PPC_FUNC_IMPL(__imp__sub_831E66C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E66C8"))) PPC_WEAK_FUNC(sub_831E66C8);
PPC_FUNC_IMPL(__imp__sub_831E66C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x831E66D0;
	__savegprlr_21(ctx, base);
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x831d94f0
	ctx.lr = 0x831E6700;
	sub_831D94F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d9518
	ctx.lr = 0x831E6710;
	sub_831D9518(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// li r21,0
	ctx.r21.s64 = 0;
	// bne 0x831e6738
	if (!cr0.eq) goto loc_831E6738;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
loc_831E6738:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x831e6754
	if (cr6.eq) goto loc_831E6754;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e6598
	ctx.lr = 0x831E6754;
	sub_831E6598(ctx, base);
loc_831E6754:
	// bl 0x831ce1d0
	ctx.lr = 0x831E6758;
	sub_831CE1D0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d9928
	ctx.lr = 0x831E676C;
	sub_831D9928(ctx, base);
	// lwz r11,2916(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2916);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bne cr6,0x831e6784
	if (!cr6.eq) goto loc_831E6784;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_831E6784:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831e9410
	ctx.lr = 0x831E6790;
	sub_831E9410(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e5f68
	ctx.lr = 0x831E67A4;
	sub_831E5F68(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x831e5e08
	ctx.lr = 0x831E67BC;
	sub_831E5E08(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bl 0x831ce1d0
	ctx.lr = 0x831E67C4;
	sub_831CE1D0(ctx, base);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r7,12(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831e94bc
	ctx.lr = 0x831E67E8;
	sub_831E94BC(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e6804
	if (cr0.eq) goto loc_831E6804;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne cr6,0x831e67fc
	if (!cr6.eq) goto loc_831E67FC;
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
loc_831E67FC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x831e932c
	ctx.lr = 0x831E6804;
	sub_831E932C(ctx, base);
loc_831E6804:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E680C"))) PPC_WEAK_FUNC(sub_831E680C);
PPC_FUNC_IMPL(__imp__sub_831E680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E6810"))) PPC_WEAK_FUNC(sub_831E6810);
PPC_FUNC_IMPL(__imp__sub_831E6810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831E6818;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e6980
	if (cr6.eq) goto loc_831E6980;
	// bl 0x831ce1d0
	ctx.lr = 0x831E6854;
	sub_831CE1D0(ctx, base);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e68bc
	if (cr6.eq) goto loc_831E68BC;
	// bl 0x831ce1d0
	ctx.lr = 0x831E6864;
	sub_831CE1D0(ctx, base);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e68bc
	if (cr6.eq) goto loc_831E68BC;
	// lis r10,-8125
	ctx.r10.s64 = -532480000;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r10,r10,20301
	ctx.r10.u64 = ctx.r10.u64 | 20301;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831e68bc
	if (cr6.eq) goto loc_831E68BC;
	// lis r10,-8125
	ctx.r10.s64 = -532480000;
	// ori r10,r10,17234
	ctx.r10.u64 = ctx.r10.u64 | 17234;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831e68bc
	if (cr6.eq) goto loc_831E68BC;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831d9710
	ctx.lr = 0x831E68B4;
	sub_831D9710(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e6980
	if (!cr0.eq) goto loc_831E6980;
loc_831E68BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e68cc
	if (!cr6.eq) goto loc_831E68CC;
	// bl 0x831d9f48
	ctx.lr = 0x831E68CC;
	sub_831D9F48(ctx, base);
loc_831E68CC:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d97d0
	ctx.lr = 0x831E68E8;
	sub_831D97D0(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e6980
	if (!cr6.lt) goto loc_831E6980;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
loc_831E68FC:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// addi r10,r30,-12
	ctx.r10.s64 = ctx.r30.s64 + -12;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x831e6968
	if (cr6.lt) goto loc_831E6968;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// bgt cr6,0x831e6968
	if (cr6.gt) goto loc_831E6968;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831e6940
	if (cr6.eq) goto loc_831E6940;
	// lbz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x831e6968
	if (!cr0.eq) goto loc_831E6968;
loc_831E6940:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831e66c8
	ctx.lr = 0x831E6964;
	sub_831E66C8(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_831E6968:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e68fc
	if (cr6.lt) goto loc_831E68FC;
loc_831E6980:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E6988"))) PPC_WEAK_FUNC(sub_831E6988);
PPC_FUNC_IMPL(__imp__sub_831E6988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x831E6990;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// bl 0x831e5dc8
	ctx.lr = 0x831E69C4;
	sub_831E5DC8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// blt cr6,0x831e69dc
	if (cr6.lt) goto loc_831E69DC;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x831e69e0
	if (cr6.lt) goto loc_831E69E0;
loc_831E69DC:
	// bl 0x831d9f48
	ctx.lr = 0x831E69E0;
	sub_831D9F48(ctx, base);
loc_831E69E0:
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r28,r11,29539
	ctx.r28.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x831e6bf8
	if (!cr6.eq) goto loc_831E6BF8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lis r9,6547
	ctx.r9.s64 = 429064192;
	// lis r8,6547
	ctx.r8.s64 = 429064192;
	// ori r30,r10,1312
	ctx.r30.u64 = ctx.r10.u64 | 1312;
	// ori r29,r9,1313
	ctx.r29.u64 = ctx.r9.u64 | 1313;
	// ori r27,r8,1314
	ctx.r27.u64 = ctx.r8.u64 | 1314;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x831e6abc
	if (!cr6.eq) goto loc_831E6ABC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x831e6a34
	if (cr6.eq) goto loc_831E6A34;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x831e6a34
	if (cr6.eq) goto loc_831E6A34;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x831e6abc
	if (!cr6.eq) goto loc_831E6ABC;
loc_831E6A34:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e6abc
	if (!cr6.eq) goto loc_831E6ABC;
	// bl 0x831ce1d0
	ctx.lr = 0x831E6A44;
	sub_831CE1D0(ctx, base);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6bf0
	if (cr6.eq) goto loc_831E6BF0;
	// bl 0x831ce1d0
	ctx.lr = 0x831E6A54;
	sub_831CE1D0(ctx, base);
	// lwz r31,124(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6A5C;
	sub_831CE1D0(ctx, base);
	// lwz r19,128(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e93f0
	ctx.lr = 0x831E6A6C;
	sub_831E93F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e6a78
	if (!cr0.eq) goto loc_831E6A78;
	// bl 0x831d9f48
	ctx.lr = 0x831E6A78;
	sub_831D9F48(ctx, base);
loc_831E6A78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x831e6bf8
	if (!cr6.eq) goto loc_831E6BF8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x831e6abc
	if (!cr6.eq) goto loc_831E6ABC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x831e6aac
	if (cr6.eq) goto loc_831E6AAC;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x831e6aac
	if (cr6.eq) goto loc_831E6AAC;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x831e6abc
	if (!cr6.eq) goto loc_831E6ABC;
loc_831E6AAC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e6abc
	if (!cr6.eq) goto loc_831E6ABC;
	// bl 0x831d9f48
	ctx.lr = 0x831E6ABC;
	sub_831D9F48(ctx, base);
loc_831E6ABC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x831e6bf8
	if (!cr6.eq) goto loc_831E6BF8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x831e6bf8
	if (!cr6.eq) goto loc_831E6BF8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x831e6af0
	if (cr6.eq) goto loc_831E6AF0;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x831e6af0
	if (cr6.eq) goto loc_831E6AF0;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x831e6bf8
	if (!cr6.eq) goto loc_831E6BF8;
loc_831E6AF0:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x831e6bf0
	if (!cr6.gt) goto loc_831E6BF0;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831d97d0
	ctx.lr = 0x831E6B18;
	sub_831D97D0(ctx, base);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e6bf0
	if (!cr6.lt) goto loc_831E6BF0;
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
loc_831E6B2C:
	// lwz r11,-16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16);
	// addi r26,r25,-16
	ctx.r26.s64 = ctx.r25.s64 + -16;
	// cmpw cr6,r11,r20
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, xer);
	// bgt cr6,0x831e6bd8
	if (cr6.gt) goto loc_831E6BD8;
	// lwz r11,-12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12);
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// bgt cr6,0x831e6bd8
	if (cr6.gt) goto loc_831E6BD8;
	// lwz r27,-4(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x831e6bd8
	if (!cr6.gt) goto loc_831E6BD8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_831E6B68:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi r29,0
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x831e6b9c
	if (!cr0.gt) goto loc_831E6B9C;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_831E6B7C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x831e5e28
	ctx.lr = 0x831E6B88;
	sub_831E5E28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e6bac
	if (!cr0.eq) goto loc_831E6BAC;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bgt 0x831e6b7c
	if (cr0.gt) goto loc_831E6B7C;
loc_831E6B9C:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bgt 0x831e6b68
	if (cr0.gt) goto loc_831E6B68;
	// b 0x831e6bd8
	goto loc_831E6BD8;
loc_831E6BAC:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e66c8
	ctx.lr = 0x831E6BD4;
	sub_831E66C8(ctx, base);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_831E6BD8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e6b2c
	if (cr6.lt) goto loc_831E6B2C;
loc_831E6BF0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_831E6BF8:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x831e6bf0
	if (!cr6.gt) goto loc_831E6BF0;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e6c34
	if (!cr0.eq) goto loc_831E6C34;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e6810
	ctx.lr = 0x831E6C30;
	sub_831E6810(ctx, base);
	// b 0x831e6bf0
	goto loc_831E6BF0;
loc_831E6C34:
	// bl 0x831d9ee8
	ctx.lr = 0x831E6C38;
	sub_831D9EE8(ctx, base);
}

__attribute__((alias("__imp__sub_831E6C38"))) PPC_WEAK_FUNC(sub_831E6C38);
PPC_FUNC_IMPL(__imp__sub_831E6C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10840(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10840);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831E6C48;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r7,r10,102
	ctx.r7.u64 = ctx.r10.u64 & 102;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x831e6dac
	if (cr0.eq) {
		sub_831E6DAC(ctx, base);
		return;
	}
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e6e3c
	if (cr6.eq) {
		// ERROR 831E6E3C
		return;
	}
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x831e6e3c
	if (!cr6.eq) {
		// ERROR 831E6E3C
		return;
	}
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e6d04
	if (cr0.eq) goto loc_831E6D04;
	// bl 0x831d94c8
	ctx.lr = 0x831E6C94;
	sub_831D94C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e6d04
	if (cr0.eq) goto loc_831E6D04;
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CA0;
	sub_831CE1D0(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e6cb0
	if (!cr6.eq) goto loc_831E6CB0;
	// bl 0x831d9f48
	ctx.lr = 0x831E6CB0;
	sub_831D9F48(ctx, base);
loc_831E6CB0:
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CB4;
	sub_831CE1D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x831d9510
	ctx.lr = 0x831E6CC0;
	sub_831D9510(ctx, base);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CC8;
	sub_831CE1D0(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r29,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r29.u64);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CD8;
	sub_831CE1D0(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r29,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r29.u64);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CE8;
	sub_831CE1D0(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r30,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r30.u64);
	// bl 0x831d94c8
	ctx.lr = 0x831E6CF4;
	sub_831D94C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d9510
	ctx.lr = 0x831E6D00;
	sub_831D9510(ctx, base);
	// b 0x831e6e3c
	// ERROR 831E6E3C
	return;
loc_831E6D04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831d95a0
	ctx.lr = 0x831E6D14;
	sub_831D95A0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6e3c
	if (cr6.eq) {
		// ERROR 831E6E3C
		return;
	}
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x831e6e3c
	if (cr6.eq) {
		// ERROR 831E6E3C
		return;
	}
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831e6e3c
	if (cr6.eq) {
		// ERROR 831E6E3C
		return;
	}
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x831d9a38
	ctx.lr = 0x831E6D4C;
	sub_831D9A38(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831d99e0
	ctx.lr = 0x831E6D54;
	sub_831D99E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6da0
	if (cr0.eq) {
		// ERROR 831E6DA0
		return;
	}
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6da0
	if (cr6.eq) {
		// ERROR 831E6DA0
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E6D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e6d98
	// ERROR 831E6D98
	return;
}

__attribute__((alias("__imp__sub_831E6C40"))) PPC_WEAK_FUNC(sub_831E6C40);
PPC_FUNC_IMPL(__imp__sub_831E6C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831E6C48;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r7,r10,102
	ctx.r7.u64 = ctx.r10.u64 & 102;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x831e6dac
	if (cr0.eq) goto loc_831E6DAC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831e6e3c
	if (cr6.eq) goto loc_831E6E3C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x831e6e3c
	if (!cr6.eq) goto loc_831E6E3C;
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e6d04
	if (cr0.eq) goto loc_831E6D04;
	// bl 0x831d94c8
	ctx.lr = 0x831E6C94;
	sub_831D94C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e6d04
	if (cr0.eq) goto loc_831E6D04;
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CA0;
	sub_831CE1D0(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e6cb0
	if (!cr6.eq) goto loc_831E6CB0;
	// bl 0x831d9f48
	ctx.lr = 0x831E6CB0;
	sub_831D9F48(ctx, base);
loc_831E6CB0:
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CB4;
	sub_831CE1D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x831d9510
	ctx.lr = 0x831E6CC0;
	sub_831D9510(ctx, base);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CC8;
	sub_831CE1D0(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r29,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r29.u64);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CD8;
	sub_831CE1D0(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r29,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r29.u64);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831ce1d0
	ctx.lr = 0x831E6CE8;
	sub_831CE1D0(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// std r30,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r30.u64);
	// bl 0x831d94c8
	ctx.lr = 0x831E6CF4;
	sub_831D94C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d9510
	ctx.lr = 0x831E6D00;
	sub_831D9510(ctx, base);
	// b 0x831e6e3c
	goto loc_831E6E3C;
loc_831E6D04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831d95a0
	ctx.lr = 0x831E6D14;
	sub_831D95A0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6e3c
	if (cr6.eq) goto loc_831E6E3C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x831e6e3c
	if (cr6.eq) goto loc_831E6E3C;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831e6e3c
	if (cr6.eq) goto loc_831E6E3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x831d9a38
	ctx.lr = 0x831E6D4C;
	sub_831D9A38(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831d99e0
	ctx.lr = 0x831E6D54;
	sub_831D99E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e6da0
	if (cr0.eq) goto loc_831E6DA0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e6da0
	if (cr6.eq) goto loc_831E6DA0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831E6D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e6d98
	goto loc_831E6D98;
	// bl 0x831d9ee8
	ctx.lr = 0x831E6D90;
	sub_831D9EE8(ctx, base);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_831E6D98:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_831E6DA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x831e6e3c
	goto loc_831E6E3C;
loc_831E6DAC:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e6e3c
	if (cr6.eq) goto loc_831E6E3C;
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x831e6e1c
	if (!cr6.eq) goto loc_831E6E1C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x831e6e1c
	if (cr6.lt) goto loc_831E6E1C;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x831e6e1c
	if (!cr6.gt) goto loc_831E6E1C;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x831e6e1c
	if (cr6.eq) goto loc_831E6E1C;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831E6E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831e6e40
	goto loc_831E6E40;
loc_831E6E1C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831e6988
	ctx.lr = 0x831E6E3C;
	sub_831E6988(ctx, base);
loc_831E6E3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831E6E40:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E6D8C"))) PPC_WEAK_FUNC(sub_831E6D8C);
PPC_FUNC_IMPL(__imp__sub_831E6D8C) {
	PPC_FUNC_PROLOGUE();
	// bl 0x831d9ee8
	ctx.lr = 0x831E6D90;
	sub_831D9EE8(ctx, base);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x831e6e3c
	// ERROR 831E6E3C
	return;
}

__attribute__((alias("__imp__sub_831E6DAC"))) PPC_WEAK_FUNC(sub_831E6DAC);
PPC_FUNC_IMPL(__imp__sub_831E6DAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e6e3c
	if (cr6.eq) goto loc_831E6E3C;
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x831e6e1c
	if (!cr6.eq) goto loc_831E6E1C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x831e6e1c
	if (cr6.lt) goto loc_831E6E1C;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x831e6e1c
	if (!cr6.gt) goto loc_831E6E1C;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x831e6e1c
	if (cr6.eq) goto loc_831E6E1C;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831E6E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831e6e40
	goto loc_831E6E40;
loc_831E6E1C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831e6988
	ctx.lr = 0x831E6E3C;
	sub_831E6988(ctx, base);
loc_831E6E3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831E6E40:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E6E48"))) PPC_WEAK_FUNC(sub_831E6E48);
PPC_FUNC_IMPL(__imp__sub_831E6E48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E6E54"))) PPC_WEAK_FUNC(sub_831E6E54);
PPC_FUNC_IMPL(__imp__sub_831E6E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E6E58"))) PPC_WEAK_FUNC(sub_831E6E58);
PPC_FUNC_IMPL(__imp__sub_831E6E58) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,2840
	ctx.r10.s64 = ctx.r11.s64 + 2840;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831e3c00
	ctx.lr = 0x831E6E98;
	sub_831E3C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831e7b50
	ctx.lr = 0x831E6EA8;
	sub_831E7B50(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e6ed0
	if (!cr0.eq) goto loc_831E6ED0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831e6ec0
	if (!cr6.eq) goto loc_831E6EC0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x831e6ee8
	goto loc_831E6EE8;
loc_831E6EC0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831e6ee4
	if (!cr6.eq) goto loc_831E6EE4;
loc_831E6EC8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x831e6ee8
	goto loc_831E6EE8;
loc_831E6ED0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e6ec8
	if (!cr0.eq) goto loc_831E6EC8;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x831e6ee8
	if (!cr0.eq) goto loc_831E6EE8;
loc_831E6EE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E6EE8:
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

__attribute__((alias("__imp__sub_831E6F00"))) PPC_WEAK_FUNC(sub_831E6F00);
PPC_FUNC_IMPL(__imp__sub_831E6F00) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,2840
	ctx.r10.s64 = ctx.r11.s64 + 2840;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831e3c00
	ctx.lr = 0x831E6F40;
	sub_831E3C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831e8268
	ctx.lr = 0x831E6F50;
	sub_831E8268(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e6f78
	if (!cr0.eq) goto loc_831E6F78;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831e6f68
	if (!cr6.eq) goto loc_831E6F68;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x831e6f90
	goto loc_831E6F90;
loc_831E6F68:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831e6f8c
	if (!cr6.eq) goto loc_831E6F8C;
loc_831E6F70:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x831e6f90
	goto loc_831E6F90;
loc_831E6F78:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e6f70
	if (!cr0.eq) goto loc_831E6F70;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x831e6f90
	if (!cr0.eq) goto loc_831E6F90;
loc_831E6F8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E6F90:
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

__attribute__((alias("__imp__sub_831E6FA8"))) PPC_WEAK_FUNC(sub_831E6FA8);
PPC_FUNC_IMPL(__imp__sub_831E6FA8) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831e6fdc
	if (!cr6.eq) goto loc_831E6FDC;
	// bl 0x831d3050
	ctx.lr = 0x831E6FC8;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E6FD4;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e70f4
	goto loc_831E70F4;
loc_831E6FDC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831e6ffc
	if (!cr6.eq) goto loc_831E6FFC;
	// bl 0x831d3050
	ctx.lr = 0x831E6FE8;
	sub_831D3050(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_831E6FEC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E6FF4;
	sub_831CF000(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831e70f4
	goto loc_831E70F4;
loc_831E6FFC:
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 != 0) | (xer.ca != 0);
	ctx.r11.s64 = ctx.r11.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bgt cr6,0x831e702c
	if (cr6.gt) goto loc_831E702C;
	// bl 0x831d3050
	ctx.lr = 0x831E7024;
	sub_831D3050(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x831e6fec
	goto loc_831E6FEC;
loc_831E702C:
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ble cr6,0x831e7070
	if (!cr6.gt) goto loc_831E7070;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_831E704C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831e7060
	if (cr0.eq) goto loc_831E7060;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x831e7064
	goto loc_831E7064;
loc_831E7060:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_831E7064:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x831e704c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E704C;
loc_831E7070:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blt cr6,0x831e70ac
	if (cr6.lt) goto loc_831E70AC;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,53
	cr6.compare<int32_t>(ctx.r10.s32, 53, xer);
	// blt cr6,0x831e70ac
	if (cr6.lt) goto loc_831E70AC;
	// b 0x831e7094
	goto loc_831E7094;
loc_831E7090:
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_831E7094:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,57
	cr6.compare<uint32_t>(ctx.r10.u32, 57, xer);
	// beq cr6,0x831e7090
	if (cr6.eq) goto loc_831E7090;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_831E70AC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(ctx.r11.u32, 49, xer);
	// bne cr6,0x831e70c8
	if (!cr6.eq) goto loc_831E70C8;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// b 0x831e70f0
	goto loc_831E70F0;
loc_831E70C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_831E70CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e70cc
	if (!cr6.eq) goto loc_831E70CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce420
	ctx.lr = 0x831E70F0;
	sub_831CE420(ctx, base);
loc_831E70F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831E70F4:
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

__attribute__((alias("__imp__sub_831E7108"))) PPC_WEAK_FUNC(sub_831E7108);
PPC_FUNC_IMPL(__imp__sub_831E7108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r8,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x7FF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r7,r7,12
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// beq 0x831e7144
	if (cr0.eq) goto loc_831E7144;
	// cmpwi cr6,r11,2047
	cr6.compare<int32_t>(ctx.r11.s32, 2047, xer);
	// beq cr6,0x831e713c
	if (cr6.eq) goto loc_831E713C;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// b 0x831e7170
	goto loc_831E7170;
loc_831E713C:
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x831e7174
	goto loc_831E7174;
loc_831E7144:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x831e7168
	if (!cr6.eq) goto loc_831E7168;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e7168
	if (!cr6.eq) goto loc_831E7168;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r6,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// stw r11,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// stw r11,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, ctx.r11.u32);
	// blr 
	return;
loc_831E7168:
	// addi r11,r11,15361
	ctx.r11.s64 = ctx.r11.s64 + 15361;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831E7170:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_831E7174:
	// rlwinm r8,r9,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, ctx.r9.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r10.u32);
	// bne 0x831e71d4
	if (!cr0.eq) goto loc_831E71D4;
loc_831E7198:
	// lwz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r10,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x831e7198
	if (cr0.eq) goto loc_831E7198;
loc_831E71D4:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E71E8"))) PPC_WEAK_FUNC(sub_831E71E8);
PPC_FUNC_IMPL(__imp__sub_831E71E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E71F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831e7108
	ctx.lr = 0x831E7210;
	sub_831E7108(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// rldicr r4,r11,48,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x831e9508
	ctx.lr = 0x831E722C;
	sub_831E9508(ctx, base);
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lha r10,96(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 96));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x831E7254;
	sub_831CE7D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e726c
	if (!cr0.eq) goto loc_831E726C;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831E726C:
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
	ctx.lr = 0x831E7284;
	sub_831CF0D8(ctx, base);
}

__attribute__((alias("__imp__sub_831E7284"))) PPC_WEAK_FUNC(sub_831E7284);
PPC_FUNC_IMPL(__imp__sub_831E7284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E7288"))) PPC_WEAK_FUNC(sub_831E7288);
PPC_FUNC_IMPL(__imp__sub_831E7288) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831ce040
	sub_831CE040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7290"))) PPC_WEAK_FUNC(sub_831E7290);
PPC_FUNC_IMPL(__imp__sub_831E7290) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831e72e8
	if (cr6.lt) goto loc_831E72E8;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e72e8
	if (!cr6.lt) goto loc_831E72E8;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x831e72e8
	if (!cr6.eq) goto loc_831E72E8;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831e7308
	goto loc_831E7308;
loc_831E72E8:
	// bl 0x831d3050
	ctx.lr = 0x831E72EC;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E72F8;
	sub_831D3088(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831E7308:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7318"))) PPC_WEAK_FUNC(sub_831E7318);
PPC_FUNC_IMPL(__imp__sub_831E7318) {
	PPC_FUNC_PROLOGUE();
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831e7380
	if (cr6.lt) goto loc_831E7380;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e7380
	if (!cr6.lt) goto loc_831E7380;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e7380
	if (cr0.eq) goto loc_831E7380;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x831e7380
	if (cr6.eq) goto loc_831E7380;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831e739c
	goto loc_831E739C;
loc_831E7380:
	// bl 0x831d3050
	ctx.lr = 0x831E7384;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E7390;
	sub_831D3088(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831E739C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E73B0"))) PPC_WEAK_FUNC(sub_831E73B0);
PPC_FUNC_IMPL(__imp__sub_831E73B0) {
	PPC_FUNC_PROLOGUE();
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
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x831e73e8
	if (!cr6.eq) goto loc_831E73E8;
	// bl 0x831d3088
	ctx.lr = 0x831E73C8;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E73D4;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e7454
	goto loc_831E7454;
loc_831E73E8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831e7400
	if (cr6.lt) goto loc_831E7400;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r11,23800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23800);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e7424
	if (cr6.lt) goto loc_831E7424;
loc_831E7400:
	// bl 0x831d3088
	ctx.lr = 0x831E7404;
	sub_831D3088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831E7410;
	sub_831D3050(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E741C;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e7454
	goto loc_831E7454;
loc_831E7424:
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e7400
	if (cr0.eq) goto loc_831E7400;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_831E7454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7464"))) PPC_WEAK_FUNC(sub_831E7464);
PPC_FUNC_IMPL(__imp__sub_831E7464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E7468"))) PPC_WEAK_FUNC(sub_831E7468);
PPC_FUNC_IMPL(__imp__sub_831E7468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10864(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10864);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E7478;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,23808
	ctx.r11.s64 = ctx.r11.s64 + 23808;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	ctx.r29.s64 = 1;
	// mulli r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 * 72;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831e7504
	if (!cr6.eq) goto loc_831E7504;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831d9e80
	ctx.lr = 0x831E74C0;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e74f8
	if (!cr6.eq) goto loc_831E74F8;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x831d9c20
	ctx.lr = 0x831E74DC;
	sub_831D9C20(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_831E74F8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e7538
	ctx.lr = 0x831E7504;
	sub_831E7538(ctx, base);
loc_831E7504:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x831e752c
	if (cr6.eq) goto loc_831E752C;
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
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83d7554c
	ctx.lr = 0x831E752C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_831E752C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7470"))) PPC_WEAK_FUNC(sub_831E7470);
PPC_FUNC_IMPL(__imp__sub_831E7470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E7478;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,23808
	ctx.r11.s64 = ctx.r11.s64 + 23808;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	ctx.r29.s64 = 1;
	// mulli r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 * 72;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831e7504
	if (!cr6.eq) goto loc_831E7504;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831d9e80
	ctx.lr = 0x831E74C0;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e74f8
	if (!cr6.eq) goto loc_831E74F8;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x831d9c20
	ctx.lr = 0x831E74DC;
	sub_831D9C20(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_831E74F8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e7538
	ctx.lr = 0x831E7504;
	sub_831E7538(ctx, base);
loc_831E7504:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x831e752c
	if (cr6.eq) goto loc_831E752C;
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
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83d7554c
	ctx.lr = 0x831E752C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_831E752C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7538"))) PPC_WEAK_FUNC(sub_831E7538);
PPC_FUNC_IMPL(__imp__sub_831E7538) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831d9c00
	ctx.lr = 0x831E754C;
	sub_831D9C00(ctx, base);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,23808
	ctx.r11.s64 = ctx.r11.s64 + 23808;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E756C"))) PPC_WEAK_FUNC(sub_831E756C);
PPC_FUNC_IMPL(__imp__sub_831E756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E7570"))) PPC_WEAK_FUNC(sub_831E7570);
PPC_FUNC_IMPL(__imp__sub_831E7570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x83d7553c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7598"))) PPC_WEAK_FUNC(sub_831E7598);
PPC_FUNC_IMPL(__imp__sub_831E7598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10888(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10888);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831E75A8;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// bl 0x831d9d40
	ctx.lr = 0x831E75C8;
	sub_831D9D40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e75d8
	if (!cr0.eq) goto loc_831E75D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e77b0
	goto loc_831E77B0;
loc_831E75D8:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x831d9e80
	ctx.lr = 0x831E75E0;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r11,23808
	ctx.r29.s64 = ctx.r11.s64 + 23808;
loc_831E75F4:
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// cmpwi cr6,r28,64
	cr6.compare<int32_t>(ctx.r28.s32, 64, xer);
	// bge cr6,0x831e77a0
	if (!cr6.lt) goto loc_831E77A0;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r27,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831e7710
	if (cr6.eq) goto loc_831E7710;
loc_831E7610:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e76f8
	if (!cr6.lt) goto loc_831E76F8;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e76c4
	if (!cr0.eq) goto loc_831E76C4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e768c
	if (!cr6.eq) goto loc_831E768C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831d9e80
	ctx.lr = 0x831E7648;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e7680
	if (!cr6.eq) goto loc_831E7680;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x831d9c20
	ctx.lr = 0x831E7664;
	sub_831D9C20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e7674
	if (!cr0.eq) goto loc_831E7674;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// b 0x831e7680
	goto loc_831E7680;
loc_831E7674:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_831E7680:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x831e77dc
	ctx.lr = 0x831E768C;
	sub_831E77DC(ctx, base);
loc_831E768C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x831e76c4
	if (!cr6.eq) goto loc_831E76C4;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7554c
	ctx.lr = 0x831E76A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e76bc
	if (cr0.eq) goto loc_831E76BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7553c
	ctx.lr = 0x831E76B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e76c8
	goto loc_831E76C8;
loc_831E76BC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x831e76d0
	if (cr6.eq) goto loc_831E76D0;
loc_831E76C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831E76C8:
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// b 0x831e7610
	goto loc_831E7610;
loc_831E76D0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_831E76F8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831e77a0
	if (!cr6.eq) goto loc_831E77A0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x831e75f4
	goto loc_831E75F4;
loc_831E7710:
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x831d9420
	ctx.lr = 0x831E771C;
	sub_831D9420(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e77a0
	if (cr0.eq) goto loc_831E77A0;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// stwx r3,r27,r29
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,23800(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23800);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,23800(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23800, ctx.r11.u32);
loc_831E773C:
	// lwzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e776c
	if (!cr6.lt) goto loc_831E776C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x831e773c
	goto loc_831E773C;
loc_831E776C:
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r9,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mulli r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 * 72;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r26.u8);
	// bl 0x831e7470
	ctx.lr = 0x831E7794;
	sub_831E7470(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e77a0
	if (!cr0.eq) goto loc_831E77A0;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_831E77A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x831e77b8
	ctx.lr = 0x831E77AC;
	sub_831E77B8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831E77B0:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E75A0"))) PPC_WEAK_FUNC(sub_831E75A0);
PPC_FUNC_IMPL(__imp__sub_831E75A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831E75A8;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// bl 0x831d9d40
	ctx.lr = 0x831E75C8;
	sub_831D9D40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e75d8
	if (!cr0.eq) goto loc_831E75D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e77b0
	goto loc_831E77B0;
loc_831E75D8:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x831d9e80
	ctx.lr = 0x831E75E0;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r11,23808
	ctx.r29.s64 = ctx.r11.s64 + 23808;
loc_831E75F4:
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// cmpwi cr6,r28,64
	cr6.compare<int32_t>(ctx.r28.s32, 64, xer);
	// bge cr6,0x831e77a0
	if (!cr6.lt) goto loc_831E77A0;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r27,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831e7710
	if (cr6.eq) goto loc_831E7710;
loc_831E7610:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e76f8
	if (!cr6.lt) goto loc_831E76F8;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e76c4
	if (!cr0.eq) goto loc_831E76C4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e768c
	if (!cr6.eq) goto loc_831E768C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831d9e80
	ctx.lr = 0x831E7648;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831e7680
	if (!cr6.eq) goto loc_831E7680;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x831d9c20
	ctx.lr = 0x831E7664;
	sub_831D9C20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e7674
	if (!cr0.eq) goto loc_831E7674;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// b 0x831e7680
	goto loc_831E7680;
loc_831E7674:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_831E7680:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x831e77dc
	ctx.lr = 0x831E768C;
	sub_831E77DC(ctx, base);
loc_831E768C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x831e76c4
	if (!cr6.eq) goto loc_831E76C4;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7554c
	ctx.lr = 0x831E76A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e76bc
	if (cr0.eq) goto loc_831E76BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83d7553c
	ctx.lr = 0x831E76B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831e76c8
	goto loc_831E76C8;
loc_831E76BC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x831e76d0
	if (cr6.eq) goto loc_831E76D0;
loc_831E76C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_831E76C8:
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// b 0x831e7610
	goto loc_831E7610;
loc_831E76D0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_831E76F8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831e77a0
	if (!cr6.eq) goto loc_831E77A0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x831e75f4
	goto loc_831E75F4;
loc_831E7710:
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x831d9420
	ctx.lr = 0x831E771C;
	sub_831D9420(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831e77a0
	if (cr0.eq) goto loc_831E77A0;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// stwx r3,r27,r29
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,23800(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23800);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,23800(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23800, ctx.r11.u32);
loc_831E773C:
	// lwzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x831e776c
	if (!cr6.lt) goto loc_831E776C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x831e773c
	goto loc_831E773C;
loc_831E776C:
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r9,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mulli r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 * 72;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r26.u8);
	// bl 0x831e7470
	ctx.lr = 0x831E7794;
	sub_831E7470(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e77a0
	if (!cr0.eq) goto loc_831E77A0;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_831E77A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x831e77b8
	ctx.lr = 0x831E77AC;
	sub_831E77B8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_831E77B0:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E77B8"))) PPC_WEAK_FUNC(sub_831E77B8);
PPC_FUNC_IMPL(__imp__sub_831E77B8) {
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
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x831d9c00
	ctx.lr = 0x831E77CC;
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

__attribute__((alias("__imp__sub_831E77DC"))) PPC_WEAK_FUNC(sub_831E77DC);
PPC_FUNC_IMPL(__imp__sub_831E77DC) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x831d9c00
	ctx.lr = 0x831E77F0;
	sub_831D9C00(ctx, base);
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r25,84(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r28,92(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r11,23808
	ctx.r29.s64 = ctx.r11.s64 + 23808;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E781C"))) PPC_WEAK_FUNC(sub_831E781C);
PPC_FUNC_IMPL(__imp__sub_831E781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E7820"))) PPC_WEAK_FUNC(sub_831E7820);
PPC_FUNC_IMPL(__imp__sub_831E7820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831E7828;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831E7858;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831e7878
	if (!cr6.eq) goto loc_831E7878;
loc_831E7860:
	// bl 0x831d3050
	ctx.lr = 0x831E7864;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E7870;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e78fc
	goto loc_831E78FC;
loc_831E7878:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831e7888
	if (cr6.eq) goto loc_831E7888;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e7860
	if (cr6.eq) goto loc_831E7860;
loc_831E7888:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x831e78a0
	if (cr6.gt) goto loc_831E78A0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_831E78A0:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831dcbf0
	ctx.lr = 0x831E78C4;
	sub_831DCBF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e78f8
	if (cr6.eq) goto loc_831E78F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x831e78ec
	if (cr0.lt) goto loc_831E78EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x831e78f8
	goto loc_831E78F8;
loc_831E78EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831db8c0
	ctx.lr = 0x831E78F8;
	sub_831DB8C0(ctx, base);
loc_831E78F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831E78FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7904"))) PPC_WEAK_FUNC(sub_831E7904);
PPC_FUNC_IMPL(__imp__sub_831E7904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E7908"))) PPC_WEAK_FUNC(sub_831E7908);
PPC_FUNC_IMPL(__imp__sub_831E7908) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831e7820
	sub_831E7820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7914"))) PPC_WEAK_FUNC(sub_831E7914);
PPC_FUNC_IMPL(__imp__sub_831E7914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E7918"))) PPC_WEAK_FUNC(sub_831E7918);
PPC_FUNC_IMPL(__imp__sub_831E7918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,10928(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10928);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E7928;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e7974
	if (!cr0.eq) goto loc_831E7974;
	// bl 0x831d3050
	ctx.lr = 0x831E7960;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E796C;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e79e4
	goto loc_831E79E4;
loc_831E7974:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x831cf870
	ctx.lr = 0x831E7984;
	sub_831CF870(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831cfa58
	ctx.lr = 0x831E7990;
	sub_831CFA58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831cf870
	ctx.lr = 0x831E7998;
	sub_831CF870(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x831dff78
	ctx.lr = 0x831E79A0;
	sub_831DFF78(ctx, base);
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831cf870
	ctx.lr = 0x831E79AC;
	sub_831CF870(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831dcbf0
	ctx.lr = 0x831E79C0;
	sub_831DCBF0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x831cf870
	ctx.lr = 0x831E79C8;
	sub_831CF870(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831e0068
	ctx.lr = 0x831E79D4;
	sub_831E0068(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e79ec
	ctx.lr = 0x831E79E0;
	sub_831E79EC(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_831E79E4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7920"))) PPC_WEAK_FUNC(sub_831E7920);
PPC_FUNC_IMPL(__imp__sub_831E7920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E7928;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
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
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e7974
	if (!cr0.eq) goto loc_831E7974;
	// bl 0x831d3050
	ctx.lr = 0x831E7960;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E796C;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e79e4
	goto loc_831E79E4;
loc_831E7974:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x831cf870
	ctx.lr = 0x831E7984;
	sub_831CF870(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831cfa58
	ctx.lr = 0x831E7990;
	sub_831CFA58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x831cf870
	ctx.lr = 0x831E7998;
	sub_831CF870(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x831dff78
	ctx.lr = 0x831E79A0;
	sub_831DFF78(ctx, base);
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831cf870
	ctx.lr = 0x831E79AC;
	sub_831CF870(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831dcbf0
	ctx.lr = 0x831E79C0;
	sub_831DCBF0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x831cf870
	ctx.lr = 0x831E79C8;
	sub_831CF870(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831e0068
	ctx.lr = 0x831E79D4;
	sub_831E0068(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x831e79ec
	ctx.lr = 0x831E79E0;
	sub_831E79EC(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_831E79E4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E79EC"))) PPC_WEAK_FUNC(sub_831E79EC);
PPC_FUNC_IMPL(__imp__sub_831E79EC) {
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
	// bl 0x831cf870
	ctx.lr = 0x831E79FC;
	sub_831CF870(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831cfae8
	ctx.lr = 0x831E7A08;
	sub_831CFAE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7A18"))) PPC_WEAK_FUNC(sub_831E7A18);
PPC_FUNC_IMPL(__imp__sub_831E7A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r11,5120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5120);
	// lwz r10,3356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3356);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7A3C"))) PPC_WEAK_FUNC(sub_831E7A3C);
PPC_FUNC_IMPL(__imp__sub_831E7A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E7A40"))) PPC_WEAK_FUNC(sub_831E7A40);
PPC_FUNC_IMPL(__imp__sub_831E7A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lwz r10,24088(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24088);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831e7a64
	if (!cr6.eq) goto loc_831E7A64;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,24088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24088, ctx.r9.u32);
	// stw r10,3376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3376, ctx.r10.u32);
loc_831E7A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7A6C"))) PPC_WEAK_FUNC(sub_831E7A6C);
PPC_FUNC_IMPL(__imp__sub_831E7A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E7A70"))) PPC_WEAK_FUNC(sub_831E7A70);
PPC_FUNC_IMPL(__imp__sub_831E7A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831E7A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831e7ab8
	if (cr6.eq) goto loc_831E7AB8;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// twllei r4,0
	// divwu r11,r11,r4
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r4.u32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x831e7ab8
	if (!cr6.lt) goto loc_831E7AB8;
	// bl 0x831d3050
	ctx.lr = 0x831E7AA4;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e7b00
	goto loc_831E7B00;
loc_831E7AB8:
	// mullw r30,r4,r5
	ctx.r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e7ad0
	if (cr6.eq) goto loc_831E7AD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d9b38
	ctx.lr = 0x831E7ACC;
	sub_831D9B38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_831E7AD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3198
	ctx.lr = 0x831E7ADC;
	sub_831D3198(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831e7afc
	if (cr0.eq) goto loc_831E7AFC;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bge cr6,0x831e7afc
	if (!cr6.lt) goto loc_831E7AFC;
	// subf r5,r29,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r29.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831E7AFC;
	sub_831CDCF0(ctx, base);
loc_831E7AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831E7B00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E7B08"))) PPC_WEAK_FUNC(sub_831E7B08);
PPC_FUNC_IMPL(__imp__sub_831E7B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831e7b34
	if (cr6.eq) goto loc_831E7B34;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831e7b34
	if (cr6.eq) goto loc_831E7B34;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831e7b3c
	if (!cr0.eq) goto loc_831E7B3C;
	// beq cr6,0x831e7b34
	if (cr6.eq) goto loc_831E7B34;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_831E7B34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831E7B3C:
	// beq cr6,0x831e7b48
	if (cr6.eq) goto loc_831E7B48;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_831E7B48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E7B50"))) PPC_WEAK_FUNC(sub_831E7B50);
PPC_FUNC_IMPL(__imp__sub_831E7B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x831E7B58;
	__savegprlr_19(ctx, base);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,4364
	ctx.r20.s64 = ctx.r10.s64 + 4364;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	cr6.compare<int32_t>(ctx.r30.s32, -16383, xer);
	// lwz r21,12(r20)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x831e7be0
	if (!cr6.eq) goto loc_831E7BE0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_831E7BA8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e7bc8
	if (!cr6.eq) goto loc_831E7BC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x831e7ba8
	if (cr6.lt) goto loc_831E7BA8;
	// b 0x831e8214
	goto loc_831E8214;
loc_831E7BC8:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x831e8218
	goto loc_831E8218;
loc_831E7BE0:
	// lwz r25,8(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// srawi r7,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.s64 = 31 - ctx.r11.s64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e7d2c
	if (cr0.eq) goto loc_831E7D2C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e7c98
	if (!cr0.eq) goto loc_831E7C98;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x831e7d2c
	if (!cr6.lt) goto loc_831E7D2C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831E7C78:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e7c98
	if (!cr6.eq) goto loc_831E7C98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x831e7c78
	if (cr6.lt) goto loc_831E7C78;
	// b 0x831e7d2c
	goto loc_831E7D2C;
loc_831E7C98:
	// srawi r11,r26,5
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e7cdc
	if (cr6.lt) goto loc_831E7CDC;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x831e7ce0
	if (!cr6.lt) goto loc_831E7CE0;
loc_831E7CDC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_831E7CE0:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x831e7d2c
	if (cr0.lt) goto loc_831E7D2C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831E7CF8:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x831e7d2c
	if (cr6.eq) goto loc_831E7D2C;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x831e7d1c
	if (cr6.lt) goto loc_831E7D1C;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x831e7d20
	if (!cr6.lt) goto loc_831E7D20;
loc_831E7D1C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_831E7D20:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x831e7cf8
	if (!cr0.lt) goto loc_831E7CF8;
loc_831E7D2C:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// stwx r10,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x831e7d74
	if (!cr6.lt) goto loc_831E7D74;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e7d74
	if (cr6.eq) goto loc_831E7D74;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831E7D6C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831e7d6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E7D6C;
loc_831E7D74:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x831e7d80
	if (cr6.eq) goto loc_831E7D80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831E7D80:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x831e7dac
	if (!cr6.lt) goto loc_831E7DAC;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x831e8218
	goto loc_831E8218;
loc_831E7DAC:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x831e8094
	if (cr6.gt) goto loc_831E8094;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_831E7E14:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x831e7e14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E7E14;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831E7E54:
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x831e7e68
	if (cr6.lt) goto loc_831E7E68;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e7e6c
	goto loc_831E7E6C;
loc_831E7E68:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_831E7E6C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x831e7e54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E7E54;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r29,r1,-152
	ctx.r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r11.s64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e7f9c
	if (cr0.eq) goto loc_831E7F9C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e7f04
	if (!cr0.eq) goto loc_831E7F04;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x831e7f9c
	if (!cr6.lt) goto loc_831E7F9C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831E7EE4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e7f04
	if (!cr6.eq) goto loc_831E7F04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x831e7ee4
	if (cr6.lt) goto loc_831E7EE4;
	// b 0x831e7f9c
	goto loc_831E7F9C;
loc_831E7F04:
	// srawi r11,r26,5
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e7f48
	if (cr6.lt) goto loc_831E7F48;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x831e7f4c
	if (!cr6.lt) goto loc_831E7F4C;
loc_831E7F48:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_831E7F4C:
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x831e7f9c
	if (cr0.lt) goto loc_831E7F9C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831E7F68:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831e7f9c
	if (cr6.eq) goto loc_831E7F9C;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x831e7f8c
	if (cr6.lt) goto loc_831E7F8C;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x831e7f90
	if (!cr6.lt) goto loc_831E7F90;
loc_831E7F8C:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_831E7F90:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x831e7f68
	if (!cr0.lt) goto loc_831E7F68;
loc_831E7F9C:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// stwx r10,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x831e7fe4
	if (!cr6.lt) goto loc_831E7FE4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e7fe4
	if (cr6.eq) goto loc_831E7FE4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831E7FDC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831e7fdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E7FDC;
loc_831E7FE4:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
loc_831E8020:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x831e8020
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8020;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831E8060:
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x831e8074
	if (cr6.lt) goto loc_831E8074;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e8078
	goto loc_831E8078;
loc_831E8074:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_831E8078:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x831e8060
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8060;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831e8218
	goto loc_831E8218;
loc_831E8094:
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, xer);
	// blt cr6,0x831e8164
	if (cr6.lt) goto loc_831E8164;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 2147483648;
	// subfic r7,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// stw r31,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_831E80F0:
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x831e80f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E80F0;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831E8130:
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x831e8144
	if (cr6.lt) goto loc_831E8144;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e8148
	goto loc_831E8148;
loc_831E8144:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_831E8148:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x831e8130
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8130;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x831e8218
	goto loc_831E8218;
loc_831E8164:
	// srawi r11,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_831E81AC:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x831e81ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E81AC;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831E81EC:
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// blt cr6,0x831e8200
	if (cr6.lt) goto loc_831E8200;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e8204
	goto loc_831E8204;
loc_831E8200:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_831E8204:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x831e81ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E81EC;
loc_831E8214:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_831E8218:
	// subfic r10,r21,31
	xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r21.s64;
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r19.s64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x831e8254
	if (!cr6.eq) goto loc_831E8254;
	// lwz r11,-148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x831e825c
	goto loc_831E825C;
loc_831E8254:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bne cr6,0x831e8260
	if (!cr6.eq) goto loc_831E8260;
loc_831E825C:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_831E8260:
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E8264"))) PPC_WEAK_FUNC(sub_831E8264);
PPC_FUNC_IMPL(__imp__sub_831E8264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E8268"))) PPC_WEAK_FUNC(sub_831E8268);
PPC_FUNC_IMPL(__imp__sub_831E8268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x831E8270;
	__savegprlr_19(ctx, base);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,4388
	ctx.r20.s64 = ctx.r10.s64 + 4388;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	cr6.compare<int32_t>(ctx.r30.s32, -16383, xer);
	// lwz r21,12(r20)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x831e82f8
	if (!cr6.eq) goto loc_831E82F8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_831E82C0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e82e0
	if (!cr6.eq) goto loc_831E82E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x831e82c0
	if (cr6.lt) goto loc_831E82C0;
	// b 0x831e892c
	goto loc_831E892C;
loc_831E82E0:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x831e8930
	goto loc_831E8930;
loc_831E82F8:
	// lwz r25,8(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// srawi r7,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.s64 = 31 - ctx.r11.s64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e8444
	if (cr0.eq) goto loc_831E8444;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e83b0
	if (!cr0.eq) goto loc_831E83B0;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x831e8444
	if (!cr6.lt) goto loc_831E8444;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831E8390:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e83b0
	if (!cr6.eq) goto loc_831E83B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x831e8390
	if (cr6.lt) goto loc_831E8390;
	// b 0x831e8444
	goto loc_831E8444;
loc_831E83B0:
	// srawi r11,r26,5
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e83f4
	if (cr6.lt) goto loc_831E83F4;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x831e83f8
	if (!cr6.lt) goto loc_831E83F8;
loc_831E83F4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_831E83F8:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x831e8444
	if (cr0.lt) goto loc_831E8444;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831E8410:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x831e8444
	if (cr6.eq) goto loc_831E8444;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x831e8434
	if (cr6.lt) goto loc_831E8434;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x831e8438
	if (!cr6.lt) goto loc_831E8438;
loc_831E8434:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_831E8438:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x831e8410
	if (!cr0.lt) goto loc_831E8410;
loc_831E8444:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// stwx r10,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x831e848c
	if (!cr6.lt) goto loc_831E848C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e848c
	if (cr6.eq) goto loc_831E848C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831E8484:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831e8484
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8484;
loc_831E848C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x831e8498
	if (cr6.eq) goto loc_831E8498;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831E8498:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x831e84c4
	if (!cr6.lt) goto loc_831E84C4;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x831e8930
	goto loc_831E8930;
loc_831E84C4:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x831e87ac
	if (cr6.gt) goto loc_831E87AC;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_831E852C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x831e852c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E852C;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831E856C:
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x831e8580
	if (cr6.lt) goto loc_831E8580;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e8584
	goto loc_831E8584;
loc_831E8580:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_831E8584:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x831e856c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E856C;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r29,r1,-152
	ctx.r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r11.s64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e86b4
	if (cr0.eq) goto loc_831E86B4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e861c
	if (!cr0.eq) goto loc_831E861C;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x831e86b4
	if (!cr6.lt) goto loc_831E86B4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831E85FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e861c
	if (!cr6.eq) goto loc_831E861C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x831e85fc
	if (cr6.lt) goto loc_831E85FC;
	// b 0x831e86b4
	goto loc_831E86B4;
loc_831E861C:
	// srawi r11,r26,5
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e8660
	if (cr6.lt) goto loc_831E8660;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x831e8664
	if (!cr6.lt) goto loc_831E8664;
loc_831E8660:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_831E8664:
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x831e86b4
	if (cr0.lt) goto loc_831E86B4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_831E8680:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831e86b4
	if (cr6.eq) goto loc_831E86B4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x831e86a4
	if (cr6.lt) goto loc_831E86A4;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x831e86a8
	if (!cr6.lt) goto loc_831E86A8;
loc_831E86A4:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_831E86A8:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x831e8680
	if (!cr0.lt) goto loc_831E8680;
loc_831E86B4:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// stwx r10,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x831e86fc
	if (!cr6.lt) goto loc_831E86FC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e86fc
	if (cr6.eq) goto loc_831E86FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831E86F4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831e86f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E86F4;
loc_831E86FC:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
loc_831E8738:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x831e8738
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8738;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831E8778:
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x831e878c
	if (cr6.lt) goto loc_831E878C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e8790
	goto loc_831E8790;
loc_831E878C:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_831E8790:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x831e8778
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8778;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831e8930
	goto loc_831E8930;
loc_831E87AC:
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, xer);
	// blt cr6,0x831e887c
	if (cr6.lt) goto loc_831E887C;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 2147483648;
	// subfic r7,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// stw r31,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_831E8808:
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x831e8808
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8808;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831E8848:
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x831e885c
	if (cr6.lt) goto loc_831E885C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e8860
	goto loc_831E8860;
loc_831E885C:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_831E8860:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x831e8848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8848;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x831e8930
	goto loc_831E8930;
loc_831E887C:
	// srawi r11,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_831E88C4:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x831e88c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E88C4;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831E8904:
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// blt cr6,0x831e8918
	if (cr6.lt) goto loc_831E8918;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x831e891c
	goto loc_831E891C;
loc_831E8918:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_831E891C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x831e8904
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E8904;
loc_831E892C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_831E8930:
	// subfic r10,r21,31
	xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r21.s64;
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r19.s64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x831e896c
	if (!cr6.eq) goto loc_831E896C;
	// lwz r11,-148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x831e8974
	goto loc_831E8974;
loc_831E896C:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bne cr6,0x831e8978
	if (!cr6.eq) goto loc_831E8978;
loc_831E8974:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_831E8978:
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E897C"))) PPC_WEAK_FUNC(sub_831E897C);
PPC_FUNC_IMPL(__imp__sub_831E897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E8980"))) PPC_WEAK_FUNC(sub_831E8980);
PPC_FUNC_IMPL(__imp__sub_831E8980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x831e89b8
	if (cr0.eq) goto loc_831E89B8;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x831e899c
	if (!cr6.eq) goto loc_831E899C;
	// li r11,768
	ctx.r11.s64 = 768;
	// b 0x831e89b8
	goto loc_831E89B8;
loc_831E899C:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x831e89ac
	if (!cr6.eq) goto loc_831E89AC;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x831e89b8
	goto loc_831E89B8;
loc_831E89AC:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x831e89b8
	if (!cr6.eq) goto loc_831E89B8;
	// li r11,256
	ctx.r11.s64 = 256;
loc_831E89B8:
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e89c4
	if (cr0.eq) goto loc_831E89C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_831E89C4:
	// rlwinm. r10,r3,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e89d0
	if (cr0.eq) goto loc_831E89D0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_831E89D0:
	// rlwinm. r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e89dc
	if (cr0.eq) goto loc_831E89DC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_831E89DC:
	// rlwinm. r10,r3,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e89e8
	if (cr0.eq) goto loc_831E89E8;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_831E89E8:
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831e89f4
	if (cr0.eq) goto loc_831E89F4;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_831E89F4:
	// oris r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 524288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E89FC"))) PPC_WEAK_FUNC(sub_831E89FC);
PPC_FUNC_IMPL(__imp__sub_831E89FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E8A00"))) PPC_WEAK_FUNC(sub_831E8A00);
PPC_FUNC_IMPL(__imp__sub_831E8A00) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x831e0c70
	ctx.lr = 0x831E8A1C;
	sub_831E0C70(ctx, base);
	// bl 0x831e8980
	ctx.lr = 0x831E8A20;
	sub_831E8980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8A30"))) PPC_WEAK_FUNC(sub_831E8A30);
PPC_FUNC_IMPL(__imp__sub_831E8A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831E8A38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x831dc5f0
	ctx.lr = 0x831E8A54;
	sub_831DC5F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x831e8aa8
	if (cr6.eq) goto loc_831E8AA8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831dc5f0
	ctx.lr = 0x831E8A70;
	sub_831DC5F0(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x831e8aa8
	if (cr6.eq) goto loc_831E8AA8;
	// subf r30,r3,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r3.s64;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// ble cr6,0x831e8b44
	if (!cr6.gt) goto loc_831E8B44;
	// bl 0x8241a538
	ctx.lr = 0x831E8A88;
	sub_8241A538(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x82418f88
	ctx.lr = 0x831E8A94;
	sub_82418F88(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x831e8ab8
	if (!cr0.eq) goto loc_831E8AB8;
	// bl 0x831d3050
	ctx.lr = 0x831E8AA0;
	sub_831D3050(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831E8AA8:
	// bl 0x831d3050
	ctx.lr = 0x831E8AAC;
	sub_831D3050(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_831E8AB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_831E8AB8:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x831e8bc8
	ctx.lr = 0x831E8AC8;
	sub_831E8BC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_831E8ACC:
	// cmpdi cr6,r30,4096
	cr6.compare<int64_t>(ctx.r30.s64, 4096, xer);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bge cr6,0x831e8adc
	if (!cr6.lt) goto loc_831E8ADC;
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
loc_831E8ADC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831dbc10
	ctx.lr = 0x831E8AE8;
	sub_831DBC10(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e8b04
	if (cr6.eq) goto loc_831E8B04;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// bgt cr6,0x831e8acc
	if (cr6.gt) goto loc_831E8ACC;
	// b 0x831e8b24
	goto loc_831E8B24;
loc_831E8B04:
	// bl 0x831d3088
	ctx.lr = 0x831E8B08;
	sub_831D3088(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x831e8b20
	if (!cr6.eq) goto loc_831E8B20;
	// bl 0x831d3050
	ctx.lr = 0x831E8B18;
	sub_831D3050(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831E8B20:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_831E8B24:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e8bc8
	ctx.lr = 0x831E8B30;
	sub_831E8BC8(ctx, base);
	// bl 0x8241a538
	ctx.lr = 0x831E8B34;
	sub_8241A538(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82419880
	ctx.lr = 0x831E8B40;
	sub_82419880(ctx, base);
	// b 0x831e8b9c
	goto loc_831E8B9C;
loc_831E8B44:
	// bge cr6,0x831e8ba4
	if (!cr6.lt) goto loc_831E8BA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831dc5f0
	ctx.lr = 0x831E8B58;
	sub_831DC5F0(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x831e8aa8
	if (cr6.eq) goto loc_831E8AA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831e73b0
	ctx.lr = 0x831E8B68;
	sub_831E73B0(ctx, base);
	// bl 0x832d4b58
	ctx.lr = 0x831E8B6C;
	sub_832D4B58(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// extsw r27,r11
	ctx.r27.s64 = ctx.r11.s32;
	// cmpdi cr6,r27,-1
	cr6.compare<int64_t>(ctx.r27.s64, -1, xer);
	// bne cr6,0x831e8ba4
	if (!cr6.eq) goto loc_831E8BA4;
	// bl 0x831d3050
	ctx.lr = 0x831E8B84;
	sub_831D3050(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831d3088
	ctx.lr = 0x831E8B90;
	sub_831D3088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82417100
	ctx.lr = 0x831E8B98;
	sub_82417100(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_831E8B9C:
	// cmpdi cr6,r27,-1
	cr6.compare<int64_t>(ctx.r27.s64, -1, xer);
	// beq cr6,0x831e8aa8
	if (cr6.eq) goto loc_831E8AA8;
loc_831E8BA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831dc5f0
	ctx.lr = 0x831E8BB4;
	sub_831DC5F0(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x831e8aa8
	if (cr6.eq) goto loc_831E8AA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831e8ab0
	goto loc_831E8AB0;
}

__attribute__((alias("__imp__sub_831E8BC4"))) PPC_WEAK_FUNC(sub_831E8BC4);
PPC_FUNC_IMPL(__imp__sub_831E8BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E8BC8"))) PPC_WEAK_FUNC(sub_831E8BC8);
PPC_FUNC_IMPL(__imp__sub_831E8BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,23808
	ctx.r9.s64 = ctx.r10.s64 + 23808;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// cmpwi cr6,r4,16384
	cr6.compare<int32_t>(ctx.r4.s32, 16384, xer);
	// mulli r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x831e8c10
	if (cr6.eq) goto loc_831E8C10;
	// cmplwi cr6,r4,32768
	cr6.compare<uint32_t>(ctx.r4.u32, 32768, xer);
	// bne cr6,0x831e8c38
	if (!cr6.eq) goto loc_831E8C38;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x831e8c38
	goto loc_831E8C38;
loc_831E8C10:
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r5,-128
	ctx.r5.s64 = -128;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stb r9,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r9.u8);
loc_831E8C38:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x831e8c4c
	if (!cr6.eq) goto loc_831E8C4C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
loc_831E8C4C:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8C54"))) PPC_WEAK_FUNC(sub_831E8C54);
PPC_FUNC_IMPL(__imp__sub_831E8C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E8C58"))) PPC_WEAK_FUNC(sub_831E8C58);
PPC_FUNC_IMPL(__imp__sub_831E8C58) {
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
	// bne cr6,0x831e8c88
	if (!cr6.eq) goto loc_831E8C88;
	// bl 0x831d3050
	ctx.lr = 0x831E8C74;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E8C80;
	sub_831CF000(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831e8c98
	goto loc_831E8C98;
loc_831E8C88:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,3448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3448);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_831E8C98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E8CA8"))) PPC_WEAK_FUNC(sub_831E8CA8);
PPC_FUNC_IMPL(__imp__sub_831E8CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831E8CB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// li r27,16462
	ctx.r27.s64 = 16462;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// beq cr6,0x831e8e98
	if (cr6.eq) goto loc_831E8E98;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_831E8CDC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x831E8CEC;
	sub_831CE980(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e8d68
	if (cr6.lt) goto loc_831E8D68;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x831e8d6c
	if (!cr6.lt) goto loc_831E8D6C;
loc_831E8D68:
	// li r9,1
	ctx.r9.s64 = 1;
loc_831E8D6C:
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831e8da8
	if (cr6.eq) goto loc_831E8DA8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x831e8d90
	if (cr6.lt) goto loc_831E8D90;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x831e8d94
	if (!cr6.lt) goto loc_831E8D94;
loc_831E8D90:
	// li r9,1
	ctx.r9.s64 = 1;
loc_831E8D94:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831e8da8
	if (cr6.eq) goto loc_831E8DA8;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E8DA8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x831e8dc8
	if (cr6.lt) goto loc_831E8DC8;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x831e8dcc
	if (!cr6.lt) goto loc_831E8DCC;
loc_831E8DC8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_831E8DCC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831e8de4
	if (cr6.eq) goto loc_831E8DE4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_831E8DE4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e8e40
	if (cr6.lt) goto loc_831E8E40;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x831e8e44
	if (!cr6.lt) goto loc_831E8E44;
loc_831E8E40:
	// li r7,1
	ctx.r7.s64 = 1;
loc_831E8E44:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831e8e80
	if (cr6.eq) goto loc_831E8E80;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x831e8e68
	if (cr6.lt) goto loc_831E8E68;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x831e8e6c
	if (!cr6.lt) goto loc_831E8E6C;
loc_831E8E68:
	// li r10,1
	ctx.r10.s64 = 1;
loc_831E8E6C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831e8e80
	if (cr6.eq) goto loc_831E8E80;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E8E80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x831e8cdc
	if (!cr0.eq) goto loc_831E8CDC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e8f24
	if (!cr6.eq) goto loc_831E8F24;
loc_831E8E98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831e8e98
	if (cr6.eq) goto loc_831E8E98;
	// b 0x831e8f24
	goto loc_831E8F24;
loc_831E8EE0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831E8F24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e8ee0
	if (cr0.eq) goto loc_831E8EE0;
	// sth r27,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E8F3C"))) PPC_WEAK_FUNC(sub_831E8F3C);
PPC_FUNC_IMPL(__imp__sub_831E8F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E8F40"))) PPC_WEAK_FUNC(sub_831E8F40);
PPC_FUNC_IMPL(__imp__sub_831E8F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831E8F48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831cf870
	ctx.lr = 0x831E8F58;
	sub_831CF870(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e9178
	if (cr6.eq) goto loc_831E9178;
	// bl 0x831cf870
	ctx.lr = 0x831E8F68;
	sub_831CF870(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x831e9178
	if (cr6.eq) goto loc_831E9178;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e913c
	if (!cr0.eq) goto loc_831E913C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E8F88;
	sub_831DB880(ctx, base);
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r30,r10,23808
	ctx.r30.s64 = ctx.r10.s64 + 23808;
	// addi r28,r11,2184
	ctx.r28.s64 = ctx.r11.s64 + 2184;
	// beq cr6,0x831e8fdc
	if (cr6.eq) goto loc_831E8FDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E8FA8;
	sub_831DB880(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831e8fdc
	if (cr6.eq) goto loc_831E8FDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E8FB8;
	sub_831DB880(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831db880
	ctx.lr = 0x831E8FC8;
	sub_831DB880(ctx, base);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831e8fe0
	goto loc_831E8FE0;
loc_831E8FDC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831E8FE0:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x831e913c
	if (cr6.eq) goto loc_831E913C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E8FF8;
	sub_831DB880(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e903c
	if (cr6.eq) goto loc_831E903C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E9008;
	sub_831DB880(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831e903c
	if (cr6.eq) goto loc_831E903C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E9018;
	sub_831DB880(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831db880
	ctx.lr = 0x831E9028;
	sub_831DB880(ctx, base);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831e9040
	goto loc_831E9040;
loc_831E903C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831E9040:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x831e913c
	if (cr6.eq) goto loc_831E913C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E9058;
	sub_831DB880(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e909c
	if (cr6.eq) goto loc_831E909C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E9068;
	sub_831DB880(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x831e909c
	if (cr6.eq) goto loc_831E909C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831db880
	ctx.lr = 0x831E9078;
	sub_831DB880(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831db880
	ctx.lr = 0x831E9088;
	sub_831DB880(ctx, base);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831e90a0
	goto loc_831E90A0;
loc_831E909C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831E90A0:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e913c
	if (cr0.eq) goto loc_831E913C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d8898
	ctx.lr = 0x831E90C0;
	sub_831D8898(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e90d0
	if (cr0.eq) goto loc_831E90D0;
loc_831E90C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e9190
	goto loc_831E9190;
loc_831E90D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831e918c
	if (!cr6.gt) goto loc_831E918C;
loc_831E90E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// blt 0x831e9114
	if (cr0.lt) goto loc_831E9114;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x831e9120
	goto loc_831E9120;
loc_831E9114:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x831db8c0
	ctx.lr = 0x831E9120;
	sub_831DB8C0(ctx, base);
loc_831E9120:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831e90c8
	if (cr6.eq) goto loc_831E90C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x831e90e0
	if (cr6.lt) goto loc_831E90E0;
	// b 0x831e918c
	goto loc_831E918C;
loc_831E913C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-2
	xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt 0x831e9164
	if (cr0.lt) goto loc_831E9164;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831e918c
	goto loc_831E918C;
loc_831E9164:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r3,r27,16
	ctx.r3.u64 = ctx.r27.u32 & 0xFFFF;
	// bl 0x831ea110
	ctx.lr = 0x831E9170;
	sub_831EA110(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x831e9190
	goto loc_831E9190;
loc_831E9178:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x832d47b0
	ctx.lr = 0x831E918C;
	sub_832D47B0(ctx, base);
loc_831E918C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_831E9190:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E9198"))) PPC_WEAK_FUNC(sub_831E9198);
PPC_FUNC_IMPL(__imp__sub_831E9198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831E91A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831E91D0;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831e91f0
	if (!cr6.eq) goto loc_831E91F0;
loc_831E91D8:
	// bl 0x831d3050
	ctx.lr = 0x831E91DC;
	sub_831D3050(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cf000
	ctx.lr = 0x831E91E8;
	sub_831CF000(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831e92b4
	goto loc_831E92B4;
loc_831E91F0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831e9200
	if (cr6.eq) goto loc_831E9200;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e91d8
	if (cr6.eq) goto loc_831E91D8;
loc_831E9200:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x831e922c
	if (!cr6.gt) goto loc_831E922C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x831e9230
	goto loc_831E9230;
loc_831E922C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_831E9230:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831e4560
	ctx.lr = 0x831E9248;
	sub_831E4560(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831e92b0
	if (cr6.eq) goto loc_831E92B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x831e927c
	if (cr0.lt) goto loc_831E927C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x831e928c
	goto loc_831E928C;
loc_831E927C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831db8c0
	ctx.lr = 0x831E9288;
	sub_831DB8C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831E928C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt 0x831e92a4
	if (cr0.lt) goto loc_831E92A4;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x831e92b0
	goto loc_831E92B0;
loc_831E92A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831db8c0
	ctx.lr = 0x831E92B0;
	sub_831DB8C0(ctx, base);
loc_831E92B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831E92B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E92BC"))) PPC_WEAK_FUNC(sub_831E92BC);
PPC_FUNC_IMPL(__imp__sub_831E92BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E92C0"))) PPC_WEAK_FUNC(sub_831E92C0);
PPC_FUNC_IMPL(__imp__sub_831E92C0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831e9198
	sub_831E9198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831E92CC"))) PPC_WEAK_FUNC(sub_831E92CC);
PPC_FUNC_IMPL(__imp__sub_831E92CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E92D0"))) PPC_WEAK_FUNC(sub_831E92D0);
PPC_FUNC_IMPL(__imp__sub_831E92D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r7
	ctx.r7.u64 = ctx.lr;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stw r7,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r7.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831e0190
	ctx.lr = 0x831E92F0;
	sub_831E0190(ctx, base);
	// mr r12,r4
	ctx.r12.u64 = ctx.r4.u64;
	// stw r30,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r30.u32);
	// mtlr r3
	ctx.lr = ctx.r3.u64;
	// blrl 
__builtin_debugtrap();
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi r31,256
	cr0.compare<uint32_t>(ctx.r31.u32, 256, xer);
	// bne 0x831e9310
	if (!cr0.eq) goto loc_831E9310;
	// li r5,2
	ctx.r5.s64 = 2;
loc_831E9310:
	// bl 0x831e0190
	ctx.lr = 0x831E9314;
	sub_831E0190(ctx, base);
	// lwz r7,8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8);
	// mtlr r7
	ctx.lr = ctx.r7.u64;
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E932C"))) PPC_WEAK_FUNC(sub_831E932C);
PPC_FUNC_IMPL(__imp__sub_831E932C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	// lfd f14,408(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f14.u64 = PPC_LOAD_U64(ctx.r4.u32 + 408);
	// lfd f15,416(r4)
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r4.u32 + 416);
	// lfd f16,424(r4)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r4.u32 + 424);
	// lfd f17,432(r4)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r4.u32 + 432);
	// lfd f18,440(r4)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r4.u32 + 440);
	// lfd f19,448(r4)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r4.u32 + 448);
	// lfd f20,456(r4)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r4.u32 + 456);
	// lfd f21,464(r4)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r4.u32 + 464);
	// lfd f22,472(r4)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r4.u32 + 472);
	// lfd f23,480(r4)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r4.u32 + 480);
	// lfd f24,488(r4)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 488);
	// lfd f25,496(r4)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 496);
	// lfd f26,504(r4)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 504);
	// lfd f27,512(r4)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r4.u32 + 512);
	// lfd f28,520(r4)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 520);
	// lfd f29,528(r4)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 528);
	// lfd f30,536(r4)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 536);
	// lfd f31,544(r4)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 544);
	// ld r14,136(r4)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r4.u32 + 136);
	// ld r15,144(r4)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r4.u32 + 144);
	// ld r16,152(r4)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r4.u32 + 152);
	// ld r17,160(r4)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r4.u32 + 160);
	// ld r18,168(r4)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r4.u32 + 168);
	// ld r19,176(r4)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r4.u32 + 176);
	// ld r20,184(r4)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r4.u32 + 184);
	// ld r21,192(r4)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r4.u32 + 192);
	// ld r22,200(r4)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r4.u32 + 200);
	// ld r23,208(r4)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r4.u32 + 208);
	// ld r24,216(r4)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 216);
	// ld r25,224(r4)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 224);
	// ld r26,232(r4)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 232);
	// ld r27,240(r4)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r4.u32 + 240);
	// ld r28,248(r4)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 248);
	// ld r29,256(r4)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 256);
	// ld r30,264(r4)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 264);
	// ld r31,272(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 272);
	// lfd f0,288(r4)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 288);
	// lwz r5,280(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// lwz r6,284(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// mtlr r3
	ctx.lr = ctx.r3.u64;
	// mtcr r5
	cr0.lt = (ctx.r5.u32 & 0x80000000) != 0;
	cr0.gt = (ctx.r5.u32 & 0x40000000) != 0;
	cr0.eq = (ctx.r5.u32 & 0x20000000) != 0;
	cr0.so = (ctx.r5.u32 & 0x10000000) != 0;
	cr1.lt = (ctx.r5.u32 & 0x8000000) != 0;
	cr1.gt = (ctx.r5.u32 & 0x4000000) != 0;
	cr1.eq = (ctx.r5.u32 & 0x2000000) != 0;
	cr1.so = (ctx.r5.u32 & 0x1000000) != 0;
	cr2.lt = (ctx.r5.u32 & 0x800000) != 0;
	cr2.gt = (ctx.r5.u32 & 0x400000) != 0;
	cr2.eq = (ctx.r5.u32 & 0x200000) != 0;
	cr2.so = (ctx.r5.u32 & 0x100000) != 0;
	cr3.lt = (ctx.r5.u32 & 0x80000) != 0;
	cr3.gt = (ctx.r5.u32 & 0x40000) != 0;
	cr3.eq = (ctx.r5.u32 & 0x20000) != 0;
	cr3.so = (ctx.r5.u32 & 0x10000) != 0;
	cr4.lt = (ctx.r5.u32 & 0x8000) != 0;
	cr4.gt = (ctx.r5.u32 & 0x4000) != 0;
	cr4.eq = (ctx.r5.u32 & 0x2000) != 0;
	cr4.so = (ctx.r5.u32 & 0x1000) != 0;
	cr5.lt = (ctx.r5.u32 & 0x800) != 0;
	cr5.gt = (ctx.r5.u32 & 0x400) != 0;
	cr5.eq = (ctx.r5.u32 & 0x200) != 0;
	cr5.so = (ctx.r5.u32 & 0x100) != 0;
	cr6.lt = (ctx.r5.u32 & 0x80) != 0;
	cr6.gt = (ctx.r5.u32 & 0x40) != 0;
	cr6.eq = (ctx.r5.u32 & 0x20) != 0;
	cr6.so = (ctx.r5.u32 & 0x10) != 0;
	cr7.lt = (ctx.r5.u32 & 0x8) != 0;
	cr7.gt = (ctx.r5.u32 & 0x4) != 0;
	cr7.eq = (ctx.r5.u32 & 0x2) != 0;
	cr7.so = (ctx.r5.u32 & 0x1) != 0;
	// mtxer r6
	xer.so = (ctx.r6.u64 & 0x80000000) != 0;
	xer.ov = (ctx.r6.u64 & 0x40000000) != 0;
	xer.ca = (ctx.r6.u64 & 0x20000000) != 0;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// ld r2,40(r4)
	ctx.r2.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// ld r1,32(r4)
	ctx.r1.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E93EC"))) PPC_WEAK_FUNC(sub_831E93EC);
PPC_FUNC_IMPL(__imp__sub_831E93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E93F0"))) PPC_WEAK_FUNC(sub_831E93F0);
PPC_FUNC_IMPL(__imp__sub_831E93F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9404"))) PPC_WEAK_FUNC(sub_831E9404);
PPC_FUNC_IMPL(__imp__sub_831E9404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E9408"))) PPC_WEAK_FUNC(sub_831E9408);
PPC_FUNC_IMPL(__imp__sub_831E9408) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E940C"))) PPC_WEAK_FUNC(sub_831E940C);
PPC_FUNC_IMPL(__imp__sub_831E940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E9410"))) PPC_WEAK_FUNC(sub_831E9410);
PPC_FUNC_IMPL(__imp__sub_831E9410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r28.u64);
	// stwu r1,-5360(r1)
	ea = -5360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// bl 0x831ce980
	ctx.lr = 0x831E9444;
	sub_831CE980(ctx, base);
	// addi r3,r1,2704
	ctx.r3.s64 = ctx.r1.s64 + 2704;
	// bl 0x83d756ac
	ctx.lr = 0x831E944C;
	__imp__RtlCaptureContext(ctx, base);
	// lis r4,-31969
	ctx.r4.s64 = -2095120384;
	// addi r4,r4,-27532
	ctx.r4.s64 = ctx.r4.s64 + -27532;
	// stw r4,2712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2712, ctx.r4.u32);
	// bl 0x831d9498
	ctx.lr = 0x831E945C;
	sub_831D9498(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lis r4,-31969
	ctx.r4.s64 = -2095120384;
	// addi r4,r4,-27532
	ctx.r4.s64 = ctx.r4.s64 + -27532;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83d7569c
	ctx.lr = 0x831E9474;
	__imp__RtlUnwind(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// bl 0x831ce980
	ctx.lr = 0x831E9484;
	sub_831CE980(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9498
	ctx.lr = 0x831E948C;
	sub_831D9498(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r5,r4,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r28,5328(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5328);
	// ld r29,5336(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5336);
	// ld r30,5344(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5344);
	// ld r31,5352(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 5352);
	// addi r1,r1,5360
	ctx.r1.s64 = ctx.r1.s64 + 5360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E94B4"))) PPC_WEAK_FUNC(sub_831E94B4);
PPC_FUNC_IMPL(__imp__sub_831E94B4) {
	PPC_FUNC_PROLOGUE();
	// lwz r24,-27424(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + -27424);
	// .long 0x0
}

__attribute__((alias("__imp__sub_831E94BC"))) PPC_WEAK_FUNC(sub_831E94BC);
PPC_FUNC_IMPL(__imp__sub_831E94BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, ctx.r10.u32);
	// bl 0x831e6238
	ctx.lr = 0x831E94D0;
	sub_831E6238(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E94E0"))) PPC_WEAK_FUNC(sub_831E94E0);
PPC_FUNC_IMPL(__imp__sub_831E94E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,-88(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + -88);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x831e6148
	ctx.lr = 0x831E94F8;
	sub_831E6148(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831E9508"))) PPC_WEAK_FUNC(sub_831E9508);
PPC_FUNC_IMPL(__imp__sub_831E9508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x831E9510;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r3.u64);
	// li r11,204
	ctx.r11.s64 = 204;
	// lhz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 336);
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// rlwinm. r10,r9,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,63
	ctx.r7.s64 = 63;
	// stb r11,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// li r5,251
	ctx.r5.s64 = 251;
	// stb r11,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// clrlwi r8,r9,17
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFF;
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r11,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r11.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r11,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// stb r11,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r11.u8);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stb r11,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// li r11,45
	ctx.r11.s64 = 45;
	// std r4,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r4.u64);
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stb r5,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r5.u8);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne 0x831e958c
	if (!cr0.eq) goto loc_831E958C;
	// li r11,32
	ctx.r11.s64 = 32;
loc_831E958C:
	// stb r11,2(r14)
	PPC_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// clrlwi. r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r7,342(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 342);
	// lwz r10,338(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 338);
	// bne 0x831e95e4
	if (!cr0.eq) goto loc_831E95E4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e95e4
	if (!cr6.eq) goto loc_831E95E4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x831e95e4
	if (!cr6.eq) goto loc_831E95E4;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// sth r22,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x831e95c8
	if (cr6.eq) goto loc_831E95C8;
	// li r11,32
	ctx.r11.s64 = 32;
loc_831E95C8:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r6,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r6.u8);
	// stb r22,5(r14)
	PPC_STORE_U8(ctx.r14.u32 + 5, ctx.r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,2(r14)
	PPC_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// stb r10,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r10.u8);
	// b 0x831ea0c4
	goto loc_831EA0C4;
loc_831E95E4:
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// bne cr6,0x831e9724
	if (!cr6.eq) goto loc_831E9724;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// sth r6,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r6.u16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831e9604
	if (!cr6.eq) goto loc_831E9604;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x831e9640
	if (cr6.eq) goto loc_831E9640;
loc_831E9604:
	// rlwinm. r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x831e9640
	if (!cr0.eq) goto loc_831E9640;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,10560
	ctx.r5.s64 = ctx.r11.s64 + 10560;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x831ce7d8
	ctx.lr = 0x831E9620;
	sub_831CE7D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e96f8
	if (cr0.eq) goto loc_831E96F8;
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
	ctx.lr = 0x831E9640;
	sub_831CF0D8(ctx, base);
loc_831E9640:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831e9690
	if (cr6.eq) goto loc_831E9690;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831e9690
	if (!cr6.eq) goto loc_831E9690;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x831e96dc
	if (!cr6.eq) goto loc_831E96DC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,10552
	ctx.r5.s64 = ctx.r11.s64 + 10552;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x831ce7d8
	ctx.lr = 0x831E9670;
	sub_831CE7D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831e96bc
	if (cr0.eq) goto loc_831E96BC;
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
	ctx.lr = 0x831E9690;
	sub_831CF0D8(ctx, base);
loc_831E9690:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831e96dc
	if (!cr6.eq) goto loc_831E96DC;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x831e96dc
	if (!cr6.eq) goto loc_831E96DC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,10544
	ctx.r5.s64 = ctx.r11.s64 + 10544;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x831ce7d8
	ctx.lr = 0x831E96B4;
	sub_831CE7D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e96c4
	if (!cr0.eq) goto loc_831E96C4;
loc_831E96BC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831e96fc
	goto loc_831E96FC;
loc_831E96C4:
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
	ctx.lr = 0x831E96DC;
	sub_831CF0D8(ctx, base);
loc_831E96DC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,10536
	ctx.r5.s64 = ctx.r11.s64 + 10536;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x831ce7d8
	ctx.lr = 0x831E96F0;
	sub_831CE7D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831e970c
	if (!cr0.eq) goto loc_831E970C;
loc_831E96F8:
	// li r11,6
	ctx.r11.s64 = 6;
loc_831E96FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r11.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x831ea0c0
	goto loc_831EA0C0;
loc_831E970C:
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
	ctx.lr = 0x831E9724;
	sub_831CF0D8(ctx, base);
loc_831E9724:
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// stw r10,90(r1)
	PPC_STORE_U32(ctx.r1.u32 + 90, ctx.r10.u32);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stw r7,94(r1)
	PPC_STORE_U32(ctx.r1.u32 + 94, ctx.r7.u32);
	// mulli r11,r11,19728
	ctx.r11.s64 = ctx.r11.s64 * 19728;
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mulli r10,r10,77
	ctx.r10.s64 = ctx.r10.s64 * 77;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addis r11,r11,-4931
	ctx.r11.s64 = ctx.r11.s64 + -323158016;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r22,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r22.u16);
	// addi r11,r11,-4852
	ctx.r11.s64 = ctx.r11.s64 + -4852;
	// lis r7,0
	ctx.r7.s64 = 0;
	// srawi r11,r11,16
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// extsh r19,r11
	ctx.r19.s64 = ctx.r11.s16;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r11,r9,4416
	ctx.r11.s64 = ctx.r9.s64 + 4416;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// neg. r25,r19
	ctx.r25.s64 = -ctx.r19.s64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ori r20,r10,49154
	ctx.r20.u64 = ctx.r10.u64 | 49154;
	// ori r21,r7,65535
	ctx.r21.u64 = ctx.r7.u64 | 65535;
	// ori r17,r6,32768
	ctx.r17.u64 = ctx.r6.u64 | 32768;
	// ori r18,r5,32768
	ctx.r18.u64 = ctx.r5.u64 | 32768;
	// li r15,-32768
	ctx.r15.s64 = -32768;
	// ori r16,r4,32768
	ctx.r16.u64 = ctx.r4.u64 | 32768;
	// addi r23,r11,-96
	ctx.r23.s64 = ctx.r11.s64 + -96;
	// beq 0x831e9b30
	if (cr0.eq) goto loc_831E9B30;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x831e97c4
	if (!cr6.lt) goto loc_831E97C4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// neg r25,r25
	ctx.r25.s64 = -ctx.r25.s64;
	// addi r11,r11,4768
	ctx.r11.s64 = ctx.r11.s64 + 4768;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r23,r11,-96
	ctx.r23.s64 = ctx.r11.s64 + -96;
loc_831E97C4:
	// beq cr6,0x831e9b30
	if (cr6.eq) goto loc_831E9B30;
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_831E97D0:
	// clrlwi. r11,r25,29
	ctx.r11.u64 = ctx.r25.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r23,r23,84
	ctx.r23.s64 = ctx.r23.s64 + 84;
	// srawi r25,r25,3
	xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 3;
	// beq 0x831e9b20
	if (cr0.eq) goto loc_831E9B20;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// blt cr6,0x831e9810
	if (cr6.lt) goto loc_831E9810;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831ce980
	ctx.lr = 0x831E9800;
	sub_831CE980(ctx, base);
	// lwz r11,158(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 158);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,158(r1)
	PPC_STORE_U32(ctx.r1.u32 + 158, ctx.r11.u32);
loc_831E9810:
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// clrlwi r11,r31,17
	ctx.r11.u64 = ctx.r31.u32 & 0x7FFF;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r26,r8,0,16,16
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x831e9b00
	if (!cr6.lt) goto loc_831E9B00;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// bge cr6,0x831e9b00
	if (!cr6.lt) goto loc_831E9B00;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	cr6.compare<uint32_t>(ctx.r11.u32, 49149, xer);
	// bgt cr6,0x831e9b00
	if (cr6.gt) goto loc_831E9B00;
	// cmplwi cr6,r11,16319
	cr6.compare<uint32_t>(ctx.r11.u32, 16319, xer);
	// bgt cr6,0x831e9870
	if (cr6.gt) goto loc_831E9870;
loc_831E9868:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// b 0x831e9b10
	goto loc_831E9B10;
loc_831E9870:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831e98a4
	if (!cr6.eq) goto loc_831E98A4;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x831e98a4
	if (!cr0.eq) goto loc_831E98A4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x831e98a4
	if (!cr6.eq) goto loc_831E98A4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x831e98a4
	if (!cr6.eq) goto loc_831E98A4;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// b 0x831e9b20
	goto loc_831E9B20;
loc_831E98A4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e98dc
	if (!cr6.eq) goto loc_831E98DC;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x831e98dc
	if (!cr0.eq) goto loc_831E98DC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e98dc
	if (!cr6.eq) goto loc_831E98DC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e9868
	if (cr6.eq) goto loc_831E9868;
loc_831E98DC:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r8,r1,110
	ctx.r8.s64 = ctx.r1.s64 + 110;
	// li r3,5
	ctx.r3.s64 = 5;
loc_831E98E8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831e9954
	if (!cr6.gt) goto loc_831E9954;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_831E9904:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e992c
	if (cr6.lt) goto loc_831E992C;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x831e9930
	if (!cr6.lt) goto loc_831E9930;
loc_831E992C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_831E9930:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831e9948
	if (cr6.eq) goto loc_831E9948;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_831E9948:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x831e9904
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E9904;
loc_831E9954:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bgt 0x831e98e8
	if (cr0.gt) goto loc_831E98E8;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_831E9970:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x831e99c0
	if (!cr0.gt) goto loc_831E99C0;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x831e99c0
	if (!cr0.eq) goto loc_831E99C0;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// b 0x831e9970
	goto loc_831E9970;
loc_831E99C0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x831e9a48
	if (cr6.gt) goto loc_831E9A48;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x831e9a48
	if (!cr0.lt) goto loc_831E9A48;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_831E99E4:
	// lhz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x831e99f4
	if (cr0.eq) goto loc_831E99F4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_831E99F4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x831e99e4
	if (cr0.lt) goto loc_831E99E4;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// beq cr6,0x831e9a48
	if (cr6.eq) goto loc_831E9A48;
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r10.u16);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_831E9A48:
	// lhz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bgt cr6,0x831e9a60
	if (cr6.gt) goto loc_831E9A60;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, xer);
	// bne cr6,0x831e9ac0
	if (!cr6.eq) goto loc_831E9AC0;
loc_831E9A60:
	// lwz r10,110(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 110);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x831e9ab8
	if (!cr6.eq) goto loc_831E9AB8;
	// lwz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 106);
	// stw r22,110(r1)
	PPC_STORE_U32(ctx.r1.u32 + 110, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x831e9aac
	if (!cr6.eq) goto loc_831E9AAC;
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// stw r22,106(r1)
	PPC_STORE_U32(ctx.r1.u32 + 106, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x831e9aa0
	if (!cr6.eq) goto loc_831E9AA0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r18,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r18.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x831e9ac0
	goto loc_831E9AC0;
loc_831E9AA0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// b 0x831e9ac0
	goto loc_831E9AC0;
loc_831E9AAC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,106(r1)
	PPC_STORE_U32(ctx.r1.u32 + 106, ctx.r10.u32);
	// b 0x831e9ac0
	goto loc_831E9AC0;
loc_831E9AB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,110(r1)
	PPC_STORE_U32(ctx.r1.u32 + 110, ctx.r10.u32);
loc_831E9AC0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// bge cr6,0x831e9b00
	if (!cr6.lt) goto loc_831E9B00;
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// lhz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// stw r8,94(r1)
	PPC_STORE_U32(ctx.r1.u32 + 94, ctx.r8.u32);
	// stw r7,90(r1)
	PPC_STORE_U32(ctx.r1.u32 + 90, ctx.r7.u32);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x831e9b20
	goto loc_831E9B20;
loc_831E9B00:
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e9b10
	if (!cr0.eq) goto loc_831E9B10;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
loc_831E9B10:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_831E9B20:
	// lhz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x831e97d0
	if (!cr6.eq) goto loc_831E97D0;
	// b 0x831e9b38
	goto loc_831E9B38;
loc_831E9B30:
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_831E9B38:
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r9,16383
	cr6.compare<uint32_t>(ctx.r9.u32, 16383, xer);
	// blt cr6,0x831e9e48
	if (cr6.lt) goto loc_831E9E48;
	// lhz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// addi r7,r24,1
	ctx.r7.s64 = ctx.r24.s64 + 1;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r19,r7
	ctx.r19.s64 = ctx.r7.s16;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// rlwinm r29,r9,0,16,16
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	// clrlwi r31,r6,16
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// bge cr6,0x831e9e30
	if (!cr6.lt) goto loc_831E9E30;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// bge cr6,0x831e9e30
	if (!cr6.lt) goto loc_831E9E30;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r9,49149
	cr6.compare<uint32_t>(ctx.r9.u32, 49149, xer);
	// bgt cr6,0x831e9e30
	if (cr6.gt) goto loc_831E9E30;
	// cmplwi cr6,r9,16319
	cr6.compare<uint32_t>(ctx.r9.u32, 16319, xer);
	// bgt cr6,0x831e9ba4
	if (cr6.gt) goto loc_831E9BA4;
loc_831E9B9C:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// b 0x831e9e40
	goto loc_831E9E40;
loc_831E9BA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e9bd8
	if (!cr6.eq) goto loc_831E9BD8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// bne 0x831e9bd8
	if (!cr0.eq) goto loc_831E9BD8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x831e9bd8
	if (!cr6.eq) goto loc_831E9BD8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x831e9bd8
	if (!cr6.eq) goto loc_831E9BD8;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// b 0x831e9e48
	goto loc_831E9E48;
loc_831E9BD8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831e9c10
	if (!cr6.eq) goto loc_831E9C10;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x831e9c10
	if (!cr0.eq) goto loc_831E9C10;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831e9c10
	if (!cr6.eq) goto loc_831E9C10;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831e9b9c
	if (cr6.eq) goto loc_831E9B9C;
loc_831E9C10:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r8,r1,126
	ctx.r8.s64 = ctx.r1.s64 + 126;
	// li r4,5
	ctx.r4.s64 = 5;
loc_831E9C1C:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x831e9c88
	if (!cr6.gt) goto loc_831E9C88;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// addi r5,r1,138
	ctx.r5.s64 = ctx.r1.s64 + 138;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_831E9C38:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e9c60
	if (cr6.lt) goto loc_831E9C60;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x831e9c64
	if (!cr6.lt) goto loc_831E9C64;
loc_831E9C60:
	// li r7,1
	ctx.r7.s64 = 1;
loc_831E9C64:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x831e9c7c
	if (cr6.eq) goto loc_831E9C7C;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_831E9C7C:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x831e9c38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E9C38;
loc_831E9C88:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bgt 0x831e9c1c
	if (cr0.gt) goto loc_831E9C1C;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_831E9CA4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x831e9cf4
	if (!cr0.gt) goto loc_831E9CF4;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x831e9cf4
	if (!cr0.eq) goto loc_831E9CF4;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// b 0x831e9ca4
	goto loc_831E9CA4;
loc_831E9CF4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x831e9d7c
	if (cr6.gt) goto loc_831E9D7C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x831e9d7c
	if (!cr0.lt) goto loc_831E9D7C;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_831E9D18:
	// lhz r7,130(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x831e9d28
	if (cr0.eq) goto loc_831E9D28;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831E9D28:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x831e9d18
	if (cr0.lt) goto loc_831E9D18;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// beq cr6,0x831e9d7c
	if (cr6.eq) goto loc_831E9D7C;
	// lhz r10,130(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_831E9D7C:
	// lhz r9,130(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bgt cr6,0x831e9d94
	if (cr6.gt) goto loc_831E9D94;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, xer);
	// bne cr6,0x831e9df4
	if (!cr6.eq) goto loc_831E9DF4;
loc_831E9D94:
	// lwz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 126);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x831e9dec
	if (!cr6.eq) goto loc_831E9DEC;
	// lwz r10,122(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 122);
	// stw r22,126(r1)
	PPC_STORE_U32(ctx.r1.u32 + 126, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x831e9de0
	if (!cr6.eq) goto loc_831E9DE0;
	// lhz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// stw r22,122(r1)
	PPC_STORE_U32(ctx.r1.u32 + 122, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x831e9dd4
	if (!cr6.eq) goto loc_831E9DD4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r18,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r18.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x831e9df4
	goto loc_831E9DF4;
loc_831E9DD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// b 0x831e9df4
	goto loc_831E9DF4;
loc_831E9DE0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,122(r1)
	PPC_STORE_U32(ctx.r1.u32 + 122, ctx.r10.u32);
	// b 0x831e9df4
	goto loc_831E9DF4;
loc_831E9DEC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,126(r1)
	PPC_STORE_U32(ctx.r1.u32 + 126, ctx.r10.u32);
loc_831E9DF4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// bge cr6,0x831e9e30
	if (!cr6.lt) goto loc_831E9E30;
	// lhz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// stw r8,94(r1)
	PPC_STORE_U32(ctx.r1.u32 + 94, ctx.r8.u32);
	// stw r7,90(r1)
	PPC_STORE_U32(ctx.r1.u32 + 90, ctx.r7.u32);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x831e9e48
	goto loc_831E9E48;
loc_831E9E30:
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// clrlwi. r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831e9e40
	if (!cr0.eq) goto loc_831E9E40;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
loc_831E9E40:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_831E9E48:
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// sth r19,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r19.u16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831e9ea0
	if (cr0.eq) goto loc_831E9EA0;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// extsh r11,r19
	ctx.r11.s64 = ctx.r19.s16;
	// add. r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x831e9ea4
	if (cr0.gt) goto loc_831E9EA4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r22,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x831e9e80
	if (cr6.eq) goto loc_831E9E80;
	// li r11,32
	ctx.r11.s64 = 32;
loc_831E9E80:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r10.u8);
loc_831E9E88:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,2(r14)
	PPC_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// stb r22,5(r14)
	PPC_STORE_U8(ctx.r14.u32 + 5, ctx.r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r9.u8);
	// b 0x831ea0c4
	goto loc_831EA0C4;
loc_831E9EA0:
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_831E9EA4:
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// ble cr6,0x831e9eb0
	if (!cr6.gt) goto loc_831E9EB0;
	// li r9,21
	ctx.r9.s64 = 21;
loc_831E9EB0:
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// addi r10,r10,-16382
	ctx.r10.s64 = ctx.r10.s64 + -16382;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_831E9EC8:
	// rlwinm r11,r27,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r8,r28,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// or r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r30,r6,r8
	ctx.r30.u64 = ctx.r6.u64 | ctx.r8.u64;
	// bdnz 0x831e9ec8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E9EC8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bge cr6,0x831e9f38
	if (!cr6.lt) goto loc_831E9F38;
	// neg r11,r10
	ctx.r11.s64 = -ctx.r10.s64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x831e9f38
	if (!cr0.gt) goto loc_831E9F38;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831E9F0C:
	// rlwinm r11,r30,31,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000;
	// rlwinm r10,r28,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x80000000;
	// rlwinm r8,r28,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r27,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r27,r7,r10
	ctx.r27.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bdnz 0x831e9f0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831E9F0C;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_831E9F38:
	// addi r26,r14,4
	ctx.r26.s64 = ctx.r14.s64 + 4;
	// addic. r11,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r11.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// ble 0x831ea04c
	if (!cr0.gt) goto loc_831EA04C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x831e9f54
	goto loc_831E9F54;
loc_831E9F50:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_831E9F54:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x831ce980
	ctx.lr = 0x831E9F64;
	sub_831CE980(ctx, base);
	// rlwinm r5,r27,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r28,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 | ctx.r5.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x831e9fb4
	if (cr6.lt) goto loc_831E9FB4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x831e9fe0
	if (!cr6.lt) goto loc_831E9FE0;
loc_831E9FB4:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x831e9fcc
	if (cr6.lt) goto loc_831E9FCC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x831e9fd0
	if (!cr6.lt) goto loc_831E9FD0;
loc_831E9FCC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_831E9FD0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x831e9fe0
	if (cr6.eq) goto loc_831E9FE0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_831E9FE0:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x831e9ff8
	if (cr6.lt) goto loc_831E9FF8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x831e9ffc
	if (!cr6.lt) goto loc_831E9FFC;
loc_831E9FF8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_831E9FFC:
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r22,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r22.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x831e9f50
	if (!cr0.eq) goto loc_831E9F50;
loc_831EA04C:
	// lbzu r10,-1(r31)
	ea = -1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r10,53
	cr6.compare<int32_t>(ctx.r10.s32, 53, xer);
	// blt cr6,0x831ea0dc
	if (cr6.lt) goto loc_831EA0DC;
	// b 0x831ea07c
	goto loc_831EA07C;
loc_831EA064:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,57
	cr6.compare<uint32_t>(ctx.r10.u32, 57, xer);
	// bne cr6,0x831ea084
	if (!cr6.eq) goto loc_831EA084;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831EA07C:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x831ea064
	if (!cr6.lt) goto loc_831EA064;
loc_831EA084:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x831ea09c
	if (!cr6.lt) goto loc_831EA09C;
	// lhz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r14.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r10.u16);
loc_831EA09C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_831EA0A8:
	// subf r11,r14,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r14.s64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + ctx.r14.u64;
	// stb r10,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r10.u8);
	// stb r22,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r22.u8);
loc_831EA0C0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831EA0C4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_831EA0CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x831ea0e4
	if (!cr6.eq) goto loc_831EA0E4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831EA0DC:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x831ea0cc
	if (!cr6.lt) goto loc_831EA0CC;
loc_831EA0E4:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x831ea0a8
	if (!cr6.lt) goto loc_831EA0A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r22,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(ctx.r11.u32, 32768, xer);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x831ea104
	if (cr6.eq) goto loc_831EA104;
	// li r11,32
	ctx.r11.s64 = 32;
loc_831EA104:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r10.u8);
	// b 0x831e9e88
	goto loc_831E9E88;
}

__attribute__((alias("__imp__sub_831EA110"))) PPC_WEAK_FUNC(sub_831EA110);
PPC_FUNC_IMPL(__imp__sub_831EA110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831EA118;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831db880
	ctx.lr = 0x831EA12C;
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
	// bne 0x831ea168
	if (!cr0.eq) goto loc_831EA168;
	// bl 0x831d3050
	ctx.lr = 0x831EA144;
	sub_831D3050(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_831EA148:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_831EA150:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x831ea2f0
	goto loc_831EA2F0;
loc_831EA168:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831ea17c
	if (cr0.eq) goto loc_831EA17C;
	// bl 0x831d3050
	ctx.lr = 0x831EA174;
	sub_831D3050(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x831ea148
	goto loc_831EA148;
loc_831EA17C:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x831ea1a4
	if (cr0.eq) goto loc_831EA1A4;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x831ea248
	if (cr0.eq) goto loc_831EA248;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_831EA1A4:
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
	// bne 0x831ea200
	if (!cr0.eq) goto loc_831EA200;
	// bl 0x831cf870
	ctx.lr = 0x831EA1CC;
	sub_831CF870(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x831ea1e8
	if (cr6.eq) goto loc_831EA1E8;
	// bl 0x831cf870
	ctx.lr = 0x831EA1DC;
	sub_831CF870(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x831ea1f8
	if (!cr6.eq) goto loc_831EA1F8;
loc_831EA1E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a2a780
	ctx.lr = 0x831EA1F0;
	sub_83A2A780(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ea200
	if (!cr0.eq) goto loc_831EA200;
loc_831EA1F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831dba98
	ctx.lr = 0x831EA200;
	sub_831DBA98(ctx, base);
loc_831EA200:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831ea2c8
	if (cr0.eq) goto loc_831EA2C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf. r30,r4,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ble 0x831ea25c
	if (!cr0.gt) goto loc_831EA25C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dbe58
	ctx.lr = 0x831EA240;
	sub_831DBE58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831ea2bc
	goto loc_831EA2BC;
loc_831EA248:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x831ea2f0
	goto loc_831EA2F0;
loc_831EA25C:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x831ea290
	if (cr6.eq) goto loc_831EA290;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(ctx.r29.s32, -2, xer);
	// beq cr6,0x831ea290
	if (cr6.eq) goto loc_831EA290;
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
	// b 0x831ea298
	goto loc_831EA298;
loc_831EA290:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
loc_831EA298:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831ea2bc
	if (cr0.eq) goto loc_831EA2BC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831dc6c0
	ctx.lr = 0x831EA2B4;
	sub_831DC6C0(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x831ea150
	if (cr6.eq) goto loc_831EA150;
loc_831EA2BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// b 0x831ea2e4
	goto loc_831EA2E4;
loc_831EA2C8:
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x831dbe58
	ctx.lr = 0x831EA2E0;
	sub_831DBE58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_831EA2E4:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, xer);
	// bne cr6,0x831ea150
	if (!cr6.eq) goto loc_831EA150;
	// clrlwi r3,r27,16
	ctx.r3.u64 = ctx.r27.u32 & 0xFFFF;
loc_831EA2F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA2F8"))) PPC_WEAK_FUNC(sub_831EA2F8);
PPC_FUNC_IMPL(__imp__sub_831EA2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r3,3724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3724, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA304"))) PPC_WEAK_FUNC(sub_831EA304);
PPC_FUNC_IMPL(__imp__sub_831EA304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA308"))) PPC_WEAK_FUNC(sub_831EA308);
PPC_FUNC_IMPL(__imp__sub_831EA308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831EA310;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x831ea640
	ctx.lr = 0x831EA32C;
	sub_831EA640(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r31,r11,3716
	ctx.r31.s64 = ctx.r11.s64 + 3716;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831ea374
	if (cr6.eq) goto loc_831EA374;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831EA36C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831EA374:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// bne cr6,0x831ea38c
	if (!cr6.eq) goto loc_831EA38C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x831ea398
	goto loc_831EA398;
loc_831EA38C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831EA398:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831ea3ac
	if (!cr6.eq) goto loc_831EA3AC;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// beq cr6,0x831ea3d0
	if (cr6.eq) goto loc_831EA3D0;
loc_831EA3AC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831ea3d0
	if (cr6.eq) goto loc_831EA3D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EA3D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831EA3D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA3D8"))) PPC_WEAK_FUNC(sub_831EA3D8);
PPC_FUNC_IMPL(__imp__sub_831EA3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,3716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3716);
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

__attribute__((alias("__imp__sub_831EA3EC"))) PPC_WEAK_FUNC(sub_831EA3EC);
PPC_FUNC_IMPL(__imp__sub_831EA3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA3F0"))) PPC_WEAK_FUNC(sub_831EA3F0);
PPC_FUNC_IMPL(__imp__sub_831EA3F0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x831ea308
	sub_831EA308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA400"))) PPC_WEAK_FUNC(sub_831EA400);
PPC_FUNC_IMPL(__imp__sub_831EA400) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831ea308
	sub_831EA308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA40C"))) PPC_WEAK_FUNC(sub_831EA40C);
PPC_FUNC_IMPL(__imp__sub_831EA40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA410"))) PPC_WEAK_FUNC(sub_831EA410);
PPC_FUNC_IMPL(__imp__sub_831EA410) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x831ea308
	sub_831EA308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA418"))) PPC_WEAK_FUNC(sub_831EA418);
PPC_FUNC_IMPL(__imp__sub_831EA418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EA420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,10984
	ctx.r11.s64 = ctx.r11.s64 + 10984;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831ea46c
	if (cr6.eq) goto loc_831EA46C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831EA448:
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// beq cr6,0x831ea4dc
	if (cr6.eq) goto loc_831EA4DC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x831ea448
	if (!cr6.eq) goto loc_831EA448;
loc_831EA46C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r31,r11,10788
	ctx.r31.s64 = ctx.r11.s64 + 10788;
loc_831EA474:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r28,r11,3456
	ctx.r28.s64 = ctx.r11.s64 + 3456;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x831EA488;
	sub_831EA7A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x831ea658
	ctx.lr = 0x831EA498;
	sub_831EA658(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,-20096
	ctx.r5.s64 = ctx.r11.s64 + -20096;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x831ea6a0
	ctx.lr = 0x831EA4AC;
	sub_831EA6A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x831ea6a0
	ctx.lr = 0x831EA4BC;
	sub_831EA6A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea308
	ctx.lr = 0x831EA4D4;
	sub_831EA308(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_831EA4DC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x831ea474
	goto loc_831EA474;
}

__attribute__((alias("__imp__sub_831EA4E8"))) PPC_WEAK_FUNC(sub_831EA4E8);
PPC_FUNC_IMPL(__imp__sub_831EA4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EA4F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x831ea640
	ctx.lr = 0x831EA500;
	sub_831EA640(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r31,r11,3724
	ctx.r31.s64 = ctx.r11.s64 + 3724;
	// addi r11,r10,10880
	ctx.r11.s64 = ctx.r10.s64 + 10880;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// beq cr6,0x831ea55c
	if (cr6.eq) goto loc_831EA55C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ea55c
	if (cr6.eq) goto loc_831EA55C;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x831ea55c
	if (cr6.eq) goto loc_831EA55C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831ea55c
	if (!cr6.eq) goto loc_831EA55C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,11112
	ctx.r4.s64 = ctx.r11.s64 + 11112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x831ea308
	ctx.lr = 0x831EA55C;
	sub_831EA308(ctx, base);
loc_831EA55C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// beq cr6,0x831ea584
	if (cr6.eq) goto loc_831EA584;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,11048
	ctx.r4.s64 = ctx.r11.s64 + 11048;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x831EA584;
	sub_831EA308(ctx, base);
loc_831EA584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA58C"))) PPC_WEAK_FUNC(sub_831EA58C);
PPC_FUNC_IMPL(__imp__sub_831EA58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA590"))) PPC_WEAK_FUNC(sub_831EA590);
PPC_FUNC_IMPL(__imp__sub_831EA590) {
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
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x831ea5d0
	if (cr6.lt) goto loc_831EA5D0;
	// beq cr6,0x831ea5c4
	if (cr6.eq) goto loc_831EA5C4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,11224
	ctx.r4.s64 = ctx.r11.s64 + 11224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EA5BC;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea5dc
	goto loc_831EA5DC;
loc_831EA5C4:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,3732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3732);
	// b 0x831ea5dc
	goto loc_831EA5DC;
loc_831EA5D0:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,3732
	ctx.r11.s64 = ctx.r11.s64 + 3732;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_831EA5DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA5EC"))) PPC_WEAK_FUNC(sub_831EA5EC);
PPC_FUNC_IMPL(__imp__sub_831EA5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA5F0"))) PPC_WEAK_FUNC(sub_831EA5F0);
PPC_FUNC_IMPL(__imp__sub_831EA5F0) {
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
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,3736
	ctx.r31.s64 = ctx.r10.s64 + 3736;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x831ea730
	ctx.lr = 0x831EA624;
	sub_831EA730(ctx, base);
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

__attribute__((alias("__imp__sub_831EA63C"))) PPC_WEAK_FUNC(sub_831EA63C);
PPC_FUNC_IMPL(__imp__sub_831EA63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA640"))) PPC_WEAK_FUNC(sub_831EA640);
PPC_FUNC_IMPL(__imp__sub_831EA640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// addi r11,r11,12288
	ctx.r11.s64 = ctx.r11.s64 + 12288;
	// stw r11,4248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA654"))) PPC_WEAK_FUNC(sub_831EA654);
PPC_FUNC_IMPL(__imp__sub_831EA654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA658"))) PPC_WEAK_FUNC(sub_831EA658);
PPC_FUNC_IMPL(__imp__sub_831EA658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EA660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x839f8330
	ctx.lr = 0x831EA678;
	sub_839F8330(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bge cr6,0x831ea694
	if (!cr6.lt) goto loc_831EA694;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d36a8
	ctx.lr = 0x831EA690;
	sub_831D36A8(ctx, base);
	// b 0x831ea698
	goto loc_831EA698;
loc_831EA694:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EA698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA6A0"))) PPC_WEAK_FUNC(sub_831EA6A0);
PPC_FUNC_IMPL(__imp__sub_831EA6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EA6A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x839f8330
	ctx.lr = 0x831EA6C0;
	sub_839F8330(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f8330
	ctx.lr = 0x831EA6CC;
	sub_839F8330(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// ble cr6,0x831ea6ec
	if (!cr6.gt) goto loc_831EA6EC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3658
	ctx.lr = 0x831EA6E8;
	sub_831D3658(ctx, base);
	// b 0x831ea6f0
	goto loc_831EA6F0;
loc_831EA6EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EA6F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA6F8"))) PPC_WEAK_FUNC(sub_831EA6F8);
PPC_FUNC_IMPL(__imp__sub_831EA6F8) {
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
	// bl 0x839f8330
	ctx.lr = 0x831EA708;
	sub_839F8330(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x831ea71c
	if (!cr6.gt) goto loc_831EA71C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831EA71C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA72C"))) PPC_WEAK_FUNC(sub_831EA72C);
PPC_FUNC_IMPL(__imp__sub_831EA72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA730"))) PPC_WEAK_FUNC(sub_831EA730);
PPC_FUNC_IMPL(__imp__sub_831EA730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831e7908
	ctx.lr = 0x831EA768;
	sub_831E7908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA778"))) PPC_WEAK_FUNC(sub_831EA778);
PPC_FUNC_IMPL(__imp__sub_831EA778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// blt cr6,0x831ea790
	if (cr6.lt) goto loc_831EA790;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
loc_831EA790:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA798"))) PPC_WEAK_FUNC(sub_831EA798);
PPC_FUNC_IMPL(__imp__sub_831EA798) {
	PPC_FUNC_PROLOGUE();
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA79C"))) PPC_WEAK_FUNC(sub_831EA79C);
PPC_FUNC_IMPL(__imp__sub_831EA79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA7A0"))) PPC_WEAK_FUNC(sub_831EA7A0);
PPC_FUNC_IMPL(__imp__sub_831EA7A0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EA7AC"))) PPC_WEAK_FUNC(sub_831EA7AC);
PPC_FUNC_IMPL(__imp__sub_831EA7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA7B0"))) PPC_WEAK_FUNC(sub_831EA7B0);
PPC_FUNC_IMPL(__imp__sub_831EA7B0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,4672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ea7d4
	if (cr6.eq) goto loc_831EA7D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea7e8
	goto loc_831EA7E8;
loc_831EA7D4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,12740
	ctx.r4.s64 = ctx.r11.s64 + 12740;
	// bl 0x831ea3f0
	ctx.lr = 0x831EA7E4;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831EA7E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA7F8"))) PPC_WEAK_FUNC(sub_831EA7F8);
PPC_FUNC_IMPL(__imp__sub_831EA7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x831ea818
	goto loc_831EA818;
loc_831EA804:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x831ea824
	if (cr6.eq) goto loc_831EA824;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_831EA818:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ea804
	if (!cr6.eq) goto loc_831EA804;
	// blr 
	return;
loc_831EA824:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bne cr6,0x831ea85c
	if (!cr6.eq) goto loc_831EA85C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x831ea878
	goto loc_831EA878;
loc_831EA85C:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831ea878
	if (cr6.eq) goto loc_831EA878;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_831EA878:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ea8a8
	if (cr6.eq) goto loc_831EA8A8;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_831EA884:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x831ea8a0
	if (!cr6.lt) goto loc_831EA8A0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ea884
	if (!cr6.eq) goto loc_831EA884;
loc_831EA8A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ea8bc
	if (!cr6.eq) goto loc_831EA8BC;
loc_831EA8A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_831EA8BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x831ea8d8
	if (!cr6.eq) goto loc_831EA8D8;
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// b 0x831ea8dc
	goto loc_831EA8DC;
loc_831EA8D8:
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_831EA8DC:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA8E8"))) PPC_WEAK_FUNC(sub_831EA8E8);
PPC_FUNC_IMPL(__imp__sub_831EA8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r9,4672(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4672);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,60(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x831ea928
	if (cr6.eq) goto loc_831EA928;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x831ea924
	if (!cr6.eq) goto loc_831EA924;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x831ea928
	goto loc_831EA928;
loc_831EA924:
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_831EA928:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ea93c
	if (cr6.eq) goto loc_831EA93C;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_831EA93C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x831ea964
	if (!cr6.eq) goto loc_831EA964;
	// lwz r10,60(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x831ea978
	goto loc_831EA978;
loc_831EA960:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_831EA964:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831ea960
	if (!cr6.eq) goto loc_831EA960;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_831EA978:
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EA984"))) PPC_WEAK_FUNC(sub_831EA984);
PPC_FUNC_IMPL(__imp__sub_831EA984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA988"))) PPC_WEAK_FUNC(sub_831EA988);
PPC_FUNC_IMPL(__imp__sub_831EA988) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ea9dc
	if (cr6.eq) goto loc_831EA9DC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ea9bc
	if (cr6.eq) goto loc_831EA9BC;
	// bl 0x831ea988
	ctx.lr = 0x831EA9BC;
	sub_831EA988(ctx, base);
loc_831EA9BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ea9d0
	if (cr6.eq) goto loc_831EA9D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ea988
	ctx.lr = 0x831EA9D0;
	sub_831EA988(ctx, base);
loc_831EA9D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea8e8
	ctx.lr = 0x831EA9DC;
	sub_831EA8E8(ctx, base);
loc_831EA9DC:
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

__attribute__((alias("__imp__sub_831EA9F4"))) PPC_WEAK_FUNC(sub_831EA9F4);
PPC_FUNC_IMPL(__imp__sub_831EA9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EA9F8"))) PPC_WEAK_FUNC(sub_831EA9F8);
PPC_FUNC_IMPL(__imp__sub_831EA9F8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eaa58
	if (cr6.eq) goto loc_831EAA58;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eaa24
	if (cr6.eq) goto loc_831EAA24;
	// bl 0x831ea9f8
	ctx.lr = 0x831EAA24;
	sub_831EA9F8(ctx, base);
loc_831EAA24:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eaa34
	if (cr6.eq) goto loc_831EAA34;
	// bl 0x831ea9f8
	ctx.lr = 0x831EAA34;
	sub_831EA9F8(ctx, base);
loc_831EAA34:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eaa58
	if (cr6.eq) goto loc_831EAA58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831EAA4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_831EAA58:
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

__attribute__((alias("__imp__sub_831EAA6C"))) PPC_WEAK_FUNC(sub_831EAA6C);
PPC_FUNC_IMPL(__imp__sub_831EAA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EAA70"))) PPC_WEAK_FUNC(sub_831EAA70);
PPC_FUNC_IMPL(__imp__sub_831EAA70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eaab8
	if (cr6.eq) goto loc_831EAAB8;
loc_831EAA94:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eaaa8
	if (cr6.eq) goto loc_831EAAA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831eaa70
	ctx.lr = 0x831EAAA8;
	sub_831EAA70(ctx, base);
loc_831EAAA8:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831eaa94
	if (!cr6.eq) goto loc_831EAA94;
loc_831EAAB8:
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

__attribute__((alias("__imp__sub_831EAAD0"))) PPC_WEAK_FUNC(sub_831EAAD0);
PPC_FUNC_IMPL(__imp__sub_831EAAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EAAD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eab20
	if (cr6.eq) goto loc_831EAB20;
loc_831EAAF0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eab04
	if (cr6.eq) goto loc_831EAB04;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831eaad0
	ctx.lr = 0x831EAB04;
	sub_831EAAD0(ctx, base);
loc_831EAB04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x831EAB10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831eaaf0
	if (!cr6.eq) goto loc_831EAAF0;
loc_831EAB20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAB2C"))) PPC_WEAK_FUNC(sub_831EAB2C);
PPC_FUNC_IMPL(__imp__sub_831EAB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EAB30"))) PPC_WEAK_FUNC(sub_831EAB30);
PPC_FUNC_IMPL(__imp__sub_831EAB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 + 72;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAB48"))) PPC_WEAK_FUNC(sub_831EAB48);
PPC_FUNC_IMPL(__imp__sub_831EAB48) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r31,r11,4720
	ctx.r31.s64 = ctx.r11.s64 + 4720;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eab78
	if (cr6.eq) goto loc_831EAB78;
	// bl 0x83a75c60
	ctx.lr = 0x831EAB70;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_831EAB78:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eab90
	if (cr6.eq) goto loc_831EAB90;
	// bl 0x83a75c60
	ctx.lr = 0x831EAB88;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
loc_831EAB90:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eaba8
	if (cr6.eq) goto loc_831EABA8;
	// bl 0x83a75c60
	ctx.lr = 0x831EABA0;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_831EABA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eabc0
	if (cr6.eq) goto loc_831EABC0;
	// bl 0x83a75c60
	ctx.lr = 0x831EABB8;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831EABC0:
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

__attribute__((alias("__imp__sub_831EABD4"))) PPC_WEAK_FUNC(sub_831EABD4);
PPC_FUNC_IMPL(__imp__sub_831EABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EABD8"))) PPC_WEAK_FUNC(sub_831EABD8);
PPC_FUNC_IMPL(__imp__sub_831EABD8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r31,r11,4528
	ctx.r31.s64 = ctx.r11.s64 + 4528;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x83a75be8
	ctx.lr = 0x831EABFC;
	sub_83A75BE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,-96
	ctx.r3.s64 = ctx.r31.s64 + -96;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x831EAC10;
	sub_83A75BE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,-208
	ctx.r3.s64 = ctx.r31.s64 + -208;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x831EAC24;
	sub_83A75BE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x831EAC38;
	sub_83A75BE8(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eac70
	if (cr6.eq) goto loc_831EAC70;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eac70
	if (cr6.eq) goto loc_831EAC70;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eac70
	if (cr6.eq) goto loc_831EAC70;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eac70
	if (cr6.eq) goto loc_831EAC70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eac78
	goto loc_831EAC78;
loc_831EAC70:
	// bl 0x831eab48
	ctx.lr = 0x831EAC74;
	sub_831EAB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831EAC78:
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

__attribute__((alias("__imp__sub_831EAC8C"))) PPC_WEAK_FUNC(sub_831EAC8C);
PPC_FUNC_IMPL(__imp__sub_831EAC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EAC90"))) PPC_WEAK_FUNC(sub_831EAC90);
PPC_FUNC_IMPL(__imp__sub_831EAC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r10,r11,4676
	ctx.r10.s64 = ctx.r11.s64 + 4676;
	// lwz r11,4676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4676);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EACAC"))) PPC_WEAK_FUNC(sub_831EACAC);
PPC_FUNC_IMPL(__imp__sub_831EACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EACB0"))) PPC_WEAK_FUNC(sub_831EACB0);
PPC_FUNC_IMPL(__imp__sub_831EACB0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831eacd0
	if (!cr6.eq) goto loc_831EACD0;
loc_831EACC8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ead70
	goto loc_831EAD70;
loc_831EACD0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,12792
	ctx.r4.s64 = ctx.r11.s64 + 12792;
	// bl 0x831d3450
	ctx.lr = 0x831EACDC;
	sub_831D3450(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831eacc8
	if (cr0.eq) goto loc_831EACC8;
	// addi r31,r3,3
	ctx.r31.s64 = ctx.r3.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f8330
	ctx.lr = 0x831EACF0;
	sub_839F8330(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x831eacc8
	if (cr6.gt) goto loc_831EACC8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831eacc8
	if (cr6.eq) goto loc_831EACC8;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x831ead14
	if (cr6.lt) goto loc_831EAD14;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831eacc8
	if (cr6.eq) goto loc_831EACC8;
loc_831EAD14:
	// addic. r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// blt 0x831ead6c
	if (cr0.lt) goto loc_831EAD6C;
loc_831EAD24:
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// blt cr6,0x831eacc8
	if (cr6.lt) goto loc_831EACC8;
	// cmpwi cr6,r8,57
	cr6.compare<int32_t>(ctx.r8.s32, 57, xer);
	// bgt cr6,0x831eacc8
	if (cr6.gt) goto loc_831EACC8;
	// addi r8,r8,-48
	ctx.r8.s64 = ctx.r8.s64 + -48;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bge 0x831ead24
	if (!cr0.lt) goto loc_831EAD24;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, xer);
	// bgt cr6,0x831ead70
	if (cr6.gt) goto loc_831EAD70;
loc_831EAD6C:
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
loc_831EAD70:
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

__attribute__((alias("__imp__sub_831EAD84"))) PPC_WEAK_FUNC(sub_831EAD84);
PPC_FUNC_IMPL(__imp__sub_831EAD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EAD88"))) PPC_WEAK_FUNC(sub_831EAD88);
PPC_FUNC_IMPL(__imp__sub_831EAD88) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831eadc8
	if (!cr6.eq) goto loc_831EADC8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,12796
	ctx.r4.s64 = ctx.r11.s64 + 12796;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EADC0;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831eadf8
	goto loc_831EADF8;
loc_831EADC8:
	// bl 0x831f2360
	ctx.lr = 0x831EADCC;
	sub_831F2360(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eadec
	if (!cr0.eq) goto loc_831EADEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831eee28
	ctx.lr = 0x831EADDC;
	sub_831EEE28(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x831f1918
	ctx.lr = 0x831EADE8;
	sub_831F1918(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_831EADEC:
	// addi r11,r30,820
	ctx.r11.s64 = ctx.r30.s64 + 820;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831EADF8:
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

__attribute__((alias("__imp__sub_831EAE10"))) PPC_WEAK_FUNC(sub_831EAE10);
PPC_FUNC_IMPL(__imp__sub_831EAE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EAE18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// beq cr6,0x831eae80
	if (cr6.eq) goto loc_831EAE80;
loc_831EAE38:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// ble cr6,0x831eae50
	if (!cr6.gt) goto loc_831EAE50;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x831eae74
	goto loc_831EAE74;
loc_831EAE50:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x831eae80
	if (cr6.eq) goto loc_831EAE80;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x831eae80
	if (cr6.eq) goto loc_831EAE80;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x831eae80
	if (cr6.eq) goto loc_831EAE80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eae80
	if (cr6.eq) goto loc_831EAE80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831EAE74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x831eae38
	if (cr6.lt) goto loc_831EAE38;
loc_831EAE80:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f2fc8
	ctx.lr = 0x831EAE8C;
	sub_831F2FC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_831EAE94:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x831eaeb8
	if (cr6.eq) goto loc_831EAEB8;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x831eaeb8
	if (cr6.eq) goto loc_831EAEB8;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x831eaeb8
	if (cr6.eq) goto loc_831EAEB8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x831eaec0
	if (!cr6.eq) goto loc_831EAEC0;
loc_831EAEB8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x831eae94
	goto loc_831EAE94;
loc_831EAEC0:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAECC"))) PPC_WEAK_FUNC(sub_831EAECC);
PPC_FUNC_IMPL(__imp__sub_831EAECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EAED0"))) PPC_WEAK_FUNC(sub_831EAED0);
PPC_FUNC_IMPL(__imp__sub_831EAED0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x831cdcf0
	ctx.lr = 0x831EAF08;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831eaf5c
	if (cr6.eq) goto loc_831EAF5C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831eaf5c
	if (cr6.eq) goto loc_831EAF5C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x831eaf40
	goto loc_831EAF40;
loc_831EAF24:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,259
	ctx.r4.s64 = 259;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831eae10
	ctx.lr = 0x831EAF34;
	sub_831EAE10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_831EAF40:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831eaf24
	if (!cr0.eq) goto loc_831EAF24;
	// mulli r11,r31,324
	ctx.r11.s64 = ctx.r31.s64 * 324;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x831eaf74
	goto loc_831EAF74;
loc_831EAF5C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,12808
	ctx.r4.s64 = ctx.r11.s64 + 12808;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EAF70;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EAF74:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EAF8C"))) PPC_WEAK_FUNC(sub_831EAF8C);
PPC_FUNC_IMPL(__imp__sub_831EAF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EAF90"))) PPC_WEAK_FUNC(sub_831EAF90);
PPC_FUNC_IMPL(__imp__sub_831EAF90) {
	PPC_FUNC_PROLOGUE();
	// b 0x831eaed0
	sub_831EAED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EAF94"))) PPC_WEAK_FUNC(sub_831EAF94);
PPC_FUNC_IMPL(__imp__sub_831EAF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EAF98"))) PPC_WEAK_FUNC(sub_831EAF98);
PPC_FUNC_IMPL(__imp__sub_831EAF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EAFA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831effb8
	ctx.lr = 0x831EAFBC;
	sub_831EFFB8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831eb0bc
	if (!cr6.eq) goto loc_831EB0BC;
	// bl 0x831ef038
	ctx.lr = 0x831EAFCC;
	sub_831EF038(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831eb03c
	if (!cr6.eq) goto loc_831EB03C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f3728
	ctx.lr = 0x831EAFE4;
	sub_831F3728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb0c4
	if (!cr0.eq) goto loc_831EB0C4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831f3430
	ctx.lr = 0x831EB004;
	sub_831F3430(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb0c4
	if (!cr0.eq) goto loc_831EB0C4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831eb0c4
	if (cr6.eq) goto loc_831EB0C4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831f34a8
	ctx.lr = 0x831EB024;
	sub_831F34A8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831f3468
	ctx.lr = 0x831EB030;
	sub_831F3468(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831eb07c
	goto loc_831EB07C;
loc_831EB03C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f00e0
	ctx.lr = 0x831EB048;
	sub_831F00E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eb0c4
	if (cr6.eq) goto loc_831EB0C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f3728
	ctx.lr = 0x831EB064;
	sub_831F3728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb0c4
	if (!cr0.eq) goto loc_831EB0C4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831f34a8
	ctx.lr = 0x831EB07C;
	sub_831F34A8(ctx, base);
loc_831EB07C:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x831eb0a4
	if (!cr6.gt) goto loc_831EB0A4;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x831eb0a8
	if (cr6.lt) goto loc_831EB0A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x831eb0a8
	goto loc_831EB0A8;
loc_831EB0A4:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_831EB0A8:
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// b 0x831eb0c8
	goto loc_831EB0C8;
loc_831EB0BC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831eb0cc
	if (!cr6.eq) goto loc_831EB0CC;
loc_831EB0C4:
	// li r11,6
	ctx.r11.s64 = 6;
loc_831EB0C8:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_831EB0CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB0D4"))) PPC_WEAK_FUNC(sub_831EB0D4);
PPC_FUNC_IMPL(__imp__sub_831EB0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EB0D8"))) PPC_WEAK_FUNC(sub_831EB0D8);
PPC_FUNC_IMPL(__imp__sub_831EB0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EB0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831eb1c8
	if (cr6.eq) goto loc_831EB1C8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831eb22c
	if (!cr6.eq) goto loc_831EB22C;
	// lwz r30,60(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x831eb114
	if (!cr6.lt) goto loc_831EB114;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x831eb228
	goto loc_831EB228;
loc_831EB114:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x831eaf98
	ctx.lr = 0x831EB134;
	sub_831EAF98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831eb148
	if (cr6.eq) goto loc_831EB148;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x831eb22c
	if (!cr6.eq) goto loc_831EB22C;
loc_831EB148:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x831eb164
	goto loc_831EB164;
loc_831EB150:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831eb174
	if (cr6.eq) goto loc_831EB174;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
loc_831EB164:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x831eb150
	if (cr6.lt) goto loc_831EB150;
	// b 0x831eb198
	goto loc_831EB198;
loc_831EB174:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831f1010
	ctx.lr = 0x831EB194;
	sub_831F1010(ctx, base);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_831EB198:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bne cr6,0x831eb22c
	if (!cr6.eq) goto loc_831EB22C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831efdb8
	ctx.lr = 0x831EB1C4;
	sub_831EFDB8(ctx, base);
	// b 0x831eb22c
	goto loc_831EB22C;
loc_831EB1C8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x831eb22c
	if (cr6.eq) goto loc_831EB22C;
	// lwz r30,60(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
loc_831EB1DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2540
	ctx.lr = 0x831EB1E4;
	sub_831F2540(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb1dc
	if (!cr0.eq) goto loc_831EB1DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x831EB1F4;
	sub_825832E0(ctx, base);
	// cmpwi cr6,r3,26
	cr6.compare<int32_t>(ctx.r3.s32, 26, xer);
	// bne cr6,0x831eb21c
	if (!cr6.eq) goto loc_831EB21C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2088
	ctx.lr = 0x831EB204;
	sub_831F2088(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2130
	ctx.lr = 0x831EB210;
	sub_831F2130(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// b 0x831eb228
	goto loc_831EB228;
loc_831EB21C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831eb22c
	if (!cr6.eq) goto loc_831EB22C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_831EB228:
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
loc_831EB22C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB234"))) PPC_WEAK_FUNC(sub_831EB234);
PPC_FUNC_IMPL(__imp__sub_831EB234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EB238"))) PPC_WEAK_FUNC(sub_831EB238);
PPC_FUNC_IMPL(__imp__sub_831EB238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EB240;
	__savegprlr_29(ctx, base);
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831eb274
	if (!cr6.eq) goto loc_831EB274;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,12820
	ctx.r4.s64 = ctx.r11.s64 + 12820;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EB26C;
	sub_831EA418(ctx, base);
loc_831EB26C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eb370
	goto loc_831EB370;
loc_831EB274:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f00d0
	ctx.lr = 0x831EB280;
	sub_831F00D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb26c
	if (!cr0.eq) goto loc_831EB26C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f00c0
	ctx.lr = 0x831EB294;
	sub_831F00C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb26c
	if (!cr0.eq) goto loc_831EB26C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1010
	ctx.lr = 0x831EB2BC;
	sub_831F1010(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb26c
	if (!cr0.eq) goto loc_831EB26C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f06d8
	ctx.lr = 0x831EB2D0;
	sub_831F06D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb26c
	if (!cr0.eq) goto loc_831EB26C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831eb26c
	if (cr6.eq) goto loc_831EB26C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831eb2f8
	if (!cr6.eq) goto loc_831EB2F8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// b 0x831eb370
	goto loc_831EB370;
loc_831EB2F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f0278
	ctx.lr = 0x831EB304;
	sub_831F0278(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb26c
	if (!cr0.eq) goto loc_831EB26C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f00e0
	ctx.lr = 0x831EB318;
	sub_831F00E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb26c
	if (!cr0.eq) goto loc_831EB26C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f00c0
	ctx.lr = 0x831EB32C;
	sub_831F00C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb26c
	if (!cr0.eq) goto loc_831EB26C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f10c8
	ctx.lr = 0x831EB354;
	sub_831F10C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb26c
	if (!cr0.eq) goto loc_831EB26C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f06d8
	ctx.lr = 0x831EB368;
	sub_831F06D8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_831EB370:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB378"))) PPC_WEAK_FUNC(sub_831EB378);
PPC_FUNC_IMPL(__imp__sub_831EB378) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831f14b0
	ctx.lr = 0x831EB3AC;
	sub_831F14B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831eb3d0
	if (cr0.eq) goto loc_831EB3D0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,12844
	ctx.r4.s64 = ctx.r11.s64 + 12844;
loc_831EB3C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EB3C8;
	sub_831EA418(ctx, base);
loc_831EB3C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eb410
	goto loc_831EB410;
loc_831EB3D0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831eb238
	ctx.lr = 0x831EB3E0;
	sub_831EB238(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831eb3f8
	if (cr0.eq) goto loc_831EB3F8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12832
	ctx.r4.s64 = ctx.r11.s64 + 12832;
	// b 0x831eb3c0
	goto loc_831EB3C0;
loc_831EB3F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831f11e8
	ctx.lr = 0x831EB400;
	sub_831F11E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb3c8
	if (!cr0.eq) goto loc_831EB3C8;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_831EB410:
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

__attribute__((alias("__imp__sub_831EB428"))) PPC_WEAK_FUNC(sub_831EB428);
PPC_FUNC_IMPL(__imp__sub_831EB428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EB430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831eb450
	if (!cr6.eq) goto loc_831EB450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eb4a4
	goto loc_831EB4A4;
loc_831EB450:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831eb468
	if (!cr6.eq) goto loc_831EB468;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x831eb4a4
	goto loc_831EB4A4;
loc_831EB468:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4708);
	// bl 0x83a75cd8
	ctx.lr = 0x831EB47C;
	sub_83A75CD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x831eb48c
	goto loc_831EB48C;
loc_831EB484:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_831EB48C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831eb484
	if (!cr6.eq) goto loc_831EB484;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r3,4708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4708);
	// bl 0x83a75d58
	ctx.lr = 0x831EB4A0;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EB4A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB4AC"))) PPC_WEAK_FUNC(sub_831EB4AC);
PPC_FUNC_IMPL(__imp__sub_831EB4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EB4B0"))) PPC_WEAK_FUNC(sub_831EB4B0);
PPC_FUNC_IMPL(__imp__sub_831EB4B0) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,5264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831eb4ec
	if (!cr6.eq) goto loc_831EB4EC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12892
	ctx.r4.s64 = ctx.r11.s64 + 12892;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB4E4;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eb510
	goto loc_831EB510;
loc_831EB4EC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a760b8
	ctx.lr = 0x831EB4F4;
	sub_83A760B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831eb50c
	if (!cr0.eq) goto loc_831EB50C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12856
	ctx.r4.s64 = ctx.r11.s64 + 12856;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB50C;
	sub_831EA3F0(ctx, base);
loc_831EB50C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831EB510:
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

__attribute__((alias("__imp__sub_831EB524"))) PPC_WEAK_FUNC(sub_831EB524);
PPC_FUNC_IMPL(__imp__sub_831EB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EB528"))) PPC_WEAK_FUNC(sub_831EB528);
PPC_FUNC_IMPL(__imp__sub_831EB528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EB530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4720);
	// bl 0x83a75cd8
	ctx.lr = 0x831EB548;
	sub_83A75CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a760b8
	ctx.lr = 0x831EB554;
	sub_83A760B8(ctx, base);
	// lwz r11,4720(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a75d58
	ctx.lr = 0x831EB564;
	sub_83A75D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB570"))) PPC_WEAK_FUNC(sub_831EB570);
PPC_FUNC_IMPL(__imp__sub_831EB570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EB578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4720);
	// bl 0x83a75cd8
	ctx.lr = 0x831EB590;
	sub_83A75CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76130
	ctx.lr = 0x831EB59C;
	sub_83A76130(ctx, base);
	// lwz r3,4720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4720);
	// bl 0x83a75d58
	ctx.lr = 0x831EB5A4;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB5AC"))) PPC_WEAK_FUNC(sub_831EB5AC);
PPC_FUNC_IMPL(__imp__sub_831EB5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EB5B0"))) PPC_WEAK_FUNC(sub_831EB5B0);
PPC_FUNC_IMPL(__imp__sub_831EB5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EB5B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,5268
	ctx.r31.s64 = ctx.r11.s64 + 5268;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831eb5f4
	if (!cr6.eq) goto loc_831EB5F4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12992
	ctx.r4.s64 = ctx.r11.s64 + 12992;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB5EC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eb680
	goto loc_831EB680;
loc_831EB5F4:
	// lwz r3,-548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -548);
	// bl 0x83a75cd8
	ctx.lr = 0x831EB5FC;
	sub_83A75CD8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831eb624
	if (!cr6.eq) goto loc_831EB624;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831f2340
	ctx.lr = 0x831EB614;
	sub_831F2340(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x831eb668
	goto loc_831EB668;
loc_831EB624:
	// addi r4,r31,-764
	ctx.r4.s64 = ctx.r31.s64 + -764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831f22d0
	ctx.lr = 0x831EB63C;
	sub_831F22D0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-19088
	ctx.r4.s64 = ctx.r11.s64 + -19088;
	// addi r3,r10,-19160
	ctx.r3.s64 = ctx.r10.s64 + -19160;
	// bl 0x831f2340
	ctx.lr = 0x831EB654;
	sub_831F2340(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-19088
	ctx.r6.s64 = ctx.r11.s64 + -19088;
	// addi r5,r10,-19160
	ctx.r5.s64 = ctx.r10.s64 + -19160;
loc_831EB668:
	// addi r4,r31,-860
	ctx.r4.s64 = ctx.r31.s64 + -860;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x831f22d0
	ctx.lr = 0x831EB674;
	sub_831F22D0(ctx, base);
	// lwz r3,-548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -548);
	// bl 0x83a75d58
	ctx.lr = 0x831EB67C;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EB680:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB688"))) PPC_WEAK_FUNC(sub_831EB688);
PPC_FUNC_IMPL(__imp__sub_831EB688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,4724
	ctx.r11.s64 = ctx.r11.s64 + 4724;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x831eb6e8
	if (cr6.eq) goto loc_831EB6E8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x831eb6e8
	if (cr6.lt) goto loc_831EB6E8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_831EB6B0:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x831eb6f0
	if (cr6.eq) goto loc_831EB6F0;
	// bge cr6,0x831eb6dc
	if (!cr6.lt) goto loc_831EB6DC;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x831eb6e0
	goto loc_831EB6E0;
loc_831EB6DC:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_831EB6E0:
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// ble cr6,0x831eb6b0
	if (!cr6.gt) goto loc_831EB6B0;
loc_831EB6E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831EB6F0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB6F8"))) PPC_WEAK_FUNC(sub_831EB6F8);
PPC_FUNC_IMPL(__imp__sub_831EB6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EB700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,4708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4708);
	// bl 0x83a75cd8
	ctx.lr = 0x831EB718;
	sub_83A75CD8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831eb688
	ctx.lr = 0x831EB720;
	sub_831EB688(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831eb72c
	if (cr0.eq) goto loc_831EB72C;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_831EB72C:
	// lwz r3,4708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4708);
	// bl 0x83a75d58
	ctx.lr = 0x831EB734;
	sub_83A75D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB740"))) PPC_WEAK_FUNC(sub_831EB740);
PPC_FUNC_IMPL(__imp__sub_831EB740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EB748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831eb6f8
	ctx.lr = 0x831EB758;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831eb7ec
	if (cr0.eq) goto loc_831EB7EC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831eb7ec
	if (cr6.eq) goto loc_831EB7EC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x831eb7ec
	if (!cr6.gt) goto loc_831EB7EC;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831eb7d4
	if (!cr6.eq) goto loc_831EB7D4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eb7d4
	if (cr6.eq) goto loc_831EB7D4;
	// addi r31,r11,40
	ctx.r31.s64 = ctx.r11.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2048
	ctx.lr = 0x831EB794;
	sub_831F2048(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831eb7bc
	if (cr6.eq) goto loc_831EB7BC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,13084
	ctx.r4.s64 = ctx.r11.s64 + 13084;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB7AC;
	sub_831EA3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_831EB7B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x831eb804
	goto loc_831EB804;
loc_831EB7BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2380
	ctx.lr = 0x831EB7C8;
	sub_831F2380(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x831eb7b0
	goto loc_831EB7B0;
loc_831EB7D4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13056
	ctx.r4.s64 = ctx.r11.s64 + 13056;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB7E4;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eb804
	goto loc_831EB804;
loc_831EB7EC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13044
	ctx.r4.s64 = ctx.r11.s64 + 13044;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EB800;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EB804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB80C"))) PPC_WEAK_FUNC(sub_831EB80C);
PPC_FUNC_IMPL(__imp__sub_831EB80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EB810"))) PPC_WEAK_FUNC(sub_831EB810);
PPC_FUNC_IMPL(__imp__sub_831EB810) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-32
	ctx.r10.s64 = ctx.r4.s64 + -32;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// divw r11,r3,r10
	ctx.r11.s32 = PPCDivide(ctx.r3.s32, ctx.r10.s32);
	// twllei r10,0
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// twlgei r10,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB838"))) PPC_WEAK_FUNC(sub_831EB838);
PPC_FUNC_IMPL(__imp__sub_831EB838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EB840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831eb740
	ctx.lr = 0x831EB85C;
	sub_831EB740(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb8cc
	if (!cr0.eq) goto loc_831EB8CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// ble cr6,0x831eb884
	if (!cr6.gt) goto loc_831EB884;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,13144
	ctx.r4.s64 = ctx.r11.s64 + 13144;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB87C;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eb8cc
	goto loc_831EB8CC;
loc_831EB884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831eb6f8
	ctx.lr = 0x831EB88C;
	sub_831EB6F8(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r31,r11,40
	ctx.r31.s64 = ctx.r11.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2048
	ctx.lr = 0x831EB89C;
	sub_831F2048(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831eb8ac
	if (cr6.eq) goto loc_831EB8AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eb8cc
	goto loc_831EB8CC;
loc_831EB8AC:
	// addi r11,r28,31
	ctx.r11.s64 = ctx.r28.s64 + 31;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r5,r29,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r4,r11,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2378
	ctx.lr = 0x831EB8C4;
	sub_831F2378(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_831EB8CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EB8D4"))) PPC_WEAK_FUNC(sub_831EB8D4);
PPC_FUNC_IMPL(__imp__sub_831EB8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EB8D8"))) PPC_WEAK_FUNC(sub_831EB8D8);
PPC_FUNC_IMPL(__imp__sub_831EB8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,4524
	ctx.r3.s64 = ctx.r11.s64 + 4524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EB8E4"))) PPC_WEAK_FUNC(sub_831EB8E4);
PPC_FUNC_IMPL(__imp__sub_831EB8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EB8E8"))) PPC_WEAK_FUNC(sub_831EB8E8);
PPC_FUNC_IMPL(__imp__sub_831EB8E8) {
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
	ctx.lr = 0x831EB8F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r31,r11,4256
	ctx.r31.s64 = ctx.r11.s64 + 4256;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,12640
	ctx.r10.s64 = ctx.r10.s64 + 12640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eb940
	if (cr6.eq) goto loc_831EB940;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,13304
	ctx.r4.s64 = ctx.r11.s64 + 13304;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB93C;
	sub_831EA3F0(ctx, base);
	// b 0x831ebb40
	goto loc_831EBB40;
loc_831EB940:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x831eb960
	if (!cr6.lt) goto loc_831EB960;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13240
	ctx.r4.s64 = ctx.r11.s64 + 13240;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB958;
	sub_831EA3F0(ctx, base);
loc_831EB958:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ebb44
	goto loc_831EBB44;
loc_831EB960:
	// bl 0x831eabd8
	ctx.lr = 0x831EB964;
	sub_831EABD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eb958
	if (!cr0.eq) goto loc_831EB958;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x831eb958
	if (cr6.eq) goto loc_831EB958;
	// addi r11,r24,72
	ctx.r11.s64 = ctx.r24.s64 + 72;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// bge cr6,0x831eb99c
	if (!cr6.lt) goto loc_831EB99C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,13188
	ctx.r4.s64 = ctx.r11.s64 + 13188;
	// bl 0x831ea3f0
	ctx.lr = 0x831EB994;
	sub_831EA3F0(ctx, base);
	// bl 0x831eab48
	ctx.lr = 0x831EB998;
	sub_831EAB48(ctx, base);
	// b 0x831eb958
	goto loc_831EB958;
loc_831EB99C:
	// addi r11,r27,31
	ctx.r11.s64 = ctx.r27.s64 + 31;
	// stw r28,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r28.u32);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r10,5124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5124, ctx.r10.u32);
	// ble cr6,0x831eb9d8
	if (!cr6.gt) goto loc_831EB9D8;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_831EB9C8:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x831eb9c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831EB9C8;
loc_831EB9D8:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x831cdcf0
	ctx.lr = 0x831EB9F0;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x831EBA00;
	sub_831CDCF0(ctx, base);
	// addi r9,r31,136
	ctx.r9.s64 = ctx.r31.s64 + 136;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// stw r28,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r28.u32);
	// stw r28,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r28.u32);
	// stw r28,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r28.u32);
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
	// stw r26,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r26.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r28,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r28.u32);
	// stw r28,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r28.u32);
	// stw r28,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r28.u32);
	// ble cr6,0x831ebb24
	if (!cr6.gt) goto loc_831EBB24;
	// rlwinm r9,r29,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_831EBAB4:
	// subfic r7,r24,0
	xer.ca = ctx.r24.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r24.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// and. r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// beq 0x831ebae8
	if (cr0.eq) goto loc_831EBAE8;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
loc_831EBAE8:
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// stw r28,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r28.u32);
	// stw r28,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r28.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// stw r28,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
	// stw r28,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x831ebab4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831EBAB4;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_831EBB24:
	// stw r31,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831eb5b0
	ctx.lr = 0x831EBB40;
	sub_831EB5B0(ctx, base);
loc_831EBB40:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
loc_831EBB44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBB4C"))) PPC_WEAK_FUNC(sub_831EBB4C);
PPC_FUNC_IMPL(__imp__sub_831EBB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EBB50"))) PPC_WEAK_FUNC(sub_831EBB50);
PPC_FUNC_IMPL(__imp__sub_831EBB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EBB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ebba4
	if (cr6.eq) goto loc_831EBBA4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ebba4
	if (cr6.eq) goto loc_831EBBA4;
	// lwz r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ebbc4
	if (cr6.eq) goto loc_831EBBC4;
	// bl 0x831eb6f8
	ctx.lr = 0x831EBB8C;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ebbb0
	if (!cr0.eq) goto loc_831EBBB0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13364
	ctx.r4.s64 = ctx.r11.s64 + 13364;
	// bl 0x831ea418
	ctx.lr = 0x831EBBA4;
	sub_831EA418(ctx, base);
loc_831EBBA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EBBA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_831EBBB0:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831ebba4
	if (cr6.eq) goto loc_831EBBA4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x831ebba4
	if (cr6.eq) goto loc_831EBBA4;
loc_831EBBC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f00c0
	ctx.lr = 0x831EBBD0;
	sub_831F00C0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f10c8
	ctx.lr = 0x831EBBF0;
	sub_831F10C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831ebba8
	goto loc_831EBBA8;
}

__attribute__((alias("__imp__sub_831EBBF8"))) PPC_WEAK_FUNC(sub_831EBBF8);
PPC_FUNC_IMPL(__imp__sub_831EBBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EBC00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831ebd10
	if (cr6.eq) goto loc_831EBD10;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831ebd1c
	if (!cr6.eq) goto loc_831EBD1C;
	// lwz r30,60(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ebd1c
	if (cr6.eq) goto loc_831EBD1C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831ebc80
	if (cr6.eq) goto loc_831EBC80;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// b 0x831ebc64
	goto loc_831EBC64;
loc_831EBC4C:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x831ebc80
	if (cr6.eq) goto loc_831EBC80;
	// bl 0x831eff90
	ctx.lr = 0x831EBC58;
	sub_831EFF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x831EBC60;
	sub_83A75E98(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_831EBC64:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831eaf98
	ctx.lr = 0x831EBC74;
	sub_831EAF98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ebc4c
	if (!cr6.eq) goto loc_831EBC4C;
loc_831EBC80:
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ble cr6,0x831ebcfc
	if (!cr6.gt) goto loc_831EBCFC;
	// addi r31,r10,52
	ctx.r31.s64 = ctx.r10.s64 + 52;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_831EBC9C:
	// addi r5,r31,-44
	ctx.r5.s64 = ctx.r31.s64 + -44;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831ebb50
	ctx.lr = 0x831EBCAC;
	sub_831EBB50(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831ebcf0
	if (!cr6.eq) goto loc_831EBCF0;
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_831EBCB8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831effb8
	ctx.lr = 0x831EBCC4;
	sub_831EFFB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ebcf0
	if (!cr0.eq) goto loc_831EBCF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831ebcf0
	if (cr6.eq) goto loc_831EBCF0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x831ebcf0
	if (cr6.eq) goto loc_831EBCF0;
	// bl 0x831eff90
	ctx.lr = 0x831EBCE4;
	sub_831EFF90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x831EBCEC;
	sub_83A75E98(ctx, base);
	// b 0x831ebcb8
	goto loc_831EBCB8;
loc_831EBCF0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x831ebc9c
	if (!cr0.eq) goto loc_831EBC9C;
loc_831EBCFC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831f11e8
	ctx.lr = 0x831EBD04;
	sub_831F11E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x831ebd1c
	goto loc_831EBD1C;
loc_831EBD10:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x831f18c8
	ctx.lr = 0x831EBD1C;
	sub_831F18C8(ctx, base);
loc_831EBD1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EBD24"))) PPC_WEAK_FUNC(sub_831EBD24);
PPC_FUNC_IMPL(__imp__sub_831EBD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EBD28"))) PPC_WEAK_FUNC(sub_831EBD28);
PPC_FUNC_IMPL(__imp__sub_831EBD28) {
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
	// b 0x831ebd74
	goto loc_831EBD74;
loc_831EBD3C:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831ebd88
	if (cr6.eq) goto loc_831EBD88;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ebd80
	if (!cr6.eq) goto loc_831EBD80;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ebd80
	if (cr6.eq) goto loc_831EBD80;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ebd90
	if (cr6.eq) goto loc_831EBD90;
	// bl 0x831eb6f8
	ctx.lr = 0x831EBD6C;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ebd90
	if (cr0.eq) goto loc_831EBD90;
loc_831EBD74:
	// lwz r31,60(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ebd3c
	if (!cr6.eq) goto loc_831EBD3C;
loc_831EBD80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ebda8
	goto loc_831EBDA8;
loc_831EBD88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831ebda8
	goto loc_831EBDA8;
loc_831EBD90:
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_831EBDA8:
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

__attribute__((alias("__imp__sub_831EBDBC"))) PPC_WEAK_FUNC(sub_831EBDBC);
PPC_FUNC_IMPL(__imp__sub_831EBDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EBDC0"))) PPC_WEAK_FUNC(sub_831EBDC0);
PPC_FUNC_IMPL(__imp__sub_831EBDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EBDC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831ebe9c
	if (cr6.eq) goto loc_831EBE9C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831ebeb0
	if (!cr6.eq) goto loc_831EBEB0;
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ebeb0
	if (cr6.eq) goto loc_831EBEB0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831ebe34
	if (cr6.lt) goto loc_831EBE34;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831effb8
	ctx.lr = 0x831EBE10;
	sub_831EFFB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ebec4
	if (!cr0.eq) goto loc_831EBEC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ebec4
	if (!cr6.eq) goto loc_831EBEC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
loc_831EBE34:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831ebe44
	if (!cr6.eq) goto loc_831EBE44;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_831EBE44:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x831ebe84
	if (!cr6.lt) goto loc_831EBE84;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
loc_831EBE58:
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831ebb50
	ctx.lr = 0x831EBE68;
	sub_831EBB50(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831ebe94
	if (cr6.eq) goto loc_831EBE94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x831ebe58
	if (cr6.lt) goto loc_831EBE58;
loc_831EBE84:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f11e8
	ctx.lr = 0x831EBE8C;
	sub_831F11E8(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// b 0x831ebeb0
	goto loc_831EBEB0;
loc_831EBE94:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// b 0x831ebec4
	goto loc_831EBEC4;
loc_831EBE9C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x831f24b8
	ctx.lr = 0x831EBEA8;
	sub_831F24B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ebeb8
	if (!cr0.eq) goto loc_831EBEB8;
loc_831EBEB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ebec8
	goto loc_831EBEC8;
loc_831EBEB8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x831f1900
	ctx.lr = 0x831EBEC4;
	sub_831F1900(ctx, base);
loc_831EBEC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831EBEC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

