#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A3D138"))) PPC_WEAK_FUNC(sub_82A3D138);
PPC_FUNC_IMPL(__imp__sub_82A3D138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d148
	if (cr6.lt) goto loc_82A3D148;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D148:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D160"))) PPC_WEAK_FUNC(sub_82A3D160);
PPC_FUNC_IMPL(__imp__sub_82A3D160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d170
	if (cr6.lt) goto loc_82A3D170;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D170:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,11,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FC000;
	// rlwinm r7,r7,0,17,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF87FFF;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D194"))) PPC_WEAK_FUNC(sub_82A3D194);
PPC_FUNC_IMPL(__imp__sub_82A3D194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D198"))) PPC_WEAK_FUNC(sub_82A3D198);
PPC_FUNC_IMPL(__imp__sub_82A3D198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d1a8
	if (cr6.lt) goto loc_82A3D1A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D1A8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D1C0"))) PPC_WEAK_FUNC(sub_82A3D1C0);
PPC_FUNC_IMPL(__imp__sub_82A3D1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d1d0
	if (cr6.lt) goto loc_82A3D1D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D1D0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D1E8"))) PPC_WEAK_FUNC(sub_82A3D1E8);
PPC_FUNC_IMPL(__imp__sub_82A3D1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d1f8
	if (cr6.lt) goto loc_82A3D1F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D1F8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,22,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3C0;
	// rlwinm r7,r7,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D21C"))) PPC_WEAK_FUNC(sub_82A3D21C);
PPC_FUNC_IMPL(__imp__sub_82A3D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D220"))) PPC_WEAK_FUNC(sub_82A3D220);
PPC_FUNC_IMPL(__imp__sub_82A3D220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d230
	if (cr6.lt) goto loc_82A3D230;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D230:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D248"))) PPC_WEAK_FUNC(sub_82A3D248);
PPC_FUNC_IMPL(__imp__sub_82A3D248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d258
	if (cr6.lt) goto loc_82A3D258;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D258:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D270"))) PPC_WEAK_FUNC(sub_82A3D270);
PPC_FUNC_IMPL(__imp__sub_82A3D270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d280
	if (cr6.lt) goto loc_82A3D280;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D280:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,13,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x78000;
	// rlwinm r7,r7,0,15,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D2A4"))) PPC_WEAK_FUNC(sub_82A3D2A4);
PPC_FUNC_IMPL(__imp__sub_82A3D2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D2A8"))) PPC_WEAK_FUNC(sub_82A3D2A8);
PPC_FUNC_IMPL(__imp__sub_82A3D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d2b8
	if (cr6.lt) goto loc_82A3D2B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D2B8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,13,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D2D0"))) PPC_WEAK_FUNC(sub_82A3D2D0);
PPC_FUNC_IMPL(__imp__sub_82A3D2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d2e0
	if (cr6.lt) goto loc_82A3D2E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D2E0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,11,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x180000;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D300"))) PPC_WEAK_FUNC(sub_82A3D300);
PPC_FUNC_IMPL(__imp__sub_82A3D300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d310
	if (cr6.lt) goto loc_82A3D310;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D310:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D328"))) PPC_WEAK_FUNC(sub_82A3D328);
PPC_FUNC_IMPL(__imp__sub_82A3D328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d338
	if (cr6.lt) goto loc_82A3D338;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D338:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D350"))) PPC_WEAK_FUNC(sub_82A3D350);
PPC_FUNC_IMPL(__imp__sub_82A3D350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d360
	if (cr6.lt) goto loc_82A3D360;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D360:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,4,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFC00;
	// rlwinm r7,r7,0,21,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFE007FF;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D384"))) PPC_WEAK_FUNC(sub_82A3D384);
PPC_FUNC_IMPL(__imp__sub_82A3D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D388"))) PPC_WEAK_FUNC(sub_82A3D388);
PPC_FUNC_IMPL(__imp__sub_82A3D388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// blt cr6,0x82a3d398
	if (cr6.lt) goto loc_82A3D398;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A3D398:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21320
	ctx.r9.s64 = ctx.r11.s64 + 21320;
	// lis r12,-28704
	ctx.r12.s64 = -1881145344;
	// ori r12,r12,1024
	ctx.r12.u64 = ctx.r12.u64 | 1024;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D3C0"))) PPC_WEAK_FUNC(sub_82A3D3C0);
PPC_FUNC_IMPL(__imp__sub_82A3D3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-2329
	ctx.r11.s64 = ctx.r11.s64 + -2329;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11284
	ctx.r12.s64 = ctx.r12.s64 + -11284;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A3D468;
	case 1:
		goto loc_82A3D46C;
	case 2:
		goto loc_82A3D468;
	case 3:
		goto loc_82A3D46C;
	case 4:
		goto loc_82A3D468;
	case 5:
		goto loc_82A3D468;
	case 6:
		goto loc_82A3D46C;
	case 7:
		goto loc_82A3D468;
	case 8:
		goto loc_82A3D468;
	case 9:
		goto loc_82A3D468;
	case 10:
		goto loc_82A3D46C;
	case 11:
		goto loc_82A3D468;
	case 12:
		goto loc_82A3D468;
	case 13:
		goto loc_82A3D468;
	case 14:
		goto loc_82A3D468;
	case 15:
		goto loc_82A3D46C;
	case 16:
		goto loc_82A3D46C;
	case 17:
		goto loc_82A3D46C;
	case 18:
		goto loc_82A3D468;
	case 19:
		goto loc_82A3D46C;
	case 20:
		goto loc_82A3D468;
	case 21:
		goto loc_82A3D46C;
	case 22:
		goto loc_82A3D46C;
	case 23:
		goto loc_82A3D468;
	case 24:
		goto loc_82A3D46C;
	case 25:
		goto loc_82A3D46C;
	case 26:
		goto loc_82A3D46C;
	case 27:
		goto loc_82A3D468;
	case 28:
		goto loc_82A3D468;
	case 29:
		goto loc_82A3D468;
	case 30:
		goto loc_82A3D468;
	default:
		return;
	}
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11156(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11156);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
	// lwz r21,-11160(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11160);
loc_82A3D468:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A3D46C:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D470"))) PPC_WEAK_FUNC(sub_82A3D470);
PPC_FUNC_IMPL(__imp__sub_82A3D470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1364
	cr6.compare<uint32_t>(ctx.r11.u32, 1364, xer);
	// bgt cr6,0x82a3d4d0
	if (cr6.gt) goto loc_82A3D4D0;
	// cmplwi cr6,r11,1353
	cr6.compare<uint32_t>(ctx.r11.u32, 1353, xer);
	// bge cr6,0x82a3d500
	if (!cr6.lt) goto loc_82A3D500;
	// cmplwi cr6,r11,1344
	cr6.compare<uint32_t>(ctx.r11.u32, 1344, xer);
	// bgt cr6,0x82a3d4a8
	if (cr6.gt) goto loc_82A3D4A8;
	// beq cr6,0x82a3d500
	if (cr6.eq) goto loc_82A3D500;
	// cmplwi cr6,r11,1154
	cr6.compare<uint32_t>(ctx.r11.u32, 1154, xer);
	// beq cr6,0x82a3d500
	if (cr6.eq) goto loc_82A3D500;
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// beq cr6,0x82a3d500
	if (cr6.eq) goto loc_82A3D500;
	// blr 
	return;
loc_82A3D4A8:
	// addi r11,r11,-1346
	ctx.r11.s64 = ctx.r11.s64 + -1346;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a3d500
	if (cr6.eq) goto loc_82A3D500;
	// bdz 0x82a3d500
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A3D500;
	// bdz 0x82a3d504
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A3D504;
	// bdz 0x82a3d500
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A3D500;
	// b 0x82a3d500
	goto loc_82A3D500;
loc_82A3D4D0:
	// cmplwi cr6,r11,1991
	cr6.compare<uint32_t>(ctx.r11.u32, 1991, xer);
	// bgt cr6,0x82a3d4f0
	if (cr6.gt) goto loc_82A3D4F0;
	// beq cr6,0x82a3d500
	if (cr6.eq) goto loc_82A3D500;
	// cmplwi cr6,r11,1367
	cr6.compare<uint32_t>(ctx.r11.u32, 1367, xer);
	// beq cr6,0x82a3d500
	if (cr6.eq) goto loc_82A3D500;
	// cmplwi cr6,r11,1371
	cr6.compare<uint32_t>(ctx.r11.u32, 1371, xer);
	// beq cr6,0x82a3d500
	if (cr6.eq) goto loc_82A3D500;
	// blr 
	return;
loc_82A3D4F0:
	// cmplwi cr6,r11,2709
	cr6.compare<uint32_t>(ctx.r11.u32, 2709, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r11,2714
	cr6.compare<uint32_t>(ctx.r11.u32, 2714, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82A3D500:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A3D504:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D508"))) PPC_WEAK_FUNC(sub_82A3D508);
PPC_FUNC_IMPL(__imp__sub_82A3D508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1107
	cr6.compare<uint32_t>(ctx.r11.u32, 1107, xer);
	// bgt cr6,0x82a3d554
	if (cr6.gt) goto loc_82A3D554;
	// cmplwi cr6,r11,1106
	cr6.compare<uint32_t>(ctx.r11.u32, 1106, xer);
	// bge cr6,0x82a3d54c
	if (!cr6.lt) goto loc_82A3D54C;
	// cmplwi cr6,r11,1097
	cr6.compare<uint32_t>(ctx.r11.u32, 1097, xer);
	// bgt cr6,0x82a3d53c
	if (cr6.gt) goto loc_82A3D53C;
	// cmplwi cr6,r11,1096
	cr6.compare<uint32_t>(ctx.r11.u32, 1096, xer);
	// bge cr6,0x82a3d54c
	if (!cr6.lt) goto loc_82A3D54C;
	// cmplwi cr6,r11,393
	cr6.compare<uint32_t>(ctx.r11.u32, 393, xer);
	// beq cr6,0x82a3d54c
	if (cr6.eq) goto loc_82A3D54C;
	// cmplwi cr6,r11,444
	cr6.compare<uint32_t>(ctx.r11.u32, 444, xer);
	// b 0x82a3d598
	goto loc_82A3D598;
loc_82A3D53C:
	// cmplwi cr6,r11,1099
	cr6.compare<uint32_t>(ctx.r11.u32, 1099, xer);
	// blt cr6,0x82a3d59c
	if (cr6.lt) goto loc_82A3D59C;
	// cmplwi cr6,r11,1103
	cr6.compare<uint32_t>(ctx.r11.u32, 1103, xer);
	// bgt cr6,0x82a3d59c
	if (cr6.gt) goto loc_82A3D59C;
loc_82A3D54C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A3D554:
	// cmplwi cr6,r11,2740
	cr6.compare<uint32_t>(ctx.r11.u32, 2740, xer);
	// bgt cr6,0x82a3d594
	if (cr6.gt) goto loc_82A3D594;
	// cmplwi cr6,r11,2735
	cr6.compare<uint32_t>(ctx.r11.u32, 2735, xer);
	// bge cr6,0x82a3d54c
	if (!cr6.lt) goto loc_82A3D54C;
	// addi r11,r11,-1110
	ctx.r11.s64 = ctx.r11.s64 + -1110;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82a3d59c
	if (cr6.gt) goto loc_82A3D59C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a3d54c
	if (cr6.eq) goto loc_82A3D54C;
	// bdz 0x82a3d54c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A3D54C;
	// bdz 0x82a3d54c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A3D54C;
	// bdz 0x82a3d59c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A3D59C;
	// bdz 0x82a3d54c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A3D54C;
	// bdz 0x82a3d54c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A3D54C;
	// b 0x82a3d54c
	goto loc_82A3D54C;
loc_82A3D594:
	// cmplwi cr6,r11,2760
	cr6.compare<uint32_t>(ctx.r11.u32, 2760, xer);
loc_82A3D598:
	// beq cr6,0x82a3d54c
	if (cr6.eq) goto loc_82A3D54C;
loc_82A3D59C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D5A4"))) PPC_WEAK_FUNC(sub_82A3D5A4);
PPC_FUNC_IMPL(__imp__sub_82A3D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3D5A8"))) PPC_WEAK_FUNC(sub_82A3D5A8);
PPC_FUNC_IMPL(__imp__sub_82A3D5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1592
	cr6.compare<uint32_t>(ctx.r11.u32, 1592, xer);
	// bgt cr6,0x82a3d5d8
	if (cr6.gt) goto loc_82A3D5D8;
	// beq cr6,0x82a3d600
	if (cr6.eq) goto loc_82A3D600;
	// cmplwi cr6,r11,287
	cr6.compare<uint32_t>(ctx.r11.u32, 287, xer);
	// beq cr6,0x82a3d600
	if (cr6.eq) goto loc_82A3D600;
	// cmplwi cr6,r11,395
	cr6.compare<uint32_t>(ctx.r11.u32, 395, xer);
	// beq cr6,0x82a3d600
	if (cr6.eq) goto loc_82A3D600;
	// cmplwi cr6,r11,434
	cr6.compare<uint32_t>(ctx.r11.u32, 434, xer);
	// beq cr6,0x82a3d600
	if (cr6.eq) goto loc_82A3D600;
	// blr 
	return;
loc_82A3D5D8:
	// cmplwi cr6,r11,2129
	cr6.compare<uint32_t>(ctx.r11.u32, 2129, xer);
	// bgt cr6,0x82a3d5f0
	if (cr6.gt) goto loc_82A3D5F0;
	// beq cr6,0x82a3d600
	if (cr6.eq) goto loc_82A3D600;
	// cmplwi cr6,r11,1595
	cr6.compare<uint32_t>(ctx.r11.u32, 1595, xer);
	// beq cr6,0x82a3d600
	if (cr6.eq) goto loc_82A3D600;
	// blr 
	return;
loc_82A3D5F0:
	// cmplwi cr6,r11,2881
	cr6.compare<uint32_t>(ctx.r11.u32, 2881, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r11,2882
	cr6.compare<uint32_t>(ctx.r11.u32, 2882, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82A3D600:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D608"))) PPC_WEAK_FUNC(sub_82A3D608);
PPC_FUNC_IMPL(__imp__sub_82A3D608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,2233
	cr6.compare<uint32_t>(ctx.r11.u32, 2233, xer);
	// bgt cr6,0x82a3d630
	if (cr6.gt) goto loc_82A3D630;
	// beq cr6,0x82a3d638
	if (cr6.eq) goto loc_82A3D638;
	// cmplwi cr6,r11,434
	cr6.compare<uint32_t>(ctx.r11.u32, 434, xer);
	// beq cr6,0x82a3d638
	if (cr6.eq) goto loc_82A3D638;
	// cmplwi cr6,r11,2231
	cr6.compare<uint32_t>(ctx.r11.u32, 2231, xer);
	// beq cr6,0x82a3d638
	if (cr6.eq) goto loc_82A3D638;
	// blr 
	return;
loc_82A3D630:
	// cmplwi cr6,r11,2876
	cr6.compare<uint32_t>(ctx.r11.u32, 2876, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A3D638:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D640"))) PPC_WEAK_FUNC(sub_82A3D640);
PPC_FUNC_IMPL(__imp__sub_82A3D640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,411
	cr6.compare<uint32_t>(ctx.r11.u32, 411, xer);
	// beq cr6,0x82a3d660
	if (cr6.eq) goto loc_82A3D660;
	// cmplwi cr6,r11,2229
	cr6.compare<uint32_t>(ctx.r11.u32, 2229, xer);
	// beq cr6,0x82a3d660
	if (cr6.eq) goto loc_82A3D660;
	// cmplwi cr6,r11,2234
	cr6.compare<uint32_t>(ctx.r11.u32, 2234, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A3D660:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D668"))) PPC_WEAK_FUNC(sub_82A3D668);
PPC_FUNC_IMPL(__imp__sub_82A3D668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21696
	ctx.r9.s64 = ctx.r11.s64 + 21696;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D680"))) PPC_WEAK_FUNC(sub_82A3D680);
PPC_FUNC_IMPL(__imp__sub_82A3D680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,21696
	ctx.r10.s64 = ctx.r11.s64 + 21696;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_82A3D690:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82a3d708
	if (!cr6.gt) goto loc_82A3D708;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82a3d710
	if (!cr6.gt) goto loc_82A3D710;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82a3d718
	if (!cr6.gt) goto loc_82A3D718;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82a3d720
	if (!cr6.gt) goto loc_82A3D720;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82a3d728
	if (!cr6.gt) goto loc_82A3D728;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 + 52;
	// addi r3,r3,6
	ctx.r3.s64 = ctx.r3.s64 + 6;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82a3d690
	if (cr6.lt) goto loc_82A3D690;
	// blr 
	return;
loc_82A3D708:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_82A3D710:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_82A3D718:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
loc_82A3D720:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
loc_82A3D728:
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3D730"))) PPC_WEAK_FUNC(sub_82A3D730);
PPC_FUNC_IMPL(__imp__sub_82A3D730) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x82a3d768
	if (cr6.lt) goto loc_82A3D768;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3d76c
	if (cr6.lt) goto loc_82A3D76C;
loc_82A3D768:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3D76C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3d8b8
	if (cr6.eq) goto loc_82A3D8B8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82a3d788
	if (!cr6.lt) goto loc_82A3D788;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a3d7b0
	goto loc_82A3D7B0;
loc_82A3D788:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82a3d798
	if (!cr6.lt) goto loc_82A3D798;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a3d7b0
	goto loc_82A3D7B0;
loc_82A3D798:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_82A3D7B0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a3d7c0
	if (!cr6.lt) goto loc_82A3D7C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3d7e8
	goto loc_82A3D7E8;
loc_82A3D7C0:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a3d7d0
	if (!cr6.lt) goto loc_82A3D7D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3d7e8
	goto loc_82A3D7E8;
loc_82A3D7D0:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r8,r11,r4
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A3D7E8:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82a3d8b0
	if (cr6.eq) goto loc_82A3D8B0;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3d8b8
	if (!cr6.eq) goto loc_82A3D8B8;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A3D80C;
	sub_82A0C760(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(ctx.r11.s32, 94, xer);
	// blt cr6,0x82a3d824
	if (cr6.lt) goto loc_82A3D824;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3d844
	goto loc_82A3D844;
loc_82A3D824:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,21320
	ctx.r8.s64 = ctx.r10.s64 + 21320;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r6,r7,0,22,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3C0;
	// rlwinm r6,r6,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A3D844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3d860
	if (!cr6.eq) goto loc_82A3D860;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3d864
	if (cr6.eq) goto loc_82A3D864;
loc_82A3D860:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A3D864:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3d8a4
	if (cr6.eq) goto loc_82A3D8A4;
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-29844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29844);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x82a3d8a4
	if (!cr6.gt) goto loc_82A3D8A4;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f1,21212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a3d8b8
	goto loc_82A3D8B8;
loc_82A3D8A4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f1,24556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24556);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a3d8b8
	goto loc_82A3D8B8;
loc_82A3D8B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-8376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8376);
	ctx.f1.f64 = double(temp.f32);
loc_82A3D8B8:
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

__attribute__((alias("__imp__sub_82A3D8D0"))) PPC_WEAK_FUNC(sub_82A3D8D0);
PPC_FUNC_IMPL(__imp__sub_82A3D8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A3D8D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(ctx.r11.s32, 94, xer);
	// addi r27,r10,21320
	ctx.r27.s64 = ctx.r10.s64 + 21320;
	// blt cr6,0x82a3d900
	if (cr6.lt) goto loc_82A3D900;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3d914
	goto loc_82A3D914;
loc_82A3D900:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r9,r10,0,11,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x180000;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A3D914:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3d92c
	if (!cr6.eq) goto loc_82A3D92C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A3D92C:
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A3D93C;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,4460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a3da90
	if (cr6.eq) goto loc_82A3DA90;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a3daf4
	if (!cr6.eq) goto loc_82A3DAF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82a3d988
	if (cr6.eq) goto loc_82A3D988;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a3d980
	if (cr6.eq) goto loc_82A3D980;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a3d98c
	if (!cr6.eq) goto loc_82A3D98C;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82a3d98c
	goto loc_82A3D98C;
loc_82A3D980:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a3d98c
	goto loc_82A3D98C;
loc_82A3D988:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A3D98C:
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r30,255
	cr6.compare<uint32_t>(ctx.r30.u32, 255, xer);
	// beq cr6,0x82a3daf4
	if (cr6.eq) goto loc_82A3DAF4;
	// lwz r10,5356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82a3da30
	if (cr6.eq) goto loc_82A3DA30;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x82a3da58
	if (!cr6.eq) goto loc_82A3DA58;
	// lwz r11,5760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5760);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a3d9e8
	if (!cr6.eq) goto loc_82A3D9E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,8704
	ctx.r10.s64 = 570425344;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a3d9e8
	if (!cr6.eq) goto loc_82A3D9E8;
	// addi r11,r27,984
	ctx.r11.s64 = ctx.r27.s64 + 984;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A3D9E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1a960
	ctx.lr = 0x82A3D9F4;
	sub_82A1A960(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3daf4
	if (cr6.eq) goto loc_82A3DAF4;
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// addi r9,r27,912
	ctx.r9.s64 = ctx.r27.s64 + 912;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A3DA30:
	// lbz r11,5813(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5813);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3da48
	if (cr6.eq) goto loc_82A3DA48;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82a3da4c
	if (!cr6.eq) goto loc_82A3DA4C;
loc_82A3DA48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A3DA4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3daf4
	if (cr6.eq) goto loc_82A3DAF4;
loc_82A3DA58:
	// lwz r11,5756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5756);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a3daf4
	if (!cr6.eq) goto loc_82A3DAF4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,912
	ctx.r9.s64 = ctx.r27.s64 + 912;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A3DA90:
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a3daf4
	if (!cr6.eq) goto loc_82A3DAF4;
	// lwz r11,4520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4520);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x82a3daf4
	if (!cr6.eq) goto loc_82A3DAF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82a3daec
	if (cr6.eq) goto loc_82A3DAEC;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a3dad8
	if (cr6.eq) goto loc_82A3DAD8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a3daf4
	if (!cr6.eq) goto loc_82A3DAF4;
	// li r11,43
	ctx.r11.s64 = 43;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A3DAD8:
	// li r11,41
	ctx.r11.s64 = 41;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A3DAEC:
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82A3DAF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3DB00"))) PPC_WEAK_FUNC(sub_82A3DB00);
PPC_FUNC_IMPL(__imp__sub_82A3DB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A3DB08;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,21320
	ctx.r26.s64 = ctx.r11.s64 + 21320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r26,424
	ctx.r9.s64 = ctx.r26.s64 + 424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x82a3dc98
	if (cr6.eq) goto loc_82A3DC98;
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// beq cr6,0x82a3dc98
	if (cr6.eq) goto loc_82A3DC98;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r29,132(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,292(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c760
	ctx.lr = 0x82A3DB50;
	sub_82A0C760(ctx, base);
	// lwz r10,4460(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4460);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a3dc88
	if (!cr6.eq) goto loc_82A3DC88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a3db80
	if (!cr6.eq) goto loc_82A3DB80;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// bne cr6,0x82a3db80
	if (!cr6.eq) goto loc_82A3DB80;
	// li r28,6
	ctx.r28.s64 = 6;
loc_82A3DB80:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82A3DB8C;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82a3dc98
	if (!cr6.eq) goto loc_82A3DC98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x82A3DBA4;
	sub_82A2A558(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a22c10
	ctx.lr = 0x82A3DBB8;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a3dbdc
	if (!cr6.eq) goto loc_82A3DBDC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a3dbe0
	if (cr6.eq) goto loc_82A3DBE0;
loc_82A3DBDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3DBE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3dc98
	if (cr6.eq) goto loc_82A3DC98;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,17408
	ctx.r10.s64 = 1140850688;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82a3dc98
	if (cr6.eq) goto loc_82A3DC98;
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// beq cr6,0x82a3dc78
	if (cr6.eq) goto loc_82A3DC78;
	// cmpwi cr6,r28,94
	cr6.compare<int32_t>(ctx.r28.s32, 94, xer);
	// blt cr6,0x82a3dc18
	if (cr6.lt) goto loc_82A3DC18;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3dc34
	goto loc_82A3DC34;
loc_82A3DC18:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,12421
	ctx.r12.s64 = 814022656;
	// ori r12,r12,32827
	ctx.r12.u64 = ctx.r12.u64 | 32827;
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A3DC34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3dc98
	if (cr6.eq) goto loc_82A3DC98;
	// cmpwi cr6,r28,94
	cr6.compare<int32_t>(ctx.r28.s32, 94, xer);
	// blt cr6,0x82a3dc50
	if (cr6.lt) goto loc_82A3DC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3dc5c
	goto loc_82A3DC5C;
loc_82A3DC50:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// rlwinm r11,r10,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
loc_82A3DC5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3dc98
	if (!cr6.eq) goto loc_82A3DC98;
	// li r28,55
	ctx.r28.s64 = 55;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A3DC78:
	// li r28,66
	ctx.r28.s64 = 66;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A3DC88:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3d8d0
	ctx.lr = 0x82A3DC94;
	sub_82A3D8D0(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A3DC98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3DCA4"))) PPC_WEAK_FUNC(sub_82A3DCA4);
PPC_FUNC_IMPL(__imp__sub_82A3DCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3DCA8"))) PPC_WEAK_FUNC(sub_82A3DCA8);
PPC_FUNC_IMPL(__imp__sub_82A3DCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A3DCB0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce768
	ctx.lr = 0x82A3DCB8;
	__savefpr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A3DCD4;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x82A3DCE8;
	sub_82A0C760(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82A3DCFC;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82A3DD10;
	sub_82A0C788(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r25,r8,24
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 24;
	// srawi r22,r7,24
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFFFF) != 0);
	ctx.r22.s64 = ctx.r7.s32 >> 24;
	// rlwinm r6,r25,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r9,22400
	ctx.r5.s64 = ctx.r9.s64 + 22400;
	// subf r11,r25,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r25.s64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f24,9008(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f24.f64 = double(temp.f32);
	// lfsx f1,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f24
	cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// bge cr6,0x82a3e1d4
	if (!cr6.lt) goto loc_82A3E1D4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82a3dd68
	if (!cr6.lt) goto loc_82A3DD68;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a3dd90
	goto loc_82A3DD90;
loc_82A3DD68:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x82a3dd78
	if (!cr6.lt) goto loc_82A3DD78;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a3dd90
	goto loc_82A3DD90;
loc_82A3DD78:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_82A3DD90:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x82a3dda0
	if (!cr6.lt) goto loc_82A3DDA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3ddc8
	goto loc_82A3DDC8;
loc_82A3DDA0:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x82a3ddb0
	if (!cr6.lt) goto loc_82A3DDB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3ddc8
	goto loc_82A3DDC8;
loc_82A3DDB0:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// eqv r8,r11,r29
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r29.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A3DDC8:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a3de1c
	if (!cr6.eq) goto loc_82A3DE1C;
	// cmpwi cr6,r25,6
	cr6.compare<int32_t>(ctx.r25.s32, 6, xer);
	// bne cr6,0x82a3ddf4
	if (!cr6.eq) goto loc_82A3DDF4;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne cr6,0x82a3de1c
	if (!cr6.eq) goto loc_82A3DE1C;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b4
	ctx.lr = 0x82A3DDF0;
	__restfpr_24(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A3DDF4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x82a3de1c
	if (!cr6.eq) goto loc_82A3DE1C;
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(ctx.r22.s32, 6, xer);
	// bne cr6,0x82a3de1c
	if (!cr6.eq) goto loc_82A3DE1C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b4
	ctx.lr = 0x82A3DE18;
	__restfpr_24(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A3DE1C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x82A3DE28;
	sub_82A0C7B0(ctx, base);
	// bl 0x8355a178
	ctx.lr = 0x82A3DE2C;
	sub_8355A178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lbz r31,38(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// bl 0x82a0c7b0
	ctx.lr = 0x82A3DE40;
	sub_82A0C7B0(ctx, base);
	// bl 0x8355a178
	ctx.lr = 0x82A3DE44;
	sub_8355A178(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r6,38(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 38);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fsubs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// bl 0x82a2b4e0
	ctx.lr = 0x82A3DE80;
	sub_82A2B4E0(ctx, base);
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, xer);
	// lfs f28,-23860(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -23860);
	ctx.f28.f64 = double(temp.f32);
	// addi r27,r10,21284
	ctx.r27.s64 = ctx.r10.s64 + 21284;
	// lfs f0,16088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16088);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a3deb8
	if (!cr6.eq) goto loc_82A3DEB8;
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a3deb8
	if (cr6.eq) goto loc_82A3DEB8;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x82a3df00
	goto loc_82A3DF00;
loc_82A3DEB8:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a3ded0
	if (cr6.eq) goto loc_82A3DED0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a3def0
	goto loc_82A3DEF0;
loc_82A3DED0:
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(ctx.r11.s32, 94, xer);
	// blt cr6,0x82a3dee0
	if (cr6.lt) goto loc_82A3DEE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3def0
	goto loc_82A3DEF0;
loc_82A3DEE0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,36
	ctx.r10.s64 = ctx.r27.s64 + 36;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r9,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1;
loc_82A3DEF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3df00
	if (cr6.eq) goto loc_82A3DF00;
	// fsubs f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
loc_82A3DF00:
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, xer);
	// bne cr6,0x82a3df20
	if (!cr6.eq) goto loc_82A3DF20;
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a3df20
	if (cr6.eq) goto loc_82A3DF20;
	// fadds f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82a3df68
	goto loc_82A3DF68;
loc_82A3DF20:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a3df38
	if (cr6.eq) goto loc_82A3DF38;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a3df58
	goto loc_82A3DF58;
loc_82A3DF38:
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(ctx.r11.s32, 94, xer);
	// blt cr6,0x82a3df48
	if (cr6.lt) goto loc_82A3DF48;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a3df58
	goto loc_82A3DF58;
loc_82A3DF48:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,36
	ctx.r10.s64 = ctx.r27.s64 + 36;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r9,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1;
loc_82A3DF58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3df68
	if (cr6.eq) goto loc_82A3DF68;
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
loc_82A3DF68:
	// cmpwi cr6,r25,6
	cr6.compare<int32_t>(ctx.r25.s32, 6, xer);
	// bne cr6,0x82a3df74
	if (!cr6.eq) goto loc_82A3DF74;
	// fsubs f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
loc_82A3DF74:
	// cmpwi cr6,r22,6
	cr6.compare<int32_t>(ctx.r22.s32, 6, xer);
	// bne cr6,0x82a3df80
	if (!cr6.eq) goto loc_82A3DF80;
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
loc_82A3DF80:
	// lfs f13,1272(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1272);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,1272(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1272);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r24,1272
	ctx.r31.s64 = ctx.r24.s64 + 1272;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r26,1272
	ctx.r30.s64 = ctx.r26.s64 + 1272;
	// lfs f25,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f25.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a3dfc0
	if (!cr6.gt) goto loc_82A3DFC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fsel f13,f0,f25,f13
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f25.f64 : ctx.f13.f64;
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
loc_82A3DFC0:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f30,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a3e05c
	if (!cr6.lt) goto loc_82A3E05C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f4,1288(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1288);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r24,1280
	ctx.r11.s64 = ctx.r24.s64 + 1280;
	// lfs f3,1280(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1280);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1288(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1288);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r26,1280
	ctx.r11.s64 = ctx.r26.s64 + 1280;
	// lfs f1,1280(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825c3ec0
	ctx.lr = 0x82A3DFF4;
	sub_825C3EC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cb910
	ctx.lr = 0x82A3E000;
	sub_825CB910(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f4,1288(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1288);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,1280(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1280);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1288(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1288);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1280(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825c3ec0
	ctx.lr = 0x82A3E01C;
	sub_825C3EC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cb910
	ctx.lr = 0x82A3E028;
	sub_825CB910(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82a3e05c
	if (!cr6.gt) goto loc_82A3E05C;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82a3e05c
	if (!cr6.gt) goto loc_82A3E05C;
	// fcmpu cr6,f29,f1
	cr6.compare(ctx.f29.f64, ctx.f1.f64);
	// bge cr6,0x82a3e058
	if (!cr6.lt) goto loc_82A3E058;
	// fsubs f31,f31,f28
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// b 0x82a3e05c
	goto loc_82A3E05C;
loc_82A3E058:
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
loc_82A3E05C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-20096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82a3e07c
	if (cr6.gt) goto loc_82A3E07C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-8320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a3e080
	if (!cr6.lt) goto loc_82A3E080;
loc_82A3E07C:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82A3E080:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,1304(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1304);
	// lwz r9,1308(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1308);
	// lwz r8,1312(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1312);
	// lbz r7,1541(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1541);
	// lfs f0,14604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14604);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// fmuls f26,f31,f0
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x82a3e0cc
	if (cr6.eq) goto loc_82A3E0CC;
	// lfs f0,1520(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1528(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1528);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// b 0x82a3e0d4
	goto loc_82A3E0D4;
loc_82A3E0CC:
	// lfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
loc_82A3E0D4:
	// bl 0x83740868
	ctx.lr = 0x82A3E0D8;
	sub_83740868(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,1541(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1541);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lfs f31,1304(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1304);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f29,-23868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23868);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f13,f1,f29
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lfs f28,23372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23372);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f12,f30,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// lfs f30,1312(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1312);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fsqrts f10,f12
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f27,f11,f10
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// beq cr6,0x82a3e124
	if (cr6.eq) goto loc_82A3E124;
	// lfs f0,1520(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1528(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1528);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsubs f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
loc_82A3E124:
	// bl 0x83740868
	ctx.lr = 0x82A3E128;
	sub_83740868(ctx, base);
	// fmuls f12,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f11,f1,f29
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lfs f0,-16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// lfs f13,7656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7656);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f30,f30,f12
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fsqrts f8,f10
	ctx.f8.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// bgt cr6,0x82a3e15c
	if (cr6.gt) goto loc_82A3E15C;
	// fmr f11,f24
	ctx.f11.f64 = ctx.f24.f64;
	// b 0x82a3e178
	goto loc_82A3E178;
loc_82A3E15C:
	// fcmpu cr6,f27,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// blt cr6,0x82a3e16c
	if (cr6.lt) goto loc_82A3E16C;
	// fmr f11,f25
	ctx.f11.f64 = ctx.f25.f64;
	// b 0x82a3e178
	goto loc_82A3E178;
loc_82A3E16C:
	// fsubs f11,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
loc_82A3E178:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82a3e188
	if (cr6.gt) goto loc_82A3E188;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x82a3e1a4
	goto loc_82A3E1A4;
loc_82A3E188:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a3e198
	if (cr6.lt) goto loc_82A3E198;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x82a3e1a4
	goto loc_82A3E1A4;
loc_82A3E198:
	// fsubs f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
loc_82A3E1A4:
	// fsubs f11,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-28496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28496);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fnmsubs f9,f11,f13,f0
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fnmsubs f8,f10,f0,f25
	ctx.f8.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f25.f64)));
	// fmuls f7,f8,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// fnmsubs f1,f7,f12,f9
	ctx.f1.f64 = double(float(-(ctx.f7.f64 * ctx.f12.f64 - ctx.f9.f64)));
loc_82A3E1D4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b4
	ctx.lr = 0x82A3E1E0;
	__restfpr_24(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3E1E4"))) PPC_WEAK_FUNC(sub_82A3E1E4);
PPC_FUNC_IMPL(__imp__sub_82A3E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E1E8"))) PPC_WEAK_FUNC(sub_82A3E1E8);
PPC_FUNC_IMPL(__imp__sub_82A3E1E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,21696
	ctx.r10.s64 = ctx.r11.s64 + 21696;
	// lfs f13,-396(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -396);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmsubs f13,f12,f2,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a3e210
	if (!cr6.gt) goto loc_82A3E210;
	// fdivs f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f13.f64));
	// blr 
	return;
loc_82A3E210:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E224"))) PPC_WEAK_FUNC(sub_82A3E224);
PPC_FUNC_IMPL(__imp__sub_82A3E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E228"))) PPC_WEAK_FUNC(sub_82A3E228);
PPC_FUNC_IMPL(__imp__sub_82A3E228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a3e250
	if (cr6.lt) goto loc_82A3E250;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a3e254
	if (cr6.lt) goto loc_82A3E254;
loc_82A3E250:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A3E254:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A3E264:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// beq cr6,0x82a3e284
	if (cr6.eq) goto loc_82A3E284;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x82a3e264
	if (cr6.lt) goto loc_82A3E264;
	// blr 
	return;
loc_82A3E284:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E28C"))) PPC_WEAK_FUNC(sub_82A3E28C);
PPC_FUNC_IMPL(__imp__sub_82A3E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E290"))) PPC_WEAK_FUNC(sub_82A3E290);
PPC_FUNC_IMPL(__imp__sub_82A3E290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r6,2
	ctx.r6.s64 = 2;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// addi r7,r3,34
	ctx.r7.s64 = ctx.r3.s64 + 34;
	// lfs f0,-15468(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15468);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// li r6,255
	ctx.r6.s64 = 255;
loc_82A3E2B8:
	// stw r6,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r6.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// stbx r10,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82a3e2b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3E2B8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r10.u8);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r9,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r9.u8);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// stb r10,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r10.u8);
	// stb r10,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E304"))) PPC_WEAK_FUNC(sub_82A3E304);
PPC_FUNC_IMPL(__imp__sub_82A3E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E308"))) PPC_WEAK_FUNC(sub_82A3E308);
PPC_FUNC_IMPL(__imp__sub_82A3E308) {
	PPC_FUNC_PROLOGUE();
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r8,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r8.u8);
	// stb r10,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r10.u8);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E330"))) PPC_WEAK_FUNC(sub_82A3E330);
PPC_FUNC_IMPL(__imp__sub_82A3E330) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82a3fa90
	ctx.lr = 0x82A3E368;
	sub_82A3FA90(ctx, base);
	// addi r3,r31,74
	ctx.r3.s64 = ctx.r31.s64 + 74;
	// bl 0x82a3fa90
	ctx.lr = 0x82A3E370;
	sub_82A3FA90(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82a3fa90
	ctx.lr = 0x82A3E378;
	sub_82A3FA90(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r8,24
	ctx.r8.s64 = 24;
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// stb r30,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r30.u8);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A3E3E8"))) PPC_WEAK_FUNC(sub_82A3E3E8);
PPC_FUNC_IMPL(__imp__sub_82A3E3E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// b 0x82a3fbe0
	sub_82A3FBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3E3F0"))) PPC_WEAK_FUNC(sub_82A3E3F0);
PPC_FUNC_IMPL(__imp__sub_82A3E3F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,74
	ctx.r3.s64 = ctx.r3.s64 + 74;
	// b 0x82a3fbe0
	sub_82A3FBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3E3F8"))) PPC_WEAK_FUNC(sub_82A3E3F8);
PPC_FUNC_IMPL(__imp__sub_82A3E3F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x82a3fbe0
	sub_82A3FBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3E400"))) PPC_WEAK_FUNC(sub_82A3E400);
PPC_FUNC_IMPL(__imp__sub_82A3E400) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82a3e4ac
	if (cr6.gt) goto loc_82A3E4AC;
	// lis r12,-32092
	ctx.r12.s64 = -2103181312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7116
	ctx.r12.s64 = ctx.r12.s64 + -7116;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A3E490;
	case 1:
		goto loc_82A3E470;
	case 2:
		goto loc_82A3E470;
	case 3:
		goto loc_82A3E4AC;
	case 4:
		goto loc_82A3E45C;
	case 5:
		goto loc_82A3E45C;
	case 6:
		goto loc_82A3E45C;
	case 7:
		goto loc_82A3E45C;
	case 8:
		goto loc_82A3E45C;
	case 9:
		goto loc_82A3E45C;
	default:
		return;
	}
	// lwz r21,-7024(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7024);
	// lwz r21,-7056(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7056);
	// lwz r21,-7056(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7056);
	// lwz r21,-6996(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6996);
	// lwz r21,-7076(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7076);
	// lwz r21,-7076(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7076);
	// lwz r21,-7076(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7076);
	// lwz r21,-7076(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7076);
	// lwz r21,-7076(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7076);
	// lwz r21,-7076(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7076);
loc_82A3E45C:
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
loc_82A3E470:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3e4ac
	if (!cr6.eq) goto loc_82A3E4AC;
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
loc_82A3E490:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a3e4ac
	if (cr6.eq) goto loc_82A3E4AC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a1f9a0
	ctx.lr = 0x82A3E4A0;
	sub_82A1F9A0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82a3e4b0
	if (!cr6.eq) goto loc_82A3E4B0;
loc_82A3E4AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A3E4B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E4C0"))) PPC_WEAK_FUNC(sub_82A3E4C0);
PPC_FUNC_IMPL(__imp__sub_82A3E4C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E4E8"))) PPC_WEAK_FUNC(sub_82A3E4E8);
PPC_FUNC_IMPL(__imp__sub_82A3E4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,178
	ctx.r9.s64 = ctx.r3.s64 + 178;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,10
	ctx.r10.s64 = 10;
loc_82A3E4FC:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a3e4fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3E4FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 + 176;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A3E518:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a3e554
	if (cr6.eq) goto loc_82A3E554;
loc_82A3E528:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r6,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stb r7,178(r5)
	PPC_STORE_U8(ctx.r5.u32 + 178, ctx.r7.u8);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x82a3e528
	if (cr6.lt) goto loc_82A3E528;
loc_82A3E554:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,11
	ctx.r8.s64 = ctx.r8.s64 + 11;
	// bdnz 0x82a3e518
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3E518;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E564"))) PPC_WEAK_FUNC(sub_82A3E564);
PPC_FUNC_IMPL(__imp__sub_82A3E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E568"))) PPC_WEAK_FUNC(sub_82A3E568);
PPC_FUNC_IMPL(__imp__sub_82A3E568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A3E58C:
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stfsu f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a3e58c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3E58C;
	// li r10,11
	ctx.r10.s64 = 11;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82A3E5B0:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a3e5b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3E5B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E5BC"))) PPC_WEAK_FUNC(sub_82A3E5BC);
PPC_FUNC_IMPL(__imp__sub_82A3E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E5C0"))) PPC_WEAK_FUNC(sub_82A3E5C0);
PPC_FUNC_IMPL(__imp__sub_82A3E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x82a3e634
	if (!cr6.lt) goto loc_82A3E634;
loc_82A3E5D8:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3e5f8
	if (cr6.gt) goto loc_82A3E5F8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A3E5F8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a3e634
	if (cr6.eq) goto loc_82A3E634;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82a3e5d8
	if (cr6.lt) goto loc_82A3E5D8;
loc_82A3E634:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E654"))) PPC_WEAK_FUNC(sub_82A3E654);
PPC_FUNC_IMPL(__imp__sub_82A3E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E658"))) PPC_WEAK_FUNC(sub_82A3E658);
PPC_FUNC_IMPL(__imp__sub_82A3E658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A3E660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x82a3e6e4
	if (!cr6.lt) goto loc_82A3E6E4;
loc_82A3E67C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3e69c
	if (cr6.gt) goto loc_82A3E69C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A3E69C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3e6ac
	if (cr6.eq) goto loc_82A3E6AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82A3E6AC:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82a3e67c
	if (cr6.lt) goto loc_82A3E67C;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
loc_82A3E6E4:
	// bne cr6,0x82a3e70c
	if (!cr6.eq) goto loc_82A3E70C;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82A3E70C:
	// bl 0x82a3e5c0
	ctx.lr = 0x82A3E710;
	sub_82A3E5C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3E718"))) PPC_WEAK_FUNC(sub_82A3E718);
PPC_FUNC_IMPL(__imp__sub_82A3E718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A3E720;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r30,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// srawi r10,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// addze. r29,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x82a3e81c
	if (!cr0.gt) goto loc_82A3E81C;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A3E750:
	// ldu r10,-8(r27)
	ea = -8 + ctx.r27.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r27.u32 = ea;
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bge cr6,0x82a3e7d4
	if (!cr6.lt) goto loc_82A3E7D4;
loc_82A3E770:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3e790
	if (cr6.gt) goto loc_82A3E790;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A3E790:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3e7a0
	if (cr6.eq) goto loc_82A3E7A0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82A3E7A0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// stwx r5,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// blt cr6,0x82a3e770
	if (cr6.lt) goto loc_82A3E770;
loc_82A3E7D4:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x82a3e800
	if (!cr6.eq) goto loc_82A3E800;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_82A3E800:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3e5c0
	ctx.lr = 0x82A3E814;
	sub_82A3E5C0(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bgt cr6,0x82a3e750
	if (cr6.gt) goto loc_82A3E750;
loc_82A3E81C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3E824"))) PPC_WEAK_FUNC(sub_82A3E824);
PPC_FUNC_IMPL(__imp__sub_82A3E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3E828"))) PPC_WEAK_FUNC(sub_82A3E828);
PPC_FUNC_IMPL(__imp__sub_82A3E828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3e840
	if (cr6.gt) goto loc_82A3E840;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3E840:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3e864
	if (cr6.eq) goto loc_82A3E864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
loc_82A3E864:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3e87c
	if (cr6.gt) goto loc_82A3E87C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3E87C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3e8a0
	if (cr6.eq) goto loc_82A3E8A0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
loc_82A3E8A0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3e8b8
	if (cr6.gt) goto loc_82A3E8B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3E8B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3E8E0"))) PPC_WEAK_FUNC(sub_82A3E8E0);
PPC_FUNC_IMPL(__imp__sub_82A3E8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A3E8E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82a3e974
	if (!cr6.gt) goto loc_82A3E974;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r11,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a3e828
	ctx.lr = 0x82A3E92C;
	sub_82A3E828(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82a3e828
	ctx.lr = 0x82A3E940;
	sub_82A3E828(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82a3e828
	ctx.lr = 0x82A3E958;
	sub_82A3E828(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a3e828
	ctx.lr = 0x82A3E96C;
	sub_82A3E828(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A3E974:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a3e828
	ctx.lr = 0x82A3E980;
	sub_82A3E828(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3E988"))) PPC_WEAK_FUNC(sub_82A3E988);
PPC_FUNC_IMPL(__imp__sub_82A3E988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82A3E99C:
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfs f0,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3e9c0
	if (cr6.gt) goto loc_82A3E9C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3E9C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3e9fc
	if (cr6.eq) goto loc_82A3E9FC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// beq cr6,0x82a3e9f4
	if (cr6.eq) goto loc_82A3E9F4;
loc_82A3E9D8:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bne cr6,0x82a3e9d8
	if (!cr6.eq) goto loc_82A3E9D8;
loc_82A3E9F4:
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// b 0x82a3ea40
	goto loc_82A3EA40;
loc_82A3E9FC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82A3EA00:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3ea18
	if (cr6.gt) goto loc_82A3EA18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EA18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3ea3c
	if (cr6.eq) goto loc_82A3EA3C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82a3ea00
	goto loc_82A3EA00;
loc_82A3EA3C:
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
loc_82A3EA40:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a3e99c
	if (!cr6.eq) goto loc_82A3E99C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3EA50"))) PPC_WEAK_FUNC(sub_82A3EA50);
PPC_FUNC_IMPL(__imp__sub_82A3EA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A3EA58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a3e8e0
	ctx.lr = 0x82A3EA90;
	sub_82A3E8E0(ctx, base);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bge cr6,0x82a3eaf0
	if (!cr6.lt) goto loc_82A3EAF0;
loc_82A3EAA4:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3eabc
	if (cr6.gt) goto loc_82A3EABC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3eaf0
	if (!cr6.eq) goto loc_82A3EAF0;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ead8
	if (cr6.gt) goto loc_82A3EAD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EAD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3eaf0
	if (!cr6.eq) goto loc_82A3EAF0;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// cmplw cr6,r29,r6
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, xer);
	// blt cr6,0x82a3eaa4
	if (cr6.lt) goto loc_82A3EAA4;
loc_82A3EAF0:
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bge cr6,0x82a3ec80
	if (!cr6.lt) goto loc_82A3EC80;
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// blt cr6,0x82a3ec14
	if (cr6.lt) goto loc_82A3EC14;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82A3EB14:
	// lfs f13,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3eb28
	if (cr6.gt) goto loc_82A3EB28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EB28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec80
	if (!cr6.eq) goto loc_82A3EC80;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3eb44
	if (cr6.gt) goto loc_82A3EB44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EB44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec80
	if (!cr6.eq) goto loc_82A3EC80;
	// lfs f13,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3eb64
	if (cr6.gt) goto loc_82A3EB64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EB64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec6c
	if (!cr6.eq) goto loc_82A3EC6C;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3eb80
	if (cr6.gt) goto loc_82A3EB80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EB80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec6c
	if (!cr6.eq) goto loc_82A3EC6C;
	// lfs f13,20(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3eba0
	if (cr6.gt) goto loc_82A3EBA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EBA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec74
	if (!cr6.eq) goto loc_82A3EC74;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ebbc
	if (cr6.gt) goto loc_82A3EBBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EBBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec74
	if (!cr6.eq) goto loc_82A3EC74;
	// lfs f13,28(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3ebdc
	if (cr6.gt) goto loc_82A3EBDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EBDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec7c
	if (!cr6.eq) goto loc_82A3EC7C;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ebf8
	if (cr6.gt) goto loc_82A3EBF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EBF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec7c
	if (!cr6.eq) goto loc_82A3EC7C;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3eb14
	if (cr6.lt) goto loc_82A3EB14;
loc_82A3EC14:
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bge cr6,0x82a3ec80
	if (!cr6.lt) goto loc_82A3EC80;
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_82A3EC20:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a3ec34
	if (cr6.gt) goto loc_82A3EC34;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EC34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec80
	if (!cr6.eq) goto loc_82A3EC80;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ec50
	if (cr6.gt) goto loc_82A3EC50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EC50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ec80
	if (!cr6.eq) goto loc_82A3EC80;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// blt cr6,0x82a3ec20
	if (cr6.lt) goto loc_82A3EC20;
	// b 0x82a3ec80
	goto loc_82A3EC80;
loc_82A3EC6C:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// b 0x82a3ec80
	goto loc_82A3EC80;
loc_82A3EC74:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// b 0x82a3ec80
	goto loc_82A3EC80;
loc_82A3EC7C:
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
loc_82A3EC80:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_82A3EC88:
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bge cr6,0x82a3eec4
	if (!cr6.lt) goto loc_82A3EEC4;
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x82a3ee38
	if (cr6.lt) goto loc_82A3EE38;
loc_82A3ECA8:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3ecc0
	if (cr6.gt) goto loc_82A3ECC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3ECC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ed08
	if (!cr6.eq) goto loc_82A3ED08;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ecdc
	if (cr6.gt) goto loc_82A3ECDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3ECDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3eec4
	if (!cr6.eq) goto loc_82A3EEC4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
loc_82A3ED08:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3ed20
	if (cr6.gt) goto loc_82A3ED20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3ED20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ed68
	if (!cr6.eq) goto loc_82A3ED68;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ed3c
	if (cr6.gt) goto loc_82A3ED3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3ED3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3eeb0
	if (!cr6.eq) goto loc_82A3EEB0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
loc_82A3ED68:
	// lfs f0,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3ed80
	if (cr6.gt) goto loc_82A3ED80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3ED80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3edc8
	if (!cr6.eq) goto loc_82A3EDC8;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ed9c
	if (cr6.gt) goto loc_82A3ED9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3ED9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3eeb8
	if (!cr6.eq) goto loc_82A3EEB8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// std r5,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r5.u64);
loc_82A3EDC8:
	// lfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3ede0
	if (cr6.gt) goto loc_82A3EDE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EDE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ee28
	if (!cr6.eq) goto loc_82A3EE28;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3edfc
	if (cr6.gt) goto loc_82A3EDFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EDFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3eec0
	if (!cr6.eq) goto loc_82A3EEC0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,28(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// std r5,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r5.u64);
loc_82A3EE28:
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a3eca8
	if (cr6.lt) goto loc_82A3ECA8;
loc_82A3EE38:
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bge cr6,0x82a3eec4
	if (!cr6.lt) goto loc_82A3EEC4;
loc_82A3EE40:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3ee58
	if (cr6.gt) goto loc_82A3EE58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EE58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3eea0
	if (!cr6.eq) goto loc_82A3EEA0;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ee74
	if (cr6.gt) goto loc_82A3EE74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EE74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3eec4
	if (!cr6.eq) goto loc_82A3EEC4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
loc_82A3EEA0:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// blt cr6,0x82a3ee40
	if (cr6.lt) goto loc_82A3EE40;
	// b 0x82a3eec4
	goto loc_82A3EEC4;
loc_82A3EEB0:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// b 0x82a3eec4
	goto loc_82A3EEC4;
loc_82A3EEB8:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// b 0x82a3eec4
	goto loc_82A3EEC4;
loc_82A3EEC0:
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
loc_82A3EEC4:
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// ble cr6,0x82a3ef38
	if (!cr6.gt) goto loc_82A3EF38;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
loc_82A3EED0:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a3eee8
	if (cr6.gt) goto loc_82A3EEE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EEE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ef20
	if (!cr6.eq) goto loc_82A3EF20;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a3ef04
	if (cr6.gt) goto loc_82A3EF04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3EF04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a3ef34
	if (!cr6.eq) goto loc_82A3EF34;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ldu r11,-8(r6)
	ea = -8 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r6.u32 = ea;
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
loc_82A3EF20:
	// addi r11,r7,-8
	ctx.r11.s64 = ctx.r7.s64 + -8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a3eed0
	if (cr6.lt) goto loc_82A3EED0;
loc_82A3EF34:
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
loc_82A3EF38:
	// bne cr6,0x82a3ef94
	if (!cr6.eq) goto loc_82A3EF94;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x82a3f004
	if (cr6.eq) goto loc_82A3F004;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a3ef64
	if (cr6.eq) goto loc_82A3EF64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
loc_82A3EF64:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// b 0x82a3ec88
	goto loc_82A3EC88;
loc_82A3EF94:
	// addi r11,r7,-8
	ctx.r11.s64 = ctx.r7.s64 + -8;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x82a3efe4
	if (!cr6.eq) goto loc_82A3EFE4;
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x82a3efc8
	if (cr6.eq) goto loc_82A3EFC8;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
loc_82A3EFC8:
	// lwzu r11,-8(r8)
	ea = -8 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// b 0x82a3ec88
	goto loc_82A3EC88;
loc_82A3EFE4:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// b 0x82a3ec88
	goto loc_82A3EC88;
loc_82A3F004:
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3F018"))) PPC_WEAK_FUNC(sub_82A3F018);
PPC_FUNC_IMPL(__imp__sub_82A3F018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A3F020;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// ble cr6,0x82a3f08c
	if (!cr6.gt) goto loc_82A3F08C;
	// addi r31,r4,-8
	ctx.r31.s64 = ctx.r4.s64 + -8;
loc_82A3F040:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r5,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bl 0x82a3e658
	ctx.lr = 0x82A3F074;
	sub_82A3E658(ctx, base);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bgt cr6,0x82a3f040
	if (cr6.gt) goto loc_82A3F040;
loc_82A3F08C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3F094"))) PPC_WEAK_FUNC(sub_82A3F094);
PPC_FUNC_IMPL(__imp__sub_82A3F094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F098"))) PPC_WEAK_FUNC(sub_82A3F098);
PPC_FUNC_IMPL(__imp__sub_82A3F098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A3F0A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82a3f150
	if (!cr6.gt) goto loc_82A3F150;
loc_82A3F0C4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82a3f174
	if (!cr6.gt) goto loc_82A3F174;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3ea50
	ctx.lr = 0x82A3F0E0;
	sub_82A3EA50(ctx, base);
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
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r6,r8,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82a3f130
	if (!cr6.lt) goto loc_82A3F130;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3f098
	ctx.lr = 0x82A3F128;
	sub_82A3F098(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82a3f140
	goto loc_82A3F140;
loc_82A3F130:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a3f098
	ctx.lr = 0x82A3F13C;
	sub_82A3F098(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82A3F140:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82a3f0c4
	if (cr6.gt) goto loc_82A3F0C4;
loc_82A3F150:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82a3f16c
	if (!cr6.gt) goto loc_82A3F16C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3e988
	ctx.lr = 0x82A3F16C;
	sub_82A3E988(ctx, base);
loc_82A3F16C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A3F174:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82a3f150
	if (!cr6.gt) goto loc_82A3F150;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82a3f19c
	if (!cr6.gt) goto loc_82A3F19C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3e718
	ctx.lr = 0x82A3F19C;
	sub_82A3E718(ctx, base);
loc_82A3F19C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3f018
	ctx.lr = 0x82A3F1AC;
	sub_82A3F018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3F1B4"))) PPC_WEAK_FUNC(sub_82A3F1B4);
PPC_FUNC_IMPL(__imp__sub_82A3F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3F1B8"))) PPC_WEAK_FUNC(sub_82A3F1B8);
PPC_FUNC_IMPL(__imp__sub_82A3F1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A3F1C0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a3e568
	ctx.lr = 0x82A3F1D8;
	sub_82A3E568(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f238
	if (cr6.eq) goto loc_82A3F238;
	// lbz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a3f204
	if (cr6.eq) goto loc_82A3F204;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-6976
	ctx.r6.s64 = ctx.r11.s64 + -6976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d88b0
	ctx.lr = 0x82A3F204;
	sub_831D88B0(ctx, base);
loc_82A3F204:
	// lbz r4,177(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a3f95c
	if (cr6.eq) goto loc_82A3F95C;
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-6976
	ctx.r6.s64 = ctx.r11.s64 + -6976;
	// bl 0x831d88b0
	ctx.lr = 0x82A3F224;
	sub_831D88B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3e4e8
	ctx.lr = 0x82A3F22C;
	sub_82A3E4E8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A3F238:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,255
	ctx.r29.s64 = 255;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82a3f5d0
	if (cr6.eq) goto loc_82A3F5D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f274
	if (cr6.lt) goto loc_82A3F274;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f278
	if (cr6.lt) goto loc_82A3F278;
loc_82A3F274:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F278:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f294
	if (cr6.eq) goto loc_82A3F294;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// std r11,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r11.u64);
loc_82A3F294:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f2b4
	if (cr6.lt) goto loc_82A3F2B4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f2b8
	if (cr6.lt) goto loc_82A3F2B8;
loc_82A3F2B4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F2B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f2ec
	if (cr6.eq) goto loc_82A3F2EC;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F2EC:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f30c
	if (cr6.lt) goto loc_82A3F30C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f310
	if (cr6.lt) goto loc_82A3F310;
loc_82A3F30C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F310:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f344
	if (cr6.eq) goto loc_82A3F344;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F344:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f364
	if (cr6.lt) goto loc_82A3F364;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f368
	if (cr6.lt) goto loc_82A3F368;
loc_82A3F364:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F368:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f39c
	if (cr6.eq) goto loc_82A3F39C;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F39C:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f3bc
	if (cr6.lt) goto loc_82A3F3BC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f3c0
	if (cr6.lt) goto loc_82A3F3C0;
loc_82A3F3BC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F3C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f3f4
	if (cr6.eq) goto loc_82A3F3F4;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F3F4:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f414
	if (cr6.lt) goto loc_82A3F414;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f418
	if (cr6.lt) goto loc_82A3F418;
loc_82A3F414:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F418:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f44c
	if (cr6.eq) goto loc_82A3F44C;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F44C:
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f46c
	if (cr6.lt) goto loc_82A3F46C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f470
	if (cr6.lt) goto loc_82A3F470;
loc_82A3F46C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F470:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f4a4
	if (cr6.eq) goto loc_82A3F4A4;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F4A4:
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f4c4
	if (cr6.lt) goto loc_82A3F4C4;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f4c8
	if (cr6.lt) goto loc_82A3F4C8;
loc_82A3F4C4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F4C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f4fc
	if (cr6.eq) goto loc_82A3F4FC;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F4FC:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A3F514:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a3f52c
	if (cr6.lt) goto loc_82A3F52C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a3f530
	if (cr6.lt) goto loc_82A3F530;
loc_82A3F52C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82A3F530:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3f558
	if (cr6.eq) goto loc_82A3F558;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// stdx r10,r9,r8
	PPC_STORE_U64(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u64);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F558:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stfsu f31,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a3f514
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3F514;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r28,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r28.u8);
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// srawi r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a3f098
	ctx.lr = 0x82A3F590;
	sub_82A3F098(ctx, base);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a3f5d0
	if (cr6.eq) goto loc_82A3F5D0;
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
loc_82A3F5B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stwu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// bne cr6,0x82a3f5b4
	if (!cr6.eq) goto loc_82A3F5B4;
loc_82A3F5D0:
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f95c
	if (cr6.eq) goto loc_82A3F95C;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f600
	if (cr6.lt) goto loc_82A3F600;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f604
	if (cr6.lt) goto loc_82A3F604;
loc_82A3F600:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F604:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f620
	if (cr6.eq) goto loc_82A3F620;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// std r11,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r11.u64);
loc_82A3F620:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f640
	if (cr6.lt) goto loc_82A3F640;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f644
	if (cr6.lt) goto loc_82A3F644;
loc_82A3F640:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f678
	if (cr6.eq) goto loc_82A3F678;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F678:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f698
	if (cr6.lt) goto loc_82A3F698;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f69c
	if (cr6.lt) goto loc_82A3F69C;
loc_82A3F698:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F69C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f6d0
	if (cr6.eq) goto loc_82A3F6D0;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F6D0:
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stfs f31,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f6f0
	if (cr6.lt) goto loc_82A3F6F0;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f6f4
	if (cr6.lt) goto loc_82A3F6F4;
loc_82A3F6F0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F6F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f728
	if (cr6.eq) goto loc_82A3F728;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F728:
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f748
	if (cr6.lt) goto loc_82A3F748;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f74c
	if (cr6.lt) goto loc_82A3F74C;
loc_82A3F748:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F74C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f780
	if (cr6.eq) goto loc_82A3F780;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F780:
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stfs f31,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f7a0
	if (cr6.lt) goto loc_82A3F7A0;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f7a4
	if (cr6.lt) goto loc_82A3F7A4;
loc_82A3F7A0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F7A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f7d8
	if (cr6.eq) goto loc_82A3F7D8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,132(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F7D8:
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stfs f31,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f7f8
	if (cr6.lt) goto loc_82A3F7F8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f7fc
	if (cr6.lt) goto loc_82A3F7FC;
loc_82A3F7F8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F7FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f830
	if (cr6.eq) goto loc_82A3F830;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F830:
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stfs f31,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a3f850
	if (cr6.lt) goto loc_82A3F850;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f854
	if (cr6.lt) goto loc_82A3F854;
loc_82A3F850:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A3F854:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f888
	if (cr6.eq) goto loc_82A3F888;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F888:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// stfs f31,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A3F8A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a3f8b8
	if (cr6.lt) goto loc_82A3F8B8;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a3f8bc
	if (cr6.lt) goto loc_82A3F8BC;
loc_82A3F8B8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82A3F8BC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a3f8e4
	if (cr6.eq) goto loc_82A3F8E4;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// stdx r10,r9,r8
	PPC_STORE_U64(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u64);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82A3F8E4:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stfsu f31,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a3f8a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A3F8A0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r28,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r28.u8);
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// srawi r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a3f098
	ctx.lr = 0x82A3F91C;
	sub_82A3F098(ctx, base);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a3f95c
	if (cr6.eq) goto loc_82A3F95C;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
loc_82A3F940:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stwu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// bne cr6,0x82a3f940
	if (!cr6.eq) goto loc_82A3F940;
loc_82A3F95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3e4e8
	ctx.lr = 0x82A3F964;
	sub_82A3E4E8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3F970"))) PPC_WEAK_FUNC(sub_82A3F970);
PPC_FUNC_IMPL(__imp__sub_82A3F970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A3F978;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x826318d0
	ctx.lr = 0x82A3F990;
	sub_826318D0(ctx, base);
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x825cdbb0
	ctx.lr = 0x82A3F9A4;
	sub_825CDBB0(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,26160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	ctx.f31.f64 = double(temp.f32);
loc_82A3F9B0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a3f9c4
	if (cr6.lt) goto loc_82A3F9C4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a3f9c8
	if (cr6.lt) goto loc_82A3F9C8;
loc_82A3F9C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3F9C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3f9e8
	if (cr6.eq) goto loc_82A3F9E8;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a3f9ec
	goto loc_82A3F9EC;
loc_82A3F9E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3F9EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a3fa30
	if (cr6.eq) goto loc_82A3FA30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A3FA04;
	sub_82A0C788(ctx, base);
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f1,f7
	ctx.f1.f64 = double(float(sqrt(ctx.f7.f64)));
	// b 0x82a3fa34
	goto loc_82A3FA34;
loc_82A3FA30:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82A3FA34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cdc30
	ctx.lr = 0x82A3FA40;
	sub_825CDC30(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// blt cr6,0x82a3f9b0
	if (cr6.lt) goto loc_82A3F9B0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3f1b8
	ctx.lr = 0x82A3FA58;
	sub_82A3F1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3FA68"))) PPC_WEAK_FUNC(sub_82A3FA68);
PPC_FUNC_IMPL(__imp__sub_82A3FA68) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FA78"))) PPC_WEAK_FUNC(sub_82A3FA78);
PPC_FUNC_IMPL(__imp__sub_82A3FA78) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FA8C"))) PPC_WEAK_FUNC(sub_82A3FA8C);
PPC_FUNC_IMPL(__imp__sub_82A3FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3FA90"))) PPC_WEAK_FUNC(sub_82A3FA90);
PPC_FUNC_IMPL(__imp__sub_82A3FA90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FAA4"))) PPC_WEAK_FUNC(sub_82A3FAA4);
PPC_FUNC_IMPL(__imp__sub_82A3FAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3FAA8"))) PPC_WEAK_FUNC(sub_82A3FAA8);
PPC_FUNC_IMPL(__imp__sub_82A3FAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a3fadc
	if (!cr6.eq) goto loc_82A3FADC;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a3fadc
	if (!cr6.eq) goto loc_82A3FADC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a3fae0
	if (cr6.eq) goto loc_82A3FAE0;
loc_82A3FADC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A3FAE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FAF0"))) PPC_WEAK_FUNC(sub_82A3FAF0);
PPC_FUNC_IMPL(__imp__sub_82A3FAF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f12,23072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23072);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,23164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,23160(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23160);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a3fb20
	if (!cr6.gt) goto loc_82A3FB20;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82a3fb2c
	goto loc_82A3FB2C;
loc_82A3FB20:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a3fb2c
	if (!cr6.lt) goto loc_82A3FB2C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82A3FB2C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a3fb64
	if (!cr6.gt) goto loc_82A3FB64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
loc_82A3FB64:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a3fb70
	if (!cr6.lt) goto loc_82A3FB70;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82A3FB70:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FB84"))) PPC_WEAK_FUNC(sub_82A3FB84);
PPC_FUNC_IMPL(__imp__sub_82A3FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3FB88"))) PPC_WEAK_FUNC(sub_82A3FB88);
PPC_FUNC_IMPL(__imp__sub_82A3FB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfs f0,25692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25692);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FBE0"))) PPC_WEAK_FUNC(sub_82A3FBE0);
PPC_FUNC_IMPL(__imp__sub_82A3FBE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f12,23072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23072);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,23164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,23160(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23160);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a3fc10
	if (!cr6.gt) goto loc_82A3FC10;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82a3fc1c
	goto loc_82A3FC1C;
loc_82A3FC10:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a3fc1c
	if (!cr6.lt) goto loc_82A3FC1C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82A3FC1C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a3fc44
	if (!cr6.gt) goto loc_82A3FC44;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82a3fc50
	goto loc_82A3FC50;
loc_82A3FC44:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a3fc50
	if (!cr6.lt) goto loc_82A3FC50;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82A3FC50:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a3fc88
	if (!cr6.gt) goto loc_82A3FC88;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// blr 
	return;
loc_82A3FC88:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a3fc94
	if (!cr6.lt) goto loc_82A3FC94;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82A3FC94:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FCA8"))) PPC_WEAK_FUNC(sub_82A3FCA8);
PPC_FUNC_IMPL(__imp__sub_82A3FCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lhz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfs f0,25692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25692);
	ctx.f0.f64 = double(temp.f32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A3FD14"))) PPC_WEAK_FUNC(sub_82A3FD14);
PPC_FUNC_IMPL(__imp__sub_82A3FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A3FD18"))) PPC_WEAK_FUNC(sub_82A3FD18);
PPC_FUNC_IMPL(__imp__sub_82A3FD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A3FD20;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A3FD40:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r29,812
	ctx.r10.s64 = ctx.r29.s64 * 812;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r10,768
	ctx.r3.s64 = ctx.r10.s64 + 768;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// stb r30,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r30.u8);
	// bl 0x825fab68
	ctx.lr = 0x82A3FD7C;
	sub_825FAB68(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x82a3fd40
	if (cr6.lt) goto loc_82A3FD40;
	// li r29,255
	ctx.r29.s64 = 255;
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// li r27,115
	ctx.r27.s64 = 115;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stfs f31,104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stfs f31,140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x825fa8c8
	ctx.lr = 0x82A3FE08;
	sub_825FA8C8(ctx, base);
	// stb r30,440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 440, ctx.r30.u8);
	// addi r11,r31,440
	ctx.r11.s64 = ctx.r31.s64 + 440;
	// stb r30,441(r31)
	PPC_STORE_U8(ctx.r31.u32 + 441, ctx.r30.u8);
	// addi r11,r31,628
	ctx.r11.s64 = ctx.r31.s64 + 628;
	// stb r30,442(r31)
	PPC_STORE_U8(ctx.r31.u32 + 442, ctx.r30.u8);
	// stb r30,443(r31)
	PPC_STORE_U8(ctx.r31.u32 + 443, ctx.r30.u8);
	// stb r30,444(r31)
	PPC_STORE_U8(ctx.r31.u32 + 444, ctx.r30.u8);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r28,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r28.u32);
	// stw r29,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
	// stw r29,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r29.u32);
	// stw r28,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// stfs f31,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f31,488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f31,492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f31,508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stfs f31,516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stb r30,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r30.u8);
	// stfs f31,520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stb r30,529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 529, ctx.r30.u8);
	// stfs f31,524(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// stfs f31,564(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r28,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r28.u32);
	// stw r29,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r29.u32);
	// stw r29,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r29.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f31,572(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stw r29,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r29.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r27,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r27.u32);
	// stb r30,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r30.u8);
	// stw r28,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r28.u32);
	// stw r29,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r29.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stfs f31,640(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stfs f31,644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stfs f31,648(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stfs f31,676(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stfs f31,680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stfs f31,684(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stfs f31,688(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stfs f31,692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// stfs f31,696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// addi r11,r31,720
	ctx.r11.s64 = ctx.r31.s64 + 720;
	// stfs f31,700(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// stw r29,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r29.u32);
	// stw r29,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r29.u32);
	// stw r29,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r29.u32);
	// stb r30,716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 716, ctx.r30.u8);
	// stb r30,717(r31)
	PPC_STORE_U8(ctx.r31.u32 + 717, ctx.r30.u8);
	// stb r30,718(r31)
	PPC_STORE_U8(ctx.r31.u32 + 718, ctx.r30.u8);
	// stb r30,719(r31)
	PPC_STORE_U8(ctx.r31.u32 + 719, ctx.r30.u8);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// stfs f31,724(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// stfs f31,728(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// stfs f31,732(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
	// stw r29,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r29.u32);
	// stfs f31,740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// stfs f31,744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stfs f31,748(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// stw r30,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r30.u32);
	// stfs f31,756(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 756, temp.u32);
	// stw r30,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r30.u32);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A3FF60"))) PPC_WEAK_FUNC(sub_82A3FF60);
PPC_FUNC_IMPL(__imp__sub_82A3FF60) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A3FF80:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r31,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r31,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r31.u8);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stb r31,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r31.u8);
	// blt cr6,0x82a3ff80
	if (cr6.lt) goto loc_82A3FF80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x825fadc0
	ctx.lr = 0x82A3FFB0;
	sub_825FADC0(ctx, base);
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// bl 0x825fae68
	ctx.lr = 0x82A3FFB8;
	sub_825FAE68(ctx, base);
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// bl 0x825fae68
	ctx.lr = 0x82A3FFC0;
	sub_825FAE68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A3FFD0:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r11,224
	ctx.r10.s64 = ctx.r11.s64 + 224;
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r9.u32);
	// stb r31,232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 232, ctx.r31.u8);
	// stw r31,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r31.u32);
	// stw r31,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r31.u32);
loc_82A40008:
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// stwu r31,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// stwu r31,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82a40008
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A40008;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x82a3ffd0
	if (cr6.lt) goto loc_82A3FFD0;
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

__attribute__((alias("__imp__sub_82A40048"))) PPC_WEAK_FUNC(sub_82A40048);
PPC_FUNC_IMPL(__imp__sub_82A40048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A40058:
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_82A40068:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r7,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x82a40068
	if (cr6.lt) goto loc_82A40068;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82A40088:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// stwx r7,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r7.u32);
	// blt cr6,0x82a40088
	if (cr6.lt) goto loc_82A40088;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mulli r8,r6,11
	ctx.r8.s64 = ctx.r6.s64 * 11;
loc_82A400B4:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blt cr6,0x82a400b4
	if (cr6.lt) goto loc_82A400B4;
	// addi r11,r6,93
	ctx.r11.s64 = ctx.r6.s64 + 93;
	// addi r10,r6,17
	ctx.r10.s64 = ctx.r6.s64 + 17;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// stwx r7,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r7.u32);
	// blt cr6,0x82a40058
	if (cr6.lt) goto loc_82A40058;
	// stb r7,380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 380, ctx.r7.u8);
	// stw r7,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40128"))) PPC_WEAK_FUNC(sub_82A40128);
PPC_FUNC_IMPL(__imp__sub_82A40128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r8,255
	ctx.r8.s64 = 255;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r6,5
	ctx.r6.s64 = 5;
loc_82A40144:
	// mulli r11,r9,56
	ctx.r11.s64 = ctx.r9.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blt cr6,0x82a40144
	if (cr6.lt) goto loc_82A40144;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// b 0x82a40048
	sub_82A40048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4019C"))) PPC_WEAK_FUNC(sub_82A4019C);
PPC_FUNC_IMPL(__imp__sub_82A4019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A401A0"))) PPC_WEAK_FUNC(sub_82A401A0);
PPC_FUNC_IMPL(__imp__sub_82A401A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82A401B4:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blt cr6,0x82a401b4
	if (cr6.lt) goto loc_82A401B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r6,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r6.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40200"))) PPC_WEAK_FUNC(sub_82A40200);
PPC_FUNC_IMPL(__imp__sub_82A40200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A40208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A40214:
	// mulli r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 * 176;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825faf60
	ctx.lr = 0x82A40224;
	sub_825FAF60(ctx, base);
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x825faf60
	ctx.lr = 0x82A4022C;
	sub_825FAF60(ctx, base);
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,352
	ctx.r3.s64 = ctx.r11.s64 + 352;
	// bl 0x82a401a0
	ctx.lr = 0x82A4023C;
	sub_82A401A0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82a40214
	if (cr6.lt) goto loc_82A40214;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A40254"))) PPC_WEAK_FUNC(sub_82A40254);
PPC_FUNC_IMPL(__imp__sub_82A40254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40258"))) PPC_WEAK_FUNC(sub_82A40258);
PPC_FUNC_IMPL(__imp__sub_82A40258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,140
	ctx.r11.s64 = ctx.r3.s64 + 140;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A40270:
	// stfs f0,-140(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -140, temp.u32);
	// stw r10,-68(r11)
	PPC_STORE_U32(ctx.r11.u32 + -68, ctx.r10.u32);
	// stfs f0,-132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -132, temp.u32);
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stfs f0,-60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stfs f0,-52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -52, temp.u32);
	// stfs f0,-44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -44, temp.u32);
	// stfs f0,-36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// stfs f0,-28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a40270
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A40270;
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stb r10,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r10.u8);
	// stb r10,153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 153, ctx.r10.u8);
	// stb r10,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, ctx.r10.u8);
	// stb r10,155(r3)
	PPC_STORE_U8(ctx.r3.u32 + 155, ctx.r10.u8);
	// stb r10,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r10.u8);
	// stb r10,157(r3)
	PPC_STORE_U8(ctx.r3.u32 + 157, ctx.r10.u8);
	// stb r10,158(r3)
	PPC_STORE_U8(ctx.r3.u32 + 158, ctx.r10.u8);
	// stb r10,159(r3)
	PPC_STORE_U8(ctx.r3.u32 + 159, ctx.r10.u8);
	// stb r10,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r10.u8);
	// stb r10,161(r3)
	PPC_STORE_U8(ctx.r3.u32 + 161, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A402D4"))) PPC_WEAK_FUNC(sub_82A402D4);
PPC_FUNC_IMPL(__imp__sub_82A402D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A402D8"))) PPC_WEAK_FUNC(sub_82A402D8);
PPC_FUNC_IMPL(__imp__sub_82A402D8) {
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
	// bl 0x825fa868
	ctx.lr = 0x82A402F4;
	sub_825FA868(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82a3fd18
	ctx.lr = 0x82A402FC;
	sub_82A3FD18(ctx, base);
	// addi r3,r31,2432
	ctx.r3.s64 = ctx.r31.s64 + 2432;
	// bl 0x82a3ff60
	ctx.lr = 0x82A40304;
	sub_82A3FF60(ctx, base);
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// bl 0x82a40128
	ctx.lr = 0x82A4030C;
	sub_82A40128(ctx, base);
	// addi r11,r31,4312
	ctx.r11.s64 = ctx.r31.s64 + 4312;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// stb r30,4312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4312, ctx.r30.u8);
	// bl 0x825faec8
	ctx.lr = 0x82A40320;
	sub_825FAEC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r30.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r30,4492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4492, ctx.r30.u32);
	// stw r30,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r30.u32);
	// addi r3,r31,4548
	ctx.r3.s64 = ctx.r31.s64 + 4548;
	// stw r9,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r9.u32);
	// addi r11,r31,4488
	ctx.r11.s64 = ctx.r31.s64 + 4488;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r8.u32);
	// stfs f0,4512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4512, temp.u32);
	// stw r30,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r30.u32);
	// stw r30,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r30.u32);
	// stw r30,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r30.u32);
	// stfs f0,4528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4528, temp.u32);
	// stfs f0,4532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4532, temp.u32);
	// stb r30,4524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4524, ctx.r30.u8);
	// stfs f0,4536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4536, temp.u32);
	// sth r30,4540(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4540, ctx.r30.u16);
	// sth r30,4542(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4542, ctx.r30.u16);
	// stw r30,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r30.u32);
	// bl 0x82a40200
	ctx.lr = 0x82A4037C;
	sub_82A40200(ctx, base);
	// addi r3,r31,5196
	ctx.r3.s64 = ctx.r31.s64 + 5196;
	// bl 0x82a40258
	ctx.lr = 0x82A40384;
	sub_82A40258(ctx, base);
	// addi r3,r31,5360
	ctx.r3.s64 = ctx.r31.s64 + 5360;
	// bl 0x825fac70
	ctx.lr = 0x82A4038C;
	sub_825FAC70(ctx, base);
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

__attribute__((alias("__imp__sub_82A403A4"))) PPC_WEAK_FUNC(sub_82A403A4);
PPC_FUNC_IMPL(__imp__sub_82A403A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A403A8"))) PPC_WEAK_FUNC(sub_82A403A8);
PPC_FUNC_IMPL(__imp__sub_82A403A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
loc_82A403C8:
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// stb r10,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r10.u8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// stwx r10,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r10,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x82a403c8
	if (cr6.lt) goto loc_82A403C8;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4040C"))) PPC_WEAK_FUNC(sub_82A4040C);
PPC_FUNC_IMPL(__imp__sub_82A4040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40410"))) PPC_WEAK_FUNC(sub_82A40410);
PPC_FUNC_IMPL(__imp__sub_82A40410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A4041C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// blt cr6,0x82a4041c
	if (cr6.lt) goto loc_82A4041C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A4044C:
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// sthx r9,r6,r3
	PPC_STORE_U16(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u16);
	// blt cr6,0x82a4044c
	if (cr6.lt) goto loc_82A4044C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,11
	ctx.r6.s64 = 11;
loc_82A40474:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blt cr6,0x82a40474
	if (cr6.lt) goto loc_82A40474;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A404B4"))) PPC_WEAK_FUNC(sub_82A404B4);
PPC_FUNC_IMPL(__imp__sub_82A404B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A404B8"))) PPC_WEAK_FUNC(sub_82A404B8);
PPC_FUNC_IMPL(__imp__sub_82A404B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A404C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r3,724
	ctx.r28.s64 = ctx.r3.s64 + 724;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82A404D4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82a40410
	ctx.lr = 0x82A404EC;
	sub_82A40410(ctx, base);
	// mulli r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 * 264;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// bl 0x82a4c710
	ctx.lr = 0x82A404FC;
	sub_82A4C710(ctx, base);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,708
	ctx.r9.s64 = ctx.r9.s64 + 708;
loc_82A40510:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r29,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u16);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82a40510
	if (cr6.lt) goto loc_82A40510;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r29,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r29.u16);
	// bl 0x82a403a8
	ctx.lr = 0x82A40534;
	sub_82A403A8(ctx, base);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
loc_82A40540:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// sthx r29,r7,r30
	PPC_STORE_U16(ctx.r7.u32 + ctx.r30.u32, ctx.r29.u16);
	// blt cr6,0x82a40540
	if (cr6.lt) goto loc_82A40540;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82a404d4
	if (cr6.lt) goto loc_82A404D4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A40574"))) PPC_WEAK_FUNC(sub_82A40574);
PPC_FUNC_IMPL(__imp__sub_82A40574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40578"))) PPC_WEAK_FUNC(sub_82A40578);
PPC_FUNC_IMPL(__imp__sub_82A40578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A40580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A40590:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a43440
	ctx.lr = 0x82A40598;
	sub_82A43440(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,7088
	ctx.r30.s64 = ctx.r30.s64 + 7088;
	// bge 0x82a40590
	if (!cr0.lt) goto loc_82A40590;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A405B4:
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a405b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A405B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A405D0"))) PPC_WEAK_FUNC(sub_82A405D0);
PPC_FUNC_IMPL(__imp__sub_82A405D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A405D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A405F0:
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r31,7088
	ctx.r11.s64 = ctx.r31.s64 * 7088;
	// stwx r29,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r29.u32);
	// stwx r28,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r28.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82a432a8
	ctx.lr = 0x82A4061C;
	sub_82A432A8(ctx, base);
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a405f0
	if (cr6.lt) goto loc_82A405F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A40638"))) PPC_WEAK_FUNC(sub_82A40638);
PPC_FUNC_IMPL(__imp__sub_82A40638) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x825cdbb0
	ctx.lr = 0x82A4067C;
	sub_825CDBB0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x825cdbb0
	ctx.lr = 0x82A40684;
	sub_825CDBB0(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,424
	ctx.r11.s64 = ctx.r31.s64 + 424;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A40698:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a40698
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A40698;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x825cdbb0
	ctx.lr = 0x82A406A8;
	sub_825CDBB0(ctx, base);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// bl 0x825cdbb0
	ctx.lr = 0x82A406B0;
	sub_825CDBB0(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,912
	ctx.r11.s64 = ctx.r31.s64 + 912;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A406C4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a406c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A406C4;
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x825cdbb0
	ctx.lr = 0x82A406D4;
	sub_825CDBB0(ctx, base);
	// addi r3,r31,1200
	ctx.r3.s64 = ctx.r31.s64 + 1200;
	// bl 0x825cdbb0
	ctx.lr = 0x82A406DC;
	sub_825CDBB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A406E0:
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825cdbb0
	ctx.lr = 0x82A406F4;
	sub_825CDBB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// mulli r10,r30,22
	ctx.r10.s64 = ctx.r30.s64 * 22;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1450
	ctx.r10.s64 = ctx.r10.s64 + 1450;
loc_82A40708:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x82a40708
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A40708;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// blt cr6,0x82a406e0
	if (cr6.lt) goto loc_82A406E0;
	// addi r3,r31,7736
	ctx.r3.s64 = ctx.r31.s64 + 7736;
	// bl 0x825cdbb0
	ctx.lr = 0x82A40738;
	sub_825CDBB0(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,7936
	ctx.r11.s64 = ctx.r31.s64 + 7936;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A4074C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a4074c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4074C;
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

__attribute__((alias("__imp__sub_82A40770"))) PPC_WEAK_FUNC(sub_82A40770);
PPC_FUNC_IMPL(__imp__sub_82A40770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// sraw r10,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a407a4
	if (cr6.eq) goto loc_82A407A4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// andc r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
loc_82A407A4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A407C0"))) PPC_WEAK_FUNC(sub_82A407C0);
PPC_FUNC_IMPL(__imp__sub_82A407C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,12384
	ctx.r10.u64 = ctx.r11.u64 | 12384;
	// beq cr6,0x82a407d8
	if (cr6.eq) goto loc_82A407D8;
	// ori r10,r11,12388
	ctx.r10.u64 = ctx.r11.u64 | 12388;
loc_82A407D8:
	// lfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A407E0"))) PPC_WEAK_FUNC(sub_82A407E0);
PPC_FUNC_IMPL(__imp__sub_82A407E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,12388
	ctx.r10.u64 = ctx.r11.u64 | 12388;
	// beq cr6,0x82a407f8
	if (cr6.eq) goto loc_82A407F8;
	// ori r10,r11,12384
	ctx.r10.u64 = ctx.r11.u64 | 12384;
loc_82A407F8:
	// lfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40800"))) PPC_WEAK_FUNC(sub_82A40800);
PPC_FUNC_IMPL(__imp__sub_82A40800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a40818
	if (!cr6.eq) goto loc_82A40818;
	// addi r3,r3,12408
	ctx.r3.s64 = ctx.r3.s64 + 12408;
	// blr 
	return;
loc_82A40818:
	// addi r3,r3,12896
	ctx.r3.s64 = ctx.r3.s64 + 12896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40820"))) PPC_WEAK_FUNC(sub_82A40820);
PPC_FUNC_IMPL(__imp__sub_82A40820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a40838
	if (!cr6.eq) goto loc_82A40838;
	// addi r3,r3,12808
	ctx.r3.s64 = ctx.r3.s64 + 12808;
	// blr 
	return;
loc_82A40838:
	// addi r3,r3,13296
	ctx.r3.s64 = ctx.r3.s64 + 13296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40840"))) PPC_WEAK_FUNC(sub_82A40840);
PPC_FUNC_IMPL(__imp__sub_82A40840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a40858
	if (!cr6.eq) goto loc_82A40858;
	// addi r3,r3,12896
	ctx.r3.s64 = ctx.r3.s64 + 12896;
	// blr 
	return;
loc_82A40858:
	// addi r3,r3,12408
	ctx.r3.s64 = ctx.r3.s64 + 12408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40860"))) PPC_WEAK_FUNC(sub_82A40860);
PPC_FUNC_IMPL(__imp__sub_82A40860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a40878
	if (!cr6.eq) goto loc_82A40878;
	// addi r3,r3,13296
	ctx.r3.s64 = ctx.r3.s64 + 13296;
	// blr 
	return;
loc_82A40878:
	// addi r3,r3,12808
	ctx.r3.s64 = ctx.r3.s64 + 12808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40880"))) PPC_WEAK_FUNC(sub_82A40880);
PPC_FUNC_IMPL(__imp__sub_82A40880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a40898
	if (!cr6.eq) goto loc_82A40898;
	// addi r3,r3,12608
	ctx.r3.s64 = ctx.r3.s64 + 12608;
	// blr 
	return;
loc_82A40898:
	// addi r3,r3,13096
	ctx.r3.s64 = ctx.r3.s64 + 13096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A408A0"))) PPC_WEAK_FUNC(sub_82A408A0);
PPC_FUNC_IMPL(__imp__sub_82A408A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a408b8
	if (!cr6.eq) goto loc_82A408B8;
	// addi r3,r3,13096
	ctx.r3.s64 = ctx.r3.s64 + 13096;
	// blr 
	return;
loc_82A408B8:
	// addi r3,r3,12608
	ctx.r3.s64 = ctx.r3.s64 + 12608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A408C0"))) PPC_WEAK_FUNC(sub_82A408C0);
PPC_FUNC_IMPL(__imp__sub_82A408C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,12392
	ctx.r10.u64 = ctx.r11.u64 | 12392;
	// beq cr6,0x82a408d8
	if (cr6.eq) goto loc_82A408D8;
	// ori r10,r11,12400
	ctx.r10.u64 = ctx.r11.u64 | 12400;
loc_82A408D8:
	// lfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A408E0"))) PPC_WEAK_FUNC(sub_82A408E0);
PPC_FUNC_IMPL(__imp__sub_82A408E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,12396
	ctx.r10.u64 = ctx.r11.u64 | 12396;
	// beq cr6,0x82a408f8
	if (cr6.eq) goto loc_82A408F8;
	// ori r10,r11,12404
	ctx.r10.u64 = ctx.r11.u64 | 12404;
loc_82A408F8:
	// lfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40900"))) PPC_WEAK_FUNC(sub_82A40900);
PPC_FUNC_IMPL(__imp__sub_82A40900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,12400
	ctx.r10.u64 = ctx.r11.u64 | 12400;
	// beq cr6,0x82a40918
	if (cr6.eq) goto loc_82A40918;
	// ori r10,r11,12392
	ctx.r10.u64 = ctx.r11.u64 | 12392;
loc_82A40918:
	// lfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40920"))) PPC_WEAK_FUNC(sub_82A40920);
PPC_FUNC_IMPL(__imp__sub_82A40920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,12404
	ctx.r10.u64 = ctx.r11.u64 | 12404;
	// beq cr6,0x82a40938
	if (cr6.eq) goto loc_82A40938;
	// ori r10,r11,12396
	ctx.r10.u64 = ctx.r11.u64 | 12396;
loc_82A40938:
	// lfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40940"))) PPC_WEAK_FUNC(sub_82A40940);
PPC_FUNC_IMPL(__imp__sub_82A40940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,7388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7388);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f10,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f10.f64 = double(temp.f32);
loc_82A40960:
	// fsubs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// blt cr6,0x82a40960
	if (cr6.lt) goto loc_82A40960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40994"))) PPC_WEAK_FUNC(sub_82A40994);
PPC_FUNC_IMPL(__imp__sub_82A40994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40998"))) PPC_WEAK_FUNC(sub_82A40998);
PPC_FUNC_IMPL(__imp__sub_82A40998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fnmsubs f1,f12,f0,f11
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A409C0"))) PPC_WEAK_FUNC(sub_82A409C0);
PPC_FUNC_IMPL(__imp__sub_82A409C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,20408
	ctx.r11.s64 = ctx.r11.s64 + 20408;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A409DC"))) PPC_WEAK_FUNC(sub_82A409DC);
PPC_FUNC_IMPL(__imp__sub_82A409DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A409E0"))) PPC_WEAK_FUNC(sub_82A409E0);
PPC_FUNC_IMPL(__imp__sub_82A409E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A409E8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// bge cr6,0x82a40af8
	if (!cr6.lt) goto loc_82A40AF8;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r27,244(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addis r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 65536;
	// lfs f31,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f30.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r29,r29,20120
	ctx.r29.s64 = ctx.r29.s64 + 20120;
loc_82A40A30:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x82a40a54
	if (!cr6.lt) goto loc_82A40A54;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a40a54
	if (!cr6.lt) goto loc_82A40A54;
	// mulli r11,r28,11
	ctx.r11.s64 = ctx.r28.s64 * 11;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82a40a58
	goto loc_82A40A58;
loc_82A40A54:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A40A58:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a40a70
	if (cr6.lt) goto loc_82A40A70;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a40a74
	if (cr6.lt) goto loc_82A40A74;
loc_82A40A70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A40A74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a40aec
	if (cr6.eq) goto loc_82A40AEC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a40a94
	if (cr6.lt) goto loc_82A40A94;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a40a98
	if (cr6.lt) goto loc_82A40A98;
loc_82A40A94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A40A98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a40ab8
	if (cr6.eq) goto loc_82A40AB8;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a40abc
	goto loc_82A40ABC;
loc_82A40AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A40ABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a40aec
	if (cr6.eq) goto loc_82A40AEC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r4,r11,1280
	ctx.r4.s64 = ctx.r11.s64 + 1280;
	// bl 0x825ca560
	ctx.lr = 0x82A40ADC;
	sub_825CA560(ctx, base);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// bgt cr6,0x82a40aec
	if (cr6.gt) goto loc_82A40AEC;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82a40b0c
	if (!cr6.gt) goto loc_82A40B0C;
loc_82A40AEC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82a40a30
	if (cr6.lt) goto loc_82A40A30;
loc_82A40AF8:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A40B0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A40B20"))) PPC_WEAK_FUNC(sub_82A40B20);
PPC_FUNC_IMPL(__imp__sub_82A40B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A40B28;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce778
	ctx.lr = 0x82A40B30;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// std r6,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r6.u64);
	// std r7,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r7.u64);
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// std r9,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r9.u64);
	// bge cr6,0x82a40cd0
	if (!cr6.lt) goto loc_82A40CD0;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bge cr6,0x82a40b7c
	if (!cr6.lt) goto loc_82A40B7C;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// b 0x82a40b84
	goto loc_82A40B84;
loc_82A40B7C:
	// fmr f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f13.f64;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_82A40B84:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r27,292(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r29,r29,20120
	ctx.r29.s64 = ctx.r29.s64 + 20120;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
loc_82A40BA8:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x82a40bcc
	if (!cr6.lt) goto loc_82A40BCC;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a40bcc
	if (!cr6.lt) goto loc_82A40BCC;
	// mulli r11,r28,11
	ctx.r11.s64 = ctx.r28.s64 * 11;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82a40bd0
	goto loc_82A40BD0;
loc_82A40BCC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A40BD0:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a40be8
	if (cr6.lt) goto loc_82A40BE8;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a40bec
	if (cr6.lt) goto loc_82A40BEC;
loc_82A40BE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A40BEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a40cc4
	if (cr6.eq) goto loc_82A40CC4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a40c0c
	if (cr6.lt) goto loc_82A40C0C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a40c10
	if (cr6.lt) goto loc_82A40C10;
loc_82A40C0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A40C10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a40c30
	if (cr6.eq) goto loc_82A40C30;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a40c34
	goto loc_82A40C34;
loc_82A40C30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A40C34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a40cc4
	if (cr6.eq) goto loc_82A40CC4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r10,1280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// lwz r9,1284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// lwz r8,1288(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// blt cr6,0x82a40cc4
	if (cr6.lt) goto loc_82A40CC4;
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// blt cr6,0x82a40cc4
	if (cr6.lt) goto loc_82A40CC4;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a5b1a0
	ctx.lr = 0x82A40C98;
	sub_82A5B1A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a40ce4
	if (!cr6.eq) goto loc_82A40CE4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a5b1a0
	ctx.lr = 0x82A40CBC;
	sub_82A5B1A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a40ce4
	if (!cr6.eq) goto loc_82A40CE4;
loc_82A40CC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82a40ba8
	if (cr6.lt) goto loc_82A40BA8;
loc_82A40CD0:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A40CE0;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A40CE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A40CF4;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A40CF8"))) PPC_WEAK_FUNC(sub_82A40CF8);
PPC_FUNC_IMPL(__imp__sub_82A40CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A40D00;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stb r5,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r5.u8);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82a40d30
	if (!cr6.eq) goto loc_82A40D30;
loc_82A40D24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A40D30:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82a40d24
	if (cr6.eq) goto loc_82A40D24;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82a40d24
	if (cr6.eq) goto loc_82A40D24;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a40d58
	if (cr6.lt) goto loc_82A40D58;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a40d5c
	if (cr6.lt) goto loc_82A40D5C;
loc_82A40D58:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A40D5C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a40d24
	if (cr6.eq) goto loc_82A40D24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a40d78
	if (!cr6.lt) goto loc_82A40D78;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a40da0
	goto loc_82A40DA0;
loc_82A40D78:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a40d88
	if (!cr6.lt) goto loc_82A40D88;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a40da0
	goto loc_82A40DA0;
loc_82A40D88:
	// li r10,22
	ctx.r10.s64 = 22;
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
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
loc_82A40DA0:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mulli r27,r30,11
	ctx.r27.s64 = ctx.r30.s64 * 11;
loc_82A40DB0:
	// add. r10,r27,r31
	ctx.r10.u64 = ctx.r27.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a40dc4
	if (cr0.lt) goto loc_82A40DC4;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a40dc8
	if (cr6.lt) goto loc_82A40DC8;
loc_82A40DC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A40DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a40e38
	if (cr6.eq) goto loc_82A40E38;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// sraw r9,r11,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r9.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a40e38
	if (cr6.eq) goto loc_82A40E38;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a40e38
	if (cr6.eq) goto loc_82A40E38;
	// lwz r10,1280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r9,1288(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// addi r5,r1,231
	ctx.r5.s64 = ctx.r1.s64 + 231;
	// lwz r7,1284(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82a48608
	ctx.lr = 0x82A40E2C;
	sub_82A48608(ctx, base);
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, xer);
	// bne cr6,0x82a40e38
	if (!cr6.eq) goto loc_82A40E38;
	// or r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 | ctx.r28.u64;
loc_82A40E38:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a40db0
	if (cr6.lt) goto loc_82A40DB0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A40E54"))) PPC_WEAK_FUNC(sub_82A40E54);
PPC_FUNC_IMPL(__imp__sub_82A40E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40E58"))) PPC_WEAK_FUNC(sub_82A40E58);
PPC_FUNC_IMPL(__imp__sub_82A40E58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40E8C"))) PPC_WEAK_FUNC(sub_82A40E8C);
PPC_FUNC_IMPL(__imp__sub_82A40E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40E90"))) PPC_WEAK_FUNC(sub_82A40E90);
PPC_FUNC_IMPL(__imp__sub_82A40E90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40EB0"))) PPC_WEAK_FUNC(sub_82A40EB0);
PPC_FUNC_IMPL(__imp__sub_82A40EB0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40EE4"))) PPC_WEAK_FUNC(sub_82A40EE4);
PPC_FUNC_IMPL(__imp__sub_82A40EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40EE8"))) PPC_WEAK_FUNC(sub_82A40EE8);
PPC_FUNC_IMPL(__imp__sub_82A40EE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40F08"))) PPC_WEAK_FUNC(sub_82A40F08);
PPC_FUNC_IMPL(__imp__sub_82A40F08) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40F14"))) PPC_WEAK_FUNC(sub_82A40F14);
PPC_FUNC_IMPL(__imp__sub_82A40F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40F18"))) PPC_WEAK_FUNC(sub_82A40F18);
PPC_FUNC_IMPL(__imp__sub_82A40F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// subfc r7,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// eqv r6,r9,r8
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r8.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40F38"))) PPC_WEAK_FUNC(sub_82A40F38);
PPC_FUNC_IMPL(__imp__sub_82A40F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// subfc r7,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// eqv r6,r8,r9
	ctx.r6.u64 = ~(ctx.r8.u64 ^ ctx.r9.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A40F58"))) PPC_WEAK_FUNC(sub_82A40F58);
PPC_FUNC_IMPL(__imp__sub_82A40F58) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,22
	ctx.r10.s64 = 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_82A40F8C:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a40f8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A40F8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fa8c8
	ctx.lr = 0x82A40FA4;
	sub_825FA8C8(ctx, base);
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

__attribute__((alias("__imp__sub_82A40FBC"))) PPC_WEAK_FUNC(sub_82A40FBC);
PPC_FUNC_IMPL(__imp__sub_82A40FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A40FC0"))) PPC_WEAK_FUNC(sub_82A40FC0);
PPC_FUNC_IMPL(__imp__sub_82A40FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stb r11,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r11.u8);
	// stb r11,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// stb r11,91(r3)
	PPC_STORE_U8(ctx.r3.u32 + 91, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A41060"))) PPC_WEAK_FUNC(sub_82A41060);
PPC_FUNC_IMPL(__imp__sub_82A41060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A41068;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r27,115
	ctx.r27.s64 = 115;
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stfs f31,36(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stb r30,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r30.u8);
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r30,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r30.u8);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// stb r30,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r30.u8);
	// stb r30,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r30.u8);
	// stfs f31,104(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f31,108(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stfs f31,104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stfs f31,140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x82a40f58
	ctx.lr = 0x82A41144;
	sub_82A40F58(ctx, base);
	// stfs f31,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f31,488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f31,492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f31,508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// bl 0x825fa938
	ctx.lr = 0x82A4117C;
	sub_825FA938(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r29.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// stw r27,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r27.u32);
	// stb r30,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r30.u8);
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// stw r8,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r8.u32);
	// li r7,48
	ctx.r7.s64 = 48;
	// stw r28,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r28.u32);
	// stw r29,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r29.u32);
	// stw r9,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r9.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// stw r28,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r28.u32);
	// stw r29,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r29.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r28,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r28.u32);
	// stw r7,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r7.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stb r30,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r30.u8);
	// bl 0x82a40fc0
	ctx.lr = 0x82A411D8;
	sub_82A40FC0(ctx, base);
	// stfs f31,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// addi r11,r31,720
	ctx.r11.s64 = ctx.r31.s64 + 720;
	// stfs f31,728(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// stfs f31,732(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stfs f31,740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stfs f31,744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stfs f31,748(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// stfs f31,724(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// stfs f31,728(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// stfs f31,732(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
	// stw r29,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r29.u32);
	// stfs f31,740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 740, temp.u32);
	// addi r29,r31,768
	ctx.r29.s64 = ctx.r31.s64 + 768;
	// stfs f31,744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stfs f31,748(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// stw r30,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r30.u32);
	// stw r30,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r30.u32);
	// stfs f31,756(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 756, temp.u32);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A41234:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82600e10
	ctx.lr = 0x82A4123C;
	sub_82600E10(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,812
	ctx.r29.s64 = ctx.r29.s64 + 812;
	// bge 0x82a41234
	if (!cr0.lt) goto loc_82A41234;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3fd18
	ctx.lr = 0x82A41250;
	sub_82A3FD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A41260"))) PPC_WEAK_FUNC(sub_82A41260);
PPC_FUNC_IMPL(__imp__sub_82A41260) {
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
	ctx.lr = 0x82A41268;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A4127C:
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stbx r31,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r31,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r31.u8);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stb r31,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r31.u8);
	// blt cr6,0x82a4127c
	if (cr6.lt) goto loc_82A4127C;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82601088
	ctx.lr = 0x82A412AC;
	sub_82601088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r28,136
	ctx.r3.s64 = ctx.r28.s64 + 136;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,148(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 148, temp.u32);
	// stfs f31,152(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 152, temp.u32);
	// stfs f31,156(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 156, temp.u32);
	// bl 0x825fae68
	ctx.lr = 0x82A412C8;
	sub_825FAE68(ctx, base);
	// addi r3,r28,180
	ctx.r3.s64 = ctx.r28.s64 + 180;
	// stfs f31,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 192, temp.u32);
	// stfs f31,196(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 196, temp.u32);
	// stfs f31,200(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 200, temp.u32);
	// bl 0x825fae68
	ctx.lr = 0x82A412DC;
	sub_825FAE68(ctx, base);
	// addi r30,r28,224
	ctx.r30.s64 = ctx.r28.s64 + 224;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r29,255
	ctx.r29.s64 = 255;
loc_82A412E8:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,4000
	ctx.r6.s64 = ctx.r11.s64 + 4000;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x823fca98
	ctx.lr = 0x82A41300;
	sub_823FCA98(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stb r31,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r31.u8);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A41324:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stwu r31,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a41324
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A41324;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// bge 0x82a412e8
	if (!cr0.lt) goto loc_82A412E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a3ff60
	ctx.lr = 0x82A41350;
	sub_82A3FF60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A41360"))) PPC_WEAK_FUNC(sub_82A41360);
PPC_FUNC_IMPL(__imp__sub_82A41360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A41368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r29,r3,104
	ctx.r29.s64 = ctx.r3.s64 + 104;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stb r30,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r30.u8);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// stb r30,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r30.u8);
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// stb r30,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bl 0x826010e0
	ctx.lr = 0x82A41424;
	sub_826010E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x825faec8
	ctx.lr = 0x82A41430;
	sub_825FAEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4143C"))) PPC_WEAK_FUNC(sub_82A4143C);
PPC_FUNC_IMPL(__imp__sub_82A4143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A41440"))) PPC_WEAK_FUNC(sub_82A41440);
PPC_FUNC_IMPL(__imp__sub_82A41440) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4145C"))) PPC_WEAK_FUNC(sub_82A4145C);
PPC_FUNC_IMPL(__imp__sub_82A4145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A41460"))) PPC_WEAK_FUNC(sub_82A41460);
PPC_FUNC_IMPL(__imp__sub_82A41460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A41468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82A41478:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r6,r11,4448
	ctx.r6.s64 = ctx.r11.s64 + 4448;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823fca98
	ctx.lr = 0x82A41490;
	sub_823FCA98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825faf60
	ctx.lr = 0x82A41498;
	sub_825FAF60(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// bge 0x82a41478
	if (!cr0.lt) goto loc_82A41478;
	// addi r31,r29,352
	ctx.r31.s64 = ctx.r29.s64 + 352;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A414AC:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r6,r11,5184
	ctx.r6.s64 = ctx.r11.s64 + 5184;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A414C4;
	sub_823FCA98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a401a0
	ctx.lr = 0x82A414CC;
	sub_82A401A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 + 148;
	// bge 0x82a414ac
	if (!cr0.lt) goto loc_82A414AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a40200
	ctx.lr = 0x82A414E0;
	sub_82A40200(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A414EC"))) PPC_WEAK_FUNC(sub_82A414EC);
PPC_FUNC_IMPL(__imp__sub_82A414EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A414F0"))) PPC_WEAK_FUNC(sub_82A414F0);
PPC_FUNC_IMPL(__imp__sub_82A414F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A41500:
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a41500
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A41500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A41510"))) PPC_WEAK_FUNC(sub_82A41510);
PPC_FUNC_IMPL(__imp__sub_82A41510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A41518;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A41528:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a40410
	ctx.lr = 0x82A41530;
	sub_82A40410(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// bge 0x82a41528
	if (!cr0.lt) goto loc_82A41528;
	// addi r29,r27,180
	ctx.r29.s64 = ctx.r27.s64 + 180;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r30,r29,104
	ctx.r30.s64 = ctx.r29.s64 + 104;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A4154C:
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,5360
	ctx.r6.s64 = ctx.r11.s64 + 5360;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A41564;
	sub_823FCA98(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82A4156C:
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A41578:
	// stw r31,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r31.u32);
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a41578
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A41578;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// bne 0x82a4156c
	if (!cr0.eq) goto loc_82A4156C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4c710
	ctx.lr = 0x82A41598;
	sub_82A4C710(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,264
	ctx.r29.s64 = ctx.r29.s64 + 264;
	// addi r30,r30,264
	ctx.r30.s64 = ctx.r30.s64 + 264;
	// bge 0x82a4154c
	if (!cr0.lt) goto loc_82A4154C;
	// addi r9,r27,708
	ctx.r9.s64 = ctx.r27.s64 + 708;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82A415B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82A415B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r31,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u16);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82a415b8
	if (cr6.lt) goto loc_82A415B8;
	// sth r31,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r31.u16);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bge 0x82a415b0
	if (!cr0.lt) goto loc_82A415B0;
	// addi r3,r27,724
	ctx.r3.s64 = ctx.r27.s64 + 724;
	// bl 0x82a403a8
	ctx.lr = 0x82A415E8;
	sub_82A403A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a404b8
	ctx.lr = 0x82A415F0;
	sub_82A404B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A415FC"))) PPC_WEAK_FUNC(sub_82A415FC);
PPC_FUNC_IMPL(__imp__sub_82A415FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A41600"))) PPC_WEAK_FUNC(sub_82A41600);
PPC_FUNC_IMPL(__imp__sub_82A41600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A41608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x826318d0
	ctx.lr = 0x82A41618;
	sub_826318D0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x826318d0
	ctx.lr = 0x82A41620;
	sub_826318D0(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,424
	ctx.r11.s64 = ctx.r31.s64 + 424;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A41634:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a41634
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A41634;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x826318d0
	ctx.lr = 0x82A41644;
	sub_826318D0(ctx, base);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// bl 0x826318d0
	ctx.lr = 0x82A4164C;
	sub_826318D0(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,912
	ctx.r11.s64 = ctx.r31.s64 + 912;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A41660:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a41660
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A41660;
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// bl 0x826318d0
	ctx.lr = 0x82A41670;
	sub_826318D0(ctx, base);
	// addi r3,r31,1200
	ctx.r3.s64 = ctx.r31.s64 + 1200;
	// bl 0x826318d0
	ctx.lr = 0x82A41678;
	sub_826318D0(ctx, base);
	// addi r30,r31,1400
	ctx.r30.s64 = ctx.r31.s64 + 1400;
	// li r29,21
	ctx.r29.s64 = 21;
loc_82A41680:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r6,r11,-23064
	ctx.r6.s64 = ctx.r11.s64 + -23064;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A41698;
	sub_823FCA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cdbb0
	ctx.lr = 0x82A416A0;
	sub_825CDBB0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,200
	ctx.r30.s64 = ctx.r30.s64 + 200;
	// bge 0x82a41680
	if (!cr0.lt) goto loc_82A41680;
	// li r10,484
	ctx.r10.s64 = 484;
	// addi r11,r31,5800
	ctx.r11.s64 = ctx.r31.s64 + 5800;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A416C0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a416c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A416C0;
	// addi r3,r31,7736
	ctx.r3.s64 = ctx.r31.s64 + 7736;
	// bl 0x826318d0
	ctx.lr = 0x82A416D0;
	sub_826318D0(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,7936
	ctx.r11.s64 = ctx.r31.s64 + 7936;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A416E4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a416e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A416E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a40638
	ctx.lr = 0x82A416F4;
	sub_82A40638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A41700"))) PPC_WEAK_FUNC(sub_82A41700);
PPC_FUNC_IMPL(__imp__sub_82A41700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A41708;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r7,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bne cr6,0x82a41758
	if (!cr6.eq) goto loc_82A41758;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A41758:
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// lfs f12,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// lfs f13,-11316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11316);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82646fc0
	ctx.lr = 0x82A417CC;
	sub_82646FC0(ctx, base);
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f1,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a5af98
	ctx.lr = 0x82A41814;
	sub_82A5AF98(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a41844
	if (cr6.eq) goto loc_82A41844;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82A41844:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A41860"))) PPC_WEAK_FUNC(sub_82A41860);
PPC_FUNC_IMPL(__imp__sub_82A41860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a419bc
	if (cr6.eq) goto loc_82A419BC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a419bc
	if (!cr6.eq) goto loc_82A419BC;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfd f9,-32(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f12,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lwz r7,-28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// fmuls f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f10,-32(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r5,-32(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f11,-24(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lwz r6,-24(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r6,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bne cr6,0x82a418f4
	if (!cr6.eq) goto loc_82A418F4;
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82a418f4
	if (!cr6.eq) goto loc_82A418F4;
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x82a418f8
	if (cr6.eq) goto loc_82A418F8;
loc_82A418F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A418F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f8,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4194c
	if (cr6.eq) goto loc_82A4194C;
	// lfs f7,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x82a41934
	if (!cr6.eq) goto loc_82A41934;
	// lfs f7,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bne cr6,0x82a41934
	if (!cr6.eq) goto loc_82A41934;
	// lfs f7,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f7,f9
	cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// beq cr6,0x82a41938
	if (cr6.eq) goto loc_82A41938;
loc_82A41934:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A41938:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4194c
	if (cr6.eq) goto loc_82A4194C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A4194C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a41970
	if (!cr6.eq) goto loc_82A41970;
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bne cr6,0x82a41970
	if (!cr6.eq) goto loc_82A41970;
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f9
	cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// beq cr6,0x82a41974
	if (cr6.eq) goto loc_82A41974;
loc_82A41970:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A41974:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a419bc
	if (cr6.eq) goto loc_82A419BC;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82a419a8
	if (!cr6.eq) goto loc_82A419A8;
	// lfs f0,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82a419a8
	if (!cr6.eq) goto loc_82A419A8;
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x82a419ac
	if (cr6.eq) goto loc_82A419AC;
loc_82A419A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A419AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A419BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A419C4"))) PPC_WEAK_FUNC(sub_82A419C4);
PPC_FUNC_IMPL(__imp__sub_82A419C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A419C8"))) PPC_WEAK_FUNC(sub_82A419C8);
PPC_FUNC_IMPL(__imp__sub_82A419C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// addi r11,r11,23204
	ctx.r11.s64 = ctx.r11.s64 + 23204;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a419f4
	if (!cr6.lt) goto loc_82A419F4;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a41a00
	goto loc_82A41A00;
loc_82A419F4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a41a00
	if (cr6.lt) goto loc_82A41A00;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A41A00:
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a41a18
	if (!cr6.lt) goto loc_82A41A18;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a41a24
	goto loc_82A41A24;
loc_82A41A18:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a41a24
	if (cr6.lt) goto loc_82A41A24;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A41A24:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a41a34
	if (!cr6.lt) goto loc_82A41A34;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a41a40
	goto loc_82A41A40;
loc_82A41A34:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a41a40
	if (cr6.lt) goto loc_82A41A40;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A41A40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82a41a5c
	if (!cr6.lt) goto loc_82A41A5C;
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// b 0x82a41a68
	goto loc_82A41A68;
loc_82A41A5C:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a41a68
	if (cr6.lt) goto loc_82A41A68;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
loc_82A41A68:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82a41a7c
	if (!cr6.lt) goto loc_82A41A7C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a41a88
	goto loc_82A41A88;
loc_82A41A7C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a41a88
	if (cr6.lt) goto loc_82A41A88;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A41A88:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a41aa0
	if (!cr6.lt) goto loc_82A41AA0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A41AA0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a41aac
	if (cr6.lt) goto loc_82A41AAC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A41AAC:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A41AB4"))) PPC_WEAK_FUNC(sub_82A41AB4);
PPC_FUNC_IMPL(__imp__sub_82A41AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A41AB8"))) PPC_WEAK_FUNC(sub_82A41AB8);
PPC_FUNC_IMPL(__imp__sub_82A41AB8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r10,r11,23208
	ctx.r10.s64 = ctx.r11.s64 + 23208;
	// lfs f9,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// bge cr6,0x82a41af4
	if (!cr6.lt) goto loc_82A41AF4;
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// b 0x82a41b00
	goto loc_82A41B00;
loc_82A41AF4:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82a41b00
	if (cr6.lt) goto loc_82A41B00;
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
loc_82A41B00:
	// lfs f12,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a41b18
	if (!cr6.lt) goto loc_82A41B18;
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// b 0x82a41b24
	goto loc_82A41B24;
loc_82A41B18:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82a41b24
	if (cr6.lt) goto loc_82A41B24;
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
loc_82A41B24:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-9984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a41c20
	if (cr6.lt) goto loc_82A41C20;
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a41b6c
	if (!cr6.lt) goto loc_82A41B6C;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a41b9c
	if (!cr6.lt) goto loc_82A41B9C;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a41b9c
	if (!cr6.lt) goto loc_82A41B9C;
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
loc_82A41B6C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a41c20
	if (!cr6.lt) goto loc_82A41C20;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a41b9c
	if (!cr6.lt) goto loc_82A41B9C;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a41b9c
	if (!cr6.lt) goto loc_82A41B9C;
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
loc_82A41B9C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a419c8
	ctx.lr = 0x82A41BAC;
	sub_82A419C8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// lfs f0,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a41bcc
	if (cr6.gt) goto loc_82A41BCC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A41BCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a41be0
	if (cr6.eq) goto loc_82A41BE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,5068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
loc_82A41BE0:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a41c08
	if (!cr6.gt) goto loc_82A41C08;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f0,f13,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fnmsubs f0,f13,f9,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f9.f64 - ctx.f0.f64)));
loc_82A41C08:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-8332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8332);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a41c24
	if (cr6.lt) goto loc_82A41C24;
loc_82A41C20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A41C24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A41C34"))) PPC_WEAK_FUNC(sub_82A41C34);
PPC_FUNC_IMPL(__imp__sub_82A41C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A41C38"))) PPC_WEAK_FUNC(sub_82A41C38);
PPC_FUNC_IMPL(__imp__sub_82A41C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A41C40;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// blt cr6,0x82a41c84
	if (cr6.lt) goto loc_82A41C84;
loc_82A41C70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82A41C84:
	// cmplwi cr6,r23,22
	cr6.compare<uint32_t>(ctx.r23.u32, 22, xer);
	// bge cr6,0x82a41c70
	if (!cr6.lt) goto loc_82A41C70;
	// cmpw cr6,r29,r23
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, xer);
	// beq cr6,0x82a41c70
	if (cr6.eq) goto loc_82A41C70;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// bge cr6,0x82a41c70
	if (!cr6.lt) goto loc_82A41C70;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a41c70
	if (cr6.eq) goto loc_82A41C70;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82a41c70
	if (cr6.eq) goto loc_82A41C70;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a41c70
	if (cr6.eq) goto loc_82A41C70;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt cr6,0x82a41cc8
	if (cr6.lt) goto loc_82A41CC8;
	// cmpwi cr6,r23,22
	cr6.compare<int32_t>(ctx.r23.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a41ccc
	if (cr6.lt) goto loc_82A41CCC;
loc_82A41CC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A41CCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a41c70
	if (cr6.eq) goto loc_82A41C70;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r31,r11,1280
	ctx.r31.s64 = ctx.r11.s64 + 1280;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825ca9d8
	ctx.lr = 0x82A41CF4;
	sub_825CA9D8(ctx, base);
	// lfs f13,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f31,f5,f5
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a41c70
	if (cr6.lt) goto loc_82A41C70;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x825cb988
	ctx.lr = 0x82A41D40;
	sub_825CB988(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r28,r10,12384
	ctx.r28.u64 = ctx.r10.u64 | 12384;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// lfs f30,-7352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f30.f64 = double(temp.f32);
	// bge cr6,0x82a41d70
	if (!cr6.lt) goto loc_82A41D70;
loc_82A41D5C:
	// mulli r11,r22,11
	ctx.r11.s64 = ctx.r22.s64 * 11;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x82a41d74
	goto loc_82A41D74;
loc_82A41D70:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A41D74:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a41e44
	if (cr6.eq) goto loc_82A41E44;
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, xer);
	// beq cr6,0x82a41e44
	if (cr6.eq) goto loc_82A41E44;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a41d9c
	if (cr6.lt) goto loc_82A41D9C;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a41da0
	if (cr6.lt) goto loc_82A41DA0;
loc_82A41D9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A41DA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a41e44
	if (cr6.eq) goto loc_82A41E44;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a41dc0
	if (cr6.lt) goto loc_82A41DC0;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a41dc4
	if (cr6.lt) goto loc_82A41DC4;
loc_82A41DC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A41DC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a41de4
	if (cr6.eq) goto loc_82A41DE4;
	// add r11,r30,r21
	ctx.r11.u64 = ctx.r30.u64 + ctx.r21.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a41de8
	goto loc_82A41DE8;
loc_82A41DE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A41DE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a41e44
	if (cr6.eq) goto loc_82A41E44;
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// add r31,r25,r28
	ctx.r31.u64 = ctx.r25.u64 + ctx.r28.u64;
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825ca600
	ctx.lr = 0x82A41E0C;
	sub_825CA600(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a41e50
	if (!cr6.lt) goto loc_82A41E50;
	// mulli r11,r29,88
	ctx.r11.s64 = ctx.r29.s64 * 88;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,5800
	ctx.r11.s64 = ctx.r11.s64 + 5800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfsx f1,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825cbd90
	ctx.lr = 0x82A41E30;
	sub_825CBD90(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x82a41e44
	if (!cr6.lt) goto loc_82A41E44;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
loc_82A41E44:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// blt cr6,0x82a41d5c
	if (cr6.lt) goto loc_82A41D5C;
loc_82A41E50:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A41E64"))) PPC_WEAK_FUNC(sub_82A41E64);
PPC_FUNC_IMPL(__imp__sub_82A41E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A41E68"))) PPC_WEAK_FUNC(sub_82A41E68);
PPC_FUNC_IMPL(__imp__sub_82A41E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// lfs f0,-23844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a41e84
	if (!cr6.eq) goto loc_82A41E84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,5068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
loc_82A41E84:
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r11,r11,23208
	ctx.r11.s64 = ctx.r11.s64 + 23208;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a41ec0
	if (!cr6.gt) goto loc_82A41EC0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f0,f13,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fnmsubs f0,f13,f11,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f0.f64)));
loc_82A41EC0:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A41EE0"))) PPC_WEAK_FUNC(sub_82A41EE0);
PPC_FUNC_IMPL(__imp__sub_82A41EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// lfs f0,-23844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a41efc
	if (!cr6.eq) goto loc_82A41EFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,5068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
loc_82A41EFC:
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r11,r11,23208
	ctx.r11.s64 = ctx.r11.s64 + 23208;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a41f38
	if (!cr6.gt) goto loc_82A41F38;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f0,f13,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fnmsubs f0,f13,f11,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f0.f64)));
loc_82A41F38:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,21812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A41F58"))) PPC_WEAK_FUNC(sub_82A41F58);
PPC_FUNC_IMPL(__imp__sub_82A41F58) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,22
	ctx.r10.s64 = 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,104
	ctx.r11.s64 = ctx.r3.s64 + 104;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A41F80:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a41f80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A41F80;
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x82a49378
	ctx.lr = 0x82A41F98;
	sub_82A49378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a40048
	ctx.lr = 0x82A41FA0;
	sub_82A40048(ctx, base);
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

__attribute__((alias("__imp__sub_82A41FB8"))) PPC_WEAK_FUNC(sub_82A41FB8);
PPC_FUNC_IMPL(__imp__sub_82A41FB8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,5
	ctx.r7.s64 = 5;
loc_82A41FF0:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stwu r10,56(r11)
	ea = 56 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a41ff0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A41FF0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82a41f58
	ctx.lr = 0x82A42040;
	sub_82A41F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a40128
	ctx.lr = 0x82A42048;
	sub_82A40128(ctx, base);
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

__attribute__((alias("__imp__sub_82A42060"))) PPC_WEAK_FUNC(sub_82A42060);
PPC_FUNC_IMPL(__imp__sub_82A42060) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// bl 0x82a40258
	ctx.lr = 0x82A420B8;
	sub_82A40258(ctx, base);
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

__attribute__((alias("__imp__sub_82A420D0"))) PPC_WEAK_FUNC(sub_82A420D0);
PPC_FUNC_IMPL(__imp__sub_82A420D0) {
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
	// bl 0x825fa868
	ctx.lr = 0x82A420E8;
	sub_825FA868(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82a41060
	ctx.lr = 0x82A420F0;
	sub_82A41060(ctx, base);
	// addi r3,r31,2432
	ctx.r3.s64 = ctx.r31.s64 + 2432;
	// bl 0x82a41260
	ctx.lr = 0x82A420F8;
	sub_82A41260(ctx, base);
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// bl 0x82a41fb8
	ctx.lr = 0x82A42100;
	sub_82A41FB8(ctx, base);
	// addi r3,r31,4312
	ctx.r3.s64 = ctx.r31.s64 + 4312;
	// bl 0x82a41360
	ctx.lr = 0x82A42108;
	sub_82A41360(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r11.u32);
	// stw r9,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r9.u32);
	// addi r3,r31,4548
	ctx.r3.s64 = ctx.r31.s64 + 4548;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r10.u32);
	// stfs f0,4512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4512, temp.u32);
	// stw r11,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r11.u32);
	// stw r11,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r11.u32);
	// stfs f0,4528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4528, temp.u32);
	// stfs f0,4532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4532, temp.u32);
	// stb r11,4524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4524, ctx.r11.u8);
	// stfs f0,4536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4536, temp.u32);
	// sth r11,4540(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4540, ctx.r11.u16);
	// sth r11,4542(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4542, ctx.r11.u16);
	// stw r11,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r11.u32);
	// stw r11,4492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4492, ctx.r11.u32);
	// stw r11,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r11.u32);
	// stfs f0,4512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4512, temp.u32);
	// stw r10,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r10.u32);
	// addi r10,r31,4488
	ctx.r10.s64 = ctx.r31.s64 + 4488;
	// stw r9,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r9.u32);
	// stw r11,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r11.u32);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// stw r11,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r11.u32);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r11,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r11.u32);
	// stfs f0,4528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4528, temp.u32);
	// stfs f0,4532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4532, temp.u32);
	// stb r11,4524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4524, ctx.r11.u8);
	// stfs f0,4536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4536, temp.u32);
	// sth r11,4540(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4540, ctx.r11.u16);
	// sth r11,4542(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4542, ctx.r11.u16);
	// stw r11,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r11.u32);
	// bl 0x82a41460
	ctx.lr = 0x82A421A0;
	sub_82A41460(ctx, base);
	// addi r3,r31,5196
	ctx.r3.s64 = ctx.r31.s64 + 5196;
	// bl 0x82a42060
	ctx.lr = 0x82A421A8;
	sub_82A42060(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r31,5360
	ctx.r3.s64 = ctx.r31.s64 + 5360;
	// addi r6,r7,21716
	ctx.r6.s64 = ctx.r7.s64 + 21716;
	// stw r6,5360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5360, ctx.r6.u32);
	// bl 0x825fac70
	ctx.lr = 0x82A421BC;
	sub_825FAC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a402d8
	ctx.lr = 0x82A421C4;
	sub_82A402D8(ctx, base);
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

__attribute__((alias("__imp__sub_82A421DC"))) PPC_WEAK_FUNC(sub_82A421DC);
PPC_FUNC_IMPL(__imp__sub_82A421DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A421E0"))) PPC_WEAK_FUNC(sub_82A421E0);
PPC_FUNC_IMPL(__imp__sub_82A421E0) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a41ab8
	ctx.lr = 0x82A42208;
	sub_82A41AB8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a422d8
	if (cr6.eq) goto loc_82A422D8;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a42278
	if (cr6.eq) goto loc_82A42278;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,68(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f8,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,72(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f7,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,76(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_82A42278:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f10,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,60(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x82a422d8
	if (!cr6.gt) goto loc_82A422D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82A422D8:
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

__attribute__((alias("__imp__sub_82A422EC"))) PPC_WEAK_FUNC(sub_82A422EC);
PPC_FUNC_IMPL(__imp__sub_82A422EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A422F0"))) PPC_WEAK_FUNC(sub_82A422F0);
PPC_FUNC_IMPL(__imp__sub_82A422F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82A422F8;
	__savegprlr_16(ctx, base);
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	ctx.r11.s64 = 255;
	// std r6,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r6.u64);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a42348
	if (!cr6.eq) goto loc_82A42348;
loc_82A42340:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x82a42534
	goto loc_82A42534;
loc_82A42348:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a42340
	if (cr6.eq) goto loc_82A42340;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a42340
	if (cr6.eq) goto loc_82A42340;
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a42340
	if (cr6.eq) goto loc_82A42340;
	// lwz r26,364(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a42340
	if (cr6.eq) goto loc_82A42340;
	// lwz r16,372(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x82a42340
	if (cr6.eq) goto loc_82A42340;
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// bge cr6,0x82a42340
	if (!cr6.lt) goto loc_82A42340;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a42398
	if (cr6.lt) goto loc_82A42398;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4239c
	if (cr6.lt) goto loc_82A4239C;
loc_82A42398:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A4239C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a42340
	if (cr6.eq) goto loc_82A42340;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// bge cr6,0x82a42340
	if (!cr6.lt) goto loc_82A42340;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,312(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cntlzw r10,r22
	ctx.r10.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// rlwinm r21,r10,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mulli r18,r22,11
	ctx.r18.s64 = ctx.r22.s64 * 11;
	// lwz r8,1272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1272);
	// lfs f31,21812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21812);
	ctx.f31.f64 = double(temp.f32);
	// ori r23,r10,12384
	ctx.r23.u64 = ctx.r10.u64 | 12384;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
loc_82A423E8:
	// add r31,r18,r20
	ctx.r31.u64 = ctx.r18.u64 + ctx.r20.u64;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// bge cr6,0x82a42520
	if (!cr6.lt) goto loc_82A42520;
	// srawi r10,r31,31
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// rlwinm r9,r19,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0x1;
	// subfc r8,r19,r31
	xer.ca = ctx.r31.u32 >= ctx.r19.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r19.s64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// adde r11,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a42520
	if (cr6.eq) goto loc_82A42520;
	// srawi r10,r31,31
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// rlwinm r9,r19,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0x1;
	// subfc r8,r19,r31
	xer.ca = ctx.r31.u32 >= ctx.r19.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r19.s64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// adde r11,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a42448
	if (cr6.eq) goto loc_82A42448;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a4244c
	goto loc_82A4244C;
loc_82A42448:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A4244C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a42520
	if (cr6.eq) goto loc_82A42520;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a42520
	if (cr6.eq) goto loc_82A42520;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r16
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a42520
	if (cr6.eq) goto loc_82A42520;
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a42520
	if (cr6.eq) goto loc_82A42520;
	// mulli r9,r30,88
	ctx.r9.s64 = ctx.r30.s64 * 88;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// add r10,r28,r23
	ctx.r10.u64 = ctx.r28.u64 + ctx.r23.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,5800
	ctx.r10.s64 = ctx.r10.s64 + 5800;
	// lfsx f2,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x82A42498;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a42520
	if (!cr6.lt) goto loc_82A42520;
	// lbz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 84);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// blt cr6,0x82a42520
	if (cr6.lt) goto loc_82A42520;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rldicr r5,r25,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a41c38
	ctx.lr = 0x82A424D4;
	sub_82A41C38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a42520
	if (!cr6.eq) goto loc_82A42520;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rldicr r5,r25,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a41c38
	ctx.lr = 0x82A42504;
	sub_82A41C38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a42520
	if (!cr6.eq) goto loc_82A42520;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a40770
	ctx.lr = 0x82A42520;
	sub_82A40770(ctx, base);
loc_82A42520:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpwi cr6,r20,11
	cr6.compare<int32_t>(ctx.r20.s32, 11, xer);
	// blt cr6,0x82a423e8
	if (cr6.lt) goto loc_82A423E8;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_82A42534:
	// std r11,0(r17)
	PPC_STORE_U64(ctx.r17.u32 + 0, ctx.r11.u64);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4254C"))) PPC_WEAK_FUNC(sub_82A4254C);
PPC_FUNC_IMPL(__imp__sub_82A4254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A42550"))) PPC_WEAK_FUNC(sub_82A42550);
PPC_FUNC_IMPL(__imp__sub_82A42550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A42558;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce770
	ctx.lr = 0x82A42560;
	__savefpr_26(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,560(r1)
	PPC_STORE_U64(ctx.r1.u32 + 560, ctx.r4.u64);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// std r5,568(r1)
	PPC_STORE_U64(ctx.r1.u32 + 568, ctx.r5.u64);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x825d6880
	ctx.lr = 0x82A4258C;
	sub_825D6880(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825cea80
	ctx.lr = 0x82A42594;
	sub_825CEA80(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825d6880
	ctx.lr = 0x82A4259C;
	sub_825D6880(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x825cea80
	ctx.lr = 0x82A425A4;
	sub_825CEA80(ctx, base);
	// extsb r9,r31
	ctx.r9.s64 = ctx.r31.s8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,560(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	ctx.f11.f64 = double(temp.f32);
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// lfs f13,24552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24552);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fcmpu cr6,f9,f10
	cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bge cr6,0x82a425e0
	if (!cr6.lt) goto loc_82A425E0;
loc_82A425D8:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// b 0x82a42b88
	goto loc_82A42B88;
loc_82A425E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f13,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f29,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f26,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f26.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// fmuls f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// bl 0x825ca9d8
	ctx.lr = 0x82A42638;
	sub_825CA9D8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825ca9d8
	ctx.lr = 0x82A42648;
	sub_825CA9D8(ctx, base);
	// lwz r28,620(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r4,568(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ld r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82a409e0
	ctx.lr = 0x82A42678;
	sub_82A409E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a4268c
	if (cr6.lt) goto loc_82A4268C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a42690
	if (cr6.lt) goto loc_82A42690;
loc_82A4268C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A42690:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a42790
	if (!cr6.eq) goto loc_82A42790;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f13,568(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x825ca9d8
	ctx.lr = 0x82A426C4;
	sub_825CA9D8(ctx, base);
	// lfs f27,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f0,f11,f27
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,23204
	ctx.r9.s64 = ctx.r11.s64 + 23204;
	// lfs f30,23204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23204);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x82a426fc
	if (!cr6.gt) goto loc_82A426FC;
	// fsel f13,f0,f29,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f29.f64 : ctx.f26.f64;
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
loc_82A426FC:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f28,-6664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6664);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82a42728
	if (cr6.lt) goto loc_82A42728;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825cb910
	ctx.lr = 0x82A4271C;
	sub_825CB910(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82a4272c
	if (!cr6.lt) goto loc_82A4272C;
loc_82A42728:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4272C:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82a4274c
	if (!cr6.gt) goto loc_82A4274C;
	// fsel f13,f0,f29,f26
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f29.f64 : ctx.f26.f64;
	// fnmsubs f0,f13,f30,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
loc_82A4274C:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-9984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9984);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a42768
	if (cr6.gt) goto loc_82A42768;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A42768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a42b84
	if (cr6.eq) goto loc_82A42B84;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a42b84
	if (!cr6.eq) goto loc_82A42B84;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// b 0x82a42b6c
	goto loc_82A42B6C;
loc_82A42790:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a425d8
	if (cr6.eq) goto loc_82A425D8;
	// lwz r10,1284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r8,1280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r7,1288(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// stfs f29,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f29,196(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// stfs f29,200(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stfs f29,204(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f29,208(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stfs f29,212(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f1,-11316(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11316);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5b7e0
	ctx.lr = 0x82A427EC;
	sub_82A5B7E0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a425d8
	if (cr6.eq) goto loc_82A425D8;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825ca9d8
	ctx.lr = 0x82A42808;
	sub_825CA9D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x825ca9d8
	ctx.lr = 0x82A42820;
	sub_825CA9D8(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r23,r11,23204
	ctx.r23.s64 = ctx.r11.s64 + 23204;
	// lfs f10,23204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23204);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f11,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82a42854
	if (!cr6.gt) goto loc_82A42854;
	// fsel f12,f0,f30,f26
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f26.f64;
	// fnmsubs f0,f12,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f10.f64 - ctx.f0.f64)));
loc_82A42854:
	// fabs f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f28,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f12,f28
	cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// blt cr6,0x82a4286c
	if (cr6.lt) goto loc_82A4286C;
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
loc_82A4286C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a42880
	if (!cr6.gt) goto loc_82A42880;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x82a42884
	goto loc_82A42884;
loc_82A42880:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82A42884:
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x82a428a0
	if (!cr6.gt) goto loc_82A428A0;
	// fsel f9,f0,f30,f26
	ctx.f9.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f26.f64;
	// fnmsubs f0,f9,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f9.f64 * ctx.f10.f64 - ctx.f0.f64)));
loc_82A428A0:
	// fabs f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f28
	cr6.compare(ctx.f9.f64, ctx.f28.f64);
	// blt cr6,0x82a428b0
	if (cr6.lt) goto loc_82A428B0;
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
loc_82A428B0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82a42a08
	if (!cr6.lt) goto loc_82A42A08;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a428c8
	if (cr6.lt) goto loc_82A428C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A428C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a428e0
	if (cr6.eq) goto loc_82A428E0;
	// stfs f12,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x82a428e8
	goto loc_82A428E8;
loc_82A428E0:
	// stfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82A428E8:
	// lwz r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ld r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a409e0
	ctx.lr = 0x82A4291C;
	sub_82A409E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a42930
	if (cr6.lt) goto loc_82A42930;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a42934
	if (cr6.lt) goto loc_82A42934;
loc_82A42930:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A42934:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a42a00
	if (!cr6.eq) goto loc_82A42A00;
	// lwz r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ld r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a41700
	ctx.lr = 0x82A42960;
	sub_82A41700(ctx, base);
	// lwz r10,568(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ld r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a41700
	ctx.lr = 0x82A42980;
	sub_82A41700(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,568(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x82a40b20
	ctx.lr = 0x82A429B8;
	sub_82A40B20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a429cc
	if (cr6.lt) goto loc_82A429CC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a429d0
	if (cr6.lt) goto loc_82A429D0;
loc_82A429CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A429D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a42a00
	if (!cr6.eq) goto loc_82A42A00;
	// lwz r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82a421e0
	ctx.lr = 0x82A42A00;
	sub_82A421E0(ctx, base);
loc_82A42A00:
	// lfs f10,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
loc_82A42A08:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82a42a24
	if (!cr6.gt) goto loc_82A42A24;
	// fsel f12,f0,f30,f26
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f26.f64;
	// fnmsubs f0,f12,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f10.f64 - ctx.f0.f64)));
loc_82A42A24:
	// fabs f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f28
	cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// blt cr6,0x82a42a34
	if (cr6.lt) goto loc_82A42A34;
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
loc_82A42A34:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82a42b84
	if (!cr6.gt) goto loc_82A42B84;
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a42a4c
	if (cr6.lt) goto loc_82A42A4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A42A4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a42a64
	if (cr6.eq) goto loc_82A42A64;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x82a42a6c
	goto loc_82A42A6C;
loc_82A42A64:
	// stfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82A42A6C:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ld r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a409e0
	ctx.lr = 0x82A42AA0;
	sub_82A409E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a42ab4
	if (cr6.lt) goto loc_82A42AB4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a42ab8
	if (cr6.lt) goto loc_82A42AB8;
loc_82A42AB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A42AB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a42b84
	if (!cr6.eq) goto loc_82A42B84;
	// lwz r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ld r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a41700
	ctx.lr = 0x82A42AE4;
	sub_82A41700(ctx, base);
	// lwz r10,568(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ld r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a41700
	ctx.lr = 0x82A42B04;
	sub_82A41700(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,568(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x82a40b20
	ctx.lr = 0x82A42B3C;
	sub_82A40B20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a42b50
	if (cr6.lt) goto loc_82A42B50;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a42b54
	if (cr6.lt) goto loc_82A42B54;
loc_82A42B50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A42B54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a42b84
	if (!cr6.eq) goto loc_82A42B84;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
loc_82A42B6C:
	// lwz r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// ld r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a421e0
	ctx.lr = 0x82A42B84;
	sub_82A421E0(ctx, base);
loc_82A42B84:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82A42B88:
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A42B94;
	sub_831CE980(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7bc
	ctx.lr = 0x82A42BA4;
	__restfpr_26(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A42BA8"))) PPC_WEAK_FUNC(sub_82A42BA8);
PPC_FUNC_IMPL(__imp__sub_82A42BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A42BB0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x825cdbb0
	ctx.lr = 0x82A42BC0;
	sub_825CDBB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_82A42BCC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,200(r10)
	PPC_STORE_U8(ctx.r10.u32 + 200, ctx.r30.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x82a42bcc
	if (cr6.lt) goto loc_82A42BCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r25,6
	ctx.r25.s64 = 6;
	// li r27,255
	ctx.r27.s64 = 255;
	// li r26,13
	ctx.r26.s64 = 13;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A42BFC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mulli r9,r28,11
	ctx.r9.s64 = ctx.r28.s64 * 11;
loc_82A42C04:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,51
	ctx.r10.s64 = ctx.r10.s64 + 51;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,11
	cr6.compare<uint32_t>(ctx.r7.u32, 11, xer);
	// stwx r30,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r30.u32);
	// blt cr6,0x82a42c04
	if (cr6.lt) goto loc_82A42C04;
	// mulli r11,r28,152
	ctx.r11.s64 = ctx.r28.s64 * 152;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r31,556
	ctx.r11.s64 = ctx.r31.s64 + 556;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r25,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r25.u32);
	// stw r27,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r27.u32);
	// stfs f31,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stfs f31,584(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f31,588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f31,592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// bl 0x825cea80
	ctx.lr = 0x82A42C64;
	sub_825CEA80(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r27,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r27.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stfs f31,700(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r26,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r26.u32);
	// stb r30,684(r31)
	PPC_STORE_U8(ctx.r31.u32 + 684, ctx.r30.u8);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// blt cr6,0x82a42bfc
	if (cr6.lt) goto loc_82A42BFC;
	// addi r3,r29,292
	ctx.r3.s64 = ctx.r29.s64 + 292;
	// bl 0x825cea80
	ctx.lr = 0x82A42CA8;
	sub_825CEA80(ctx, base);
	// addi r3,r29,372
	ctx.r3.s64 = ctx.r29.s64 + 372;
	// bl 0x825cea80
	ctx.lr = 0x82A42CB0;
	sub_825CEA80(ctx, base);
	// addi r3,r29,452
	ctx.r3.s64 = ctx.r29.s64 + 452;
	// bl 0x825cea80
	ctx.lr = 0x82A42CB8;
	sub_825CEA80(ctx, base);
	// stw r27,532(r29)
	PPC_STORE_U32(ctx.r29.u32 + 532, ctx.r27.u32);
	// stw r30,536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 536, ctx.r30.u32);
	// stw r27,540(r29)
	PPC_STORE_U32(ctx.r29.u32 + 540, ctx.r27.u32);
	// stw r30,544(r29)
	PPC_STORE_U32(ctx.r29.u32 + 544, ctx.r30.u32);
	// stw r27,548(r29)
	PPC_STORE_U32(ctx.r29.u32 + 548, ctx.r27.u32);
	// stw r30,552(r29)
	PPC_STORE_U32(ctx.r29.u32 + 552, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A42CDC"))) PPC_WEAK_FUNC(sub_82A42CDC);
PPC_FUNC_IMPL(__imp__sub_82A42CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A42CE0"))) PPC_WEAK_FUNC(sub_82A42CE0);
PPC_FUNC_IMPL(__imp__sub_82A42CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A42CE8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x826318d0
	ctx.lr = 0x82A42CF8;
	sub_826318D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r27,292
	ctx.r30.s64 = ctx.r27.s64 + 292;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A42D0C:
	// lis r11,-31912
	ctx.r11.s64 = -2091384832;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-3648
	ctx.r6.s64 = ctx.r11.s64 + -3648;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// bl 0x823fca98
	ctx.lr = 0x82A42D24;
	sub_823FCA98(ctx, base);
	// lis r10,-31912
	ctx.r10.s64 = -2091384832;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r10,-3648
	ctx.r6.s64 = ctx.r10.s64 + -3648;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x823fca98
	ctx.lr = 0x82A42D3C;
	sub_823FCA98(ctx, base);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lis r9,-32144
	ctx.r9.s64 = -2106589184;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r9,22320
	ctx.r6.s64 = ctx.r9.s64 + 22320;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x82A42D60;
	sub_823FCA98(ctx, base);
	// lis r8,-32144
	ctx.r8.s64 = -2106589184;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r8,22320
	ctx.r6.s64 = ctx.r8.s64 + 22320;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823fca98
	ctx.lr = 0x82A42D78;
	sub_823FCA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cea80
	ctx.lr = 0x82A42D80;
	sub_825CEA80(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bge 0x82a42d0c
	if (!cr0.lt) goto loc_82A42D0C;
	// addi r3,r27,452
	ctx.r3.s64 = ctx.r27.s64 + 452;
	// bl 0x825d6880
	ctx.lr = 0x82A42D98;
	sub_825D6880(ctx, base);
	// li r29,255
	ctx.r29.s64 = 255;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r27,556
	ctx.r11.s64 = ctx.r27.s64 + 556;
	// stw r29,532(r27)
	PPC_STORE_U32(ctx.r27.u32 + 532, ctx.r29.u32);
	// stw r30,536(r27)
	PPC_STORE_U32(ctx.r27.u32 + 536, ctx.r30.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r29,540(r27)
	PPC_STORE_U32(ctx.r27.u32 + 540, ctx.r29.u32);
	// addi r31,r11,68
	ctx.r31.s64 = ctx.r11.s64 + 68;
	// stw r30,544(r27)
	PPC_STORE_U32(ctx.r27.u32 + 544, ctx.r30.u32);
	// addi r25,r11,-152
	ctx.r25.s64 = ctx.r11.s64 + -152;
	// stw r29,548(r27)
	PPC_STORE_U32(ctx.r27.u32 + 548, ctx.r29.u32);
	// li r24,6
	ctx.r24.s64 = 6;
	// stw r30,552(r27)
	PPC_STORE_U32(ctx.r27.u32 + 552, ctx.r30.u32);
	// li r23,13
	ctx.r23.s64 = 13;
loc_82A42DD0:
	// stfs f31,-44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -44, temp.u32);
	// lis r11,-31912
	ctx.r11.s64 = -2091384832;
	// stfs f31,-40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -40, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f31,-36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -36, temp.u32);
	// addi r6,r11,-3648
	ctx.r6.s64 = ctx.r11.s64 + -3648;
	// stfs f31,-32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -32, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// bl 0x823fca98
	ctx.lr = 0x82A42DF8;
	sub_823FCA98(ctx, base);
	// lis r10,-31912
	ctx.r10.s64 = -2091384832;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r10,-3648
	ctx.r6.s64 = ctx.r10.s64 + -3648;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x823fca98
	ctx.lr = 0x82A42E10;
	sub_823FCA98(ctx, base);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lis r9,-32144
	ctx.r9.s64 = -2106589184;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r9,22320
	ctx.r6.s64 = ctx.r9.s64 + 22320;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x82A42E34;
	sub_823FCA98(ctx, base);
	// lis r8,-32144
	ctx.r8.s64 = -2106589184;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r8,22320
	ctx.r6.s64 = ctx.r8.s64 + 22320;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823fca98
	ctx.lr = 0x82A42E4C;
	sub_823FCA98(ctx, base);
	// addi r28,r31,-28
	ctx.r28.s64 = ctx.r31.s64 + -28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cea80
	ctx.lr = 0x82A42E58;
	sub_825CEA80(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r24,-52(r31)
	PPC_STORE_U32(ctx.r31.u32 + -52, ctx.r24.u32);
	// stw r29,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r29.u32);
	// stfs f31,-44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -44, temp.u32);
	// stfs f31,-40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -40, temp.u32);
	// stfs f31,-36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -36, temp.u32);
	// stfs f31,-32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -32, temp.u32);
	// bl 0x825cea80
	ctx.lr = 0x82A42E80;
	sub_825CEA80(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwu r30,152(r25)
	ea = 152 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r25.u32 = ea;
	// stw r30,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r30.u32);
	// stw r24,-52(r31)
	PPC_STORE_U32(ctx.r31.u32 + -52, ctx.r24.u32);
	// stw r29,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r29.u32);
	// stfs f31,-44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -44, temp.u32);
	// stfs f31,-40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -40, temp.u32);
	// stfs f31,-36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -36, temp.u32);
	// stfs f31,-32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -32, temp.u32);
	// bl 0x825cea80
	ctx.lr = 0x82A42EB0;
	sub_825CEA80(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r30,-60(r31)
	PPC_STORE_U32(ctx.r31.u32 + -60, ctx.r30.u32);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r23,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r23.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r31,r31,152
	ctx.r31.s64 = ctx.r31.s64 + 152;
	// bge 0x82a42dd0
	if (!cr0.lt) goto loc_82A42DD0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a42ba8
	ctx.lr = 0x82A42EEC;
	sub_82A42BA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A42EFC"))) PPC_WEAK_FUNC(sub_82A42EFC);
PPC_FUNC_IMPL(__imp__sub_82A42EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A42F00"))) PPC_WEAK_FUNC(sub_82A42F00);
PPC_FUNC_IMPL(__imp__sub_82A42F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82A42F08;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,255
	ctx.r26.s64 = 255;
	// addi r24,r3,96
	ctx.r24.s64 = ctx.r3.s64 + 96;
	// stw r26,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r26.u32);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r26,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r26.u32);
	// stfs f31,56(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stfs f31,60(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 60, temp.u32);
	// stfs f31,64(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// stfs f31,68(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// stfs f31,76(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 76, temp.u32);
	// stfs f31,80(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 80, temp.u32);
	// stfs f31,84(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// stfs f31,88(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// bl 0x82a40578
	ctx.lr = 0x82A42F54;
	sub_82A40578(ctx, base);
	// addi r3,r24,14200
	ctx.r3.s64 = ctx.r24.s64 + 14200;
	// bl 0x82a44240
	ctx.lr = 0x82A42F5C;
	sub_82A44240(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a405d0
	ctx.lr = 0x82A42F64;
	sub_82A405D0(ctx, base);
	// addis r19,r29,1
	ctx.r19.s64 = ctx.r29.s64 + 65536;
	// addi r19,r19,12384
	ctx.r19.s64 = ctx.r19.s64 + 12384;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a41600
	ctx.lr = 0x82A42F74;
	sub_82A41600(ctx, base);
	// addis r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 65536;
	// addi r28,r28,20408
	ctx.r28.s64 = ctx.r28.s64 + 20408;
	// addi r22,r28,20
	ctx.r22.s64 = ctx.r28.s64 + 20;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826318d0
	ctx.lr = 0x82A42F88;
	sub_826318D0(ctx, base);
	// addi r21,r28,220
	ctx.r21.s64 = ctx.r28.s64 + 220;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826318d0
	ctx.lr = 0x82A42F94;
	sub_826318D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stw r26,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r26.u32);
	// stfs f31,4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stw r26,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r26.u32);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// bl 0x825cdbb0
	ctx.lr = 0x82A42FB0;
	sub_825CDBB0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825cdbb0
	ctx.lr = 0x82A42FB8;
	sub_825CDBB0(ctx, base);
	// addis r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 65536;
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r27,r27,20832
	ctx.r27.s64 = ctx.r27.s64 + 20832;
	// addi r30,r30,20856
	ctx.r30.s64 = ctx.r30.s64 + 20856;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r23,2
	ctx.r23.s64 = 2;
	// stb r31,420(r28)
	PPC_STORE_U8(ctx.r28.u32 + 420, ctx.r31.u8);
	// addis r18,r29,1
	ctx.r18.s64 = ctx.r29.s64 + 65536;
	// stfs f31,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// stw r23,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r23.u32);
	// addi r18,r18,20896
	ctx.r18.s64 = ctx.r18.s64 + 20896;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// bl 0x82a42ce0
	ctx.lr = 0x82A43050;
	sub_82A42CE0(ctx, base);
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// addi r10,r10,21760
	ctx.r10.s64 = ctx.r10.s64 + 21760;
	// addis r25,r29,1
	ctx.r25.s64 = ctx.r29.s64 + 65536;
	// addi r25,r25,21776
	ctx.r25.s64 = ctx.r25.s64 + 21776;
	// stfs f31,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r26,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r26.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// addi r17,r25,4
	ctx.r17.s64 = ctx.r25.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// bl 0x82a3fa68
	ctx.lr = 0x82A4308C;
	sub_82A3FA68(ctx, base);
	// stb r31,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r31.u8);
	// stw r23,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r23.u32);
	// addis r16,r29,1
	ctx.r16.s64 = ctx.r29.s64 + 65536;
	// addi r16,r16,21792
	ctx.r16.s64 = ctx.r16.s64 + 21792;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82a420d0
	ctx.lr = 0x82A430A4;
	sub_82A420D0(ctx, base);
	// addis r15,r29,1
	ctx.r15.s64 = ctx.r29.s64 + 65536;
	// addi r15,r15,27316
	ctx.r15.s64 = ctx.r15.s64 + 27316;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82a41510
	ctx.lr = 0x82A430B4;
	sub_82A41510(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,28140
	ctx.r5.u64 = ctx.r5.u64 | 28140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A430C8;
	sub_831CDCF0(ctx, base);
	// li r11,55
	ctx.r11.s64 = 55;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A430D4:
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// bge cr6,0x82a430e0
	if (!cr6.lt) goto loc_82A430E0;
	// stbx r31,r10,r29
	PPC_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r31.u8);
loc_82A430E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a430d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A430D4;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// ori r20,r10,28124
	ctx.r20.u64 = ctx.r10.u64 | 28124;
	// addi r11,r29,52
	ctx.r11.s64 = ctx.r29.s64 + 52;
	// add r10,r29,r20
	ctx.r10.u64 = ctx.r29.u64 + ctx.r20.u64;
loc_82A43100:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stwu r26,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a43100
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A43100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a405d0
	ctx.lr = 0x82A43124;
	sub_82A405D0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a40638
	ctx.lr = 0x82A4312C;
	sub_82A40638(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stw r26,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r26.u32);
	// stfs f31,4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stw r26,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r26.u32);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// bl 0x825cdbb0
	ctx.lr = 0x82A43148;
	sub_825CDBB0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825cdbb0
	ctx.lr = 0x82A43150;
	sub_825CDBB0(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// stb r31,420(r28)
	PPC_STORE_U8(ctx.r28.u32 + 420, ctx.r31.u8);
	// stfs f31,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// addi r11,r11,20876
	ctx.r11.s64 = ctx.r11.s64 + 20876;
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// stw r23,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r23.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// bl 0x82a42ba8
	ctx.lr = 0x82A431A4;
	sub_82A42BA8(ctx, base);
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a3fa68
	ctx.lr = 0x82A431B0;
	sub_82A3FA68(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r23,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r23.u32);
	// stb r31,12(r25)
	PPC_STORE_U8(ctx.r25.u32 + 12, ctx.r31.u8);
	// bl 0x82a402d8
	ctx.lr = 0x82A431C0;
	sub_82A402D8(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82a404b8
	ctx.lr = 0x82A431C8;
	sub_82A404B8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stwx r26,r29,r20
	PPC_STORE_U32(ctx.r29.u32 + ctx.r20.u32, ctx.r26.u32);
	// ori r8,r10,28120
	ctx.r8.u64 = ctx.r10.u64 | 28120;
	// ori r7,r9,28136
	ctx.r7.u64 = ctx.r9.u64 | 28136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r26,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r26.u32);
	// stwx r26,r29,r7
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r26.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A431F4"))) PPC_WEAK_FUNC(sub_82A431F4);
PPC_FUNC_IMPL(__imp__sub_82A431F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A431F8"))) PPC_WEAK_FUNC(sub_82A431F8);
PPC_FUNC_IMPL(__imp__sub_82A431F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,23452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23452);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27204);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A43224"))) PPC_WEAK_FUNC(sub_82A43224);
PPC_FUNC_IMPL(__imp__sub_82A43224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A43228"))) PPC_WEAK_FUNC(sub_82A43228);
PPC_FUNC_IMPL(__imp__sub_82A43228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// stfs f4,8(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// fadds f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fmadds f11,f13,f1,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f10,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f4.f64));
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A432A8"))) PPC_WEAK_FUNC(sub_82A432A8);
PPC_FUNC_IMPL(__imp__sub_82A432A8) {
	PPC_FUNC_PROLOGUE();
	// li r5,7072
	ctx.r5.s64 = 7072;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A432B8"))) PPC_WEAK_FUNC(sub_82A432B8);
PPC_FUNC_IMPL(__imp__sub_82A432B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A432C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a45dc8
	ctx.lr = 0x82A432D8;
	sub_82A45DC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fadds f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a43310
	if (!cr6.lt) goto loc_82A43310;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82a43334
	goto loc_82A43334;
loc_82A43310:
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fctiwz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// ble cr6,0x82a43330
	if (!cr6.gt) goto loc_82A43330;
	// li r11,103
	ctx.r11.s64 = 103;
loc_82A43330:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82A43334:
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f13,f6,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a4335c
	if (!cr6.lt) goto loc_82A4335C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a43380
	goto loc_82A43380;
loc_82A4335C:
	// lfs f6,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// ble cr6,0x82a4337c
	if (!cr6.gt) goto loc_82A4337C;
	// li r11,67
	ctx.r11.s64 = 67;
loc_82A4337C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A43380:
	// fadds f13,f7,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a43398
	if (!cr6.lt) goto loc_82A43398;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a433bc
	goto loc_82A433BC;
loc_82A43398:
	// lfs f9,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// ble cr6,0x82a433b8
	if (!cr6.gt) goto loc_82A433B8;
	// li r11,103
	ctx.r11.s64 = 103;
loc_82A433B8:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82A433BC:
	// fadds f13,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a433d4
	if (!cr6.lt) goto loc_82A433D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a433f4
	goto loc_82A433F4;
loc_82A433D4:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// ble cr6,0x82a433f4
	if (!cr6.gt) goto loc_82A433F4;
	// li r11,67
	ctx.r11.s64 = 67;
loc_82A433F4:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a43438
	if (cr6.gt) goto loc_82A43438;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r30,r10,104
	ctx.r30.s64 = ctx.r10.s64 * 104;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82A43408:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, xer);
	// bgt cr6,0x82a4342c
	if (cr6.gt) goto loc_82A4342C;
loc_82A43414:
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a45eb8
	ctx.lr = 0x82A43420;
	sub_82A45EB8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// ble cr6,0x82a43414
	if (!cr6.gt) goto loc_82A43414;
loc_82A4342C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// bne 0x82a43408
	if (!cr0.eq) goto loc_82A43408;
loc_82A43438:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A43440"))) PPC_WEAK_FUNC(sub_82A43440);
PPC_FUNC_IMPL(__imp__sub_82A43440) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// li r5,7072
	ctx.r5.s64 = 7072;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82A43464;
	sub_831CDCF0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,25612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25612);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-25100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_82A434A4"))) PPC_WEAK_FUNC(sub_82A434A4);
PPC_FUNC_IMPL(__imp__sub_82A434A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A434A8"))) PPC_WEAK_FUNC(sub_82A434A8);
PPC_FUNC_IMPL(__imp__sub_82A434A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A434B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8268f178
	ctx.lr = 0x82A434D8;
	sub_8268F178(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82a43578
	if (cr6.lt) goto loc_82A43578;
	// addi r8,r27,16
	ctx.r8.s64 = ctx.r27.s64 + 16;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r10,-256
	ctx.r10.s64 = -256;
	// addi r7,r30,258
	ctx.r7.s64 = ctx.r30.s64 + 258;
	// addi r6,r30,256
	ctx.r6.s64 = ctx.r30.s64 + 256;
loc_82A434F4:
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(ctx.r31.s32, 128, xer);
	// bge cr6,0x82a43504
	if (!cr6.lt) goto loc_82A43504;
	// lhzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// b 0x82a4350c
	goto loc_82A4350C;
loc_82A43504:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_82A4350C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a43520
	if (!cr6.eq) goto loc_82A43520;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82A43520:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpwi cr6,r5,128
	cr6.compare<int32_t>(ctx.r5.s32, 128, xer);
	// bge cr6,0x82a4353c
	if (!cr6.lt) goto loc_82A4353C;
	// lhzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// b 0x82a43548
	goto loc_82A43548;
loc_82A4353C:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_82A43548:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a4355c
	if (!cr6.eq) goto loc_82A4355C;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82A4355C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// blt cr6,0x82a434f4
	if (cr6.lt) goto loc_82A434F4;
loc_82A43578:
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x82a435c4
	if (!cr6.lt) goto loc_82A435C4;
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(ctx.r31.s32, 128, xer);
	// bge cr6,0x82a43594
	if (!cr6.lt) goto loc_82A43594;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// b 0x82a435a4
	goto loc_82A435A4;
loc_82A43594:
	// addi r11,r31,-128
	ctx.r11.s64 = ctx.r31.s64 + -128;
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
loc_82A435A4:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a435bc
	if (!cr6.eq) goto loc_82A435BC;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82A435BC:
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82A435C4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82a435f8
	if (!cr6.gt) goto loc_82A435F8;
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// twllei r29,0
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r29
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// andc r6,r29,r8
	ctx.r6.u64 = ctx.r29.u64 & ~ctx.r8.u64;
	// twlgei r6,-1
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A435F8:
	// li r11,100
	ctx.r11.s64 = 100;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A43608"))) PPC_WEAK_FUNC(sub_82A43608);
PPC_FUNC_IMPL(__imp__sub_82A43608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82A43610;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce76c
	ctx.lr = 0x82A43618;
	__savefpr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// bl 0x82a45dc8
	ctx.lr = 0x82A43648;
	sub_82A45DC8(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bgt cr6,0x82a4365c
	if (cr6.gt) goto loc_82A4365C;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
loc_82A4365C:
	// fadds f10,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f10,f29
	cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// blt cr6,0x82a4366c
	if (cr6.lt) goto loc_82A4366C;
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
loc_82A4366C:
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f26,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f26.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82a4368c
	if (!cr6.lt) goto loc_82A4368C;
	// li r18,0
	ctx.r18.s64 = 0;
	// b 0x82a436b0
	goto loc_82A436B0;
loc_82A4368C:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// ble cr6,0x82a436ac
	if (!cr6.gt) goto loc_82A436AC;
	// li r11,103
	ctx.r11.s64 = 103;
loc_82A436AC:
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
loc_82A436B0:
	// lfs f13,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82a436d0
	if (!cr6.lt) goto loc_82A436D0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82a436f4
	goto loc_82A436F4;
loc_82A436D0:
	// lfs f9,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// ble cr6,0x82a436f0
	if (!cr6.gt) goto loc_82A436F0;
	// li r11,67
	ctx.r11.s64 = 67;
loc_82A436F0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82A436F4:
	// fadds f0,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82a43708
	if (!cr6.lt) goto loc_82A43708;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x82a4372c
	goto loc_82A4372C;
loc_82A43708:
	// lfs f11,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// ble cr6,0x82a43728
	if (!cr6.gt) goto loc_82A43728;
	// li r11,103
	ctx.r11.s64 = 103;
loc_82A43728:
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_82A4372C:
	// fadds f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82a43744
	if (!cr6.lt) goto loc_82A43744;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82a43768
	goto loc_82A43768;
loc_82A43744:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// ble cr6,0x82a43764
	if (!cr6.gt) goto loc_82A43764;
	// li r11,67
	ctx.r11.s64 = 67;
loc_82A43764:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82A43768:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f30,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// fmuls f27,f31,f31
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fcmpu cr6,f25,f26
	cr6.compare(ctx.f25.f64, ctx.f26.f64);
	// addi r21,r11,23360
	ctx.r21.s64 = ctx.r11.s64 + 23360;
	// ble cr6,0x82a43790
	if (!cr6.gt) goto loc_82A43790;
	// lfs f0,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f25,f0
	cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// blt cr6,0x82a43794
	if (cr6.lt) goto loc_82A43794;
loc_82A43790:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A43794:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// blt cr6,0x82a437ac
	if (cr6.lt) goto loc_82A437AC;
	// fcmpu cr6,f28,f31
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a437b0
	if (cr6.lt) goto loc_82A437B0;
loc_82A437AC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A437B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a43ad0
	if (cr6.eq) goto loc_82A43AD0;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a43940
	if (cr6.eq) goto loc_82A43940;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82a43bc8
	if (cr6.gt) goto loc_82A43BC8;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mulli r26,r8,104
	ctx.r26.s64 = ctx.r8.s64 * 104;
	// lfs f29,20056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,20164
	ctx.r8.s64 = 1321467904;
	// li r25,104
	ctx.r25.s64 = 104;
	// ori r29,r8,60495
	ctx.r29.u64 = ctx.r8.u64 | 60495;
loc_82A43804:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmpw cr6,r18,r20
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, xer);
	// bgt cr6,0x82a43924
	if (cr6.gt) goto loc_82A43924;
	// stfs f26,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82A43814:
	// add r30,r26,r28
	ctx.r30.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// mulhw r11,r30,r29
	ctx.r11.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32)) >> 32;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// divw r9,r30,r25
	ctx.r9.s32 = PPCDivide(ctx.r30.s32, ctx.r25.s32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mulli r6,r7,104
	ctx.r6.s64 = ctx.r7.s64 * 104;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f3,88(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fadds f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fadds f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fmadds f0,f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f0,f11,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a43918
	if (cr6.lt) goto loc_82A43918;
	// fcmpu cr6,f27,f0
	cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// blt cr6,0x82a43918
	if (cr6.lt) goto loc_82A43918;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A438C0;
	sub_825CA560(ctx, base);
	// lfs f13,-4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f26
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// bge cr6,0x82a438d4
	if (!cr6.lt) goto loc_82A438D4;
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// b 0x82a438e0
	goto loc_82A438E0;
loc_82A438D4:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82a438e0
	if (cr6.lt) goto loc_82A438E0;
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
loc_82A438E0:
	// lfs f0,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a43900
	if (!cr6.gt) goto loc_82A43900;
	// fsel f12,f0,f28,f29
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f29.f64;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82A43900:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f25,f0
	cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// blt cr6,0x82a43918
	if (cr6.lt) goto loc_82A43918;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a45eb8
	ctx.lr = 0x82A43918;
	sub_82A45EB8(ctx, base);
loc_82A43918:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r20
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, xer);
	// ble cr6,0x82a43814
	if (!cr6.gt) goto loc_82A43814;
loc_82A43924:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 + 104;
	// bne 0x82a43804
	if (!cr0.eq) goto loc_82A43804;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7b8
	ctx.lr = 0x82A4393C;
	__restfpr_25(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82A43940:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a43ad0
	if (cr6.eq) goto loc_82A43AD0;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82a43bc8
	if (cr6.gt) goto loc_82A43BC8;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lfs f10,-4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mulli r26,r8,104
	ctx.r26.s64 = ctx.r8.s64 * 104;
	// lfs f30,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,20164
	ctx.r8.s64 = 1321467904;
	// li r25,104
	ctx.r25.s64 = 104;
	// ori r29,r8,60495
	ctx.r29.u64 = ctx.r8.u64 | 60495;
	// lis r24,-31778
	ctx.r24.s64 = -2082603008;
	// lis r22,-31778
	ctx.r22.s64 = -2082603008;
loc_82A4398C:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmpw cr6,r18,r20
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, xer);
	// bgt cr6,0x82a43ab4
	if (cr6.gt) goto loc_82A43AB4;
loc_82A43998:
	// add r30,r26,r28
	ctx.r30.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// divw r11,r30,r25
	ctx.r11.s32 = PPCDivide(ctx.r30.s32, ctx.r25.s32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mulhw r10,r30,r29
	ctx.r10.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32)) >> 32;
	// fneg f8,f12
	ctx.f8.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// srawi r11,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 5;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r8,104
	ctx.r7.s64 = ctx.r8.s64 * 104;
	// subf r6,r7,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r7.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f6,f2
	ctx.f6.f64 = double(float(ctx.f2.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fadds f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fadds f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fmadds f13,f5,f9,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f11,f1,f7,f8
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a43a28
	if (!cr6.eq) goto loc_82A43A28;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82a43a28
	if (!cr6.eq) goto loc_82A43A28;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x82a43a50
	goto loc_82A43A50;
loc_82A43A28:
	// fsubs f1,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82a5a9f8
	ctx.lr = 0x82A43A34;
	sub_82A5A9F8(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// bge cr6,0x82a43a44
	if (!cr6.lt) goto loc_82A43A44;
	// lfs f0,8228(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8228);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82A43A44:
	// lfs f0,8248(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,-4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_82A43A50:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x82a43a60
	if (!cr6.lt) goto loc_82A43A60;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// b 0x82a43a6c
	goto loc_82A43A6C;
loc_82A43A60:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x82a43a6c
	if (cr6.lt) goto loc_82A43A6C;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_82A43A6C:
	// lfs f13,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a43a8c
	if (!cr6.gt) goto loc_82A43A8C;
	// fsel f13,f0,f29,f30
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f29.f64 : ctx.f30.f64;
	// fnmsubs f0,f13,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 - ctx.f0.f64)));
loc_82A43A8C:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f25,f0
	cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// blt cr6,0x82a43aa8
	if (cr6.lt) goto loc_82A43AA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a45eb8
	ctx.lr = 0x82A43AA4;
	sub_82A45EB8(ctx, base);
	// lfs f10,-4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
loc_82A43AA8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r20
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, xer);
	// ble cr6,0x82a43998
	if (!cr6.gt) goto loc_82A43998;
loc_82A43AB4:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 + 104;
	// bne 0x82a4398c
	if (!cr0.eq) goto loc_82A4398C;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7b8
	ctx.lr = 0x82A43ACC;
	__restfpr_25(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82A43AD0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a43bc8
	if (cr6.eq) goto loc_82A43BC8;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82a43bc8
	if (cr6.gt) goto loc_82A43BC8;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lis r10,20164
	ctx.r10.s64 = 1321467904;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mulli r28,r8,104
	ctx.r28.s64 = ctx.r8.s64 * 104;
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// li r25,104
	ctx.r25.s64 = 104;
	// ori r29,r10,60495
	ctx.r29.u64 = ctx.r10.u64 | 60495;
loc_82A43B04:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpw cr6,r18,r20
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, xer);
	// bgt cr6,0x82a43bbc
	if (cr6.gt) goto loc_82A43BBC;
loc_82A43B10:
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mulhw r11,r4,r29
	ctx.r11.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32)) >> 32;
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// divw r9,r4,r25
	ctx.r9.s32 = PPCDivide(ctx.r4.s32, ctx.r25.s32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mulli r6,r7,104
	ctx.r6.s64 = ctx.r7.s64 * 104;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// subf r5,r6,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r6.s64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// fadds f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fmadds f10,f0,f9,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fsubs f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fadds f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fmadds f9,f12,f11,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f0,f7,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82a43bb0
	if (cr6.lt) goto loc_82A43BB0;
	// fcmpu cr6,f27,f0
	cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// blt cr6,0x82a43bb0
	if (cr6.lt) goto loc_82A43BB0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a45eb8
	ctx.lr = 0x82A43BB0;
	sub_82A45EB8(ctx, base);
loc_82A43BB0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r20
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, xer);
	// ble cr6,0x82a43b10
	if (!cr6.gt) goto loc_82A43B10;
loc_82A43BBC:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r28,r28,104
	ctx.r28.s64 = ctx.r28.s64 + 104;
	// bne 0x82a43b04
	if (!cr0.eq) goto loc_82A43B04;
loc_82A43BC8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7b8
	ctx.lr = 0x82A43BD4;
	__restfpr_25(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A43BD8"))) PPC_WEAK_FUNC(sub_82A43BD8);
PPC_FUNC_IMPL(__imp__sub_82A43BD8) {
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
	ctx.lr = 0x82A43BE0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce778
	ctx.lr = 0x82A43BE8;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r6,7088
	ctx.r11.s64 = ctx.r6.s64 * 7088;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a43c18
	if (!cr6.lt) goto loc_82A43C18;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a43c3c
	goto loc_82A43C3C;
loc_82A43C18:
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// ble cr6,0x82a43c38
	if (!cr6.gt) goto loc_82A43C38;
	// li r11,103
	ctx.r11.s64 = 103;
loc_82A43C38:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A43C3C:
	// lfs f9,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a43c58
	if (!cr6.lt) goto loc_82A43C58;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a43c78
	goto loc_82A43C78;
loc_82A43C58:
	// lfs f13,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// ble cr6,0x82a43c78
	if (!cr6.gt) goto loc_82A43C78;
	// li r11,67
	ctx.r11.s64 = 67;
loc_82A43C78:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fneg f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fneg f10,f9
	ctx.f10.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f0,23456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f3,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,-4460(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4460);
	ctx.f29.f64 = double(temp.f32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// fadds f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fmadds f28,f7,f2,f10
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f30,f8,f3,f12
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f12.f64));
	// bge cr6,0x82a43ce8
	if (!cr6.lt) goto loc_82A43CE8;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
loc_82A43CE8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f8,f30,f12
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fsubs f13,f28,f10
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fadds f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// fadds f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a43d20
	if (!cr6.lt) goto loc_82A43D20;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82a43d44
	goto loc_82A43D44;
loc_82A43D20:
	// lfs f8,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// ble cr6,0x82a43d40
	if (!cr6.gt) goto loc_82A43D40;
	// li r11,103
	ctx.r11.s64 = 103;
loc_82A43D40:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82A43D44:
	// fadds f0,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a43d58
	if (!cr6.lt) goto loc_82A43D58;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a43d7c
	goto loc_82A43D7C;
loc_82A43D58:
	// lfs f13,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// ble cr6,0x82a43d78
	if (!cr6.gt) goto loc_82A43D78;
	// li r11,67
	ctx.r11.s64 = 67;
loc_82A43D78:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82A43D7C:
	// fadds f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a43d90
	if (!cr6.lt) goto loc_82A43D90;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82a43db4
	goto loc_82A43DB4;
loc_82A43D90:
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// ble cr6,0x82a43db0
	if (!cr6.gt) goto loc_82A43DB0;
	// li r11,103
	ctx.r11.s64 = 103;
loc_82A43DB0:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82A43DB4:
	// fadds f0,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a43dc8
	if (!cr6.lt) goto loc_82A43DC8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a43de8
	goto loc_82A43DE8;
loc_82A43DC8:
	// lfs f13,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,67
	cr6.compare<int32_t>(ctx.r31.s32, 67, xer);
	// ble cr6,0x82a43de8
	if (!cr6.gt) goto loc_82A43DE8;
	// li r31,67
	ctx.r31.s64 = 67;
loc_82A43DE8:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mulli r11,r29,104
	ctx.r11.s64 = ctx.r29.s64 * 104;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8268f0f8
	ctx.lr = 0x82A43E0C;
	sub_8268F0F8(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// lfs f6,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// bgt cr6,0x82a43ee8
	if (cr6.gt) goto loc_82A43EE8;
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f9,-11376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11376);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f10.f64 = double(temp.f32);
loc_82A43E40:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// bgt cr6,0x82a43ed4
	if (cr6.gt) goto loc_82A43ED4;
	// fsubs f0,f28,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f8.f64));
	// subf r11,r26,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r26.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82A43E60:
	// fsubs f0,f30,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f9
	cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82a43ec8
	if (!cr6.lt) goto loc_82A43EC8;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a43e84
	if (!cr6.eq) goto loc_82A43E84;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82A43E84:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82a43ec8
	if (!cr6.gt) goto loc_82A43EC8;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f4,f29,f0
	ctx.f4.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fnmsubs f0,f4,f10,f13
	ctx.f0.f64 = double(float(-(ctx.f4.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a43eb8
	if (!cr6.lt) goto loc_82A43EB8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82A43EB8:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r11,95(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
loc_82A43EC8:
	// fadds f12,f7,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x82a43e60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A43E60;
loc_82A43ED4:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// fmr f12,f5
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f5.f64;
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// addi r30,r9,104
	ctx.r30.s64 = ctx.r9.s64 + 104;
	// bne 0x82a43e40
	if (!cr0.eq) goto loc_82A43E40;
loc_82A43EE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A43EF4;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A43EF8"))) PPC_WEAK_FUNC(sub_82A43EF8);
PPC_FUNC_IMPL(__imp__sub_82A43EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A43F00;
	__savegprlr_25(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82a45d78
	ctx.lr = 0x82A43F1C;
	sub_82A45D78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8268f178
	ctx.lr = 0x82A43F28;
	sub_8268F178(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a43f98
	if (!cr6.gt) goto loc_82A43F98;
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// li r31,-256
	ctx.r31.s64 = -256;
	// addi r30,r29,256
	ctx.r30.s64 = ctx.r29.s64 + 256;
loc_82A43F40:
	// cmpwi cr6,r28,128
	cr6.compare<int32_t>(ctx.r28.s32, 128, xer);
	// bge cr6,0x82a43f50
	if (!cr6.lt) goto loc_82A43F50;
	// lhzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// b 0x82a43f58
	goto loc_82A43F58;
loc_82A43F50:
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
loc_82A43F58:
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// lbzx r11,r27,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82a43f6c
	if (!cr6.eq) goto loc_82A43F6C;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82A43F6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a43f80
	if (cr6.gt) goto loc_82A43F80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a45eb8
	ctx.lr = 0x82A43F80;
	sub_82A45EB8(ctx, base);
loc_82A43F80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bl 0x8268f178
	ctx.lr = 0x82A43F90;
	sub_8268F178(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, xer);
	// blt cr6,0x82a43f40
	if (cr6.lt) goto loc_82A43F40;
loc_82A43F98:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831cee08
	ctx.lr = 0x82A43FA8;
	sub_831CEE08(ctx, base);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
	// addi r3,r25,260
	ctx.r3.s64 = ctx.r25.s64 + 260;
	// stw r11,256(r25)
	PPC_STORE_U32(ctx.r25.u32 + 256, ctx.r11.u32);
	// bl 0x82a11f50
	ctx.lr = 0x82A43FBC;
	sub_82A11F50(ctx, base);
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a43fd8
	if (cr6.eq) goto loc_82A43FD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A43FD8;
	sub_825952B8(ctx, base);
loc_82A43FD8:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A43FE0"))) PPC_WEAK_FUNC(sub_82A43FE0);
PPC_FUNC_IMPL(__imp__sub_82A43FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A43FE8;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82a45d78
	ctx.lr = 0x82A44010;
	sub_82A45D78(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a45d78
	ctx.lr = 0x82A44018;
	sub_82A45D78(ctx, base);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// bl 0x8268f178
	ctx.lr = 0x82A4402C;
	sub_8268F178(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a44164
	if (!cr6.gt) goto loc_82A44164;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r10,20164
	ctx.r10.s64 = 1321467904;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r25,-256
	ctx.r25.s64 = -256;
	// addi r22,r24,256
	ctx.r22.s64 = ctx.r24.s64 + 256;
	// li r26,104
	ctx.r26.s64 = 104;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ori r28,r10,60495
	ctx.r28.u64 = ctx.r10.u64 | 60495;
	// lfs f31,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
loc_82A44064:
	// cmpwi cr6,r23,128
	cr6.compare<int32_t>(ctx.r23.s32, 128, xer);
	// bge cr6,0x82a44074
	if (!cr6.lt) goto loc_82A44074;
	// lhzx r11,r22,r25
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + ctx.r25.u32);
	// b 0x82a4407c
	goto loc_82A4407C;
loc_82A44074:
	// lwz r11,260(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 260);
	// lhzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
loc_82A4407C:
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mulhw r11,r30,r28
	ctx.r11.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32)) >> 32;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// divw r9,r30,r26
	ctx.r9.s32 = PPCDivide(ctx.r30.s32, ctx.r26.s32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f8,128(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mulli r6,r7,104
	ctx.r6.s64 = ctx.r7.s64 * 104;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// subf r4,r6,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r6.s64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f5,120(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fadds f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fadds f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fmadds f0,f2,f9,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f13,f1,f10,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82a432b8
	ctx.lr = 0x82A44104;
	sub_82A432B8(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a434a8
	ctx.lr = 0x82A44110;
	sub_82A434A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a45dc8
	ctx.lr = 0x82A4411C;
	sub_82A45DC8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a4413c
	if (!cr6.lt) goto loc_82A4413C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x82a45dc8
	ctx.lr = 0x82A44138;
	sub_82A45DC8(ctx, base);
	// b 0x82a44140
	goto loc_82A44140;
loc_82A4413C:
	// bne cr6,0x82a4414c
	if (!cr6.eq) goto loc_82A4414C;
loc_82A44140:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a45eb8
	ctx.lr = 0x82A4414C;
	sub_82A45EB8(ctx, base);
loc_82A4414C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// bl 0x8268f178
	ctx.lr = 0x82A4415C;
	sub_8268F178(ctx, base);
	// cmpw cr6,r23,r3
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r3.s32, xer);
	// blt cr6,0x82a44064
	if (cr6.lt) goto loc_82A44064;
loc_82A44164:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831cee08
	ctx.lr = 0x82A44174;
	sub_831CEE08(ctx, base);
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// addi r3,r21,260
	ctx.r3.s64 = ctx.r21.s64 + 260;
	// stw r11,256(r21)
	PPC_STORE_U32(ctx.r21.u32 + 256, ctx.r11.u32);
	// bl 0x82a11f50
	ctx.lr = 0x82A44188;
	sub_82A11F50(ctx, base);
	// lwz r4,692(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a441a4
	if (cr6.eq) goto loc_82A441A4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82A441A4;
	sub_825952B8(ctx, base);
loc_82A441A4:
	// lwz r4,404(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// stw r20,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r20.u32);
	// stw r20,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r20.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r20,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r20.u32);
	// beq cr6,0x82a441c8
	if (cr6.eq) goto loc_82A441C8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A441C8;
	sub_825952B8(ctx, base);
loc_82A441C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A441DC"))) PPC_WEAK_FUNC(sub_82A441DC);
PPC_FUNC_IMPL(__imp__sub_82A441DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A441E0"))) PPC_WEAK_FUNC(sub_82A441E0);
PPC_FUNC_IMPL(__imp__sub_82A441E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,600
	ctx.r10.s64 = 600;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A441FC:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f0,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a441fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A441FC;
	// li r10,600
	ctx.r10.s64 = 600;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A44220:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f0,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a44220
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A44220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4423C"))) PPC_WEAK_FUNC(sub_82A4423C);
PPC_FUNC_IMPL(__imp__sub_82A4423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44240"))) PPC_WEAK_FUNC(sub_82A44240);
PPC_FUNC_IMPL(__imp__sub_82A44240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A44248;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,1220
	ctx.r30.s64 = ctx.r3.s64 + 1220;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
	// li r27,599
	ctx.r27.s64 = 599;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r29,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r29.u8);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_82A4428C:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r6,r11,-1432
	ctx.r6.s64 = ctx.r11.s64 + -1432;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A442A8;
	sub_823FCA98(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A442B4:
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a442b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A442B4;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// bge 0x82a4428c
	if (!cr0.lt) goto loc_82A4428C;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// addi r3,r3,-13916
	ctx.r3.s64 = ctx.r3.s64 + -13916;
	// bl 0x82a441e0
	ctx.lr = 0x82A442D8;
	sub_82A441E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A442E4"))) PPC_WEAK_FUNC(sub_82A442E4);
PPC_FUNC_IMPL(__imp__sub_82A442E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A442E8"))) PPC_WEAK_FUNC(sub_82A442E8);
PPC_FUNC_IMPL(__imp__sub_82A442E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A442F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82a44320
	if (!cr6.lt) goto loc_82A44320;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15820
	ctx.r3.s64 = ctx.r11.s64 + 15820;
	// bl 0x831cc150
	ctx.lr = 0x82A44320;
	sub_831CC150(ctx, base);
loc_82A44320:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x82a44330
	if (!cr6.lt) goto loc_82A44330;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82A44330:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a44348
	if (!cr6.lt) goto loc_82A44348;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82a44348
	if (cr6.gt) goto loc_82A44348;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82A44348:
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r10,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82595718
	ctx.lr = 0x82A4436C;
	sub_82595718(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a443b4
	if (cr6.eq) goto loc_82A443B4;
loc_82A44394:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a443a4
	if (cr6.eq) goto loc_82A443A4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_82A443A4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a44394
	if (!cr6.eq) goto loc_82A44394;
loc_82A443B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82a44438
	if (cr6.gt) goto loc_82A44438;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a443ec
	if (cr6.eq) goto loc_82A443EC;
loc_82A443CC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a443dc
	if (cr6.eq) goto loc_82A443DC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82A443DC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a443cc
	if (!cr6.eq) goto loc_82A443CC;
loc_82A443EC:
	// subf. r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82a44410
	if (cr0.eq) goto loc_82A44410;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A443FC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a44408
	if (cr6.eq) goto loc_82A44408;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82A44408:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a443fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A443FC;
loc_82A44410:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a444c4
	if (cr6.eq) goto loc_82A444C4;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_82A44420:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4442c
	if (cr6.eq) goto loc_82A4442C;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82A4442C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a44420
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A44420;
	// b 0x82a444c4
	goto loc_82A444C4;
loc_82A44438:
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a44468
	if (cr6.eq) goto loc_82A44468;
loc_82A44448:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a44458
	if (cr6.eq) goto loc_82A44458;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82A44458:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a44448
	if (!cr6.eq) goto loc_82A44448;
loc_82A44468:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82a444a0
	if (cr6.eq) goto loc_82A444A0;
loc_82A44480:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a44490
	if (cr6.eq) goto loc_82A44490;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82A44490:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a44480
	if (!cr6.eq) goto loc_82A44480;
loc_82A444A0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a444c4
	if (cr6.eq) goto loc_82A444C4;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A444B0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a444bc
	if (cr6.eq) goto loc_82A444BC;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82A444BC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a444b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A444B0;
loc_82A444C4:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a444dc
	if (cr6.eq) goto loc_82A444DC;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82A444DC;
	sub_825952B8(ctx, base);
loc_82A444DC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A444F4"))) PPC_WEAK_FUNC(sub_82A444F4);
PPC_FUNC_IMPL(__imp__sub_82A444F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A444F8"))) PPC_WEAK_FUNC(sub_82A444F8);
PPC_FUNC_IMPL(__imp__sub_82A444F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A44500;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a44540
	if (!cr6.eq) goto loc_82A44540;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82a44540
	if (cr6.gt) goto loc_82A44540;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a442e8
	ctx.lr = 0x82A44540;
	sub_82A442E8(ctx, base);
loc_82A44540:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a44560
	if (cr6.gt) goto loc_82A44560;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82A44560:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a44594
	if (!cr6.eq) goto loc_82A44594;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A4458C;
	sub_82595718(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
loc_82A44594:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a445b8
	if (cr0.eq) goto loc_82A445B8;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lhz r9,2(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
loc_82A445B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A445CC"))) PPC_WEAK_FUNC(sub_82A445CC);
PPC_FUNC_IMPL(__imp__sub_82A445CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A445D0"))) PPC_WEAK_FUNC(sub_82A445D0);
PPC_FUNC_IMPL(__imp__sub_82A445D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A445D8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce778
	ctx.lr = 0x82A445E0;
	__savefpr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x82a445fc
	if (!cr6.lt) goto loc_82A445FC;
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// b 0x82a44604
	goto loc_82A44604;
loc_82A445FC:
	// fmr f28,f2
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f2.f64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
loc_82A44604:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a5c118
	ctx.lr = 0x82A44610;
	sub_82A5C118(ctx, base);
	// clrlwi r23,r3,24
	ctx.r23.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a5c118
	ctx.lr = 0x82A44620;
	sub_82A5C118(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x838a2b30
	ctx.lr = 0x82A44630;
	sub_838A2B30(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A44644:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a44644
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A44644;
	// clrlwi r20,r31,16
	ctx.r20.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// clrlwi r25,r23,16
	ctx.r25.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r26,r20,1
	ctx.r26.s64 = ctx.r20.s64 + 1;
	// cmpw cr6,r25,r26
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, xer);
	// beq cr6,0x82a44908
	if (cr6.eq) goto loc_82A44908;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A44668:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82A44674:
	// cmplwi cr6,r29,20
	cr6.compare<uint32_t>(ctx.r29.u32, 20, xer);
	// bge cr6,0x82a446d0
	if (!cr6.lt) goto loc_82A446D0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mulli r10,r11,84
	ctx.r10.s64 = ctx.r11.s64 * 84;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// add r7,r10,r22
	ctx.r7.u64 = ctx.r10.u64 + ctx.r22.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r21,1220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1220, ctx.r21.u32);
	// lhzx r5,r6,r22
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r22.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a446c4
	if (cr6.eq) goto loc_82A446C4;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// b 0x82a446d0
	goto loc_82A446D0;
loc_82A446C4:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// sthx r21,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r21.u16);
loc_82A446D0:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lhzx r27,r10,r9
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// ble cr6,0x82a44708
	if (!cr6.gt) goto loc_82A44708;
	// sth r8,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a444f8
	ctx.lr = 0x82A44700;
	sub_82A444F8(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82a448e0
	goto loc_82A448E0;
loc_82A44708:
	// bge cr6,0x82a448e0
	if (!cr6.lt) goto loc_82A448E0;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82A44710:
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a44738
	if (cr6.eq) goto loc_82A44738;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a44738
	if (cr6.eq) goto loc_82A44738;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82A44738:
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4475c
	if (cr6.eq) goto loc_82A4475C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4475c
	if (cr6.eq) goto loc_82A4475C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a44764
	if (!cr6.eq) goto loc_82A44764;
loc_82A4475C:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x82a44768
	goto loc_82A44768;
loc_82A44764:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A44768:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a44780
	if (cr6.gt) goto loc_82A44780;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82A44780:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// beq cr6,0x82a447c0
	if (cr6.eq) goto loc_82A447C0;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 & ctx.r6.u64;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
loc_82A447C0:
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// subf r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82a448ac
	if (cr6.lt) goto loc_82A448AC;
	// clrlwi r6,r31,16
	ctx.r6.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x82a448ac
	if (cr6.lt) goto loc_82A448AC;
	// subf r11,r6,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r6.s64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r9,84
	ctx.r11.s64 = ctx.r9.s64 * 84;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,1220
	ctx.r11.s64 = ctx.r11.s64 + 1220;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82a4486c
	if (!cr6.gt) goto loc_82A4486C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82A44820:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a4486c
	if (!cr6.eq) goto loc_82A4486C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82a44858
	if (cr6.gt) goto loc_82A44858;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82a44858
	if (cr6.gt) goto loc_82A44858;
	// sth r31,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r31.u16);
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
loc_82A44858:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82a44820
	if (cr6.lt) goto loc_82A44820;
loc_82A4486C:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a448a8
	if (!cr6.eq) goto loc_82A448A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// bge cr6,0x82a448a8
	if (!cr6.lt) goto loc_82A448A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r31,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// sth r5,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82A448A8:
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82A448AC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a44710
	if (cr6.lt) goto loc_82A44710;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a448e0
	if (cr6.eq) goto loc_82A448E0;
	// sth r4,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r4.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r3,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r3.u16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a444f8
	ctx.lr = 0x82A448E0;
	sub_82A444F8(ctx, base);
loc_82A448E0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,21
	cr6.compare<uint32_t>(ctx.r8.u32, 21, xer);
	// bne cr6,0x82a44674
	if (!cr6.eq) goto loc_82A44674;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x82a44668
	if (!cr6.eq) goto loc_82A44668;
loc_82A44908:
	// addis r26,r22,1
	ctx.r26.s64 = ctx.r22.s64 + 65536;
	// cmplw cr6,r25,r20
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r20.u32, xer);
	// addi r26,r26,-13916
	ctx.r26.s64 = ctx.r26.s64 + -13916;
	// stw r21,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r21.u32);
	// beq cr6,0x82a44a90
	if (cr6.eq) goto loc_82A44A90;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A4492C:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A44940:
	// add r11,r24,r29
	ctx.r11.u64 = ctx.r24.u64 + ctx.r29.u64;
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r30,r11,1220
	ctx.r30.s64 = ctx.r11.s64 + 1220;
	// lwz r9,1220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82a44a68
	if (!cr6.gt) goto loc_82A44A68;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r27,r23,24
	ctx.r27.u64 = ctx.r23.u32 & 0xFF;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82A44968:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82a5c1c8
	ctx.lr = 0x82A449B8;
	sub_82A5C1C8(ctx, base);
	// lfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82a449e8
	if (!cr6.gt) goto loc_82A449E8;
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82A449E8:
	// fcmpu cr6,f11,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// bge cr6,0x82a44a04
	if (!cr6.lt) goto loc_82A44A04;
	// fsubs f13,f28,f11
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82A44A04:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,600
	cr6.compare<uint32_t>(ctx.r11.u32, 600, xer);
	// bge cr6,0x82a44a54
	if (!cr6.lt) goto loc_82A44A54;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_82A44A54:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a44968
	if (cr6.lt) goto loc_82A44968;
loc_82A44A68:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// bne cr6,0x82a44940
	if (!cr6.eq) goto loc_82A44940;
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r20
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, xer);
	// bne cr6,0x82a4492c
	if (!cr6.eq) goto loc_82A4492C;
loc_82A44A90:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8344cfa0
	ctx.lr = 0x82A44A98;
	sub_8344CFA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A44AAC;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7c4
	ctx.lr = 0x82A44AB8;
	__restfpr_28(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A44ABC"))) PPC_WEAK_FUNC(sub_82A44ABC);
PPC_FUNC_IMPL(__imp__sub_82A44ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44AC0"))) PPC_WEAK_FUNC(sub_82A44AC0);
PPC_FUNC_IMPL(__imp__sub_82A44AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,200
	cr6.compare<uint32_t>(ctx.r4.u32, 200, xer);
	// bge cr6,0x82a44ae0
	if (!cr6.lt) goto loc_82A44AE0;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,136
	ctx.r3.s64 = ctx.r11.s64 + 136;
	// blr 
	return;
loc_82A44AE0:
	// addi r3,r3,8096
	ctx.r3.s64 = ctx.r3.s64 + 8096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44AE8"))) PPC_WEAK_FUNC(sub_82A44AE8);
PPC_FUNC_IMPL(__imp__sub_82A44AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,199
	ctx.r3.s64 = 199;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r8,136
	ctx.r9.s64 = ctx.r8.s64 + 136;
loc_82A44AF8:
	// cmplwi cr6,r10,200
	cr6.compare<uint32_t>(ctx.r10.u32, 200, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x82a44b08
	if (cr6.lt) goto loc_82A44B08;
	// addi r11,r8,8096
	ctx.r11.s64 = ctx.r8.s64 + 8096;
loc_82A44B08:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82a44b28
	if (cr6.lt) goto loc_82A44B28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmpwi cr6,r10,199
	cr6.compare<int32_t>(ctx.r10.s32, 199, xer);
	// ble cr6,0x82a44af8
	if (!cr6.gt) goto loc_82A44AF8;
	// blr 
	return;
loc_82A44B28:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44B30"))) PPC_WEAK_FUNC(sub_82A44B30);
PPC_FUNC_IMPL(__imp__sub_82A44B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A44B34:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a44b50
	if (cr6.eq) goto loc_82A44B50;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82A44B50:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82a44b34
	if (cr6.lt) goto loc_82A44B34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44B68"))) PPC_WEAK_FUNC(sub_82A44B68);
PPC_FUNC_IMPL(__imp__sub_82A44B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a44b8c
	if (!cr6.lt) goto loc_82A44B8C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// blr 
	return;
loc_82A44B8C:
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44B94"))) PPC_WEAK_FUNC(sub_82A44B94);
PPC_FUNC_IMPL(__imp__sub_82A44B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44B98"))) PPC_WEAK_FUNC(sub_82A44B98);
PPC_FUNC_IMPL(__imp__sub_82A44B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a44bb4
	if (!cr6.lt) goto loc_82A44BB4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A44BB4:
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44BBC"))) PPC_WEAK_FUNC(sub_82A44BBC);
PPC_FUNC_IMPL(__imp__sub_82A44BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44BC0"))) PPC_WEAK_FUNC(sub_82A44BC0);
PPC_FUNC_IMPL(__imp__sub_82A44BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A44BC4:
	// addi r11,r9,29
	ctx.r11.s64 = ctx.r9.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a44be0
	if (cr6.eq) goto loc_82A44BE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82A44BE0:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82a44bc4
	if (cr6.lt) goto loc_82A44BC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44BF8"))) PPC_WEAK_FUNC(sub_82A44BF8);
PPC_FUNC_IMPL(__imp__sub_82A44BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a44c1c
	if (!cr6.lt) goto loc_82A44C1C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// blr 
	return;
loc_82A44C1C:
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44C24"))) PPC_WEAK_FUNC(sub_82A44C24);
PPC_FUNC_IMPL(__imp__sub_82A44C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44C28"))) PPC_WEAK_FUNC(sub_82A44C28);
PPC_FUNC_IMPL(__imp__sub_82A44C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a44c44
	if (!cr6.lt) goto loc_82A44C44;
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A44C44:
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44C4C"))) PPC_WEAK_FUNC(sub_82A44C4C);
PPC_FUNC_IMPL(__imp__sub_82A44C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44C50"))) PPC_WEAK_FUNC(sub_82A44C50);
PPC_FUNC_IMPL(__imp__sub_82A44C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a44c7c
	if (cr6.lt) goto loc_82A44C7C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a44c7c
	if (!cr6.lt) goto loc_82A44C7C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a44c7c
	if (cr6.lt) goto loc_82A44C7C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a44c80
	if (cr6.lt) goto loc_82A44C80;
loc_82A44C7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A44C80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a44cd8
	if (cr6.eq) goto loc_82A44CD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a44cb8
	if (cr6.lt) goto loc_82A44CB8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a44cb8
	if (!cr6.lt) goto loc_82A44CB8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a44cb8
	if (cr6.lt) goto loc_82A44CB8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a44cbc
	if (cr6.lt) goto loc_82A44CBC;
loc_82A44CB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A44CBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a44cd8
	if (cr6.eq) goto loc_82A44CD8;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82A44CD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44CE0"))) PPC_WEAK_FUNC(sub_82A44CE0);
PPC_FUNC_IMPL(__imp__sub_82A44CE0) {
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
	// bl 0x83740858
	ctx.lr = 0x82A44CF0;
	sub_83740858(ctx, base);
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44D04"))) PPC_WEAK_FUNC(sub_82A44D04);
PPC_FUNC_IMPL(__imp__sub_82A44D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44D08"))) PPC_WEAK_FUNC(sub_82A44D08);
PPC_FUNC_IMPL(__imp__sub_82A44D08) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44D20"))) PPC_WEAK_FUNC(sub_82A44D20);
PPC_FUNC_IMPL(__imp__sub_82A44D20) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44D38"))) PPC_WEAK_FUNC(sub_82A44D38);
PPC_FUNC_IMPL(__imp__sub_82A44D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// ble cr6,0x82a44d48
	if (!cr6.gt) goto loc_82A44D48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A44D48:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sraw r10,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44D58"))) PPC_WEAK_FUNC(sub_82A44D58);
PPC_FUNC_IMPL(__imp__sub_82A44D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44D78"))) PPC_WEAK_FUNC(sub_82A44D78);
PPC_FUNC_IMPL(__imp__sub_82A44D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44D98"))) PPC_WEAK_FUNC(sub_82A44D98);
PPC_FUNC_IMPL(__imp__sub_82A44D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44DC0"))) PPC_WEAK_FUNC(sub_82A44DC0);
PPC_FUNC_IMPL(__imp__sub_82A44DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44DDC"))) PPC_WEAK_FUNC(sub_82A44DDC);
PPC_FUNC_IMPL(__imp__sub_82A44DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44DE0"))) PPC_WEAK_FUNC(sub_82A44DE0);
PPC_FUNC_IMPL(__imp__sub_82A44DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// lfs f0,48(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44E30"))) PPC_WEAK_FUNC(sub_82A44E30);
PPC_FUNC_IMPL(__imp__sub_82A44E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne cr6,0x82a44e50
	if (!cr6.eq) goto loc_82A44E50;
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
loc_82A44E50:
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44E58"))) PPC_WEAK_FUNC(sub_82A44E58);
PPC_FUNC_IMPL(__imp__sub_82A44E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r8,2
	ctx.r8.s64 = 2;
loc_82A44E5C:
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-36
	ctx.r10.s64 = ctx.r11.s64 + -36;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A44E74:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a44e74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A44E74;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82a44e5c
	if (cr6.gt) goto loc_82A44E5C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A44EA4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a44ea4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A44EA4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44EB4"))) PPC_WEAK_FUNC(sub_82A44EB4);
PPC_FUNC_IMPL(__imp__sub_82A44EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44EB8"))) PPC_WEAK_FUNC(sub_82A44EB8);
PPC_FUNC_IMPL(__imp__sub_82A44EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82a44ed4
	if (cr6.lt) goto loc_82A44ED4;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r11,r11,5,19,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1FE0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A44ED4:
	// rlwinm r11,r4,5,19,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1FE0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44EE0"))) PPC_WEAK_FUNC(sub_82A44EE0);
PPC_FUNC_IMPL(__imp__sub_82A44EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r7,11
	ctx.r7.s64 = 11;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r11,r7,r5
	xer.ca = ctx.r5.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// and r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 & ctx.r4.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mulli r10,r9,11
	ctx.r10.s64 = ctx.r9.s64 * 11;
	// and r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 & ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44F28"))) PPC_WEAK_FUNC(sub_82A44F28);
PPC_FUNC_IMPL(__imp__sub_82A44F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r7,11
	ctx.r7.s64 = 11;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r11,r7,r5
	xer.ca = ctx.r5.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// and r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 & ctx.r4.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mulli r10,r9,11
	ctx.r10.s64 = ctx.r9.s64 * 11;
	// and r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 & ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44F70"))) PPC_WEAK_FUNC(sub_82A44F70);
PPC_FUNC_IMPL(__imp__sub_82A44F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,97(r9)
	PPC_STORE_U8(ctx.r9.u32 + 97, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44F94"))) PPC_WEAK_FUNC(sub_82A44F94);
PPC_FUNC_IMPL(__imp__sub_82A44F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A44F98"))) PPC_WEAK_FUNC(sub_82A44F98);
PPC_FUNC_IMPL(__imp__sub_82A44F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// lfs f0,48(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A44FE8"))) PPC_WEAK_FUNC(sub_82A44FE8);
PPC_FUNC_IMPL(__imp__sub_82A44FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// lfs f0,48(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45038"))) PPC_WEAK_FUNC(sub_82A45038);
PPC_FUNC_IMPL(__imp__sub_82A45038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lbzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r11,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45054"))) PPC_WEAK_FUNC(sub_82A45054);
PPC_FUNC_IMPL(__imp__sub_82A45054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45058"))) PPC_WEAK_FUNC(sub_82A45058);
PPC_FUNC_IMPL(__imp__sub_82A45058) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a44c50
	ctx.lr = 0x82A45070;
	sub_82A44C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a450e8
	if (cr6.eq) goto loc_82A450E8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-11316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x82a450e8
	if (cr6.gt) goto loc_82A450E8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A450E8:
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

__attribute__((alias("__imp__sub_82A450FC"))) PPC_WEAK_FUNC(sub_82A450FC);
PPC_FUNC_IMPL(__imp__sub_82A450FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45100"))) PPC_WEAK_FUNC(sub_82A45100);
PPC_FUNC_IMPL(__imp__sub_82A45100) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a44c50
	ctx.lr = 0x82A45120;
	sub_82A44C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45208
	if (cr6.eq) goto loc_82A45208;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a45208
	if (cr6.eq) goto loc_82A45208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82A45140;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a45164
	if (!cr6.gt) goto loc_82A45164;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x82a4515c
	if (!cr6.gt) goto loc_82A4515C;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82a45164
	if (!cr6.eq) goto loc_82A45164;
loc_82A4515C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a45168
	goto loc_82A45168;
loc_82A45164:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A45168:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a45184
	if (!cr6.eq) goto loc_82A45184;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a45184
	if (cr6.eq) goto loc_82A45184;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a45208
	if (!cr6.eq) goto loc_82A45208;
loc_82A45184:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a451a8
	if (!cr6.eq) goto loc_82A451A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a451ac
	if (cr6.eq) goto loc_82A451AC;
loc_82A451A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A451AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45208
	if (cr6.eq) goto loc_82A45208;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a45208
	if (!cr6.lt) goto loc_82A45208;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x83740868
	ctx.lr = 0x82A451D0;
	sub_83740868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83740858
	ctx.lr = 0x82A451EC;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bge cr6,0x82a45208
	if (!cr6.lt) goto loc_82A45208;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82a4520c
	if (!cr6.gt) goto loc_82A4520C;
loc_82A45208:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4520C:
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

__attribute__((alias("__imp__sub_82A45224"))) PPC_WEAK_FUNC(sub_82A45224);
PPC_FUNC_IMPL(__imp__sub_82A45224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45228"))) PPC_WEAK_FUNC(sub_82A45228);
PPC_FUNC_IMPL(__imp__sub_82A45228) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsubs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,20048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20048);
	ctx.f13.f64 = double(temp.f32);
	// li r3,4
	ctx.r3.s64 = 4;
	// fabs f0,f11
	ctx.f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmadds f6,f8,f1,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fcmpu cr6,f7,f6
	cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// ble cr6,0x82a4529c
	if (!cr6.gt) goto loc_82A4529C;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a4527c
	if (!cr6.lt) goto loc_82A4527C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A4527C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a45294
	if (!cr6.gt) goto loc_82A45294;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A45294:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A4529C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A452AC"))) PPC_WEAK_FUNC(sub_82A452AC);
PPC_FUNC_IMPL(__imp__sub_82A452AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A452B0"))) PPC_WEAK_FUNC(sub_82A452B0);
PPC_FUNC_IMPL(__imp__sub_82A452B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// blt cr6,0x82a452c0
	if (cr6.lt) goto loc_82A452C0;
	// li r5,32
	ctx.r5.s64 = 32;
loc_82A452C0:
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A452D8"))) PPC_WEAK_FUNC(sub_82A452D8);
PPC_FUNC_IMPL(__imp__sub_82A452D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45300"))) PPC_WEAK_FUNC(sub_82A45300);
PPC_FUNC_IMPL(__imp__sub_82A45300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45328"))) PPC_WEAK_FUNC(sub_82A45328);
PPC_FUNC_IMPL(__imp__sub_82A45328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// addi r10,r11,21
	ctx.r10.s64 = ctx.r11.s64 + 21;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45350"))) PPC_WEAK_FUNC(sub_82A45350);
PPC_FUNC_IMPL(__imp__sub_82A45350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x82a45390
	if (cr6.lt) goto loc_82A45390;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A45364:
	// lbz r10,9(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a45364
	if (cr6.lt) goto loc_82A45364;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_82A45390:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,9(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4539C"))) PPC_WEAK_FUNC(sub_82A4539C);
PPC_FUNC_IMPL(__imp__sub_82A4539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A453A0"))) PPC_WEAK_FUNC(sub_82A453A0);
PPC_FUNC_IMPL(__imp__sub_82A453A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82a453e4
	if (cr6.lt) goto loc_82A453E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A453B8:
	// lbz r8,11(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a453b8
	if (cr6.lt) goto loc_82A453B8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_82A453E4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,11(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A453F0"))) PPC_WEAK_FUNC(sub_82A453F0);
PPC_FUNC_IMPL(__imp__sub_82A453F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82a45434
	if (cr6.lt) goto loc_82A45434;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A45408:
	// lbz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a45408
	if (cr6.lt) goto loc_82A45408;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_82A45434:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45440"))) PPC_WEAK_FUNC(sub_82A45440);
PPC_FUNC_IMPL(__imp__sub_82A45440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x82a45484
	if (cr6.lt) goto loc_82A45484;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A45458:
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x82a45458
	if (cr6.lt) goto loc_82A45458;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_82A45484:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,21(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45490"))) PPC_WEAK_FUNC(sub_82A45490);
PPC_FUNC_IMPL(__imp__sub_82A45490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A454B8"))) PPC_WEAK_FUNC(sub_82A454B8);
PPC_FUNC_IMPL(__imp__sub_82A454B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A454CC"))) PPC_WEAK_FUNC(sub_82A454CC);
PPC_FUNC_IMPL(__imp__sub_82A454CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A454D0"))) PPC_WEAK_FUNC(sub_82A454D0);
PPC_FUNC_IMPL(__imp__sub_82A454D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A454E0"))) PPC_WEAK_FUNC(sub_82A454E0);
PPC_FUNC_IMPL(__imp__sub_82A454E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 & ctx.r4.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A45508"))) PPC_WEAK_FUNC(sub_82A45508);
PPC_FUNC_IMPL(__imp__sub_82A45508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a45540
	if (cr6.eq) goto loc_82A45540;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lbz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
loc_82A45540:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4554C"))) PPC_WEAK_FUNC(sub_82A4554C);
PPC_FUNC_IMPL(__imp__sub_82A4554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45550"))) PPC_WEAK_FUNC(sub_82A45550);
PPC_FUNC_IMPL(__imp__sub_82A45550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// beq cr6,0x82a45570
	if (cr6.eq) goto loc_82A45570;
	// lhz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// b 0x82a45574
	goto loc_82A45574;
loc_82A45570:
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
loc_82A45574:
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4558C"))) PPC_WEAK_FUNC(sub_82A4558C);
PPC_FUNC_IMPL(__imp__sub_82A4558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A45590"))) PPC_WEAK_FUNC(sub_82A45590);
PPC_FUNC_IMPL(__imp__sub_82A45590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a455cc
	if (cr6.eq) goto loc_82A455CC;
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r9,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r9.u16);
	// blr 
	return;
loc_82A455CC:
	// slw r8,r11,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// not r11,r8
	ctx.r11.u64 = ~ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// sth r9,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r9.u16);
	// blr 
	return;
}

