#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8311FDD0"))) PPC_WEAK_FUNC(sub_8311FDD0);
PPC_FUNC_IMPL(__imp__sub_8311FDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fde4
	if (!cr6.eq) goto loc_8311FDE4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,18,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// blr 
	return;
loc_8311FDE4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fdf4
	if (!cr6.eq) goto loc_8311FDF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FDF4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FE0C"))) PPC_WEAK_FUNC(sub_8311FE0C);
PPC_FUNC_IMPL(__imp__sub_8311FE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FE10"))) PPC_WEAK_FUNC(sub_8311FE10);
PPC_FUNC_IMPL(__imp__sub_8311FE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fe24
	if (!cr6.eq) goto loc_8311FE24;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,20,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// blr 
	return;
loc_8311FE24:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fe34
	if (!cr6.eq) goto loc_8311FE34;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FE34:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FE4C"))) PPC_WEAK_FUNC(sub_8311FE4C);
PPC_FUNC_IMPL(__imp__sub_8311FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FE50"))) PPC_WEAK_FUNC(sub_8311FE50);
PPC_FUNC_IMPL(__imp__sub_8311FE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fe64
	if (!cr6.eq) goto loc_8311FE64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,22,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3;
	// blr 
	return;
loc_8311FE64:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fe74
	if (!cr6.eq) goto loc_8311FE74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FE74:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FE8C"))) PPC_WEAK_FUNC(sub_8311FE8C);
PPC_FUNC_IMPL(__imp__sub_8311FE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FE90"))) PPC_WEAK_FUNC(sub_8311FE90);
PPC_FUNC_IMPL(__imp__sub_8311FE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fea4
	if (!cr6.eq) goto loc_8311FEA4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,24,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3;
	// blr 
	return;
loc_8311FEA4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311feb4
	if (!cr6.eq) goto loc_8311FEB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FEB4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FECC"))) PPC_WEAK_FUNC(sub_8311FECC);
PPC_FUNC_IMPL(__imp__sub_8311FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FED0"))) PPC_WEAK_FUNC(sub_8311FED0);
PPC_FUNC_IMPL(__imp__sub_8311FED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fee4
	if (!cr6.eq) goto loc_8311FEE4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// blr 
	return;
loc_8311FEE4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fef4
	if (!cr6.eq) goto loc_8311FEF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FEF4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FF0C"))) PPC_WEAK_FUNC(sub_8311FF0C);
PPC_FUNC_IMPL(__imp__sub_8311FF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FF10"))) PPC_WEAK_FUNC(sub_8311FF10);
PPC_FUNC_IMPL(__imp__sub_8311FF10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311ff24
	if (!cr6.eq) goto loc_8311FF24;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// blr 
	return;
loc_8311FF24:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311ff34
	if (!cr6.eq) goto loc_8311FF34;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FF34:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FF4C"))) PPC_WEAK_FUNC(sub_8311FF4C);
PPC_FUNC_IMPL(__imp__sub_8311FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FF50"))) PPC_WEAK_FUNC(sub_8311FF50);
PPC_FUNC_IMPL(__imp__sub_8311FF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311ff64
	if (!cr6.eq) goto loc_8311FF64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// blr 
	return;
loc_8311FF64:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311ff74
	if (!cr6.eq) goto loc_8311FF74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FF74:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FF8C"))) PPC_WEAK_FUNC(sub_8311FF8C);
PPC_FUNC_IMPL(__imp__sub_8311FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FF90"))) PPC_WEAK_FUNC(sub_8311FF90);
PPC_FUNC_IMPL(__imp__sub_8311FF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311ffa4
	if (!cr6.eq) goto loc_8311FFA4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
loc_8311FFA4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311ffb4
	if (!cr6.eq) goto loc_8311FFB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FFB4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FFC4"))) PPC_WEAK_FUNC(sub_8311FFC4);
PPC_FUNC_IMPL(__imp__sub_8311FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FFC8"))) PPC_WEAK_FUNC(sub_8311FFC8);
PPC_FUNC_IMPL(__imp__sub_8311FFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311ffdc
	if (!cr6.eq) goto loc_8311FFDC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_8311FFDC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311ffec
	if (!cr6.eq) goto loc_8311FFEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FFEC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FFFC"))) PPC_WEAK_FUNC(sub_8311FFFC);
PPC_FUNC_IMPL(__imp__sub_8311FFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120000"))) PPC_WEAK_FUNC(sub_83120000);
PPC_FUNC_IMPL(__imp__sub_83120000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120014
	if (!cr6.eq) goto loc_83120014;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
loc_83120014:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120024
	if (!cr6.eq) goto loc_83120024;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120024:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120034"))) PPC_WEAK_FUNC(sub_83120034);
PPC_FUNC_IMPL(__imp__sub_83120034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120038"))) PPC_WEAK_FUNC(sub_83120038);
PPC_FUNC_IMPL(__imp__sub_83120038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312004c
	if (!cr6.eq) goto loc_8312004C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
loc_8312004C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312005c
	if (!cr6.eq) goto loc_8312005C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312005C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312006C"))) PPC_WEAK_FUNC(sub_8312006C);
PPC_FUNC_IMPL(__imp__sub_8312006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120070"))) PPC_WEAK_FUNC(sub_83120070);
PPC_FUNC_IMPL(__imp__sub_83120070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120084
	if (!cr6.eq) goto loc_83120084;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
loc_83120084:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120094
	if (!cr6.eq) goto loc_83120094;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120094:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831200A4"))) PPC_WEAK_FUNC(sub_831200A4);
PPC_FUNC_IMPL(__imp__sub_831200A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831200A8"))) PPC_WEAK_FUNC(sub_831200A8);
PPC_FUNC_IMPL(__imp__sub_831200A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831200bc
	if (!cr6.eq) goto loc_831200BC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
loc_831200BC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831200cc
	if (!cr6.eq) goto loc_831200CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831200CC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831200DC"))) PPC_WEAK_FUNC(sub_831200DC);
PPC_FUNC_IMPL(__imp__sub_831200DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831200E0"))) PPC_WEAK_FUNC(sub_831200E0);
PPC_FUNC_IMPL(__imp__sub_831200E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831200f4
	if (!cr6.eq) goto loc_831200F4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
loc_831200F4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120104
	if (!cr6.eq) goto loc_83120104;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120104:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120114"))) PPC_WEAK_FUNC(sub_83120114);
PPC_FUNC_IMPL(__imp__sub_83120114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120118"))) PPC_WEAK_FUNC(sub_83120118);
PPC_FUNC_IMPL(__imp__sub_83120118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312012c
	if (!cr6.eq) goto loc_8312012C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// blr 
	return;
loc_8312012C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312013c
	if (!cr6.eq) goto loc_8312013C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312013C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312014C"))) PPC_WEAK_FUNC(sub_8312014C);
PPC_FUNC_IMPL(__imp__sub_8312014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120150"))) PPC_WEAK_FUNC(sub_83120150);
PPC_FUNC_IMPL(__imp__sub_83120150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120164
	if (!cr6.eq) goto loc_83120164;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,7,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// blr 
	return;
loc_83120164:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120174
	if (!cr6.eq) goto loc_83120174;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120174:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120184"))) PPC_WEAK_FUNC(sub_83120184);
PPC_FUNC_IMPL(__imp__sub_83120184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120188"))) PPC_WEAK_FUNC(sub_83120188);
PPC_FUNC_IMPL(__imp__sub_83120188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312019c
	if (!cr6.eq) goto loc_8312019C;
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_8312019C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831201ac
	if (!cr6.eq) goto loc_831201AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831201AC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831201BC"))) PPC_WEAK_FUNC(sub_831201BC);
PPC_FUNC_IMPL(__imp__sub_831201BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831201C0"))) PPC_WEAK_FUNC(sub_831201C0);
PPC_FUNC_IMPL(__imp__sub_831201C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831201d4
	if (!cr6.eq) goto loc_831201D4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,9,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// blr 
	return;
loc_831201D4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831201e4
	if (!cr6.eq) goto loc_831201E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831201E4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831201F4"))) PPC_WEAK_FUNC(sub_831201F4);
PPC_FUNC_IMPL(__imp__sub_831201F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831201F8"))) PPC_WEAK_FUNC(sub_831201F8);
PPC_FUNC_IMPL(__imp__sub_831201F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312020c
	if (!cr6.eq) goto loc_8312020C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,10,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// blr 
	return;
loc_8312020C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312021c
	if (!cr6.eq) goto loc_8312021C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312021C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312022C"))) PPC_WEAK_FUNC(sub_8312022C);
PPC_FUNC_IMPL(__imp__sub_8312022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120230"))) PPC_WEAK_FUNC(sub_83120230);
PPC_FUNC_IMPL(__imp__sub_83120230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120244
	if (!cr6.eq) goto loc_83120244;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
loc_83120244:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120254
	if (!cr6.eq) goto loc_83120254;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120254:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120264"))) PPC_WEAK_FUNC(sub_83120264);
PPC_FUNC_IMPL(__imp__sub_83120264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120268"))) PPC_WEAK_FUNC(sub_83120268);
PPC_FUNC_IMPL(__imp__sub_83120268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312027c
	if (!cr6.eq) goto loc_8312027C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,13,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// blr 
	return;
loc_8312027C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312028c
	if (!cr6.eq) goto loc_8312028C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312028C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312029C"))) PPC_WEAK_FUNC(sub_8312029C);
PPC_FUNC_IMPL(__imp__sub_8312029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831202A0"))) PPC_WEAK_FUNC(sub_831202A0);
PPC_FUNC_IMPL(__imp__sub_831202A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831202b4
	if (!cr6.eq) goto loc_831202B4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,15,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// blr 
	return;
loc_831202B4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831202c4
	if (!cr6.eq) goto loc_831202C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831202C4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831202D4"))) PPC_WEAK_FUNC(sub_831202D4);
PPC_FUNC_IMPL(__imp__sub_831202D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831202D8"))) PPC_WEAK_FUNC(sub_831202D8);
PPC_FUNC_IMPL(__imp__sub_831202D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831202ec
	if (!cr6.eq) goto loc_831202EC;
	// lhz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_831202EC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831202fc
	if (!cr6.eq) goto loc_831202FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831202FC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312030C"))) PPC_WEAK_FUNC(sub_8312030C);
PPC_FUNC_IMPL(__imp__sub_8312030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120310"))) PPC_WEAK_FUNC(sub_83120310);
PPC_FUNC_IMPL(__imp__sub_83120310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120324
	if (!cr6.eq) goto loc_83120324;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
loc_83120324:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120334
	if (!cr6.eq) goto loc_83120334;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120334:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120344"))) PPC_WEAK_FUNC(sub_83120344);
PPC_FUNC_IMPL(__imp__sub_83120344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120348"))) PPC_WEAK_FUNC(sub_83120348);
PPC_FUNC_IMPL(__imp__sub_83120348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312035c
	if (!cr6.eq) goto loc_8312035C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,20,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// blr 
	return;
loc_8312035C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312036c
	if (!cr6.eq) goto loc_8312036C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312036C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312037C"))) PPC_WEAK_FUNC(sub_8312037C);
PPC_FUNC_IMPL(__imp__sub_8312037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120380"))) PPC_WEAK_FUNC(sub_83120380);
PPC_FUNC_IMPL(__imp__sub_83120380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120394
	if (!cr6.eq) goto loc_83120394;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
loc_83120394:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831203a4
	if (!cr6.eq) goto loc_831203A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831203A4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831203B4"))) PPC_WEAK_FUNC(sub_831203B4);
PPC_FUNC_IMPL(__imp__sub_831203B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831203B8"))) PPC_WEAK_FUNC(sub_831203B8);
PPC_FUNC_IMPL(__imp__sub_831203B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831203cc
	if (!cr6.eq) goto loc_831203CC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
loc_831203CC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831203dc
	if (!cr6.eq) goto loc_831203DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831203DC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831203EC"))) PPC_WEAK_FUNC(sub_831203EC);
PPC_FUNC_IMPL(__imp__sub_831203EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831203F0"))) PPC_WEAK_FUNC(sub_831203F0);
PPC_FUNC_IMPL(__imp__sub_831203F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120404
	if (!cr6.eq) goto loc_83120404;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// blr 
	return;
loc_83120404:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120414
	if (!cr6.eq) goto loc_83120414;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120414:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120424"))) PPC_WEAK_FUNC(sub_83120424);
PPC_FUNC_IMPL(__imp__sub_83120424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120428"))) PPC_WEAK_FUNC(sub_83120428);
PPC_FUNC_IMPL(__imp__sub_83120428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312043c
	if (!cr6.eq) goto loc_8312043C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
loc_8312043C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312044c
	if (!cr6.eq) goto loc_8312044C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312044C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312045C"))) PPC_WEAK_FUNC(sub_8312045C);
PPC_FUNC_IMPL(__imp__sub_8312045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120460"))) PPC_WEAK_FUNC(sub_83120460);
PPC_FUNC_IMPL(__imp__sub_83120460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120474
	if (!cr6.eq) goto loc_83120474;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
loc_83120474:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120484
	if (!cr6.eq) goto loc_83120484;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120484:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120494"))) PPC_WEAK_FUNC(sub_83120494);
PPC_FUNC_IMPL(__imp__sub_83120494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120498"))) PPC_WEAK_FUNC(sub_83120498);
PPC_FUNC_IMPL(__imp__sub_83120498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831204ac
	if (!cr6.eq) goto loc_831204AC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
loc_831204AC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831204bc
	if (!cr6.eq) goto loc_831204BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831204BC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831204CC"))) PPC_WEAK_FUNC(sub_831204CC);
PPC_FUNC_IMPL(__imp__sub_831204CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831204D0"))) PPC_WEAK_FUNC(sub_831204D0);
PPC_FUNC_IMPL(__imp__sub_831204D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831204e4
	if (!cr6.eq) goto loc_831204E4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_831204E4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831204f4
	if (!cr6.eq) goto loc_831204F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831204F4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120504"))) PPC_WEAK_FUNC(sub_83120504);
PPC_FUNC_IMPL(__imp__sub_83120504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120508"))) PPC_WEAK_FUNC(sub_83120508);
PPC_FUNC_IMPL(__imp__sub_83120508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312051c
	if (!cr6.eq) goto loc_8312051C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
loc_8312051C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312052c
	if (!cr6.eq) goto loc_8312052C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312052C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312053C"))) PPC_WEAK_FUNC(sub_8312053C);
PPC_FUNC_IMPL(__imp__sub_8312053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120540"))) PPC_WEAK_FUNC(sub_83120540);
PPC_FUNC_IMPL(__imp__sub_83120540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120554
	if (!cr6.eq) goto loc_83120554;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
loc_83120554:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120564
	if (!cr6.eq) goto loc_83120564;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120564:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120574"))) PPC_WEAK_FUNC(sub_83120574);
PPC_FUNC_IMPL(__imp__sub_83120574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120578"))) PPC_WEAK_FUNC(sub_83120578);
PPC_FUNC_IMPL(__imp__sub_83120578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312058c
	if (!cr6.eq) goto loc_8312058C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
loc_8312058C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312059c
	if (!cr6.eq) goto loc_8312059C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312059C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831205AC"))) PPC_WEAK_FUNC(sub_831205AC);
PPC_FUNC_IMPL(__imp__sub_831205AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831205B0"))) PPC_WEAK_FUNC(sub_831205B0);
PPC_FUNC_IMPL(__imp__sub_831205B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831205c4
	if (!cr6.eq) goto loc_831205C4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
loc_831205C4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831205d4
	if (!cr6.eq) goto loc_831205D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831205D4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831205E4"))) PPC_WEAK_FUNC(sub_831205E4);
PPC_FUNC_IMPL(__imp__sub_831205E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831205E8"))) PPC_WEAK_FUNC(sub_831205E8);
PPC_FUNC_IMPL(__imp__sub_831205E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831205fc
	if (!cr6.eq) goto loc_831205FC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_831205FC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312060c
	if (!cr6.eq) goto loc_8312060C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312060C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312061C"))) PPC_WEAK_FUNC(sub_8312061C);
PPC_FUNC_IMPL(__imp__sub_8312061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120620"))) PPC_WEAK_FUNC(sub_83120620);
PPC_FUNC_IMPL(__imp__sub_83120620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120634
	if (!cr6.eq) goto loc_83120634;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
loc_83120634:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120644
	if (!cr6.eq) goto loc_83120644;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120644:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120654"))) PPC_WEAK_FUNC(sub_83120654);
PPC_FUNC_IMPL(__imp__sub_83120654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120658"))) PPC_WEAK_FUNC(sub_83120658);
PPC_FUNC_IMPL(__imp__sub_83120658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8312066c
	if (!cr6.eq) goto loc_8312066C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
loc_8312066C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8312067c
	if (!cr6.eq) goto loc_8312067C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312067C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312068C"))) PPC_WEAK_FUNC(sub_8312068C);
PPC_FUNC_IMPL(__imp__sub_8312068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120690"))) PPC_WEAK_FUNC(sub_83120690);
PPC_FUNC_IMPL(__imp__sub_83120690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831206a4
	if (!cr6.eq) goto loc_831206A4;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,3,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// blr 
	return;
loc_831206A4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831206b4
	if (!cr6.eq) goto loc_831206B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831206B4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831206C4"))) PPC_WEAK_FUNC(sub_831206C4);
PPC_FUNC_IMPL(__imp__sub_831206C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831206C8"))) PPC_WEAK_FUNC(sub_831206C8);
PPC_FUNC_IMPL(__imp__sub_831206C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831206dc
	if (!cr6.eq) goto loc_831206DC;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// blr 
	return;
loc_831206DC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x831206ec
	if (!cr6.eq) goto loc_831206EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831206EC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831206FC"))) PPC_WEAK_FUNC(sub_831206FC);
PPC_FUNC_IMPL(__imp__sub_831206FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120700"))) PPC_WEAK_FUNC(sub_83120700);
PPC_FUNC_IMPL(__imp__sub_83120700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83120714
	if (!cr6.eq) goto loc_83120714;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// blr 
	return;
loc_83120714:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83120724
	if (!cr6.eq) goto loc_83120724;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83120724:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120734"))) PPC_WEAK_FUNC(sub_83120734);
PPC_FUNC_IMPL(__imp__sub_83120734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83120738"))) PPC_WEAK_FUNC(sub_83120738);
PPC_FUNC_IMPL(__imp__sub_83120738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,97
	cr6.compare<uint32_t>(ctx.r4.u32, 97, xer);
	// bgt cr6,0x8312107c
	if (cr6.gt) goto loc_8312107C;
	// lis r12,-31982
	ctx.r12.s64 = -2095972352;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1880
	ctx.r12.s64 = ctx.r12.s64 + 1880;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_83120988;
	case 1:
		goto loc_83120C58;
	case 2:
		goto loc_83120C6C;
	case 3:
		goto loc_83120C94;
	case 4:
		goto loc_83120CA8;
	case 5:
		goto loc_83120CBC;
	case 6:
		goto loc_83120CD0;
	case 7:
		goto loc_83120CE4;
	case 8:
		goto loc_83120CF8;
	case 9:
		goto loc_83120D0C;
	case 10:
		goto loc_83120D20;
	case 11:
		goto loc_83120D34;
	case 12:
		goto loc_83120D48;
	case 13:
		goto loc_83120D5C;
	case 14:
		goto loc_83120910;
	case 15:
		goto loc_83120938;
	case 16:
		goto loc_8312094C;
	case 17:
		goto loc_83120960;
	case 18:
		goto loc_83120974;
	case 19:
		goto loc_8312099C;
	case 20:
		goto loc_831209B0;
	case 21:
		goto loc_831209C4;
	case 22:
		goto loc_831209D8;
	case 23:
		goto loc_83120A00;
	case 24:
		goto loc_83120A14;
	case 25:
		goto loc_83120A28;
	case 26:
		goto loc_83120A3C;
	case 27:
		goto loc_83120A78;
	case 28:
		goto loc_83120A8C;
	case 29:
		goto loc_83120AA0;
	case 30:
		goto loc_83120D70;
	case 31:
		goto loc_83120AB4;
	case 32:
		goto loc_83120AF0;
	case 33:
		goto loc_83120B04;
	case 34:
		goto loc_83120B18;
	case 35:
		goto loc_83120B2C;
	case 36:
		goto loc_83120B68;
	case 37:
		goto loc_83120B7C;
	case 38:
		goto loc_83120A50;
	case 39:
		goto loc_83120D84;
	case 40:
		goto loc_83120924;
	case 41:
		goto loc_83120A64;
	case 42:
		goto loc_83120D98;
	case 43:
		goto loc_83120BF4;
	case 44:
		goto loc_831208E0;
	case 45:
		goto loc_831208F0;
	case 46:
		goto loc_83120AC8;
	case 47:
		goto loc_83120DAC;
	case 48:
		goto loc_83120DC0;
	case 49:
		goto loc_83120DD4;
	case 50:
		goto loc_83120B40;
	case 51:
		goto loc_83120DE8;
	case 52:
		goto loc_83120BB8;
	case 53:
		goto loc_831209EC;
	case 54:
		goto loc_83120DFC;
	case 55:
		goto loc_83120C1C;
	case 56:
		goto loc_83120B90;
	case 57:
		goto loc_83120BA4;
	case 58:
		goto loc_83120C08;
	case 59:
		goto loc_83120ADC;
	case 60:
		goto loc_83120B54;
	case 61:
		goto loc_83120BCC;
	case 62:
		goto loc_83120C80;
	case 63:
		goto loc_83120E10;
	case 64:
		goto loc_83120E24;
	case 65:
		goto loc_83120E38;
	case 66:
		goto loc_83120E4C;
	case 67:
		goto loc_83120E60;
	case 68:
		goto loc_83120E74;
	case 69:
		goto loc_83120E88;
	case 70:
		goto loc_83120E9C;
	case 71:
		goto loc_83120EB0;
	case 72:
		goto loc_83120EC4;
	case 73:
		goto loc_83120ED8;
	case 74:
		goto loc_83120EEC;
	case 75:
		goto loc_83120F00;
	case 76:
		goto loc_83120F14;
	case 77:
		goto loc_83120F28;
	case 78:
		goto loc_83120F3C;
	case 79:
		goto loc_83120F50;
	case 80:
		goto loc_83120F64;
	case 81:
		goto loc_83120F78;
	case 82:
		goto loc_83120F8C;
	case 83:
		goto loc_83120FA0;
	case 84:
		goto loc_83120FB4;
	case 85:
		goto loc_83120FC8;
	case 86:
		goto loc_83120FDC;
	case 87:
		goto loc_83120FF0;
	case 88:
		goto loc_83121004;
	case 89:
		goto loc_83121018;
	case 90:
		goto loc_8312102C;
	case 91:
		goto loc_83121040;
	case 92:
		goto loc_83121054;
	case 93:
		goto loc_83121068;
	case 94:
		goto loc_83120900;
	case 95:
		goto loc_83120BE0;
	case 96:
		goto loc_83120C30;
	case 97:
		goto loc_83120C44;
	default:
		return;
	}
	// lwz r24,2440(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2440);
	// lwz r24,3160(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3160);
	// lwz r24,3180(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3180);
	// lwz r24,3220(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3220);
	// lwz r24,3240(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3240);
	// lwz r24,3260(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3260);
	// lwz r24,3280(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3280);
	// lwz r24,3300(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3300);
	// lwz r24,3320(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3320);
	// lwz r24,3340(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3340);
	// lwz r24,3360(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3360);
	// lwz r24,3380(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3380);
	// lwz r24,3400(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3400);
	// lwz r24,3420(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3420);
	// lwz r24,2320(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2320);
	// lwz r24,2360(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2360);
	// lwz r24,2380(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2380);
	// lwz r24,2400(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2400);
	// lwz r24,2420(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2420);
	// lwz r24,2460(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2460);
	// lwz r24,2480(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2480);
	// lwz r24,2500(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2500);
	// lwz r24,2520(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2520);
	// lwz r24,2560(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2560);
	// lwz r24,2580(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2580);
	// lwz r24,2600(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2600);
	// lwz r24,2620(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2620);
	// lwz r24,2680(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2680);
	// lwz r24,2700(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2700);
	// lwz r24,2720(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2720);
	// lwz r24,3440(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3440);
	// lwz r24,2740(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2740);
	// lwz r24,2800(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2800);
	// lwz r24,2820(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2820);
	// lwz r24,2840(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2840);
	// lwz r24,2860(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2860);
	// lwz r24,2920(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2920);
	// lwz r24,2940(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2940);
	// lwz r24,2640(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2640);
	// lwz r24,3460(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3460);
	// lwz r24,2340(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2340);
	// lwz r24,2660(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2660);
	// lwz r24,3480(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3480);
	// lwz r24,3060(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3060);
	// lwz r24,2272(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2272);
	// lwz r24,2288(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2288);
	// lwz r24,2760(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2760);
	// lwz r24,3500(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3500);
	// lwz r24,3520(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3520);
	// lwz r24,3540(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3540);
	// lwz r24,2880(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2880);
	// lwz r24,3560(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3560);
	// lwz r24,3000(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3000);
	// lwz r24,2540(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2540);
	// lwz r24,3580(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3580);
	// lwz r24,3100(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3100);
	// lwz r24,2960(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2960);
	// lwz r24,2980(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2980);
	// lwz r24,3080(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3080);
	// lwz r24,2780(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2780);
	// lwz r24,2900(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2900);
	// lwz r24,3020(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3020);
	// lwz r24,3200(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3200);
	// lwz r24,3600(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3600);
	// lwz r24,3620(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3620);
	// lwz r24,3640(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3640);
	// lwz r24,3660(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3660);
	// lwz r24,3680(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3680);
	// lwz r24,3700(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3700);
	// lwz r24,3720(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3720);
	// lwz r24,3740(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3740);
	// lwz r24,3760(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3760);
	// lwz r24,3780(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3780);
	// lwz r24,3800(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3800);
	// lwz r24,3820(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3820);
	// lwz r24,3840(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3840);
	// lwz r24,3860(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3860);
	// lwz r24,3880(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3880);
	// lwz r24,3900(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3900);
	// lwz r24,3920(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3920);
	// lwz r24,3940(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3940);
	// lwz r24,3960(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3960);
	// lwz r24,3980(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3980);
	// lwz r24,4000(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4000);
	// lwz r24,4020(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4020);
	// lwz r24,4040(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4040);
	// lwz r24,4060(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4060);
	// lwz r24,4080(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4080);
	// lwz r24,4100(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4100);
	// lwz r24,4120(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4120);
	// lwz r24,4140(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4140);
	// lwz r24,4160(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4160);
	// lwz r24,4180(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4180);
	// lwz r24,4200(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4200);
	// lwz r24,2304(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 2304);
	// lwz r24,3040(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3040);
	// lwz r24,3120(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3120);
	// lwz r24,3140(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3140);
loc_831208E0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_831208F0:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83120900:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83120910:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120924:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120938:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8312094C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120960:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120974:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120988:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8312099C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_831209B0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_831209C4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_831209D8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_831209EC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120A00:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120A14:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120A28:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120A3C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120A50:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120A64:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120A78:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120A8C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120AA0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120AB4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120AC8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120ADC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120AF0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120B04:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120B18:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120B2C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120B40:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120B54:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120B68:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120B7C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120B90:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120BA4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120BB8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120BCC:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120BE0:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120BF4:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,13,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x3F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120C08:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120C1C:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120C30:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120C44:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120C58:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,29,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120C6C:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120C80:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120C94:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120CA8:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120CBC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120CD0:
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120CE4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,10,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120CF8:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120D0C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120D20:
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120D34:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120D48:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120D5C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120D70:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120D84:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120D98:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120DAC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120DC0:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120DD4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120DE8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120DFC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120E10:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120E24:
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120E38:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120E4C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120E60:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120E74:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120E88:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120E9C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120EB0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120EC4:
	// lhz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120ED8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120EEC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120F00:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120F14:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120F28:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120F3C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120F50:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120F64:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120F78:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120F8C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120FA0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120FB4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120FC8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120FDC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83120FF0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83121004:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83121018:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8312102C:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83121040:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83121054:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83121068:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8312107C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83121084"))) PPC_WEAK_FUNC(sub_83121084);
PPC_FUNC_IMPL(__imp__sub_83121084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83121088"))) PPC_WEAK_FUNC(sub_83121088);
PPC_FUNC_IMPL(__imp__sub_83121088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,97
	cr6.compare<uint32_t>(ctx.r4.u32, 97, xer);
	// bgt cr6,0x831219c0
	if (cr6.gt) goto loc_831219C0;
	// lis r12,-31982
	ctx.r12.s64 = -2095972352;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4264
	ctx.r12.s64 = ctx.r12.s64 + 4264;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_831212CC;
	case 1:
		goto loc_8312159C;
	case 2:
		goto loc_831215B0;
	case 3:
		goto loc_831215D8;
	case 4:
		goto loc_831215EC;
	case 5:
		goto loc_83121600;
	case 6:
		goto loc_83121614;
	case 7:
		goto loc_83121628;
	case 8:
		goto loc_8312163C;
	case 9:
		goto loc_83121650;
	case 10:
		goto loc_83121664;
	case 11:
		goto loc_83121678;
	case 12:
		goto loc_8312168C;
	case 13:
		goto loc_831216A0;
	case 14:
		goto loc_83121254;
	case 15:
		goto loc_8312127C;
	case 16:
		goto loc_83121290;
	case 17:
		goto loc_831212A4;
	case 18:
		goto loc_831212B8;
	case 19:
		goto loc_831212E0;
	case 20:
		goto loc_831212F4;
	case 21:
		goto loc_83121308;
	case 22:
		goto loc_8312131C;
	case 23:
		goto loc_83121344;
	case 24:
		goto loc_83121358;
	case 25:
		goto loc_8312136C;
	case 26:
		goto loc_83121380;
	case 27:
		goto loc_831213BC;
	case 28:
		goto loc_831213D0;
	case 29:
		goto loc_831213E4;
	case 30:
		goto loc_831216B4;
	case 31:
		goto loc_831213F8;
	case 32:
		goto loc_83121434;
	case 33:
		goto loc_83121448;
	case 34:
		goto loc_8312145C;
	case 35:
		goto loc_83121470;
	case 36:
		goto loc_831214AC;
	case 37:
		goto loc_831214C0;
	case 38:
		goto loc_83121394;
	case 39:
		goto loc_831216C8;
	case 40:
		goto loc_83121268;
	case 41:
		goto loc_831213A8;
	case 42:
		goto loc_831216DC;
	case 43:
		goto loc_83121538;
	case 44:
		goto loc_83121230;
	case 45:
		goto loc_8312123C;
	case 46:
		goto loc_8312140C;
	case 47:
		goto loc_831216F0;
	case 48:
		goto loc_83121704;
	case 49:
		goto loc_83121718;
	case 50:
		goto loc_83121484;
	case 51:
		goto loc_8312172C;
	case 52:
		goto loc_831214FC;
	case 53:
		goto loc_83121330;
	case 54:
		goto loc_83121740;
	case 55:
		goto loc_83121560;
	case 56:
		goto loc_831214D4;
	case 57:
		goto loc_831214E8;
	case 58:
		goto loc_8312154C;
	case 59:
		goto loc_83121420;
	case 60:
		goto loc_83121498;
	case 61:
		goto loc_83121510;
	case 62:
		goto loc_831215C4;
	case 63:
		goto loc_83121754;
	case 64:
		goto loc_83121768;
	case 65:
		goto loc_8312177C;
	case 66:
		goto loc_83121790;
	case 67:
		goto loc_831217A4;
	case 68:
		goto loc_831217B8;
	case 69:
		goto loc_831217CC;
	case 70:
		goto loc_831217E0;
	case 71:
		goto loc_831217F4;
	case 72:
		goto loc_83121808;
	case 73:
		goto loc_8312181C;
	case 74:
		goto loc_83121830;
	case 75:
		goto loc_83121844;
	case 76:
		goto loc_83121858;
	case 77:
		goto loc_8312186C;
	case 78:
		goto loc_83121880;
	case 79:
		goto loc_83121894;
	case 80:
		goto loc_831218A8;
	case 81:
		goto loc_831218BC;
	case 82:
		goto loc_831218D0;
	case 83:
		goto loc_831218E4;
	case 84:
		goto loc_831218F8;
	case 85:
		goto loc_8312190C;
	case 86:
		goto loc_83121920;
	case 87:
		goto loc_83121934;
	case 88:
		goto loc_83121948;
	case 89:
		goto loc_8312195C;
	case 90:
		goto loc_83121970;
	case 91:
		goto loc_83121984;
	case 92:
		goto loc_83121998;
	case 93:
		goto loc_831219AC;
	case 94:
		goto loc_83121248;
	case 95:
		goto loc_83121524;
	case 96:
		goto loc_83121574;
	case 97:
		goto loc_83121588;
	default:
		return;
	}
	// lwz r24,4812(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4812);
	// lwz r24,5532(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5532);
	// lwz r24,5552(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5552);
	// lwz r24,5592(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5592);
	// lwz r24,5612(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5612);
	// lwz r24,5632(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5632);
	// lwz r24,5652(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5652);
	// lwz r24,5672(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5672);
	// lwz r24,5692(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5692);
	// lwz r24,5712(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5712);
	// lwz r24,5732(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5732);
	// lwz r24,5752(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5752);
	// lwz r24,5772(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5772);
	// lwz r24,5792(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5792);
	// lwz r24,4692(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4692);
	// lwz r24,4732(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4732);
	// lwz r24,4752(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4752);
	// lwz r24,4772(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4772);
	// lwz r24,4792(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4792);
	// lwz r24,4832(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4832);
	// lwz r24,4852(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4852);
	// lwz r24,4872(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4872);
	// lwz r24,4892(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4892);
	// lwz r24,4932(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4932);
	// lwz r24,4952(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4952);
	// lwz r24,4972(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4972);
	// lwz r24,4992(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4992);
	// lwz r24,5052(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5052);
	// lwz r24,5072(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5072);
	// lwz r24,5092(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5092);
	// lwz r24,5812(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5812);
	// lwz r24,5112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5112);
	// lwz r24,5172(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5172);
	// lwz r24,5192(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5192);
	// lwz r24,5212(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5212);
	// lwz r24,5232(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5232);
	// lwz r24,5292(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5292);
	// lwz r24,5312(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5312);
	// lwz r24,5012(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5012);
	// lwz r24,5832(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5832);
	// lwz r24,4712(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4712);
	// lwz r24,5032(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5032);
	// lwz r24,5852(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5852);
	// lwz r24,5432(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5432);
	// lwz r24,4656(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4656);
	// lwz r24,4668(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4668);
	// lwz r24,5132(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5132);
	// lwz r24,5872(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5872);
	// lwz r24,5892(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5892);
	// lwz r24,5912(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5912);
	// lwz r24,5252(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5252);
	// lwz r24,5932(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5932);
	// lwz r24,5372(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5372);
	// lwz r24,4912(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4912);
	// lwz r24,5952(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5952);
	// lwz r24,5472(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5472);
	// lwz r24,5332(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5332);
	// lwz r24,5352(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5352);
	// lwz r24,5452(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5452);
	// lwz r24,5152(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5152);
	// lwz r24,5272(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5272);
	// lwz r24,5392(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5392);
	// lwz r24,5572(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5572);
	// lwz r24,5972(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5972);
	// lwz r24,5992(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5992);
	// lwz r24,6012(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6012);
	// lwz r24,6032(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6032);
	// lwz r24,6052(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6052);
	// lwz r24,6072(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6072);
	// lwz r24,6092(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6092);
	// lwz r24,6112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6112);
	// lwz r24,6132(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6132);
	// lwz r24,6152(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6152);
	// lwz r24,6172(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6172);
	// lwz r24,6192(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6192);
	// lwz r24,6212(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6212);
	// lwz r24,6232(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6232);
	// lwz r24,6252(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6252);
	// lwz r24,6272(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6272);
	// lwz r24,6292(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6292);
	// lwz r24,6312(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6312);
	// lwz r24,6332(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6332);
	// lwz r24,6352(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6352);
	// lwz r24,6372(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6372);
	// lwz r24,6392(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6392);
	// lwz r24,6412(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6412);
	// lwz r24,6432(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6432);
	// lwz r24,6452(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6452);
	// lwz r24,6472(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6472);
	// lwz r24,6492(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6492);
	// lwz r24,6512(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6512);
	// lwz r24,6532(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6532);
	// lwz r24,6552(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6552);
	// lwz r24,6572(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6572);
	// lwz r24,4680(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4680);
	// lwz r24,5412(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5412);
	// lwz r24,5492(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5492);
	// lwz r24,5512(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5512);
loc_83121230:
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312123C:
	// stb r5,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r5.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121248:
	// stb r5,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121254:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r5,1,24,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121268:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r5,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312127C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,25,0,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0xFE000000) | (ctx.r11.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121290:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,18,7,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0x1FC0000) | (ctx.r11.u64 & 0xFFFFFFFFFE03FFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831212A4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,11,14,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x3F800) | (ctx.r11.u64 & 0xFFFFFFFFFFFC07FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831212B8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831212CC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831212E0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r5,25,0,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0xFE000000) | (ctx.r11.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831212F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r5,18,7,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0x1FC0000) | (ctx.r11.u64 & 0xFFFFFFFFFE03FFFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121308:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r5,11,14,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x3F800) | (ctx.r11.u64 & 0xFFFFFFFFFFFC07FF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312131C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r5,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121330:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r5,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121344:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r5,25,0,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0xFE000000) | (ctx.r11.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121358:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r5,18,7,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0x1FC0000) | (ctx.r11.u64 & 0xFFFFFFFFFE03FFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312136C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r5,11,14,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x3F800) | (ctx.r11.u64 & 0xFFFFFFFFFFFC07FF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121380:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r5,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121394:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r5,1,28,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831213A8:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r5,r11,0,0,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831213BC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r5,25,0,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0xFE000000) | (ctx.r11.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831213D0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r5,18,7,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0x1FC0000) | (ctx.r11.u64 & 0xFFFFFFFFFE03FFFF);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831213E4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r5,11,14,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x3F800) | (ctx.r11.u64 & 0xFFFFFFFFFFFC07FF);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831213F8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r5,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312140C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r5,1,28,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121420:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r5,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121434:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r5,25,0,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0xFE000000) | (ctx.r11.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121448:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r5,18,7,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0x1FC0000) | (ctx.r11.u64 & 0xFFFFFFFFFE03FFFF);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312145C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r5,11,14,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x3F800) | (ctx.r11.u64 & 0xFFFFFFFFFFFC07FF);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121470:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r5,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121484:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r5,1,28,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121498:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r5,r11,0,0,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831214AC:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwimi r11,r5,25,0,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0xFE000000) | (ctx.r11.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831214C0:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwimi r11,r5,18,7,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0x1FC0000) | (ctx.r11.u64 & 0xFFFFFFFFFE03FFFF);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831214D4:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwimi r11,r5,11,14,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x3F800) | (ctx.r11.u64 & 0xFFFFFFFFFFFC07FF);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831214E8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwimi r11,r5,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831214FC:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwimi r11,r5,1,28,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121510:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwimi r11,r5,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121524:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,25,0,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0xFE000000) | (ctx.r11.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121538:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,19,7,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 19) & 0x1F80000) | (ctx.r11.u64 & 0xFFFFFFFFFE07FFFF);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312154C:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,14,13,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x7C000) | (ctx.r11.u64 & 0xFFFFFFFFFFF83FFF);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121560:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,11,18,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x3800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121574:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121588:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312159C:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831215B0:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,1,29,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0x6) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF9);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831215C4:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r11,r5,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831215D8:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831215EC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121600:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,26,4,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 26) & 0xC000000) | (ctx.r11.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121614:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,24,6,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 24) & 0x3000000) | (ctx.r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121628:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,22,8,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312163C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,20,10,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 20) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121650:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121664:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,16,14,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x30000) | (ctx.r11.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121678:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,14,16,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312168C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,12,18,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 12) & 0x3000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831216A0:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,10,20,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0xC00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF3FF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831216B4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,8,22,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0x300) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831216C8:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,6,24,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831216DC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,4,26,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x30) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831216F0:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,2,28,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121704:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwimi r11,r5,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121718:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312172C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,28,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 28) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121740:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,26,4,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 26) & 0xC000000) | (ctx.r11.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121754:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121768:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312177C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121790:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,22,9,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x400000) | (ctx.r11.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831217A4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831217B8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,20,11,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 20) & 0x100000) | (ctx.r11.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831217CC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,19,12,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 19) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831217E0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831217F4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121808:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312181C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121830:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,14,17,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x4000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121844:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121858:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312186C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121880:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121894:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,9,22,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 9) & 0x200) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831218A8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831218BC:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831218D0:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,6,25,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0x40) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831218E4:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831218F8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312190C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121920:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121934:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121948:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwimi r11,r5,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312195C:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwimi r11,r5,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121970:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwimi r11,r5,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121984:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwimi r11,r5,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83121998:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwimi r11,r5,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831219AC:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwimi r11,r5,27,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831219C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831219C8"))) PPC_WEAK_FUNC(sub_831219C8);
PPC_FUNC_IMPL(__imp__sub_831219C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x831219D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x831219f8
	if (!cr6.eq) goto loc_831219F8;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// addi r8,r9,132
	ctx.r8.s64 = ctx.r9.s64 + 132;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121a18
	goto loc_83121A18;
loc_831219F8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121a08
	if (!cr6.eq) goto loc_83121A08;
	// li r9,132
	ctx.r9.s64 = 132;
	// b 0x83121a18
	goto loc_83121A18;
loc_83121A08:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,220
	ctx.r9.s64 = 220;
	// beq cr6,0x83121a18
	if (cr6.eq) goto loc_83121A18;
	// li r9,180
	ctx.r9.s64 = 180;
loc_83121A18:
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83121a38
	if (!cr6.eq) goto loc_83121A38;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// addi r8,r9,30
	ctx.r8.s64 = ctx.r9.s64 + 30;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121a58
	goto loc_83121A58;
loc_83121A38:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121a48
	if (!cr6.eq) goto loc_83121A48;
	// li r9,30
	ctx.r9.s64 = 30;
	// b 0x83121a58
	goto loc_83121A58;
loc_83121A48:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,129
	ctx.r9.s64 = 129;
	// beq cr6,0x83121a58
	if (cr6.eq) goto loc_83121A58;
	// li r9,75
	ctx.r9.s64 = 75;
loc_83121A58:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bne cr6,0x83121a7c
	if (!cr6.eq) goto loc_83121A7C;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121a9c
	goto loc_83121A9C;
loc_83121A7C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121a8c
	if (!cr6.eq) goto loc_83121A8C;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121a9c
	goto loc_83121A9C;
loc_83121A8C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121a9c
	if (cr6.eq) goto loc_83121A9C;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121A9C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// bne cr6,0x83121ab8
	if (!cr6.eq) goto loc_83121AB8;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x1;
	// b 0x83121ad4
	goto loc_83121AD4;
loc_83121AB8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121ac8
	if (!cr6.eq) goto loc_83121AC8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83121ad4
	goto loc_83121AD4;
loc_83121AC8:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83121AD4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bne cr6,0x83121af8
	if (!cr6.eq) goto loc_83121AF8;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r9,r9,31,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121b18
	goto loc_83121B18;
loc_83121AF8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121b08
	if (!cr6.eq) goto loc_83121B08;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121b18
	goto loc_83121B18;
loc_83121B08:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121b18
	if (cr6.eq) goto loc_83121B18;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121B18:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// bne cr6,0x83121b3c
	if (!cr6.eq) goto loc_83121B3C;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r9,r9,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121b5c
	goto loc_83121B5C;
loc_83121B3C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121b4c
	if (!cr6.eq) goto loc_83121B4C;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121b5c
	goto loc_83121B5C;
loc_83121B4C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121b5c
	if (cr6.eq) goto loc_83121B5C;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121B5C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bne cr6,0x83121b80
	if (!cr6.eq) goto loc_83121B80;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r9,r9,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121ba0
	goto loc_83121BA0;
loc_83121B80:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121b90
	if (!cr6.eq) goto loc_83121B90;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121ba0
	goto loc_83121BA0;
loc_83121B90:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121ba0
	if (cr6.eq) goto loc_83121BA0;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121BA0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// bne cr6,0x83121bc4
	if (!cr6.eq) goto loc_83121BC4;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121be4
	goto loc_83121BE4;
loc_83121BC4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121bd4
	if (!cr6.eq) goto loc_83121BD4;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121be4
	goto loc_83121BE4;
loc_83121BD4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121be4
	if (cr6.eq) goto loc_83121BE4;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121BE4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bne cr6,0x83121c00
	if (!cr6.eq) goto loc_83121C00;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r9,13,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xF;
	// b 0x83121c24
	goto loc_83121C24;
loc_83121C00:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121c10
	if (!cr6.eq) goto loc_83121C10;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83121c24
	goto loc_83121C24;
loc_83121C10:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// li r8,12
	ctx.r8.s64 = 12;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83121C24:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// bne cr6,0x83121c48
	if (!cr6.eq) goto loc_83121C48;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r9,r9,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121c68
	goto loc_83121C68;
loc_83121C48:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121c58
	if (!cr6.eq) goto loc_83121C58;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121c68
	goto loc_83121C68;
loc_83121C58:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121c68
	if (cr6.eq) goto loc_83121C68;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121C68:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bne cr6,0x83121c8c
	if (!cr6.eq) goto loc_83121C8C;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r9,r9,19,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121cac
	goto loc_83121CAC;
loc_83121C8C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121c9c
	if (!cr6.eq) goto loc_83121C9C;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121cac
	goto loc_83121CAC;
loc_83121C9C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121cac
	if (cr6.eq) goto loc_83121CAC;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121CAC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// bne cr6,0x83121cd0
	if (!cr6.eq) goto loc_83121CD0;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r9,r9,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121cf0
	goto loc_83121CF0;
loc_83121CD0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121ce0
	if (!cr6.eq) goto loc_83121CE0;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121cf0
	goto loc_83121CF0;
loc_83121CE0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121cf0
	if (cr6.eq) goto loc_83121CF0;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121CF0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bne cr6,0x83121d14
	if (!cr6.eq) goto loc_83121D14;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r9,r9,12,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121d34
	goto loc_83121D34;
loc_83121D14:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121d24
	if (!cr6.eq) goto loc_83121D24;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121d34
	goto loc_83121D34;
loc_83121D24:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121d34
	if (cr6.eq) goto loc_83121D34;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121D34:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// bne cr6,0x83121d50
	if (!cr6.eq) goto loc_83121D50;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r9,9,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xF;
	// b 0x83121d74
	goto loc_83121D74;
loc_83121D50:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121d60
	if (!cr6.eq) goto loc_83121D60;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83121d74
	goto loc_83121D74;
loc_83121D60:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// li r8,15
	ctx.r8.s64 = 15;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83121D74:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// bne cr6,0x83121d98
	if (!cr6.eq) goto loc_83121D98;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r9,r9,12,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121db8
	goto loc_83121DB8;
loc_83121D98:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121da8
	if (!cr6.eq) goto loc_83121DA8;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121db8
	goto loc_83121DB8;
loc_83121DA8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121db8
	if (cr6.eq) goto loc_83121DB8;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121DB8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// bne cr6,0x83121ddc
	if (!cr6.eq) goto loc_83121DDC;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r9,r9,13,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121dfc
	goto loc_83121DFC;
loc_83121DDC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121dec
	if (!cr6.eq) goto loc_83121DEC;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121dfc
	goto loc_83121DFC;
loc_83121DEC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121dfc
	if (cr6.eq) goto loc_83121DFC;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121DFC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bne cr6,0x83121e20
	if (!cr6.eq) goto loc_83121E20;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121e40
	goto loc_83121E40;
loc_83121E20:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121e30
	if (!cr6.eq) goto loc_83121E30;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121e40
	goto loc_83121E40;
loc_83121E30:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121e40
	if (cr6.eq) goto loc_83121E40;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121E40:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// bne cr6,0x83121e64
	if (!cr6.eq) goto loc_83121E64;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r9,r9,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121e84
	goto loc_83121E84;
loc_83121E64:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121e74
	if (!cr6.eq) goto loc_83121E74;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121e84
	goto loc_83121E84;
loc_83121E74:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121e84
	if (cr6.eq) goto loc_83121E84;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121E84:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83121ea4
	if (!cr6.eq) goto loc_83121EA4;
	// lhz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// b 0x83121ec4
	goto loc_83121EC4;
loc_83121EA4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121eb4
	if (!cr6.eq) goto loc_83121EB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83121ec4
	goto loc_83121EC4;
loc_83121EB4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// beq cr6,0x83121ec4
	if (cr6.eq) goto loc_83121EC4;
	// li r9,3
	ctx.r9.s64 = 3;
loc_83121EC4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// bne cr6,0x83121ee0
	if (!cr6.eq) goto loc_83121EE0;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1;
	// b 0x83121efc
	goto loc_83121EFC;
loc_83121EE0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121ef0
	if (!cr6.eq) goto loc_83121EF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83121efc
	goto loc_83121EFC;
loc_83121EF0:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83121EFC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bne cr6,0x83121f20
	if (!cr6.eq) goto loc_83121F20;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r9,r9,25,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121f40
	goto loc_83121F40;
loc_83121F20:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121f30
	if (!cr6.eq) goto loc_83121F30;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121f40
	goto loc_83121F40;
loc_83121F30:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121f40
	if (cr6.eq) goto loc_83121F40;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121F40:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// bne cr6,0x83121f64
	if (!cr6.eq) goto loc_83121F64;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r9,r9,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121f84
	goto loc_83121F84;
loc_83121F64:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121f74
	if (!cr6.eq) goto loc_83121F74;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121f84
	goto loc_83121F84;
loc_83121F74:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121f84
	if (cr6.eq) goto loc_83121F84;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121F84:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// bne cr6,0x83121fa8
	if (!cr6.eq) goto loc_83121FA8;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r9,r9,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83121fc8
	goto loc_83121FC8;
loc_83121FA8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121fb8
	if (!cr6.eq) goto loc_83121FB8;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83121fc8
	goto loc_83121FC8;
loc_83121FB8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83121fc8
	if (cr6.eq) goto loc_83121FC8;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83121FC8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// bne cr6,0x83121fec
	if (!cr6.eq) goto loc_83121FEC;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x8312200c
	goto loc_8312200C;
loc_83121FEC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83121ffc
	if (!cr6.eq) goto loc_83121FFC;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x8312200c
	goto loc_8312200C;
loc_83121FFC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x8312200c
	if (cr6.eq) goto loc_8312200C;
	// li r9,80
	ctx.r9.s64 = 80;
loc_8312200C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bne cr6,0x83122028
	if (!cr6.eq) goto loc_83122028;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r9,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7;
	// b 0x83122048
	goto loc_83122048;
loc_83122028:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122038
	if (!cr6.eq) goto loc_83122038;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122048
	goto loc_83122048;
loc_83122038:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 & ctx.r7.u64;
loc_83122048:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// bne cr6,0x83122064
	if (!cr6.eq) goto loc_83122064;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1;
	// b 0x83122080
	goto loc_83122080;
loc_83122064:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122074
	if (!cr6.eq) goto loc_83122074;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122080
	goto loc_83122080;
loc_83122074:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122080:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// bne cr6,0x831220a4
	if (!cr6.eq) goto loc_831220A4;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r9,r9,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x831220c4
	goto loc_831220C4;
loc_831220A4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831220b4
	if (!cr6.eq) goto loc_831220B4;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x831220c4
	goto loc_831220C4;
loc_831220B4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x831220c4
	if (cr6.eq) goto loc_831220C4;
	// li r9,80
	ctx.r9.s64 = 80;
loc_831220C4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r9.u32);
	// bne cr6,0x831220e8
	if (!cr6.eq) goto loc_831220E8;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r9,r9,12,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83122108
	goto loc_83122108;
loc_831220E8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831220f8
	if (!cr6.eq) goto loc_831220F8;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83122108
	goto loc_83122108;
loc_831220F8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83122108
	if (cr6.eq) goto loc_83122108;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83122108:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// bne cr6,0x8312212c
	if (!cr6.eq) goto loc_8312212C;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r9,r9,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x8312214c
	goto loc_8312214C;
loc_8312212C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8312213c
	if (!cr6.eq) goto loc_8312213C;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x8312214c
	goto loc_8312214C;
loc_8312213C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x8312214c
	if (cr6.eq) goto loc_8312214C;
	// li r9,80
	ctx.r9.s64 = 80;
loc_8312214C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// bne cr6,0x83122170
	if (!cr6.eq) goto loc_83122170;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r9,r9,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83122190
	goto loc_83122190;
loc_83122170:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122180
	if (!cr6.eq) goto loc_83122180;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83122190
	goto loc_83122190;
loc_83122180:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83122190
	if (cr6.eq) goto loc_83122190;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83122190:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// bne cr6,0x831221ac
	if (!cr6.eq) goto loc_831221AC;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r9,22,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x7;
	// b 0x831221cc
	goto loc_831221CC;
loc_831221AC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831221bc
	if (!cr6.eq) goto loc_831221BC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831221cc
	goto loc_831221CC;
loc_831221BC:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 & ctx.r7.u64;
loc_831221CC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// bne cr6,0x831221e8
	if (!cr6.eq) goto loc_831221E8;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r9,r9,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1;
	// b 0x83122204
	goto loc_83122204;
loc_831221E8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831221f8
	if (!cr6.eq) goto loc_831221F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122204
	goto loc_83122204;
loc_831221F8:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122204:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// bne cr6,0x83122228
	if (!cr6.eq) goto loc_83122228;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r9,r9,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x83122248
	goto loc_83122248;
loc_83122228:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122238
	if (!cr6.eq) goto loc_83122238;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x83122248
	goto loc_83122248;
loc_83122238:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x83122248
	if (cr6.eq) goto loc_83122248;
	// li r9,80
	ctx.r9.s64 = 80;
loc_83122248:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// bne cr6,0x8312226c
	if (!cr6.eq) goto loc_8312226C;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r9,r9,12,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F;
	// addi r8,r9,40
	ctx.r8.s64 = ctx.r9.s64 + 40;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x8312228c
	goto loc_8312228C;
loc_8312226C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8312227c
	if (!cr6.eq) goto loc_8312227C;
	// li r9,40
	ctx.r9.s64 = 40;
	// b 0x8312228c
	goto loc_8312228C;
loc_8312227C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,99
	ctx.r9.s64 = 99;
	// beq cr6,0x8312228c
	if (cr6.eq) goto loc_8312228C;
	// li r9,80
	ctx.r9.s64 = 80;
loc_8312228C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// li r8,122
	ctx.r8.s64 = 122;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831222ac
	if (!cr6.eq) goto loc_831222AC;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r9,r9,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7F;
	// b 0x831222cc
	goto loc_831222CC;
loc_831222AC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831222bc
	if (!cr6.eq) goto loc_831222BC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831222cc
	goto loc_831222CC;
loc_831222BC:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfe r9,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_831222CC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// bne cr6,0x831222e8
	if (!cr6.eq) goto loc_831222E8;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r9,r9,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7F;
	// b 0x83122308
	goto loc_83122308;
loc_831222E8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831222f8
	if (!cr6.eq) goto loc_831222F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122308
	goto loc_83122308;
loc_831222F8:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfe r9,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_83122308:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// bne cr6,0x83122324
	if (!cr6.eq) goto loc_83122324;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r9,25,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7;
	// b 0x83122344
	goto loc_83122344;
loc_83122324:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122334
	if (!cr6.eq) goto loc_83122334;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122344
	goto loc_83122344;
loc_83122334:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 & ctx.r7.u64;
loc_83122344:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x83122360
	if (!cr6.eq) goto loc_83122360;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x8312237c
	goto loc_8312237C;
loc_83122360:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122370
	if (!cr6.eq) goto loc_83122370;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8312237c
	goto loc_8312237C;
loc_83122370:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8312237C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x831223a0
	if (!cr6.eq) goto loc_831223A0;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r9,r9,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3F;
	// addi r8,r9,15
	ctx.r8.s64 = ctx.r9.s64 + 15;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// b 0x831223c0
	goto loc_831223C0;
loc_831223A0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831223b0
	if (!cr6.eq) goto loc_831223B0;
	// li r9,15
	ctx.r9.s64 = 15;
	// b 0x831223c0
	goto loc_831223C0;
loc_831223B0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,63
	ctx.r9.s64 = 63;
	// beq cr6,0x831223c0
	if (cr6.eq) goto loc_831223C0;
	// li r9,17
	ctx.r9.s64 = 17;
loc_831223C0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bne cr6,0x831223dc
	if (!cr6.eq) goto loc_831223DC;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r9,5,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// b 0x83122400
	goto loc_83122400;
loc_831223DC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831223ec
	if (!cr6.eq) goto loc_831223EC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122400
	goto loc_83122400;
loc_831223EC:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// li r8,17
	ctx.r8.s64 = 17;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83122400:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bne cr6,0x8312241c
	if (!cr6.eq) goto loc_8312241C;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r9,19,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7;
	// b 0x83122440
	goto loc_83122440;
loc_8312241C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8312242c
	if (!cr6.eq) goto loc_8312242C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122440
	goto loc_83122440;
loc_8312242C:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// li r8,5
	ctx.r8.s64 = 5;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83122440:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122460
	if (!cr6.eq) goto loc_83122460;
	// lhz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 40);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// b 0x83122480
	goto loc_83122480;
loc_83122460:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122470
	if (!cr6.eq) goto loc_83122470;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122480
	goto loc_83122480;
loc_83122470:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83122480:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bne cr6,0x8312249c
	if (!cr6.eq) goto loc_8312249C;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// b 0x831224bc
	goto loc_831224BC;
loc_8312249C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831224ac
	if (!cr6.eq) goto loc_831224AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831224bc
	goto loc_831224BC;
loc_831224AC:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_831224BC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bne cr6,0x831224d8
	if (!cr6.eq) goto loc_831224D8;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
	// b 0x831224f4
	goto loc_831224F4;
loc_831224D8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831224e8
	if (!cr6.eq) goto loc_831224E8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831224f4
	goto loc_831224F4;
loc_831224E8:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r7,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_831224F4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bne cr6,0x83122510
	if (!cr6.eq) goto loc_83122510;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,18,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3;
	// b 0x83122530
	goto loc_83122530;
loc_83122510:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122520
	if (!cr6.eq) goto loc_83122520;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122530
	goto loc_83122530;
loc_83122520:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83122530:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bne cr6,0x8312254c
	if (!cr6.eq) goto loc_8312254C;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,24,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3;
	// b 0x8312256c
	goto loc_8312256C;
loc_8312254C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8312255c
	if (!cr6.eq) goto loc_8312255C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8312256c
	goto loc_8312256C;
loc_8312255C:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_8312256C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bne cr6,0x83122588
	if (!cr6.eq) goto loc_83122588;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,10,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3;
	// b 0x831225a8
	goto loc_831225A8;
loc_83122588:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122598
	if (!cr6.eq) goto loc_83122598;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831225a8
	goto loc_831225A8;
loc_83122598:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_831225A8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bne cr6,0x831225c4
	if (!cr6.eq) goto loc_831225C4;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r9,r9,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// b 0x831225e4
	goto loc_831225E4;
loc_831225C4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831225d4
	if (!cr6.eq) goto loc_831225D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831225e4
	goto loc_831225E4;
loc_831225D4:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_831225E4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bne cr6,0x83122600
	if (!cr6.eq) goto loc_83122600;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// b 0x83122620
	goto loc_83122620;
loc_83122600:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122610
	if (!cr6.eq) goto loc_83122610;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122620
	goto loc_83122620;
loc_83122610:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83122620:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bne cr6,0x8312263c
	if (!cr6.eq) goto loc_8312263C;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,22,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3;
	// b 0x8312265c
	goto loc_8312265C;
loc_8312263C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8312264c
	if (!cr6.eq) goto loc_8312264C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8312265c
	goto loc_8312265C;
loc_8312264C:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_8312265C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// bne cr6,0x83122678
	if (!cr6.eq) goto loc_83122678;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,6,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// b 0x83122698
	goto loc_83122698;
loc_83122678:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122688
	if (!cr6.eq) goto loc_83122688;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122698
	goto loc_83122698;
loc_83122688:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83122698:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// bne cr6,0x831226b4
	if (!cr6.eq) goto loc_831226B4;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,14,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3;
	// b 0x831226d4
	goto loc_831226D4;
loc_831226B4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831226c4
	if (!cr6.eq) goto loc_831226C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831226d4
	goto loc_831226D4;
loc_831226C4:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_831226D4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// bne cr6,0x831226f0
	if (!cr6.eq) goto loc_831226F0;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// b 0x83122710
	goto loc_83122710;
loc_831226F0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122700
	if (!cr6.eq) goto loc_83122700;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122710
	goto loc_83122710;
loc_83122700:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83122710:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// bne cr6,0x8312272c
	if (!cr6.eq) goto loc_8312272C;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,20,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x3;
	// b 0x8312274c
	goto loc_8312274C;
loc_8312272C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8312273c
	if (!cr6.eq) goto loc_8312273C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8312274c
	goto loc_8312274C;
loc_8312273C:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_8312274C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// bne cr6,0x83122768
	if (!cr6.eq) goto loc_83122768;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// b 0x83122778
	goto loc_83122778;
loc_83122768:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x83122778
	if (cr6.eq) goto loc_83122778;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_83122778:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// bne cr6,0x83122794
	if (!cr6.eq) goto loc_83122794;
	// lbz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// b 0x831227b4
	goto loc_831227B4;
loc_83122794:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831227a4
	if (!cr6.eq) goto loc_831227A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831227b4
	goto loc_831227B4;
loc_831227A4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,3
	ctx.r9.s64 = 3;
	// beq cr6,0x831227b4
	if (cr6.eq) goto loc_831227B4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_831227B4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// bne cr6,0x831227d0
	if (!cr6.eq) goto loc_831227D0;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x3;
	// b 0x831227f0
	goto loc_831227F0;
loc_831227D0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831227e0
	if (!cr6.eq) goto loc_831227E0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831227f0
	goto loc_831227F0;
loc_831227E0:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r7,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_831227F0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// bne cr6,0x8312280c
	if (!cr6.eq) goto loc_8312280C;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// b 0x8312282c
	goto loc_8312282C;
loc_8312280C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8312281c
	if (!cr6.eq) goto loc_8312281C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8312282c
	goto loc_8312282C;
loc_8312281C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r9,3
	ctx.r9.s64 = 3;
	// beq cr6,0x8312282c
	if (cr6.eq) goto loc_8312282C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8312282C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// bne cr6,0x83122848
	if (!cr6.eq) goto loc_83122848;
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// b 0x83122868
	goto loc_83122868;
loc_83122848:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122858
	if (!cr6.eq) goto loc_83122858;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122868
	goto loc_83122868;
loc_83122858:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_83122868:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// bne cr6,0x83122884
	if (!cr6.eq) goto loc_83122884;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// b 0x831228a4
	goto loc_831228A4;
loc_83122884:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122894
	if (!cr6.eq) goto loc_83122894;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831228a4
	goto loc_831228A4;
loc_83122894:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_831228A4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// bne cr6,0x831228c0
	if (!cr6.eq) goto loc_831228C0;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// b 0x831228e0
	goto loc_831228E0;
loc_831228C0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831228d0
	if (!cr6.eq) goto loc_831228D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831228e0
	goto loc_831228E0;
loc_831228D0:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_831228E0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// bne cr6,0x831228fc
	if (!cr6.eq) goto loc_831228FC;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,26,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// b 0x8312291c
	goto loc_8312291C;
loc_831228FC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8312290c
	if (!cr6.eq) goto loc_8312290C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8312291c
	goto loc_8312291C;
loc_8312290C:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_8312291C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// bne cr6,0x83122938
	if (!cr6.eq) goto loc_83122938;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// b 0x8312295c
	goto loc_8312295C;
loc_83122938:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122948
	if (!cr6.eq) goto loc_83122948;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8312295c
	goto loc_8312295C;
loc_83122948:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// li r8,3
	ctx.r8.s64 = 3;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
loc_8312295C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// bne cr6,0x83122978
	if (!cr6.eq) goto loc_83122978;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// b 0x83122994
	goto loc_83122994;
loc_83122978:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122988
	if (!cr6.eq) goto loc_83122988;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122994
	goto loc_83122994;
loc_83122988:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122994:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// bne cr6,0x831229b0
	if (!cr6.eq) goto loc_831229B0;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x831229cc
	goto loc_831229CC;
loc_831229B0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831229c0
	if (!cr6.eq) goto loc_831229C0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x831229cc
	goto loc_831229CC;
loc_831229C0:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_831229CC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// bne cr6,0x831229e8
	if (!cr6.eq) goto loc_831229E8;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,17,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1;
	// b 0x83122a04
	goto loc_83122A04;
loc_831229E8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831229f8
	if (!cr6.eq) goto loc_831229F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122a04
	goto loc_83122A04;
loc_831229F8:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122A04:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// bne cr6,0x83122a20
	if (!cr6.eq) goto loc_83122A20;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// b 0x83122a3c
	goto loc_83122A3C;
loc_83122A20:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122a30
	if (!cr6.eq) goto loc_83122A30;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122a3c
	goto loc_83122A3C;
loc_83122A30:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122A3C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r9.u32);
	// bne cr6,0x83122a58
	if (!cr6.eq) goto loc_83122A58;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// b 0x83122a74
	goto loc_83122A74;
loc_83122A58:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122a68
	if (!cr6.eq) goto loc_83122A68;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122a74
	goto loc_83122A74;
loc_83122A68:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122A74:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// bne cr6,0x83122a90
	if (!cr6.eq) goto loc_83122A90;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x1;
	// b 0x83122aac
	goto loc_83122AAC;
loc_83122A90:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122aa0
	if (!cr6.eq) goto loc_83122AA0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122aac
	goto loc_83122AAC;
loc_83122AA0:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122AAC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// bne cr6,0x83122ac8
	if (!cr6.eq) goto loc_83122AC8;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// b 0x83122ae4
	goto loc_83122AE4;
loc_83122AC8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122ad8
	if (!cr6.eq) goto loc_83122AD8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122ae4
	goto loc_83122AE4;
loc_83122AD8:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122AE4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r9.u32);
	// bne cr6,0x83122b00
	if (!cr6.eq) goto loc_83122B00;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r9,r9,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// b 0x83122b1c
	goto loc_83122B1C;
loc_83122B00:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122b10
	if (!cr6.eq) goto loc_83122B10;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122b1c
	goto loc_83122B1C;
loc_83122B10:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122B1C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// bne cr6,0x83122b38
	if (!cr6.eq) goto loc_83122B38;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// b 0x83122b54
	goto loc_83122B54;
loc_83122B38:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122b48
	if (!cr6.eq) goto loc_83122B48;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122b54
	goto loc_83122B54;
loc_83122B48:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122B54:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// bne cr6,0x83122b70
	if (!cr6.eq) goto loc_83122B70;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	// b 0x83122b8c
	goto loc_83122B8C;
loc_83122B70:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122b80
	if (!cr6.eq) goto loc_83122B80;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122b8c
	goto loc_83122B8C;
loc_83122B80:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122B8C:
	// clrlwi r14,r9,24
	ctx.r14.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122ba4
	if (!cr6.eq) goto loc_83122BA4;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// b 0x83122bc0
	goto loc_83122BC0;
loc_83122BA4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122bb4
	if (!cr6.eq) goto loc_83122BB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122bc0
	goto loc_83122BC0;
loc_83122BB4:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122BC0:
	// clrlwi r15,r9,24
	ctx.r15.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122bd8
	if (!cr6.eq) goto loc_83122BD8;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x1;
	// b 0x83122bf4
	goto loc_83122BF4;
loc_83122BD8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122be8
	if (!cr6.eq) goto loc_83122BE8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122bf4
	goto loc_83122BF4;
loc_83122BE8:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122BF4:
	// clrlwi r16,r9,24
	ctx.r16.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122c0c
	if (!cr6.eq) goto loc_83122C0C;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// b 0x83122c28
	goto loc_83122C28;
loc_83122C0C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122c1c
	if (!cr6.eq) goto loc_83122C1C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122c28
	goto loc_83122C28;
loc_83122C1C:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122C28:
	// clrlwi r17,r9,24
	ctx.r17.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122c40
	if (!cr6.eq) goto loc_83122C40;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	// b 0x83122c5c
	goto loc_83122C5C;
loc_83122C40:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122c50
	if (!cr6.eq) goto loc_83122C50;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122c5c
	goto loc_83122C5C;
loc_83122C50:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122C5C:
	// clrlwi r18,r9,24
	ctx.r18.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122c74
	if (!cr6.eq) goto loc_83122C74;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// b 0x83122c90
	goto loc_83122C90;
loc_83122C74:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122c84
	if (!cr6.eq) goto loc_83122C84;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122c90
	goto loc_83122C90;
loc_83122C84:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122C90:
	// clrlwi r19,r9,24
	ctx.r19.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122ca8
	if (!cr6.eq) goto loc_83122CA8;
	// lhz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 44);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x83122cc4
	goto loc_83122CC4;
loc_83122CA8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122cb8
	if (!cr6.eq) goto loc_83122CB8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122cc4
	goto loc_83122CC4;
loc_83122CB8:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122CC4:
	// clrlwi r20,r9,24
	ctx.r20.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122cdc
	if (!cr6.eq) goto loc_83122CDC;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// b 0x83122cf8
	goto loc_83122CF8;
loc_83122CDC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122cec
	if (!cr6.eq) goto loc_83122CEC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122cf8
	goto loc_83122CF8;
loc_83122CEC:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122CF8:
	// clrlwi r21,r9,24
	ctx.r21.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122d10
	if (!cr6.eq) goto loc_83122D10;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x83122d2c
	goto loc_83122D2C;
loc_83122D10:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122d20
	if (!cr6.eq) goto loc_83122D20;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122d2c
	goto loc_83122D2C;
loc_83122D20:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122D2C:
	// clrlwi r22,r9,24
	ctx.r22.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122d44
	if (!cr6.eq) goto loc_83122D44;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	// b 0x83122d60
	goto loc_83122D60;
loc_83122D44:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122d54
	if (!cr6.eq) goto loc_83122D54;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122d60
	goto loc_83122D60;
loc_83122D54:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122D60:
	// clrlwi r23,r9,24
	ctx.r23.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122d78
	if (!cr6.eq) goto loc_83122D78;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// b 0x83122d94
	goto loc_83122D94;
loc_83122D78:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122d88
	if (!cr6.eq) goto loc_83122D88;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122d94
	goto loc_83122D94;
loc_83122D88:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122D94:
	// clrlwi r24,r9,24
	ctx.r24.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122dac
	if (!cr6.eq) goto loc_83122DAC;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// b 0x83122dc8
	goto loc_83122DC8;
loc_83122DAC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122dbc
	if (!cr6.eq) goto loc_83122DBC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122dc8
	goto loc_83122DC8;
loc_83122DBC:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122DC8:
	// clrlwi r25,r9,24
	ctx.r25.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122de0
	if (!cr6.eq) goto loc_83122DE0;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	// b 0x83122dfc
	goto loc_83122DFC;
loc_83122DE0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122df0
	if (!cr6.eq) goto loc_83122DF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122dfc
	goto loc_83122DFC;
loc_83122DF0:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122DFC:
	// clrlwi r26,r9,24
	ctx.r26.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122e14
	if (!cr6.eq) goto loc_83122E14;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// b 0x83122e30
	goto loc_83122E30;
loc_83122E14:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122e24
	if (!cr6.eq) goto loc_83122E24;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122e30
	goto loc_83122E30;
loc_83122E24:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122E30:
	// clrlwi r27,r9,24
	ctx.r27.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122e48
	if (!cr6.eq) goto loc_83122E48;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// b 0x83122e64
	goto loc_83122E64;
loc_83122E48:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122e58
	if (!cr6.eq) goto loc_83122E58;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122e64
	goto loc_83122E64;
loc_83122E58:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122E64:
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122e7c
	if (!cr6.eq) goto loc_83122E7C;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1;
	// b 0x83122e98
	goto loc_83122E98;
loc_83122E7C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122e8c
	if (!cr6.eq) goto loc_83122E8C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122e98
	goto loc_83122E98;
loc_83122E8C:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122E98:
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122eb0
	if (!cr6.eq) goto loc_83122EB0;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	// b 0x83122ecc
	goto loc_83122ECC;
loc_83122EB0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122ec0
	if (!cr6.eq) goto loc_83122EC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122ecc
	goto loc_83122ECC;
loc_83122EC0:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122ECC:
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122ee4
	if (!cr6.eq) goto loc_83122EE4;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x83122f00
	goto loc_83122F00;
loc_83122EE4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122ef4
	if (!cr6.eq) goto loc_83122EF4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122f00
	goto loc_83122F00;
loc_83122EF4:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122F00:
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122f18
	if (!cr6.eq) goto loc_83122F18;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r9,r9,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// b 0x83122f34
	goto loc_83122F34;
loc_83122F18:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122f28
	if (!cr6.eq) goto loc_83122F28;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122f34
	goto loc_83122F34;
loc_83122F28:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122F34:
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122f4c
	if (!cr6.eq) goto loc_83122F4C;
	// lbz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x83122f68
	goto loc_83122F68;
loc_83122F4C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122f5c
	if (!cr6.eq) goto loc_83122F5C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122f68
	goto loc_83122F68;
loc_83122F5C:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122F68:
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122f80
	if (!cr6.eq) goto loc_83122F80;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// b 0x83122f9c
	goto loc_83122F9C;
loc_83122F80:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122f90
	if (!cr6.eq) goto loc_83122F90;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122f9c
	goto loc_83122F9C;
loc_83122F90:
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83122F9C:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83122fb4
	if (!cr6.eq) goto loc_83122FB4;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r9,r11,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// b 0x83122fd0
	goto loc_83122FD0;
loc_83122FB4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83122fc4
	if (!cr6.eq) goto loc_83122FC4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83122fd0
	goto loc_83122FD0;
loc_83122FC4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_83122FD0:
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x83122FDC;
	sub_83121088(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83121088
	ctx.lr = 0x83122FEC;
	sub_83121088(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,292(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x83121088
	ctx.lr = 0x83122FFC;
	sub_83121088(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83121088
	ctx.lr = 0x8312300C;
	sub_83121088(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x83121088
	ctx.lr = 0x8312301C;
	sub_83121088(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83121088
	ctx.lr = 0x8312302C;
	sub_83121088(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x83121088
	ctx.lr = 0x8312303C;
	sub_83121088(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x83121088
	ctx.lr = 0x8312304C;
	sub_83121088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x83121088
	ctx.lr = 0x8312305C;
	sub_83121088(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x83121088
	ctx.lr = 0x8312306C;
	sub_83121088(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x83121088
	ctx.lr = 0x8312307C;
	sub_83121088(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x83121088
	ctx.lr = 0x8312308C;
	sub_83121088(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x83121088
	ctx.lr = 0x8312309C;
	sub_83121088(ctx, base);
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x83121088
	ctx.lr = 0x831230AC;
	sub_83121088(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x83121088
	ctx.lr = 0x831230BC;
	sub_83121088(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x83121088
	ctx.lr = 0x831230CC;
	sub_83121088(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x83121088
	ctx.lr = 0x831230DC;
	sub_83121088(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x83121088
	ctx.lr = 0x831230EC;
	sub_83121088(ctx, base);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x83121088
	ctx.lr = 0x831230FC;
	sub_83121088(ctx, base);
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x83121088
	ctx.lr = 0x8312310C;
	sub_83121088(ctx, base);
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312311C;
	sub_83121088(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x83121088
	ctx.lr = 0x8312312C;
	sub_83121088(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x83121088
	ctx.lr = 0x8312313C;
	sub_83121088(ctx, base);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x83121088
	ctx.lr = 0x8312314C;
	sub_83121088(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,268(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x83121088
	ctx.lr = 0x8312315C;
	sub_83121088(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x83121088
	ctx.lr = 0x8312316C;
	sub_83121088(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x83121088
	ctx.lr = 0x8312317C;
	sub_83121088(ctx, base);
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x83121088
	ctx.lr = 0x8312318C;
	sub_83121088(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x83121088
	ctx.lr = 0x8312319C;
	sub_83121088(ctx, base);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x83121088
	ctx.lr = 0x831231AC;
	sub_83121088(ctx, base);
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x83121088
	ctx.lr = 0x831231BC;
	sub_83121088(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x83121088
	ctx.lr = 0x831231CC;
	sub_83121088(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x83121088
	ctx.lr = 0x831231DC;
	sub_83121088(ctx, base);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x83121088
	ctx.lr = 0x831231EC;
	sub_83121088(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// bl 0x83121088
	ctx.lr = 0x831231FC;
	sub_83121088(ctx, base);
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x83121088
	ctx.lr = 0x8312320C;
	sub_83121088(ctx, base);
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83121088
	ctx.lr = 0x8312321C;
	sub_83121088(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83121088
	ctx.lr = 0x8312322C;
	sub_83121088(ctx, base);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83121088
	ctx.lr = 0x8312323C;
	sub_83121088(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x83121088
	ctx.lr = 0x8312324C;
	sub_83121088(ctx, base);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312325C;
	sub_83121088(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x83121088
	ctx.lr = 0x8312326C;
	sub_83121088(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x83121088
	ctx.lr = 0x8312327C;
	sub_83121088(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x83121088
	ctx.lr = 0x8312328C;
	sub_83121088(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x83121088
	ctx.lr = 0x8312329C;
	sub_83121088(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x83121088
	ctx.lr = 0x831232AC;
	sub_83121088(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x83121088
	ctx.lr = 0x831232BC;
	sub_83121088(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x83121088
	ctx.lr = 0x831232CC;
	sub_83121088(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x83121088
	ctx.lr = 0x831232DC;
	sub_83121088(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x83121088
	ctx.lr = 0x831232EC;
	sub_83121088(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x83121088
	ctx.lr = 0x831232FC;
	sub_83121088(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x83121088
	ctx.lr = 0x8312330C;
	sub_83121088(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x83121088
	ctx.lr = 0x8312331C;
	sub_83121088(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x83121088
	ctx.lr = 0x8312332C;
	sub_83121088(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x83121088
	ctx.lr = 0x8312333C;
	sub_83121088(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x83121088
	ctx.lr = 0x8312334C;
	sub_83121088(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x83121088
	ctx.lr = 0x8312335C;
	sub_83121088(ctx, base);
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x83121088
	ctx.lr = 0x8312336C;
	sub_83121088(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x83121088
	ctx.lr = 0x8312337C;
	sub_83121088(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x83121088
	ctx.lr = 0x8312338C;
	sub_83121088(ctx, base);
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x83121088
	ctx.lr = 0x8312339C;
	sub_83121088(ctx, base);
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x831233AC;
	sub_83121088(ctx, base);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x83121088
	ctx.lr = 0x831233BC;
	sub_83121088(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x83121088
	ctx.lr = 0x831233CC;
	sub_83121088(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x83121088
	ctx.lr = 0x831233DC;
	sub_83121088(ctx, base);
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// bl 0x83121088
	ctx.lr = 0x831233EC;
	sub_83121088(ctx, base);
	// li r4,66
	ctx.r4.s64 = 66;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x83121088
	ctx.lr = 0x831233FC;
	sub_83121088(ctx, base);
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x83121088
	ctx.lr = 0x8312340C;
	sub_83121088(ctx, base);
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x83121088
	ctx.lr = 0x8312341C;
	sub_83121088(ctx, base);
	// li r4,69
	ctx.r4.s64 = 69;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x83121088
	ctx.lr = 0x8312342C;
	sub_83121088(ctx, base);
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,352(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x83121088
	ctx.lr = 0x8312343C;
	sub_83121088(ctx, base);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// bl 0x83121088
	ctx.lr = 0x8312344C;
	sub_83121088(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312345C;
	sub_83121088(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312346C;
	sub_83121088(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,74
	ctx.r4.s64 = 74;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312347C;
	sub_83121088(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// li r4,75
	ctx.r4.s64 = 75;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312348C;
	sub_83121088(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312349C;
	sub_83121088(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,77
	ctx.r4.s64 = 77;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x831234AC;
	sub_83121088(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,78
	ctx.r4.s64 = 78;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x831234BC;
	sub_83121088(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x831234CC;
	sub_83121088(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x831234DC;
	sub_83121088(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,81
	ctx.r4.s64 = 81;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x831234EC;
	sub_83121088(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x831234FC;
	sub_83121088(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312350C;
	sub_83121088(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312351C;
	sub_83121088(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312352C;
	sub_83121088(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312353C;
	sub_83121088(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312354C;
	sub_83121088(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312355C;
	sub_83121088(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312356C;
	sub_83121088(ctx, base);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312357C;
	sub_83121088(ctx, base);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312358C;
	sub_83121088(ctx, base);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x8312359C;
	sub_83121088(ctx, base);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83121088
	ctx.lr = 0x831235AC;
	sub_83121088(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831235B4"))) PPC_WEAK_FUNC(sub_831235B4);
PPC_FUNC_IMPL(__imp__sub_831235B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831235B8"))) PPC_WEAK_FUNC(sub_831235B8);
PPC_FUNC_IMPL(__imp__sub_831235B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x831235d4
	if (cr6.lt) goto loc_831235D4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-8828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8828);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_831235D4:
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831235E8"))) PPC_WEAK_FUNC(sub_831235E8);
PPC_FUNC_IMPL(__imp__sub_831235E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r10,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312361C"))) PPC_WEAK_FUNC(sub_8312361C);
PPC_FUNC_IMPL(__imp__sub_8312361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123620"))) PPC_WEAK_FUNC(sub_83123620);
PPC_FUNC_IMPL(__imp__sub_83123620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,13
	ctx.r11.s64 = 13;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-2184
	ctx.r5.s64 = ctx.r7.s64 + -2184;
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312364C"))) PPC_WEAK_FUNC(sub_8312364C);
PPC_FUNC_IMPL(__imp__sub_8312364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123650"))) PPC_WEAK_FUNC(sub_83123650);
PPC_FUNC_IMPL(__imp__sub_83123650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,27
	cr6.compare<int32_t>(ctx.r3.s32, 27, xer);
	// blt cr6,0x8312365c
	if (cr6.lt) goto loc_8312365C;
	// li r3,24
	ctx.r3.s64 = 24;
loc_8312365C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2128
	ctx.r9.s64 = ctx.r11.s64 + -2128;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123670"))) PPC_WEAK_FUNC(sub_83123670);
PPC_FUNC_IMPL(__imp__sub_83123670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-2020
	ctx.r5.s64 = ctx.r7.s64 + -2020;
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312369C"))) PPC_WEAK_FUNC(sub_8312369C);
PPC_FUNC_IMPL(__imp__sub_8312369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831236A0"))) PPC_WEAK_FUNC(sub_831236A0);
PPC_FUNC_IMPL(__imp__sub_831236A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-2012
	ctx.r5.s64 = ctx.r7.s64 + -2012;
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831236CC"))) PPC_WEAK_FUNC(sub_831236CC);
PPC_FUNC_IMPL(__imp__sub_831236CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831236D0"))) PPC_WEAK_FUNC(sub_831236D0);
PPC_FUNC_IMPL(__imp__sub_831236D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,7
	ctx.r11.s64 = 7;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,-2004
	ctx.r5.s64 = ctx.r7.s64 + -2004;
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831236FC"))) PPC_WEAK_FUNC(sub_831236FC);
PPC_FUNC_IMPL(__imp__sub_831236FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123700"))) PPC_WEAK_FUNC(sub_83123700);
PPC_FUNC_IMPL(__imp__sub_83123700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,28
	cr6.compare<int32_t>(ctx.r3.s32, 28, xer);
	// blt cr6,0x8312370c
	if (cr6.lt) goto loc_8312370C;
	// li r3,8
	ctx.r3.s64 = 8;
loc_8312370C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-1976
	ctx.r9.s64 = ctx.r11.s64 + -1976;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123720"))) PPC_WEAK_FUNC(sub_83123720);
PPC_FUNC_IMPL(__imp__sub_83123720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r11,-1864
	ctx.r8.s64 = ctx.r11.s64 + -1864;
	// li r3,98
	ctx.r3.s64 = 98;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_83123738:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x83123758
	if (cr6.eq) goto loc_83123758;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// blt cr6,0x83123738
	if (cr6.lt) goto loc_83123738;
	// blr 
	return;
loc_83123758:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123764"))) PPC_WEAK_FUNC(sub_83123764);
PPC_FUNC_IMPL(__imp__sub_83123764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123768"))) PPC_WEAK_FUNC(sub_83123768);
PPC_FUNC_IMPL(__imp__sub_83123768) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123770"))) PPC_WEAK_FUNC(sub_83123770);
PPC_FUNC_IMPL(__imp__sub_83123770) {
	PPC_FUNC_PROLOGUE();
	// sth r4,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123778"))) PPC_WEAK_FUNC(sub_83123778);
PPC_FUNC_IMPL(__imp__sub_83123778) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123780"))) PPC_WEAK_FUNC(sub_83123780);
PPC_FUNC_IMPL(__imp__sub_83123780) {
	PPC_FUNC_PROLOGUE();
	// sth r4,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123788"))) PPC_WEAK_FUNC(sub_83123788);
PPC_FUNC_IMPL(__imp__sub_83123788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x831237a0
	if (cr6.eq) goto loc_831237A0;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_831237A0:
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831237AC"))) PPC_WEAK_FUNC(sub_831237AC);
PPC_FUNC_IMPL(__imp__sub_831237AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831237B0"))) PPC_WEAK_FUNC(sub_831237B0);
PPC_FUNC_IMPL(__imp__sub_831237B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x831237c0
	if (cr6.eq) goto loc_831237C0;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_831237C0:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831237CC"))) PPC_WEAK_FUNC(sub_831237CC);
PPC_FUNC_IMPL(__imp__sub_831237CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831237D0"))) PPC_WEAK_FUNC(sub_831237D0);
PPC_FUNC_IMPL(__imp__sub_831237D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831237DC"))) PPC_WEAK_FUNC(sub_831237DC);
PPC_FUNC_IMPL(__imp__sub_831237DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831237E0"))) PPC_WEAK_FUNC(sub_831237E0);
PPC_FUNC_IMPL(__imp__sub_831237E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,22(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831237E8"))) PPC_WEAK_FUNC(sub_831237E8);
PPC_FUNC_IMPL(__imp__sub_831237E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831237F4"))) PPC_WEAK_FUNC(sub_831237F4);
PPC_FUNC_IMPL(__imp__sub_831237F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831237F8"))) PPC_WEAK_FUNC(sub_831237F8);
PPC_FUNC_IMPL(__imp__sub_831237F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,23(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123800"))) PPC_WEAK_FUNC(sub_83123800);
PPC_FUNC_IMPL(__imp__sub_83123800) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312380C"))) PPC_WEAK_FUNC(sub_8312380C);
PPC_FUNC_IMPL(__imp__sub_8312380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123810"))) PPC_WEAK_FUNC(sub_83123810);
PPC_FUNC_IMPL(__imp__sub_83123810) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123818"))) PPC_WEAK_FUNC(sub_83123818);
PPC_FUNC_IMPL(__imp__sub_83123818) {
	PPC_FUNC_PROLOGUE();
	// stb r4,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123820"))) PPC_WEAK_FUNC(sub_83123820);
PPC_FUNC_IMPL(__imp__sub_83123820) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,29(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123828"))) PPC_WEAK_FUNC(sub_83123828);
PPC_FUNC_IMPL(__imp__sub_83123828) {
	PPC_FUNC_PROLOGUE();
	// stb r4,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123830"))) PPC_WEAK_FUNC(sub_83123830);
PPC_FUNC_IMPL(__imp__sub_83123830) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123838"))) PPC_WEAK_FUNC(sub_83123838);
PPC_FUNC_IMPL(__imp__sub_83123838) {
	PPC_FUNC_PROLOGUE();
	// stb r4,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123840"))) PPC_WEAK_FUNC(sub_83123840);
PPC_FUNC_IMPL(__imp__sub_83123840) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,37(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123848"))) PPC_WEAK_FUNC(sub_83123848);
PPC_FUNC_IMPL(__imp__sub_83123848) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,38(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123850"))) PPC_WEAK_FUNC(sub_83123850);
PPC_FUNC_IMPL(__imp__sub_83123850) {
	PPC_FUNC_PROLOGUE();
	// stb r4,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123858"))) PPC_WEAK_FUNC(sub_83123858);
PPC_FUNC_IMPL(__imp__sub_83123858) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,39(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 39);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123860"))) PPC_WEAK_FUNC(sub_83123860);
PPC_FUNC_IMPL(__imp__sub_83123860) {
	PPC_FUNC_PROLOGUE();
	// stb r4,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123868"))) PPC_WEAK_FUNC(sub_83123868);
PPC_FUNC_IMPL(__imp__sub_83123868) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123870"))) PPC_WEAK_FUNC(sub_83123870);
PPC_FUNC_IMPL(__imp__sub_83123870) {
	PPC_FUNC_PROLOGUE();
	// stb r4,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123878"))) PPC_WEAK_FUNC(sub_83123878);
PPC_FUNC_IMPL(__imp__sub_83123878) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,41(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123880"))) PPC_WEAK_FUNC(sub_83123880);
PPC_FUNC_IMPL(__imp__sub_83123880) {
	PPC_FUNC_PROLOGUE();
	// stb r4,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123888"))) PPC_WEAK_FUNC(sub_83123888);
PPC_FUNC_IMPL(__imp__sub_83123888) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,42(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123890"))) PPC_WEAK_FUNC(sub_83123890);
PPC_FUNC_IMPL(__imp__sub_83123890) {
	PPC_FUNC_PROLOGUE();
	// stb r4,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123898"))) PPC_WEAK_FUNC(sub_83123898);
PPC_FUNC_IMPL(__imp__sub_83123898) {
	PPC_FUNC_PROLOGUE();
	// sth r4,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831238A0"))) PPC_WEAK_FUNC(sub_831238A0);
PPC_FUNC_IMPL(__imp__sub_831238A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831238A8"))) PPC_WEAK_FUNC(sub_831238A8);
PPC_FUNC_IMPL(__imp__sub_831238A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831238B0"))) PPC_WEAK_FUNC(sub_831238B0);
PPC_FUNC_IMPL(__imp__sub_831238B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831238B8"))) PPC_WEAK_FUNC(sub_831238B8);
PPC_FUNC_IMPL(__imp__sub_831238B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831238C8"))) PPC_WEAK_FUNC(sub_831238C8);
PPC_FUNC_IMPL(__imp__sub_831238C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831238D8"))) PPC_WEAK_FUNC(sub_831238D8);
PPC_FUNC_IMPL(__imp__sub_831238D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// blt cr6,0x831238e8
	if (cr6.lt) goto loc_831238E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831238E8:
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831238FC"))) PPC_WEAK_FUNC(sub_831238FC);
PPC_FUNC_IMPL(__imp__sub_831238FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123900"))) PPC_WEAK_FUNC(sub_83123900);
PPC_FUNC_IMPL(__imp__sub_83123900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r5,20
	ctx.r11.s64 = ctx.r5.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123918"))) PPC_WEAK_FUNC(sub_83123918);
PPC_FUNC_IMPL(__imp__sub_83123918) {
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
	// addi r4,r4,100
	ctx.r4.s64 = ctx.r4.s64 + 100;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x83123938;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_83123950"))) PPC_WEAK_FUNC(sub_83123950);
PPC_FUNC_IMPL(__imp__sub_83123950) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82f09ce8
	sub_82F09CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83123958"))) PPC_WEAK_FUNC(sub_83123958);
PPC_FUNC_IMPL(__imp__sub_83123958) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,231(r3)
	PPC_STORE_U8(ctx.r3.u32 + 231, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123964"))) PPC_WEAK_FUNC(sub_83123964);
PPC_FUNC_IMPL(__imp__sub_83123964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123968"))) PPC_WEAK_FUNC(sub_83123968);
PPC_FUNC_IMPL(__imp__sub_83123968) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,232(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123974"))) PPC_WEAK_FUNC(sub_83123974);
PPC_FUNC_IMPL(__imp__sub_83123974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123978"))) PPC_WEAK_FUNC(sub_83123978);
PPC_FUNC_IMPL(__imp__sub_83123978) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 232, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123984"))) PPC_WEAK_FUNC(sub_83123984);
PPC_FUNC_IMPL(__imp__sub_83123984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123988"))) PPC_WEAK_FUNC(sub_83123988);
PPC_FUNC_IMPL(__imp__sub_83123988) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,234(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 234);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123994"))) PPC_WEAK_FUNC(sub_83123994);
PPC_FUNC_IMPL(__imp__sub_83123994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123998"))) PPC_WEAK_FUNC(sub_83123998);
PPC_FUNC_IMPL(__imp__sub_83123998) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 234, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831239A4"))) PPC_WEAK_FUNC(sub_831239A4);
PPC_FUNC_IMPL(__imp__sub_831239A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831239A8"))) PPC_WEAK_FUNC(sub_831239A8);
PPC_FUNC_IMPL(__imp__sub_831239A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x831239b8
	if (cr6.lt) goto loc_831239B8;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831239B8:
	// addi r11,r4,59
	ctx.r11.s64 = ctx.r4.s64 + 59;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831239C8"))) PPC_WEAK_FUNC(sub_831239C8);
PPC_FUNC_IMPL(__imp__sub_831239C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,59
	ctx.r11.s64 = ctx.r4.s64 + 59;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831239E0"))) PPC_WEAK_FUNC(sub_831239E0);
PPC_FUNC_IMPL(__imp__sub_831239E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x831239f4
	if (cr6.lt) goto loc_831239F4;
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_831239F4:
	// mulli r11,r5,1312
	ctx.r11.s64 = ctx.r5.s64 * 1312;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123A08"))) PPC_WEAK_FUNC(sub_83123A08);
PPC_FUNC_IMPL(__imp__sub_83123A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83123a1c
	if (cr6.lt) goto loc_83123A1C;
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// blr 
	return;
loc_83123A1C:
	// mulli r11,r11,1312
	ctx.r11.s64 = ctx.r11.s64 * 1312;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123A2C"))) PPC_WEAK_FUNC(sub_83123A2C);
PPC_FUNC_IMPL(__imp__sub_83123A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123A30"))) PPC_WEAK_FUNC(sub_83123A30);
PPC_FUNC_IMPL(__imp__sub_83123A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// rlwinm r9,r8,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// lwz r11,244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x83123a64
	if (!cr6.eq) goto loc_83123A64;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83123a68
	if (cr6.eq) goto loc_83123A68;
loc_83123A64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83123A68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r10,r10,1556
	ctx.r10.s64 = ctx.r10.s64 + 1556;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x83123a9c
	if (!cr6.eq) goto loc_83123A9C;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83123aa0
	if (cr6.eq) goto loc_83123AA0;
loc_83123A9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83123AA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123AB4"))) PPC_WEAK_FUNC(sub_83123AB4);
PPC_FUNC_IMPL(__imp__sub_83123AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123AB8"))) PPC_WEAK_FUNC(sub_83123AB8);
PPC_FUNC_IMPL(__imp__sub_83123AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r11,1312
	ctx.r11.s64 = ctx.r11.s64 * 1312;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// b 0x82ace470
	sub_82ACE470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83123AD4"))) PPC_WEAK_FUNC(sub_83123AD4);
PPC_FUNC_IMPL(__imp__sub_83123AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123AD8"))) PPC_WEAK_FUNC(sub_83123AD8);
PPC_FUNC_IMPL(__imp__sub_83123AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83123aec
	if (cr6.lt) goto loc_83123AEC;
	// addi r3,r3,2868
	ctx.r3.s64 = ctx.r3.s64 + 2868;
	// blr 
	return;
loc_83123AEC:
	// mulli r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 * 632;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2868
	ctx.r3.s64 = ctx.r11.s64 + 2868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123AFC"))) PPC_WEAK_FUNC(sub_83123AFC);
PPC_FUNC_IMPL(__imp__sub_83123AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123B00"))) PPC_WEAK_FUNC(sub_83123B00);
PPC_FUNC_IMPL(__imp__sub_83123B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// ld r10,2912(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 2912);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x83123b2c
	if (!cr6.eq) goto loc_83123B2C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x83123b30
	if (cr6.eq) goto loc_83123B30;
loc_83123B2C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83123B30:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83123b7c
	if (!cr6.eq) goto loc_83123B7C;
	// ld r10,3544(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 3544);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x83123b64
	if (!cr6.eq) goto loc_83123B64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83123b68
	if (cr6.eq) goto loc_83123B68;
loc_83123B64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83123B68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83123b7c
	if (cr6.eq) goto loc_83123B7C;
	// addi r3,r3,3500
	ctx.r3.s64 = ctx.r3.s64 + 3500;
	// blr 
	return;
loc_83123B7C:
	// addi r3,r3,2868
	ctx.r3.s64 = ctx.r3.s64 + 2868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123B84"))) PPC_WEAK_FUNC(sub_83123B84);
PPC_FUNC_IMPL(__imp__sub_83123B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123B88"))) PPC_WEAK_FUNC(sub_83123B88);
PPC_FUNC_IMPL(__imp__sub_83123B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 * 632;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2868
	ctx.r3.s64 = ctx.r11.s64 + 2868;
	// b 0x82d8a4d8
	sub_82D8A4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83123BA4"))) PPC_WEAK_FUNC(sub_83123BA4);
PPC_FUNC_IMPL(__imp__sub_83123BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123BA8"))) PPC_WEAK_FUNC(sub_83123BA8);
PPC_FUNC_IMPL(__imp__sub_83123BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83123bbc
	if (cr6.lt) goto loc_83123BBC;
loc_83123BB4:
	// addi r3,r3,4132
	ctx.r3.s64 = ctx.r3.s64 + 4132;
	// blr 
	return;
loc_83123BBC:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x83123bb4
	if (!cr6.lt) goto loc_83123BB4;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4132
	ctx.r3.s64 = ctx.r11.s64 + 4132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123BE0"))) PPC_WEAK_FUNC(sub_83123BE0);
PPC_FUNC_IMPL(__imp__sub_83123BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
loc_83123BEC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83123BF0:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mulli r6,r11,232
	ctx.r6.s64 = ctx.r11.s64 * 232;
	// ldx r5,r6,r3
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r3.u32);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// bne cr6,0x83123c18
	if (!cr6.eq) goto loc_83123C18;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83123c40
	goto loc_83123C40;
loc_83123C18:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83123c38
	if (!cr6.eq) goto loc_83123C38;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83123c3c
	if (cr6.eq) goto loc_83123C3C;
loc_83123C38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83123C3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83123C40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83123c70
	if (!cr6.eq) goto loc_83123C70;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x83123bf0
	if (cr6.lt) goto loc_83123BF0;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,82
	cr6.compare<uint32_t>(ctx.r9.u32, 82, xer);
	// blt cr6,0x83123bec
	if (cr6.lt) goto loc_83123BEC;
	// addi r3,r3,4132
	ctx.r3.s64 = ctx.r3.s64 + 4132;
	// blr 
	return;
loc_83123C70:
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4132
	ctx.r3.s64 = ctx.r11.s64 + 4132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123C88"))) PPC_WEAK_FUNC(sub_83123C88);
PPC_FUNC_IMPL(__imp__sub_83123C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x83123cc4
	if (!cr6.lt) goto loc_83123CC4;
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,18
	ctx.r10.s64 = ctx.r9.s64 + 18;
loc_83123C9C:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r7,r8,232
	ctx.r7.s64 = ctx.r8.s64 * 232;
	// ldx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r3.u32);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lwz r4,-12(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x83123ccc
	if (cr6.eq) goto loc_83123CCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x83123c9c
	if (cr6.lt) goto loc_83123C9C;
loc_83123CC4:
	// addi r3,r3,4132
	ctx.r3.s64 = ctx.r3.s64 + 4132;
	// blr 
	return;
loc_83123CCC:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4132
	ctx.r3.s64 = ctx.r11.s64 + 4132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123CE0"))) PPC_WEAK_FUNC(sub_83123CE0);
PPC_FUNC_IMPL(__imp__sub_83123CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4132
	ctx.r3.s64 = ctx.r11.s64 + 4132;
	// b 0x82b1e0e8
	sub_82B1E0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83123D10"))) PPC_WEAK_FUNC(sub_83123D10);
PPC_FUNC_IMPL(__imp__sub_83123D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123D14"))) PPC_WEAK_FUNC(sub_83123D14);
PPC_FUNC_IMPL(__imp__sub_83123D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123D18"))) PPC_WEAK_FUNC(sub_83123D18);
PPC_FUNC_IMPL(__imp__sub_83123D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,18
	ctx.r10.s64 = 18;
loc_83123D20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83123D24:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r7,r8,232
	ctx.r7.s64 = ctx.r8.s64 * 232;
	// ldx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r3.u32);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// beq cr6,0x83123d60
	if (cr6.eq) goto loc_83123D60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x83123d24
	if (cr6.lt) goto loc_83123D24;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r10,82
	cr6.compare<uint32_t>(ctx.r10.u32, 82, xer);
	// blt cr6,0x83123d20
	if (cr6.lt) goto loc_83123D20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83123D60:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123D68"))) PPC_WEAK_FUNC(sub_83123D68);
PPC_FUNC_IMPL(__imp__sub_83123D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x83123d78
	if (cr6.lt) goto loc_83123D78;
loc_83123D70:
	// lbz r3,4356(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4356);
	// blr 
	return;
loc_83123D78:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x83123d70
	if (!cr6.lt) goto loc_83123D70;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,4356(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4356);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123D98"))) PPC_WEAK_FUNC(sub_83123D98);
PPC_FUNC_IMPL(__imp__sub_83123D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
loc_83123DA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83123DA8:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mulli r6,r11,232
	ctx.r6.s64 = ctx.r11.s64 * 232;
	// ldx r5,r6,r3
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r3.u32);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// bne cr6,0x83123dd0
	if (!cr6.eq) goto loc_83123DD0;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83123df8
	goto loc_83123DF8;
loc_83123DD0:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83123df0
	if (!cr6.eq) goto loc_83123DF0;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83123df4
	if (cr6.eq) goto loc_83123DF4;
loc_83123DF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83123DF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83123DF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83123e28
	if (!cr6.eq) goto loc_83123E28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x83123da8
	if (cr6.lt) goto loc_83123DA8;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,82
	cr6.compare<uint32_t>(ctx.r9.u32, 82, xer);
	// blt cr6,0x83123da4
	if (cr6.lt) goto loc_83123DA4;
	// lbz r3,4356(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4356);
	// blr 
	return;
loc_83123E28:
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,4356(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4356);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123E40"))) PPC_WEAK_FUNC(sub_83123E40);
PPC_FUNC_IMPL(__imp__sub_83123E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,4356(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4356, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123E68"))) PPC_WEAK_FUNC(sub_83123E68);
PPC_FUNC_IMPL(__imp__sub_83123E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x83123e78
	if (cr6.lt) goto loc_83123E78;
loc_83123E70:
	// lbz r3,4357(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4357);
	// blr 
	return;
loc_83123E78:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x83123e70
	if (!cr6.lt) goto loc_83123E70;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,4357(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4357);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123E98"))) PPC_WEAK_FUNC(sub_83123E98);
PPC_FUNC_IMPL(__imp__sub_83123E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,4357(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4357, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123EC0"))) PPC_WEAK_FUNC(sub_83123EC0);
PPC_FUNC_IMPL(__imp__sub_83123EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x83123ed0
	if (cr6.lt) goto loc_83123ED0;
loc_83123EC8:
	// lwz r3,4360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// blr 
	return;
loc_83123ED0:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x83123ec8
	if (!cr6.lt) goto loc_83123EC8;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4360(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4360);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123EF0"))) PPC_WEAK_FUNC(sub_83123EF0);
PPC_FUNC_IMPL(__imp__sub_83123EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r9,232
	ctx.r11.s64 = ctx.r9.s64 * 232;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,4360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4360, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123F1C"))) PPC_WEAK_FUNC(sub_83123F1C);
PPC_FUNC_IMPL(__imp__sub_83123F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83123F20"))) PPC_WEAK_FUNC(sub_83123F20);
PPC_FUNC_IMPL(__imp__sub_83123F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x83123f30
	if (cr6.lt) goto loc_83123F30;
loc_83123F28:
	// lbz r3,4358(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4358);
	// blr 
	return;
loc_83123F30:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x83123f28
	if (!cr6.lt) goto loc_83123F28;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,4358(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4358);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123F50"))) PPC_WEAK_FUNC(sub_83123F50);
PPC_FUNC_IMPL(__imp__sub_83123F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 * 232;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,4358(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4358, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83123F78"))) PPC_WEAK_FUNC(sub_83123F78);
PPC_FUNC_IMPL(__imp__sub_83123F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mulli r11,r8,14
	ctx.r11.s64 = ctx.r8.s64 * 14;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,18980
	ctx.r10.s64 = ctx.r11.s64 + 18980;
	// stb r9,18980(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18980, ctx.r9.u8);
	// lbz r7,1(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// stb r7,18981(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18981, ctx.r7.u8);
	// lbz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// stb r5,18982(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18982, ctx.r5.u8);
	// lbz r4,3(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// stb r4,18983(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18983, ctx.r4.u8);
	// lbz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// stb r3,18984(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18984, ctx.r3.u8);
	// lbz r10,5(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// stb r10,18985(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18985, ctx.r10.u8);
	// lbz r9,6(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// stb r9,18986(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18986, ctx.r9.u8);
	// lbz r8,7(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7);
	// stb r8,18987(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18987, ctx.r8.u8);
	// lbz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 8);
	// stb r7,18988(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18988, ctx.r7.u8);
	// lbz r5,9(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 9);
	// stb r5,18989(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18989, ctx.r5.u8);
	// lbz r4,10(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 10);
	// stb r4,18990(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18990, ctx.r4.u8);
	// lbz r3,11(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 11);
	// stb r3,18991(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18991, ctx.r3.u8);
	// lbz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// stb r10,18992(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18992, ctx.r10.u8);
	// lbz r9,13(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 13);
	// stb r9,18993(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18993, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124014"))) PPC_WEAK_FUNC(sub_83124014);
PPC_FUNC_IMPL(__imp__sub_83124014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124018"))) PPC_WEAK_FUNC(sub_83124018);
PPC_FUNC_IMPL(__imp__sub_83124018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8312402c
	if (cr6.lt) goto loc_8312402C;
loc_83124024:
	// lwz r3,19876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19876);
	// blr 
	return;
loc_8312402C:
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x83124024
	if (!cr6.lt) goto loc_83124024;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,4969
	ctx.r11.s64 = ctx.r11.s64 + 4969;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124050"))) PPC_WEAK_FUNC(sub_83124050);
PPC_FUNC_IMPL(__imp__sub_83124050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r8,r11,4969
	ctx.r8.s64 = ctx.r11.s64 + 4969;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124084"))) PPC_WEAK_FUNC(sub_83124084);
PPC_FUNC_IMPL(__imp__sub_83124084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124088"))) PPC_WEAK_FUNC(sub_83124088);
PPC_FUNC_IMPL(__imp__sub_83124088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8312409c
	if (cr6.lt) goto loc_8312409C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312409C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,19900(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19900);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831240A8"))) PPC_WEAK_FUNC(sub_831240A8);
PPC_FUNC_IMPL(__imp__sub_831240A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,19900(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19900, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831240C4"))) PPC_WEAK_FUNC(sub_831240C4);
PPC_FUNC_IMPL(__imp__sub_831240C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831240C8"))) PPC_WEAK_FUNC(sub_831240C8);
PPC_FUNC_IMPL(__imp__sub_831240C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x831240dc
	if (cr6.lt) goto loc_831240DC;
loc_831240D4:
	// lbz r3,19902(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19902);
	// blr 
	return;
loc_831240DC:
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bge cr6,0x831240d4
	if (!cr6.lt) goto loc_831240D4;
	// addi r11,r11,6634
	ctx.r11.s64 = ctx.r11.s64 + 6634;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831240FC"))) PPC_WEAK_FUNC(sub_831240FC);
PPC_FUNC_IMPL(__imp__sub_831240FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124100"))) PPC_WEAK_FUNC(sub_83124100);
PPC_FUNC_IMPL(__imp__sub_83124100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,6634
	ctx.r11.s64 = ctx.r11.s64 + 6634;
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r9,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124130"))) PPC_WEAK_FUNC(sub_83124130);
PPC_FUNC_IMPL(__imp__sub_83124130) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,19908
	ctx.r3.s64 = ctx.r3.s64 + 19908;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124138"))) PPC_WEAK_FUNC(sub_83124138);
PPC_FUNC_IMPL(__imp__sub_83124138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,19908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19908, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,19912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19912, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312414C"))) PPC_WEAK_FUNC(sub_8312414C);
PPC_FUNC_IMPL(__imp__sub_8312414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124150"))) PPC_WEAK_FUNC(sub_83124150);
PPC_FUNC_IMPL(__imp__sub_83124150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83124164
	if (cr6.lt) goto loc_83124164;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83124164:
	// mulli r11,r11,1312
	ctx.r11.s64 = ctx.r11.s64 * 1312;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// rlwinm r3,r10,15,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124178"))) PPC_WEAK_FUNC(sub_83124178);
PPC_FUNC_IMPL(__imp__sub_83124178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,244(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x831241a4
	if (!cr6.eq) goto loc_831241A4;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831241a8
	if (cr6.eq) goto loc_831241A8;
loc_831241A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831241A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831241bc
	if (cr6.eq) goto loc_831241BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831241BC:
	// lwz r11,1556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x831241e0
	if (!cr6.eq) goto loc_831241E0;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831241e4
	if (cr6.eq) goto loc_831241E4;
loc_831241E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831241E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831241F8"))) PPC_WEAK_FUNC(sub_831241F8);
PPC_FUNC_IMPL(__imp__sub_831241F8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,19916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19916, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124200"))) PPC_WEAK_FUNC(sub_83124200);
PPC_FUNC_IMPL(__imp__sub_83124200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// blt cr6,0x83124210
	if (cr6.lt) goto loc_83124210;
loc_83124208:
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
loc_83124210:
	// lwz r11,19916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19916);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x83124208
	if (!cr6.lt) goto loc_83124208;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r8,r9,-1740
	ctx.r8.s64 = ctx.r9.s64 + -1740;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312423C"))) PPC_WEAK_FUNC(sub_8312423C);
PPC_FUNC_IMPL(__imp__sub_8312423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124240"))) PPC_WEAK_FUNC(sub_83124240);
PPC_FUNC_IMPL(__imp__sub_83124240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,19920(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124248"))) PPC_WEAK_FUNC(sub_83124248);
PPC_FUNC_IMPL(__imp__sub_83124248) {
	PPC_FUNC_PROLOGUE();
	// stw r4,19920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19920, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124250"))) PPC_WEAK_FUNC(sub_83124250);
PPC_FUNC_IMPL(__imp__sub_83124250) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,19924(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19924);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124258"))) PPC_WEAK_FUNC(sub_83124258);
PPC_FUNC_IMPL(__imp__sub_83124258) {
	PPC_FUNC_PROLOGUE();
	// stw r4,19924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19924, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124260"))) PPC_WEAK_FUNC(sub_83124260);
PPC_FUNC_IMPL(__imp__sub_83124260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,20160(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20160);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124270"))) PPC_WEAK_FUNC(sub_83124270);
PPC_FUNC_IMPL(__imp__sub_83124270) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,19928
	ctx.r4.s64 = ctx.r11.s64 + 19928;
	// b 0x82c4fff0
	sub_82C4FFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312428C"))) PPC_WEAK_FUNC(sub_8312428C);
PPC_FUNC_IMPL(__imp__sub_8312428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124290"))) PPC_WEAK_FUNC(sub_83124290);
PPC_FUNC_IMPL(__imp__sub_83124290) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// bl 0x82c4fff0
	ctx.lr = 0x831242C4;
	sub_82C4FFF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,20160(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20160, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_831242EC"))) PPC_WEAK_FUNC(sub_831242EC);
PPC_FUNC_IMPL(__imp__sub_831242EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831242F0"))) PPC_WEAK_FUNC(sub_831242F0);
PPC_FUNC_IMPL(__imp__sub_831242F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r5,5042
	ctx.r11.s64 = ctx.r5.s64 + 5042;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124308"))) PPC_WEAK_FUNC(sub_83124308);
PPC_FUNC_IMPL(__imp__sub_83124308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20296(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20296, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124310"))) PPC_WEAK_FUNC(sub_83124310);
PPC_FUNC_IMPL(__imp__sub_83124310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83124318;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,4357
	ctx.r31.s64 = ctx.r3.s64 + 4357;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r25,21
	ctx.r25.s64 = 21;
	// li r28,99
	ctx.r28.s64 = 99;
loc_83124338:
	// li r27,32
	ctx.r27.s64 = 32;
loc_8312433C:
	// addi r3,r31,-225
	ctx.r3.s64 = ctx.r31.s64 + -225;
	// bl 0x82b00b98
	ctx.lr = 0x83124344;
	sub_82B00B98(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r24,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r24.u8);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// stb r26,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r26.u8);
	// stw r25,3(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3, ctx.r25.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83124360:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bge cr6,0x83124388
	if (!cr6.lt) goto loc_83124388;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r10,9490
	ctx.r8.s64 = ctx.r10.s64 + 9490;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stbx r28,r7,r29
	PPC_STORE_U8(ctx.r7.u32 + ctx.r29.u32, ctx.r28.u8);
	// stb r28,18981(r6)
	PPC_STORE_U8(ctx.r6.u32 + 18981, ctx.r28.u8);
loc_83124388:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83124360
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83124360;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r31,r31,232
	ctx.r31.s64 = ctx.r31.s64 + 232;
	// addi r30,r30,7
	ctx.r30.s64 = ctx.r30.s64 + 7;
	// bne 0x8312433c
	if (!cr0.eq) goto loc_8312433C;
	// cmpwi cr6,r30,448
	cr6.compare<int32_t>(ctx.r30.s32, 448, xer);
	// blt cr6,0x83124338
	if (cr6.lt) goto loc_83124338;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831243B0"))) PPC_WEAK_FUNC(sub_831243B0);
PPC_FUNC_IMPL(__imp__sub_831243B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831243B8;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83124420
	if (cr6.lt) goto loc_83124420;
loc_831243C4:
	// lbz r11,18980(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18980);
	// lbz r10,18981(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18981);
	// lbz r9,18982(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18982);
	// lbz r8,18983(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18983);
	// lbz r7,18984(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18984);
	// lbz r6,18985(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18985);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r5,18986(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18986);
	// lbz r31,18987(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18987);
	// lbz r30,18988(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18988);
	// lbz r29,18989(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18989);
	// lbz r28,18990(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18990);
	// lbz r27,18991(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18991);
	// lbz r26,18992(r4)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18992);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r4,18993(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18993);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
	// stb r6,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r6.u8);
	// stb r5,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r5.u8);
	// stb r4,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r4.u8);
	// b 0x83124494
	goto loc_83124494;
loc_83124420:
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// bge cr6,0x831243c4
	if (!cr6.lt) goto loc_831243C4;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 * 14;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,18980
	ctx.r10.s64 = ctx.r11.s64 + 18980;
	// lbz r10,18980(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18980);
	// lbz r9,18981(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18981);
	// lbz r8,18982(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18982);
	// lbz r7,18983(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18983);
	// lbz r6,18984(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18984);
	// lbz r5,18985(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18985);
	// lbz r4,18986(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18986);
	// lbz r31,18987(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18987);
	// lbz r30,18988(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18988);
	// lbz r29,18989(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18989);
	// lbz r28,18990(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18990);
	// lbz r27,18991(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18991);
	// lbz r26,18992(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18992);
	// lbz r11,18993(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18993);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r8,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// stb r7,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r7.u8);
	// stb r6,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// stb r5,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r5.u8);
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
loc_83124494:
	// stb r26,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r26.u8);
	// stb r27,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r27.u8);
	// stb r28,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r28.u8);
	// stb r29,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r29.u8);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// stb r31,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r31.u8);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831244B0"))) PPC_WEAK_FUNC(sub_831244B0);
PPC_FUNC_IMPL(__imp__sub_831244B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831244B8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,20168
	ctx.r31.s64 = ctx.r3.s64 + 20168;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x831244E8;
	sub_831CDCF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
loc_831244F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// bge cr6,0x83124534
	if (!cr6.lt) goto loc_83124534;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83124524
	if (cr6.eq) goto loc_83124524;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83124524:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x831244f8
	if (cr6.lt) goto loc_831244F8;
loc_83124534:
	// stfs f31,20296(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20296, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124544"))) PPC_WEAK_FUNC(sub_83124544);
PPC_FUNC_IMPL(__imp__sub_83124544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124548"))) PPC_WEAK_FUNC(sub_83124548);
PPC_FUNC_IMPL(__imp__sub_83124548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83124550;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,20316
	ctx.r5.s64 = 20316;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83124564;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r20,2
	ctx.r20.s64 = 2;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r9,55
	ctx.r9.s64 = 55;
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r21,3
	ctx.r21.s64 = 3;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r31,13
	ctx.r9.s64 = ctx.r31.s64 + 13;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
loc_831245A0:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x831245a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831245A0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r8,23
	ctx.r8.s64 = 23;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// li r7,255
	ctx.r7.s64 = 255;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// li r6,-2
	ctx.r6.s64 = -2;
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// li r23,-1
	ctx.r23.s64 = -1;
	// stb r29,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r29.u8);
	// stb r29,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r29.u8);
	// li r5,29
	ctx.r5.s64 = 29;
	// stb r29,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r29.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stb r30,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r30.u8);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stb r30,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r30.u8);
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// stb r30,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r30.u8);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stb r21,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r21.u8);
	// addi r28,r31,234
	ctx.r28.s64 = ctx.r31.s64 + 234;
	// stb r8,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r8.u8);
	// li r24,4969
	ctx.r24.s64 = 4969;
	// stb r7,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r7.u8);
	// sth r6,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r6.u16);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r20,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r20.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r23,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r23.u32);
	// stw r23,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r23.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r21,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r21.u32);
	// stw r20,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r20.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r20,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r20.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stb r30,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r30.u8);
	// stb r29,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r29.u8);
	// addi r25,r31,2868
	ctx.r25.s64 = ctx.r31.s64 + 2868;
	// stb r29,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r29.u8);
	// addi r26,r31,244
	ctx.r26.s64 = ctx.r31.s64 + 244;
	// stb r30,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r30.u8);
	// addi r27,r31,236
	ctx.r27.s64 = ctx.r31.s64 + 236;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
loc_83124700:
	// stb r30,-2(r28)
	PPC_STORE_U8(ctx.r28.u32 + -2, ctx.r30.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// stw r20,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r20.u32);
	// bl 0x82e59148
	ctx.lr = 0x83124714;
	sub_82E59148(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d8cb50
	ctx.lr = 0x8312471C;
	sub_82D8CB50(ctx, base);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,19666(r28)
	PPC_STORE_U8(ctx.r28.u32 + 19666, ctx.r30.u8);
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
loc_8312472C:
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r23.u32);
	// bdnz 0x8312472c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312472C;
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,1312
	ctx.r26.s64 = ctx.r26.s64 + 1312;
	// addi r25,r25,632
	ctx.r25.s64 = ctx.r25.s64 + 632;
	// addi r24,r24,3
	ctx.r24.s64 = ctx.r24.s64 + 3;
	// bne 0x83124700
	if (!cr0.eq) goto loc_83124700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83124310
	ctx.lr = 0x83124764;
	sub_83124310(ctx, base);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r31,19928
	ctx.r11.s64 = ctx.r31.s64 + 19928;
	// li r6,33
	ctx.r6.s64 = 33;
	// li r5,34
	ctx.r5.s64 = 34;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lfs f0,-24912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// ld r9,-8748(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + -8748);
	// stw r29,19916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19916, ctx.r29.u32);
	// stw r30,19920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19920, ctx.r30.u32);
	// stw r30,19924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19924, ctx.r30.u32);
	// std r9,19908(r31)
	PPC_STORE_U64(ctx.r31.u32 + 19908, ctx.r9.u64);
	// stfs f0,19928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 19928, temp.u32);
	// stfs f0,19932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 19932, temp.u32);
	// stb r30,19940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19940, ctx.r30.u8);
	// stfs f0,19936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 19936, temp.u32);
	// stb r30,19941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19941, ctx.r30.u8);
	// stb r30,19942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19942, ctx.r30.u8);
	// stb r30,19943(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19943, ctx.r30.u8);
	// stb r30,19944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19944, ctx.r30.u8);
	// stb r30,19945(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19945, ctx.r30.u8);
	// stb r30,19946(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19946, ctx.r30.u8);
	// stb r6,19947(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19947, ctx.r6.u8);
	// stb r5,19948(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19948, ctx.r5.u8);
	// stb r6,19949(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19949, ctx.r6.u8);
	// stb r30,19950(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19950, ctx.r30.u8);
loc_831247DC:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831247dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831247DC;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r23,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r23.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// addi r7,r11,92
	ctx.r7.s64 = ctx.r11.s64 + 92;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// addi r8,r11,72
	ctx.r8.s64 = ctx.r11.s64 + 72;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r30,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// stw r30,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r30.u32);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
loc_83124820:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83124820
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83124820;
	// addi r11,r31,20044
	ctx.r11.s64 = ctx.r31.s64 + 20044;
	// stfs f0,20044(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20044, temp.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stfs f0,20048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20048, temp.u32);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// stfs f0,20052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20052, temp.u32);
	// stb r30,20056(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20056, ctx.r30.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stb r30,20057(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20057, ctx.r30.u8);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stb r30,20058(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20058, ctx.r30.u8);
	// stb r30,20059(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20059, ctx.r30.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r30,20060(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20060, ctx.r30.u8);
	// stb r30,20061(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20061, ctx.r30.u8);
	// stb r30,20062(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20062, ctx.r30.u8);
	// stb r6,20063(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20063, ctx.r6.u8);
	// stb r5,20064(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20064, ctx.r5.u8);
	// stb r6,20065(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20065, ctx.r6.u8);
	// stb r30,20066(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20066, ctx.r30.u8);
loc_83124878:
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83124878
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83124878;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r23,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r23.u32);
	// addi r8,r11,92
	ctx.r8.s64 = ctx.r11.s64 + 92;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r30,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// stw r30,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r30,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r30.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_831248B4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831248b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831248B4;
	// addi r10,r31,20168
	ctx.r10.s64 = ctx.r31.s64 + 20168;
	// stb r30,20160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20160, ctx.r30.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stb r30,20161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20161, ctx.r30.u8);
	// stb r30,20162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20162, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stb r29,20163(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20163, ctx.r29.u8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r20,20164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20164, ctx.r20.u8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_831248E4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831248e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831248E4;
	// stw r30,20300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20300, ctx.r30.u32);
	// stw r30,20304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20304, ctx.r30.u32);
	// stw r30,20308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20308, ctx.r30.u32);
	// stw r30,20312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20312, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124904"))) PPC_WEAK_FUNC(sub_83124904);
PPC_FUNC_IMPL(__imp__sub_83124904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124908"))) PPC_WEAK_FUNC(sub_83124908);
PPC_FUNC_IMPL(__imp__sub_83124908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83124910;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// stw r28,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r28.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_83124928:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ae4800
	ctx.lr = 0x83124930;
	sub_82AE4800(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// bge 0x83124928
	if (!cr0.lt) goto loc_83124928;
	// addi r11,r27,2868
	ctx.r11.s64 = ctx.r27.s64 + 2868;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,44
	ctx.r31.s64 = ctx.r11.s64 + 44;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_83124950:
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,2800
	ctx.r6.s64 = ctx.r11.s64 + 2800;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823fca98
	ctx.lr = 0x83124970;
	sub_823FCA98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,632
	ctx.r31.s64 = ctx.r31.s64 + 632;
	// bge 0x83124950
	if (!cr0.lt) goto loc_83124950;
	// addi r30,r27,4132
	ctx.r30.s64 = ctx.r27.s64 + 4132;
	// li r31,63
	ctx.r31.s64 = 63;
loc_83124984:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b00d00
	ctx.lr = 0x8312498C;
	sub_82B00D00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,232
	ctx.r30.s64 = ctx.r30.s64 + 232;
	// bge 0x83124984
	if (!cr0.lt) goto loc_83124984;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r27,18979
	ctx.r11.s64 = ctx.r27.s64 + 18979;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831249A8:
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stb r10,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// stbu r10,14(r11)
	ea = 14 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831249a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831249A8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// sth r29,19908(r27)
	PPC_STORE_U16(ctx.r27.u32 + 19908, ctx.r29.u16);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// stw r10,19912(r27)
	PPC_STORE_U32(ctx.r27.u32 + 19912, ctx.r10.u32);
	// addi r11,r27,19928
	ctx.r11.s64 = ctx.r27.s64 + 19928;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r6,33
	ctx.r6.s64 = 33;
	// lfs f0,-24912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// li r5,34
	ctx.r5.s64 = 34;
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
loc_83124A0C:
	// li r8,10
	ctx.r8.s64 = 10;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// stb r10,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// stb r10,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// stb r6,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r6.u8);
	// stb r5,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r5.u8);
	// stb r6,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r6.u8);
loc_83124A50:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83124a50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83124A50;
	// stw r28,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r28.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_83124A80:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83124a80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83124A80;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// bge 0x83124a0c
	if (!cr0.lt) goto loc_83124A0C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83124548
	ctx.lr = 0x83124A9C;
	sub_83124548(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124AA8"))) PPC_WEAK_FUNC(sub_83124AA8);
PPC_FUNC_IMPL(__imp__sub_83124AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bgt cr6,0x83124b74
	if (cr6.gt) goto loc_83124B74;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83124b14
	if (cr6.eq) goto loc_83124B14;
	// bdz 0x83124b74
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124B74;
	// bdz 0x83124b24
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124B24;
	// bdz 0x83124b4c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124B4C;
	// bdz 0x83124b60
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124B60;
	// bdz 0x83124aec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124AEC;
	// bdz 0x83124b00
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124B00;
	// bdz 0x83124b38
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124B38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83124AEC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,29,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83124B00:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83124B14:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83124B24:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83124B38:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83124B4C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83124B60:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83124B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124B7C"))) PPC_WEAK_FUNC(sub_83124B7C);
PPC_FUNC_IMPL(__imp__sub_83124B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124B80"))) PPC_WEAK_FUNC(sub_83124B80);
PPC_FUNC_IMPL(__imp__sub_83124B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bgt cr6,0x83124c48
	if (cr6.gt) goto loc_83124C48;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83124bec
	if (cr6.eq) goto loc_83124BEC;
	// bdz 0x83124c48
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124C48;
	// bdz 0x83124bf8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124BF8;
	// bdz 0x83124c20
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124C20;
	// bdz 0x83124c34
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124C34;
	// bdz 0x83124bc4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124BC4;
	// bdz 0x83124bd8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124BD8;
	// bdz 0x83124c0c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83124C0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r5,12,0,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 12) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83124BC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r5,3,20,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0xFF8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF007);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83124BD8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r5,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83124BEC:
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83124BF8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,2,16,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0xFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0003);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83124C0C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83124C20:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r5,18,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83124C34:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r5,12,14,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 12) & 0x3F000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83124C48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124C50"))) PPC_WEAK_FUNC(sub_83124C50);
PPC_FUNC_IMPL(__imp__sub_83124C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83124C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x83124c74
	if (cr6.eq) goto loc_83124C74;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83124C74:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83124C78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83124c78
	if (!cr6.eq) goto loc_83124C78;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,121
	ctx.r5.s64 = 121;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x831cdcf0
	ctx.lr = 0x83124CAC;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,121
	cr6.compare<uint32_t>(ctx.r31.u32, 121, xer);
	// ble cr6,0x83124cbc
	if (!cr6.gt) goto loc_83124CBC;
	// li r31,121
	ctx.r31.s64 = 121;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83124CBC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83124CCC;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124CD8"))) PPC_WEAK_FUNC(sub_83124CD8);
PPC_FUNC_IMPL(__imp__sub_83124CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83124cf0
	if (!cr6.eq) goto loc_83124CF0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r7,r11,20,12,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// rlwinm r11,r11,29,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FF;
	// b 0x83124d00
	goto loc_83124D00;
loc_83124CF0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83124d14
	if (!cr6.eq) goto loc_83124D14;
loc_83124CF8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83124D00:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83124d2c
	if (!cr6.eq) goto loc_83124D2C;
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// b 0x83124d50
	goto loc_83124D50;
loc_83124D14:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x83124cf8
	if (!cr6.eq) goto loc_83124CF8;
	// lis r7,15
	ctx.r7.s64 = 983040;
	// li r11,511
	ctx.r11.s64 = 511;
	// ori r7,r7,16959
	ctx.r7.u64 = ctx.r7.u64 | 16959;
	// b 0x83124d00
	goto loc_83124D00;
loc_83124D2C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83124d3c
	if (!cr6.eq) goto loc_83124D3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83124d50
	goto loc_83124D50;
loc_83124D3C:
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// li r10,255
	ctx.r10.s64 = 255;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_83124D50:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83124d64
	if (!cr6.eq) goto loc_83124D64;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// b 0x83124d84
	goto loc_83124D84;
loc_83124D64:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83124d74
	if (!cr6.eq) goto loc_83124D74;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83124d84
	goto loc_83124D84;
loc_83124D74:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x83124d84
	if (cr6.eq) goto loc_83124D84;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83124D84:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83124d9c
	if (!cr6.eq) goto loc_83124D9C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// b 0x83124db8
	goto loc_83124DB8;
loc_83124D9C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83124dac
	if (!cr6.eq) goto loc_83124DAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83124db8
	goto loc_83124DB8;
loc_83124DAC:
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_83124DB8:
	// rlwimi r8,r7,9,0,22
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 9) & 0xFFFFFE00) | (ctx.r8.u64 & 0xFFFFFFFF000001FF);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r8,3,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// rlwimi r6,r7,1,30,30
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0x2) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124DDC"))) PPC_WEAK_FUNC(sub_83124DDC);
PPC_FUNC_IMPL(__imp__sub_83124DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124DE0"))) PPC_WEAK_FUNC(sub_83124DE0);
PPC_FUNC_IMPL(__imp__sub_83124DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83124DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x83124e00
	if (cr6.eq) goto loc_83124E00;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83124E00:
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r30,16(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83124e18
	if (cr6.lt) goto loc_83124E18;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x83124e1c
	goto loc_83124E1C;
loc_83124E18:
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_83124E1C:
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r5,121
	ctx.r5.s64 = 121;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x831cdcf0
	ctx.lr = 0x83124E34;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r30,121
	cr6.compare<uint32_t>(ctx.r30.u32, 121, xer);
	// ble cr6,0x83124e44
	if (!cr6.gt) goto loc_83124E44;
	// li r30,121
	ctx.r30.s64 = 121;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83124E44:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83124E54;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124E60"))) PPC_WEAK_FUNC(sub_83124E60);
PPC_FUNC_IMPL(__imp__sub_83124E60) {
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
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x83124e8c
	if (cr6.eq) goto loc_83124E8C;
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
loc_83124E8C:
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83124E94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83124e94
	if (!cr6.eq) goto loc_83124E94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83124EB8;
	sub_8259CC28(ctx, base);
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
}

__attribute__((alias("__imp__sub_83124ECC"))) PPC_WEAK_FUNC(sub_83124ECC);
PPC_FUNC_IMPL(__imp__sub_83124ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124ED0"))) PPC_WEAK_FUNC(sub_83124ED0);
PPC_FUNC_IMPL(__imp__sub_83124ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x83124f08
	if (!cr6.lt) goto loc_83124F08;
	// addi r11,r4,10008
	ctx.r11.s64 = ctx.r4.s64 + 10008;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bge cr6,0x83124f08
	if (!cr6.lt) goto loc_83124F08;
	// addi r11,r4,10000
	ctx.r11.s64 = ctx.r4.s64 + 10000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
loc_83124F08:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,-8516
	ctx.r10.s64 = ctx.r11.s64 + -8516;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124F18"))) PPC_WEAK_FUNC(sub_83124F18);
PPC_FUNC_IMPL(__imp__sub_83124F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bge cr6,0x83124f30
	if (!cr6.lt) goto loc_83124F30;
	// addi r11,r4,10008
	ctx.r11.s64 = ctx.r4.s64 + 10008;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_83124F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124F38"))) PPC_WEAK_FUNC(sub_83124F38);
PPC_FUNC_IMPL(__imp__sub_83124F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,10008
	ctx.r11.s64 = ctx.r4.s64 + 10008;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83124f54
	if (!cr6.eq) goto loc_83124F54;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83124F54:
	// addi r11,r4,10000
	ctx.r11.s64 = ctx.r4.s64 + 10000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi. r11,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83124fb8
	if (!cr0.gt) goto loc_83124FB8;
loc_83124F80:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bge cr6,0x83124fac
	if (!cr6.lt) goto loc_83124FAC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83124fb0
	goto loc_83124FB0;
loc_83124FAC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83124FB0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83124f80
	if (cr6.gt) goto loc_83124F80;
loc_83124FB8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124FCC"))) PPC_WEAK_FUNC(sub_83124FCC);
PPC_FUNC_IMPL(__imp__sub_83124FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83124FD0"))) PPC_WEAK_FUNC(sub_83124FD0);
PPC_FUNC_IMPL(__imp__sub_83124FD0) {
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
	ctx.lr = 0x83124FD8;
	__savegprlr_28(ctx, base);
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// addi r28,r28,-25472
	ctx.r28.s64 = ctx.r28.s64 + -25472;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,10000
	cr6.compare<uint32_t>(ctx.r30.u32, 10000, xer);
	// beq cr6,0x831251b8
	if (cr6.eq) goto loc_831251B8;
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// bge cr6,0x83125068
	if (!cr6.lt) goto loc_83125068;
	// subfic r11,r29,8
	xer.ca = ctx.r29.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r29.s64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8312504c
	if (cr6.lt) goto loc_8312504C;
	// subfic r11,r29,6
	xer.ca = ctx.r29.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r29.s64;
	// addi r9,r29,10007
	ctx.r9.s64 = ctx.r29.s64 + 10007;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83125038:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x83125038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83125038;
loc_8312504C:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x83125060
	if (!cr6.lt) goto loc_83125060;
	// addi r11,r10,10008
	ctx.r11.s64 = ctx.r10.s64 + 10008;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
loc_83125060:
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_83125068:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831250b0
	if (!cr6.eq) goto loc_831250B0;
	// addi r11,r4,10008
	ctx.r11.s64 = ctx.r4.s64 + 10008;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312516c
	if (cr6.eq) goto loc_8312516C;
	// addi r10,r4,10000
	ctx.r10.s64 = ctx.r4.s64 + 10000;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x8312516c
	if (!cr6.gt) goto loc_8312516C;
loc_831250B0:
	// addi r10,r4,10000
	ctx.r10.s64 = ctx.r4.s64 + 10000;
	// addi r11,r4,10008
	ctx.r11.s64 = ctx.r4.s64 + 10008;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi. r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83125128
	if (!cr0.gt) goto loc_83125128;
loc_831250F0:
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bge cr6,0x8312511c
	if (!cr6.lt) goto loc_8312511C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83125120
	goto loc_83125120;
loc_8312511C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83125120:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x831250f0
	if (cr6.gt) goto loc_831250F0;
loc_83125128:
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// bge cr6,0x8312516c
	if (!cr6.lt) goto loc_8312516C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_83125154:
	// lwzu r8,-4(r9)
	ea = -4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x83125154
	if (cr6.lt) goto loc_83125154;
loc_8312516C:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// bge cr6,0x831251b8
	if (!cr6.lt) goto loc_831251B8;
	// addi r11,r29,9999
	ctx.r11.s64 = ctx.r29.s64 + 9999;
	// subfic r10,r29,8
	xer.ca = ctx.r29.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r29.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831251A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831251a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831251A8;
loc_831251B8:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831251BC"))) PPC_WEAK_FUNC(sub_831251BC);
PPC_FUNC_IMPL(__imp__sub_831251BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831251C0"))) PPC_WEAK_FUNC(sub_831251C0);
PPC_FUNC_IMPL(__imp__sub_831251C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x8312522c
	if (cr6.gt) goto loc_8312522C;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8312522c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8312522C;
	// bdzf 4*cr6+eq,0x831251f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831251F0;
	// bdzf 4*cr6+eq,0x83125204
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83125204;
	// bne cr6,0x83125218
	if (!cr6.eq) goto loc_83125218;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_831251F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83125204:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83125218:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8312522C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125234"))) PPC_WEAK_FUNC(sub_83125234);
PPC_FUNC_IMPL(__imp__sub_83125234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125238"))) PPC_WEAK_FUNC(sub_83125238);
PPC_FUNC_IMPL(__imp__sub_83125238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x831252a0
	if (cr6.gt) goto loc_831252A0;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x831252a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831252A0;
	// bdzf 4*cr6+eq,0x83125264
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83125264;
	// bdzf 4*cr6+eq,0x83125278
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83125278;
	// bne cr6,0x8312528c
	if (!cr6.eq) goto loc_8312528C;
	// sth r5,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83125264:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r5,2,16,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0xFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0003);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83125278:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,18,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8312528C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,12,14,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 12) & 0x3F000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831252A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831252A8"))) PPC_WEAK_FUNC(sub_831252A8);
PPC_FUNC_IMPL(__imp__sub_831252A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831252B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x831252c4
	if (!cr6.eq) goto loc_831252C4;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// b 0x831252e4
	goto loc_831252E4;
loc_831252C4:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x831252d4
	if (!cr6.eq) goto loc_831252D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831252e4
	goto loc_831252E4;
loc_831252D4:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x831252e4
	if (cr6.eq) goto loc_831252E4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_831252E4:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x831252f8
	if (!cr6.eq) goto loc_831252F8;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// b 0x8312531c
	goto loc_8312531C;
loc_831252F8:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83125308
	if (!cr6.eq) goto loc_83125308;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8312531c
	goto loc_8312531C;
loc_83125308:
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// li r9,255
	ctx.r9.s64 = 255;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 & ctx.r9.u64;
loc_8312531C:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// rlwimi r9,r8,12,14,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0x3F000) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0FFF);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_83125338:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83125338
	if (!cr6.eq) goto loc_83125338;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x831cdcf0
	ctx.lr = 0x83125368;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r30,136
	cr6.compare<uint32_t>(ctx.r30.u32, 136, xer);
	// ble cr6,0x83125374
	if (!cr6.gt) goto loc_83125374;
	// li r30,136
	ctx.r30.s64 = 136;
loc_83125374:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83125384;
	sub_831CE980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312538C"))) PPC_WEAK_FUNC(sub_8312538C);
PPC_FUNC_IMPL(__imp__sub_8312538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125390"))) PPC_WEAK_FUNC(sub_83125390);
PPC_FUNC_IMPL(__imp__sub_83125390) {
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
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x831253bc
	if (cr6.eq) goto loc_831253BC;
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
loc_831253BC:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_831253C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831253c4
	if (!cr6.eq) goto loc_831253C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x831253E8;
	sub_8259CC28(ctx, base);
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
}

__attribute__((alias("__imp__sub_831253FC"))) PPC_WEAK_FUNC(sub_831253FC);
PPC_FUNC_IMPL(__imp__sub_831253FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125400"))) PPC_WEAK_FUNC(sub_83125400);
PPC_FUNC_IMPL(__imp__sub_83125400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83125408;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r27,r11,-1152
	ctx.r27.s64 = ctx.r11.s64 + -1152;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r27,-6
	ctx.r4.s64 = ctx.r27.s64 + -6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83125440;
	sub_8259CC28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83125458
	if (cr6.lt) goto loc_83125458;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8312545c
	goto loc_8312545C;
loc_83125458:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8312545C:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8312547C;
	sub_8259CC28(ctx, base);
	// addi r4,r28,2
	ctx.r4.s64 = ctx.r28.s64 + 2;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83125484:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83125484
	if (!cr6.eq) goto loc_83125484;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x831254A8;
	sub_8259CC28(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83125500
	if (!cr6.eq) goto loc_83125500;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r29,73
	ctx.r29.s64 = 73;
	// addi r11,r11,-1040
	ctx.r11.s64 = ctx.r11.s64 + -1040;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_831254C4:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831254f4
	if (!cr6.eq) goto loc_831254F4;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831254ec
	if (cr6.eq) goto loc_831254EC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x831254f0
	goto loc_831254F0;
loc_831254EC:
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
loc_831254F0:
	// bl 0x82d042a8
	ctx.lr = 0x831254F4;
	sub_82D042A8(ctx, base);
loc_831254F4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x831254c4
	if (!cr0.eq) goto loc_831254C4;
loc_83125500:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312551c
	if (!cr6.eq) goto loc_8312551C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8312551C;
	sub_8259CC28(ctx, base);
loc_8312551C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8312553c
	if (cr6.lt) goto loc_8312553C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8312553C;
	sub_825952B8(ctx, base);
loc_8312553C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125548"))) PPC_WEAK_FUNC(sub_83125548);
PPC_FUNC_IMPL(__imp__sub_83125548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83125550;
	__savegprlr_24(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r25,r11,-1136
	ctx.r25.s64 = ctx.r11.s64 + -1136;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r25,-21
	ctx.r4.s64 = ctx.r25.s64 + -21;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83125588;
	sub_8259CC28(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x831255a0
	if (cr6.lt) goto loc_831255A0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x831255a4
	goto loc_831255A4;
loc_831255A0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831255A4:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r25,-8
	ctx.r4.s64 = ctx.r25.s64 + -8;
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x831255C4;
	sub_8259CC28(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83125400
	ctx.lr = 0x831255D8;
	sub_83125400(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x831255F0;
	sub_8259CB28(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83125610
	if (cr6.lt) goto loc_83125610;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x83125610;
	sub_825952B8(ctx, base);
loc_83125610:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x83125744
	if (cr6.gt) goto loc_83125744;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83125668
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83125668;
	// bdzf 4*cr6+eq,0x8312568c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8312568C;
	// bdzf 4*cr6+eq,0x831256b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831256B0;
	// bne cr6,0x831256d4
	if (!cr6.eq) goto loc_831256D4;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8312565c
	if (!cr6.eq) goto loc_8312565C;
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// ori r4,r4,157
	ctx.r4.u64 = ctx.r4.u64 | 157;
	// b 0x831256f4
	goto loc_831256F4;
loc_8312565C:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// ori r4,r4,219
	ctx.r4.u64 = ctx.r4.u64 | 219;
	// b 0x831256f4
	goto loc_831256F4;
loc_83125668:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83125680
	if (!cr6.eq) goto loc_83125680;
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// ori r4,r4,159
	ctx.r4.u64 = ctx.r4.u64 | 159;
	// b 0x831256f4
	goto loc_831256F4;
loc_83125680:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// ori r4,r4,221
	ctx.r4.u64 = ctx.r4.u64 | 221;
	// b 0x831256f4
	goto loc_831256F4;
loc_8312568C:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x831256a4
	if (!cr6.eq) goto loc_831256A4;
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// ori r4,r4,160
	ctx.r4.u64 = ctx.r4.u64 | 160;
	// b 0x831256f4
	goto loc_831256F4;
loc_831256A4:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// ori r4,r4,222
	ctx.r4.u64 = ctx.r4.u64 | 222;
	// b 0x831256f4
	goto loc_831256F4;
loc_831256B0:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x831256c8
	if (!cr6.eq) goto loc_831256C8;
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// ori r4,r4,161
	ctx.r4.u64 = ctx.r4.u64 | 161;
	// b 0x831256f4
	goto loc_831256F4;
loc_831256C8:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// ori r4,r4,223
	ctx.r4.u64 = ctx.r4.u64 | 223;
	// b 0x831256f4
	goto loc_831256F4;
loc_831256D4:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x831256ec
	if (!cr6.eq) goto loc_831256EC;
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// b 0x831256f4
	goto loc_831256F4;
loc_831256EC:
	// lis r4,102
	ctx.r4.s64 = 6684672;
	// ori r4,r4,220
	ctx.r4.u64 = ctx.r4.u64 | 220;
loc_831256F4:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82d042a8
	ctx.lr = 0x83125708;
	sub_82D042A8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8312571C;
	sub_8259CB28(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83125738
	if (cr6.lt) goto loc_83125738;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x83125738;
	sub_825952B8(ctx, base);
loc_83125738:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83125744:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x831156e8
	ctx.lr = 0x83125754;
	sub_831156E8(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,13400
	cr6.compare<uint32_t>(ctx.r11.u32, 13400, xer);
	// bgt cr6,0x8312591c
	if (cr6.gt) goto loc_8312591C;
	// beq cr6,0x83125890
	if (cr6.eq) goto loc_83125890;
	// cmplwi cr6,r11,10200
	cr6.compare<uint32_t>(ctx.r11.u32, 10200, xer);
	// beq cr6,0x83125804
	if (cr6.eq) goto loc_83125804;
	// cmplwi cr6,r11,10201
	cr6.compare<uint32_t>(ctx.r11.u32, 10201, xer);
	// bne cr6,0x83125a5c
	if (!cr6.eq) goto loc_83125A5C;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x8311c338
	ctx.lr = 0x83125780;
	sub_8311C338(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831257cc
	if (cr6.eq) goto loc_831257CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x83125548
	ctx.lr = 0x831257A4;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x831257B8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x831257C0;
	sub_8387E8E0(ctx, base);
	// lis r30,80
	ctx.r30.s64 = 5242880;
	// ori r30,r30,125
	ctx.r30.u64 = ctx.r30.u64 | 125;
	// b 0x831259ac
	goto loc_831259AC;
loc_831257CC:
	// stb r31,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r31.u8);
	// addi r5,r1,86
	ctx.r5.s64 = ctx.r1.s64 + 86;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83125548
	ctx.lr = 0x831257DC;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x831257F0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x831257F8;
	sub_8387E8E0(ctx, base);
	// lis r30,930
	ctx.r30.s64 = 60948480;
	// ori r30,r30,112
	ctx.r30.u64 = ctx.r30.u64 | 112;
	// b 0x831259ac
	goto loc_831259AC;
loc_83125804:
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x8311c338
	ctx.lr = 0x8312580C;
	sub_8311C338(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83125858
	if (cr6.eq) goto loc_83125858;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x83125548
	ctx.lr = 0x83125830;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83125844;
	sub_8259CB28(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x8312584C;
	sub_8387E8E0(ctx, base);
	// lis r30,80
	ctx.r30.s64 = 5242880;
	// ori r30,r30,124
	ctx.r30.u64 = ctx.r30.u64 | 124;
	// b 0x831259ac
	goto loc_831259AC;
loc_83125858:
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// addi r5,r1,85
	ctx.r5.s64 = ctx.r1.s64 + 85;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83125548
	ctx.lr = 0x83125868;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8312587C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x83125884;
	sub_8387E8E0(ctx, base);
	// lis r30,930
	ctx.r30.s64 = 60948480;
	// ori r30,r30,111
	ctx.r30.u64 = ctx.r30.u64 | 111;
	// b 0x831259ac
	goto loc_831259AC;
loc_83125890:
	// li r4,67
	ctx.r4.s64 = 67;
	// bl 0x8311c338
	ctx.lr = 0x83125898;
	sub_8311C338(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831258e4
	if (cr6.eq) goto loc_831258E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x83125548
	ctx.lr = 0x831258BC;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x831258D0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x831258D8;
	sub_8387E8E0(ctx, base);
	// lis r30,80
	ctx.r30.s64 = 5242880;
	// ori r30,r30,167
	ctx.r30.u64 = ctx.r30.u64 | 167;
	// b 0x831259ac
	goto loc_831259AC;
loc_831258E4:
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x83125548
	ctx.lr = 0x831258F4;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83125908;
	sub_8259CB28(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x83125910;
	sub_8387E8E0(ctx, base);
	// lis r30,930
	ctx.r30.s64 = 60948480;
	// ori r30,r30,113
	ctx.r30.u64 = ctx.r30.u64 | 113;
	// b 0x831259ac
	goto loc_831259AC;
loc_8312591C:
	// cmplwi cr6,r11,13401
	cr6.compare<uint32_t>(ctx.r11.u32, 13401, xer);
	// bne cr6,0x83125a5c
	if (!cr6.eq) goto loc_83125A5C;
	// li r4,67
	ctx.r4.s64 = 67;
	// bl 0x8311c338
	ctx.lr = 0x8312592C;
	sub_8311C338(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83125978
	if (cr6.eq) goto loc_83125978;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x83125548
	ctx.lr = 0x83125950;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x83125964;
	sub_8259CB28(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x8312596C;
	sub_8387E8E0(ctx, base);
	// lis r30,80
	ctx.r30.s64 = 5242880;
	// ori r30,r30,168
	ctx.r30.u64 = ctx.r30.u64 | 168;
	// b 0x831259ac
	goto loc_831259AC;
loc_83125978:
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// addi r5,r1,87
	ctx.r5.s64 = ctx.r1.s64 + 87;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x83125548
	ctx.lr = 0x83125988;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8312599C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8387e8e0
	ctx.lr = 0x831259A4;
	sub_8387E8E0(ctx, base);
	// lis r30,930
	ctx.r30.s64 = 60948480;
	// ori r30,r30,114
	ctx.r30.u64 = ctx.r30.u64 | 114;
loc_831259AC:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r4,r25,-4
	ctx.r4.s64 = ctx.r25.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x837b0c10
	ctx.lr = 0x831259C4;
	sub_837B0C10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d042a8
	ctx.lr = 0x831259D0;
	sub_82D042A8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x831259E4;
	sub_825A1DA8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x831259F8;
	sub_825A1DA8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83125A0C;
	sub_8259CB28(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83125a28
	if (cr6.lt) goto loc_83125A28;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x83125A28;
	sub_825952B8(ctx, base);
loc_83125A28:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83125a50
	if (cr6.lt) goto loc_83125A50;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x83125A50;
	sub_825952B8(ctx, base);
loc_83125A50:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_83125A5C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83125a78
	if (!cr6.eq) goto loc_83125A78;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x83125A78;
	sub_8259CC28(ctx, base);
loc_83125A78:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83125a94
	if (cr6.lt) goto loc_83125A94;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83125A94;
	sub_825952B8(ctx, base);
loc_83125A94:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83125abc
	if (cr6.lt) goto loc_83125ABC;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x83125ABC;
	sub_825952B8(ctx, base);
loc_83125ABC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125AC8"))) PPC_WEAK_FUNC(sub_83125AC8);
PPC_FUNC_IMPL(__imp__sub_83125AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// cmplwi cr6,r11,320
	cr6.compare<uint32_t>(ctx.r11.u32, 320, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r10,r4,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,1280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r8,r5,22,6,9
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x3C00000) | (ctx.r8.u64 & 0xFFFFFFFFFC3FFFFF);
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r7,1280(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r5,r6,15,10,16
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 15) & 0x3F8000) | (ctx.r5.u64 & 0xFFFFFFFFFFC07FFF);
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,1280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,1280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1280, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125B1C"))) PPC_WEAK_FUNC(sub_83125B1C);
PPC_FUNC_IMPL(__imp__sub_83125B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125B20"))) PPC_WEAK_FUNC(sub_83125B20);
PPC_FUNC_IMPL(__imp__sub_83125B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83125b48
	if (!cr6.lt) goto loc_83125B48;
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
loc_83125B48:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83125b70
	if (!cr6.lt) goto loc_83125B70;
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
loc_83125B70:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
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

__attribute__((alias("__imp__sub_83125B9C"))) PPC_WEAK_FUNC(sub_83125B9C);
PPC_FUNC_IMPL(__imp__sub_83125B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125BA0"))) PPC_WEAK_FUNC(sub_83125BA0);
PPC_FUNC_IMPL(__imp__sub_83125BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83125BA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,1280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83125c30
	if (!cr6.gt) goto loc_83125C30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83125BE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,10,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xF;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x83125c14
	if (!cr6.eq) goto loc_83125C14;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// rlwinm r9,r11,17,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x7F;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x8313f560
	ctx.lr = 0x83125C14;
	sub_8313F560(ctx, base);
loc_83125C14:
	// lwz r11,1280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1280);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83125be4
	if (cr6.lt) goto loc_83125BE4;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83125C30:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r10,r28,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r28.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// srawi r30,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 3;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8313dc98
	ctx.lr = 0x83125C50;
	sub_8313DC98(ctx, base);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x83125c80
	if (cr6.eq) goto loc_83125C80;
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
	ctx.lr = 0x83125C78;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_83125C80:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83125cc8
	if (cr6.eq) goto loc_83125CC8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83125C8C:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831156e8
	ctx.lr = 0x83125C94;
	sub_831156E8(ctx, base);
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c448
	ctx.lr = 0x83125CA0;
	sub_8311C448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83125cbc
	if (cr6.eq) goto loc_83125CBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82ab5f20
	ctx.lr = 0x83125CBC;
	sub_82AB5F20(ctx, base);
loc_83125CBC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x83125c8c
	if (!cr0.eq) goto loc_83125C8C;
loc_83125CC8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83125cd8
	if (cr6.eq) goto loc_83125CD8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82416268
	ctx.lr = 0x83125CD8;
	sub_82416268(ctx, base);
loc_83125CD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

