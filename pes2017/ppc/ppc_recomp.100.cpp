#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A181C0"))) PPC_WEAK_FUNC(sub_82A181C0);
PPC_FUNC_IMPL(__imp__sub_82A181C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,30
	cr6.compare<int32_t>(ctx.r4.s32, 30, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A181D8"))) PPC_WEAK_FUNC(sub_82A181D8);
PPC_FUNC_IMPL(__imp__sub_82A181D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// b 0x82a2f560
	sub_82A2F560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A181E0"))) PPC_WEAK_FUNC(sub_82A181E0);
PPC_FUNC_IMPL(__imp__sub_82A181E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// b 0x82a2f5e0
	sub_82A2F5E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A181E8"))) PPC_WEAK_FUNC(sub_82A181E8);
PPC_FUNC_IMPL(__imp__sub_82A181E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// b 0x82a2f620
	sub_82A2F620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A181F0"))) PPC_WEAK_FUNC(sub_82A181F0);
PPC_FUNC_IMPL(__imp__sub_82A181F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// b 0x82a2eda0
	sub_82A2EDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A181F8"))) PPC_WEAK_FUNC(sub_82A181F8);
PPC_FUNC_IMPL(__imp__sub_82A181F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// b 0x82a2edf0
	sub_82A2EDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18200"))) PPC_WEAK_FUNC(sub_82A18200);
PPC_FUNC_IMPL(__imp__sub_82A18200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55048
	ctx.r11.u64 = ctx.r11.u64 | 55048;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18210"))) PPC_WEAK_FUNC(sub_82A18210);
PPC_FUNC_IMPL(__imp__sub_82A18210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55048
	ctx.r11.u64 = ctx.r11.u64 | 55048;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18220"))) PPC_WEAK_FUNC(sub_82A18220);
PPC_FUNC_IMPL(__imp__sub_82A18220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55052
	ctx.r11.u64 = ctx.r11.u64 | 55052;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18230"))) PPC_WEAK_FUNC(sub_82A18230);
PPC_FUNC_IMPL(__imp__sub_82A18230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55052
	ctx.r11.u64 = ctx.r11.u64 | 55052;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18240"))) PPC_WEAK_FUNC(sub_82A18240);
PPC_FUNC_IMPL(__imp__sub_82A18240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55060
	ctx.r11.u64 = ctx.r11.u64 | 55060;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18250"))) PPC_WEAK_FUNC(sub_82A18250);
PPC_FUNC_IMPL(__imp__sub_82A18250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-10476
	ctx.r11.s64 = ctx.r11.s64 + -10476;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1826C"))) PPC_WEAK_FUNC(sub_82A1826C);
PPC_FUNC_IMPL(__imp__sub_82A1826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18270"))) PPC_WEAK_FUNC(sub_82A18270);
PPC_FUNC_IMPL(__imp__sub_82A18270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55064
	ctx.r11.u64 = ctx.r11.u64 | 55064;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18280"))) PPC_WEAK_FUNC(sub_82A18280);
PPC_FUNC_IMPL(__imp__sub_82A18280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-10472
	ctx.r11.s64 = ctx.r11.s64 + -10472;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,55060
	ctx.r9.u64 = ctx.r10.u64 | 55060;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A182B0"))) PPC_WEAK_FUNC(sub_82A182B0);
PPC_FUNC_IMPL(__imp__sub_82A182B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55068
	ctx.r11.u64 = ctx.r11.u64 | 55068;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A182C0"))) PPC_WEAK_FUNC(sub_82A182C0);
PPC_FUNC_IMPL(__imp__sub_82A182C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55068
	ctx.r11.u64 = ctx.r11.u64 | 55068;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A182D0"))) PPC_WEAK_FUNC(sub_82A182D0);
PPC_FUNC_IMPL(__imp__sub_82A182D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55069
	ctx.r11.u64 = ctx.r11.u64 | 55069;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A182E0"))) PPC_WEAK_FUNC(sub_82A182E0);
PPC_FUNC_IMPL(__imp__sub_82A182E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55286
	ctx.r11.u64 = ctx.r11.u64 | 55286;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A182F0"))) PPC_WEAK_FUNC(sub_82A182F0);
PPC_FUNC_IMPL(__imp__sub_82A182F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55286
	ctx.r11.u64 = ctx.r11.u64 | 55286;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18300"))) PPC_WEAK_FUNC(sub_82A18300);
PPC_FUNC_IMPL(__imp__sub_82A18300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55287
	ctx.r11.u64 = ctx.r11.u64 | 55287;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18310"))) PPC_WEAK_FUNC(sub_82A18310);
PPC_FUNC_IMPL(__imp__sub_82A18310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r11,55108
	ctx.r9.u64 = ctx.r11.u64 | 55108;
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1832C"))) PPC_WEAK_FUNC(sub_82A1832C);
PPC_FUNC_IMPL(__imp__sub_82A1832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18330"))) PPC_WEAK_FUNC(sub_82A18330);
PPC_FUNC_IMPL(__imp__sub_82A18330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a18340
	if (cr6.lt) goto loc_82A18340;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A18340:
	// addi r11,r4,13802
	ctx.r11.s64 = ctx.r4.s64 + 13802;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18350"))) PPC_WEAK_FUNC(sub_82A18350);
PPC_FUNC_IMPL(__imp__sub_82A18350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,13802
	ctx.r11.s64 = ctx.r4.s64 + 13802;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18368"))) PPC_WEAK_FUNC(sub_82A18368);
PPC_FUNC_IMPL(__imp__sub_82A18368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,13802
	ctx.r11.s64 = ctx.r4.s64 + 13802;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18384"))) PPC_WEAK_FUNC(sub_82A18384);
PPC_FUNC_IMPL(__imp__sub_82A18384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18388"))) PPC_WEAK_FUNC(sub_82A18388);
PPC_FUNC_IMPL(__imp__sub_82A18388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// blt cr6,0x82a18398
	if (cr6.lt) goto loc_82A18398;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A18398:
	// lis r11,0
	ctx.r11.s64 = 0;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r11,55252
	ctx.r9.u64 = ctx.r11.u64 | 55252;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A183AC"))) PPC_WEAK_FUNC(sub_82A183AC);
PPC_FUNC_IMPL(__imp__sub_82A183AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A183B0"))) PPC_WEAK_FUNC(sub_82A183B0);
PPC_FUNC_IMPL(__imp__sub_82A183B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,13780
	ctx.r11.s64 = ctx.r4.s64 + 13780;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A183D0"))) PPC_WEAK_FUNC(sub_82A183D0);
PPC_FUNC_IMPL(__imp__sub_82A183D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,13791
	ctx.r11.s64 = ctx.r4.s64 + 13791;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A183E8"))) PPC_WEAK_FUNC(sub_82A183E8);
PPC_FUNC_IMPL(__imp__sub_82A183E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// blt cr6,0x82a183f8
	if (cr6.lt) goto loc_82A183F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A183F8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r11,55274
	ctx.r9.u64 = ctx.r11.u64 | 55274;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1840C"))) PPC_WEAK_FUNC(sub_82A1840C);
PPC_FUNC_IMPL(__imp__sub_82A1840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18410"))) PPC_WEAK_FUNC(sub_82A18410);
PPC_FUNC_IMPL(__imp__sub_82A18410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55288
	ctx.r11.u64 = ctx.r11.u64 | 55288;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18420"))) PPC_WEAK_FUNC(sub_82A18420);
PPC_FUNC_IMPL(__imp__sub_82A18420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55288
	ctx.r11.u64 = ctx.r11.u64 | 55288;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18430"))) PPC_WEAK_FUNC(sub_82A18430);
PPC_FUNC_IMPL(__imp__sub_82A18430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55292
	ctx.r11.u64 = ctx.r11.u64 | 55292;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18440"))) PPC_WEAK_FUNC(sub_82A18440);
PPC_FUNC_IMPL(__imp__sub_82A18440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55292
	ctx.r11.u64 = ctx.r11.u64 | 55292;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18450"))) PPC_WEAK_FUNC(sub_82A18450);
PPC_FUNC_IMPL(__imp__sub_82A18450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55296
	ctx.r11.u64 = ctx.r11.u64 | 55296;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18460"))) PPC_WEAK_FUNC(sub_82A18460);
PPC_FUNC_IMPL(__imp__sub_82A18460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55296
	ctx.r11.u64 = ctx.r11.u64 | 55296;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18470"))) PPC_WEAK_FUNC(sub_82A18470);
PPC_FUNC_IMPL(__imp__sub_82A18470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55300
	ctx.r11.u64 = ctx.r11.u64 | 55300;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18480"))) PPC_WEAK_FUNC(sub_82A18480);
PPC_FUNC_IMPL(__imp__sub_82A18480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55300
	ctx.r11.u64 = ctx.r11.u64 | 55300;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18490"))) PPC_WEAK_FUNC(sub_82A18490);
PPC_FUNC_IMPL(__imp__sub_82A18490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55304
	ctx.r11.u64 = ctx.r11.u64 | 55304;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A184A0"))) PPC_WEAK_FUNC(sub_82A184A0);
PPC_FUNC_IMPL(__imp__sub_82A184A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55304
	ctx.r11.u64 = ctx.r11.u64 | 55304;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A184B0"))) PPC_WEAK_FUNC(sub_82A184B0);
PPC_FUNC_IMPL(__imp__sub_82A184B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55308
	ctx.r11.u64 = ctx.r11.u64 | 55308;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A184C0"))) PPC_WEAK_FUNC(sub_82A184C0);
PPC_FUNC_IMPL(__imp__sub_82A184C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55308
	ctx.r11.u64 = ctx.r11.u64 | 55308;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A184D0"))) PPC_WEAK_FUNC(sub_82A184D0);
PPC_FUNC_IMPL(__imp__sub_82A184D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55312
	ctx.r11.u64 = ctx.r11.u64 | 55312;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A184E0"))) PPC_WEAK_FUNC(sub_82A184E0);
PPC_FUNC_IMPL(__imp__sub_82A184E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55070
	ctx.r11.u64 = ctx.r11.u64 | 55070;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A184F0"))) PPC_WEAK_FUNC(sub_82A184F0);
PPC_FUNC_IMPL(__imp__sub_82A184F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55070
	ctx.r11.u64 = ctx.r11.u64 | 55070;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18500"))) PPC_WEAK_FUNC(sub_82A18500);
PPC_FUNC_IMPL(__imp__sub_82A18500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55071
	ctx.r11.u64 = ctx.r11.u64 | 55071;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18510"))) PPC_WEAK_FUNC(sub_82A18510);
PPC_FUNC_IMPL(__imp__sub_82A18510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55071
	ctx.r11.u64 = ctx.r11.u64 | 55071;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18520"))) PPC_WEAK_FUNC(sub_82A18520);
PPC_FUNC_IMPL(__imp__sub_82A18520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a18530
	if (!cr6.eq) goto loc_82A18530;
loc_82A18528:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A18530:
	// lfs f11,24(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a18528
	if (cr6.lt) goto loc_82A18528;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// blt cr6,0x82a18528
	if (cr6.lt) goto loc_82A18528;
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// blt cr6,0x82a18528
	if (cr6.lt) goto loc_82A18528;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a18528
	if (cr6.lt) goto loc_82A18528;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82a18528
	if (cr6.lt) goto loc_82A18528;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a185b4
	if (!cr6.lt) goto loc_82A185B4;
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a185b4
	if (!cr6.lt) goto loc_82A185B4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
loc_82A185B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A185BC"))) PPC_WEAK_FUNC(sub_82A185BC);
PPC_FUNC_IMPL(__imp__sub_82A185BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A185C0"))) PPC_WEAK_FUNC(sub_82A185C0);
PPC_FUNC_IMPL(__imp__sub_82A185C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a185ec
	if (!cr6.eq) goto loc_82A185EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A185EC:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// lfs f8,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f8,f1
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fsubs f11,f1,f8
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// lfs f13,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f7
	cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// fadds f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// bge cr6,0x82a18624
	if (!cr6.lt) goto loc_82A18624;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82A18624:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a18634
	if (!cr6.lt) goto loc_82A18634;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82A18634:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a18644
	if (!cr6.lt) goto loc_82A18644;
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82A18644:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a18654
	if (!cr6.lt) goto loc_82A18654;
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82A18654:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a1866c
	if (!cr6.lt) goto loc_82A1866C;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82A1866C:
	// lfs f7,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a18520
	ctx.lr = 0x82A18690;
	sub_82A18520(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82a1870c
	if (cr6.eq) goto loc_82A1870C;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fdivs f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fdivs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fdivs f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fdivs f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fsubs f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f8
	cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// fadds f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// bgt cr6,0x82a186e4
	if (cr6.gt) goto loc_82A186E4;
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bgt cr6,0x82a186e4
	if (cr6.gt) goto loc_82A186E4;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82A186E4:
	// fcmpu cr6,f8,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x82a186f8
	if (cr6.gt) goto loc_82A186F8;
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82A186F8:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a1870c
	if (cr6.gt) goto loc_82A1870C;
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_82A1870C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18720"))) PPC_WEAK_FUNC(sub_82A18720);
PPC_FUNC_IMPL(__imp__sub_82A18720) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-10464
	ctx.r3.s64 = ctx.r3.s64 + -10464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1872C"))) PPC_WEAK_FUNC(sub_82A1872C);
PPC_FUNC_IMPL(__imp__sub_82A1872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18730"))) PPC_WEAK_FUNC(sub_82A18730);
PPC_FUNC_IMPL(__imp__sub_82A18730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-10464
	ctx.r10.s64 = ctx.r10.s64 + -10464;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18754"))) PPC_WEAK_FUNC(sub_82A18754);
PPC_FUNC_IMPL(__imp__sub_82A18754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18758"))) PPC_WEAK_FUNC(sub_82A18758);
PPC_FUNC_IMPL(__imp__sub_82A18758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55100
	ctx.r11.u64 = ctx.r11.u64 | 55100;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18768"))) PPC_WEAK_FUNC(sub_82A18768);
PPC_FUNC_IMPL(__imp__sub_82A18768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,55104
	ctx.r11.u64 = ctx.r11.u64 | 55104;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1877C"))) PPC_WEAK_FUNC(sub_82A1877C);
PPC_FUNC_IMPL(__imp__sub_82A1877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18780"))) PPC_WEAK_FUNC(sub_82A18780);
PPC_FUNC_IMPL(__imp__sub_82A18780) {
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
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bgt cr6,0x82a18818
	if (cr6.gt) goto loc_82A18818;
	// lis r12,-32094
	ctx.r12.s64 = -2103312384;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30780
	ctx.r12.s64 = ctx.r12.s64 + -30780;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A18814;
	case 1:
		goto loc_82A18818;
	case 2:
		goto loc_82A18818;
	case 3:
		goto loc_82A18818;
	case 4:
		goto loc_82A18818;
	case 5:
		goto loc_82A18814;
	case 6:
		goto loc_82A18814;
	case 7:
		goto loc_82A18818;
	case 8:
		goto loc_82A18814;
	case 9:
		goto loc_82A18818;
	case 10:
		goto loc_82A18818;
	case 11:
		goto loc_82A18818;
	case 12:
		goto loc_82A18814;
	case 13:
		goto loc_82A18818;
	case 14:
		goto loc_82A18818;
	case 15:
		goto loc_82A18818;
	case 16:
		goto loc_82A18818;
	case 17:
		goto loc_82A18818;
	case 18:
		goto loc_82A18818;
	case 19:
		goto loc_82A18814;
	default:
		return;
	}
	// lwz r21,-30700(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30700);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30700(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30700);
	// lwz r21,-30700(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30700);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30700(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30700);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30700(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30700);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30696(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30696);
	// lwz r21,-30700(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -30700);
loc_82A18814:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A18818:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a18894
	if (cr6.eq) goto loc_82A18894;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-10432
	ctx.r31.s64 = ctx.r31.s64 + -10432;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x82A1883C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a18894
	if (cr6.eq) goto loc_82A18894;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82a18894
	if (cr6.eq) goto loc_82A18894;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,2000
	cr6.compare<uint32_t>(ctx.r8.u32, 2000, xer);
	// bgt cr6,0x82a18898
	if (cr6.gt) goto loc_82A18898;
loc_82A18894:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A18898:
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

__attribute__((alias("__imp__sub_82A188B0"))) PPC_WEAK_FUNC(sub_82A188B0);
PPC_FUNC_IMPL(__imp__sub_82A188B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55320
	ctx.r11.u64 = ctx.r11.u64 | 55320;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A188C0"))) PPC_WEAK_FUNC(sub_82A188C0);
PPC_FUNC_IMPL(__imp__sub_82A188C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55096
	ctx.r11.u64 = ctx.r11.u64 | 55096;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A188D0"))) PPC_WEAK_FUNC(sub_82A188D0);
PPC_FUNC_IMPL(__imp__sub_82A188D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55096
	ctx.r11.u64 = ctx.r11.u64 | 55096;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A188E0"))) PPC_WEAK_FUNC(sub_82A188E0);
PPC_FUNC_IMPL(__imp__sub_82A188E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,-10452
	ctx.r10.s64 = ctx.r10.s64 + -10452;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18904"))) PPC_WEAK_FUNC(sub_82A18904);
PPC_FUNC_IMPL(__imp__sub_82A18904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18908"))) PPC_WEAK_FUNC(sub_82A18908);
PPC_FUNC_IMPL(__imp__sub_82A18908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-10452
	ctx.r10.s64 = ctx.r10.s64 + -10452;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1892C"))) PPC_WEAK_FUNC(sub_82A1892C);
PPC_FUNC_IMPL(__imp__sub_82A1892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18930"))) PPC_WEAK_FUNC(sub_82A18930);
PPC_FUNC_IMPL(__imp__sub_82A18930) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// b 0x82a2ea50
	sub_82A2EA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18938"))) PPC_WEAK_FUNC(sub_82A18938);
PPC_FUNC_IMPL(__imp__sub_82A18938) {
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
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x82a2ee50
	ctx.lr = 0x82A1894C;
	sub_82A2EE50(ctx, base);
	// lfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
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

__attribute__((alias("__imp__sub_82A18960"))) PPC_WEAK_FUNC(sub_82A18960);
PPC_FUNC_IMPL(__imp__sub_82A18960) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r4,156
	ctx.r31.s64 = ctx.r4.s64 + 156;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82A18988;
	sub_82A2EE50(ctx, base);
	// lfs f31,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82A18994;
	sub_82A2EE50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A189CC"))) PPC_WEAK_FUNC(sub_82A189CC);
PPC_FUNC_IMPL(__imp__sub_82A189CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A189D0"))) PPC_WEAK_FUNC(sub_82A189D0);
PPC_FUNC_IMPL(__imp__sub_82A189D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55316
	ctx.r11.u64 = ctx.r11.u64 | 55316;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A189E0"))) PPC_WEAK_FUNC(sub_82A189E0);
PPC_FUNC_IMPL(__imp__sub_82A189E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55316
	ctx.r11.u64 = ctx.r11.u64 | 55316;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A189F0"))) PPC_WEAK_FUNC(sub_82A189F0);
PPC_FUNC_IMPL(__imp__sub_82A189F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3464
	ctx.r9.s64 = ctx.r11.s64 + 3464;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A18A00:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x82a18a24
	if (cr6.eq) goto loc_82A18A24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82a18a00
	if (cr6.lt) goto loc_82A18A00;
	// li r3,158
	ctx.r3.s64 = 158;
	// blr 
	return;
loc_82A18A24:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18A34"))) PPC_WEAK_FUNC(sub_82A18A34);
PPC_FUNC_IMPL(__imp__sub_82A18A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18A38"))) PPC_WEAK_FUNC(sub_82A18A38);
PPC_FUNC_IMPL(__imp__sub_82A18A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55056
	ctx.r11.u64 = ctx.r11.u64 | 55056;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18A48"))) PPC_WEAK_FUNC(sub_82A18A48);
PPC_FUNC_IMPL(__imp__sub_82A18A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,55056
	ctx.r11.u64 = ctx.r11.u64 | 55056;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18A58"))) PPC_WEAK_FUNC(sub_82A18A58);
PPC_FUNC_IMPL(__imp__sub_82A18A58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18A78"))) PPC_WEAK_FUNC(sub_82A18A78);
PPC_FUNC_IMPL(__imp__sub_82A18A78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18A84"))) PPC_WEAK_FUNC(sub_82A18A84);
PPC_FUNC_IMPL(__imp__sub_82A18A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18A88"))) PPC_WEAK_FUNC(sub_82A18A88);
PPC_FUNC_IMPL(__imp__sub_82A18A88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18A9C"))) PPC_WEAK_FUNC(sub_82A18A9C);
PPC_FUNC_IMPL(__imp__sub_82A18A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18AA0"))) PPC_WEAK_FUNC(sub_82A18AA0);
PPC_FUNC_IMPL(__imp__sub_82A18AA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18AAC"))) PPC_WEAK_FUNC(sub_82A18AAC);
PPC_FUNC_IMPL(__imp__sub_82A18AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18AB0"))) PPC_WEAK_FUNC(sub_82A18AB0);
PPC_FUNC_IMPL(__imp__sub_82A18AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18AC0"))) PPC_WEAK_FUNC(sub_82A18AC0);
PPC_FUNC_IMPL(__imp__sub_82A18AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r10,55280
	ctx.r9.u64 = ctx.r10.u64 | 55280;
	// lbzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18AD4"))) PPC_WEAK_FUNC(sub_82A18AD4);
PPC_FUNC_IMPL(__imp__sub_82A18AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18AD8"))) PPC_WEAK_FUNC(sub_82A18AD8);
PPC_FUNC_IMPL(__imp__sub_82A18AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r10,55280
	ctx.r9.u64 = ctx.r10.u64 | 55280;
	// stbx r5,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18AEC"))) PPC_WEAK_FUNC(sub_82A18AEC);
PPC_FUNC_IMPL(__imp__sub_82A18AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18AF0"))) PPC_WEAK_FUNC(sub_82A18AF0);
PPC_FUNC_IMPL(__imp__sub_82A18AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-10256
	ctx.r10.s64 = ctx.r10.s64 + -10256;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A18B08:
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a18b08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A18B08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18B18"))) PPC_WEAK_FUNC(sub_82A18B18);
PPC_FUNC_IMPL(__imp__sub_82A18B18) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18B20"))) PPC_WEAK_FUNC(sub_82A18B20);
PPC_FUNC_IMPL(__imp__sub_82A18B20) {
	PPC_FUNC_PROLOGUE();
	// stb r4,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18B28"))) PPC_WEAK_FUNC(sub_82A18B28);
PPC_FUNC_IMPL(__imp__sub_82A18B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18B38"))) PPC_WEAK_FUNC(sub_82A18B38);
PPC_FUNC_IMPL(__imp__sub_82A18B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10472
	ctx.r11.s64 = ctx.r11.s64 + -10472;
	// ori r9,r10,55052
	ctx.r9.u64 = ctx.r10.u64 | 55052;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a18b60
	if (cr6.eq) goto loc_82A18B60;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A18B60:
	// li r8,11
	ctx.r8.s64 = 11;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,-10416
	ctx.r11.s64 = ctx.r11.s64 + -10416;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r8,r8,55108
	ctx.r8.u64 = ctx.r8.u64 | 55108;
loc_82A18B7C:
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x82a18b98
	if (!cr6.lt) goto loc_82A18B98;
	// add r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stbx r10,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_82A18B98:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a18b7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A18B7C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18BA8"))) PPC_WEAK_FUNC(sub_82A18BA8);
PPC_FUNC_IMPL(__imp__sub_82A18BA8) {
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
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a18bf4
	if (!cr6.eq) goto loc_82A18BF4;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x82a2ea50
	ctx.lr = 0x82A18BD0;
	sub_82A2EA50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a18bf4
	if (cr6.eq) goto loc_82A18BF4;
loc_82A18BDC:
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
loc_82A18BF4:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82a18c14
	if (!cr6.eq) goto loc_82A18C14;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82a2ea50
	ctx.lr = 0x82A18C08;
	sub_82A2EA50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a18bdc
	if (!cr6.eq) goto loc_82A18BDC;
loc_82A18C14:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82a18c38
	if (!cr6.eq) goto loc_82A18C38;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82a2ea50
	ctx.lr = 0x82A18C28;
	sub_82A2EA50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a18c3c
	if (!cr6.eq) goto loc_82A18C3C;
loc_82A18C38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A18C3C:
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

__attribute__((alias("__imp__sub_82A18C50"))) PPC_WEAK_FUNC(sub_82A18C50);
PPC_FUNC_IMPL(__imp__sub_82A18C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A18C58;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,156
	ctx.r29.s64 = ctx.r4.s64 + 156;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x82A18C7C;
	sub_82A2EA60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bne cr6,0x82a18d88
	if (!cr6.eq) goto loc_82A18D88;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82A18CA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2f4d8
	ctx.lr = 0x82A18CB0;
	sub_82A2F4D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x82A18CC0;
	sub_82A2EA60(ctx, base);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// blt cr6,0x82a18cd4
	if (cr6.lt) goto loc_82A18CD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a18cf0
	goto loc_82A18CF0;
loc_82A18CD4:
	// rlwinm r10,r31,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r31,29
	ctx.r9.u64 = ctx.r31.u32 & 0x7;
	// slw r8,r27,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A18CF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a18d14
	if (cr6.eq) goto loc_82A18D14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x82A18D08;
	sub_82A2EA60(ctx, base);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a18d24
	if (!cr6.eq) goto loc_82A18D24;
loc_82A18D14:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(ctx.r28.u32, 16, xer);
	// blt cr6,0x82a18ca8
	if (cr6.lt) goto loc_82A18CA8;
	// b 0x82a18d48
	goto loc_82A18D48;
loc_82A18D24:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x82A18D30;
	sub_82A2EA60(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82A18D48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82A18D50;
	sub_82A2EE50(ctx, base);
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82a2ee50
	ctx.lr = 0x82A18D68;
	sub_82A2EE50(ctx, base);
	// lfs f11,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A18D88:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82a18d98
	if (cr6.eq) goto loc_82A18D98;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82a18e00
	if (!cr6.eq) goto loc_82A18E00;
loc_82A18D98:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,7472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a18dc4
	if (!cr6.gt) goto loc_82A18DC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a18dc4
	if (!cr6.lt) goto loc_82A18DC4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82a18de0
	goto loc_82A18DE0;
loc_82A18DC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-8332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8332);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a18de0
	if (cr6.lt) goto loc_82A18DE0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82A18DE0:
	// bl 0x82a2ea60
	ctx.lr = 0x82A18DE4;
	sub_82A2EA60(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82A18E00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A18E10"))) PPC_WEAK_FUNC(sub_82A18E10);
PPC_FUNC_IMPL(__imp__sub_82A18E10) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18E6C"))) PPC_WEAK_FUNC(sub_82A18E6C);
PPC_FUNC_IMPL(__imp__sub_82A18E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18E70"))) PPC_WEAK_FUNC(sub_82A18E70);
PPC_FUNC_IMPL(__imp__sub_82A18E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_82A18E84"))) PPC_WEAK_FUNC(sub_82A18E84);
PPC_FUNC_IMPL(__imp__sub_82A18E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18E88"))) PPC_WEAK_FUNC(sub_82A18E88);
PPC_FUNC_IMPL(__imp__sub_82A18E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A18E9C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a18e9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A18E9C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18EA8"))) PPC_WEAK_FUNC(sub_82A18EA8);
PPC_FUNC_IMPL(__imp__sub_82A18EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A18EB4"))) PPC_WEAK_FUNC(sub_82A18EB4);
PPC_FUNC_IMPL(__imp__sub_82A18EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18EB8"))) PPC_WEAK_FUNC(sub_82A18EB8);
PPC_FUNC_IMPL(__imp__sub_82A18EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_82A18ECC"))) PPC_WEAK_FUNC(sub_82A18ECC);
PPC_FUNC_IMPL(__imp__sub_82A18ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A18ED0"))) PPC_WEAK_FUNC(sub_82A18ED0);
PPC_FUNC_IMPL(__imp__sub_82A18ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A18ED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,-10248
	ctx.r29.s64 = ctx.r29.s64 + -10248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// bl 0x82a2f758
	ctx.lr = 0x82A18F10;
	sub_82A2F758(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r11,55068
	ctx.r7.u64 = ctx.r11.u64 | 55068;
	// ori r6,r10,55069
	ctx.r6.u64 = ctx.r10.u64 | 55069;
	// ori r5,r9,55286
	ctx.r5.u64 = ctx.r9.u64 | 55286;
	// ori r4,r8,55287
	ctx.r4.u64 = ctx.r8.u64 | 55287;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// stbx r30,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u8);
	// stbx r30,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u8);
	// bl 0x82a18b38
	ctx.lr = 0x82A18F48;
	sub_82A18B38(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-10476
	ctx.r11.s64 = ctx.r11.s64 + -10476;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a18f60
	if (cr6.eq) goto loc_82A18F60;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82A18F60:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,55048
	ctx.r8.u64 = ctx.r11.u64 | 55048;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r7,r10,55070
	ctx.r7.u64 = ctx.r10.u64 | 55070;
	// ori r6,r9,55071
	ctx.r6.u64 = ctx.r9.u64 | 55071;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r10,6
	ctx.r10.s64 = 6;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f0,9008(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r9,r9,-10464
	ctx.r9.s64 = ctx.r9.s64 + -10464;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r8,r8,-10452
	ctx.r8.s64 = ctx.r8.s64 + -10452;
	// ori r7,r4,55096
	ctx.r7.u64 = ctx.r4.u64 | 55096;
	// ori r5,r11,55104
	ctx.r5.u64 = ctx.r11.u64 | 55104;
	// ori r6,r3,55100
	ctx.r6.u64 = ctx.r3.u64 | 55100;
	// li r4,255
	ctx.r4.s64 = 255;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// ori r10,r10,55274
	ctx.r10.u64 = ctx.r10.u64 | 55274;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
loc_82A18FF0:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bge cr6,0x82a19000
	if (!cr6.lt) goto loc_82A19000;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stbx r30,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u8);
loc_82A19000:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a18ff0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A18FF0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r3,r9,55300
	ctx.r3.u64 = ctx.r9.u64 | 55300;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r7,55308
	ctx.r9.u64 = ctx.r7.u64 | 55308;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// ori r5,r11,55292
	ctx.r5.u64 = ctx.r11.u64 | 55292;
	// ori r11,r8,55304
	ctx.r11.u64 = ctx.r8.u64 | 55304;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// ori r4,r10,55296
	ctx.r4.u64 = ctx.r10.u64 | 55296;
	// ori r8,r6,55312
	ctx.r8.u64 = ctx.r6.u64 | 55312;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,2
	ctx.r7.s64 = 2;
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r9,-10284
	ctx.r9.s64 = ctx.r9.s64 + -10284;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A1906C:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a1906c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1906C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r6,r9,55316
	ctx.r6.u64 = ctx.r9.u64 | 55316;
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r8,r11,55320
	ctx.r8.u64 = ctx.r11.u64 | 55320;
	// ori r7,r10,55056
	ctx.r7.u64 = ctx.r10.u64 | 55056;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
loc_82A190BC:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a190bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A190BC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r9,-10256
	ctx.r9.s64 = ctx.r9.s64 + -10256;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A190E0:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a190e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A190E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19100"))) PPC_WEAK_FUNC(sub_82A19100);
PPC_FUNC_IMPL(__imp__sub_82A19100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
loc_82A1910C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82a1912c
	if (cr6.eq) goto loc_82A1912C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82a1910c
	if (cr6.lt) goto loc_82A1910C;
	// blr 
	return;
loc_82A1912C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1914C"))) PPC_WEAK_FUNC(sub_82A1914C);
PPC_FUNC_IMPL(__imp__sub_82A1914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19150"))) PPC_WEAK_FUNC(sub_82A19150);
PPC_FUNC_IMPL(__imp__sub_82A19150) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r4,40
	ctx.r11.s64 = ctx.r4.s64 + 40;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 + 56;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 + 72;
	// stw r7,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r7.u32);
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// lwz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// addi r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 + 88;
	// stw r6,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r7,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// lwz r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r6,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r7,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r7.u32);
	// lwz r6,52(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r6,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r6.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r7,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r7.u32);
	// lwz r6,64(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r6,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r6.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r7,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r7.u32);
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r6,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r6.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r7,84(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r7,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r7.u32);
	// lwz r6,88(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r6,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r6.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r5,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r5.u32);
	// stw r10,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19228"))) PPC_WEAK_FUNC(sub_82A19228);
PPC_FUNC_IMPL(__imp__sub_82A19228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
loc_82A19230:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82a19250
	if (cr6.eq) goto loc_82A19250;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82a19230
	if (cr6.lt) goto loc_82A19230;
	// blr 
	return;
loc_82A19250:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19260"))) PPC_WEAK_FUNC(sub_82A19260);
PPC_FUNC_IMPL(__imp__sub_82A19260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// lwz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r8,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r8.u32);
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r7,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r7.u32);
	// lwz r6,112(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r6,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r6.u32);
	// lwz r5,116(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r5,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r5.u32);
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r11,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r11.u32);
	// lwz r8,124(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r8,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r8.u32);
	// lwz r7,128(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r7,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r7.u32);
	// lwz r6,132(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r6,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r6.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A192BC"))) PPC_WEAK_FUNC(sub_82A192BC);
PPC_FUNC_IMPL(__imp__sub_82A192BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A192C0"))) PPC_WEAK_FUNC(sub_82A192C0);
PPC_FUNC_IMPL(__imp__sub_82A192C0) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
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
	// bl 0x82a2f9d0
	ctx.lr = 0x82A1935C;
	sub_82A2F9D0(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,-10464
	ctx.r10.s64 = ctx.r10.s64 + -10464;
	// addi r9,r9,-10452
	ctx.r9.s64 = ctx.r9.s64 + -10452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bl 0x82a18ed0
	ctx.lr = 0x82A19394;
	sub_82A18ED0(ctx, base);
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

__attribute__((alias("__imp__sub_82A193AC"))) PPC_WEAK_FUNC(sub_82A193AC);
PPC_FUNC_IMPL(__imp__sub_82A193AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A193B0"))) PPC_WEAK_FUNC(sub_82A193B0);
PPC_FUNC_IMPL(__imp__sub_82A193B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A193B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// bge cr6,0x82a19458
	if (!cr6.lt) goto loc_82A19458;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-24692
	ctx.r10.s64 = ctx.r11.s64 + -24692;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x825ab6c8
	ctx.lr = 0x82A193F8;
	sub_825AB6C8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a19414
	if (!cr6.eq) goto loc_82A19414;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8888
	ctx.r3.s64 = ctx.r11.s64 + 8888;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_82A19414:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82a1a678
	ctx.lr = 0x82A19428;
	sub_82A1A678(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a19440
	if (cr6.eq) goto loc_82A19440;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825a8a78
	ctx.lr = 0x82A1943C;
	sub_825A8A78(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_82A19440:
	// lis r11,0
	ctx.r11.s64 = 0;
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// ori r9,r11,55252
	ctx.r9.u64 = ctx.r11.u64 | 55252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r30,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u8);
	// bl 0x825a8d40
	ctx.lr = 0x82A19458;
	sub_825A8D40(ctx, base);
loc_82A19458:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19460"))) PPC_WEAK_FUNC(sub_82A19460);
PPC_FUNC_IMPL(__imp__sub_82A19460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x82a194a4
	if (!cr6.lt) goto loc_82A194A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x82a194a4
	if (cr6.lt) goto loc_82A194A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
loc_82A194A4:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A194C8"))) PPC_WEAK_FUNC(sub_82A194C8);
PPC_FUNC_IMPL(__imp__sub_82A194C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A194E4"))) PPC_WEAK_FUNC(sub_82A194E4);
PPC_FUNC_IMPL(__imp__sub_82A194E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A194E8"))) PPC_WEAK_FUNC(sub_82A194E8);
PPC_FUNC_IMPL(__imp__sub_82A194E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf. r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a194f8
	if (!cr0.lt) goto loc_82A194F8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A194F8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1950C"))) PPC_WEAK_FUNC(sub_82A1950C);
PPC_FUNC_IMPL(__imp__sub_82A1950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19510"))) PPC_WEAK_FUNC(sub_82A19510);
PPC_FUNC_IMPL(__imp__sub_82A19510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-14
	ctx.r11.s64 = ctx.r3.s64 + -14;
	// cmplwi cr6,r11,106
	cr6.compare<uint32_t>(ctx.r11.u32, 106, xer);
	// bgt cr6,0x82a19708
	if (cr6.gt) goto loc_82A19708;
	// lis r12,-32094
	ctx.r12.s64 = -2103312384;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27340
	ctx.r12.s64 = ctx.r12.s64 + -27340;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A196F8;
	case 1:
		goto loc_82A19708;
	case 2:
		goto loc_82A19708;
	case 3:
		goto loc_82A19708;
	case 4:
		goto loc_82A19708;
	case 5:
		goto loc_82A19708;
	case 6:
		goto loc_82A19708;
	case 7:
		goto loc_82A19708;
	case 8:
		goto loc_82A19708;
	case 9:
		goto loc_82A19708;
	case 10:
		goto loc_82A19708;
	case 11:
		goto loc_82A19708;
	case 12:
		goto loc_82A196F0;
	case 13:
		goto loc_82A196F0;
	case 14:
		goto loc_82A196F0;
	case 15:
		goto loc_82A196F0;
	case 16:
		goto loc_82A196F0;
	case 17:
		goto loc_82A196F0;
	case 18:
		goto loc_82A19700;
	case 19:
		goto loc_82A196E0;
	case 20:
		goto loc_82A196E0;
	case 21:
		goto loc_82A196E0;
	case 22:
		goto loc_82A196F8;
	case 23:
		goto loc_82A196F8;
	case 24:
		goto loc_82A196F0;
	case 25:
		goto loc_82A196F0;
	case 26:
		goto loc_82A19708;
	case 27:
		goto loc_82A196F0;
	case 28:
		goto loc_82A196E0;
	case 29:
		goto loc_82A196E0;
	case 30:
		goto loc_82A196E0;
	case 31:
		goto loc_82A196E8;
	case 32:
		goto loc_82A196E8;
	case 33:
		goto loc_82A196E8;
	case 34:
		goto loc_82A196E8;
	case 35:
		goto loc_82A196F8;
	case 36:
		goto loc_82A19708;
	case 37:
		goto loc_82A19708;
	case 38:
		goto loc_82A19700;
	case 39:
		goto loc_82A196F0;
	case 40:
		goto loc_82A196F0;
	case 41:
		goto loc_82A196F0;
	case 42:
		goto loc_82A196F8;
	case 43:
		goto loc_82A196F8;
	case 44:
		goto loc_82A19708;
	case 45:
		goto loc_82A19708;
	case 46:
		goto loc_82A196E0;
	case 47:
		goto loc_82A196E0;
	case 48:
		goto loc_82A196F0;
	case 49:
		goto loc_82A19700;
	case 50:
		goto loc_82A19708;
	case 51:
		goto loc_82A19708;
	case 52:
		goto loc_82A19708;
	case 53:
		goto loc_82A19708;
	case 54:
		goto loc_82A19708;
	case 55:
		goto loc_82A19708;
	case 56:
		goto loc_82A19708;
	case 57:
		goto loc_82A19708;
	case 58:
		goto loc_82A19708;
	case 59:
		goto loc_82A19708;
	case 60:
		goto loc_82A19708;
	case 61:
		goto loc_82A19708;
	case 62:
		goto loc_82A19708;
	case 63:
		goto loc_82A19708;
	case 64:
		goto loc_82A19708;
	case 65:
		goto loc_82A19708;
	case 66:
		goto loc_82A19708;
	case 67:
		goto loc_82A19708;
	case 68:
		goto loc_82A19708;
	case 69:
		goto loc_82A19708;
	case 70:
		goto loc_82A19708;
	case 71:
		goto loc_82A19708;
	case 72:
		goto loc_82A19708;
	case 73:
		goto loc_82A19708;
	case 74:
		goto loc_82A19708;
	case 75:
		goto loc_82A19708;
	case 76:
		goto loc_82A19708;
	case 77:
		goto loc_82A19708;
	case 78:
		goto loc_82A19708;
	case 79:
		goto loc_82A19708;
	case 80:
		goto loc_82A19708;
	case 81:
		goto loc_82A19708;
	case 82:
		goto loc_82A19708;
	case 83:
		goto loc_82A19708;
	case 84:
		goto loc_82A19708;
	case 85:
		goto loc_82A19708;
	case 86:
		goto loc_82A19708;
	case 87:
		goto loc_82A19708;
	case 88:
		goto loc_82A19708;
	case 89:
		goto loc_82A19708;
	case 90:
		goto loc_82A196F8;
	case 91:
		goto loc_82A196F8;
	case 92:
		goto loc_82A19708;
	case 93:
		goto loc_82A19700;
	case 94:
		goto loc_82A19708;
	case 95:
		goto loc_82A19708;
	case 96:
		goto loc_82A19708;
	case 97:
		goto loc_82A19708;
	case 98:
		goto loc_82A19708;
	case 99:
		goto loc_82A19708;
	case 100:
		goto loc_82A19708;
	case 101:
		goto loc_82A19708;
	case 102:
		goto loc_82A19708;
	case 103:
		goto loc_82A19708;
	case 104:
		goto loc_82A19708;
	case 105:
		goto loc_82A19708;
	case 106:
		goto loc_82A196E8;
	default:
		return;
	}
	// lwz r21,-26888(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26888);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26880(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26880);
	// lwz r21,-26912(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26912);
	// lwz r21,-26912(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26912);
	// lwz r21,-26912(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26912);
	// lwz r21,-26888(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26888);
	// lwz r21,-26888(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26888);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26912(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26912);
	// lwz r21,-26912(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26912);
	// lwz r21,-26912(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26912);
	// lwz r21,-26904(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26904);
	// lwz r21,-26904(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26904);
	// lwz r21,-26904(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26904);
	// lwz r21,-26904(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26904);
	// lwz r21,-26888(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26888);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26880(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26880);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26888(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26888);
	// lwz r21,-26888(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26888);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26912(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26912);
	// lwz r21,-26912(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26912);
	// lwz r21,-26896(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26896);
	// lwz r21,-26880(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26880);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26888(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26888);
	// lwz r21,-26888(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26888);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26880(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26880);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26872(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26872);
	// lwz r21,-26904(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26904);
loc_82A196E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A196E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A196F0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A196F8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A19700:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82A19708:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19710"))) PPC_WEAK_FUNC(sub_82A19710);
PPC_FUNC_IMPL(__imp__sub_82A19710) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A1974C"))) PPC_WEAK_FUNC(sub_82A1974C);
PPC_FUNC_IMPL(__imp__sub_82A1974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19750"))) PPC_WEAK_FUNC(sub_82A19750);
PPC_FUNC_IMPL(__imp__sub_82A19750) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x82a19510
	ctx.lr = 0x82A19764;
	sub_82A19510(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x82a19804
	if (!cr6.gt) goto loc_82A19804;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a197ac
	if (cr6.lt) goto loc_82A197AC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// bge cr6,0x82a197ac
	if (!cr6.lt) goto loc_82A197AC;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r8,r4,r10
	ctx.r8.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r7,11
	ctx.r6.s64 = ctx.r7.s64 * 11;
	// subf r10,r6,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r6.s64;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82a197c0
	if (!cr6.lt) goto loc_82A197C0;
	// addi r11,r10,9778
	ctx.r11.s64 = ctx.r10.s64 + 9778;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// b 0x82a197c4
	goto loc_82A197C4;
loc_82A197AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r10,9778
	ctx.r11.s64 = ctx.r10.s64 + 9778;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// b 0x82a197c4
	goto loc_82A197C4;
loc_82A197C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A197C4:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82a19804
	if (!cr6.eq) goto loc_82A19804;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a197ec
	if (cr6.eq) goto loc_82A197EC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bne cr6,0x82a19804
	if (!cr6.eq) goto loc_82A19804;
	// mulli r11,r10,60
	ctx.r11.s64 = ctx.r10.s64 * 60;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 312);
	// b 0x82a197f8
	goto loc_82A197F8;
loc_82A197EC:
	// mulli r11,r10,60
	ctx.r11.s64 = ctx.r10.s64 * 60;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 324);
loc_82A197F8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a19804
	if (cr6.eq) goto loc_82A19804;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82A19804:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19814"))) PPC_WEAK_FUNC(sub_82A19814);
PPC_FUNC_IMPL(__imp__sub_82A19814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19818"))) PPC_WEAK_FUNC(sub_82A19818);
PPC_FUNC_IMPL(__imp__sub_82A19818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A19820;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82a19750
	ctx.lr = 0x82A1983C;
	sub_82A19750(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19750
	ctx.lr = 0x82A19848;
	sub_82A19750(ctx, base);
	// subfc r11,r28,r3
	xer.ca = ctx.r3.u32 >= ctx.r28.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// eqv r10,r28,r3
	ctx.r10.u64 = ~(ctx.r28.u64 ^ ctx.r3.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19864"))) PPC_WEAK_FUNC(sub_82A19864);
PPC_FUNC_IMPL(__imp__sub_82A19864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19868"))) PPC_WEAK_FUNC(sub_82A19868);
PPC_FUNC_IMPL(__imp__sub_82A19868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19888"))) PPC_WEAK_FUNC(sub_82A19888);
PPC_FUNC_IMPL(__imp__sub_82A19888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19890"))) PPC_WEAK_FUNC(sub_82A19890);
PPC_FUNC_IMPL(__imp__sub_82A19890) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A198B0"))) PPC_WEAK_FUNC(sub_82A198B0);
PPC_FUNC_IMPL(__imp__sub_82A198B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82a198e0
	if (!cr6.eq) goto loc_82A198E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82A198E0:
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x82a1991c
	if (!cr6.eq) goto loc_82A1991C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82a19930
	if (cr6.eq) goto loc_82A19930;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82A1991C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82a19930
	if (!cr6.eq) goto loc_82A19930;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_82A19930:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19940"))) PPC_WEAK_FUNC(sub_82A19940);
PPC_FUNC_IMPL(__imp__sub_82A19940) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1994C"))) PPC_WEAK_FUNC(sub_82A1994C);
PPC_FUNC_IMPL(__imp__sub_82A1994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19950"))) PPC_WEAK_FUNC(sub_82A19950);
PPC_FUNC_IMPL(__imp__sub_82A19950) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1995C"))) PPC_WEAK_FUNC(sub_82A1995C);
PPC_FUNC_IMPL(__imp__sub_82A1995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19960"))) PPC_WEAK_FUNC(sub_82A19960);
PPC_FUNC_IMPL(__imp__sub_82A19960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r11,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r11.u8);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_82A19988:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a19988
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A19988;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A199B0"))) PPC_WEAK_FUNC(sub_82A199B0);
PPC_FUNC_IMPL(__imp__sub_82A199B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A199D0"))) PPC_WEAK_FUNC(sub_82A199D0);
PPC_FUNC_IMPL(__imp__sub_82A199D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_82A199DC:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82A199E0:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// blt cr6,0x82a199e0
	if (cr6.lt) goto loc_82A199E0;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// cmpwi cr6,r7,12
	cr6.compare<int32_t>(ctx.r7.s32, 12, xer);
	// blt cr6,0x82a199dc
	if (cr6.lt) goto loc_82A199DC;
	// stw r6,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19A24"))) PPC_WEAK_FUNC(sub_82A19A24);
PPC_FUNC_IMPL(__imp__sub_82A19A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19A28"))) PPC_WEAK_FUNC(sub_82A19A28);
PPC_FUNC_IMPL(__imp__sub_82A19A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19A60"))) PPC_WEAK_FUNC(sub_82A19A60);
PPC_FUNC_IMPL(__imp__sub_82A19A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r7,25
	ctx.r7.s64 = 25;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r3,164
	ctx.r9.s64 = ctx.r3.s64 + 164;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r6,3
	ctx.r6.s64 = 3;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A19A84:
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
	// stfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// stfs f0,-4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bge cr6,0x82a19aa8
	if (!cr6.lt) goto loc_82A19AA8;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stb r11,490(r7)
	PPC_STORE_U8(ctx.r7.u32 + 490, ctx.r11.u8);
loc_82A19AA8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bdnz 0x82a19a84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A19A84;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// addi r10,r3,548
	ctx.r10.s64 = ctx.r3.s64 + 548;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stw r6,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r6.u32);
loc_82A19AEC:
	// stw r11,-76(r10)
	PPC_STORE_U32(ctx.r10.u32 + -76, ctx.r11.u32);
	// stw r9,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r9.u32);
	// stw r9,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a19aec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A19AEC;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,532(r3)
	PPC_STORE_U8(ctx.r3.u32 + 532, ctx.r11.u8);
	// stb r11,533(r3)
	PPC_STORE_U8(ctx.r3.u32 + 533, ctx.r11.u8);
	// stb r11,530(r3)
	PPC_STORE_U8(ctx.r3.u32 + 530, ctx.r11.u8);
	// stb r11,531(r3)
	PPC_STORE_U8(ctx.r3.u32 + 531, ctx.r11.u8);
	// stw r11,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r11.u32);
	// stw r7,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r7.u32);
	// stw r7,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r7.u32);
	// stb r11,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r11.u8);
	// stw r6,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r6.u32);
	// stb r11,488(r3)
	PPC_STORE_U8(ctx.r3.u32 + 488, ctx.r11.u8);
	// stb r11,489(r3)
	PPC_STORE_U8(ctx.r3.u32 + 489, ctx.r11.u8);
	// stb r11,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r11.u8);
	// stb r11,513(r3)
	PPC_STORE_U8(ctx.r3.u32 + 513, ctx.r11.u8);
	// stb r11,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r11.u8);
	// stb r11,514(r3)
	PPC_STORE_U8(ctx.r3.u32 + 514, ctx.r11.u8);
	// stw r10,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r10.u32);
	// stw r10,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r10.u32);
	// stw r7,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r7.u32);
	// stb r11,528(r3)
	PPC_STORE_U8(ctx.r3.u32 + 528, ctx.r11.u8);
	// stb r11,529(r3)
	PPC_STORE_U8(ctx.r3.u32 + 529, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19B58"))) PPC_WEAK_FUNC(sub_82A19B58);
PPC_FUNC_IMPL(__imp__sub_82A19B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A19B74:
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a19b74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A19B74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19B84"))) PPC_WEAK_FUNC(sub_82A19B84);
PPC_FUNC_IMPL(__imp__sub_82A19B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19B88"))) PPC_WEAK_FUNC(sub_82A19B88);
PPC_FUNC_IMPL(__imp__sub_82A19B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19BD0"))) PPC_WEAK_FUNC(sub_82A19BD0);
PPC_FUNC_IMPL(__imp__sub_82A19BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19C2C"))) PPC_WEAK_FUNC(sub_82A19C2C);
PPC_FUNC_IMPL(__imp__sub_82A19C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19C30"))) PPC_WEAK_FUNC(sub_82A19C30);
PPC_FUNC_IMPL(__imp__sub_82A19C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19C68"))) PPC_WEAK_FUNC(sub_82A19C68);
PPC_FUNC_IMPL(__imp__sub_82A19C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19C84"))) PPC_WEAK_FUNC(sub_82A19C84);
PPC_FUNC_IMPL(__imp__sub_82A19C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19C88"))) PPC_WEAK_FUNC(sub_82A19C88);
PPC_FUNC_IMPL(__imp__sub_82A19C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stb r7,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r7.u8);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19CE8"))) PPC_WEAK_FUNC(sub_82A19CE8);
PPC_FUNC_IMPL(__imp__sub_82A19CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19D28"))) PPC_WEAK_FUNC(sub_82A19D28);
PPC_FUNC_IMPL(__imp__sub_82A19D28) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a3e330
	ctx.lr = 0x82A19D4C;
	sub_82A3E330(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82a3e330
	ctx.lr = 0x82A19D54;
	sub_82A3E330(ctx, base);
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

__attribute__((alias("__imp__sub_82A19D68"))) PPC_WEAK_FUNC(sub_82A19D68);
PPC_FUNC_IMPL(__imp__sub_82A19D68) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19D70"))) PPC_WEAK_FUNC(sub_82A19D70);
PPC_FUNC_IMPL(__imp__sub_82A19D70) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19D78"))) PPC_WEAK_FUNC(sub_82A19D78);
PPC_FUNC_IMPL(__imp__sub_82A19D78) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19D80"))) PPC_WEAK_FUNC(sub_82A19D80);
PPC_FUNC_IMPL(__imp__sub_82A19D80) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,14(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19D88"))) PPC_WEAK_FUNC(sub_82A19D88);
PPC_FUNC_IMPL(__imp__sub_82A19D88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19D9C"))) PPC_WEAK_FUNC(sub_82A19D9C);
PPC_FUNC_IMPL(__imp__sub_82A19D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19DA0"))) PPC_WEAK_FUNC(sub_82A19DA0);
PPC_FUNC_IMPL(__imp__sub_82A19DA0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A19DA8"))) PPC_WEAK_FUNC(sub_82A19DA8);
PPC_FUNC_IMPL(__imp__sub_82A19DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A19DB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lhz r10,262(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 262);
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
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82a19df4
	if (!cr6.eq) goto loc_82A19DF4;
	// bl 0x83740858
	ctx.lr = 0x82A19DE4;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A19DF4:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, xer);
	// bgt cr6,0x82a19e54
	if (cr6.gt) goto loc_82A19E54;
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r8,270(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 270);
	// li r7,94
	ctx.r7.s64 = 94;
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r7,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r7.u8);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stb r29,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r29.u8);
	// stb r28,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r28.u8);
	// stb r27,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r27.u8);
	// stb r26,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r26.u8);
	// stb r25,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r25.u8);
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
loc_82A19E54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19E5C"))) PPC_WEAK_FUNC(sub_82A19E5C);
PPC_FUNC_IMPL(__imp__sub_82A19E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A19E60"))) PPC_WEAK_FUNC(sub_82A19E60);
PPC_FUNC_IMPL(__imp__sub_82A19E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A19E68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x82a19ea8
	if (!cr6.eq) goto loc_82A19EA8;
	// bl 0x83740858
	ctx.lr = 0x82A19E9C;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A19EA8:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bgt cr6,0x82a19f00
	if (cr6.gt) goto loc_82A19F00;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r25,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r25.u16);
	// li r6,28
	ctx.r6.s64 = 28;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r28,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r28.u8);
	// stb r27,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r27.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82A19F00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19F08"))) PPC_WEAK_FUNC(sub_82A19F08);
PPC_FUNC_IMPL(__imp__sub_82A19F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A19F10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x82a19f54
	if (!cr6.eq) goto loc_82A19F54;
	// bl 0x83740858
	ctx.lr = 0x82A19F48;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A19F54:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x82a19fb0
	if (cr6.gt) goto loc_82A19FB0;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r24,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r24.u16);
	// li r6,28
	ctx.r6.s64 = 28;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r28,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r28.u8);
	// stb r27,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r27.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82A19FB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A19FB8"))) PPC_WEAK_FUNC(sub_82A19FB8);
PPC_FUNC_IMPL(__imp__sub_82A19FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A19FC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x82a1a004
	if (!cr6.eq) goto loc_82A1A004;
	// bl 0x83740858
	ctx.lr = 0x82A19FF8;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A1A004:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// bgt cr6,0x82a1a060
	if (cr6.gt) goto loc_82A1A060;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r24,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r24.u16);
	// li r6,28
	ctx.r6.s64 = 28;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r28,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r28.u8);
	// stb r27,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r27.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82A1A060:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A068"))) PPC_WEAK_FUNC(sub_82A1A068);
PPC_FUNC_IMPL(__imp__sub_82A1A068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A1A070;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x82a1a0b4
	if (!cr6.eq) goto loc_82A1A0B4;
	// bl 0x83740858
	ctx.lr = 0x82A1A0A8;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A1A0B4:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, xer);
	// bgt cr6,0x82a1a110
	if (cr6.gt) goto loc_82A1A110;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,92
	ctx.r10.s64 = 92;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r24,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r24.u16);
	// li r6,28
	ctx.r6.s64 = 28;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r28,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r28.u8);
	// stb r27,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r27.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82A1A110:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A118"))) PPC_WEAK_FUNC(sub_82A1A118);
PPC_FUNC_IMPL(__imp__sub_82A1A118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A1A120;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x82a1a160
	if (!cr6.eq) goto loc_82A1A160;
	// bl 0x83740858
	ctx.lr = 0x82A1A154;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A1A160:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// li r9,13
	ctx.r9.s64 = 13;
	// sth r25,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r25.u16);
	// li r6,28
	ctx.r6.s64 = 28;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r28,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r28.u8);
	// stb r27,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r27.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A1B4"))) PPC_WEAK_FUNC(sub_82A1A1B4);
PPC_FUNC_IMPL(__imp__sub_82A1A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A1B8"))) PPC_WEAK_FUNC(sub_82A1A1B8);
PPC_FUNC_IMPL(__imp__sub_82A1A1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A1A1C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// lis r10,0
	ctx.r10.s64 = 0;
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
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x82a1a204
	if (!cr6.eq) goto loc_82A1A204;
	// bl 0x83740858
	ctx.lr = 0x82A1A1F8;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A1A204:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// ori r7,r11,52429
	ctx.r7.u64 = ctx.r11.u64 | 52429;
	// mulhwu r6,r30,r7
	ctx.r6.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r4,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r4.s64;
	// addi r3,r11,30
	ctx.r3.s64 = ctx.r11.s64 + 30;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a1a280
	if (cr6.lt) goto loc_82A1A280;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r24,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r24.u16);
	// li r6,28
	ctx.r6.s64 = 28;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r28,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r28.u8);
	// stb r27,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r27.u8);
	// stb r26,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r26.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_82A1A280:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A288"))) PPC_WEAK_FUNC(sub_82A1A288);
PPC_FUNC_IMPL(__imp__sub_82A1A288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A1A290;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// bne cr6,0x82a1a2d0
	if (!cr6.eq) goto loc_82A1A2D0;
	// bl 0x83740858
	ctx.lr = 0x82A1A2C4;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A1A2D0:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// bgt cr6,0x82a1a328
	if (cr6.gt) goto loc_82A1A328;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// li r10,70
	ctx.r10.s64 = 70;
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r25,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r25.u16);
	// li r6,28
	ctx.r6.s64 = 28;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r28,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r28.u8);
	// stb r27,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r27.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82A1A328:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A330"))) PPC_WEAK_FUNC(sub_82A1A330);
PPC_FUNC_IMPL(__imp__sub_82A1A330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A1A338;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lhz r10,246(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 246);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82a1a380
	if (!cr6.eq) goto loc_82A1A380;
	// bl 0x83740858
	ctx.lr = 0x82A1A374;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A1A380:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, xer);
	// bgt cr6,0x82a1a3e8
	if (cr6.gt) goto loc_82A1A3E8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82a1a3e8
	if (cr6.eq) goto loc_82A1A3E8;
	// lhz r9,254(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 254);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,82
	ctx.r8.s64 = 82;
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// li r4,28
	ctx.r4.s64 = 28;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// stb r28,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r28.u8);
	// stb r27,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r27.u8);
	// stb r26,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r26.u8);
	// stb r25,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r25.u8);
	// stb r24,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r24.u8);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82A1A3E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A3F0"))) PPC_WEAK_FUNC(sub_82A1A3F0);
PPC_FUNC_IMPL(__imp__sub_82A1A3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A1A3F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lhz r10,262(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 262);
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
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82a1a43c
	if (!cr6.eq) goto loc_82A1A43C;
	// bl 0x83740858
	ctx.lr = 0x82A1A42C;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A1A43C:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// bgt cr6,0x82a1a49c
	if (cr6.gt) goto loc_82A1A49C;
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r8,270(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 270);
	// li r7,80
	ctx.r7.s64 = 80;
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r5,6
	ctx.r5.s64 = 6;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r7,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r7.u8);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stb r29,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r29.u8);
	// stb r28,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r28.u8);
	// stb r27,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r27.u8);
	// stb r26,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r26.u8);
	// stb r25,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r25.u8);
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
loc_82A1A49C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A4A4"))) PPC_WEAK_FUNC(sub_82A1A4A4);
PPC_FUNC_IMPL(__imp__sub_82A1A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A4A8"))) PPC_WEAK_FUNC(sub_82A1A4A8);
PPC_FUNC_IMPL(__imp__sub_82A1A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A1A4B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lhz r10,262(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 262);
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
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82a1a4f4
	if (!cr6.eq) goto loc_82A1A4F4;
	// bl 0x83740858
	ctx.lr = 0x82A1A4E4;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A1A4F4:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// bgt cr6,0x82a1a550
	if (cr6.gt) goto loc_82A1A550;
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r8,270(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 270);
	// li r7,95
	ctx.r7.s64 = 95;
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r7,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r7.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// stb r29,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r29.u8);
	// stb r28,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r28.u8);
	// stb r27,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r27.u8);
	// stb r26,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r26.u8);
	// stb r25,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r25.u8);
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
loc_82A1A550:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1A558"))) PPC_WEAK_FUNC(sub_82A1A558);
PPC_FUNC_IMPL(__imp__sub_82A1A558) {
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
	ctx.lr = 0x82A1A568;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A580"))) PPC_WEAK_FUNC(sub_82A1A580);
PPC_FUNC_IMPL(__imp__sub_82A1A580) {
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
	ctx.lr = 0x82A1A590;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A5A8"))) PPC_WEAK_FUNC(sub_82A1A5A8);
PPC_FUNC_IMPL(__imp__sub_82A1A5A8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f31,4464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4464);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a29110
	ctx.lr = 0x82A1A5D0;
	sub_82A29110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a29130
	ctx.lr = 0x82A1A5DC;
	sub_82A29130(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a1a5e8
	if (cr6.eq) goto loc_82A1A5E8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82A1A5E8:
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a1a614
	if (cr6.eq) goto loc_82A1A614;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a1a60c
	if (cr6.eq) goto loc_82A1A60C;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82a1a61c
	if (!cr6.eq) goto loc_82A1A61C;
	// addi r3,r31,105
	ctx.r3.s64 = ctx.r31.s64 + 105;
	// b 0x82a1a620
	goto loc_82A1A620;
loc_82A1A60C:
	// addi r3,r31,90
	ctx.r3.s64 = ctx.r31.s64 + 90;
	// b 0x82a1a620
	goto loc_82A1A620;
loc_82A1A614:
	// addi r3,r31,45
	ctx.r3.s64 = ctx.r31.s64 + 45;
	// b 0x82a1a620
	goto loc_82A1A620;
loc_82A1A61C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A1A620:
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

__attribute__((alias("__imp__sub_82A1A63C"))) PPC_WEAK_FUNC(sub_82A1A63C);
PPC_FUNC_IMPL(__imp__sub_82A1A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A640"))) PPC_WEAK_FUNC(sub_82A1A640);
PPC_FUNC_IMPL(__imp__sub_82A1A640) {
	PPC_FUNC_PROLOGUE();
	// sth r4,5818(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5818, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A648"))) PPC_WEAK_FUNC(sub_82A1A648);
PPC_FUNC_IMPL(__imp__sub_82A1A648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,25
	cr6.compare<int32_t>(ctx.r5.s32, 25, xer);
	// blt cr6,0x82a1a658
	if (cr6.lt) goto loc_82A1A658;
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A1A658:
	// addi r11,r4,1439
	ctx.r11.s64 = ctx.r4.s64 + 1439;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A668"))) PPC_WEAK_FUNC(sub_82A1A668);
PPC_FUNC_IMPL(__imp__sub_82A1A668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,5764(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5764, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A670"))) PPC_WEAK_FUNC(sub_82A1A670);
PPC_FUNC_IMPL(__imp__sub_82A1A670) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5813(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5813, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A678"))) PPC_WEAK_FUNC(sub_82A1A678);
PPC_FUNC_IMPL(__imp__sub_82A1A678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1a68c
	if (cr6.lt) goto loc_82A1A68C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a690
	if (cr6.lt) goto loc_82A1A690;
loc_82A1A68C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A690:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r8,5768(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5768, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A6B4"))) PPC_WEAK_FUNC(sub_82A1A6B4);
PPC_FUNC_IMPL(__imp__sub_82A1A6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A6B8"))) PPC_WEAK_FUNC(sub_82A1A6B8);
PPC_FUNC_IMPL(__imp__sub_82A1A6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1a6cc
	if (cr6.lt) goto loc_82A1A6CC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a6d0
	if (cr6.lt) goto loc_82A1A6D0;
loc_82A1A6CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A6D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r8,5790(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5790, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A6F4"))) PPC_WEAK_FUNC(sub_82A1A6F4);
PPC_FUNC_IMPL(__imp__sub_82A1A6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A6F8"))) PPC_WEAK_FUNC(sub_82A1A6F8);
PPC_FUNC_IMPL(__imp__sub_82A1A6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,5812(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5812, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A70C"))) PPC_WEAK_FUNC(sub_82A1A70C);
PPC_FUNC_IMPL(__imp__sub_82A1A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A710"))) PPC_WEAK_FUNC(sub_82A1A710);
PPC_FUNC_IMPL(__imp__sub_82A1A710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,8880(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8880, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A724"))) PPC_WEAK_FUNC(sub_82A1A724);
PPC_FUNC_IMPL(__imp__sub_82A1A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A728"))) PPC_WEAK_FUNC(sub_82A1A728);
PPC_FUNC_IMPL(__imp__sub_82A1A728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,5817(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5817, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A73C"))) PPC_WEAK_FUNC(sub_82A1A73C);
PPC_FUNC_IMPL(__imp__sub_82A1A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A740"))) PPC_WEAK_FUNC(sub_82A1A740);
PPC_FUNC_IMPL(__imp__sub_82A1A740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1a754
	if (cr6.lt) goto loc_82A1A754;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a758
	if (cr6.lt) goto loc_82A1A758;
loc_82A1A754:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A758:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1a778
	if (cr6.eq) goto loc_82A1A778;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a1a77c
	goto loc_82A1A77C;
loc_82A1A778:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A77C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1a790
	if (!cr6.eq) goto loc_82A1A790;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82A1A790:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a1a7a0
	if (!cr6.lt) goto loc_82A1A7A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a1a7c8
	goto loc_82A1A7C8;
loc_82A1A7A0:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a1a7b0
	if (!cr6.lt) goto loc_82A1A7B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a1a7c8
	goto loc_82A1A7C8;
loc_82A1A7B0:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_82A1A7C8:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1a7f4
	if (cr6.lt) goto loc_82A1A7F4;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// bge cr6,0x82a1a7f4
	if (!cr6.lt) goto loc_82A1A7F4;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r9,r11,35747
	ctx.r9.u64 = ctx.r11.u64 | 35747;
	// mulhwu r8,r4,r9
	ctx.r8.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r7,11
	ctx.r6.s64 = ctx.r7.s64 * 11;
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// b 0x82a1a7f8
	goto loc_82A1A7F8;
loc_82A1A7F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A7F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a1a86c
	if (!cr6.gt) goto loc_82A1A86C;
	// mulli r8,r10,11
	ctx.r8.s64 = ctx.r10.s64 * 11;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A1A810:
	// add. r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a1a824
	if (cr0.lt) goto loc_82A1A824;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a828
	if (cr6.lt) goto loc_82A1A828;
loc_82A1A824:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A828:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1a848
	if (cr6.eq) goto loc_82A1A848;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r11,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a1a84c
	goto loc_82A1A84C;
loc_82A1A848:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A84C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1a864
	if (cr6.eq) goto loc_82A1A864;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
loc_82A1A864:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82a1a810
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1A810;
loc_82A1A86C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A874"))) PPC_WEAK_FUNC(sub_82A1A874);
PPC_FUNC_IMPL(__imp__sub_82A1A874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A878"))) PPC_WEAK_FUNC(sub_82A1A878);
PPC_FUNC_IMPL(__imp__sub_82A1A878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r11,11
	ctx.r11.s64 = 11;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r7,r4,11
	ctx.r7.s64 = ctx.r4.s64 * 11;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A1A88C:
	// add. r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a1a8a0
	if (cr0.lt) goto loc_82A1A8A0;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a8a4
	if (cr6.lt) goto loc_82A1A8A4;
loc_82A1A8A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A8A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1a8c4
	if (cr6.eq) goto loc_82A1A8C4;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r11,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a1a8c8
	goto loc_82A1A8C8;
loc_82A1A8C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A8C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1a8e0
	if (cr6.eq) goto loc_82A1A8E0;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
loc_82A1A8E0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82a1a88c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1A88C;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A8F0"))) PPC_WEAK_FUNC(sub_82A1A8F0);
PPC_FUNC_IMPL(__imp__sub_82A1A8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r8,r4,11
	ctx.r8.s64 = ctx.r4.s64 * 11;
loc_82A1A8F8:
	// add. r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a1a90c
	if (cr0.lt) goto loc_82A1A90C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1a910
	if (cr6.lt) goto loc_82A1A910;
loc_82A1A90C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A910:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1a930
	if (cr6.eq) goto loc_82A1A930;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r10,5790(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5790);
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfe r11,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a1a934
	goto loc_82A1A934;
loc_82A1A930:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1A934:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1a954
	if (!cr6.eq) goto loc_82A1A954;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// blt cr6,0x82a1a8f8
	if (cr6.lt) goto loc_82A1A8F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A1A954:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A95C"))) PPC_WEAK_FUNC(sub_82A1A95C);
PPC_FUNC_IMPL(__imp__sub_82A1A95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A960"))) PPC_WEAK_FUNC(sub_82A1A960);
PPC_FUNC_IMPL(__imp__sub_82A1A960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,5756
	ctx.r11.s64 = ctx.r3.s64 + 5756;
loc_82A1A968:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a1a98c
	if (cr6.eq) goto loc_82A1A98C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x82a1a968
	if (cr6.lt) goto loc_82A1A968;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A1A98C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A994"))) PPC_WEAK_FUNC(sub_82A1A994);
PPC_FUNC_IMPL(__imp__sub_82A1A994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A998"))) PPC_WEAK_FUNC(sub_82A1A998);
PPC_FUNC_IMPL(__imp__sub_82A1A998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,5356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a1a9d4
	if (!cr6.eq) goto loc_82A1A9D4;
	// lbz r9,5120(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5120);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82a1a9d4
	if (!cr6.gt) goto loc_82A1A9D4;
	// addi r11,r3,5124
	ctx.r11.s64 = ctx.r3.s64 + 5124;
loc_82A1A9B8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a1a9dc
	if (cr6.eq) goto loc_82A1A9DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82a1a9b8
	if (cr6.lt) goto loc_82A1A9B8;
loc_82A1A9D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A1A9DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1A9E4"))) PPC_WEAK_FUNC(sub_82A1A9E4);
PPC_FUNC_IMPL(__imp__sub_82A1A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1A9E8"))) PPC_WEAK_FUNC(sub_82A1A9E8);
PPC_FUNC_IMPL(__imp__sub_82A1A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,5356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5356);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r8,5120(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5120);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1AA10:
	// addi r7,r11,1281
	ctx.r7.s64 = ctx.r11.s64 + 1281;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a1aa3c
	if (cr6.eq) goto loc_82A1AA3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a1aa10
	if (cr6.lt) goto loc_82A1AA10;
	// blr 
	return;
loc_82A1AA3C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AA44"))) PPC_WEAK_FUNC(sub_82A1AA44);
PPC_FUNC_IMPL(__imp__sub_82A1AA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AA48"))) PPC_WEAK_FUNC(sub_82A1AA48);
PPC_FUNC_IMPL(__imp__sub_82A1AA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82a1aa74
	if (!cr6.eq) goto loc_82A1AA74;
	// lwz r10,5388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5388);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a1aa74
	if (!cr6.eq) goto loc_82A1AA74;
	// lbz r10,4503(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4503);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a1aa74
	if (!cr6.eq) goto loc_82A1AA74;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A1AA74:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AA84"))) PPC_WEAK_FUNC(sub_82A1AA84);
PPC_FUNC_IMPL(__imp__sub_82A1AA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AA88"))) PPC_WEAK_FUNC(sub_82A1AA88);
PPC_FUNC_IMPL(__imp__sub_82A1AA88) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5820(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5820);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AA90"))) PPC_WEAK_FUNC(sub_82A1AA90);
PPC_FUNC_IMPL(__imp__sub_82A1AA90) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5820(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5820, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AA98"))) PPC_WEAK_FUNC(sub_82A1AA98);
PPC_FUNC_IMPL(__imp__sub_82A1AA98) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5821(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5821);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAA0"))) PPC_WEAK_FUNC(sub_82A1AAA0);
PPC_FUNC_IMPL(__imp__sub_82A1AAA0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5821(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5821, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAA8"))) PPC_WEAK_FUNC(sub_82A1AAA8);
PPC_FUNC_IMPL(__imp__sub_82A1AAA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5822(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5822);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAB0"))) PPC_WEAK_FUNC(sub_82A1AAB0);
PPC_FUNC_IMPL(__imp__sub_82A1AAB0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5822(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5822, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAB8"))) PPC_WEAK_FUNC(sub_82A1AAB8);
PPC_FUNC_IMPL(__imp__sub_82A1AAB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5828(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5828);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAC0"))) PPC_WEAK_FUNC(sub_82A1AAC0);
PPC_FUNC_IMPL(__imp__sub_82A1AAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,5828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5828, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAD0"))) PPC_WEAK_FUNC(sub_82A1AAD0);
PPC_FUNC_IMPL(__imp__sub_82A1AAD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5864(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAD8"))) PPC_WEAK_FUNC(sub_82A1AAD8);
PPC_FUNC_IMPL(__imp__sub_82A1AAD8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5864(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5864, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAE0"))) PPC_WEAK_FUNC(sub_82A1AAE0);
PPC_FUNC_IMPL(__imp__sub_82A1AAE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5865(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5865);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAE8"))) PPC_WEAK_FUNC(sub_82A1AAE8);
PPC_FUNC_IMPL(__imp__sub_82A1AAE8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5865(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5865, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAF0"))) PPC_WEAK_FUNC(sub_82A1AAF0);
PPC_FUNC_IMPL(__imp__sub_82A1AAF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5866(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5866);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AAF8"))) PPC_WEAK_FUNC(sub_82A1AAF8);
PPC_FUNC_IMPL(__imp__sub_82A1AAF8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5866(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5866, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB00"))) PPC_WEAK_FUNC(sub_82A1AB00);
PPC_FUNC_IMPL(__imp__sub_82A1AB00) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,5832(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5832);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB08"))) PPC_WEAK_FUNC(sub_82A1AB08);
PPC_FUNC_IMPL(__imp__sub_82A1AB08) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5832(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5832, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB10"))) PPC_WEAK_FUNC(sub_82A1AB10);
PPC_FUNC_IMPL(__imp__sub_82A1AB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5836);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB18"))) PPC_WEAK_FUNC(sub_82A1AB18);
PPC_FUNC_IMPL(__imp__sub_82A1AB18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,5836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5836, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB20"))) PPC_WEAK_FUNC(sub_82A1AB20);
PPC_FUNC_IMPL(__imp__sub_82A1AB20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5840(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB28"))) PPC_WEAK_FUNC(sub_82A1AB28);
PPC_FUNC_IMPL(__imp__sub_82A1AB28) {
	PPC_FUNC_PROLOGUE();
	// stw r4,5840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5840, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB30"))) PPC_WEAK_FUNC(sub_82A1AB30);
PPC_FUNC_IMPL(__imp__sub_82A1AB30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5844(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5844);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB38"))) PPC_WEAK_FUNC(sub_82A1AB38);
PPC_FUNC_IMPL(__imp__sub_82A1AB38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5848(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5848);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB40"))) PPC_WEAK_FUNC(sub_82A1AB40);
PPC_FUNC_IMPL(__imp__sub_82A1AB40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5852(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5852);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB48"))) PPC_WEAK_FUNC(sub_82A1AB48);
PPC_FUNC_IMPL(__imp__sub_82A1AB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,5856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5856);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB50"))) PPC_WEAK_FUNC(sub_82A1AB50);
PPC_FUNC_IMPL(__imp__sub_82A1AB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,5860(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5860);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB58"))) PPC_WEAK_FUNC(sub_82A1AB58);
PPC_FUNC_IMPL(__imp__sub_82A1AB58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,5844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5844, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB60"))) PPC_WEAK_FUNC(sub_82A1AB60);
PPC_FUNC_IMPL(__imp__sub_82A1AB60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,5848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5848, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB68"))) PPC_WEAK_FUNC(sub_82A1AB68);
PPC_FUNC_IMPL(__imp__sub_82A1AB68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,5852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5852, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB70"))) PPC_WEAK_FUNC(sub_82A1AB70);
PPC_FUNC_IMPL(__imp__sub_82A1AB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4464(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4464);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,5856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5856, ctx.r4.u32);
	// stfs f0,5860(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5860, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AB80"))) PPC_WEAK_FUNC(sub_82A1AB80);
PPC_FUNC_IMPL(__imp__sub_82A1AB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stb r11,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r11.u8);
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_82A1ABC0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a1abc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1ABC0;
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1ABE0"))) PPC_WEAK_FUNC(sub_82A1ABE0);
PPC_FUNC_IMPL(__imp__sub_82A1ABE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r11,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r11.u8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AC74"))) PPC_WEAK_FUNC(sub_82A1AC74);
PPC_FUNC_IMPL(__imp__sub_82A1AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AC78"))) PPC_WEAK_FUNC(sub_82A1AC78);
PPC_FUNC_IMPL(__imp__sub_82A1AC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82A1AC8C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stwu r9,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a1ac8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1AC8C;
	// b 0x82a199d0
	sub_82A199D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1ACA0"))) PPC_WEAK_FUNC(sub_82A1ACA0);
PPC_FUNC_IMPL(__imp__sub_82A1ACA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A1ACB4:
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
	// bdnz 0x82a1acb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1ACB4;
	// b 0x82a19a60
	sub_82A19A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1ACC8"))) PPC_WEAK_FUNC(sub_82A1ACC8);
PPC_FUNC_IMPL(__imp__sub_82A1ACC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AD30"))) PPC_WEAK_FUNC(sub_82A1AD30);
PPC_FUNC_IMPL(__imp__sub_82A1AD30) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a3e330
	ctx.lr = 0x82A1AD54;
	sub_82A3E330(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82a3e330
	ctx.lr = 0x82A1AD5C;
	sub_82A3E330(ctx, base);
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

__attribute__((alias("__imp__sub_82A1AD74"))) PPC_WEAK_FUNC(sub_82A1AD74);
PPC_FUNC_IMPL(__imp__sub_82A1AD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AD78"))) PPC_WEAK_FUNC(sub_82A1AD78);
PPC_FUNC_IMPL(__imp__sub_82A1AD78) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// li r6,10
	ctx.r6.s64 = 10;
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// ori r4,r9,65535
	ctx.r4.u64 = ctx.r9.u64 | 65535;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r11,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r11.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1AE04"))) PPC_WEAK_FUNC(sub_82A1AE04);
PPC_FUNC_IMPL(__imp__sub_82A1AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AE08"))) PPC_WEAK_FUNC(sub_82A1AE08);
PPC_FUNC_IMPL(__imp__sub_82A1AE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A1AE10;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x83740858
	ctx.lr = 0x82A1AE38;
	sub_83740858(ctx, base);
	// mulli r11,r3,11
	ctx.r11.s64 = ctx.r3.s64 * 11;
	// addis r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 65536;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bl 0x83740858
	ctx.lr = 0x82A1AE48;
	sub_83740858(ctx, base);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r23,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r23.u16);
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// sth r7,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r7.u16);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a19da8
	ctx.lr = 0x82A1AE8C;
	sub_82A19DA8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1AE94"))) PPC_WEAK_FUNC(sub_82A1AE94);
PPC_FUNC_IMPL(__imp__sub_82A1AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AE98"))) PPC_WEAK_FUNC(sub_82A1AE98);
PPC_FUNC_IMPL(__imp__sub_82A1AE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A1AEA0;
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
	// bl 0x83740858
	ctx.lr = 0x82A1AEB8;
	sub_83740858(ctx, base);
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82a19e60
	ctx.lr = 0x82A1AED8;
	sub_82A19E60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1AEE0"))) PPC_WEAK_FUNC(sub_82A1AEE0);
PPC_FUNC_IMPL(__imp__sub_82A1AEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A1AEE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x83740858
	ctx.lr = 0x82A1AF0C;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82a19f08
	ctx.lr = 0x82A1AF34;
	sub_82A19F08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1AF3C"))) PPC_WEAK_FUNC(sub_82A1AF3C);
PPC_FUNC_IMPL(__imp__sub_82A1AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AF40"))) PPC_WEAK_FUNC(sub_82A1AF40);
PPC_FUNC_IMPL(__imp__sub_82A1AF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A1AF48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x83740858
	ctx.lr = 0x82A1AF6C;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82a1a068
	ctx.lr = 0x82A1AF94;
	sub_82A1A068(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1AF9C"))) PPC_WEAK_FUNC(sub_82A1AF9C);
PPC_FUNC_IMPL(__imp__sub_82A1AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1AFA0"))) PPC_WEAK_FUNC(sub_82A1AFA0);
PPC_FUNC_IMPL(__imp__sub_82A1AFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A1AFA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x83740858
	ctx.lr = 0x82A1AFCC;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82a19fb8
	ctx.lr = 0x82A1AFF4;
	sub_82A19FB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1AFFC"))) PPC_WEAK_FUNC(sub_82A1AFFC);
PPC_FUNC_IMPL(__imp__sub_82A1AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B000"))) PPC_WEAK_FUNC(sub_82A1B000);
PPC_FUNC_IMPL(__imp__sub_82A1B000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A1B008;
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
	// bl 0x83740858
	ctx.lr = 0x82A1B020;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82a1a118
	ctx.lr = 0x82A1B044;
	sub_82A1A118(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B04C"))) PPC_WEAK_FUNC(sub_82A1B04C);
PPC_FUNC_IMPL(__imp__sub_82A1B04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B050"))) PPC_WEAK_FUNC(sub_82A1B050);
PPC_FUNC_IMPL(__imp__sub_82A1B050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A1B058;
	__savegprlr_26(ctx, base);
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
	// bl 0x83740858
	ctx.lr = 0x82A1B074;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r26,r9,16
	ctx.r26.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x83740858
	ctx.lr = 0x82A1B090;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x82a1a1b8
	ctx.lr = 0x82A1B0B8;
	sub_82A1A1B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

