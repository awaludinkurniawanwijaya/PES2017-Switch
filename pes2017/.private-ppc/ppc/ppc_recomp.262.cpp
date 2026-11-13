#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83070BC8"))) PPC_WEAK_FUNC(sub_83070BC8);
PPC_FUNC_IMPL(__imp__sub_83070BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83070c04
	if (cr6.lt) goto loc_83070C04;
	// cmpwi cr6,r5,17
	cr6.compare<int32_t>(ctx.r5.s32, 17, xer);
	// bgt cr6,0x83070c04
	if (cr6.gt) goto loc_83070C04;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,4424
	ctx.r8.s64 = ctx.r10.s64 + 4424;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83070BE8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x83070c0c
	if (cr6.eq) goto loc_83070C0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x83070be8
	if (cr6.lt) goto loc_83070BE8;
loc_83070C04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83070C0C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83070C24:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83070c24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83070C24;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070C38"))) PPC_WEAK_FUNC(sub_83070C38);
PPC_FUNC_IMPL(__imp__sub_83070C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070c5c
	if (!cr6.lt) goto loc_83070C5C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83070C5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070C64"))) PPC_WEAK_FUNC(sub_83070C64);
PPC_FUNC_IMPL(__imp__sub_83070C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070C68"))) PPC_WEAK_FUNC(sub_83070C68);
PPC_FUNC_IMPL(__imp__sub_83070C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070c8c
	if (!cr6.lt) goto loc_83070C8C;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070C94"))) PPC_WEAK_FUNC(sub_83070C94);
PPC_FUNC_IMPL(__imp__sub_83070C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070C98"))) PPC_WEAK_FUNC(sub_83070C98);
PPC_FUNC_IMPL(__imp__sub_83070C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x83070cc0
	if (!cr6.lt) goto loc_83070CC0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070CC8"))) PPC_WEAK_FUNC(sub_83070CC8);
PPC_FUNC_IMPL(__imp__sub_83070CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x83070cf0
	if (!cr6.lt) goto loc_83070CF0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070CF8"))) PPC_WEAK_FUNC(sub_83070CF8);
PPC_FUNC_IMPL(__imp__sub_83070CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070d20
	if (!cr6.lt) goto loc_83070D20;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070D28"))) PPC_WEAK_FUNC(sub_83070D28);
PPC_FUNC_IMPL(__imp__sub_83070D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070d50
	if (!cr6.lt) goto loc_83070D50;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070D50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070D58"))) PPC_WEAK_FUNC(sub_83070D58);
PPC_FUNC_IMPL(__imp__sub_83070D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070d80
	if (!cr6.lt) goto loc_83070D80;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070D80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070D88"))) PPC_WEAK_FUNC(sub_83070D88);
PPC_FUNC_IMPL(__imp__sub_83070D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070db0
	if (!cr6.lt) goto loc_83070DB0;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070DB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070DB8"))) PPC_WEAK_FUNC(sub_83070DB8);
PPC_FUNC_IMPL(__imp__sub_83070DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070de0
	if (!cr6.lt) goto loc_83070DE0;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070DE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070DE8"))) PPC_WEAK_FUNC(sub_83070DE8);
PPC_FUNC_IMPL(__imp__sub_83070DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070e10
	if (!cr6.lt) goto loc_83070E10;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070E10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070E18"))) PPC_WEAK_FUNC(sub_83070E18);
PPC_FUNC_IMPL(__imp__sub_83070E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bge cr6,0x83070e40
	if (!cr6.lt) goto loc_83070E40;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070E40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070E48"))) PPC_WEAK_FUNC(sub_83070E48);
PPC_FUNC_IMPL(__imp__sub_83070E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bge cr6,0x83070e70
	if (!cr6.lt) goto loc_83070E70;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070E70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070E78"))) PPC_WEAK_FUNC(sub_83070E78);
PPC_FUNC_IMPL(__imp__sub_83070E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bge cr6,0x83070ea0
	if (!cr6.lt) goto loc_83070EA0;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070EA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070EA8"))) PPC_WEAK_FUNC(sub_83070EA8);
PPC_FUNC_IMPL(__imp__sub_83070EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bge cr6,0x83070ed0
	if (!cr6.lt) goto loc_83070ED0;
	// addi r11,r11,126
	ctx.r11.s64 = ctx.r11.s64 + 126;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070ED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070ED8"))) PPC_WEAK_FUNC(sub_83070ED8);
PPC_FUNC_IMPL(__imp__sub_83070ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070f00
	if (!cr6.lt) goto loc_83070F00;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070F00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070F08"))) PPC_WEAK_FUNC(sub_83070F08);
PPC_FUNC_IMPL(__imp__sub_83070F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83070f30
	if (!cr6.lt) goto loc_83070F30;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070F38"))) PPC_WEAK_FUNC(sub_83070F38);
PPC_FUNC_IMPL(__imp__sub_83070F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bge cr6,0x83070f60
	if (!cr6.lt) goto loc_83070F60;
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070F60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070F68"))) PPC_WEAK_FUNC(sub_83070F68);
PPC_FUNC_IMPL(__imp__sub_83070F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bge cr6,0x83070f90
	if (!cr6.lt) goto loc_83070F90;
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070F90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070F98"))) PPC_WEAK_FUNC(sub_83070F98);
PPC_FUNC_IMPL(__imp__sub_83070F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bge cr6,0x83070fc0
	if (!cr6.lt) goto loc_83070FC0;
	// addi r11,r11,186
	ctx.r11.s64 = ctx.r11.s64 + 186;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83070FC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070FC8"))) PPC_WEAK_FUNC(sub_83070FC8);
PPC_FUNC_IMPL(__imp__sub_83070FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bge cr6,0x83070ff0
	if (!cr6.lt) goto loc_83070FF0;
	// addi r11,r11,186
	ctx.r11.s64 = ctx.r11.s64 + 186;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83070FF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070FF8"))) PPC_WEAK_FUNC(sub_83070FF8);
PPC_FUNC_IMPL(__imp__sub_83070FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83071020
	if (!cr6.lt) goto loc_83071020;
	// addi r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 + 204;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83071020:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071028"))) PPC_WEAK_FUNC(sub_83071028);
PPC_FUNC_IMPL(__imp__sub_83071028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83071050
	if (!cr6.lt) goto loc_83071050;
	// addi r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 + 204;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83071050:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071058"))) PPC_WEAK_FUNC(sub_83071058);
PPC_FUNC_IMPL(__imp__sub_83071058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bge cr6,0x83071080
	if (!cr6.lt) goto loc_83071080;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83071080:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071088"))) PPC_WEAK_FUNC(sub_83071088);
PPC_FUNC_IMPL(__imp__sub_83071088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bge cr6,0x830710b0
	if (!cr6.lt) goto loc_830710B0;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_830710B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830710B8"))) PPC_WEAK_FUNC(sub_830710B8);
PPC_FUNC_IMPL(__imp__sub_830710B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830710e0
	if (!cr6.lt) goto loc_830710E0;
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_830710E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830710E8"))) PPC_WEAK_FUNC(sub_830710E8);
PPC_FUNC_IMPL(__imp__sub_830710E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83071110
	if (!cr6.lt) goto loc_83071110;
	// addi r11,r11,254
	ctx.r11.s64 = ctx.r11.s64 + 254;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83071110:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071118"))) PPC_WEAK_FUNC(sub_83071118);
PPC_FUNC_IMPL(__imp__sub_83071118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83071140
	if (!cr6.lt) goto loc_83071140;
	// addi r11,r11,270
	ctx.r11.s64 = ctx.r11.s64 + 270;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83071140:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071148"))) PPC_WEAK_FUNC(sub_83071148);
PPC_FUNC_IMPL(__imp__sub_83071148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83071170
	if (!cr6.lt) goto loc_83071170;
	// addi r11,r11,270
	ctx.r11.s64 = ctx.r11.s64 + 270;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83071170:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071178"))) PPC_WEAK_FUNC(sub_83071178);
PPC_FUNC_IMPL(__imp__sub_83071178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x830711a0
	if (!cr6.lt) goto loc_830711A0;
	// addi r11,r11,290
	ctx.r11.s64 = ctx.r11.s64 + 290;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_830711A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830711A8"))) PPC_WEAK_FUNC(sub_830711A8);
PPC_FUNC_IMPL(__imp__sub_830711A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x830711d0
	if (!cr6.lt) goto loc_830711D0;
	// addi r11,r11,290
	ctx.r11.s64 = ctx.r11.s64 + 290;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_830711D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830711D8"))) PPC_WEAK_FUNC(sub_830711D8);
PPC_FUNC_IMPL(__imp__sub_830711D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83071200
	if (!cr6.lt) goto loc_83071200;
	// addi r11,r11,310
	ctx.r11.s64 = ctx.r11.s64 + 310;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83071200:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071208"))) PPC_WEAK_FUNC(sub_83071208);
PPC_FUNC_IMPL(__imp__sub_83071208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83071230
	if (!cr6.lt) goto loc_83071230;
	// addi r11,r11,310
	ctx.r11.s64 = ctx.r11.s64 + 310;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83071230:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071238"))) PPC_WEAK_FUNC(sub_83071238);
PPC_FUNC_IMPL(__imp__sub_83071238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83071260
	if (!cr6.lt) goto loc_83071260;
	// addi r11,r11,330
	ctx.r11.s64 = ctx.r11.s64 + 330;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83071260:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071268"))) PPC_WEAK_FUNC(sub_83071268);
PPC_FUNC_IMPL(__imp__sub_83071268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bge cr6,0x83071290
	if (!cr6.lt) goto loc_83071290;
	// addi r11,r11,330
	ctx.r11.s64 = ctx.r11.s64 + 330;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83071290:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071298"))) PPC_WEAK_FUNC(sub_83071298);
PPC_FUNC_IMPL(__imp__sub_83071298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x830712c0
	if (!cr6.lt) goto loc_830712C0;
	// addi r11,r11,350
	ctx.r11.s64 = ctx.r11.s64 + 350;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_830712C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830712C8"))) PPC_WEAK_FUNC(sub_830712C8);
PPC_FUNC_IMPL(__imp__sub_830712C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x830712f0
	if (!cr6.lt) goto loc_830712F0;
	// addi r11,r11,350
	ctx.r11.s64 = ctx.r11.s64 + 350;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_830712F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830712F8"))) PPC_WEAK_FUNC(sub_830712F8);
PPC_FUNC_IMPL(__imp__sub_830712F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bge cr6,0x83071320
	if (!cr6.lt) goto loc_83071320;
	// addi r11,r11,382
	ctx.r11.s64 = ctx.r11.s64 + 382;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83071320:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071328"))) PPC_WEAK_FUNC(sub_83071328);
PPC_FUNC_IMPL(__imp__sub_83071328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bge cr6,0x83071350
	if (!cr6.lt) goto loc_83071350;
	// addi r11,r11,382
	ctx.r11.s64 = ctx.r11.s64 + 382;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83071350:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071358"))) PPC_WEAK_FUNC(sub_83071358);
PPC_FUNC_IMPL(__imp__sub_83071358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bge cr6,0x83071380
	if (!cr6.lt) goto loc_83071380;
	// addi r11,r11,400
	ctx.r11.s64 = ctx.r11.s64 + 400;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83071380:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071388"))) PPC_WEAK_FUNC(sub_83071388);
PPC_FUNC_IMPL(__imp__sub_83071388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bge cr6,0x830713b0
	if (!cr6.lt) goto loc_830713B0;
	// addi r11,r11,400
	ctx.r11.s64 = ctx.r11.s64 + 400;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_830713B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830713B8"))) PPC_WEAK_FUNC(sub_830713B8);
PPC_FUNC_IMPL(__imp__sub_830713B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x830713e0
	if (!cr6.lt) goto loc_830713E0;
	// addi r11,r11,422
	ctx.r11.s64 = ctx.r11.s64 + 422;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_830713E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830713E8"))) PPC_WEAK_FUNC(sub_830713E8);
PPC_FUNC_IMPL(__imp__sub_830713E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x83071410
	if (!cr6.lt) goto loc_83071410;
	// addi r11,r11,422
	ctx.r11.s64 = ctx.r11.s64 + 422;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83071410:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071418"))) PPC_WEAK_FUNC(sub_83071418);
PPC_FUNC_IMPL(__imp__sub_83071418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x83071440
	if (!cr6.lt) goto loc_83071440;
	// addi r11,r11,522
	ctx.r11.s64 = ctx.r11.s64 + 522;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_83071440:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071448"))) PPC_WEAK_FUNC(sub_83071448);
PPC_FUNC_IMPL(__imp__sub_83071448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x83071470
	if (!cr6.lt) goto loc_83071470;
	// addi r11,r11,522
	ctx.r11.s64 = ctx.r11.s64 + 522;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_83071470:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071478"))) PPC_WEAK_FUNC(sub_83071478);
PPC_FUNC_IMPL(__imp__sub_83071478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x830714a0
	if (!cr6.lt) goto loc_830714A0;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_830714A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830714A8"))) PPC_WEAK_FUNC(sub_830714A8);
PPC_FUNC_IMPL(__imp__sub_830714A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x830714d0
	if (!cr6.lt) goto loc_830714D0;
	// addi r11,r11,622
	ctx.r11.s64 = ctx.r11.s64 + 622;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
loc_830714D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830714D8"))) PPC_WEAK_FUNC(sub_830714D8);
PPC_FUNC_IMPL(__imp__sub_830714D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8307151c
	if (cr6.lt) goto loc_8307151C;
	// cmpwi cr6,r5,22
	cr6.compare<int32_t>(ctx.r5.s32, 22, xer);
	// bgt cr6,0x8307151c
	if (cr6.gt) goto loc_8307151C;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,5104
	ctx.r8.s64 = ctx.r10.s64 + 5104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830714FC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// beq cr6,0x83071524
	if (cr6.eq) goto loc_83071524;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r9,828
	cr6.compare<uint32_t>(ctx.r9.u32, 828, xer);
	// blt cr6,0x830714fc
	if (cr6.lt) goto loc_830714FC;
loc_8307151C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83071524:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_83071544:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83071544
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83071544;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071558"))) PPC_WEAK_FUNC(sub_83071558);
PPC_FUNC_IMPL(__imp__sub_83071558) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307156C"))) PPC_WEAK_FUNC(sub_8307156C);
PPC_FUNC_IMPL(__imp__sub_8307156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071570"))) PPC_WEAK_FUNC(sub_83071570);
PPC_FUNC_IMPL(__imp__sub_83071570) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307158C"))) PPC_WEAK_FUNC(sub_8307158C);
PPC_FUNC_IMPL(__imp__sub_8307158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071590"))) PPC_WEAK_FUNC(sub_83071590);
PPC_FUNC_IMPL(__imp__sub_83071590) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830715A4"))) PPC_WEAK_FUNC(sub_830715A4);
PPC_FUNC_IMPL(__imp__sub_830715A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830715A8"))) PPC_WEAK_FUNC(sub_830715A8);
PPC_FUNC_IMPL(__imp__sub_830715A8) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,9,22,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 9) & 0x200) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFDFF);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830715C4"))) PPC_WEAK_FUNC(sub_830715C4);
PPC_FUNC_IMPL(__imp__sub_830715C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830715C8"))) PPC_WEAK_FUNC(sub_830715C8);
PPC_FUNC_IMPL(__imp__sub_830715C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830715DC"))) PPC_WEAK_FUNC(sub_830715DC);
PPC_FUNC_IMPL(__imp__sub_830715DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830715E0"))) PPC_WEAK_FUNC(sub_830715E0);
PPC_FUNC_IMPL(__imp__sub_830715E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830715FC"))) PPC_WEAK_FUNC(sub_830715FC);
PPC_FUNC_IMPL(__imp__sub_830715FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071600"))) PPC_WEAK_FUNC(sub_83071600);
PPC_FUNC_IMPL(__imp__sub_83071600) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071614"))) PPC_WEAK_FUNC(sub_83071614);
PPC_FUNC_IMPL(__imp__sub_83071614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071618"))) PPC_WEAK_FUNC(sub_83071618);
PPC_FUNC_IMPL(__imp__sub_83071618) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071634"))) PPC_WEAK_FUNC(sub_83071634);
PPC_FUNC_IMPL(__imp__sub_83071634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071638"))) PPC_WEAK_FUNC(sub_83071638);
PPC_FUNC_IMPL(__imp__sub_83071638) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071648"))) PPC_WEAK_FUNC(sub_83071648);
PPC_FUNC_IMPL(__imp__sub_83071648) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307165C"))) PPC_WEAK_FUNC(sub_8307165C);
PPC_FUNC_IMPL(__imp__sub_8307165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071660"))) PPC_WEAK_FUNC(sub_83071660);
PPC_FUNC_IMPL(__imp__sub_83071660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071674"))) PPC_WEAK_FUNC(sub_83071674);
PPC_FUNC_IMPL(__imp__sub_83071674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071678"))) PPC_WEAK_FUNC(sub_83071678);
PPC_FUNC_IMPL(__imp__sub_83071678) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r9,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071694"))) PPC_WEAK_FUNC(sub_83071694);
PPC_FUNC_IMPL(__imp__sub_83071694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071698"))) PPC_WEAK_FUNC(sub_83071698);
PPC_FUNC_IMPL(__imp__sub_83071698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830716AC"))) PPC_WEAK_FUNC(sub_830716AC);
PPC_FUNC_IMPL(__imp__sub_830716AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830716B0"))) PPC_WEAK_FUNC(sub_830716B0);
PPC_FUNC_IMPL(__imp__sub_830716B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,10,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830716CC"))) PPC_WEAK_FUNC(sub_830716CC);
PPC_FUNC_IMPL(__imp__sub_830716CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830716D0"))) PPC_WEAK_FUNC(sub_830716D0);
PPC_FUNC_IMPL(__imp__sub_830716D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830716E4"))) PPC_WEAK_FUNC(sub_830716E4);
PPC_FUNC_IMPL(__imp__sub_830716E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830716E8"))) PPC_WEAK_FUNC(sub_830716E8);
PPC_FUNC_IMPL(__imp__sub_830716E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,4,22,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x3F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC0F);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071704"))) PPC_WEAK_FUNC(sub_83071704);
PPC_FUNC_IMPL(__imp__sub_83071704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071708"))) PPC_WEAK_FUNC(sub_83071708);
PPC_FUNC_IMPL(__imp__sub_83071708) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307171C"))) PPC_WEAK_FUNC(sub_8307171C);
PPC_FUNC_IMPL(__imp__sub_8307171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071720"))) PPC_WEAK_FUNC(sub_83071720);
PPC_FUNC_IMPL(__imp__sub_83071720) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,11,0,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 11) & 0xFFFFF800) | (ctx.r10.u64 & 0xFFFFFFFF000007FF);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307173C"))) PPC_WEAK_FUNC(sub_8307173C);
PPC_FUNC_IMPL(__imp__sub_8307173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071740"))) PPC_WEAK_FUNC(sub_83071740);
PPC_FUNC_IMPL(__imp__sub_83071740) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071754"))) PPC_WEAK_FUNC(sub_83071754);
PPC_FUNC_IMPL(__imp__sub_83071754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071758"))) PPC_WEAK_FUNC(sub_83071758);
PPC_FUNC_IMPL(__imp__sub_83071758) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,6,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071774"))) PPC_WEAK_FUNC(sub_83071774);
PPC_FUNC_IMPL(__imp__sub_83071774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071778"))) PPC_WEAK_FUNC(sub_83071778);
PPC_FUNC_IMPL(__imp__sub_83071778) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307178C"))) PPC_WEAK_FUNC(sub_8307178C);
PPC_FUNC_IMPL(__imp__sub_8307178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071790"))) PPC_WEAK_FUNC(sub_83071790);
PPC_FUNC_IMPL(__imp__sub_83071790) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rlwimi r9,r10,5,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830717AC"))) PPC_WEAK_FUNC(sub_830717AC);
PPC_FUNC_IMPL(__imp__sub_830717AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830717B0"))) PPC_WEAK_FUNC(sub_830717B0);
PPC_FUNC_IMPL(__imp__sub_830717B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830717C4"))) PPC_WEAK_FUNC(sub_830717C4);
PPC_FUNC_IMPL(__imp__sub_830717C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830717C8"))) PPC_WEAK_FUNC(sub_830717C8);
PPC_FUNC_IMPL(__imp__sub_830717C8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83071830
	if (cr6.eq) goto loc_83071830;
	// cmplwi cr6,r5,76
	cr6.compare<uint32_t>(ctx.r5.u32, 76, xer);
	// bgt cr6,0x83071830
	if (cr6.gt) goto loc_83071830;
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83071814
	if (cr6.eq) goto loc_83071814;
	// bl 0x831ce980
	ctx.lr = 0x83071800;
	sub_831CE980(ctx, base);
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
loc_83071814:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8307181C;
	sub_831CDCF0(ctx, base);
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
loc_83071830:
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

__attribute__((alias("__imp__sub_83071844"))) PPC_WEAK_FUNC(sub_83071844);
PPC_FUNC_IMPL(__imp__sub_83071844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071848"))) PPC_WEAK_FUNC(sub_83071848);
PPC_FUNC_IMPL(__imp__sub_83071848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83071850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,76
	cr6.compare<uint32_t>(ctx.r5.u32, 76, xer);
	// blt cr6,0x83071868
	if (cr6.lt) goto loc_83071868;
	// li r30,76
	ctx.r30.s64 = 76;
loc_83071868:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830718a0
	if (cr6.eq) goto loc_830718A0;
	// addi r31,r3,14
	ctx.r31.s64 = ctx.r3.s64 + 14;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83071884;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83071894;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830718A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830718AC"))) PPC_WEAK_FUNC(sub_830718AC);
PPC_FUNC_IMPL(__imp__sub_830718AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830718B0"))) PPC_WEAK_FUNC(sub_830718B0);
PPC_FUNC_IMPL(__imp__sub_830718B0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83071918
	if (cr6.eq) goto loc_83071918;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// bgt cr6,0x83071918
	if (cr6.gt) goto loc_83071918;
	// lbz r10,90(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 90);
	// addi r4,r11,90
	ctx.r4.s64 = ctx.r11.s64 + 90;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830718fc
	if (cr6.eq) goto loc_830718FC;
	// bl 0x831ce980
	ctx.lr = 0x830718E8;
	sub_831CE980(ctx, base);
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
loc_830718FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83071904;
	sub_831CDCF0(ctx, base);
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
loc_83071918:
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

__attribute__((alias("__imp__sub_8307192C"))) PPC_WEAK_FUNC(sub_8307192C);
PPC_FUNC_IMPL(__imp__sub_8307192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071930"))) PPC_WEAK_FUNC(sub_83071930);
PPC_FUNC_IMPL(__imp__sub_83071930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83071938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// blt cr6,0x83071950
	if (cr6.lt) goto loc_83071950;
	// li r30,33
	ctx.r30.s64 = 33;
loc_83071950:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83071988
	if (cr6.eq) goto loc_83071988;
	// addi r31,r3,90
	ctx.r31.s64 = ctx.r3.s64 + 90;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8307196C;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8307197C;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83071988:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83071994"))) PPC_WEAK_FUNC(sub_83071994);
PPC_FUNC_IMPL(__imp__sub_83071994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071998"))) PPC_WEAK_FUNC(sub_83071998);
PPC_FUNC_IMPL(__imp__sub_83071998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x830719d4
	if (cr6.lt) goto loc_830719D4;
	// cmpwi cr6,r5,14
	cr6.compare<int32_t>(ctx.r5.s32, 14, xer);
	// bgt cr6,0x830719d4
	if (cr6.gt) goto loc_830719D4;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,6040
	ctx.r8.s64 = ctx.r10.s64 + 6040;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830719B8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x830719dc
	if (cr6.eq) goto loc_830719DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// blt cr6,0x830719b8
	if (cr6.lt) goto loc_830719B8;
loc_830719D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830719DC:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830719F4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830719f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830719F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071A08"))) PPC_WEAK_FUNC(sub_83071A08);
PPC_FUNC_IMPL(__imp__sub_83071A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,15
	cr6.compare<int32_t>(ctx.r5.s32, 15, xer);
	// blt cr6,0x83071a4c
	if (cr6.lt) goto loc_83071A4C;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// bgt cr6,0x83071a4c
	if (cr6.gt) goto loc_83071A4C;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,6520
	ctx.r8.s64 = ctx.r10.s64 + 6520;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83071A2C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// beq cr6,0x83071a54
	if (cr6.eq) goto loc_83071A54;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r9,56
	cr6.compare<uint32_t>(ctx.r9.u32, 56, xer);
	// blt cr6,0x83071a2c
	if (cr6.lt) goto loc_83071A2C;
loc_83071A4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83071A54:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// li r9,7
	ctx.r9.s64 = 7;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83071A6C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83071a6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83071A6C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071A80"))) PPC_WEAK_FUNC(sub_83071A80);
PPC_FUNC_IMPL(__imp__sub_83071A80) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071A94"))) PPC_WEAK_FUNC(sub_83071A94);
PPC_FUNC_IMPL(__imp__sub_83071A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071A98"))) PPC_WEAK_FUNC(sub_83071A98);
PPC_FUNC_IMPL(__imp__sub_83071A98) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071AB4"))) PPC_WEAK_FUNC(sub_83071AB4);
PPC_FUNC_IMPL(__imp__sub_83071AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071AB8"))) PPC_WEAK_FUNC(sub_83071AB8);
PPC_FUNC_IMPL(__imp__sub_83071AB8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071ACC"))) PPC_WEAK_FUNC(sub_83071ACC);
PPC_FUNC_IMPL(__imp__sub_83071ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071AD0"))) PPC_WEAK_FUNC(sub_83071AD0);
PPC_FUNC_IMPL(__imp__sub_83071AD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r9,r10,6,25,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x40) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071AEC"))) PPC_WEAK_FUNC(sub_83071AEC);
PPC_FUNC_IMPL(__imp__sub_83071AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071AF0"))) PPC_WEAK_FUNC(sub_83071AF0);
PPC_FUNC_IMPL(__imp__sub_83071AF0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B04"))) PPC_WEAK_FUNC(sub_83071B04);
PPC_FUNC_IMPL(__imp__sub_83071B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071B08"))) PPC_WEAK_FUNC(sub_83071B08);
PPC_FUNC_IMPL(__imp__sub_83071B08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r9,r10,5,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B24"))) PPC_WEAK_FUNC(sub_83071B24);
PPC_FUNC_IMPL(__imp__sub_83071B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071B28"))) PPC_WEAK_FUNC(sub_83071B28);
PPC_FUNC_IMPL(__imp__sub_83071B28) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B3C"))) PPC_WEAK_FUNC(sub_83071B3C);
PPC_FUNC_IMPL(__imp__sub_83071B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071B40"))) PPC_WEAK_FUNC(sub_83071B40);
PPC_FUNC_IMPL(__imp__sub_83071B40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r9,r10,4,27,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B5C"))) PPC_WEAK_FUNC(sub_83071B5C);
PPC_FUNC_IMPL(__imp__sub_83071B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071B60"))) PPC_WEAK_FUNC(sub_83071B60);
PPC_FUNC_IMPL(__imp__sub_83071B60) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B74"))) PPC_WEAK_FUNC(sub_83071B74);
PPC_FUNC_IMPL(__imp__sub_83071B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071B78"))) PPC_WEAK_FUNC(sub_83071B78);
PPC_FUNC_IMPL(__imp__sub_83071B78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r9,r10,3,28,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B94"))) PPC_WEAK_FUNC(sub_83071B94);
PPC_FUNC_IMPL(__imp__sub_83071B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071B98"))) PPC_WEAK_FUNC(sub_83071B98);
PPC_FUNC_IMPL(__imp__sub_83071B98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071BAC"))) PPC_WEAK_FUNC(sub_83071BAC);
PPC_FUNC_IMPL(__imp__sub_83071BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071BB0"))) PPC_WEAK_FUNC(sub_83071BB0);
PPC_FUNC_IMPL(__imp__sub_83071BB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r9,r10,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071BCC"))) PPC_WEAK_FUNC(sub_83071BCC);
PPC_FUNC_IMPL(__imp__sub_83071BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071BD0"))) PPC_WEAK_FUNC(sub_83071BD0);
PPC_FUNC_IMPL(__imp__sub_83071BD0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071BE4"))) PPC_WEAK_FUNC(sub_83071BE4);
PPC_FUNC_IMPL(__imp__sub_83071BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071BE8"))) PPC_WEAK_FUNC(sub_83071BE8);
PPC_FUNC_IMPL(__imp__sub_83071BE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071C04"))) PPC_WEAK_FUNC(sub_83071C04);
PPC_FUNC_IMPL(__imp__sub_83071C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071C08"))) PPC_WEAK_FUNC(sub_83071C08);
PPC_FUNC_IMPL(__imp__sub_83071C08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071C1C"))) PPC_WEAK_FUNC(sub_83071C1C);
PPC_FUNC_IMPL(__imp__sub_83071C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071C20"))) PPC_WEAK_FUNC(sub_83071C20);
PPC_FUNC_IMPL(__imp__sub_83071C20) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071C3C"))) PPC_WEAK_FUNC(sub_83071C3C);
PPC_FUNC_IMPL(__imp__sub_83071C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071C40"))) PPC_WEAK_FUNC(sub_83071C40);
PPC_FUNC_IMPL(__imp__sub_83071C40) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071C50"))) PPC_WEAK_FUNC(sub_83071C50);
PPC_FUNC_IMPL(__imp__sub_83071C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071C64"))) PPC_WEAK_FUNC(sub_83071C64);
PPC_FUNC_IMPL(__imp__sub_83071C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071C68"))) PPC_WEAK_FUNC(sub_83071C68);
PPC_FUNC_IMPL(__imp__sub_83071C68) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83071cd0
	if (cr6.eq) goto loc_83071CD0;
	// cmplwi cr6,r5,46
	cr6.compare<uint32_t>(ctx.r5.u32, 46, xer);
	// bgt cr6,0x83071cd0
	if (cr6.gt) goto loc_83071CD0;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// addi r4,r11,9
	ctx.r4.s64 = ctx.r11.s64 + 9;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83071cb4
	if (cr6.eq) goto loc_83071CB4;
	// bl 0x831ce980
	ctx.lr = 0x83071CA0;
	sub_831CE980(ctx, base);
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
loc_83071CB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83071CBC;
	sub_831CDCF0(ctx, base);
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
loc_83071CD0:
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

__attribute__((alias("__imp__sub_83071CE4"))) PPC_WEAK_FUNC(sub_83071CE4);
PPC_FUNC_IMPL(__imp__sub_83071CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071CE8"))) PPC_WEAK_FUNC(sub_83071CE8);
PPC_FUNC_IMPL(__imp__sub_83071CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83071CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,46
	cr6.compare<uint32_t>(ctx.r5.u32, 46, xer);
	// blt cr6,0x83071d08
	if (cr6.lt) goto loc_83071D08;
	// li r30,46
	ctx.r30.s64 = 46;
loc_83071D08:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83071d40
	if (cr6.eq) goto loc_83071D40;
	// addi r31,r3,9
	ctx.r31.s64 = ctx.r3.s64 + 9;
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83071D24;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83071D34;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83071D40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83071D4C"))) PPC_WEAK_FUNC(sub_83071D4C);
PPC_FUNC_IMPL(__imp__sub_83071D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071D50"))) PPC_WEAK_FUNC(sub_83071D50);
PPC_FUNC_IMPL(__imp__sub_83071D50) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83071db8
	if (cr6.eq) goto loc_83071DB8;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// bgt cr6,0x83071db8
	if (cr6.gt) goto loc_83071DB8;
	// lbz r10,55(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 55);
	// addi r4,r11,55
	ctx.r4.s64 = ctx.r11.s64 + 55;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83071d9c
	if (cr6.eq) goto loc_83071D9C;
	// bl 0x831ce980
	ctx.lr = 0x83071D88;
	sub_831CE980(ctx, base);
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
loc_83071D9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83071DA4;
	sub_831CDCF0(ctx, base);
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
loc_83071DB8:
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

__attribute__((alias("__imp__sub_83071DCC"))) PPC_WEAK_FUNC(sub_83071DCC);
PPC_FUNC_IMPL(__imp__sub_83071DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071DD0"))) PPC_WEAK_FUNC(sub_83071DD0);
PPC_FUNC_IMPL(__imp__sub_83071DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83071DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// blt cr6,0x83071df0
	if (cr6.lt) goto loc_83071DF0;
	// li r30,33
	ctx.r30.s64 = 33;
loc_83071DF0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83071e28
	if (cr6.eq) goto loc_83071E28;
	// addi r31,r3,55
	ctx.r31.s64 = ctx.r3.s64 + 55;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83071E0C;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83071E1C;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83071E28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83071E34"))) PPC_WEAK_FUNC(sub_83071E34);
PPC_FUNC_IMPL(__imp__sub_83071E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071E38"))) PPC_WEAK_FUNC(sub_83071E38);
PPC_FUNC_IMPL(__imp__sub_83071E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83071e74
	if (cr6.lt) goto loc_83071E74;
	// cmpwi cr6,r5,10
	cr6.compare<int32_t>(ctx.r5.s32, 10, xer);
	// bgt cr6,0x83071e74
	if (cr6.gt) goto loc_83071E74;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,6680
	ctx.r8.s64 = ctx.r10.s64 + 6680;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83071E58:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x83071e7c
	if (cr6.eq) goto loc_83071E7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83071e58
	if (cr6.lt) goto loc_83071E58;
loc_83071E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83071E7C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83071E94:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83071e94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83071E94;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071EA8"))) PPC_WEAK_FUNC(sub_83071EA8);
PPC_FUNC_IMPL(__imp__sub_83071EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// blt cr6,0x83071eec
	if (cr6.lt) goto loc_83071EEC;
	// cmpwi cr6,r5,12
	cr6.compare<int32_t>(ctx.r5.s32, 12, xer);
	// bgt cr6,0x83071eec
	if (cr6.gt) goto loc_83071EEC;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,7032
	ctx.r8.s64 = ctx.r10.s64 + 7032;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83071ECC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// beq cr6,0x83071ef4
	if (cr6.eq) goto loc_83071EF4;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r9,56
	cr6.compare<uint32_t>(ctx.r9.u32, 56, xer);
	// blt cr6,0x83071ecc
	if (cr6.lt) goto loc_83071ECC;
loc_83071EEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83071EF4:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// li r9,7
	ctx.r9.s64 = 7;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83071F0C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83071f0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83071F0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071F20"))) PPC_WEAK_FUNC(sub_83071F20);
PPC_FUNC_IMPL(__imp__sub_83071F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// bge cr6,0x83071fac
	if (!cr6.lt) goto loc_83071FAC;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,7192
	ctx.r11.s64 = ctx.r11.s64 + 7192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83071f68
	if (!cr6.eq) goto loc_83071F68;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x83071f88
	if (cr6.eq) goto loc_83071F88;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// b 0x83071f74
	goto loc_83071F74;
loc_83071F68:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83071f8c
	if (!cr6.eq) goto loc_83071F8C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
loc_83071F74:
	// beq cr6,0x83071f88
	if (cr6.eq) goto loc_83071F88;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// beq cr6,0x83071f88
	if (cr6.eq) goto loc_83071F88;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bne cr6,0x83071f8c
	if (!cr6.eq) goto loc_83071F8C;
loc_83071F88:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83071F8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83071fa4
	if (cr6.eq) goto loc_83071FA4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_83071FA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83071FAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071FB4"))) PPC_WEAK_FUNC(sub_83071FB4);
PPC_FUNC_IMPL(__imp__sub_83071FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83071FB8"))) PPC_WEAK_FUNC(sub_83071FB8);
PPC_FUNC_IMPL(__imp__sub_83071FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83071FC0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce778
	ctx.lr = 0x83071FC8;
	__savefpr_28(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831d11c4
	ctx.lr = 0x83071FD0;
	__savevmx_106(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// beq cr6,0x830726ec
	if (cr6.eq) goto loc_830726EC;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// beq cr6,0x830726ec
	if (cr6.eq) goto loc_830726EC;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,4816
	ctx.r11.s64 = ctx.r10.s64 + 4816;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// beq cr6,0x8307201c
	if (cr6.eq) goto loc_8307201C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x83072020
	goto loc_83072020;
loc_8307201C:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_83072020:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8307202c
	if (!cr6.lt) goto loc_8307202C;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
loc_8307202C:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r9,-31773
	ctx.r9.s64 = -2082275328;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r28,0
	ctx.r28.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7352);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x83072068
	if (cr6.eq) goto loc_83072068;
	// cmpwi cr6,r11,270
	cr6.compare<int32_t>(ctx.r11.s32, 270, xer);
	// bne cr6,0x8307206c
	if (!cr6.eq) goto loc_8307206C;
loc_83072068:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8307206C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x83072074;
	sub_825832E8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832f0
	ctx.lr = 0x83072084;
	sub_825832F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lfs f28,-11416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11416);
	ctx.f28.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lfs f29,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x83072100
	if (cr6.eq) goto loc_83072100;
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x830720d8
	if (!cr6.lt) goto loc_830720D8;
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f29
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// b 0x830720f4
	goto loc_830720F4;
loc_830720D8:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f28
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
loc_830720F4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83072100:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595718
	ctx.lr = 0x83072118;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83072134
	if (cr6.eq) goto loc_83072134;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x835ee550
	ctx.lr = 0x8307212C;
	sub_835EE550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83072138
	goto loc_83072138;
loc_83072134:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83072138:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c01de8
	ctx.lr = 0x83072140;
	sub_82C01DE8(ctx, base);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x83072150;
	sub_825832E8(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825832f0
	ctx.lr = 0x8307215C;
	sub_825832F0(ctx, base);
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// vspltisw128 v106,-1
	simde_mm_store_si128((simde__m128i*)ctx.v106.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// vupkd3d128 v126,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v126 = vTemp;
	// vor128 v12,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vsldoi128 v63,v127,v106,12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v106.u8), 4));
	// vor128 v10,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vsldoi128 v62,v106,v127,8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 8));
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vsldoi128 v61,v127,v106,8
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v106.u8), 8));
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// vsldoi128 v60,v106,v127,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 12));
	// vor128 v11,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vor128 v9,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vsldoi128 v115,v127,v106,4
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v106.u8), 12));
	// vand128 v116,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsldoi128 v0,v126,v127,12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 4));
	// vor128 v8,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vsldoi128 v125,v127,v126,4
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v126.u8), 12));
	// vand128 v7,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stb r28,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r28.u8);
	// vor128 v13,v116,v116
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v116.u8));
	// vspltw128 v114,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v114.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v113,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v113.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// vspltw128 v112,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v112.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vspltw128 v111,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v111.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vsel128 v13,v12,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel v12,v10,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vor128 v10,v115,v115
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v115.u8));
	// vspltw128 v110,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v110.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vspltw128 v124,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v124.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vsel128 v10,v11,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vspltw128 v109,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v109.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vor128 v11,v113,v113
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v113.u8));
	// vspltw128 v123,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v123.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vor128 v8,v114,v114
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v114.u8));
	// vspltw128 v108,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v108.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vor128 v59,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vspltw128 v107,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v107.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// vor128 v7,v110,v110
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v110.u8));
	// vspltw128 v122,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v122.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// vmaddcfp128 v11,v0,v11,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v6,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v124.u8));
	// vmaddcfp128 v8,v13,v8,v127
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v10,v109,v109
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v109.u8));
	// vor128 v9,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v123.u8));
	// vspltw128 v5,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// vmaddcfp128 v7,v13,v7,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vspltw128 v121,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v121.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vmaddcfp128 v6,v13,v6,v127
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vspltw128 v4,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vmaddcfp128 v10,v0,v10,v127
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v9,v0,v9,v127
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v13,v5,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp128 v11,v12,v111,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v111.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp128 v8,v125,v112,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v112.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp128 v7,v125,v108,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v108.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp128 v6,v125,v122,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v122.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp128 v10,v12,v107,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v107.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp128 v9,v12,v121,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v121.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp128 v13,v125,v4,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v120,v11,v8
	simde_mm_store_ps(ctx.v120.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vspltw128 v11,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vspltw128 v8,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vmaddcfp128 v0,v11,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// vaddfp128 v119,v10,v7
	simde_mm_store_ps(ctx.v119.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vaddfp128 v118,v9,v6
	simde_mm_store_ps(ctx.v118.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v0,v12,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v117,v0,v13
	simde_mm_store_ps(ctx.v117.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// bl 0x825832f0
	ctx.lr = 0x8307229C;
	sub_825832F0(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f30,f11,f29
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// bl 0x825832e8
	ctx.lr = 0x830722BC;
	sub_825832E8(ctx, base);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// stfs f30,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vor128 v9,v114,v114
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v114.u8));
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r5,r7,2480
	ctx.r5.s64 = ctx.r7.s64 + 2480;
	// lvlx128 v58,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lvx128 v10,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// vspltw128 v5,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vor128 v7,v113,v113
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v113.u8));
	// vor128 v6,v110,v110
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v110.u8));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vor128 v4,v109,v109
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v109.u8));
	// vmaddcfp128 v9,v119,v9,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v119.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v3,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v124.u8));
	// addi r11,r3,2496
	ctx.r11.s64 = ctx.r3.s64 + 2496;
	// vmaddcfp128 v10,v5,v10,v127
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v2,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v123.u8));
	// vor128 v12,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vmaddcfp128 v7,v120,v7,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v1,v115,v115
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v115.u8));
	// vmaddcfp128 v4,v120,v4,v127
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v55,v106,v106
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v106.u8));
	// vmaddcfp128 v6,v119,v6,v127
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v119.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// fmuls f7,f8,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vmaddcfp128 v3,v119,v3,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v119.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v2,v120,v2,v127
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vsel128 v1,v13,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor128 v56,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v8,v55,v55
	ctx.v8.u32[0] = ctx.v55.u32[0] << (ctx.v55.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v55.u32[1] << (ctx.v55.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v55.u32[2] << (ctx.v55.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v55.u32[3] << (ctx.v55.u8[12] & 0x1F);
	// vmaddfp128 v6,v117,v108,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v117.f32), simde_mm_load_ps(ctx.v108.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vor128 v57,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmaddfp128 v3,v117,v122,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v117.f32), simde_mm_load_ps(ctx.v122.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vor128 v31,v112,v112
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v112.u8));
	// vmaddfp128 v2,v118,v121,v2
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v118.f32), simde_mm_load_ps(ctx.v121.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vor128 v13,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vspltisw128 v54,3
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_set1_epi32(int(0x3)));
	// vor128 v1,v111,v111
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v111.u8));
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// vor128 v30,v107,v107
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v107.u8));
	// vspltw128 v12,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vmaddcfp128 v31,v117,v31,v9
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v117.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vspltw128 v10,v57,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x0));
	// vsel v29,v11,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vspltw128 v9,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x55));
	// vmaddcfp128 v1,v118,v1,v7
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v118.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw128 v7,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// vmaddcfp128 v30,v118,v30,v4
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v118.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vaddfp128 v53,v56,v29
	simde_mm_store_ps(ctx.v53.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v29.f32)));
	// vmaddcfp128 v7,v119,v7,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v119.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v4,v120,v4,v127
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vaddfp v11,v2,v3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vaddfp v13,v1,v31
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v31.f32)));
	// vaddfp v12,v30,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v53.f32)));
	// vor v3,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vand128 v10,v52,v54
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmaddfp128 v4,v118,v9,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v118.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// addi r9,r10,2512
	ctx.r9.s64 = ctx.r10.s64 + 2512;
	// vspltisw128 v51,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_set1_epi32(int(0x2)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vslw128 v50,v106,v106
	ctx.v50.u32[0] = ctx.v106.u32[0] << (ctx.v106.u8[0] & 0x1F);
	ctx.v50.u32[1] = ctx.v106.u32[1] << (ctx.v106.u8[4] & 0x1F);
	ctx.v50.u32[2] = ctx.v106.u32[2] << (ctx.v106.u8[8] & 0x1F);
	ctx.v50.u32[3] = ctx.v106.u32[3] << (ctx.v106.u8[12] & 0x1F);
	// vmaddcfp128 v3,v117,v3,v7
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v117.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vcsxwfp128 v7,v52,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vadduws v6,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// addi r6,r8,2528
	ctx.r6.s64 = ctx.r8.s64 + 2528;
	// vand128 v49,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r7,2544
	ctx.r11.s64 = ctx.r7.s64 + 2544;
	// vand128 v48,v10,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v47,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r10,r5,2560
	ctx.r10.s64 = ctx.r5.s64 + 2560;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vcmpequw128 v26,v49,v127
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vor128 v6,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// addi r9,r4,2592
	ctx.r9.s64 = ctx.r4.s64 + 2592;
	// vcmpequw128 v28,v48,v127
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vand128 v46,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r3,2608
	ctx.r8.s64 = ctx.r3.s64 + 2608;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vand128 v45,v47,v51
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// vaddfp v10,v4,v3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vnmsubfp v24,v7,v9,v5
	simde_mm_store_ps(ctx.v24.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v5,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r7,2576
	ctx.r4.s64 = ctx.r7.s64 + 2576;
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r5,2624
	ctx.r3.s64 = ctx.r5.s64 + 2624;
	// vcmpequw128 v25,v46,v127
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vsldoi128 v3,v106,v127,12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 4));
	// vcmpequw128 v27,v45,v127
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// vor128 v4,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lvx128 v30,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vnmsubfp v9,v7,v0,v24
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v24.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v0,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmaddcfp128 v0,v9,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v7,v5,v0,v2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vor v2,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmaddfp v5,v1,v0,v31
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vor128 v31,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v124.u8));
	// vmaddcfp128 v2,v0,v2,v127
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v7,v7,v0,v30
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vspltw128 v30,v125,1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), 0xAA));
	// vmaddfp v5,v5,v0,v29
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vmaddcfp128 v7,v0,v7,v126
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v126.f32)));
	// vmaddfp v0,v5,v2,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vor128 v44,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor128 v9,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vor128 v5,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vsel v7,v9,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vsel v2,v5,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor128 v43,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vxor v5,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vxor128 v9,v8,v43
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v0,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vsel v2,v5,v2,v27
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8))));
	// vsel v8,v9,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor v9,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vor v0,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vspltw128 v2,v125,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), 0xFF));
	// vxor128 v7,v8,v50
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vsel v5,v4,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vspltw128 v4,v125,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), 0x0));
	// vor v9,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsel v8,v6,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// vspltw128 v6,v125,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), 0x55));
	// vor128 v7,v116,v116
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v116.u8));
	// vsel128 v7,v5,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vmaddcfp128 v30,v12,v30,v127
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v9,v116,v116
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v116.u8));
	// vmaddcfp128 v31,v12,v31,v127
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor v3,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vor128 v29,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v123.u8));
	// vor128 v42,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsel128 v9,v8,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmaddcfp128 v3,v13,v3,v127
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v1,v121,v121
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v121.u8));
	// vmaddcfp128 v29,v13,v29,v127
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vspltw128 v8,v42,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xAA));
	// vor128 v41,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vspltw128 v5,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// vspltw128 v9,v42,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0x55));
	// vmaddfp v2,v10,v4,v30
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vor v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vspltw128 v7,v41,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xAA));
	// vmaddcfp128 v5,v13,v5,v127
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vspltw128 v0,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xFF));
	// vmaddfp128 v31,v10,v122,v31
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v122.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vspltw128 v8,v42,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0x0));
	// vmaddcfp128 v4,v12,v4,v127
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v3,v11,v6,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vor v6,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v7,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v0,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x55));
	// vmaddcfp128 v1,v11,v1,v29
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vmaddcfp128 v6,v12,v6,v127
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vspltw128 v12,v41,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x0));
	// vmaddcfp128 v7,v13,v7,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v9,v11,v9,v5
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v8,v10,v8,v4
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vaddfp128 v118,v3,v2
	simde_mm_store_ps(ctx.v118.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vaddfp128 v120,v1,v31
	simde_mm_store_ps(ctx.v120.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v13,v10,v12,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v0,v11,v0,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vaddfp128 v125,v9,v8
	simde_mm_store_ps(ctx.v125.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vaddfp128 v119,v0,v13
	simde_mm_store_ps(ctx.v119.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// bl 0x825832f0
	ctx.lr = 0x830725A8;
	sub_825832F0(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f6,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f30,f4,f28
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// bl 0x825832e8
	ctx.lr = 0x830725C8;
	sub_825832E8(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// vor128 v9,v114,v114
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v114.u8));
	// vor128 v10,v113,v113
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v113.u8));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f3,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// vor128 v11,v110,v110
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v110.u8));
	// vor128 v12,v109,v109
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v109.u8));
	// vmaddcfp128 v9,v119,v9,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v119.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v13,v124,v124
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v124.u8));
	// vmaddcfp128 v10,v125,v10,v127
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v0,v123,v123
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v123.u8));
	// vmaddcfp128 v11,v119,v11,v127
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v119.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// frsp f1,f2
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vmaddcfp128 v12,v125,v12,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// vmaddcfp128 v13,v119,v13,v127
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v119.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// vmaddcfp128 v0,v125,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stfs f30,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vmaddfp128 v9,v118,v112,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v118.f32), simde_mm_load_ps(ctx.v112.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vmaddfp128 v11,v118,v108,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v118.f32), simde_mm_load_ps(ctx.v108.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp128 v10,v120,v111,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v111.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp128 v12,v120,v107,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v107.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp128 v13,v118,v122,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v118.f32), simde_mm_load_ps(ctx.v122.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v0,v120,v121,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v121.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v40,v0,v13
	simde_mm_store_ps(ctx.v40.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v13,v115,v115
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v115.u8));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v39,v12,v11
	simde_mm_store_ps(ctx.v39.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vaddfp128 v38,v10,v9
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// vsel128 v13,v0,v126,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v126.u8))));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor128 v37,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vspltw128 v11,v37,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xAA));
	// stvx128 v40,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xFF));
	// stvx128 v39,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v13,v37,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0x0));
	// stvx128 v38,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v0,v37,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0x55));
	// vmaddcfp128 v11,v119,v11,v127
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v119.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v12,v125,v12,v127
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v13,v118,v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v118.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v0,v120,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vaddfp128 v36,v0,v13
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v36,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x835ed890
	ctx.lr = 0x830726A8;
	sub_835ED890(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x835eb7f0
	ctx.lr = 0x830726B0;
	sub_835EB7F0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x830726C0;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82572fa0
	ctx.lr = 0x830726CC;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x830726D8;
	sub_82572FA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b4f268
	ctx.lr = 0x830726E4;
	sub_82B4F268(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830726f0
	goto loc_830726F0;
loc_830726EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830726F0:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831d145c
	ctx.lr = 0x830726FC;
	__restvmx_106(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7c4
	ctx.lr = 0x83072704;
	__restfpr_28(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072708"))) PPC_WEAK_FUNC(sub_83072708);
PPC_FUNC_IMPL(__imp__sub_83072708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83072710;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// addi r11,r11,7192
	ctx.r11.s64 = ctx.r11.s64 + 7192;
	// bge cr6,0x83072758
	if (!cr6.lt) goto loc_83072758;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r27,r10,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_83072758:
	// clrlwi r20,r18,24
	ctx.r20.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x830727bc
	if (!cr6.eq) goto loc_830727BC;
	// cmplwi cr6,r24,9
	cr6.compare<uint32_t>(ctx.r24.u32, 9, xer);
	// bge cr6,0x830727d8
	if (!cr6.lt) goto loc_830727D8;
	// rlwinm r10,r24,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r26,r10,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// beq cr6,0x8307279c
	if (cr6.eq) goto loc_8307279C;
	// cmpwi cr6,r24,7
	cr6.compare<int32_t>(ctx.r24.s32, 7, xer);
	// beq cr6,0x8307279c
	if (cr6.eq) goto loc_8307279C;
	// cmpwi cr6,r24,8
	cr6.compare<int32_t>(ctx.r24.s32, 8, xer);
	// bne cr6,0x830727a0
	if (!cr6.eq) goto loc_830727A0;
loc_8307279C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830727A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830727d8
	if (cr6.eq) goto loc_830727D8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x830727d8
	goto loc_830727D8;
loc_830727BC:
	// cmplwi cr6,r24,9
	cr6.compare<uint32_t>(ctx.r24.u32, 9, xer);
	// bge cr6,0x830727d8
	if (!cr6.lt) goto loc_830727D8;
	// rlwinm r10,r24,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r26,r10,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_830727D8:
	// li r21,10
	ctx.r21.s64 = 10;
	// mullw r11,r26,r30
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r30.s32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x830727F8;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x83072820
	if (!cr6.eq) goto loc_83072820;
	// std r22,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r22.u64);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83072814;
	sub_82572FA0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83072820:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8307282C;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x83072850
	if (!cr6.eq) goto loc_83072850;
	// std r22,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r22.u64);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83072844;
	sub_82572FA0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83072850:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// lis r23,4
	ctx.r23.s64 = 262144;
loc_83072864:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_8307286C:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83072878:
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// bgt cr6,0x830728d0
	if (cr6.gt) goto loc_830728D0;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x830728d0
	if (!cr6.lt) goto loc_830728D0;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bgt cr6,0x830728d0
	if (cr6.gt) goto loc_830728D0;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x830728d0
	if (!cr6.lt) goto loc_830728D0;
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x830728d0
	if (!cr6.gt) goto loc_830728D0;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bge cr6,0x830728d0
	if (!cr6.lt) goto loc_830728D0;
	// lbzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
loc_830728D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x83072878
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83072878;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bgt cr6,0x830728f0
	if (cr6.gt) goto loc_830728F0;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x830728f0
	if (!cr6.lt) goto loc_830728F0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_830728F0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,512
	cr6.compare<uint32_t>(ctx.r8.u32, 512, xer);
	// blt cr6,0x8307286c
	if (cr6.lt) goto loc_8307286C;
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// bgt cr6,0x83072914
	if (cr6.gt) goto loc_83072914;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x83072914
	if (!cr6.lt) goto loc_83072914;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
loc_83072914:
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r6,r23
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r23.u32, xer);
	// blt cr6,0x83072864
	if (cr6.lt) goto loc_83072864;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x83072938;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83072974
	if (cr6.eq) goto loc_83072974;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x835ebb28
	ctx.lr = 0x8307296C;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83072978
	goto loc_83072978;
loc_83072974:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_83072978:
	// std r22,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r22.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x83072984;
	sub_82572FA0(ctx, base);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x83072994;
	sub_825952B8(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x830729c4
	if (cr6.eq) goto loc_830729C4;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// beq cr6,0x830729bc
	if (cr6.eq) goto loc_830729BC;
	// cmpwi cr6,r24,4
	cr6.compare<int32_t>(ctx.r24.s32, 4, xer);
	// beq cr6,0x830729bc
	if (cr6.eq) goto loc_830729BC;
	// cmpwi cr6,r24,7
	cr6.compare<int32_t>(ctx.r24.s32, 7, xer);
	// beq cr6,0x830729bc
	if (cr6.eq) goto loc_830729BC;
	// cmpwi cr6,r24,8
	cr6.compare<int32_t>(ctx.r24.s32, 8, xer);
	// bne cr6,0x830729f4
	if (!cr6.eq) goto loc_830729F4;
loc_830729BC:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x830729e0
	goto loc_830729E0;
loc_830729C4:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// beq cr6,0x830729dc
	if (cr6.eq) goto loc_830729DC;
	// cmpwi cr6,r24,7
	cr6.compare<int32_t>(ctx.r24.s32, 7, xer);
	// beq cr6,0x830729dc
	if (cr6.eq) goto loc_830729DC;
	// cmpwi cr6,r24,8
	cr6.compare<int32_t>(ctx.r24.s32, 8, xer);
	// bne cr6,0x830729f4
	if (!cr6.eq) goto loc_830729F4;
loc_830729DC:
	// li r6,2
	ctx.r6.s64 = 2;
loc_830729E0:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83071fb8
	ctx.lr = 0x830729F4;
	sub_83071FB8(ctx, base);
loc_830729F4:
	// std r22,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r22.u64);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82572fa0
	ctx.lr = 0x83072A04;
	sub_82572FA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83072A10;
	sub_82572FA0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072A1C"))) PPC_WEAK_FUNC(sub_83072A1C);
PPC_FUNC_IMPL(__imp__sub_83072A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83072A20"))) PPC_WEAK_FUNC(sub_83072A20);
PPC_FUNC_IMPL(__imp__sub_83072A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83072A28;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x825832d8
	ctx.lr = 0x83072A40;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83072c14
	if (!cr6.eq) goto loc_83072C14;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83072c14
	if (cr6.eq) goto loc_83072C14;
	// bl 0x82dab6d0
	ctx.lr = 0x83072A58;
	sub_82DAB6D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83072c14
	if (cr6.eq) goto loc_83072C14;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x83072a80
	if (cr6.eq) goto loc_83072A80;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// beq cr6,0x83072a80
	if (cr6.eq) goto loc_83072A80;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// beq cr6,0x83072a80
	if (cr6.eq) goto loc_83072A80;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bne cr6,0x83072a98
	if (!cr6.eq) goto loc_83072A98;
loc_83072A80:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83071fb8
	ctx.lr = 0x83072A98;
	sub_83071FB8(ctx, base);
loc_83072A98:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// bl 0x825832e8
	ctx.lr = 0x83072AB0;
	sub_825832E8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832f0
	ctx.lr = 0x83072AC0;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(ctx.r31.u32, 9, xer);
	// bge cr6,0x83072b08
	if (!cr6.lt) goto loc_83072B08;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,7192
	ctx.r11.s64 = ctx.r11.s64 + 7192;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lwzx r22,r10,r11
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r20,r10,r9
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r21,r10,r8
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r19,r10,r7
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r20,r15
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r15.u32, xer);
	// ble cr6,0x83072afc
	if (!cr6.gt) goto loc_83072AFC;
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
loc_83072AFC:
	// cmplw cr6,r19,r3
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r3.u32, xer);
	// ble cr6,0x83072b08
	if (!cr6.gt) goto loc_83072B08;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_83072B08:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x83072c14
	if (cr6.eq) goto loc_83072C14;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82dab6d0
	ctx.lr = 0x83072B18;
	sub_82DAB6D0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r16,16
	ctx.r16.s64 = 1048576;
	// lis r14,4
	ctx.r14.s64 = 262144;
loc_83072B30:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83072B38:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83072B3C:
	// cmplw cr6,r21,r23
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r23.u32, xer);
	// bgt cr6,0x83072b9c
	if (cr6.gt) goto loc_83072B9C;
	// add r11,r19,r21
	ctx.r11.u64 = ctx.r19.u64 + ctx.r21.u64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// bge cr6,0x83072b9c
	if (!cr6.lt) goto loc_83072B9C;
	// cmplw cr6,r22,r28
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, xer);
	// bgt cr6,0x83072b9c
	if (cr6.gt) goto loc_83072B9C;
	// add r11,r20,r22
	ctx.r11.u64 = ctx.r20.u64 + ctx.r22.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x83072b9c
	if (!cr6.lt) goto loc_83072B9C;
	// add r11,r24,r27
	ctx.r11.u64 = ctx.r24.u64 + ctx.r27.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r10,r26,r28
	ctx.r10.u64 = ctx.r26.u64 + ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x83815cb0
	ctx.lr = 0x83072B84;
	sub_83815CB0(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// ble cr6,0x83072b9c
	if (!cr6.gt) goto loc_83072B9C;
	// cmplw cr6,r30,r16
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, xer);
	// bge cr6,0x83072b9c
	if (!cr6.lt) goto loc_83072B9C;
	// lbzx r11,r31,r18
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r18.u32);
	// stbx r11,r30,r17
	PPC_STORE_U8(ctx.r30.u32 + ctx.r17.u32, ctx.r11.u8);
loc_83072B9C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x83072b3c
	if (cr6.lt) goto loc_83072B3C;
	// cmplw cr6,r22,r28
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r28.u32, xer);
	// bgt cr6,0x83072bc0
	if (cr6.gt) goto loc_83072BC0;
	// add r11,r20,r22
	ctx.r11.u64 = ctx.r20.u64 + ctx.r22.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x83072bc0
	if (!cr6.lt) goto loc_83072BC0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_83072BC0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,512
	cr6.compare<uint32_t>(ctx.r28.u32, 512, xer);
	// blt cr6,0x83072b38
	if (cr6.lt) goto loc_83072B38;
	// cmplw cr6,r21,r23
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r23.u32, xer);
	// bgt cr6,0x83072be4
	if (cr6.gt) goto loc_83072BE4;
	// add r11,r19,r21
	ctx.r11.u64 = ctx.r19.u64 + ctx.r21.u64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// bge cr6,0x83072be4
	if (!cr6.lt) goto loc_83072BE4;
	// add r24,r24,r15
	ctx.r24.u64 = ctx.r24.u64 + ctx.r15.u64;
loc_83072BE4:
	// addi r26,r26,512
	ctx.r26.s64 = ctx.r26.s64 + 512;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r26,r14
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r14.u32, xer);
	// blt cr6,0x83072b30
	if (cr6.lt) goto loc_83072B30;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stbx r11,r17,r16
	PPC_STORE_U8(ctx.r17.u32 + ctx.r16.u32, ctx.r11.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83072C08;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83072C14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83072C20;
	sub_82572FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072C2C"))) PPC_WEAK_FUNC(sub_83072C2C);
PPC_FUNC_IMPL(__imp__sub_83072C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83072C30"))) PPC_WEAK_FUNC(sub_83072C30);
PPC_FUNC_IMPL(__imp__sub_83072C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,15632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15632);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83072C3C"))) PPC_WEAK_FUNC(sub_83072C3C);
PPC_FUNC_IMPL(__imp__sub_83072C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83072C40"))) PPC_WEAK_FUNC(sub_83072C40);
PPC_FUNC_IMPL(__imp__sub_83072C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83072C48;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83072C54;
	sub_831156E8(ctx, base);
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r24,712
	ctx.r4.s64 = ctx.r24.s64 + 712;
	// addis r3,r25,238
	ctx.r3.s64 = ctx.r25.s64 + 15597568;
	// addi r3,r3,-3772
	ctx.r3.s64 = ctx.r3.s64 + -3772;
	// bl 0x82ace470
	ctx.lr = 0x83072C68;
	sub_82ACE470(ctx, base);
	// addis r23,r25,238
	ctx.r23.s64 = ctx.r25.s64 + 15597568;
	// addis r22,r25,238
	ctx.r22.s64 = ctx.r25.s64 + 15597568;
	// addi r23,r23,5340
	ctx.r23.s64 = ctx.r23.s64 + 5340;
	// addi r22,r22,-1828
	ctx.r22.s64 = ctx.r22.s64 + -1828;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r24,9192
	ctx.r28.s64 = ctx.r24.s64 + 9192;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r29,r24,2024
	ctx.r29.s64 = ctx.r24.s64 + 2024;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_83072C8C:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bge cr6,0x83072c9c
	if (!cr6.lt) goto loc_83072C9C;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83072C9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x83072CA8;
	sub_82B1E0E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x83072CB8;
	sub_83121088(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x83072CC8;
	sub_83121088(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x83072CD8;
	sub_83121088(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// bge cr6,0x83072cf4
	if (!cr6.lt) goto loc_83072CF4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83072CF4:
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83072D00;
	sub_831CE980(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,224
	ctx.r27.s64 = ctx.r27.s64 + 224;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// addi r26,r26,72
	ctx.r26.s64 = ctx.r26.s64 + 72;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x83072c8c
	if (cr6.lt) goto loc_83072C8C;
	// addis r3,r25,238
	ctx.r3.s64 = ctx.r25.s64 + 15597568;
	// addi r4,r24,80
	ctx.r4.s64 = ctx.r24.s64 + 80;
	// addi r3,r3,-2460
	ctx.r3.s64 = ctx.r3.s64 + -2460;
	// bl 0x82d8a4d8
	ctx.lr = 0x83072D2C;
	sub_82D8A4D8(ctx, base);
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,7644
	ctx.r9.u64 = ctx.r11.u64 | 7644;
	// stbx r10,r25,r9
	PPC_STORE_U8(ctx.r25.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072D44"))) PPC_WEAK_FUNC(sub_83072D44);
PPC_FUNC_IMPL(__imp__sub_83072D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83072D48"))) PPC_WEAK_FUNC(sub_83072D48);
PPC_FUNC_IMPL(__imp__sub_83072D48) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r11,15632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83072d9c
	if (cr6.eq) goto loc_83072D9C;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83072D7C;
	sub_82595150(ctx, base);
	// lwz r3,15632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83072d8c
	if (cr6.eq) goto loc_83072D8C;
	// bl 0x82416268
	ctx.lr = 0x83072D8C;
	sub_82416268(ctx, base);
loc_83072D8C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83072D94;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15632, ctx.r11.u32);
loc_83072D9C:
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

__attribute__((alias("__imp__sub_83072DB0"))) PPC_WEAK_FUNC(sub_83072DB0);
PPC_FUNC_IMPL(__imp__sub_83072DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83072DB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83072DC4;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x83072DCC;
	sub_831156E8(ctx, base);
	// lwz r29,52(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x831156e8
	ctx.lr = 0x83072DD4;
	sub_831156E8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r31,r11,5056
	ctx.r31.s64 = ctx.r11.s64 + 5056;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r23,60(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x831178a0
	ctx.lr = 0x83072E00;
	sub_831178A0(ctx, base);
	// addis r3,r29,5
	ctx.r3.s64 = ctx.r29.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x83072E0C;
	sub_83123778(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// beq cr6,0x83072e64
	if (cr6.eq) goto loc_83072E64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311c338
	ctx.lr = 0x83072E24;
	sub_8311C338(ctx, base);
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83072e64
	if (!cr6.eq) goto loc_83072E64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x83072E48;
	sub_831178A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r9,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83072E64:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311bdf0
	ctx.lr = 0x83072E70;
	sub_8311BDF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83072fb4
	if (cr6.eq) goto loc_83072FB4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,712
	ctx.r3.s64 = ctx.r30.s64 + 712;
	// bl 0x82ace470
	ctx.lr = 0x83072E88;
	sub_82ACE470(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,504(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x83072E94;
	sub_8311BE78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83072fb4
	if (cr6.eq) goto loc_83072FB4;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82d8a4d8
	ctx.lr = 0x83072EA8;
	sub_82D8A4D8(ctx, base);
	// lhz r11,808(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 808);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83072fb4
	if (cr6.eq) goto loc_83072FB4;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r26,r30,9192
	ctx.r26.s64 = ctx.r30.s64 + 9192;
	// addi r30,r30,2024
	ctx.r30.s64 = ctx.r30.s64 + 2024;
	// addi r28,r27,248
	ctx.r28.s64 = ctx.r27.s64 + 248;
	// addi r25,r10,7472
	ctx.r25.s64 = ctx.r10.s64 + 7472;
loc_83072ED0:
	// ld r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bge cr6,0x83072ee8
	if (!cr6.lt) goto loc_83072EE8;
	// ld r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
loc_83072EE8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83072f04
	if (!cr6.eq) goto loc_83072F04;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83072f30
	goto loc_83072F30;
loc_83072F04:
	// lhz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83072f28
	if (!cr6.eq) goto loc_83072F28;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83072f2c
	if (cr6.eq) goto loc_83072F2C;
loc_83072F28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83072F2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83072F30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83072f9c
	if (!cr6.eq) goto loc_83072F9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bd68
	ctx.lr = 0x83072F48;
	sub_8311BD68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83072f9c
	if (cr6.eq) goto loc_83072F9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x83072F5C;
	sub_82B1E0E8(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83072F6C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83072f6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83072F6C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8311d1d0
	ctx.lr = 0x83072F84;
	sub_8311D1D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x83072F94;
	sub_831CE980(ctx, base);
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// addi r26,r26,72
	ctx.r26.s64 = ctx.r26.s64 + 72;
loc_83072F9C:
	// lhz r11,808(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 808);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83072ed0
	if (cr6.lt) goto loc_83072ED0;
loc_83072FB4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072FBC"))) PPC_WEAK_FUNC(sub_83072FBC);
PPC_FUNC_IMPL(__imp__sub_83072FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83072FC0"))) PPC_WEAK_FUNC(sub_83072FC0);
PPC_FUNC_IMPL(__imp__sub_83072FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83072FC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,80
	ctx.r27.s64 = ctx.r3.s64 + 80;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, ctx.r11.u16);
	// addi r29,r27,104
	ctx.r29.s64 = ctx.r27.s64 + 104;
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// li r30,2
	ctx.r30.s64 = 2;
loc_83072FEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x83072FF4;
	sub_82AC0AF0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x83072fec
	if (!cr0.lt) goto loc_83072FEC;
	// addi r26,r31,712
	ctx.r26.s64 = ctx.r31.s64 + 712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ae4800
	ctx.lr = 0x8307300C;
	sub_82AE4800(ctx, base);
	// addi r28,r31,2024
	ctx.r28.s64 = ctx.r31.s64 + 2024;
	// li r30,31
	ctx.r30.s64 = 31;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83073018:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b00d00
	ctx.lr = 0x83073020;
	sub_82B00D00(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// bge 0x83073018
	if (!cr0.lt) goto loc_83073018;
	// addi r30,r31,9192
	ctx.r30.s64 = ctx.r31.s64 + 9192;
	// li r5,2304
	ctx.r5.s64 = 2304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83073040;
	sub_831CDCF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d8cb50
	ctx.lr = 0x83073048;
	sub_82D8CB50(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e59148
	ctx.lr = 0x83073050;
	sub_82E59148(ctx, base);
	// li r29,32
	ctx.r29.s64 = 32;
loc_83073054:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b00b98
	ctx.lr = 0x8307305C;
	sub_82B00B98(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8307306C;
	sub_831CDCF0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,224
	ctx.r28.s64 = ctx.r28.s64 + 224;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// bne 0x83073054
	if (!cr0.eq) goto loc_83073054;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// sth r11,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r11.u16);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830730C8"))) PPC_WEAK_FUNC(sub_830730C8);
PPC_FUNC_IMPL(__imp__sub_830730C8) {
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
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,11496
	ctx.r4.s64 = 11496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830730EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83073110
	if (cr6.eq) goto loc_83073110;
	// bl 0x83072fc0
	ctx.lr = 0x830730F8;
	sub_83072FC0(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// stw r3,15632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15632, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83073110:
	// lis r10,-31754
	ctx.r10.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15632, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307312C"))) PPC_WEAK_FUNC(sub_8307312C);
PPC_FUNC_IMPL(__imp__sub_8307312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83073130"))) PPC_WEAK_FUNC(sub_83073130);
PPC_FUNC_IMPL(__imp__sub_83073130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83073138;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r31,851
	ctx.r31.s64 = 851;
loc_83073150:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f77ce0
	ctx.lr = 0x8307315C;
	sub_82F77CE0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,280
	ctx.r29.s64 = ctx.r29.s64 + 280;
	// bne 0x83073150
	if (!cr0.eq) goto loc_83073150;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// addis r26,r24,4
	ctx.r26.s64 = ctx.r24.s64 + 262144;
	// ori r23,r11,17016
	ctx.r23.u64 = ctx.r11.u64 | 17016;
	// addis r31,r24,4
	ctx.r31.s64 = ctx.r24.s64 + 262144;
	// addi r26,r26,-21460
	ctx.r26.s64 = ctx.r26.s64 + -21460;
	// addi r31,r31,11876
	ctx.r31.s64 = ctx.r31.s64 + 11876;
	// add r29,r24,r23
	ctx.r29.u64 = ctx.r24.u64 + ctx.r23.u64;
	// li r27,70
	ctx.r27.s64 = 70;
	// lis r25,-31754
	ctx.r25.s64 = -2081030144;
	// lis r28,-31773
	ctx.r28.s64 = -2082275328;
loc_83073190:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04f50
	ctx.lr = 0x83073198;
	sub_82F04F50(ctx, base);
	// lwz r11,7652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	// lwz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r26,r26,476
	ctx.r26.s64 = ctx.r26.s64 + 476;
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r10.u32);
	// lwz r11,7652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// stw r9,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r9.u32);
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// lwz r11,16032(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16032);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// lwz r11,7652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	// lwz r8,1384(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r8.u32);
	// lwz r11,7652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r30.u32);
	// stw r7,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r7.u32);
	// stb r30,1400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1400, ctx.r30.u8);
	// stw r30,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r30.u32);
	// stb r30,1401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1401, ctx.r30.u8);
	// sth r30,1402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1402, ctx.r30.u16);
	// lwz r11,16032(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16032);
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lwz r11,7652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// lwz r11,7652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r5.u32);
	// lwz r11,7652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r4.u32);
	// lwz r11,7652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	// rlwimi r3,r11,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stwu r30,24(r29)
	ea = 24 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r29.u32 = ea;
	// bne 0x83073190
	if (!cr0.eq) goto loc_83073190;
	// li r10,10
	ctx.r10.s64 = 10;
	// addis r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 262144;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,18700
	ctx.r11.s64 = ctx.r11.s64 + 18700;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83073280:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83073280
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83073280;
	// addis r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 262144;
	// li r5,2400
	ctx.r5.s64 = 2400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-23864
	ctx.r3.s64 = ctx.r3.s64 + -23864;
	// bl 0x831cdcf0
	ctx.lr = 0x8307329C;
	sub_831CDCF0(ctx, base);
	// addis r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 262144;
	// addi r3,r3,14664
	ctx.r3.s64 = ctx.r3.s64 + 14664;
	// bl 0x82f62280
	ctx.lr = 0x830732A8;
	sub_82F62280(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stwx r30,r24,r23
	PPC_STORE_U32(ctx.r24.u32 + ctx.r23.u32, ctx.r30.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r11,44072
	ctx.r8.u64 = ctx.r11.u64 | 44072;
	// ori r7,r10,14660
	ctx.r7.u64 = ctx.r10.u64 | 14660;
	// ori r6,r9,17012
	ctx.r6.u64 = ctx.r9.u64 | 17012;
	// stwx r30,r24,r8
	PPC_STORE_U32(ctx.r24.u32 + ctx.r8.u32, ctx.r30.u32);
	// stbx r30,r24,r7
	PPC_STORE_U8(ctx.r24.u32 + ctx.r7.u32, ctx.r30.u8);
	// stbx r30,r24,r6
	PPC_STORE_U8(ctx.r24.u32 + ctx.r6.u32, ctx.r30.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830732D8"))) PPC_WEAK_FUNC(sub_830732D8);
PPC_FUNC_IMPL(__imp__sub_830732D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830732E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,25001
	ctx.r10.s64 = 25001;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830732F4:
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830732f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830732F4;
	// li r10,25001
	ctx.r10.s64 = 25001;
	// addis r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 131072;
	// lis r8,8738
	ctx.r8.s64 = 572653568;
	// addi r11,r11,-31069
	ctx.r11.s64 = ctx.r11.s64 + -31069;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,8738
	ctx.r10.s64 = 572653568;
	// ori r9,r10,8704
	ctx.r9.u64 = ctx.r10.u64 | 8704;
	// ori r10,r8,8738
	ctx.r10.u64 = ctx.r8.u64 | 8738;
loc_83073328:
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stw r10,1(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1, ctx.r10.u32);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r6,5(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5, ctx.r6.u32);
	// stbu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83073328
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83073328;
	// addis r27,r28,5
	ctx.r27.s64 = ctx.r28.s64 + 327680;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r27,r27,-27668
	ctx.r27.s64 = ctx.r27.s64 + -27668;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83073354:
	// cmplwi cr6,r30,50
	cr6.compare<uint32_t>(ctx.r30.u32, 50, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge cr6,0x83073364
	if (!cr6.lt) goto loc_83073364;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83073364:
	// bl 0x82f62b40
	ctx.lr = 0x83073368;
	sub_82F62B40(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,516
	ctx.r29.s64 = ctx.r29.s64 + 516;
	// cmplwi cr6,r30,50
	cr6.compare<uint32_t>(ctx.r30.u32, 50, xer);
	// blt cr6,0x83073354
	if (cr6.lt) goto loc_83073354;
	// addis r8,r28,5
	ctx.r8.s64 = ctx.r28.s64 + 327680;
	// li r10,100
	ctx.r10.s64 = 100;
	// addi r8,r8,-1868
	ctx.r8.s64 = ctx.r8.s64 + -1868;
	// lis r30,-31773
	ctx.r30.s64 = -2082275328;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r29,98
	ctx.r29.s64 = 98;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
loc_8307339C:
	// ld r10,7604(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 7604);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stwu r31,28(r11)
	ea = 28 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8307339c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8307339C;
	// stw r31,2804(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2804, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f62c00
	ctx.lr = 0x830733C8;
	sub_82F62C00(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addis r11,r28,5
	ctx.r11.s64 = ctx.r28.s64 + 327680;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r11,r11,10556
	ctx.r11.s64 = ctx.r11.s64 + 10556;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830733E0:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x830733e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830733E0;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// stb r31,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r31.u8);
	// addis r9,r28,5
	ctx.r9.s64 = ctx.r28.s64 + 327680;
	// stb r31,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r31.u8);
	// ori r8,r10,10544
	ctx.r8.u64 = ctx.r10.u64 | 10544;
	// ld r11,7604(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 7604);
	// addi r9,r9,10552
	ctx.r9.s64 = ctx.r9.s64 + 10552;
	// lis r7,5
	ctx.r7.s64 = 327680;
	// ori r6,r7,10540
	ctx.r6.u64 = ctx.r7.u64 | 10540;
	// stdx r11,r28,r8
	PPC_STORE_U64(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u64);
	// sth r31,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r31.u16);
	// sth r31,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r31.u16);
	// stwx r29,r28,r6
	PPC_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83073424"))) PPC_WEAK_FUNC(sub_83073424);
PPC_FUNC_IMPL(__imp__sub_83073424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83073428"))) PPC_WEAK_FUNC(sub_83073428);
PPC_FUNC_IMPL(__imp__sub_83073428) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lhz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lhz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// sth r5,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r5.u16);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lhz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// sth r9,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r9.u16);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// lhz r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 48);
	// sth r6,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r6.u16);
	// lwz r5,52(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lhz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 60);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// lwz r9,64(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// lwz r8,68(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// lhz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// sth r7,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r7.u16);
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// lhz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 84);
	// sth r11,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r11.u16);
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// lwz r9,92(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// lhz r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 96);
	// sth r8,96(r3)
	PPC_STORE_U16(ctx.r3.u32 + 96, ctx.r8.u16);
	// lwz r7,100(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r7,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// lwz r6,104(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r6,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// lhz r5,108(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 108);
	// sth r5,108(r3)
	PPC_STORE_U16(ctx.r3.u32 + 108, ctx.r5.u16);
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lhz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 120);
	// sth r9,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r9.u16);
	// lwz r8,124(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r8,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r8.u32);
	// lwz r7,128(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r7,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r7.u32);
	// lhz r6,132(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 132);
	// sth r6,132(r3)
	PPC_STORE_U16(ctx.r3.u32 + 132, ctx.r6.u16);
	// lwz r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r5,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lhz r10,144(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 144);
	// sth r10,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r10.u16);
	// lwz r9,148(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// lwz r8,152(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r8,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// lhz r7,156(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 156);
	// sth r7,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r7.u16);
	// lwz r6,160(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r6,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r6.u32);
	// lwz r5,164(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r5,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r5.u32);
	// lhz r11,168(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 168);
	// sth r11,168(r3)
	PPC_STORE_U16(ctx.r3.u32 + 168, ctx.r11.u16);
	// lwz r10,172(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// lwz r9,176(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// lhz r8,180(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 180);
	// sth r8,180(r3)
	PPC_STORE_U16(ctx.r3.u32 + 180, ctx.r8.u16);
	// lwz r7,184(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r7,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r7.u32);
	// lwz r6,188(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r6,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r6.u32);
	// lhz r5,192(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 192);
	// sth r5,192(r3)
	PPC_STORE_U16(ctx.r3.u32 + 192, ctx.r5.u16);
	// lwz r11,196(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// lwz r10,200(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// lhz r9,204(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 204);
	// sth r9,204(r3)
	PPC_STORE_U16(ctx.r3.u32 + 204, ctx.r9.u16);
	// lwz r8,208(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// stw r8,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// lwz r7,212(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// stw r7,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r7.u32);
	// lhz r6,216(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 216);
	// sth r6,216(r3)
	PPC_STORE_U16(ctx.r3.u32 + 216, ctx.r6.u16);
	// lwz r5,220(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// stw r5,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r5.u32);
	// lwz r11,224(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// lhz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 228);
	// sth r10,228(r3)
	PPC_STORE_U16(ctx.r3.u32 + 228, ctx.r10.u16);
	// lwz r9,232(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// stw r9,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r9.u32);
	// lwz r8,236(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// stw r8,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r8.u32);
	// lhz r7,240(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 240);
	// sth r7,240(r3)
	PPC_STORE_U16(ctx.r3.u32 + 240, ctx.r7.u16);
	// lwz r6,244(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r6,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r6.u32);
	// lwz r5,248(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// stw r5,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r5.u32);
	// lhz r11,252(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 252);
	// sth r11,252(r3)
	PPC_STORE_U16(ctx.r3.u32 + 252, ctx.r11.u16);
	// lwz r10,256(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// stw r10,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r10.u32);
	// lwz r9,260(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r9,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r9.u32);
	// lhz r8,264(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 264);
	// sth r8,264(r3)
	PPC_STORE_U16(ctx.r3.u32 + 264, ctx.r8.u16);
	// lwz r7,268(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// stw r7,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r7.u32);
	// lwz r6,272(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// stw r6,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r6.u32);
	// lhz r5,276(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 276);
	// sth r5,276(r3)
	PPC_STORE_U16(ctx.r3.u32 + 276, ctx.r5.u16);
	// lwz r11,280(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// lwz r10,284(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	// stw r10,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r10.u32);
	// lhz r9,288(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 288);
	// sth r9,288(r3)
	PPC_STORE_U16(ctx.r3.u32 + 288, ctx.r9.u16);
	// lwz r8,292(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	// stw r8,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r8.u32);
	// lwz r7,296(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// stw r7,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r7.u32);
	// lhz r6,300(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 300);
	// sth r6,300(r3)
	PPC_STORE_U16(ctx.r3.u32 + 300, ctx.r6.u16);
	// lwz r5,304(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	// stw r5,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r5.u32);
	// lwz r4,308(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	// stw r4,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307369C"))) PPC_WEAK_FUNC(sub_8307369C);
PPC_FUNC_IMPL(__imp__sub_8307369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830736A0"))) PPC_WEAK_FUNC(sub_830736A0);
PPC_FUNC_IMPL(__imp__sub_830736A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_830736BC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r4,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r4,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwzu r8,24(r10)
	ea = 24 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x830736bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830736BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073788"))) PPC_WEAK_FUNC(sub_83073788);
PPC_FUNC_IMPL(__imp__sub_83073788) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lbz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// lbz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// lbz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// stb r9,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r9.u8);
	// lwz r8,56(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,64(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// lwz r3,64(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r3.u32);
	// lbz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 68);
	// stb r9,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r9.u8);
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// lwz r7,76(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r7,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// lwz r3,80(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// lbz r9,84(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 84);
	// stb r9,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r9.u8);
	// lwz r8,88(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// lwz r7,92(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// lwz r6,96(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r6,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lbz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 100);
	// stb r8,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r8.u8);
	// lwz r7,104(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r7,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// lwz r6,108(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r6,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r6.u32);
	// lwz r5,112(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r5,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r5.u32);
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r9,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r9.u32);
	// lwz r8,124(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r8,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// lwz r7,128(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r7,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r7.u32);
	// lwz r6,132(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r6,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r6.u32);
	// lwz r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r5,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r5.u32);
	// lwz r10,140(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// lwz r9,144(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// lwz r8,148(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r8,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
	// lwz r7,152(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r7,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r7.u32);
	// lwz r6,156(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r6,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r6.u32);
	// lwz r5,160(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r5,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r5.u32);
	// lwz r10,164(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r9,168(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// lwz r8,172(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r8,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r8.u32);
	// lwz r7,176(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r7,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r7.u32);
	// lwz r6,180(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r6,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r6.u32);
	// lwz r5,184(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r5,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r5.u32);
	// lwz r10,188(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// lwz r9,192(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// lwz r8,196(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830739B4"))) PPC_WEAK_FUNC(sub_830739B4);
PPC_FUNC_IMPL(__imp__sub_830739B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830739B8"))) PPC_WEAK_FUNC(sub_830739B8);
PPC_FUNC_IMPL(__imp__sub_830739B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_830739EC:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x830739ec
	if (!cr0.eq) goto loc_830739EC;
	// lbz r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 264);
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// lwz r10,268(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// stw r10,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r10.u32);
	// lbz r9,272(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 272);
	// stb r9,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r9.u8);
	// lwz r8,276(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	// stw r8,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073A40"))) PPC_WEAK_FUNC(sub_83073A40);
PPC_FUNC_IMPL(__imp__sub_83073A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,98
	ctx.r10.s64 = 98;
	// addi r11,r3,22
	ctx.r11.s64 = ctx.r3.s64 + 22;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lbz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
	// lbz r5,9(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r5,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r5.u8);
	// lbz r10,10(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// lbz r8,11(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// stb r8,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// lbz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r7,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r7.u8);
	// lbz r6,13(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// stb r6,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r6.u8);
	// lbz r5,14(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// stb r5,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r5.u8);
	// lbz r10,15(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// stb r10,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r10.u8);
	// lbz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r8,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r8.u8);
	// lbz r7,17(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// stb r7,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r7.u8);
	// lbz r6,18(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// stb r6,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r6.u8);
	// lbz r5,19(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// stb r5,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r5.u8);
	// lbz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// lbz r8,21(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// stb r8,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r8.u8);
loc_83073AD0:
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83073ad0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83073AD0;
	// li r10,98
	ctx.r10.s64 = 98;
	// addi r11,r3,218
	ctx.r11.s64 = ctx.r3.s64 + 218;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83073AEC:
	// lhzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83073aec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83073AEC;
	// lbz r11,414(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 414);
	// stb r11,414(r3)
	PPC_STORE_U8(ctx.r3.u32 + 414, ctx.r11.u8);
	// lwz r10,416(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 416);
	// stw r10,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r10.u32);
	// lwz r9,420(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	// stw r9,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r9.u32);
	// lwz r8,424(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 424);
	// stw r8,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r8.u32);
	// lwz r7,428(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 428);
	// stw r7,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r7.u32);
	// lwz r6,432(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// stw r6,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r6.u32);
	// lwz r5,436(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 436);
	// stw r5,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r5.u32);
	// lwz r11,440(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 440);
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// lwz r10,444(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 444);
	// stw r10,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r10.u32);
	// lwz r9,448(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 448);
	// stw r9,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r9.u32);
	// lwz r8,452(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 452);
	// stw r8,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r8.u32);
	// lwz r7,456(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 456);
	// stw r7,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r7.u32);
	// lwz r6,460(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 460);
	// stw r6,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r6.u32);
	// lwz r5,464(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 464);
	// stw r5,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r5.u32);
	// lwz r11,468(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 468);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// lwz r10,472(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 472);
	// stw r10,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r10.u32);
	// lwz r9,476(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	// stw r9,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r9.u32);
	// lwz r8,480(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 480);
	// stw r8,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r8.u32);
	// lwz r7,484(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 484);
	// stw r7,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r7.u32);
	// lwz r6,488(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 488);
	// stw r6,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r6.u32);
	// lwz r5,492(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 492);
	// stw r5,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r5.u32);
	// lwz r11,496(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 496);
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// lwz r10,500(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 500);
	// stw r10,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r10.u32);
	// lwz r9,504(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	// stw r9,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r9.u32);
	// lwz r8,508(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 508);
	// stw r8,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r8.u32);
	// lwz r7,512(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 512);
	// stw r7,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073BD0"))) PPC_WEAK_FUNC(sub_83073BD0);
PPC_FUNC_IMPL(__imp__sub_83073BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 + 28;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lbz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r6,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r6.u8);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r8,r5,0,8,9
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xC00000) | (ctx.r8.u64 & 0xFFFFFFFFFF3FFFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r6,r7,0,10,10
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x200000) | (ctx.r6.u64 & 0xFFFFFFFFFFDFFFFF);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r8,r5,0,11,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x100000) | (ctx.r8.u64 & 0xFFFFFFFFFFEFFFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r6,r7,0,12,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF00000);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lbz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// stb r8,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r8.u8);
loc_83073C64:
	// ld r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4);
	// addi r7,r11,-12
	ctx.r7.s64 = ctx.r11.s64 + -12;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r6,-20(r11)
	PPC_STORE_U64(ctx.r11.u32 + -20, ctx.r6.u64);
	// lwzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r5,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r5.u32);
	// lwz r7,-8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// lwz r6,-4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r8,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lbz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// stb r5,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// ld r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r6,52(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lbz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// stb r8,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r8.u8);
	// ld r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 60);
	// std r7,36(r11)
	PPC_STORE_U64(ctx.r11.u32 + 36, ctx.r7.u64);
	// lwz r6,68(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r5,72(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r7,80(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,80(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// rlwimi r8,r5,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// lbz r7,84(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 84);
	// stb r7,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r7.u8);
	// ld r6,88(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 88);
	// std r6,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r6.u64);
	// lwz r5,96(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r5,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// lwz r8,100(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lwz r7,104(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r7,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// lwz r6,108(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
	// lwz r8,108(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r7.u32);
	// lbzu r8,112(r10)
	ea = 112 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r8,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r8.u8);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// bdnz 0x83073c64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83073C64;
	// lwz r11,480(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 480);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073DA0"))) PPC_WEAK_FUNC(sub_83073DA0);
PPC_FUNC_IMPL(__imp__sub_83073DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lbz r3,16016(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16016);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073DAC"))) PPC_WEAK_FUNC(sub_83073DAC);
PPC_FUNC_IMPL(__imp__sub_83073DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83073DB0"))) PPC_WEAK_FUNC(sub_83073DB0);
PPC_FUNC_IMPL(__imp__sub_83073DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,236
	ctx.r3.s64 = 15466496;
	// ori r3,r3,6716
	ctx.r3.u64 = ctx.r3.u64 | 6716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073DBC"))) PPC_WEAK_FUNC(sub_83073DBC);
PPC_FUNC_IMPL(__imp__sub_83073DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83073DC0"))) PPC_WEAK_FUNC(sub_83073DC0);
PPC_FUNC_IMPL(__imp__sub_83073DC0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r31,r11,16008
	ctx.r31.s64 = ctx.r11.s64 + 16008;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83073e04
	if (cr6.eq) goto loc_83073E04;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83073e04
	if (cr6.eq) goto loc_83073E04;
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
loc_83073E04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83073e2c
	if (cr6.eq) goto loc_83073E2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83073E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bne cr6,0x83073e38
	if (!cr6.eq) goto loc_83073E38;
loc_83073E2C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// b 0x83073e3c
	goto loc_83073E3C;
loc_83073E38:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
loc_83073E3C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x83073e58
	if (!cr6.eq) goto loc_83073E58;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r11,r11,6716
	ctx.r11.u64 = ctx.r11.u64 | 6716;
	// b 0x83073e94
	goto loc_83073E94;
loc_83073E58:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x83073e94
	if (!cr6.eq) goto loc_83073E94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83073E70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,236
	ctx.r9.s64 = 15466496;
	// addis r11,r3,164
	ctx.r11.s64 = ctx.r3.s64 + 10747904;
	// ori r10,r9,6716
	ctx.r10.u64 = ctx.r9.u64 | 6716;
	// addi r11,r11,13916
	ctx.r11.s64 = ctx.r11.s64 + 13916;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83073e94
	if (!cr6.gt) goto loc_83073E94;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
loc_83073E94:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_83073EAC"))) PPC_WEAK_FUNC(sub_83073EAC);
PPC_FUNC_IMPL(__imp__sub_83073EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83073EB0"))) PPC_WEAK_FUNC(sub_83073EB0);
PPC_FUNC_IMPL(__imp__sub_83073EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
loc_83073EE4:
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x83073ee4
	if (!cr0.eq) goto loc_83073EE4;
	// addi r11,r3,404
	ctx.r11.s64 = ctx.r3.s64 + 404;
	// li r10,32
	ctx.r10.s64 = 32;
loc_83073F14:
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x83073f14
	if (!cr0.eq) goto loc_83073F14;
	// lhz r9,788(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 788);
	// addi r11,r3,792
	ctx.r11.s64 = ctx.r3.s64 + 792;
	// li r10,32
	ctx.r10.s64 = 32;
	// sth r9,788(r3)
	PPC_STORE_U16(ctx.r3.u32 + 788, ctx.r9.u16);
loc_83073F4C:
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x83073f4c
	if (!cr0.eq) goto loc_83073F4C;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r4,1172
	ctx.r10.s64 = ctx.r4.s64 + 1172;
	// addi r11,r3,1180
	ctx.r11.s64 = ctx.r3.s64 + 1180;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83073F84:
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r9.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwimi r9,r5,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lhz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r6,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r5,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lhz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 28);
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lhz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// sth r6,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r6.u16);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r5,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lhz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 52);
	// sth r9,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r9.u16);
	// lwz r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwzu r9,60(r10)
	ea = 60 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// bdnz 0x83073f84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83073F84;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1772
	ctx.r11.s64 = ctx.r4.s64 + 1772;
	// addi r10,r3,1772
	ctx.r10.s64 = ctx.r3.s64 + 1772;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8307408C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8307408c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8307408C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1792
	ctx.r11.s64 = ctx.r4.s64 + 1792;
	// addi r10,r3,1792
	ctx.r10.s64 = ctx.r3.s64 + 1792;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830740A8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830740a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830740A8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1812
	ctx.r11.s64 = ctx.r4.s64 + 1812;
	// addi r10,r3,1812
	ctx.r10.s64 = ctx.r3.s64 + 1812;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830740C4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830740c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830740C4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1832
	ctx.r11.s64 = ctx.r4.s64 + 1832;
	// addi r10,r3,1832
	ctx.r10.s64 = ctx.r3.s64 + 1832;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830740E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830740e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830740E0;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1852
	ctx.r11.s64 = ctx.r4.s64 + 1852;
	// addi r10,r3,1852
	ctx.r10.s64 = ctx.r3.s64 + 1852;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830740FC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830740fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830740FC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1872
	ctx.r11.s64 = ctx.r4.s64 + 1872;
	// addi r10,r3,1872
	ctx.r10.s64 = ctx.r3.s64 + 1872;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074118:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074118
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074118;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1892
	ctx.r11.s64 = ctx.r4.s64 + 1892;
	// addi r10,r3,1892
	ctx.r10.s64 = ctx.r3.s64 + 1892;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074134:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074134;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1912
	ctx.r11.s64 = ctx.r4.s64 + 1912;
	// addi r10,r3,1912
	ctx.r10.s64 = ctx.r3.s64 + 1912;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074150:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074150
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074150;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1932
	ctx.r11.s64 = ctx.r4.s64 + 1932;
	// addi r10,r3,1932
	ctx.r10.s64 = ctx.r3.s64 + 1932;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8307416C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8307416c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8307416C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,1952
	ctx.r11.s64 = ctx.r4.s64 + 1952;
	// addi r10,r3,1952
	ctx.r10.s64 = ctx.r3.s64 + 1952;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074188:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074188
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074188;
	// li r9,29
	ctx.r9.s64 = 29;
	// addi r10,r4,1974
	ctx.r10.s64 = ctx.r4.s64 + 1974;
	// addi r11,r3,1980
	ctx.r11.s64 = ctx.r3.s64 + 1980;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830741A4:
	// lwz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r7,7(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r5,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lbz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stb r5,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r5.u8);
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// stb r9,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// lbzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r9.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x830741a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830741A4;
	// lwz r7,2440(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2440);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r6,r4,2440
	ctx.r6.s64 = ctx.r4.s64 + 2440;
	// addi r5,r3,2440
	ctx.r5.s64 = ctx.r3.s64 + 2440;
	// addi r10,r4,2518
	ctx.r10.s64 = ctx.r4.s64 + 2518;
	// addi r11,r3,2524
	ctx.r11.s64 = ctx.r3.s64 + 2524;
	// stw r7,2440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2440, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,2444(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2444);
	// stw r9,2444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2444, ctx.r9.u32);
	// lwz r7,2448(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2448);
	// stw r7,2448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2448, ctx.r7.u32);
	// lwz r6,2452(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2452);
	// stw r6,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r6.u32);
	// lwz r5,2456(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2456);
	// stw r5,2456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2456, ctx.r5.u32);
	// lwz r9,2460(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2460);
	// stw r9,2460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2460, ctx.r9.u32);
	// lwz r7,2464(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2464);
	// stw r7,2464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2464, ctx.r7.u32);
	// lwz r6,2468(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2468);
	// stw r6,2468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2468, ctx.r6.u32);
	// lwz r5,2472(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2472);
	// stw r5,2472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2472, ctx.r5.u32);
	// lwz r9,2476(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2476);
	// stw r9,2476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2476, ctx.r9.u32);
	// lwz r7,2480(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2480);
	// stw r7,2480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2480, ctx.r7.u32);
	// lwz r6,2484(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2484);
	// stw r6,2484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2484, ctx.r6.u32);
	// lwz r5,2488(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2488);
	// stw r5,2488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2488, ctx.r5.u32);
	// lwz r9,2492(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2492);
	// stw r9,2492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2492, ctx.r9.u32);
	// lwz r7,2496(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2496);
	// stw r7,2496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2496, ctx.r7.u32);
	// lwz r6,2500(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2500);
	// stw r6,2500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2500, ctx.r6.u32);
	// lwz r5,2504(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2504);
	// stw r5,2504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2504, ctx.r5.u32);
	// lwz r9,2508(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2508);
	// stw r9,2508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2508, ctx.r9.u32);
	// lwz r7,2512(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2512);
	// stw r7,2512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2512, ctx.r7.u32);
	// lwz r6,2516(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2516);
	// stw r6,2516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2516, ctx.r6.u32);
loc_830742D4:
	// lwz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// lhzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lhz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// lwz r6,14(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lhz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// lhz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// sth r6,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r6.u16);
	// lhz r5,22(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// sth r5,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r5.u16);
	// lhz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,26(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,26(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lhz r7,30(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 30);
	// sth r7,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r7.u16);
	// lhz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// sth r6,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r6.u16);
	// lhz r5,34(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 34);
	// sth r5,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r5.u16);
	// lhz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// sth r9,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r9.u16);
	// lwz r7,38(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 38);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lwz r5,38(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 38);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lhz r7,42(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 42);
	// sth r7,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r7.u16);
	// lhz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 44);
	// sth r6,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r6.u16);
	// lhz r5,46(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 46);
	// sth r5,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r5.u16);
	// lhz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// sth r9,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r9.u16);
	// lwz r7,50(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 50);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r5,50(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 50);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lhz r7,54(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 54);
	// sth r7,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r7.u16);
	// lhz r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 56);
	// sth r6,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r6.u16);
	// lhz r5,58(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 58);
	// sth r5,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r5.u16);
	// lhz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 60);
	// sth r9,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r9.u16);
	// lwz r7,62(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 62);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,62(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 62);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lhz r7,66(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 66);
	// sth r7,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r7.u16);
	// lhz r6,68(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 68);
	// sth r6,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r6.u16);
	// lhz r5,70(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 70);
	// sth r5,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r5.u16);
	// lhzu r9,72(r10)
	ea = 72 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sth r9,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r9.u16);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bdnz 0x830742d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830742D4;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r3,2880
	ctx.r11.s64 = ctx.r3.s64 + 2880;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83074468:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83074468
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074468;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,2928
	ctx.r11.s64 = ctx.r4.s64 + 2928;
	// addi r10,r3,2928
	ctx.r10.s64 = ctx.r3.s64 + 2928;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074488:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074488
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074488;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,2948
	ctx.r11.s64 = ctx.r4.s64 + 2948;
	// addi r10,r3,2948
	ctx.r10.s64 = ctx.r3.s64 + 2948;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830744A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830744a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830744A4;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,2968
	ctx.r11.s64 = ctx.r4.s64 + 2968;
	// addi r10,r3,2968
	ctx.r10.s64 = ctx.r3.s64 + 2968;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830744C0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830744c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830744C0;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,2988
	ctx.r11.s64 = ctx.r4.s64 + 2988;
	// addi r10,r3,2988
	ctx.r10.s64 = ctx.r3.s64 + 2988;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830744DC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830744dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830744DC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,3008
	ctx.r11.s64 = ctx.r4.s64 + 3008;
	// addi r10,r3,3008
	ctx.r10.s64 = ctx.r3.s64 + 3008;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830744F8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830744f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830744F8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,3028
	ctx.r11.s64 = ctx.r4.s64 + 3028;
	// addi r10,r3,3028
	ctx.r10.s64 = ctx.r3.s64 + 3028;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074514:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074514
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074514;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,3048
	ctx.r11.s64 = ctx.r4.s64 + 3048;
	// addi r10,r3,3048
	ctx.r10.s64 = ctx.r3.s64 + 3048;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074530:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074530
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074530;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,3068
	ctx.r11.s64 = ctx.r4.s64 + 3068;
	// addi r10,r3,3068
	ctx.r10.s64 = ctx.r3.s64 + 3068;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8307454C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8307454c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8307454C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,3088
	ctx.r11.s64 = ctx.r4.s64 + 3088;
	// addi r10,r3,3088
	ctx.r10.s64 = ctx.r3.s64 + 3088;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074568:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074568
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074568;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,3108
	ctx.r11.s64 = ctx.r4.s64 + 3108;
	// addi r10,r3,3108
	ctx.r10.s64 = ctx.r3.s64 + 3108;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074584:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074584
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074584;
	// lwz r6,3132(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3132);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r7,3132(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3132);
	// addi r10,r4,3136
	ctx.r10.s64 = ctx.r4.s64 + 3136;
	// addi r11,r3,3140
	ctx.r11.s64 = ctx.r3.s64 + 3140;
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,3132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3132, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r5,3132(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3132);
	// rlwimi r7,r5,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,3132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3132, ctx.r7.u32);
	// lwz r9,3136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3136);
	// lwz r7,3136(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3136);
	// rlwimi r9,r7,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,3136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3136, ctx.r9.u32);
	// lwz r6,3136(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3136);
	// rlwimi r9,r6,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,3136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3136, ctx.r9.u32);
loc_830745D8:
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r7,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r4,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r9,r4,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzu r9,20(r10)
	ea = 20 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bdnz 0x830745d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830745D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074684"))) PPC_WEAK_FUNC(sub_83074684);
PPC_FUNC_IMPL(__imp__sub_83074684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83074688"))) PPC_WEAK_FUNC(sub_83074688);
PPC_FUNC_IMPL(__imp__sub_83074688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r9,130
	ctx.r9.s64 = 130;
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8307469C:
	// lwz r9,-24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// lwz r7,-20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,-24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r5.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r7,-20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// stw r7,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// lhz r6,-16(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// sth r6,-12(r11)
	PPC_STORE_U16(ctx.r11.u32 + -12, ctx.r6.u16);
	// lwz r5,-16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// sth r5,-10(r11)
	PPC_STORE_U16(ctx.r11.u32 + -10, ctx.r5.u16);
	// lhz r6,-12(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -12);
	// sth r6,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r6.u16);
	// lbz r5,-10(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + -10);
	// stb r5,-6(r11)
	PPC_STORE_U8(ctx.r11.u32 + -6, ctx.r5.u8);
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// rlwimi r9,r7,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,-8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lhz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r5,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r5.u16);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// sth r9,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r9.u16);
	// lhz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// sth r6,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r6.u16);
	// lbz r5,22(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// stb r5,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r5.u8);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r7,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// sth r7,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r7.u16);
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// sth r6,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r6.u16);
	// lhz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// sth r9,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// lbz r7,38(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 38);
	// stb r7,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r7.u8);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lhz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// sth r5,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r5.u16);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// sth r7,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r7.u16);
	// lhz r6,52(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 52);
	// sth r6,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r6.u16);
	// lbz r5,54(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 54);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// stb r5,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r5.u8);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bdnz 0x8307469c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8307469C;
	// lwz r11,10400(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 10400);
	// stw r11,10400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074820"))) PPC_WEAK_FUNC(sub_83074820);
PPC_FUNC_IMPL(__imp__sub_83074820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r9,25
	ctx.r9.s64 = 25;
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83074834:
	// lwz r9,-24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// lwz r7,-20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,-24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r5.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r7,-20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// stw r7,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// lhz r6,-16(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// sth r6,-12(r11)
	PPC_STORE_U16(ctx.r11.u32 + -12, ctx.r6.u16);
	// lwz r5,-16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// sth r5,-10(r11)
	PPC_STORE_U16(ctx.r11.u32 + -10, ctx.r5.u16);
	// lhz r6,-12(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -12);
	// sth r6,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r6.u16);
	// lbz r5,-10(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + -10);
	// stb r5,-6(r11)
	PPC_STORE_U8(ctx.r11.u32 + -6, ctx.r5.u8);
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// rlwimi r9,r7,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,-8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lbz r7,6(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r7,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lhz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r5,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r5.u16);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// sth r9,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r9.u16);
	// lhz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// sth r6,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r6.u16);
	// lbz r5,22(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// stb r5,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r5.u8);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r7,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// sth r7,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r7.u16);
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// sth r6,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r6.u16);
	// lhz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// sth r9,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// lbz r7,38(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 38);
	// stb r7,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r7.u8);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lhz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// sth r5,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r5.u16);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// sth r9,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r9.u16);
	// lhz r6,52(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 52);
	// sth r6,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r6.u16);
	// lbz r5,54(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 54);
	// stb r5,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r5.u8);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwimi r9,r7,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lhz r7,64(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// sth r7,68(r11)
	PPC_STORE_U16(ctx.r11.u32 + 68, ctx.r7.u16);
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,70(r11)
	PPC_STORE_U16(ctx.r11.u32 + 70, ctx.r5.u16);
	// lhz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 68);
	// sth r9,72(r11)
	PPC_STORE_U16(ctx.r11.u32 + 72, ctx.r9.u16);
	// lbz r7,70(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 70);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// stb r7,74(r11)
	PPC_STORE_U8(ctx.r11.u32 + 74, ctx.r7.u8);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bdnz 0x83074834
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074834;
	// lwz r11,2400(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2400);
	// stw r11,2400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074A00"))) PPC_WEAK_FUNC(sub_83074A00);
PPC_FUNC_IMPL(__imp__sub_83074A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83074A08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,25001
	ctx.r10.s64 = 25001;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r27,r3,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83074A24:
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83074a24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074A24;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// li r10,25001
	ctx.r10.s64 = 25001;
	// addi r11,r11,-31068
	ctx.r11.s64 = ctx.r11.s64 + -31068;
loc_83074A40:
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x83074a40
	if (!cr0.eq) goto loc_83074A40;
	// addis r29,r31,5
	ctx.r29.s64 = ctx.r31.s64 + 327680;
	// li r28,50
	ctx.r28.s64 = 50;
	// addi r29,r29,-27668
	ctx.r29.s64 = ctx.r29.s64 + -27668;
loc_83074A6C:
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83073a40
	ctx.lr = 0x83074A78;
	sub_83073A40(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,516
	ctx.r29.s64 = ctx.r29.s64 + 516;
	// bne 0x83074a6c
	if (!cr0.eq) goto loc_83074A6C;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r5,2808
	ctx.r5.s64 = 2808;
	// ori r11,r11,63668
	ctx.r11.u64 = ctx.r11.u64 | 63668;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x83074A9C;
	sub_831CE980(ctx, base);
	// addis r29,r31,5
	ctx.r29.s64 = ctx.r31.s64 + 327680;
	// li r28,50
	ctx.r28.s64 = 50;
	// addi r29,r29,940
	ctx.r29.s64 = ctx.r29.s64 + 940;
loc_83074AA8:
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83074AB8;
	sub_831CE980(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,192
	ctx.r29.s64 = ctx.r29.s64 + 192;
	// bne 0x83074aa8
	if (!cr0.eq) goto loc_83074AA8;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r8,r11,10540
	ctx.r8.u64 = ctx.r11.u64 | 10540;
	// lis r7,5
	ctx.r7.s64 = 327680;
	// ori r9,r10,10544
	ctx.r9.u64 = ctx.r10.u64 | 10544;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// ori r10,r7,10552
	ctx.r10.u64 = ctx.r7.u64 | 10552;
	// lwzx r5,r30,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// add r4,r30,r9
	ctx.r4.u64 = ctx.r30.u64 + ctx.r9.u64;
	// ori r11,r6,10556
	ctx.r11.u64 = ctx.r6.u64 | 10556;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwx r5,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r9,r30,r8
	ctx.r9.u64 = ctx.r30.u64 + ctx.r8.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// add r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lhz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// sth r3,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lhz r8,2(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// sth r8,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r8.u16);
loc_83074B3C:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83074b3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074B3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074B54"))) PPC_WEAK_FUNC(sub_83074B54);
PPC_FUNC_IMPL(__imp__sub_83074B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83074B58"))) PPC_WEAK_FUNC(sub_83074B58);
PPC_FUNC_IMPL(__imp__sub_83074B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r5,7
	ctx.r5.s64 = 7;
loc_83074B68:
	// lhz r4,-12(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -12);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// sth r4,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r4.u16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r4,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_83074BA8:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83074ba8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074BA8;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83074BC4:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83074bc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074BC4;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83074BE0:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83074be0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074BE0;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,56
	ctx.r9.s64 = ctx.r10.s64 + 56;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83074BFC:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83074bfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074BFC;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// addi r8,r11,84
	ctx.r8.s64 = ctx.r11.s64 + 84;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83074C18:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83074c18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074C18;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,96
	ctx.r9.s64 = ctx.r10.s64 + 96;
	// addi r8,r11,104
	ctx.r8.s64 = ctx.r11.s64 + 104;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83074C34:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83074c34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074C34;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,116
	ctx.r9.s64 = ctx.r10.s64 + 116;
	// addi r8,r11,124
	ctx.r8.s64 = ctx.r11.s64 + 124;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83074C50:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83074c50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074C50;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 + 152;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// bne 0x83074b68
	if (!cr0.eq) goto loc_83074B68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074C70"))) PPC_WEAK_FUNC(sub_83074C70);
PPC_FUNC_IMPL(__imp__sub_83074C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83074C78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82b1e0e8
	ctx.lr = 0x83074C98;
	sub_82B1E0E8(ctx, base);
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r11,r30,260
	ctx.r11.s64 = ctx.r30.s64 + 260;
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// subf r29,r31,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// lwz r8,232(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// lwz r7,236(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stw r7,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r7.u32);
	// lwz r6,240(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r6,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r6.u32);
	// lwz r5,244(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r5,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r5.u32);
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// stw r4,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r4.u32);
	// lwz r3,252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// lwz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r8,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r7,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// lwz r6,268(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r6,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r6.u32);
	// lhz r5,272(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 272);
	// sth r5,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r5.u16);
	// lwz r3,276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r4.u32);
	// lwz r8,276(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lwz r6,280(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r7,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r5.u32);
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// lwz r9,288(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// lwz r8,292(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r8,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r8.u32);
	// lhz r7,296(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 296);
	// sth r7,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r7.u16);
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// lwz r6,300(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r6.u32);
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r4.u32);
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r8,304(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lwz r6,304(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r7.u32);
	// lwz r5,308(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// lwz r4,312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// lwz r3,316(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// lhz r9,320(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 320);
	// sth r9,320(r31)
	PPC_STORE_U16(ctx.r31.u32 + 320, ctx.r9.u16);
	// lwz r7,324(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r8.u32);
	// lwz r6,324(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r5.u32);
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r4,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r4.u32);
	// lwz r8,328(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lwz r7,332(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// stw r7,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r7.u32);
	// lwz r6,336(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// stw r6,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r6.u32);
	// lwz r5,340(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// stw r5,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r5.u32);
	// lhz r4,344(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 344);
	// sth r4,344(r31)
	PPC_STORE_U16(ctx.r31.u32 + 344, ctx.r4.u16);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// rlwimi r9,r3,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,348(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r8.u32);
	// lwz r6,352(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,352(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r4.u32);
loc_83074E6C:
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x83074e6c
	if (!cr0.eq) goto loc_83074E6C;
	// addi r28,r31,836
	ctx.r28.s64 = ctx.r31.s64 + 836;
	// li r27,60
	ctx.r27.s64 = 60;
loc_83074E94:
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac8b70
	ctx.lr = 0x83074EA0;
	sub_82AC8B70(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// bne 0x83074e94
	if (!cr0.eq) goto loc_83074E94;
	// addi r4,r30,3716
	ctx.r4.s64 = ctx.r30.s64 + 3716;
	// addi r3,r31,3716
	ctx.r3.s64 = ctx.r31.s64 + 3716;
	// bl 0x82ac8b70
	ctx.lr = 0x83074EB8;
	sub_82AC8B70(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r30,3768
	ctx.r10.s64 = ctx.r30.s64 + 3768;
	// addi r11,r31,3772
	ctx.r11.s64 = ctx.r31.s64 + 3772;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,3764(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3764);
	// stw r9,3764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3764, ctx.r9.u32);
	// lbz r8,3768(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3768);
	// stb r8,3768(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3768, ctx.r8.u8);
	// lbz r7,3769(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3769);
	// stb r7,3769(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3769, ctx.r7.u8);
loc_83074EE0:
	// lwzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwzu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwimi r6,r9,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x83074ee0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074EE0;
	// addi r4,r30,3856
	ctx.r4.s64 = ctx.r30.s64 + 3856;
	// addi r3,r31,3856
	ctx.r3.s64 = ctx.r31.s64 + 3856;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83074F58;
	sub_831CE980(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r31,3940
	ctx.r11.s64 = ctx.r31.s64 + 3940;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,3928(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3928);
	// stw r10,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r10.u32);
	// lwz r9,3932(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3932);
	// stw r9,3932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3932, ctx.r9.u32);
	// lwz r8,3936(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3936);
	// stw r8,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r8.u32);
loc_83074F7C:
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83074f7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83074F7C;
	// lwz r11,3992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3992);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3992, ctx.r11.u32);
	// lwz r10,3996(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3996);
	// stw r10,3996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3996, ctx.r10.u32);
	// lwz r9,4000(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4000);
	// stw r9,4000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4000, ctx.r9.u32);
	// lwz r8,4004(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4004);
	// stw r8,4004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4004, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074FB8"))) PPC_WEAK_FUNC(sub_83074FB8);
PPC_FUNC_IMPL(__imp__sub_83074FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83074FC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82d8a4d8
	ctx.lr = 0x83074FE8;
	sub_82D8A4D8(ctx, base);
	// addi r4,r30,640
	ctx.r4.s64 = ctx.r30.s64 + 640;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83074FF8;
	sub_831CE980(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r30,720
	ctx.r10.s64 = ctx.r30.s64 + 720;
	// addi r11,r31,728
	ctx.r11.s64 = ctx.r31.s64 + 728;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lbz r9,712(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 712);
	// stb r9,712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 712, ctx.r9.u8);
	// lwz r8,716(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	// stw r8,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r8.u32);
	// lwz r7,720(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// stw r7,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r7.u32);
loc_83075024:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// lwz r6,64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// lwz r4,64(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// lwz r7,76(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r6,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// lwz r5,84(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwimi r9,r3,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// lwz r8,88(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// lwz r7,92(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r7,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r7.u32);
	// lwz r6,96(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r6,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r6.u32);
	// lwzu r9,100(r10)
	ea = 100 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// bdnz 0x83075024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83075024;
	// lwz r11,1124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1124);
	// addi r29,r31,1144
	ctx.r29.s64 = ctx.r31.s64 + 1144;
	// lwz r10,1136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// li r28,200
	ctx.r28.s64 = 200;
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
	// lwz r9,1128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	// stw r9,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r9.u32);
	// lwz r8,1132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// stw r8,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r8.u32);
	// lwz r7,1136(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// rlwimi r7,r10,0,3,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1FFFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFE0000000);
	// stw r7,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,1136(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// rlwimi r5,r6,0,3,12
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x1FF80000) | (ctx.r5.u64 & 0xFFFFFFFFE007FFFF);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r5.u32);
	// lwz r3,1136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// rlwimi r4,r3,0,13,22
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7FE00) | (ctx.r4.u64 & 0xFFFFFFFFFFF801FF);
	// stw r4,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r4.u32);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r11,1136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// rlwimi r10,r11,0,23,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FE) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFE01);
	// stw r10,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,1136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// rlwimi r8,r9,0,31,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r8,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r8.u32);
	// lwz r7,1140(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	// stw r7,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r7.u32);
loc_830751E4:
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ae5aa8
	ctx.lr = 0x830751F0;
	sub_82AE5AA8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,2020
	ctx.r29.s64 = ctx.r29.s64 + 2020;
	// bne 0x830751e4
	if (!cr0.eq) goto loc_830751E4;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// ori r11,r11,11928
	ctx.r11.u64 = ctx.r11.u64 | 11928;
	// ori r9,r10,11929
	ctx.r9.u64 = ctx.r10.u64 | 11929;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// ori r6,r8,11930
	ctx.r6.u64 = ctx.r8.u64 | 11930;
	// lbzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// ori r4,r7,11931
	ctx.r4.u64 = ctx.r7.u64 | 11931;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r5,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// lhzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// stbx r10,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r5,r7,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF;
	// stbx r5,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u8);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stbx r11,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307524C"))) PPC_WEAK_FUNC(sub_8307524C);
PPC_FUNC_IMPL(__imp__sub_8307524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83075250"))) PPC_WEAK_FUNC(sub_83075250);
PPC_FUNC_IMPL(__imp__sub_83075250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r30,2
	ctx.r30.s64 = 2;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lbz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
loc_83075284:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_830752B4:
	// li r7,6
	ctx.r7.s64 = 6;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_830752C8:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x830752c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830752C8;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bne 0x830752b4
	if (!cr0.eq) goto loc_830752B4;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r11,r11,772
	ctx.r11.s64 = ctx.r11.s64 + 772;
	// bne 0x83075284
	if (!cr0.eq) goto loc_83075284;
	// addi r11,r3,1556
	ctx.r11.s64 = ctx.r3.s64 + 1556;
	// li r7,198
	ctx.r7.s64 = 198;
loc_830752F4:
	// li r8,9
	ctx.r8.s64 = 9;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83075308:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83075308
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83075308;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bne 0x830752f4
	if (!cr0.eq) goto loc_830752F4;
	// lwz r11,8684(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8684);
	// stw r11,8684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8684, ctx.r11.u32);
	// lwz r10,8688(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8688);
	// stw r10,8688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8688, ctx.r10.u32);
	// lwz r9,8692(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8692);
	// stw r9,8692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8692, ctx.r9.u32);
	// lwz r8,8696(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8696);
	// stw r8,8696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8696, ctx.r8.u32);
	// lwz r7,8700(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8700);
	// stw r7,8700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8700, ctx.r7.u32);
	// lwz r6,8704(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8704);
	// stw r6,8704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8704, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307535C"))) PPC_WEAK_FUNC(sub_8307535C);
PPC_FUNC_IMPL(__imp__sub_8307535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83075360"))) PPC_WEAK_FUNC(sub_83075360);
PPC_FUNC_IMPL(__imp__sub_83075360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r8,23
	ctx.r8.s64 = 23;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
loc_83075378:
	// lwz r6,-16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r6,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r7,r5,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lhz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// sth r6,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r6.u16);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// sth r5,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r5.u16);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lhz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// sth r5,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r5.u16);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// sth r7,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r7.u16);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// lwz r6,52(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r7,r5,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lhz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 60);
	// sth r7,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r7.u16);
	// lwz r6,60(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r5,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r5.u16);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bne 0x83075378
	if (!cr0.eq) goto loc_83075378;
	// lhz r9,1844(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1844);
	// addi r11,r4,1844
	ctx.r11.s64 = ctx.r4.s64 + 1844;
	// addi r10,r3,1844
	ctx.r10.s64 = ctx.r3.s64 + 1844;
	// sth r9,1844(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1844, ctx.r9.u16);
	// lwz r8,1848(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1848);
	// stw r8,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r8.u32);
	// lwz r7,1852(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1852);
	// lwz r6,1852(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r4,1852(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1852);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830754F0"))) PPC_WEAK_FUNC(sub_830754F0);
PPC_FUNC_IMPL(__imp__sub_830754F0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 + 36;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// addi r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 + 60;
	// addi r11,r4,84
	ctx.r11.s64 = ctx.r4.s64 + 84;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lhz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// sth r6,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r6.u16);
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lhz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// sth r8,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r8.u16);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r5,44(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// lwz r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lbz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// stb r9,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r9.u8);
	// lhz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 60);
	// sth r8,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r8.u16);
	// lwz r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// lwz r6,68(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r5,68(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// rlwimi r11,r6,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// rlwimi r10,r8,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lwz r7,76(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// lbz r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// stb r6,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r6.u8);
	// lhz r5,84(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 84);
	// sth r5,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r5.u16);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r9,92(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lwz r7,92(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// lwz r6,96(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r5,96(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// rlwimi r5,r6,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lwz r9,100(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// lbz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// stb r8,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830756C8"))) PPC_WEAK_FUNC(sub_830756C8);
PPC_FUNC_IMPL(__imp__sub_830756C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830756D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r29,r3,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r30,3
	ctx.r30.s64 = 3;
loc_830756E8:
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83073bd0
	ctx.lr = 0x830756F4;
	sub_83073BD0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,484
	ctx.r31.s64 = ctx.r31.s64 + 484;
	// bne 0x830756e8
	if (!cr0.eq) goto loc_830756E8;
	// addi r10,r28,1472
	ctx.r10.s64 = ctx.r28.s64 + 1472;
	// addi r11,r27,1460
	ctx.r11.s64 = ctx.r27.s64 + 1460;
	// li r9,8
	ctx.r9.s64 = 8;
loc_8307570C:
	// lwz r8,-20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,-16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,-8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r7,r3,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lbz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r6,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r6.u8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwimi r4,r6,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// lbz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// stb r3,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r3.u8);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r4,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// lwz r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwimi r7,r3,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lbz r6,60(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// stb r6,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r6.u8);
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r5,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// lwz r4,68(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r4,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r3,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r3.u32);
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// lwz r7,80(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r5,84(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// lwz r4,84(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwimi r4,r6,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r4.u32);
	// lbz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 88);
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// stb r3,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r3.u8);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// bne 0x8307570c
	if (!cr0.eq) goto loc_8307570C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83075858"))) PPC_WEAK_FUNC(sub_83075858);
PPC_FUNC_IMPL(__imp__sub_83075858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// addi r10,r4,40
	ctx.r10.s64 = ctx.r4.s64 + 40;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r9,8
	ctx.r9.s64 = 8;
loc_83075868:
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r7,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r7.u32);
	// lwz r6,-36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// stw r6,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r6.u32);
	// lwz r7,-32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	// lwz r5,-16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r5.u32);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r5,-32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r6.u32);
	// lhz r7,-28(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -28);
	// sth r7,-12(r11)
	PPC_STORE_U16(ctx.r11.u32 + -12, ctx.r7.u16);
	// lwz r6,-28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// sth r6,-10(r11)
	PPC_STORE_U16(ctx.r11.u32 + -10, ctx.r6.u16);
	// lwz r7,-24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// lwz r6,-20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lhz r7,-12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -12);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lwz r6,-12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r7,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r7.u16);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// sth r6,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r6.u16);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lhz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// sth r7,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r7.u16);
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// sth r6,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r6.u16);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lhz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// sth r7,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r7.u16);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r5,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r5.u16);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// bne 0x83075868
	if (!cr0.eq) goto loc_83075868;
	// lwz r11,640(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 640);
	// stw r11,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r11.u32);
	// lwz r10,644(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 644);
	// stw r10,644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 644, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830759D0"))) PPC_WEAK_FUNC(sub_830759D0);
PPC_FUNC_IMPL(__imp__sub_830759D0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r31,r11,16008
	ctx.r31.s64 = ctx.r11.s64 + 16008;
	// lwz r3,16008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16008);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83075a40
	if (cr6.eq) goto loc_83075A40;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_83075A00:
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
	// bne 0x83075a00
	if (!cr0.eq) goto loc_83075A00;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83075a38
	if (!cr6.eq) goto loc_83075A38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83075A38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83075A38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83075A40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83075aa0
	if (cr6.eq) goto loc_83075AA0;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83075A60;
	sub_82595150(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83075a74
	if (cr6.eq) goto loc_83075A74;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82416268
	ctx.lr = 0x83075A74;
	sub_82416268(ctx, base);
loc_83075A74:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83075A7C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
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
loc_83075AA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83075ABC"))) PPC_WEAK_FUNC(sub_83075ABC);
PPC_FUNC_IMPL(__imp__sub_83075ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83075AC0"))) PPC_WEAK_FUNC(sub_83075AC0);
PPC_FUNC_IMPL(__imp__sub_83075AC0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r31,r11,16008
	ctx.r31.s64 = ctx.r11.s64 + 16008;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83075bb4
	if (!cr6.eq) goto loc_83075BB4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83075bb4
	if (cr6.eq) goto loc_83075BB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83075bb4
	if (cr6.eq) goto loc_83075BB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83075B0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83075b30
	if (cr6.eq) goto loc_83075B30;
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
loc_83075B30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83075b74
	if (cr6.eq) goto loc_83075B74;
	// li r11,31
	ctx.r11.s64 = 31;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83075B50;
	sub_82595150(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83075b64
	if (cr6.eq) goto loc_83075B64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82416268
	ctx.lr = 0x83075B64;
	sub_82416268(ctx, base);
loc_83075B64:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83075B6C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83075B74:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83075B88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83075b98
	if (cr6.eq) goto loc_83075B98;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83075bb0
	goto loc_83075BB0;
loc_83075B98:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83075BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,4
	ctx.r11.s64 = 4;
loc_83075BB0:
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_83075BB4:
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

__attribute__((alias("__imp__sub_83075BCC"))) PPC_WEAK_FUNC(sub_83075BCC);
PPC_FUNC_IMPL(__imp__sub_83075BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83075BD0"))) PPC_WEAK_FUNC(sub_83075BD0);
PPC_FUNC_IMPL(__imp__sub_83075BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83075BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83075d98
	if (cr6.eq) goto loc_83075D98;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r31,r11,16008
	ctx.r31.s64 = ctx.r11.s64 + 16008;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83075c9c
	if (!cr6.eq) goto loc_83075C9C;
	// addis r28,r3,164
	ctx.r28.s64 = ctx.r3.s64 + 10747904;
	// lis r11,71
	ctx.r11.s64 = 4653056;
	// addi r28,r28,13908
	ctx.r28.s64 = ctx.r28.s64 + 13908;
	// addis r29,r3,164
	ctx.r29.s64 = ctx.r3.s64 + 10747904;
	// ori r10,r11,58336
	ctx.r10.u64 = ctx.r11.u64 | 58336;
	// addi r29,r29,13916
	ctx.r29.s64 = ctx.r29.s64 + 13916;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83075c40
	if (!cr6.eq) goto loc_83075C40;
	// lis r10,164
	ctx.r10.s64 = 10747904;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r9,r10,13912
	ctx.r9.u64 = ctx.r10.u64 | 13912;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stwx r29,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83075C40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83075c50
	if (cr6.eq) goto loc_83075C50;
	// bl 0x83b4b558
	ctx.lr = 0x83075C50;
	sub_83B4B558(ctx, base);
loc_83075C50:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83526708
	ctx.lr = 0x83075C6C;
	sub_83526708(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83075c8c
	if (!cr6.eq) goto loc_83075C8C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83075C8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83075C9C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83075d58
	if (!cr6.eq) goto loc_83075D58;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83075cc4
	if (!cr6.eq) goto loc_83075CC4;
loc_83075CB0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83075CC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83075CD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83075cec
	if (cr6.eq) goto loc_83075CEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83075CEC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83075D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83075cb0
	if (!cr6.eq) goto loc_83075CB0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r29,r30,164
	ctx.r29.s64 = ctx.r30.s64 + 10747904;
	// addi r29,r29,13916
	ctx.r29.s64 = ctx.r29.s64 + 13916;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83075D24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r5,71
	ctx.r5.s64 = 4653056;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,58336
	ctx.r5.u64 = ctx.r5.u64 | 58336;
	// bl 0x831ce980
	ctx.lr = 0x83075D38;
	sub_831CE980(ctx, base);
	// lis r9,164
	ctx.r9.s64 = 10747904;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r8,r9,13912
	ctx.r8.u64 = ctx.r9.u64 | 13912;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r29,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83075D58:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83075d88
	if (!cr6.eq) goto loc_83075D88;
	// lis r11,164
	ctx.r11.s64 = 10747904;
	// addis r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 10747904;
	// ori r9,r11,13912
	ctx.r9.u64 = ctx.r11.u64 | 13912;
	// addi r10,r10,13916
	ctx.r10.s64 = ctx.r10.s64 + 13916;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83075D88:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83075d98
	if (cr6.eq) goto loc_83075D98;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_83075D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83075DA4"))) PPC_WEAK_FUNC(sub_83075DA4);
PPC_FUNC_IMPL(__imp__sub_83075DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83075DA8"))) PPC_WEAK_FUNC(sub_83075DA8);
PPC_FUNC_IMPL(__imp__sub_83075DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83075DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r4,7
	ctx.r9.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r8,r3,7
	ctx.r8.s64 = ctx.r3.s64 + 7;
	// lbz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r6,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// lbz r5,5(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r5,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r5.u8);
	// lbz r4,6(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
loc_83075DF0:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83075df0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83075DF0;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1031
	ctx.r9.s64 = ctx.r30.s64 + 1031;
	// addi r8,r31,1031
	ctx.r8.s64 = ctx.r31.s64 + 1031;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83075E14:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83075e14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83075E14;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1063
	ctx.r9.s64 = ctx.r30.s64 + 1063;
	// addi r8,r31,1063
	ctx.r8.s64 = ctx.r31.s64 + 1063;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83075E38:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83075e38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83075E38;
	// lbz r7,1095(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1095);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1121
	ctx.r9.s64 = ctx.r30.s64 + 1121;
	// addi r8,r31,1121
	ctx.r8.s64 = ctx.r31.s64 + 1121;
	// stb r7,1095(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1095, ctx.r7.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r6,1096(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	// stw r6,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r6.u32);
	// lbz r5,1100(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1100);
	// stb r5,1100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1100, ctx.r5.u8);
	// lwz r4,1104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// stw r4,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r4.u32);
	// lwz r3,1108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1108);
	// stw r3,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r3.u32);
	// lwz r10,1112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1112);
	// stw r10,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r10.u32);
	// lbz r7,1116(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1116);
	// stb r7,1116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1116, ctx.r7.u8);
	// lhz r6,1118(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1118);
	// sth r6,1118(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1118, ctx.r6.u16);
	// lbz r5,1120(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1120);
	// stb r5,1120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1120, ctx.r5.u8);
loc_83075EA4:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83075ea4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83075EA4;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r30,1152
	ctx.r10.s64 = ctx.r30.s64 + 1152;
	// addi r11,r31,1156
	ctx.r11.s64 = ctx.r31.s64 + 1156;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83075EC8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzx r7,r27,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r3,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwimi r9,r6,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x83075ec8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83075EC8;
	// lbz r11,1284(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1284);
	// addi r29,r31,1300
	ctx.r29.s64 = ctx.r31.s64 + 1300;
	// li r28,32
	ctx.r28.s64 = 32;
	// stb r11,1284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1284, ctx.r11.u8);
	// lwz r10,1288(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// stw r10,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r10.u32);
	// lwz r9,1292(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// stw r9,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r9.u32);
	// lwz r8,1296(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// stw r8,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r8.u32);
loc_83075F68:
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830736a0
	ctx.lr = 0x83075F74;
	sub_830736A0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,196
	ctx.r29.s64 = ctx.r29.s64 + 196;
	// bne 0x83075f68
	if (!cr0.eq) goto loc_83075F68;
	// lwz r9,7572(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7572);
	// li r10,23
	ctx.r10.s64 = 23;
	// addi r11,r31,7608
	ctx.r11.s64 = ctx.r31.s64 + 7608;
	// stw r9,7572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7572, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r8,7576(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7576);
	// stw r8,7576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7576, ctx.r8.u32);
	// lbz r7,7580(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7580);
	// stb r7,7580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7580, ctx.r7.u8);
	// lwz r6,7584(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7584);
	// stw r6,7584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7584, ctx.r6.u32);
	// lbz r5,7588(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7588);
	// stb r5,7588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7588, ctx.r5.u8);
	// lbz r4,7589(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7589);
	// stb r4,7589(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7589, ctx.r4.u8);
	// lbz r3,7590(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7590);
	// stb r3,7590(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7590, ctx.r3.u8);
	// lwz r10,7592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7592);
	// stw r10,7592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7592, ctx.r10.u32);
	// lbz r9,7596(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7596);
	// stb r9,7596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7596, ctx.r9.u8);
	// lwz r8,7600(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7600);
	// stw r8,7600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7600, ctx.r8.u32);
	// lhz r7,7604(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 7604);
	// sth r7,7604(r31)
	PPC_STORE_U16(ctx.r31.u32 + 7604, ctx.r7.u16);
loc_83075FE4:
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83075fe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83075FE4;
	// lhz r11,7700(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 7700);
	// addi r4,r30,7732
	ctx.r4.s64 = ctx.r30.s64 + 7732;
	// addi r3,r31,7732
	ctx.r3.s64 = ctx.r31.s64 + 7732;
	// sth r11,7700(r31)
	PPC_STORE_U16(ctx.r31.u32 + 7700, ctx.r11.u16);
	// lbz r10,7702(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7702);
	// stb r10,7702(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7702, ctx.r10.u8);
	// lwz r9,7704(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7704);
	// stw r9,7704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7704, ctx.r9.u32);
	// lwz r8,7708(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7708);
	// stw r8,7708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7708, ctx.r8.u32);
	// lbz r7,7712(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7712);
	// stb r7,7712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7712, ctx.r7.u8);
	// lwz r6,7716(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7716);
	// stw r6,7716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7716, ctx.r6.u32);
	// lbz r5,7720(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7720);
	// stb r5,7720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7720, ctx.r5.u8);
	// lwz r11,7724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7724);
	// stw r11,7724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7724, ctx.r11.u32);
	// lbz r10,7728(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7728);
	// stb r10,7728(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7728, ctx.r10.u8);
	// bl 0x82f09f38
	ctx.lr = 0x83076048;
	sub_82F09F38(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r31,28048
	ctx.r11.s64 = ctx.r31.s64 + 28048;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83076054:
	// lhzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83076054
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83076054;
	// lwz r9,28112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28112);
	// addi r11,r31,28144
	ctx.r11.s64 = ctx.r31.s64 + 28144;
	// li r10,6400
	ctx.r10.s64 = 6400;
	// stw r9,28112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28112, ctx.r9.u32);
	// lbz r8,28116(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28116);
	// stb r8,28116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28116, ctx.r8.u8);
	// lwz r7,28120(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28120);
	// stw r7,28120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28120, ctx.r7.u32);
	// lbz r6,28124(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28124);
	// stb r6,28124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28124, ctx.r6.u8);
	// lbz r5,28125(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28125);
	// stb r5,28125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28125, ctx.r5.u8);
	// lbz r4,28126(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28126);
	// stb r4,28126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28126, ctx.r4.u8);
	// lwz r3,28128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// stw r3,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r3.u32);
	// lbz r9,28132(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28132);
	// stb r9,28132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28132, ctx.r9.u8);
	// lbz r8,28133(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28133);
	// stb r8,28133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28133, ctx.r8.u8);
	// lwz r7,28136(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28136);
	// stw r7,28136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28136, ctx.r7.u32);
	// lbz r6,28140(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28140);
	// stb r6,28140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28140, ctx.r6.u8);
loc_830760C4:
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x830760c4
	if (!cr0.eq) goto loc_830760C4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,13808
	ctx.r11.u64 = ctx.r11.u64 | 13808;
	// ori r7,r10,13812
	ctx.r7.u64 = ctx.r10.u64 | 13812;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r8,r8,13816
	ctx.r8.u64 = ctx.r8.u64 | 13816;
	// lbzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// ori r9,r6,13820
	ctx.r9.u64 = ctx.r6.u64 | 13820;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stbx r5,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// ori r10,r5,13821
	ctx.r10.u64 = ctx.r5.u64 | 13821;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// li r10,148
	ctx.r10.s64 = 148;
	// ori r11,r11,13822
	ctx.r11.u64 = ctx.r11.u64 | 13822;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwzx r10,r30,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwzx r7,r30,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// stwx r7,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lbzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// stbx r6,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r6.u8);
	// lbzx r5,r30,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// stbx r5,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u8);
loc_83076174:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83076174
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83076174;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,13970
	ctx.r11.u64 = ctx.r11.u64 | 13970;
	// ori r10,r10,13972
	ctx.r10.u64 = ctx.r10.u64 | 13972;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lhzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// ori r11,r6,13976
	ctx.r11.u64 = ctx.r6.u64 | 13976;
	// li r10,200
	ctx.r10.s64 = 200;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// sthx r4,r31,r8
	PPC_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r8,r31,r6
	ctx.r8.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// stwx r4,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r4.u32);
loc_830761D8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x830761d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830761D8;
	// li r10,32
	ctx.r10.s64 = 32;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830761F8:
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830761f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830761F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076214"))) PPC_WEAK_FUNC(sub_83076214);
PPC_FUNC_IMPL(__imp__sub_83076214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83076218"))) PPC_WEAK_FUNC(sub_83076218);
PPC_FUNC_IMPL(__imp__sub_83076218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83076220;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r29,r3,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r3.s64;
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,23
	ctx.r10.s64 = 23;
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
loc_830762F8:
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x830762f8
	if (!cr0.eq) goto loc_830762F8;
	// lbz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 208);
	// li r5,6020
	ctx.r5.s64 = 6020;
	// addi r4,r30,212
	ctx.r4.s64 = ctx.r30.s64 + 212;
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x83076330;
	sub_831CE980(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// lbz r8,6239(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6239);
	// addi r10,r30,6232
	ctx.r10.s64 = ctx.r30.s64 + 6232;
	// addi r11,r31,6244
	ctx.r11.s64 = ctx.r31.s64 + 6244;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,6232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6232);
	// stw r9,6232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6232, ctx.r9.u32);
	// lwz r7,6236(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6236);
	// rlwinm r6,r7,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,6236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6236, ctx.r5.u32);
	// lwz r3,6236(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6236);
	// rlwimi r4,r3,0,24,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xF0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r4,6236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6236, ctx.r4.u32);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r8,6236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6236);
	// rlwimi r9,r8,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,6236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6236, ctx.r9.u32);
loc_8307637C:
	// lhzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sth r9,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r9.u16);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8307637c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8307637C;
	// li r5,28284
	ctx.r5.s64 = 28284;
	// addi r4,r30,6496
	ctx.r4.s64 = ctx.r30.s64 + 6496;
	// addi r3,r31,6496
	ctx.r3.s64 = ctx.r31.s64 + 6496;
	// bl 0x831ce980
	ctx.lr = 0x830763A4;
	sub_831CE980(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,34780
	ctx.r11.u64 = ctx.r11.u64 | 34780;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// ori r8,r4,34792
	ctx.r8.u64 = ctx.r4.u64 | 34792;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r6,r10,34784
	ctx.r6.u64 = ctx.r10.u64 | 34784;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,34800
	ctx.r10.u64 = ctx.r11.u64 | 34800;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r11,r4,34804
	ctx.r11.u64 = ctx.r4.u64 | 34804;
	// ori r7,r9,34788
	ctx.r7.u64 = ctx.r9.u64 | 34788;
	// ori r9,r3,34796
	ctx.r9.u64 = ctx.r3.u64 | 34796;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r11,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// lwzx r5,r30,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// stwx r6,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// lbzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stbx r5,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u8);
	// bl 0x83074c70
	ctx.lr = 0x83076420;
	sub_83074C70(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r11,r4,38812
	ctx.r11.u64 = ctx.r4.u64 | 38812;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83074fb8
	ctx.lr = 0x83076434;
	sub_83074FB8(ctx, base);
	// lis r3,6
	ctx.r3.s64 = 393216;
	// addis r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 458752;
	// ori r11,r3,50744
	ctx.r11.u64 = ctx.r3.u64 | 50744;
	// addi r10,r10,-14692
	ctx.r10.s64 = ctx.r10.s64 + -14692;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// li r9,40
	ctx.r9.s64 = 40;
	// addi r11,r11,-14764
	ctx.r11.s64 = ctx.r11.s64 + -14764;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
loc_83076468:
	// lwz r8,-92(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r8.u32);
	// lwz r7,-88(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -88);
	// stw r7,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// lwz r6,-84(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -84);
	// stw r6,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// lwz r4,-80(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -80);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r3,-80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -80);
	// rlwimi r8,r3,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lhz r7,-76(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -76);
	// sth r7,-4(r11)
	PPC_STORE_U16(ctx.r11.u32 + -4, ctx.r7.u16);
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lhz r5,-68(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -68);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lwz r4,-68(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -68);
	// sth r4,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// lwz r8,-64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lhz r7,-60(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -60);
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// lwz r6,-56(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -56);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r5,-52(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -52);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r4,-48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -48);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r8,-44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -44);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r6,-44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -44);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lhz r5,-40(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -40);
	// sth r5,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r5.u16);
	// lwz r4,-36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lhz r3,-32(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -32);
	// sth r3,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r3.u16);
	// lwz r8,-32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	// sth r8,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r8.u16);
	// lwz r6,-28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lhz r5,-24(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -24);
	// sth r5,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r5.u16);
	// lwz r4,-20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// stw r4,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// lwz r3,-16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r8,-12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r6,-8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// lwz r4,-8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// lhz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// sth r3,68(r11)
	PPC_STORE_U16(ctx.r11.u32 + 68, ctx.r3.u16);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r7,76(r11)
	PPC_STORE_U16(ctx.r11.u32 + 76, ctx.r7.u16);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// sth r6,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r6.u16);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// lhz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// sth r3,84(r11)
	PPC_STORE_U16(ctx.r11.u32 + 84, ctx.r3.u16);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r6,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r4.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwimi r8,r3,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// sth r7,104(r11)
	PPC_STORE_U16(ctx.r11.u32 + 104, ctx.r7.u16);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r6,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r6.u32);
	// lhz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// sth r5,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r5.u16);
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// sth r4,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r4.u16);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// lhz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// sth r7,120(r11)
	PPC_STORE_U16(ctx.r11.u32 + 120, ctx.r7.u16);
	// lwz r6,52(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r6,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r6.u32);
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r4,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r4.u32);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r3.u32);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r7,64(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r6.u32);
	// lhz r5,68(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 68);
	// sth r5,140(r11)
	PPC_STORE_U16(ctx.r11.u32 + 140, ctx.r5.u16);
	// lwz r4,72(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r4,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r4.u32);
	// lhz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 76);
	// sth r3,148(r11)
	PPC_STORE_U16(ctx.r11.u32 + 148, ctx.r3.u16);
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r7,150(r11)
	PPC_STORE_U16(ctx.r11.u32 + 150, ctx.r7.u16);
	// lwz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r6,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r6.u32);
	// lhz r5,84(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 84);
	// addi r10,r10,180
	ctx.r10.s64 = ctx.r10.s64 + 180;
	// sth r5,156(r11)
	PPC_STORE_U16(ctx.r11.u32 + 156, ctx.r5.u16);
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// bne 0x83076468
	if (!cr0.eq) goto loc_83076468;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// ori r10,r11,57952
	ctx.r10.u64 = ctx.r11.u64 | 57952;
	// ori r11,r9,57956
	ctx.r11.u64 = ctx.r9.u64 | 57956;
	// lis r4,6
	ctx.r4.s64 = 393216;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// ori r6,r4,57957
	ctx.r6.u64 = ctx.r4.u64 | 57957;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// ori r7,r9,57958
	ctx.r7.u64 = ctx.r9.u64 | 57958;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lbzx r5,r30,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// ori r8,r8,57959
	ctx.r8.u64 = ctx.r8.u64 | 57959;
	// stbx r5,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u8);
	// ori r10,r11,57984
	ctx.r10.u64 = ctx.r11.u64 | 57984;
	// lbzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// stbx r3,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u8);
	// lis r4,6
	ctx.r4.s64 = 393216;
	// ori r11,r11,58008
	ctx.r11.u64 = ctx.r11.u64 | 58008;
	// ori r9,r4,57960
	ctx.r9.u64 = ctx.r4.u64 | 57960;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// add r23,r30,r11
	ctx.r23.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// add r4,r30,r9
	ctx.r4.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lbzx r6,r30,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// add r28,r31,r9
	ctx.r28.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r27,r30,r10
	ctx.r27.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lis r25,6
	ctx.r25.s64 = 393216;
	// stbx r6,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u8);
	// ori r7,r25,58032
	ctx.r7.u64 = ctx.r25.u64 | 58032;
	// lbzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// stbx r5,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u8);
	// lbz r3,1(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r3,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r3.u8);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lhz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r9,8(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8, ctx.r9.u16);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r6.u32);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwimi r5,r3,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r5.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r9.u32);
	// lbzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stbx r8,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbz r6,1(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// stb r6,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r6.u8);
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r5,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r5.u32);
	// add r5,r31,r24
	ctx.r5.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lhz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// sth r4,8(r26)
	PPC_STORE_U16(ctx.r26.u32 + 8, ctx.r4.u16);
	// add r4,r30,r7
	ctx.r4.u64 = ctx.r30.u64 + ctx.r7.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r3,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r3.u32);
	// add r3,r31,r7
	ctx.r3.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r10.u32);
	// lwz r6,20(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rlwimi r8,r6,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r8.u32);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lis r27,6
	ctx.r27.s64 = 393216;
	// ori r10,r10,58084
	ctx.r10.u64 = ctx.r10.u64 | 58084;
	// ori r8,r11,58056
	ctx.r8.u64 = ctx.r11.u64 | 58056;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// ori r10,r27,58092
	ctx.r10.u64 = ctx.r27.u64 | 58092;
	// lbz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// add r6,r30,r8
	ctx.r6.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r28,r31,r8
	ctx.r28.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// stb r27,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r27.u8);
	// ori r11,r9,58088
	ctx.r11.u64 = ctx.r9.u64 | 58088;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// add r24,r30,r11
	ctx.r24.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ori r9,r9,58080
	ctx.r9.u64 = ctx.r9.u64 | 58080;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lbz r27,1(r23)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1);
	// stb r27,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r27.u8);
	// lwz r27,4(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r27,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r27.u32);
	// lhz r27,8(r23)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r23.u32 + 8);
	// sth r27,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r27.u16);
	// lwz r27,12(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// stw r27,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r27.u32);
	// lwz r27,16(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// stw r27,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r27.u32);
	// lwz r27,20(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lwz r21,20(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// rlwimi r21,r27,0,0,13
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0xFFFC0000) | (ctx.r21.u64 & 0xFFFFFFFF0003FFFF);
	// stw r21,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r21.u32);
	// lwz r27,20(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rotlwi r23,r21,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// rlwimi r23,r27,0,14,31
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x3FFFF) | (ctx.r23.u64 & 0xFFFFFFFFFFFC0000);
	// stw r23,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r23.u32);
	// lbzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// stbx r5,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u8);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lhz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lbzx r3,r30,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// stbx r3,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u8);
	// lbz r8,1(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// stb r8,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r8.u8);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// lhz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// sth r5,8(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8, ctx.r5.u16);
	// lwz r4,12(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r3,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// lwz r8,20(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// lwz r4,20(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r5.u32);
	// ori r6,r8,58090
	ctx.r6.u64 = ctx.r8.u64 | 58090;
	// ori r5,r7,58091
	ctx.r5.u64 = ctx.r7.u64 | 58091;
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// ori r11,r11,58093
	ctx.r11.u64 = ctx.r11.u64 | 58093;
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r11,r11,-7440
	ctx.r11.s64 = ctx.r11.s64 + -7440;
	// lwzx r9,r30,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// stwx r9,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u32);
	// lhz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// sthx r8,r31,r22
	PPC_STORE_U16(ctx.r31.u32 + ctx.r22.u32, ctx.r8.u16);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stbx r8,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u8);
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stbx r6,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u8);
	// lbzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// stbx r8,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r6,r30,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// stbx r6,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u8);
loc_8307695C:
	// li r8,5
	ctx.r8.s64 = 5;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83076970:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83076970
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83076970;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x8307695c
	if (!cr0.eq) goto loc_8307695C;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// ori r11,r11,58736
	ctx.r11.u64 = ctx.r11.u64 | 58736;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83075250
	ctx.lr = 0x8307699C;
	sub_83075250(ctx, base);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r10,r10,1908
	ctx.r10.u64 = ctx.r10.u64 | 1908;
	// ori r11,r9,1912
	ctx.r11.u64 = ctx.r9.u64 | 1912;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwimi r4,r3,0,2,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFC0000000);
	// stwx r4,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,2,3
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x30000000) | (ctx.r3.u64 & 0xFFFFFFFFCFFFFFFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,4,5
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xC000000) | (ctx.r3.u64 & 0xFFFFFFFFF3FFFFFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,6,7
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3000000) | (ctx.r3.u64 & 0xFFFFFFFFFCFFFFFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,8,10
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xE00000) | (ctx.r3.u64 & 0xFFFFFFFFFF1FFFFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,11,12
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x180000) | (ctx.r3.u64 & 0xFFFFFFFFFFE7FFFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,13,14
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x60000) | (ctx.r3.u64 & 0xFFFFFFFFFFF9FFFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r4,r3,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r4,r3,0,15,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x1C000) | (ctx.r4.u64 & 0xFFFFFFFFFFFE3FFF);
	// stwx r4,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,18,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3000) | (ctx.r3.u64 & 0xFFFFFFFFFFFFCFFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,20,21
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xC00) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF3FF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r4,r3,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r4,r3,0,22,24
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x380) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFC7F);
	// stwx r4,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,25,27
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x70) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF8F);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r4,0,28,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF0);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// ori r10,r8,1916
	ctx.r10.u64 = ctx.r8.u64 | 1916;
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r8,r9,0,3,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFE0000000);
	// stwx r8,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r4,r3,0,3,6
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x1E000000) | (ctx.r4.u64 & 0xFFFFFFFFE1FFFFFF);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stwx r4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,7,10
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x1E00000) | (ctx.r9.u64 & 0xFFFFFFFFFE1FFFFF);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// ori r11,r7,1920
	ctx.r11.u64 = ctx.r7.u64 | 1920;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r29,7
	ctx.r29.s64 = 458752;
	// rlwimi r3,r7,0,11,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1C0000) | (ctx.r3.u64 & 0xFFFFFFFFFFE3FFFF);
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r28,r3,0,14,17
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3C000) | (ctx.r28.u64 & 0xFFFFFFFFFFFC3FFF);
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// rotlwi r28,r28,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r28,r3,0,18,21
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3C00) | (ctx.r28.u64 & 0xFFFFFFFFFFFFC3FF);
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// rotlwi r28,r28,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r28,r3,0,22,24
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x380) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFC7F);
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// rotlwi r28,r28,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r28,r3,0,25,28
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x78) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFF87);
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r3,r5,0,29,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x7) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r6,r8,0,4,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFF) | (ctx.r6.u64 & 0xFFFFFFFFF0000000);
	// stwx r6,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r5,0,4,8
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xF800000) | (ctx.r3.u64 & 0xFFFFFFFFF07FFFFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r6,r8,0,9,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7C0000) | (ctx.r6.u64 & 0xFFFFFFFFFF83FFFF);
	// stwx r6,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r3,r5,0,14,18
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3E000) | (ctx.r3.u64 & 0xFFFFFFFFFFFC1FFF);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r8,r3,0,24,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFFFFFFFFFFE0FF) | (ctx.r8.u64 & 0x1F00);
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r5,r6,0,24,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xF0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF0F);
	// stwx r5,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwimi r8,r3,0,28,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r6,r7,0,2,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFFFFF) | (ctx.r6.u64 & 0xFFFFFFFFC0000000);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stwx r6,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r5,r3,0,2,3
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x30000000) | (ctx.r5.u64 & 0xFFFFFFFFCFFFFFFF);
	// stwx r5,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r10,r8,0,4,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xC000000) | (ctx.r10.u64 & 0xFFFFFFFFF3FFFFFF);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r7,r6,0,6,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3000000) | (ctx.r7.u64 & 0xFFFFFFFFFCFFFFFF);
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// ori r11,r29,1924
	ctx.r11.u64 = ctx.r29.u64 | 1924;
	// rlwimi r5,r3,0,8,9
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xC00000) | (ctx.r5.u64 & 0xFFFFFFFFFF3FFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r8,r7,0,10,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x300000) | (ctx.r8.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r5,r6,0,12,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xC0000) | (ctx.r5.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r8,0,14,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x30000) | (ctx.r7.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r6,r5,0,16,17
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xC000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r8,0,18,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3000) | (ctx.r7.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r5,r6,0,20,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xC00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF3FF);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r8,0,22,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x300) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFCFF);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r5,r6,0,24,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF3F);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r8,0,26,27
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x30) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r5,r6,0,28,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r8,r9,0,30,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r7,r10,0,2,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFC0000000);
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r6,r5,0,2,3
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x30000000) | (ctx.r6.u64 & 0xFFFFFFFFCFFFFFFF);
	// stwx r6,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r4,r10,0,4,5
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xC000000) | (ctx.r4.u64 & 0xFFFFFFFFF3FFFFFF);
	// stwx r4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,6,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3000000) | (ctx.r9.u64 & 0xFFFFFFFFFCFFFFFF);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r6,r7,0,8,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xC00000) | (ctx.r6.u64 & 0xFFFFFFFFFF3FFFFF);
	// stwx r6,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r5,r4,0,10,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x300000) | (ctx.r5.u64 & 0xFFFFFFFFFFCFFFFF);
	// stwx r5,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r10,r9,0,12,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xC0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF3FFFF);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r10,r8,0,14,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x30000) | (ctx.r10.u64 & 0xFFFFFFFFFFFCFFFF);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r6,r7,0,16,17
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xC000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF3FFF);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stwx r6,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r5,r4,0,18,19
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3000) | (ctx.r5.u64 & 0xFFFFFFFFFFFFCFFF);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stwx r5,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r10,r9,0,20,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xC00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF3FF);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r8,r7,0,22,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x300) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFCFF);
	// stwx r8,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r6,r5,0,24,24
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x80) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF7F);
	// stwx r6,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r4,r10,0,25,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFBF);
	// stwx r4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r9,r8,0,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r7,r6,0,27,27
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x10) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFEF);
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r5,r4,0,28,28
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x8) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF7);
	// stwx r5,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwimi r10,r9,0,29,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076DC8"))) PPC_WEAK_FUNC(sub_83076DC8);
PPC_FUNC_IMPL(__imp__sub_83076DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r31,280
	ctx.r31.s64 = 280;
loc_83076DE0:
	// lhz r30,-12(r8)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + -12);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r5,r9,-4
	ctx.r5.s64 = ctx.r9.s64 + -4;
	// addi r6,r8,-12
	ctx.r6.s64 = ctx.r8.s64 + -12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// sth r30,-4(r9)
	PPC_STORE_U16(ctx.r9.u32 + -4, ctx.r30.u16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwzx r5,r4,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lbz r7,-4(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + -4);
	// stb r7,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
loc_83076E1C:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// lwzx r7,r11,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r7,r5,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwimi r7,r5,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r7,r5,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r7,52(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// lwz r5,52(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwimi r7,r5,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r5,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// lwz r7,64(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r5,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwimi r7,r5,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwzu r7,72(r10)
	ea = 72 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bdnz 0x83076e1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83076E1C;
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r8,r8,592
	ctx.r8.s64 = ctx.r8.s64 + 592;
	// addi r9,r9,592
	ctx.r9.s64 = ctx.r9.s64 + 592;
	// bne 0x83076de0
	if (!cr0.eq) goto loc_83076DE0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076F54"))) PPC_WEAK_FUNC(sub_83076F54);
PPC_FUNC_IMPL(__imp__sub_83076F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83076F58"))) PPC_WEAK_FUNC(sub_83076F58);
PPC_FUNC_IMPL(__imp__sub_83076F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83076F60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r29,80
	ctx.r29.s64 = 80;
loc_83076F78:
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075360
	ctx.lr = 0x83076F84;
	sub_83075360(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,1856
	ctx.r31.s64 = ctx.r31.s64 + 1856;
	// bne 0x83076f78
	if (!cr0.eq) goto loc_83076F78;
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r31,r31,17408
	ctx.r31.s64 = ctx.r31.s64 + 17408;
loc_83076F9C:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83073788
	ctx.lr = 0x83076FA8;
	sub_83073788(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// bne 0x83076f9c
	if (!cr0.eq) goto loc_83076F9C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,18608
	ctx.r11.u64 = ctx.r11.u64 | 18608;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x830754f0
	ctx.lr = 0x83076FC8;
	sub_830754F0(ctx, base);
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// li r29,80
	ctx.r29.s64 = 80;
	// addi r31,r31,18716
	ctx.r31.s64 = ctx.r31.s64 + 18716;
loc_83076FD4:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83075360
	ctx.lr = 0x83076FE0;
	sub_83075360(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,1856
	ctx.r31.s64 = ctx.r31.s64 + 1856;
	// bne 0x83076fd4
	if (!cr0.eq) goto loc_83076FD4;
	// addis r31,r30,5
	ctx.r31.s64 = ctx.r30.s64 + 327680;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r31,r31,-29412
	ctx.r31.s64 = ctx.r31.s64 + -29412;
loc_83076FF8:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83073788
	ctx.lr = 0x83077004;
	sub_83073788(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// bne 0x83076ff8
	if (!cr0.eq) goto loc_83076FF8;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,37324
	ctx.r11.u64 = ctx.r11.u64 | 37324;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x830754f0
	ctx.lr = 0x83077024;
	sub_830754F0(ctx, base);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r10,37432
	ctx.r11.u64 = ctx.r10.u64 | 37432;
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83075360
	ctx.lr = 0x83077040;
	sub_83075360(ctx, base);
	// lwz r9,1856(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,1856(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1856, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077054"))) PPC_WEAK_FUNC(sub_83077054);
PPC_FUNC_IMPL(__imp__sub_83077054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83077058"))) PPC_WEAK_FUNC(sub_83077058);
PPC_FUNC_IMPL(__imp__sub_83077058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83077060;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r27,851
	ctx.r27.s64 = 851;
loc_83077078:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830739b8
	ctx.lr = 0x83077084;
	sub_830739B8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,280
	ctx.r28.s64 = ctx.r28.s64 + 280;
	// bne 0x83077078
	if (!cr0.eq) goto loc_83077078;
	// li r9,20
	ctx.r9.s64 = 20;
	// addis r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 262144;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addi r10,r10,-23868
	ctx.r10.s64 = ctx.r10.s64 + -23868;
	// addi r11,r11,-23856
	ctx.r11.s64 = ctx.r11.s64 + -23856;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830770A8:
	// ld r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4);
	// std r9,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r9.u64);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// ld r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28);
	// std r5,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// ld r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// std r8,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r8.u64);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r3,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// lwz r6,68(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,72(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// ld r4,76(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 76);
	// std r4,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r4.u64);
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwimi r9,r3,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r6,88(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// lwz r4,88(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// ld r7,100(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 100);
	// std r7,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r7.u64);
	// lwz r5,108(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// lwz r7,112(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// lwz r5,116(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r5,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// lwzu r9,120(r10)
	ea = 120 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bdnz 0x830770a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830770A8;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addis r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 262144;
	// ori r11,r11,44072
	ctx.r11.u64 = ctx.r11.u64 | 44072;
	// li r27,70
	ctx.r27.s64 = 70;
	// addi r28,r28,-21460
	ctx.r28.s64 = ctx.r28.s64 + -21460;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_83077284:
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aed2d0
	ctx.lr = 0x83077290;
	sub_82AED2D0(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,476
	ctx.r28.s64 = ctx.r28.s64 + 476;
	// bne 0x83077284
	if (!cr0.eq) goto loc_83077284;
	// li r9,14
	ctx.r9.s64 = 14;
	// addis r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 262144;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addi r10,r10,11896
	ctx.r10.s64 = ctx.r10.s64 + 11896;
	// addi r11,r11,11876
	ctx.r11.s64 = ctx.r11.s64 + 11876;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830772B4:
	// lwz r7,-36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lwz r6,-16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,-36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r4.u32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r3,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r3.u32);
	// lwz r7,-8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// lwz r6,-4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lbzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// lhzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r9,r7,0,16,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r6,r5,0,17,17
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x4000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r4,r3,0,19,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFFFFFFFFFFDFFF) | (ctx.r4.u64 & 0x2000);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r9,r7,0,19,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFEFFF);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r5,r6,0,20,20
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x800) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF7FF);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r3,r4,0,21,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF800);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r9,-16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,-16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r6,-12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,-8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r3,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r3.u8);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r7,r6,0,16,16
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x8000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF7FFF);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r5,r4,0,17,17
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x4000) | (ctx.r5.u64 & 0xFFFFFFFFFFFFBFFF);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r3,r9,0,18,18
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x2000) | (ctx.r3.u64 & 0xFFFFFFFFFFFFDFFF);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r8,r7,0,19,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFEFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r6,r5,0,20,20
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x800) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r4,r3,0,21,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7FF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFF800);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// stb r9,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r9.u8);
	// lhz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// stb r8,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r8.u8);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r6,r5,0,16,16
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x8000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r4,r3,0,17,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x4000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r9,0,18,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x2000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r7,r6,0,19,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x1000) | (ctx.r7.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r5,r4,0,20,20
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x800) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF7FF);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r9,r3,0,21,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x7FF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF800);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r3,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lbz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// stb r8,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r8.u8);
	// lhz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// stb r7,61(r11)
	PPC_STORE_U8(ctx.r11.u32 + 61, ctx.r7.u8);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r5,r4,0,16,16
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x8000) | (ctx.r5.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r3,r9,0,17,17
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x4000) | (ctx.r3.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r8,r7,0,18,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x2000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r5,0,19,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x1000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwimi r3,r4,0,20,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF7FF);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r9,r8,0,21,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7FF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF800);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r3,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lbz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// stb r7,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r7.u8);
	// lhz r6,60(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 60);
	// stb r6,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r6.u8);
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwimi r3,r4,0,16,16
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x8000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r9,r8,0,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r6,60(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r7,r6,0,18,18
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x2000) | (ctx.r7.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r7,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r4,r5,0,19,19
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x1000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r4,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r3,r9,0,20,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF7FF);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// rlwimi r8,r7,0,21,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x7FF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF800);
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// bdnz 0x830772b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830772B4;
	// li r9,14
	ctx.r9.s64 = 14;
	// addis r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 262144;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addi r10,r10,13296
	ctx.r10.s64 = ctx.r10.s64 + 13296;
	// addi r11,r11,13276
	ctx.r11.s64 = ctx.r11.s64 + 13276;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83077628:
	// lwz r7,-36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lwz r6,-16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r6.u32);
	// lwz r5,-36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r5.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r4,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r4.u32);
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lhzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r8,r9,0,16,16
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x8000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r7,r8,0,18,16
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFFBFFF) | (ctx.r7.u64 & 0x4000);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r7,r6,0,18,18
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x2000) | (ctx.r7.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r5,r4,0,19,19
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1000) | (ctx.r5.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r5,r9,0,20,20
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x800) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r5,r8,0,21,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7FF) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF800);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r7,-16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwimi r3,r7,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r6,-16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwimi r6,r3,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,-12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r4,-8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r6,r5,0,16,16
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x8000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r4,r3,0,17,17
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x4000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r4,r9,0,18,18
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x2000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r8,r4,0,20,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFFFFFFEFFF) | (ctx.r8.u64 & 0x1000);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r7,r8,0,21,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r7.u64 & 0x800);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r6,r7,0,0,20
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFF800) | (ctx.r6.u64 & 0xFFFFFFFF000007FF);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lbz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// stb r6,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r6.u8);
	// lhz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// stb r5,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r5.u8);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r3,0,16,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r9,0,18,16
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFBFFF) | (ctx.r8.u64 & 0x4000);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r7,0,18,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x2000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r6,0,19,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x1000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r5,0,20,20
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x800) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r4,0,21,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF800);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r3,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r5,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r5.u32);
	// lbz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// stb r4,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r4.u8);
	// lhz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// stb r3,61(r11)
	PPC_STORE_U8(ctx.r11.u32 + 61, ctx.r3.u8);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r8,r7,0,16,16
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x8000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r8,0,18,16
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFFBFFF) | (ctx.r6.u64 & 0x4000);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r5,0,18,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x2000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r4,0,19,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r3,0,20,20
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x800) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r9,0,21,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF800);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r5,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// lbz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// stb r9,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r9.u8);
	// lhz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 60);
	// stb r8,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r8.u8);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r6,r5,0,16,16
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x8000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r6,r4,0,17,17
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x4000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r6,r3,0,18,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x2000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r6,r9,0,19,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r6,r8,0,20,20
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x800) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// rlwimi r6,r7,0,21,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x7FF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF800);
	// stw r6,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// bdnz 0x83077628
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83077628;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,14660
	ctx.r11.u64 = ctx.r11.u64 | 14660;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r11,r10,14664
	ctx.r11.u64 = ctx.r10.u64 | 14664;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stbx r7,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u8);
	// bl 0x830756c8
	ctx.lr = 0x83077940;
	sub_830756C8(ctx, base);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// ori r10,r6,17012
	ctx.r10.u64 = ctx.r6.u64 | 17012;
	// ori r11,r5,17016
	ctx.r11.u64 = ctx.r5.u64 | 17016;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r9,14
	ctx.r9.s64 = 14;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r11,17028
	ctx.r11.s64 = ctx.r11.s64 + 17028;
	// lbzx r6,r29,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// stbx r6,r30,r3
	PPC_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r6.u8);
	// lwzx r5,r29,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// stwx r5,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r5.u32);
loc_83077984:
	// ld r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4);
	// std r9,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r9.u64);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// ld r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 28);
	// std r5,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// ld r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// std r8,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r8.u64);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r3,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,64(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r6,68(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,72(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// ld r4,76(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 76);
	// std r4,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r4.u64);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwimi r3,r9,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r3.u32);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r6,88(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// lwz r4,88(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lwz r8,96(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// ld r7,100(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 100);
	// std r7,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r7.u64);
	// lwz r6,108(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r5.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// lwz r6,112(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// lwz r5,116(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r5,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// lwzu r9,120(r10)
	ea = 120 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bdnz 0x83077984
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83077984;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,18700
	ctx.r11.u64 = ctx.r11.u64 | 18700;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// ori r11,r10,18704
	ctx.r11.u64 = ctx.r10.u64 | 18704;
	// ori r4,r9,18708
	ctx.r4.u64 = ctx.r9.u64 | 18708;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwzx r3,r29,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r5,r11,18712
	ctx.r5.u64 = ctx.r11.u64 | 18712;
	// ori r6,r10,18716
	ctx.r6.u64 = ctx.r10.u64 | 18716;
	// stwx r3,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r7,r9,18720
	ctx.r7.u64 = ctx.r9.u64 | 18720;
	// ori r8,r8,18724
	ctx.r8.u64 = ctx.r8.u64 | 18724;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r9,r3,18728
	ctx.r9.u64 = ctx.r3.u64 | 18728;
	// ori r10,r11,18732
	ctx.r10.u64 = ctx.r11.u64 | 18732;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,18736
	ctx.r11.u64 = ctx.r11.u64 | 18736;
	// lwzx r31,r29,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// stwx r31,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r31.u32);
	// lwzx r31,r29,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// stwx r31,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r31.u32);
	// lwzx r4,r29,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// stwx r4,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwzx r5,r29,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// stwx r5,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// stwx r4,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// stwx r7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwzx r6,r29,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// stwx r6,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwzx r5,r29,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stwx r5,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stwx r4,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077C00"))) PPC_WEAK_FUNC(sub_83077C00);
PPC_FUNC_IMPL(__imp__sub_83077C00) {
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
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
loc_83077C98:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwimi r8,r6,0,6,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFC000000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwimi r7,r6,0,14,5
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFC03FFFF) | (ctx.r7.u64 & 0x3FC0000);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwimi r4,r3,0,20,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFFFFFFFFFC0FFF) | (ctx.r4.u64 & 0x3F000);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwimi r8,r6,0,26,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFFFF03F) | (ctx.r8.u64 & 0xFC0);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwimi r4,r3,0,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r5,r8,0,0,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r5,r6,0,12,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFF000FF);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stb r4,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r4.u8);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r4,r5,0,0,5
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFC000000) | (ctx.r4.u64 & 0xFFFFFFFF03FFFFFF);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r3,0,6,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FC0000) | (ctx.r8.u64 & 0xFFFFFFFFFC03FFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r6,r7,0,14,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3F000) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0FFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r4,r5,0,20,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFF03F);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r3,0,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r6,r7,0,0,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFF00000) | (ctx.r6.u64 & 0xFFFFFFFF000FFFFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r4,r5,0,12,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFF000FF);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stb r3,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r3.u8);
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,28(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r8,r3,0,0,5
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFC000000) | (ctx.r8.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r7,r6,0,6,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FC0000) | (ctx.r7.u64 & 0xFFFFFFFFFC03FFFF);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r4,r5,0,14,19
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3F000) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r3,r8,0,20,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF03F);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r7,r6,0,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r4,r5,0,0,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r3,r8,0,12,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFF000FF);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stb r7,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r7.u8);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r8,r3,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r6,r7,0,0,5
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFC000000) | (ctx.r6.u64 & 0xFFFFFFFF03FFFFFF);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r5,0,6,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FC0000) | (ctx.r4.u64 & 0xFFFFFFFFFC03FFFF);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r3,r8,0,14,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3F000) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0FFF);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r7,r6,0,20,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFC0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF03F);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r5,0,26,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3F) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r8,r3,0,0,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFF00000) | (ctx.r8.u64 & 0xFFFFFFFF000FFFFF);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwimi r6,r7,0,12,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFF000FF);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwzu r8,48(r10)
	ea = 48 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// stb r5,43(r11)
	PPC_STORE_U8(ctx.r11.u32 + 43, ctx.r5.u8);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x83077c98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83077C98;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r10,r30,432
	ctx.r10.s64 = ctx.r30.s64 + 432;
	// addi r11,r31,440
	ctx.r11.s64 = ctx.r31.s64 + 440;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83077F14:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r3,r6,0,6,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFFFF) | (ctx.r3.u64 & 0xFFFFFFFFFC000000);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r7,r6,0,6,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FC0000) | (ctx.r7.u64 & 0xFFFFFFFFFC03FFFF);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r4,r7,0,20,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFFFC0FFF) | (ctx.r4.u64 & 0x3F000);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r4,r3,0,20,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFF03F);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r7,r6,0,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r5,r4,0,0,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r3,r5,0,24,11
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFFFFFF000FF) | (ctx.r3.u64 & 0xFFF00);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r5,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r4,r8,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r8,r3,0,0,5
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFC000000) | (ctx.r8.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r7,r8,0,14,5
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFC03FFFF) | (ctx.r7.u64 & 0x3FC0000);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r6,r7,0,20,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFFFFFC0FFF) | (ctx.r6.u64 & 0x3F000);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r5,r6,0,26,19
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFFFF03F) | (ctx.r5.u64 & 0xFC0);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r4,r5,0,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r8,r3,0,0,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFF00000) | (ctx.r8.u64 & 0xFFFFFFFF000FFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r7,r8,0,24,11
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF000FF) | (ctx.r7.u64 & 0xFFF00);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stb r6,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r6.u8);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwimi r8,r3,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r6,r7,0,0,5
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFC000000) | (ctx.r6.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r5,r6,0,14,5
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFC03FFFF) | (ctx.r5.u64 & 0x3FC0000);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r4,r3,0,14,19
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3F000) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r4,r8,0,20,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFF03F);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r4,r7,0,26,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3F) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r5,r6,0,0,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r5,r4,0,12,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFF000FF);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stb r3,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r3.u8);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r4,r3,0,0,5
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFC000000) | (ctx.r4.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r8,0,6,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FC0000) | (ctx.r4.u64 & 0xFFFFFFFFFC03FFFF);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r7,0,14,19
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3F000) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r6,0,20,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFC0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFF03F);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r5,0,26,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3F) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r3,r4,0,0,11
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFF00000) | (ctx.r3.u64 & 0xFFFFFFFF000FFFFF);
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwimi r3,r8,0,12,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFF00) | (ctx.r3.u64 & 0xFFFFFFFFFFF000FF);
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwzu r8,48(r10)
	ea = 48 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,43(r11)
	PPC_STORE_U8(ctx.r11.u32 + 43, ctx.r7.u8);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x83077f14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83077F14;
	// addi r4,r30,820
	ctx.r4.s64 = ctx.r30.s64 + 820;
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
	// bl 0x83075858
	ctx.lr = 0x83078138;
	sub_83075858(ctx, base);
	// addi r4,r30,1468
	ctx.r4.s64 = ctx.r30.s64 + 1468;
	// addi r3,r31,1468
	ctx.r3.s64 = ctx.r31.s64 + 1468;
	// bl 0x83075858
	ctx.lr = 0x83078144;
	sub_83075858(ctx, base);
	// lwz r11,2116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r11.u32);
	// lwz r10,2120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// stw r10,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83078170"))) PPC_WEAK_FUNC(sub_83078170);
PPC_FUNC_IMPL(__imp__sub_83078170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83078178;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r28,r11,16008
	ctx.r28.s64 = ctx.r11.s64 + 16008;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830782d0
	if (!cr6.eq) goto loc_830782D0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830782d0
	if (!cr6.eq) goto loc_830782D0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830782d0
	if (!cr6.eq) goto loc_830782D0;
	// bl 0x831156e8
	ctx.lr = 0x830781AC;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,31
	ctx.r10.s64 = 31;
	// ori r9,r11,60636
	ctx.r9.u64 = ctx.r11.u64 | 60636;
	// lis r4,71
	ctx.r4.s64 = 4653056;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,58340
	ctx.r4.u64 = ctx.r4.u64 | 58340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r24,r25,r9
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82595718
	ctx.lr = 0x830781D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8307820c
	if (cr6.eq) goto loc_8307820C;
	// li r11,21033
	ctx.r11.s64 = 21033;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r31,21032
	ctx.r31.s64 = 21032;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_830781F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b00d00
	ctx.lr = 0x830781FC;
	sub_82B00D00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// bge 0x830781f4
	if (!cr0.lt) goto loc_830781F4;
	// b 0x83078210
	goto loc_83078210;
loc_8307820C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83078210:
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// lis r10,71
	ctx.r10.s64 = 4653056;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r11,13856
	ctx.r26.u64 = ctx.r11.u64 | 13856;
	// ori r27,r10,58336
	ctx.r27.u64 = ctx.r10.u64 | 58336;
loc_8307822C:
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82b00b98
	ctx.lr = 0x83078234;
	sub_82B00B98(ctx, base);
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bge cr6,0x83078258
	if (!cr6.lt) goto loc_83078258;
	// cmplwi cr6,r29,21097
	cr6.compare<uint32_t>(ctx.r29.u32, 21097, xer);
	// add r4,r25,r26
	ctx.r4.u64 = ctx.r25.u64 + ctx.r26.u64;
	// bge cr6,0x83078250
	if (!cr6.lt) goto loc_83078250;
	// add r4,r31,r25
	ctx.r4.u64 = ctx.r31.u64 + ctx.r25.u64;
loc_83078250:
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x83078258;
	sub_82B1E0E8(ctx, base);
loc_83078258:
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x8307822c
	if (cr6.lt) goto loc_8307822C;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// lbz r10,7568(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7568);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83078290
	if (!cr6.eq) goto loc_83078290;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83078290:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835265a8
	ctx.lr = 0x830782AC;
	sub_835265A8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830782c8
	if (!cr6.eq) goto loc_830782C8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830782C8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r11.u8);
loc_830782D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830782D8"))) PPC_WEAK_FUNC(sub_830782D8);
PPC_FUNC_IMPL(__imp__sub_830782D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830782E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// li r31,651
	ctx.r31.s64 = 651;
loc_830782F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e59148
	ctx.lr = 0x830782F8;
	sub_82E59148(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// bne 0x830782f0
	if (!cr0.eq) goto loc_830782F0;
	// addis r31,r29,158
	ctx.r31.s64 = ctx.r29.s64 + 10354688;
	// li r24,72
	ctx.r24.s64 = 72;
	// addi r31,r31,-14220
	ctx.r31.s64 = ctx.r31.s64 + -14220;
	// li r20,31
	ctx.r20.s64 = 31;
	// lis r23,-31754
	ctx.r23.s64 = -2081030144;
	// lis r26,-31773
	ctx.r26.s64 = -2082275328;
	// lis r25,-31773
	ctx.r25.s64 = -2082275328;
loc_83078320:
	// addi r27,r31,-8
	ctx.r27.s64 = ctx.r31.s64 + -8;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83078334;
	sub_831CDCF0(ctx, base);
	// ld r11,7604(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 7604);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// std r11,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r11.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,7652(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 7652);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,7652(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 7652);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_83078364:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f62f78
	ctx.lr = 0x8307836C;
	sub_82F62F78(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,188
	ctx.r28.s64 = ctx.r28.s64 + 188;
	// bne 0x83078364
	if (!cr0.eq) goto loc_83078364;
	// lwz r11,16032(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16032);
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r31,r31,5852
	ctx.r31.s64 = ctx.r31.s64 + 5852;
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// bne 0x83078320
	if (!cr0.eq) goto loc_83078320;
	// addis r30,r29,13
	ctx.r30.s64 = ctx.r29.s64 + 851968;
	// li r31,651
	ctx.r31.s64 = 651;
	// addi r30,r30,2224
	ctx.r30.s64 = ctx.r30.s64 + 2224;
loc_83078398:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8cb50
	ctx.lr = 0x830783A0;
	sub_82D8CB50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// bne 0x83078398
	if (!cr0.eq) goto loc_83078398;
	// addis r31,r29,19
	ctx.r31.s64 = ctx.r29.s64 + 1245184;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,300
	ctx.r27.s64 = 300;
	// addi r31,r31,20518
	ctx.r31.s64 = ctx.r31.s64 + 20518;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_830783C4:
	// addi r28,r31,-78
	ctx.r28.s64 = ctx.r31.s64 + -78;
	// li r5,548
	ctx.r5.s64 = 548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x830783D8;
	sub_831CDCF0(ctx, base);
	// li r10,58
	ctx.r10.s64 = 58;
	// addi r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 + 14;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830783E8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830783e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830783E8;
	// lwz r11,458(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 458);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// lwz r10,462(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 462);
	// rlwinm r9,r11,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// oris r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 4294901760;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// stw r9,458(r31)
	PPC_STORE_U32(ctx.r31.u32 + 458, ctx.r9.u32);
	// stw r8,462(r31)
	PPC_STORE_U32(ctx.r31.u32 + 462, ctx.r8.u32);
	// addi r31,r31,548
	ctx.r31.s64 = ctx.r31.s64 + 548;
	// sth r30,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r30.u16);
	// bne 0x830783c4
	if (!cr0.eq) goto loc_830783C4;
	// addis r30,r29,22
	ctx.r30.s64 = ctx.r29.s64 + 1441792;
	// li r31,1500
	ctx.r31.s64 = 1500;
	// addi r30,r30,-11768
	ctx.r30.s64 = ctx.r30.s64 + -11768;
loc_83078438:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20778
	ctx.lr = 0x83078440;
	sub_82F20778(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// bne 0x83078438
	if (!cr0.eq) goto loc_83078438;
	// addis r30,r29,118
	ctx.r30.s64 = ctx.r29.s64 + 7733248;
	// li r31,300
	ctx.r31.s64 = 300;
	// addi r30,r30,-16720
	ctx.r30.s64 = ctx.r30.s64 + -16720;
loc_83078458:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20be0
	ctx.lr = 0x83078460;
	sub_82F20BE0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// bne 0x83078458
	if (!cr0.eq) goto loc_83078458;
	// addis r30,r29,34
	ctx.r30.s64 = ctx.r29.s64 + 2228224;
	// li r31,9000
	ctx.r31.s64 = 9000;
	// addi r30,r30,2116
	ctx.r30.s64 = ctx.r30.s64 + 2116;
loc_83078478:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f208e8
	ctx.lr = 0x83078480;
	sub_82F208E8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// bne 0x83078478
	if (!cr0.eq) goto loc_83078478;
	// addis r3,r29,115
	ctx.r3.s64 = ctx.r29.s64 + 7536640;
	// addi r3,r3,-14300
	ctx.r3.s64 = ctx.r3.s64 + -14300;
	// bl 0x82f20a80
	ctx.lr = 0x83078498;
	sub_82F20A80(ctx, base);
	// addis r3,r29,34
	ctx.r3.s64 = ctx.r29.s64 + 2228224;
	// addi r3,r3,-18200
	ctx.r3.s64 = ctx.r3.s64 + -18200;
	// bl 0x83124548
	ctx.lr = 0x830784A4;
	sub_83124548(ctx, base);
	// addis r3,r29,127
	ctx.r3.s64 = ctx.r29.s64 + 8323072;
	// addi r3,r3,30656
	ctx.r3.s64 = ctx.r3.s64 + 30656;
	// bl 0x82f21060
	ctx.lr = 0x830784B0;
	sub_82F21060(ctx, base);
	// addis r3,r29,134
	ctx.r3.s64 = ctx.r29.s64 + 8781824;
	// addi r3,r3,30868
	ctx.r3.s64 = ctx.r3.s64 + 30868;
	// bl 0x82f233f0
	ctx.lr = 0x830784BC;
	sub_82F233F0(ctx, base);
	// addis r3,r29,129
	ctx.r3.s64 = ctx.r29.s64 + 8454144;
	// addi r3,r3,-20576
	ctx.r3.s64 = ctx.r3.s64 + -20576;
	// bl 0x82f21b40
	ctx.lr = 0x830784C8;
	sub_82F21B40(ctx, base);
	// addis r3,r29,142
	ctx.r3.s64 = ctx.r29.s64 + 9306112;
	// addi r3,r3,-32740
	ctx.r3.s64 = ctx.r3.s64 + -32740;
	// bl 0x82f22c90
	ctx.lr = 0x830784D4;
	sub_82F22C90(ctx, base);
	// addis r3,r29,146
	ctx.r3.s64 = ctx.r29.s64 + 9568256;
	// addi r3,r3,6552
	ctx.r3.s64 = ctx.r3.s64 + 6552;
	// bl 0x831286d8
	ctx.lr = 0x830784E0;
	sub_831286D8(ctx, base);
	// addis r3,r29,131
	ctx.r3.s64 = ctx.r29.s64 + 8585216;
	// addi r3,r3,14112
	ctx.r3.s64 = ctx.r3.s64 + 14112;
	// bl 0x83132c68
	ctx.lr = 0x830784EC;
	sub_83132C68(ctx, base);
	// addis r3,r29,146
	ctx.r3.s64 = ctx.r29.s64 + 9568256;
	// addi r3,r3,9772
	ctx.r3.s64 = ctx.r3.s64 + 9772;
	// bl 0x82f20ca0
	ctx.lr = 0x830784F8;
	sub_82F20CA0(ctx, base);
	// addis r3,r29,146
	ctx.r3.s64 = ctx.r29.s64 + 9568256;
	// addi r3,r3,20176
	ctx.r3.s64 = ctx.r3.s64 + 20176;
	// bl 0x82f20dc0
	ctx.lr = 0x83078504;
	sub_82F20DC0(ctx, base);
	// addis r3,r29,146
	ctx.r3.s64 = ctx.r29.s64 + 9568256;
	// addi r3,r3,22580
	ctx.r3.s64 = ctx.r3.s64 + 22580;
	// bl 0x82f20f10
	ctx.lr = 0x83078510;
	sub_82F20F10(ctx, base);
	// addis r3,r29,146
	ctx.r3.s64 = ctx.r29.s64 + 9568256;
	// addi r3,r3,22892
	ctx.r3.s64 = ctx.r3.s64 + 22892;
	// bl 0x83073130
	ctx.lr = 0x8307851C;
	sub_83073130(ctx, base);
	// addis r3,r29,151
	ctx.r3.s64 = ctx.r29.s64 + 9895936;
	// addi r3,r3,-23904
	ctx.r3.s64 = ctx.r3.s64 + -23904;
	// bl 0x830732d8
	ctx.lr = 0x83078528;
	sub_830732D8(ctx, base);
	// addis r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 10223616;
	// addi r3,r3,-13328
	ctx.r3.s64 = ctx.r3.s64 + -13328;
	// bl 0x83132130
	ctx.lr = 0x83078534;
	sub_83132130(ctx, base);
	// addis r3,r29,158
	ctx.r3.s64 = ctx.r29.s64 + 10354688;
	// addi r3,r3,-29080
	ctx.r3.s64 = ctx.r3.s64 + -29080;
	// bl 0x83129f98
	ctx.lr = 0x83078540;
	sub_83129F98(ctx, base);
	// addis r3,r29,158
	ctx.r3.s64 = ctx.r29.s64 + 10354688;
	// addi r3,r3,-15292
	ctx.r3.s64 = ctx.r3.s64 + -15292;
	// bl 0x8312dea8
	ctx.lr = 0x8307854C;
	sub_8312DEA8(ctx, base);
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lis r10,164
	ctx.r10.s64 = 10747904;
	// addi r28,r11,16008
	ctx.r28.s64 = ctx.r11.s64 + 16008;
	// lis r9,164
	ctx.r9.s64 = 10747904;
	// ori r8,r10,13900
	ctx.r8.u64 = ctx.r10.u64 | 13900;
	// ori r7,r9,13904
	ctx.r7.u64 = ctx.r9.u64 | 13904;
	// li r21,0
	ctx.r21.s64 = 0;
	// lbz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// addis r22,r29,164
	ctx.r22.s64 = ctx.r29.s64 + 10747904;
	// addi r22,r22,13916
	ctx.r22.s64 = ctx.r22.s64 + 13916;
	// stwx r21,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r21.u32);
	// stwx r21,r29,r7
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r21.u32);
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// bne cr6,0x830785f8
	if (!cr6.eq) goto loc_830785F8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83078718
	if (cr6.eq) goto loc_83078718;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830785A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83078718
	if (cr6.eq) goto loc_83078718;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addis r31,r29,164
	ctx.r31.s64 = ctx.r29.s64 + 10747904;
	// addi r31,r31,13908
	ctx.r31.s64 = ctx.r31.s64 + 13908;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830785C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830785E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831ce980
	ctx.lr = 0x830785F0;
	sub_831CE980(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830785F8:
	// addis r23,r29,164
	ctx.r23.s64 = ctx.r29.s64 + 10747904;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,71
	ctx.r11.s64 = 4653056;
	// addi r23,r23,13908
	ctx.r23.s64 = ctx.r23.s64 + 13908;
	// ori r24,r11,58336
	ctx.r24.u64 = ctx.r11.u64 | 58336;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// bne cr6,0x830786cc
	if (!cr6.eq) goto loc_830786CC;
	// bl 0x831156e8
	ctx.lr = 0x8307861C;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r4,71
	ctx.r4.s64 = 4653056;
	// ori r10,r11,60636
	ctx.r10.u64 = ctx.r11.u64 | 60636;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,58340
	ctx.r4.u64 = ctx.r4.u64 | 58340;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r25,r26,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// bl 0x82595718
	ctx.lr = 0x83078644;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83078678
	if (cr6.eq) goto loc_83078678;
	// li r11,21033
	ctx.r11.s64 = 21033;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r31,21032
	ctx.r31.s64 = 21032;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83078660:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b00d00
	ctx.lr = 0x83078668;
	sub_82B00D00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// bge 0x83078660
	if (!cr0.lt) goto loc_83078660;
	// b 0x8307867c
	goto loc_8307867C;
loc_83078678:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8307867C:
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// ori r27,r11,13856
	ctx.r27.u64 = ctx.r11.u64 | 13856;
loc_83078690:
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82b00b98
	ctx.lr = 0x83078698;
	sub_82B00B98(ctx, base);
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bge cr6,0x830786bc
	if (!cr6.lt) goto loc_830786BC;
	// cmplwi cr6,r29,21097
	cr6.compare<uint32_t>(ctx.r29.u32, 21097, xer);
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bge cr6,0x830786b4
	if (!cr6.lt) goto loc_830786B4;
	// add r4,r31,r26
	ctx.r4.u64 = ctx.r31.u64 + ctx.r26.u64;
loc_830786B4:
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x830786BC;
	sub_82B1E0E8(ctx, base);
loc_830786BC:
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// blt cr6,0x83078690
	if (cr6.lt) goto loc_83078690;
loc_830786CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831ce980
	ctx.lr = 0x830786DC;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83078718
	if (cr6.eq) goto loc_83078718;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x830786F4;
	sub_82595150(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83078708
	if (cr6.eq) goto loc_83078708;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82416268
	ctx.lr = 0x83078708;
	sub_82416268(ctx, base);
loc_83078708:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83078710;
	sub_82595170(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r21.u32);
loc_83078718:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83078720"))) PPC_WEAK_FUNC(sub_83078720);
PPC_FUNC_IMPL(__imp__sub_83078720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83078728;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83078734;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x8307873C;
	sub_831156E8(ctx, base);
	// addis r27,r28,96
	ctx.r27.s64 = ctx.r28.s64 + 6291456;
	// lwz r24,52(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r27,-4896
	ctx.r27.s64 = ctx.r27.s64 + -4896;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8307879c
	if (!cr6.gt) goto loc_8307879C;
	// addis r29,r28,72
	ctx.r29.s64 = ctx.r28.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r25,80
	ctx.r30.s64 = ctx.r25.s64 + 80;
	// addi r29,r29,7136
	ctx.r29.s64 = ctx.r29.s64 + 7136;
	// ori r26,r11,58144
	ctx.r26.u64 = ctx.r11.u64 | 58144;
loc_8307876C:
	// cmplwi cr6,r31,653
	cr6.compare<uint32_t>(ctx.r31.u32, 653, xer);
	// add r4,r28,r26
	ctx.r4.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bge cr6,0x8307877c
	if (!cr6.lt) goto loc_8307877C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8307877C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ace470
	ctx.lr = 0x83078784;
	sub_82ACE470(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8307876c
	if (cr6.lt) goto loc_8307876C;
loc_8307879C:
	// addis r27,r28,214
	ctx.r27.s64 = ctx.r28.s64 + 14024704;
	// addis r29,r25,158
	ctx.r29.s64 = ctx.r25.s64 + 10354688;
	// addi r27,r27,10896
	ctx.r27.s64 = ctx.r27.s64 + 10896;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-14228
	ctx.r29.s64 = ctx.r29.s64 + -14228;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_830787B4:
	// cmplwi cr6,r31,72
	cr6.compare<uint32_t>(ctx.r31.u32, 72, xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bge cr6,0x830787c4
	if (!cr6.lt) goto loc_830787C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830787C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b077f8
	ctx.lr = 0x830787CC;
	sub_82B077F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,5852
	ctx.r30.s64 = ctx.r30.s64 + 5852;
	// addi r29,r29,5852
	ctx.r29.s64 = ctx.r29.s64 + 5852;
	// cmplwi cr6,r31,72
	cr6.compare<uint32_t>(ctx.r31.u32, 72, xer);
	// blt cr6,0x830787b4
	if (cr6.lt) goto loc_830787B4;
	// addis r27,r28,96
	ctx.r27.s64 = ctx.r28.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r27,-4892
	ctx.r27.s64 = ctx.r27.s64 + -4892;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83078840
	if (!cr6.gt) goto loc_83078840;
	// addis r30,r25,13
	ctx.r30.s64 = ctx.r25.s64 + 851968;
	// addis r29,r28,88
	ctx.r29.s64 = ctx.r28.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,2224
	ctx.r30.s64 = ctx.r30.s64 + 2224;
	// addi r29,r29,-20304
	ctx.r29.s64 = ctx.r29.s64 + -20304;
	// ori r26,r11,60004
	ctx.r26.u64 = ctx.r11.u64 | 60004;
loc_83078810:
	// cmplwi cr6,r31,850
	cr6.compare<uint32_t>(ctx.r31.u32, 850, xer);
	// add r4,r28,r26
	ctx.r4.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bge cr6,0x83078820
	if (!cr6.lt) goto loc_83078820;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83078820:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x83078828;
	sub_82D8A4D8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,632
	ctx.r29.s64 = ctx.r29.s64 + 632;
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83078810
	if (cr6.lt) goto loc_83078810;
loc_83078840:
	// addis r26,r28,96
	ctx.r26.s64 = ctx.r28.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r26,-4888
	ctx.r26.s64 = ctx.r26.s64 + -4888;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x830788a0
	if (!cr6.gt) goto loc_830788A0;
	// addis r30,r25,19
	ctx.r30.s64 = ctx.r25.s64 + 1245184;
	// addis r29,r28,85
	ctx.r29.s64 = ctx.r28.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,20440
	ctx.r30.s64 = ctx.r30.s64 + 20440;
	// addi r29,r29,11904
	ctx.r29.s64 = ctx.r29.s64 + 11904;
	// ori r27,r11,59456
	ctx.r27.u64 = ctx.r11.u64 | 59456;
loc_83078870:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r4,r28,r27
	ctx.r4.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bge cr6,0x83078880
	if (!cr6.lt) goto loc_83078880;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83078880:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f16120
	ctx.lr = 0x83078888;
	sub_82F16120(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83078870
	if (cr6.lt) goto loc_83078870;
loc_830788A0:
	// addis r27,r28,99
	ctx.r27.s64 = ctx.r28.s64 + 6488064;
	// addis r29,r25,22
	ctx.r29.s64 = ctx.r25.s64 + 1441792;
	// addi r27,r27,11884
	ctx.r27.s64 = ctx.r27.s64 + 11884;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-11768
	ctx.r29.s64 = ctx.r29.s64 + -11768;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_830788B8:
	// cmplwi cr6,r31,1500
	cr6.compare<uint32_t>(ctx.r31.u32, 1500, xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bge cr6,0x830788c8
	if (!cr6.lt) goto loc_830788C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830788C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16910
	ctx.lr = 0x830788D0;
	sub_82C16910(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// addi r29,r29,520
	ctx.r29.s64 = ctx.r29.s64 + 520;
	// cmplwi cr6,r31,1500
	cr6.compare<uint32_t>(ctx.r31.u32, 1500, xer);
	// blt cr6,0x830788b8
	if (cr6.lt) goto loc_830788B8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83078938
	if (!cr6.gt) goto loc_83078938;
	// addis r27,r28,195
	ctx.r27.s64 = ctx.r28.s64 + 12779520;
	// addis r31,r25,118
	ctx.r31.s64 = ctx.r25.s64 + 7733248;
	// addi r27,r27,-13384
	ctx.r27.s64 = ctx.r27.s64 + -13384;
	// addi r31,r31,-16720
	ctx.r31.s64 = ctx.r31.s64 + -16720;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83078908:
	// cmplwi cr6,r29,300
	cr6.compare<uint32_t>(ctx.r29.u32, 300, xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bge cr6,0x83078918
	if (!cr6.lt) goto loc_83078918;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83078918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83077c00
	ctx.lr = 0x83078920;
	sub_83077C00(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// addi r31,r31,2124
	ctx.r31.s64 = ctx.r31.s64 + 2124;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83078908
	if (cr6.lt) goto loc_83078908;
loc_83078938:
	// addis r4,r24,5
	ctx.r4.s64 = ctx.r24.s64 + 327680;
	// addis r3,r25,34
	ctx.r3.s64 = ctx.r25.s64 + 2228224;
	// addi r4,r4,14904
	ctx.r4.s64 = ctx.r4.s64 + 14904;
	// addi r3,r3,-18200
	ctx.r3.s64 = ctx.r3.s64 + -18200;
	// bl 0x82f09f38
	ctx.lr = 0x8307894C;
	sub_82F09F38(ctx, base);
	// addis r27,r28,111
	ctx.r27.s64 = ctx.r28.s64 + 7274496;
	// addis r29,r25,34
	ctx.r29.s64 = ctx.r25.s64 + 2228224;
	// addi r27,r27,5452
	ctx.r27.s64 = ctx.r27.s64 + 5452;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,2116
	ctx.r29.s64 = ctx.r29.s64 + 2116;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83078964:
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bge cr6,0x83078974
	if (!cr6.lt) goto loc_83078974;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83078974:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bb0388
	ctx.lr = 0x8307897C;
	sub_82BB0388(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// addi r29,r29,588
	ctx.r29.s64 = ctx.r29.s64 + 588;
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// blt cr6,0x83078964
	if (cr6.lt) goto loc_83078964;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r4,r28,192
	ctx.r4.s64 = ctx.r28.s64 + 12582912;
	// addis r3,r25,115
	ctx.r3.s64 = ctx.r25.s64 + 7536640;
	// addi r4,r4,-10964
	ctx.r4.s64 = ctx.r4.s64 + -10964;
	// ori r5,r5,63116
	ctx.r5.u64 = ctx.r5.u64 | 63116;
	// addi r3,r3,-14300
	ctx.r3.s64 = ctx.r3.s64 + -14300;
	// bl 0x831ce980
	ctx.lr = 0x830789AC;
	sub_831CE980(ctx, base);
	// addis r4,r28,221
	ctx.r4.s64 = ctx.r28.s64 + 14483456;
	// addis r3,r25,127
	ctx.r3.s64 = ctx.r25.s64 + 8323072;
	// addi r4,r4,-26512
	ctx.r4.s64 = ctx.r4.s64 + -26512;
	// addi r3,r3,30656
	ctx.r3.s64 = ctx.r3.s64 + 30656;
	// bl 0x83075da8
	ctx.lr = 0x830789C0;
	sub_83075DA8(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addis r4,r28,96
	ctx.r4.s64 = ctx.r28.s64 + 6291456;
	// addis r3,r25,131
	ctx.r3.s64 = ctx.r25.s64 + 8585216;
	// addi r4,r4,-4872
	ctx.r4.s64 = ctx.r4.s64 + -4872;
	// ori r5,r5,16756
	ctx.r5.u64 = ctx.r5.u64 | 16756;
	// addi r3,r3,14112
	ctx.r3.s64 = ctx.r3.s64 + 14112;
	// bl 0x831ce980
	ctx.lr = 0x830789DC;
	sub_831CE980(ctx, base);
	// addis r4,r28,222
	ctx.r4.s64 = ctx.r28.s64 + 14548992;
	// addis r3,r25,134
	ctx.r3.s64 = ctx.r25.s64 + 8781824;
	// addi r4,r4,-8464
	ctx.r4.s64 = ctx.r4.s64 + -8464;
	// addi r3,r3,30868
	ctx.r3.s64 = ctx.r3.s64 + 30868;
	// bl 0x83076218
	ctx.lr = 0x830789F0;
	sub_83076218(ctx, base);
	// addis r4,r28,229
	ctx.r4.s64 = ctx.r28.s64 + 15007744;
	// addis r3,r25,129
	ctx.r3.s64 = ctx.r25.s64 + 8454144;
	// addi r4,r4,-6536
	ctx.r4.s64 = ctx.r4.s64 + -6536;
	// addi r3,r3,-20576
	ctx.r3.s64 = ctx.r3.s64 + -20576;
	// bl 0x83076dc8
	ctx.lr = 0x83078A04;
	sub_83076DC8(ctx, base);
	// addis r4,r28,231
	ctx.r4.s64 = ctx.r28.s64 + 15138816;
	// addis r3,r25,142
	ctx.r3.s64 = ctx.r25.s64 + 9306112;
	// addi r4,r4,28152
	ctx.r4.s64 = ctx.r4.s64 + 28152;
	// addi r3,r3,-32740
	ctx.r3.s64 = ctx.r3.s64 + -32740;
	// bl 0x83076f58
	ctx.lr = 0x83078A18;
	sub_83076F58(ctx, base);
	// addis r4,r28,236
	ctx.r4.s64 = ctx.r28.s64 + 15466496;
	// addis r3,r25,146
	ctx.r3.s64 = ctx.r25.s64 + 9568256;
	// addi r4,r4,1908
	ctx.r4.s64 = ctx.r4.s64 + 1908;
	// addi r3,r3,6552
	ctx.r3.s64 = ctx.r3.s64 + 6552;
	// bl 0x83073eb0
	ctx.lr = 0x83078A2C;
	sub_83073EB0(ctx, base);
	// addis r4,r28,205
	ctx.r4.s64 = ctx.r28.s64 + 13434880;
	// addis r3,r25,146
	ctx.r3.s64 = ctx.r25.s64 + 9568256;
	// addi r4,r4,-31540
	ctx.r4.s64 = ctx.r4.s64 + -31540;
	// addi r3,r3,9772
	ctx.r3.s64 = ctx.r3.s64 + 9772;
	// bl 0x83074688
	ctx.lr = 0x83078A40;
	sub_83074688(ctx, base);
	// addis r4,r28,205
	ctx.r4.s64 = ctx.r28.s64 + 13434880;
	// addis r3,r25,146
	ctx.r3.s64 = ctx.r25.s64 + 9568256;
	// addi r4,r4,-21136
	ctx.r4.s64 = ctx.r4.s64 + -21136;
	// addi r3,r3,20176
	ctx.r3.s64 = ctx.r3.s64 + 20176;
	// bl 0x83074820
	ctx.lr = 0x83078A54;
	sub_83074820(ctx, base);
	// addis r4,r28,205
	ctx.r4.s64 = ctx.r28.s64 + 13434880;
	// addis r3,r25,146
	ctx.r3.s64 = ctx.r25.s64 + 9568256;
	// addi r4,r4,-18732
	ctx.r4.s64 = ctx.r4.s64 + -18732;
	// addi r3,r3,22580
	ctx.r3.s64 = ctx.r3.s64 + 22580;
	// bl 0x83073428
	ctx.lr = 0x83078A68;
	sub_83073428(ctx, base);
	// addis r4,r28,205
	ctx.r4.s64 = ctx.r28.s64 + 13434880;
	// addis r3,r25,146
	ctx.r3.s64 = ctx.r25.s64 + 9568256;
	// addi r4,r4,-18420
	ctx.r4.s64 = ctx.r4.s64 + -18420;
	// addi r3,r3,22892
	ctx.r3.s64 = ctx.r3.s64 + 22892;
	// bl 0x83077058
	ctx.lr = 0x83078A7C;
	sub_83077058(ctx, base);
	// addis r4,r28,209
	ctx.r4.s64 = ctx.r28.s64 + 13697024;
	// addis r3,r25,151
	ctx.r3.s64 = ctx.r25.s64 + 9895936;
	// addi r4,r4,320
	ctx.r4.s64 = ctx.r4.s64 + 320;
	// addi r3,r3,-23904
	ctx.r3.s64 = ctx.r3.s64 + -23904;
	// bl 0x83074a00
	ctx.lr = 0x83078A90;
	sub_83074A00(ctx, base);
	// addis r31,r28,240
	ctx.r31.s64 = ctx.r28.s64 + 15728640;
	// addis r30,r25,158
	ctx.r30.s64 = ctx.r25.s64 + 10354688;
	// addi r31,r31,-3492
	ctx.r31.s64 = ctx.r31.s64 + -3492;
	// addi r30,r30,-29080
	ctx.r30.s64 = ctx.r30.s64 + -29080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ae4338
	ctx.lr = 0x83078AAC;
	sub_82AE4338(ctx, base);
	// addi r4,r31,4596
	ctx.r4.s64 = ctx.r31.s64 + 4596;
	// addi r3,r30,4596
	ctx.r3.s64 = ctx.r30.s64 + 4596;
	// bl 0x82ae4338
	ctx.lr = 0x83078AB8;
	sub_82AE4338(ctx, base);
	// addi r4,r31,9192
	ctx.r4.s64 = ctx.r31.s64 + 9192;
	// addi r3,r30,9192
	ctx.r3.s64 = ctx.r30.s64 + 9192;
	// bl 0x82ae4338
	ctx.lr = 0x83078AC4;
	sub_82AE4338(ctx, base);
	// addis r4,r28,240
	ctx.r4.s64 = ctx.r28.s64 + 15728640;
	// addis r3,r25,158
	ctx.r3.s64 = ctx.r25.s64 + 10354688;
	// addi r4,r4,10296
	ctx.r4.s64 = ctx.r4.s64 + 10296;
	// addi r3,r3,-15292
	ctx.r3.s64 = ctx.r3.s64 + -15292;
	// bl 0x83074b58
	ctx.lr = 0x83078AD8;
	sub_83074B58(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,164
	ctx.r10.s64 = 10747904;
	// ori r9,r11,60652
	ctx.r9.u64 = ctx.r11.u64 | 60652;
	// lis r8,95
	ctx.r8.s64 = 6225920;
	// lis r7,164
	ctx.r7.s64 = 10747904;
	// ori r6,r10,13900
	ctx.r6.u64 = ctx.r10.u64 | 13900;
	// ori r5,r8,60656
	ctx.r5.u64 = ctx.r8.u64 | 60656;
	// lwzx r3,r28,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// ori r4,r7,13904
	ctx.r4.u64 = ctx.r7.u64 | 13904;
	// stwx r3,r25,r6
	PPC_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r11,r28,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// stwx r11,r25,r4
	PPC_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83078B10"))) PPC_WEAK_FUNC(sub_83078B10);
PPC_FUNC_IMPL(__imp__sub_83078B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83078B18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83078B24;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x83078B2C;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r24,52(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x8311a0a8
	ctx.lr = 0x83078B48;
	sub_8311A0A8(ctx, base);
	// addis r27,r25,164
	ctx.r27.s64 = ctx.r25.s64 + 10747904;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lis r10,71
	ctx.r10.s64 = 4653056;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r27,13912
	ctx.r27.s64 = ctx.r27.s64 + 13912;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r11,13856
	ctx.r26.u64 = ctx.r11.u64 | 13856;
	// ori r28,r10,58336
	ctx.r28.u64 = ctx.r10.u64 | 58336;
loc_83078B68:
	// cmplwi cr6,r29,21097
	cr6.compare<uint32_t>(ctx.r29.u32, 21097, xer);
	// add r3,r30,r26
	ctx.r3.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bge cr6,0x83078b78
	if (!cr6.lt) goto loc_83078B78;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_83078B78:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x83078B84;
	sub_82B1E0E8(ctx, base);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x83078b68
	if (cr6.lt) goto loc_83078B68;
	// addis r29,r30,72
	ctx.r29.s64 = ctx.r30.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r25,80
	ctx.r28.s64 = ctx.r25.s64 + 80;
	// addi r29,r29,7136
	ctx.r29.s64 = ctx.r29.s64 + 7136;
	// ori r27,r11,58144
	ctx.r27.u64 = ctx.r11.u64 | 58144;
loc_83078BAC:
	// cmplwi cr6,r31,653
	cr6.compare<uint32_t>(ctx.r31.u32, 653, xer);
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bge cr6,0x83078bbc
	if (!cr6.lt) goto loc_83078BBC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83078BBC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ace470
	ctx.lr = 0x83078BC4;
	sub_82ACE470(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// addi r28,r28,1312
	ctx.r28.s64 = ctx.r28.s64 + 1312;
	// cmplwi cr6,r31,651
	cr6.compare<uint32_t>(ctx.r31.u32, 651, xer);
	// blt cr6,0x83078bac
	if (cr6.lt) goto loc_83078BAC;
	// addis r27,r30,214
	ctx.r27.s64 = ctx.r30.s64 + 14024704;
	// addis r28,r25,158
	ctx.r28.s64 = ctx.r25.s64 + 10354688;
	// addi r27,r27,10896
	ctx.r27.s64 = ctx.r27.s64 + 10896;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-14228
	ctx.r28.s64 = ctx.r28.s64 + -14228;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83078BF0:
	// cmplwi cr6,r31,72
	cr6.compare<uint32_t>(ctx.r31.u32, 72, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge cr6,0x83078c00
	if (!cr6.lt) goto loc_83078C00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83078C00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b077f8
	ctx.lr = 0x83078C08;
	sub_82B077F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,5852
	ctx.r29.s64 = ctx.r29.s64 + 5852;
	// addi r28,r28,5852
	ctx.r28.s64 = ctx.r28.s64 + 5852;
	// cmplwi cr6,r31,72
	cr6.compare<uint32_t>(ctx.r31.u32, 72, xer);
	// blt cr6,0x83078bf0
	if (cr6.lt) goto loc_83078BF0;
	// addis r28,r25,13
	ctx.r28.s64 = ctx.r25.s64 + 851968;
	// addis r29,r30,88
	ctx.r29.s64 = ctx.r30.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,2224
	ctx.r28.s64 = ctx.r28.s64 + 2224;
	// addi r29,r29,-20304
	ctx.r29.s64 = ctx.r29.s64 + -20304;
	// ori r27,r11,60004
	ctx.r27.u64 = ctx.r11.u64 | 60004;
loc_83078C38:
	// cmplwi cr6,r31,850
	cr6.compare<uint32_t>(ctx.r31.u32, 850, xer);
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bge cr6,0x83078c48
	if (!cr6.lt) goto loc_83078C48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83078C48:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x83078C50;
	sub_82D8A4D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,632
	ctx.r29.s64 = ctx.r29.s64 + 632;
	// addi r28,r28,632
	ctx.r28.s64 = ctx.r28.s64 + 632;
	// cmplwi cr6,r31,651
	cr6.compare<uint32_t>(ctx.r31.u32, 651, xer);
	// blt cr6,0x83078c38
	if (cr6.lt) goto loc_83078C38;
	// addis r28,r25,19
	ctx.r28.s64 = ctx.r25.s64 + 1245184;
	// addis r29,r30,85
	ctx.r29.s64 = ctx.r30.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,20440
	ctx.r28.s64 = ctx.r28.s64 + 20440;
	// addi r29,r29,11904
	ctx.r29.s64 = ctx.r29.s64 + 11904;
	// ori r27,r11,59456
	ctx.r27.u64 = ctx.r11.u64 | 59456;
loc_83078C80:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bge cr6,0x83078c90
	if (!cr6.lt) goto loc_83078C90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83078C90:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f16120
	ctx.lr = 0x83078C98;
	sub_82F16120(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// addi r28,r28,548
	ctx.r28.s64 = ctx.r28.s64 + 548;
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// blt cr6,0x83078c80
	if (cr6.lt) goto loc_83078C80;
	// addis r27,r30,99
	ctx.r27.s64 = ctx.r30.s64 + 6488064;
	// addis r28,r25,22
	ctx.r28.s64 = ctx.r25.s64 + 1441792;
	// addi r27,r27,11884
	ctx.r27.s64 = ctx.r27.s64 + 11884;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-11768
	ctx.r28.s64 = ctx.r28.s64 + -11768;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83078CC4:
	// cmplwi cr6,r31,1500
	cr6.compare<uint32_t>(ctx.r31.u32, 1500, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge cr6,0x83078cd4
	if (!cr6.lt) goto loc_83078CD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83078CD4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c16910
	ctx.lr = 0x83078CDC;
	sub_82C16910(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,520
	ctx.r29.s64 = ctx.r29.s64 + 520;
	// addi r28,r28,520
	ctx.r28.s64 = ctx.r28.s64 + 520;
	// cmplwi cr6,r31,1500
	cr6.compare<uint32_t>(ctx.r31.u32, 1500, xer);
	// blt cr6,0x83078cc4
	if (cr6.lt) goto loc_83078CC4;
	// addis r27,r30,195
	ctx.r27.s64 = ctx.r30.s64 + 12779520;
	// addis r28,r25,118
	ctx.r28.s64 = ctx.r25.s64 + 7733248;
	// addi r27,r27,-13384
	ctx.r27.s64 = ctx.r27.s64 + -13384;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-16720
	ctx.r28.s64 = ctx.r28.s64 + -16720;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83078D08:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge cr6,0x83078d18
	if (!cr6.lt) goto loc_83078D18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83078D18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83077c00
	ctx.lr = 0x83078D20;
	sub_83077C00(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,2124
	ctx.r29.s64 = ctx.r29.s64 + 2124;
	// addi r28,r28,2124
	ctx.r28.s64 = ctx.r28.s64 + 2124;
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// blt cr6,0x83078d08
	if (cr6.lt) goto loc_83078D08;
	// addis r4,r25,34
	ctx.r4.s64 = ctx.r25.s64 + 2228224;
	// addis r3,r24,5
	ctx.r3.s64 = ctx.r24.s64 + 327680;
	// addi r4,r4,-18200
	ctx.r4.s64 = ctx.r4.s64 + -18200;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x82f09f38
	ctx.lr = 0x83078D48;
	sub_82F09F38(ctx, base);
	// addis r27,r30,111
	ctx.r27.s64 = ctx.r30.s64 + 7274496;
	// addis r28,r25,34
	ctx.r28.s64 = ctx.r25.s64 + 2228224;
	// addi r27,r27,5452
	ctx.r27.s64 = ctx.r27.s64 + 5452;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,2116
	ctx.r28.s64 = ctx.r28.s64 + 2116;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83078D60:
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge cr6,0x83078d70
	if (!cr6.lt) goto loc_83078D70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83078D70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bb0388
	ctx.lr = 0x83078D78;
	sub_82BB0388(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,588
	ctx.r29.s64 = ctx.r29.s64 + 588;
	// addi r28,r28,588
	ctx.r28.s64 = ctx.r28.s64 + 588;
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// blt cr6,0x83078d60
	if (cr6.lt) goto loc_83078D60;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r4,r25,115
	ctx.r4.s64 = ctx.r25.s64 + 7536640;
	// addis r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 12582912;
	// addi r4,r4,-14300
	ctx.r4.s64 = ctx.r4.s64 + -14300;
	// ori r5,r5,63116
	ctx.r5.u64 = ctx.r5.u64 | 63116;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x831ce980
	ctx.lr = 0x83078DA8;
	sub_831CE980(ctx, base);
	// addis r4,r25,127
	ctx.r4.s64 = ctx.r25.s64 + 8323072;
	// addis r3,r30,221
	ctx.r3.s64 = ctx.r30.s64 + 14483456;
	// addi r4,r4,30656
	ctx.r4.s64 = ctx.r4.s64 + 30656;
	// addi r3,r3,-26512
	ctx.r3.s64 = ctx.r3.s64 + -26512;
	// bl 0x83075da8
	ctx.lr = 0x83078DBC;
	sub_83075DA8(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addis r4,r25,131
	ctx.r4.s64 = ctx.r25.s64 + 8585216;
	// addis r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 6291456;
	// addi r4,r4,14112
	ctx.r4.s64 = ctx.r4.s64 + 14112;
	// ori r5,r5,16756
	ctx.r5.u64 = ctx.r5.u64 | 16756;
	// addi r3,r3,-4872
	ctx.r3.s64 = ctx.r3.s64 + -4872;
	// bl 0x831ce980
	ctx.lr = 0x83078DD8;
	sub_831CE980(ctx, base);
	// addis r4,r25,134
	ctx.r4.s64 = ctx.r25.s64 + 8781824;
	// addis r3,r30,222
	ctx.r3.s64 = ctx.r30.s64 + 14548992;
	// addi r4,r4,30868
	ctx.r4.s64 = ctx.r4.s64 + 30868;
	// addi r3,r3,-8464
	ctx.r3.s64 = ctx.r3.s64 + -8464;
	// bl 0x83076218
	ctx.lr = 0x83078DEC;
	sub_83076218(ctx, base);
	// addis r4,r25,129
	ctx.r4.s64 = ctx.r25.s64 + 8454144;
	// addis r3,r30,229
	ctx.r3.s64 = ctx.r30.s64 + 15007744;
	// addi r4,r4,-20576
	ctx.r4.s64 = ctx.r4.s64 + -20576;
	// addi r3,r3,-6536
	ctx.r3.s64 = ctx.r3.s64 + -6536;
	// bl 0x83076dc8
	ctx.lr = 0x83078E00;
	sub_83076DC8(ctx, base);
	// addis r4,r25,142
	ctx.r4.s64 = ctx.r25.s64 + 9306112;
	// addis r3,r30,231
	ctx.r3.s64 = ctx.r30.s64 + 15138816;
	// addi r4,r4,-32740
	ctx.r4.s64 = ctx.r4.s64 + -32740;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x83076f58
	ctx.lr = 0x83078E14;
	sub_83076F58(ctx, base);
	// addis r4,r25,146
	ctx.r4.s64 = ctx.r25.s64 + 9568256;
	// addis r3,r30,236
	ctx.r3.s64 = ctx.r30.s64 + 15466496;
	// addi r4,r4,6552
	ctx.r4.s64 = ctx.r4.s64 + 6552;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x83073eb0
	ctx.lr = 0x83078E28;
	sub_83073EB0(ctx, base);
	// addis r4,r25,146
	ctx.r4.s64 = ctx.r25.s64 + 9568256;
	// addis r3,r30,205
	ctx.r3.s64 = ctx.r30.s64 + 13434880;
	// addi r4,r4,9772
	ctx.r4.s64 = ctx.r4.s64 + 9772;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// bl 0x83074688
	ctx.lr = 0x83078E3C;
	sub_83074688(ctx, base);
	// addis r4,r25,146
	ctx.r4.s64 = ctx.r25.s64 + 9568256;
	// addis r3,r30,205
	ctx.r3.s64 = ctx.r30.s64 + 13434880;
	// addi r4,r4,20176
	ctx.r4.s64 = ctx.r4.s64 + 20176;
	// addi r3,r3,-21136
	ctx.r3.s64 = ctx.r3.s64 + -21136;
	// bl 0x83074820
	ctx.lr = 0x83078E50;
	sub_83074820(ctx, base);
	// addis r4,r25,146
	ctx.r4.s64 = ctx.r25.s64 + 9568256;
	// addis r3,r30,205
	ctx.r3.s64 = ctx.r30.s64 + 13434880;
	// addi r4,r4,22580
	ctx.r4.s64 = ctx.r4.s64 + 22580;
	// addi r3,r3,-18732
	ctx.r3.s64 = ctx.r3.s64 + -18732;
	// bl 0x83073428
	ctx.lr = 0x83078E64;
	sub_83073428(ctx, base);
	// addis r4,r25,146
	ctx.r4.s64 = ctx.r25.s64 + 9568256;
	// addis r3,r30,205
	ctx.r3.s64 = ctx.r30.s64 + 13434880;
	// addi r4,r4,22892
	ctx.r4.s64 = ctx.r4.s64 + 22892;
	// addi r3,r3,-18420
	ctx.r3.s64 = ctx.r3.s64 + -18420;
	// bl 0x83077058
	ctx.lr = 0x83078E78;
	sub_83077058(ctx, base);
	// addis r4,r25,151
	ctx.r4.s64 = ctx.r25.s64 + 9895936;
	// addis r3,r30,209
	ctx.r3.s64 = ctx.r30.s64 + 13697024;
	// addi r4,r4,-23904
	ctx.r4.s64 = ctx.r4.s64 + -23904;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bl 0x83074a00
	ctx.lr = 0x83078E8C;
	sub_83074A00(ctx, base);
	// addis r31,r25,158
	ctx.r31.s64 = ctx.r25.s64 + 10354688;
	// addis r29,r30,240
	ctx.r29.s64 = ctx.r30.s64 + 15728640;
	// addi r31,r31,-29080
	ctx.r31.s64 = ctx.r31.s64 + -29080;
	// addi r29,r29,-3492
	ctx.r29.s64 = ctx.r29.s64 + -3492;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ae4338
	ctx.lr = 0x83078EA8;
	sub_82AE4338(ctx, base);
	// addi r4,r31,4596
	ctx.r4.s64 = ctx.r31.s64 + 4596;
	// addi r3,r29,4596
	ctx.r3.s64 = ctx.r29.s64 + 4596;
	// bl 0x82ae4338
	ctx.lr = 0x83078EB4;
	sub_82AE4338(ctx, base);
	// addi r4,r31,9192
	ctx.r4.s64 = ctx.r31.s64 + 9192;
	// addi r3,r29,9192
	ctx.r3.s64 = ctx.r29.s64 + 9192;
	// bl 0x82ae4338
	ctx.lr = 0x83078EC0;
	sub_82AE4338(ctx, base);
	// addis r4,r25,158
	ctx.r4.s64 = ctx.r25.s64 + 10354688;
	// addis r3,r30,240
	ctx.r3.s64 = ctx.r30.s64 + 15728640;
	// addi r4,r4,-15292
	ctx.r4.s64 = ctx.r4.s64 + -15292;
	// addi r3,r3,10296
	ctx.r3.s64 = ctx.r3.s64 + 10296;
	// bl 0x83074b58
	ctx.lr = 0x83078ED4;
	sub_83074B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83117b70
	ctx.lr = 0x83078EDC;
	sub_83117B70(ctx, base);
	// lis r11,164
	ctx.r11.s64 = 10747904;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// ori r9,r11,13900
	ctx.r9.u64 = ctx.r11.u64 | 13900;
	// lis r8,164
	ctx.r8.s64 = 10747904;
	// lis r7,95
	ctx.r7.s64 = 6225920;
	// ori r6,r10,60652
	ctx.r6.u64 = ctx.r10.u64 | 60652;
	// ori r5,r8,13904
	ctx.r5.u64 = ctx.r8.u64 | 13904;
	// lwzx r3,r25,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// ori r4,r7,60656
	ctx.r4.u64 = ctx.r7.u64 | 60656;
	// stwx r3,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r11,r25,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// stwx r11,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83078F14"))) PPC_WEAK_FUNC(sub_83078F14);
PPC_FUNC_IMPL(__imp__sub_83078F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83078F18"))) PPC_WEAK_FUNC(sub_83078F18);
PPC_FUNC_IMPL(__imp__sub_83078F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83078F20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83078F2C;
	sub_831156E8(ctx, base);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x83078F34;
	sub_831156E8(ctx, base);
	// addis r28,r26,96
	ctx.r28.s64 = ctx.r26.s64 + 6291456;
	// lwz r24,52(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-4900
	ctx.r28.s64 = ctx.r28.s64 + -4900;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83078f90
	if (!cr6.gt) goto loc_83078F90;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r25,80
	ctx.r30.s64 = ctx.r25.s64 + 80;
	// ori r27,r11,13856
	ctx.r27.u64 = ctx.r11.u64 | 13856;
loc_83078F60:
	// cmplwi cr6,r31,21097
	cr6.compare<uint32_t>(ctx.r31.u32, 21097, xer);
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bge cr6,0x83078f70
	if (!cr6.lt) goto loc_83078F70;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83078F70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x83078F78;
	sub_82B1E0E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83078f60
	if (cr6.lt) goto loc_83078F60;
loc_83078F90:
	// addis r28,r26,96
	ctx.r28.s64 = ctx.r26.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-4896
	ctx.r28.s64 = ctx.r28.s64 + -4896;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83078ff0
	if (!cr6.gt) goto loc_83078FF0;
	// addis r30,r25,49
	ctx.r30.s64 = ctx.r25.s64 + 3211264;
	// addis r29,r26,72
	ctx.r29.s64 = ctx.r26.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,14416
	ctx.r30.s64 = ctx.r30.s64 + 14416;
	// addi r29,r29,7136
	ctx.r29.s64 = ctx.r29.s64 + 7136;
	// ori r27,r11,58144
	ctx.r27.u64 = ctx.r11.u64 | 58144;
loc_83078FC0:
	// cmplwi cr6,r31,653
	cr6.compare<uint32_t>(ctx.r31.u32, 653, xer);
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bge cr6,0x83078fd0
	if (!cr6.lt) goto loc_83078FD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83078FD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ace470
	ctx.lr = 0x83078FD8;
	sub_82ACE470(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83078fc0
	if (cr6.lt) goto loc_83078FC0;
loc_83078FF0:
	// addis r28,r26,96
	ctx.r28.s64 = ctx.r26.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-4892
	ctx.r28.s64 = ctx.r28.s64 + -4892;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83079050
	if (!cr6.gt) goto loc_83079050;
	// addis r30,r25,58
	ctx.r30.s64 = ctx.r25.s64 + 3801088;
	// addis r29,r26,88
	ctx.r29.s64 = ctx.r26.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,14992
	ctx.r30.s64 = ctx.r30.s64 + 14992;
	// addi r29,r29,-20304
	ctx.r29.s64 = ctx.r29.s64 + -20304;
	// ori r27,r11,60004
	ctx.r27.u64 = ctx.r11.u64 | 60004;
loc_83079020:
	// cmplwi cr6,r31,850
	cr6.compare<uint32_t>(ctx.r31.u32, 850, xer);
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bge cr6,0x83079030
	if (!cr6.lt) goto loc_83079030;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83079030:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x83079038;
	sub_82D8A4D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,632
	ctx.r29.s64 = ctx.r29.s64 + 632;
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83079020
	if (cr6.lt) goto loc_83079020;
loc_83079050:
	// addis r27,r26,96
	ctx.r27.s64 = ctx.r26.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r27,-4888
	ctx.r27.s64 = ctx.r27.s64 + -4888;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x830790b0
	if (!cr6.gt) goto loc_830790B0;
	// addis r30,r25,63
	ctx.r30.s64 = ctx.r25.s64 + 4128768;
	// addis r29,r26,85
	ctx.r29.s64 = ctx.r26.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,-28288
	ctx.r30.s64 = ctx.r30.s64 + -28288;
	// addi r29,r29,11904
	ctx.r29.s64 = ctx.r29.s64 + 11904;
	// ori r28,r11,59456
	ctx.r28.u64 = ctx.r11.u64 | 59456;
loc_83079080:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r4,r26,r28
	ctx.r4.u64 = ctx.r26.u64 + ctx.r28.u64;
	// bge cr6,0x83079090
	if (!cr6.lt) goto loc_83079090;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83079090:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f16120
	ctx.lr = 0x83079098;
	sub_82F16120(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83079080
	if (cr6.lt) goto loc_83079080;
loc_830790B0:
	// addis r28,r26,99
	ctx.r28.s64 = ctx.r26.s64 + 6488064;
	// addis r29,r25,64
	ctx.r29.s64 = ctx.r25.s64 + 4194304;
	// addi r28,r28,11884
	ctx.r28.s64 = ctx.r28.s64 + 11884;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,4816
	ctx.r29.s64 = ctx.r29.s64 + 4816;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_830790C8:
	// cmplwi cr6,r31,1500
	cr6.compare<uint32_t>(ctx.r31.u32, 1500, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x830790d8
	if (!cr6.lt) goto loc_830790D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830790D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16910
	ctx.lr = 0x830790E0;
	sub_82C16910(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// addi r29,r29,520
	ctx.r29.s64 = ctx.r29.s64 + 520;
	// cmplwi cr6,r31,1250
	cr6.compare<uint32_t>(ctx.r31.u32, 1250, xer);
	// blt cr6,0x830790c8
	if (cr6.lt) goto loc_830790C8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83079148
	if (!cr6.gt) goto loc_83079148;
	// addis r28,r26,195
	ctx.r28.s64 = ctx.r26.s64 + 12779520;
	// addis r31,r25,157
	ctx.r31.s64 = ctx.r25.s64 + 10289152;
	// addi r28,r28,-13384
	ctx.r28.s64 = ctx.r28.s64 + -13384;
	// addi r31,r31,-5192
	ctx.r31.s64 = ctx.r31.s64 + -5192;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079118:
	// cmplwi cr6,r29,300
	cr6.compare<uint32_t>(ctx.r29.u32, 300, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x83079128
	if (!cr6.lt) goto loc_83079128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83079128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83077c00
	ctx.lr = 0x83079130;
	sub_83077C00(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// addi r31,r31,2124
	ctx.r31.s64 = ctx.r31.s64 + 2124;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83079118
	if (cr6.lt) goto loc_83079118;
loc_83079148:
	// addis r4,r24,5
	ctx.r4.s64 = ctx.r24.s64 + 327680;
	// addis r3,r25,74
	ctx.r3.s64 = ctx.r25.s64 + 4849664;
	// addi r4,r4,14904
	ctx.r4.s64 = ctx.r4.s64 + 14904;
	// addi r3,r3,-544
	ctx.r3.s64 = ctx.r3.s64 + -544;
	// bl 0x82f09f38
	ctx.lr = 0x8307915C;
	sub_82F09F38(ctx, base);
	// addis r28,r26,111
	ctx.r28.s64 = ctx.r26.s64 + 7274496;
	// addis r29,r25,74
	ctx.r29.s64 = ctx.r25.s64 + 4849664;
	// addi r28,r28,5452
	ctx.r28.s64 = ctx.r28.s64 + 5452;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,19772
	ctx.r29.s64 = ctx.r29.s64 + 19772;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079174:
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x83079184
	if (!cr6.lt) goto loc_83079184;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83079184:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bb0388
	ctx.lr = 0x8307918C;
	sub_82BB0388(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// addi r29,r29,588
	ctx.r29.s64 = ctx.r29.s64 + 588;
	// cmplwi cr6,r31,8360
	cr6.compare<uint32_t>(ctx.r31.u32, 8360, xer);
	// blt cr6,0x83079174
	if (cr6.lt) goto loc_83079174;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r4,r26,192
	ctx.r4.s64 = ctx.r26.s64 + 12582912;
	// addis r3,r25,154
	ctx.r3.s64 = ctx.r25.s64 + 10092544;
	// addi r4,r4,-10964
	ctx.r4.s64 = ctx.r4.s64 + -10964;
	// ori r5,r5,63116
	ctx.r5.u64 = ctx.r5.u64 | 63116;
	// addi r3,r3,-2772
	ctx.r3.s64 = ctx.r3.s64 + -2772;
	// bl 0x831ce980
	ctx.lr = 0x830791BC;
	sub_831CE980(ctx, base);
	// addis r4,r26,221
	ctx.r4.s64 = ctx.r26.s64 + 14483456;
	// addis r3,r25,163
	ctx.r3.s64 = ctx.r25.s64 + 10682368;
	// addi r4,r4,-26512
	ctx.r4.s64 = ctx.r4.s64 + -26512;
	// addi r3,r3,-16088
	ctx.r3.s64 = ctx.r3.s64 + -16088;
	// bl 0x83075da8
	ctx.lr = 0x830791D0;
	sub_83075DA8(ctx, base);
	// addis r4,r26,231
	ctx.r4.s64 = ctx.r26.s64 + 15138816;
	// addis r3,r25,149
	ctx.r3.s64 = ctx.r25.s64 + 9764864;
	// addi r4,r4,28152
	ctx.r4.s64 = ctx.r4.s64 + 28152;
	// addi r3,r3,20252
	ctx.r3.s64 = ctx.r3.s64 + 20252;
	// bl 0x83076f58
	ctx.lr = 0x830791E4;
	sub_83076F58(ctx, base);
	// addis r4,r26,236
	ctx.r4.s64 = ctx.r26.s64 + 15466496;
	// addis r3,r25,154
	ctx.r3.s64 = ctx.r25.s64 + 10092544;
	// addi r4,r4,1908
	ctx.r4.s64 = ctx.r4.s64 + 1908;
	// addi r3,r3,-5992
	ctx.r3.s64 = ctx.r3.s64 + -5992;
	// bl 0x83073eb0
	ctx.lr = 0x830791F8;
	sub_83073EB0(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addis r4,r26,96
	ctx.r4.s64 = ctx.r26.s64 + 6291456;
	// addis r3,r25,164
	ctx.r3.s64 = ctx.r25.s64 + 10747904;
	// addi r4,r4,-4872
	ctx.r4.s64 = ctx.r4.s64 + -4872;
	// ori r5,r5,16756
	ctx.r5.u64 = ctx.r5.u64 | 16756;
	// addi r3,r3,-1784
	ctx.r3.s64 = ctx.r3.s64 + -1784;
	// bl 0x831ce980
	ctx.lr = 0x83079214;
	sub_831CE980(ctx, base);
	// addis r4,r26,222
	ctx.r4.s64 = ctx.r26.s64 + 14548992;
	// addis r3,r25,167
	ctx.r3.s64 = ctx.r25.s64 + 10944512;
	// addi r4,r4,-8464
	ctx.r4.s64 = ctx.r4.s64 + -8464;
	// addi r3,r3,14972
	ctx.r3.s64 = ctx.r3.s64 + 14972;
	// bl 0x83076218
	ctx.lr = 0x83079228;
	sub_83076218(ctx, base);
	// addis r4,r26,229
	ctx.r4.s64 = ctx.r26.s64 + 15007744;
	// addis r3,r25,174
	ctx.r3.s64 = ctx.r25.s64 + 11403264;
	// addi r4,r4,-6536
	ctx.r4.s64 = ctx.r4.s64 + -6536;
	// addi r3,r3,16900
	ctx.r3.s64 = ctx.r3.s64 + 16900;
	// bl 0x83076dc8
	ctx.lr = 0x8307923C;
	sub_83076DC8(ctx, base);
	// addis r4,r26,205
	ctx.r4.s64 = ctx.r26.s64 + 13434880;
	// addis r3,r25,177
	ctx.r3.s64 = ctx.r25.s64 + 11599872;
	// addi r4,r4,-31540
	ctx.r4.s64 = ctx.r4.s64 + -31540;
	// addi r3,r3,-13948
	ctx.r3.s64 = ctx.r3.s64 + -13948;
	// bl 0x83074688
	ctx.lr = 0x83079250;
	sub_83074688(ctx, base);
	// addis r4,r26,205
	ctx.r4.s64 = ctx.r26.s64 + 13434880;
	// addis r3,r25,177
	ctx.r3.s64 = ctx.r25.s64 + 11599872;
	// addi r4,r4,-21136
	ctx.r4.s64 = ctx.r4.s64 + -21136;
	// addi r3,r3,-3544
	ctx.r3.s64 = ctx.r3.s64 + -3544;
	// bl 0x83074820
	ctx.lr = 0x83079264;
	sub_83074820(ctx, base);
	// addis r4,r26,205
	ctx.r4.s64 = ctx.r26.s64 + 13434880;
	// addis r3,r25,177
	ctx.r3.s64 = ctx.r25.s64 + 11599872;
	// addi r4,r4,-18732
	ctx.r4.s64 = ctx.r4.s64 + -18732;
	// addi r3,r3,-1140
	ctx.r3.s64 = ctx.r3.s64 + -1140;
	// bl 0x83073428
	ctx.lr = 0x83079278;
	sub_83073428(ctx, base);
	// addis r4,r26,240
	ctx.r4.s64 = ctx.r26.s64 + 15728640;
	// addis r3,r25,177
	ctx.r3.s64 = ctx.r25.s64 + 11599872;
	// addi r4,r4,10296
	ctx.r4.s64 = ctx.r4.s64 + 10296;
	// addi r3,r3,-828
	ctx.r3.s64 = ctx.r3.s64 + -828;
	// bl 0x83074b58
	ctx.lr = 0x8307928C;
	sub_83074B58(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,177
	ctx.r10.s64 = 11599872;
	// ori r9,r11,60652
	ctx.r9.u64 = ctx.r11.u64 | 60652;
	// lis r8,95
	ctx.r8.s64 = 6225920;
	// lis r7,177
	ctx.r7.s64 = 11599872;
	// ori r6,r10,236
	ctx.r6.u64 = ctx.r10.u64 | 236;
	// ori r5,r8,60656
	ctx.r5.u64 = ctx.r8.u64 | 60656;
	// lwzx r3,r26,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// ori r4,r7,240
	ctx.r4.u64 = ctx.r7.u64 | 240;
	// stwx r3,r25,r6
	PPC_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r11,r26,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// stwx r11,r25,r4
	PPC_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830792C4"))) PPC_WEAK_FUNC(sub_830792C4);
PPC_FUNC_IMPL(__imp__sub_830792C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830792C8"))) PPC_WEAK_FUNC(sub_830792C8);
PPC_FUNC_IMPL(__imp__sub_830792C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830792D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x830792DC;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x830792E4;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r25,52(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x8311a0a8
	ctx.lr = 0x83079300;
	sub_8311A0A8(ctx, base);
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r26,80
	ctx.r29.s64 = ctx.r26.s64 + 80;
	// ori r28,r11,13856
	ctx.r28.u64 = ctx.r11.u64 | 13856;
loc_83079314:
	// cmplwi cr6,r31,21097
	cr6.compare<uint32_t>(ctx.r31.u32, 21097, xer);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bge cr6,0x83079324
	if (!cr6.lt) goto loc_83079324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079324:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x8307932C;
	sub_82B1E0E8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// cmplwi cr6,r31,14400
	cr6.compare<uint32_t>(ctx.r31.u32, 14400, xer);
	// blt cr6,0x83079314
	if (cr6.lt) goto loc_83079314;
	// addis r29,r26,49
	ctx.r29.s64 = ctx.r26.s64 + 3211264;
	// addis r30,r27,72
	ctx.r30.s64 = ctx.r27.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,14416
	ctx.r29.s64 = ctx.r29.s64 + 14416;
	// addi r30,r30,7136
	ctx.r30.s64 = ctx.r30.s64 + 7136;
	// ori r28,r11,58144
	ctx.r28.u64 = ctx.r11.u64 | 58144;
loc_8307935C:
	// cmplwi cr6,r31,653
	cr6.compare<uint32_t>(ctx.r31.u32, 653, xer);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bge cr6,0x8307936c
	if (!cr6.lt) goto loc_8307936C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8307936C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ace470
	ctx.lr = 0x83079374;
	sub_82ACE470(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// cmplwi cr6,r31,450
	cr6.compare<uint32_t>(ctx.r31.u32, 450, xer);
	// blt cr6,0x8307935c
	if (cr6.lt) goto loc_8307935C;
	// addis r29,r26,58
	ctx.r29.s64 = ctx.r26.s64 + 3801088;
	// addis r30,r27,88
	ctx.r30.s64 = ctx.r27.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,14992
	ctx.r29.s64 = ctx.r29.s64 + 14992;
	// addi r30,r30,-20304
	ctx.r30.s64 = ctx.r30.s64 + -20304;
	// ori r28,r11,60004
	ctx.r28.u64 = ctx.r11.u64 | 60004;
loc_830793A4:
	// cmplwi cr6,r31,850
	cr6.compare<uint32_t>(ctx.r31.u32, 850, xer);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bge cr6,0x830793b4
	if (!cr6.lt) goto loc_830793B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830793B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x830793BC;
	sub_82D8A4D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// addi r29,r29,632
	ctx.r29.s64 = ctx.r29.s64 + 632;
	// cmplwi cr6,r31,450
	cr6.compare<uint32_t>(ctx.r31.u32, 450, xer);
	// blt cr6,0x830793a4
	if (cr6.lt) goto loc_830793A4;
	// addis r29,r26,63
	ctx.r29.s64 = ctx.r26.s64 + 4128768;
	// addis r30,r27,85
	ctx.r30.s64 = ctx.r27.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-28288
	ctx.r29.s64 = ctx.r29.s64 + -28288;
	// addi r30,r30,11904
	ctx.r30.s64 = ctx.r30.s64 + 11904;
	// ori r28,r11,59456
	ctx.r28.u64 = ctx.r11.u64 | 59456;
loc_830793EC:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bge cr6,0x830793fc
	if (!cr6.lt) goto loc_830793FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830793FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f16120
	ctx.lr = 0x83079404;
	sub_82F16120(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// cmplwi cr6,r31,180
	cr6.compare<uint32_t>(ctx.r31.u32, 180, xer);
	// blt cr6,0x830793ec
	if (cr6.lt) goto loc_830793EC;
	// addis r28,r27,99
	ctx.r28.s64 = ctx.r27.s64 + 6488064;
	// addis r29,r26,64
	ctx.r29.s64 = ctx.r26.s64 + 4194304;
	// addi r28,r28,11884
	ctx.r28.s64 = ctx.r28.s64 + 11884;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,4816
	ctx.r29.s64 = ctx.r29.s64 + 4816;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079430:
	// cmplwi cr6,r31,1500
	cr6.compare<uint32_t>(ctx.r31.u32, 1500, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge cr6,0x83079440
	if (!cr6.lt) goto loc_83079440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079440:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c16910
	ctx.lr = 0x83079448;
	sub_82C16910(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// addi r29,r29,520
	ctx.r29.s64 = ctx.r29.s64 + 520;
	// cmplwi cr6,r31,1250
	cr6.compare<uint32_t>(ctx.r31.u32, 1250, xer);
	// blt cr6,0x83079430
	if (cr6.lt) goto loc_83079430;
	// addis r28,r27,195
	ctx.r28.s64 = ctx.r27.s64 + 12779520;
	// addis r29,r26,157
	ctx.r29.s64 = ctx.r26.s64 + 10289152;
	// addi r28,r28,-13384
	ctx.r28.s64 = ctx.r28.s64 + -13384;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-5192
	ctx.r29.s64 = ctx.r29.s64 + -5192;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079474:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge cr6,0x83079484
	if (!cr6.lt) goto loc_83079484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079484:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83077c00
	ctx.lr = 0x8307948C;
	sub_83077C00(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// addi r29,r29,2124
	ctx.r29.s64 = ctx.r29.s64 + 2124;
	// cmplwi cr6,r31,180
	cr6.compare<uint32_t>(ctx.r31.u32, 180, xer);
	// blt cr6,0x83079474
	if (cr6.lt) goto loc_83079474;
	// addis r4,r26,74
	ctx.r4.s64 = ctx.r26.s64 + 4849664;
	// addis r3,r25,5
	ctx.r3.s64 = ctx.r25.s64 + 327680;
	// addi r4,r4,-544
	ctx.r4.s64 = ctx.r4.s64 + -544;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x82f09f38
	ctx.lr = 0x830794B4;
	sub_82F09F38(ctx, base);
	// addis r28,r27,111
	ctx.r28.s64 = ctx.r27.s64 + 7274496;
	// addis r29,r26,74
	ctx.r29.s64 = ctx.r26.s64 + 4849664;
	// addi r28,r28,5452
	ctx.r28.s64 = ctx.r28.s64 + 5452;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,19772
	ctx.r29.s64 = ctx.r29.s64 + 19772;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_830794CC:
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge cr6,0x830794dc
	if (!cr6.lt) goto loc_830794DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830794DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bb0388
	ctx.lr = 0x830794E4;
	sub_82BB0388(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// addi r29,r29,588
	ctx.r29.s64 = ctx.r29.s64 + 588;
	// cmplwi cr6,r31,8360
	cr6.compare<uint32_t>(ctx.r31.u32, 8360, xer);
	// blt cr6,0x830794cc
	if (cr6.lt) goto loc_830794CC;
	// addis r4,r26,149
	ctx.r4.s64 = ctx.r26.s64 + 9764864;
	// addis r3,r27,231
	ctx.r3.s64 = ctx.r27.s64 + 15138816;
	// addi r4,r4,20252
	ctx.r4.s64 = ctx.r4.s64 + 20252;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x83076f58
	ctx.lr = 0x8307950C;
	sub_83076F58(ctx, base);
	// addis r4,r26,154
	ctx.r4.s64 = ctx.r26.s64 + 10092544;
	// addis r3,r27,236
	ctx.r3.s64 = ctx.r27.s64 + 15466496;
	// addi r4,r4,-5992
	ctx.r4.s64 = ctx.r4.s64 + -5992;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x83073eb0
	ctx.lr = 0x83079520;
	sub_83073EB0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r4,r26,154
	ctx.r4.s64 = ctx.r26.s64 + 10092544;
	// addis r3,r27,192
	ctx.r3.s64 = ctx.r27.s64 + 12582912;
	// addi r4,r4,-2772
	ctx.r4.s64 = ctx.r4.s64 + -2772;
	// ori r5,r5,63116
	ctx.r5.u64 = ctx.r5.u64 | 63116;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x831ce980
	ctx.lr = 0x8307953C;
	sub_831CE980(ctx, base);
	// addis r4,r26,163
	ctx.r4.s64 = ctx.r26.s64 + 10682368;
	// addis r3,r27,221
	ctx.r3.s64 = ctx.r27.s64 + 14483456;
	// addi r4,r4,-16088
	ctx.r4.s64 = ctx.r4.s64 + -16088;
	// addi r3,r3,-26512
	ctx.r3.s64 = ctx.r3.s64 + -26512;
	// bl 0x83075da8
	ctx.lr = 0x83079550;
	sub_83075DA8(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addis r4,r26,164
	ctx.r4.s64 = ctx.r26.s64 + 10747904;
	// addis r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 6291456;
	// addi r4,r4,-1784
	ctx.r4.s64 = ctx.r4.s64 + -1784;
	// ori r5,r5,16756
	ctx.r5.u64 = ctx.r5.u64 | 16756;
	// addi r3,r3,-4872
	ctx.r3.s64 = ctx.r3.s64 + -4872;
	// bl 0x831ce980
	ctx.lr = 0x8307956C;
	sub_831CE980(ctx, base);
	// addis r4,r26,167
	ctx.r4.s64 = ctx.r26.s64 + 10944512;
	// addis r3,r27,222
	ctx.r3.s64 = ctx.r27.s64 + 14548992;
	// addi r4,r4,14972
	ctx.r4.s64 = ctx.r4.s64 + 14972;
	// addi r3,r3,-8464
	ctx.r3.s64 = ctx.r3.s64 + -8464;
	// bl 0x83076218
	ctx.lr = 0x83079580;
	sub_83076218(ctx, base);
	// addis r4,r26,174
	ctx.r4.s64 = ctx.r26.s64 + 11403264;
	// addis r3,r27,229
	ctx.r3.s64 = ctx.r27.s64 + 15007744;
	// addi r4,r4,16900
	ctx.r4.s64 = ctx.r4.s64 + 16900;
	// addi r3,r3,-6536
	ctx.r3.s64 = ctx.r3.s64 + -6536;
	// bl 0x83076dc8
	ctx.lr = 0x83079594;
	sub_83076DC8(ctx, base);
	// addis r4,r26,177
	ctx.r4.s64 = ctx.r26.s64 + 11599872;
	// addis r3,r27,205
	ctx.r3.s64 = ctx.r27.s64 + 13434880;
	// addi r4,r4,-13948
	ctx.r4.s64 = ctx.r4.s64 + -13948;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// bl 0x83074688
	ctx.lr = 0x830795A8;
	sub_83074688(ctx, base);
	// addis r4,r26,177
	ctx.r4.s64 = ctx.r26.s64 + 11599872;
	// addis r3,r27,205
	ctx.r3.s64 = ctx.r27.s64 + 13434880;
	// addi r4,r4,-3544
	ctx.r4.s64 = ctx.r4.s64 + -3544;
	// addi r3,r3,-21136
	ctx.r3.s64 = ctx.r3.s64 + -21136;
	// bl 0x83074820
	ctx.lr = 0x830795BC;
	sub_83074820(ctx, base);
	// addis r4,r26,177
	ctx.r4.s64 = ctx.r26.s64 + 11599872;
	// addis r3,r27,205
	ctx.r3.s64 = ctx.r27.s64 + 13434880;
	// addi r4,r4,-1140
	ctx.r4.s64 = ctx.r4.s64 + -1140;
	// addi r3,r3,-18732
	ctx.r3.s64 = ctx.r3.s64 + -18732;
	// bl 0x83073428
	ctx.lr = 0x830795D0;
	sub_83073428(ctx, base);
	// addis r4,r26,177
	ctx.r4.s64 = ctx.r26.s64 + 11599872;
	// addis r3,r27,240
	ctx.r3.s64 = ctx.r27.s64 + 15728640;
	// addi r4,r4,-828
	ctx.r4.s64 = ctx.r4.s64 + -828;
	// addi r3,r3,10296
	ctx.r3.s64 = ctx.r3.s64 + 10296;
	// bl 0x83074b58
	ctx.lr = 0x830795E4;
	sub_83074B58(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83117b70
	ctx.lr = 0x830795EC;
	sub_83117B70(ctx, base);
	// lis r11,177
	ctx.r11.s64 = 11599872;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// ori r9,r11,236
	ctx.r9.u64 = ctx.r11.u64 | 236;
	// lis r8,177
	ctx.r8.s64 = 11599872;
	// lis r7,95
	ctx.r7.s64 = 6225920;
	// ori r6,r10,60652
	ctx.r6.u64 = ctx.r10.u64 | 60652;
	// ori r5,r8,240
	ctx.r5.u64 = ctx.r8.u64 | 240;
	// lwzx r3,r26,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// ori r4,r7,60656
	ctx.r4.u64 = ctx.r7.u64 | 60656;
	// stwx r3,r27,r6
	PPC_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r11,r26,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// stwx r11,r27,r4
	PPC_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079624"))) PPC_WEAK_FUNC(sub_83079624);
PPC_FUNC_IMPL(__imp__sub_83079624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079628"))) PPC_WEAK_FUNC(sub_83079628);
PPC_FUNC_IMPL(__imp__sub_83079628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83079630;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8307963C;
	sub_831156E8(ctx, base);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x83079644;
	sub_831156E8(ctx, base);
	// addis r28,r26,96
	ctx.r28.s64 = ctx.r26.s64 + 6291456;
	// lwz r24,52(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-4900
	ctx.r28.s64 = ctx.r28.s64 + -4900;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x830796a0
	if (!cr6.gt) goto loc_830796A0;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r25,80
	ctx.r30.s64 = ctx.r25.s64 + 80;
	// ori r27,r11,13856
	ctx.r27.u64 = ctx.r11.u64 | 13856;
loc_83079670:
	// cmplwi cr6,r31,21097
	cr6.compare<uint32_t>(ctx.r31.u32, 21097, xer);
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bge cr6,0x83079680
	if (!cr6.lt) goto loc_83079680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83079680:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x83079688;
	sub_82B1E0E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83079670
	if (cr6.lt) goto loc_83079670;
loc_830796A0:
	// addis r28,r26,96
	ctx.r28.s64 = ctx.r26.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-4896
	ctx.r28.s64 = ctx.r28.s64 + -4896;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83079700
	if (!cr6.gt) goto loc_83079700;
	// addis r30,r25,7
	ctx.r30.s64 = ctx.r25.s64 + 458752;
	// addis r29,r26,72
	ctx.r29.s64 = ctx.r26.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,-28592
	ctx.r30.s64 = ctx.r30.s64 + -28592;
	// addi r29,r29,7136
	ctx.r29.s64 = ctx.r29.s64 + 7136;
	// ori r27,r11,58144
	ctx.r27.u64 = ctx.r11.u64 | 58144;
loc_830796D0:
	// cmplwi cr6,r31,653
	cr6.compare<uint32_t>(ctx.r31.u32, 653, xer);
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bge cr6,0x830796e0
	if (!cr6.lt) goto loc_830796E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_830796E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ace470
	ctx.lr = 0x830796E8;
	sub_82ACE470(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x830796d0
	if (cr6.lt) goto loc_830796D0;
loc_83079700:
	// addis r28,r26,96
	ctx.r28.s64 = ctx.r26.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r28,-4892
	ctx.r28.s64 = ctx.r28.s64 + -4892;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83079760
	if (!cr6.gt) goto loc_83079760;
	// addis r30,r25,8
	ctx.r30.s64 = ctx.r25.s64 + 524288;
	// addis r29,r26,88
	ctx.r29.s64 = ctx.r26.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,-15408
	ctx.r30.s64 = ctx.r30.s64 + -15408;
	// addi r29,r29,-20304
	ctx.r29.s64 = ctx.r29.s64 + -20304;
	// ori r27,r11,60004
	ctx.r27.u64 = ctx.r11.u64 | 60004;
loc_83079730:
	// cmplwi cr6,r31,850
	cr6.compare<uint32_t>(ctx.r31.u32, 850, xer);
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bge cr6,0x83079740
	if (!cr6.lt) goto loc_83079740;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83079740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x83079748;
	sub_82D8A4D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,632
	ctx.r29.s64 = ctx.r29.s64 + 632;
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83079730
	if (cr6.lt) goto loc_83079730;
loc_83079760:
	// addis r27,r26,96
	ctx.r27.s64 = ctx.r26.s64 + 6291456;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r27,-4888
	ctx.r27.s64 = ctx.r27.s64 + -4888;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x830797c0
	if (!cr6.gt) goto loc_830797C0;
	// addis r30,r25,8
	ctx.r30.s64 = ctx.r25.s64 + 524288;
	// addis r29,r26,85
	ctx.r29.s64 = ctx.r26.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,22512
	ctx.r30.s64 = ctx.r30.s64 + 22512;
	// addi r29,r29,11904
	ctx.r29.s64 = ctx.r29.s64 + 11904;
	// ori r28,r11,59456
	ctx.r28.u64 = ctx.r11.u64 | 59456;
loc_83079790:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r4,r26,r28
	ctx.r4.u64 = ctx.r26.u64 + ctx.r28.u64;
	// bge cr6,0x830797a0
	if (!cr6.lt) goto loc_830797A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_830797A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f16120
	ctx.lr = 0x830797A8;
	sub_82F16120(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x83079790
	if (cr6.lt) goto loc_83079790;
loc_830797C0:
	// addis r28,r26,99
	ctx.r28.s64 = ctx.r26.s64 + 6488064;
	// addis r29,r25,9
	ctx.r29.s64 = ctx.r25.s64 + 589824;
	// addi r28,r28,11884
	ctx.r28.s64 = ctx.r28.s64 + 11884;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-21104
	ctx.r29.s64 = ctx.r29.s64 + -21104;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_830797D8:
	// cmplwi cr6,r31,1500
	cr6.compare<uint32_t>(ctx.r31.u32, 1500, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x830797e8
	if (!cr6.lt) goto loc_830797E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830797E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16910
	ctx.lr = 0x830797F0;
	sub_82C16910(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// addi r29,r29,520
	ctx.r29.s64 = ctx.r29.s64 + 520;
	// cmplwi cr6,r31,100
	cr6.compare<uint32_t>(ctx.r31.u32, 100, xer);
	// blt cr6,0x830797d8
	if (cr6.lt) goto loc_830797D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83079858
	if (!cr6.gt) goto loc_83079858;
	// addis r28,r26,195
	ctx.r28.s64 = ctx.r26.s64 + 12779520;
	// addis r31,r25,17
	ctx.r31.s64 = ctx.r25.s64 + 1114112;
	// addi r28,r28,-13384
	ctx.r28.s64 = ctx.r28.s64 + -13384;
	// addi r31,r31,15112
	ctx.r31.s64 = ctx.r31.s64 + 15112;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079828:
	// cmplwi cr6,r29,300
	cr6.compare<uint32_t>(ctx.r29.u32, 300, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x83079838
	if (!cr6.lt) goto loc_83079838;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83079838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83077c00
	ctx.lr = 0x83079840;
	sub_83077C00(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// addi r31,r31,2124
	ctx.r31.s64 = ctx.r31.s64 + 2124;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83079828
	if (cr6.lt) goto loc_83079828;
loc_83079858:
	// addis r4,r24,5
	ctx.r4.s64 = ctx.r24.s64 + 327680;
	// addis r3,r25,9
	ctx.r3.s64 = ctx.r25.s64 + 589824;
	// addi r4,r4,14904
	ctx.r4.s64 = ctx.r4.s64 + 14904;
	// addi r3,r3,30896
	ctx.r3.s64 = ctx.r3.s64 + 30896;
	// bl 0x82f09f38
	ctx.lr = 0x8307986C;
	sub_82F09F38(ctx, base);
	// addis r28,r26,111
	ctx.r28.s64 = ctx.r26.s64 + 7274496;
	// addis r29,r25,10
	ctx.r29.s64 = ctx.r25.s64 + 655360;
	// addi r28,r28,5452
	ctx.r28.s64 = ctx.r28.s64 + 5452;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-14324
	ctx.r29.s64 = ctx.r29.s64 + -14324;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079884:
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bge cr6,0x83079894
	if (!cr6.lt) goto loc_83079894;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83079894:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bb0388
	ctx.lr = 0x8307989C;
	sub_82BB0388(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// addi r29,r29,588
	ctx.r29.s64 = ctx.r29.s64 + 588;
	// cmplwi cr6,r31,500
	cr6.compare<uint32_t>(ctx.r31.u32, 500, xer);
	// blt cr6,0x83079884
	if (cr6.lt) goto loc_83079884;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r4,r26,192
	ctx.r4.s64 = ctx.r26.s64 + 12582912;
	// addis r3,r25,14
	ctx.r3.s64 = ctx.r25.s64 + 917504;
	// addi r4,r4,-10964
	ctx.r4.s64 = ctx.r4.s64 + -10964;
	// ori r5,r5,63116
	ctx.r5.u64 = ctx.r5.u64 | 63116;
	// addi r3,r3,17532
	ctx.r3.s64 = ctx.r3.s64 + 17532;
	// bl 0x831ce980
	ctx.lr = 0x830798CC;
	sub_831CE980(ctx, base);
	// addis r4,r26,221
	ctx.r4.s64 = ctx.r26.s64 + 14483456;
	// addis r3,r25,19
	ctx.r3.s64 = ctx.r25.s64 + 1245184;
	// addi r4,r4,-26512
	ctx.r4.s64 = ctx.r4.s64 + -26512;
	// addi r3,r3,-31000
	ctx.r3.s64 = ctx.r3.s64 + -31000;
	// bl 0x83075da8
	ctx.lr = 0x830798E0;
	sub_83075DA8(ctx, base);
	// addis r4,r26,229
	ctx.r4.s64 = ctx.r26.s64 + 15007744;
	// addis r3,r25,20
	ctx.r3.s64 = ctx.r25.s64 + 1310720;
	// addi r4,r4,-6536
	ctx.r4.s64 = ctx.r4.s64 + -6536;
	// addi r3,r3,-16696
	ctx.r3.s64 = ctx.r3.s64 + -16696;
	// bl 0x83076dc8
	ctx.lr = 0x830798F4;
	sub_83076DC8(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addis r4,r26,96
	ctx.r4.s64 = ctx.r26.s64 + 6291456;
	// addis r3,r25,22
	ctx.r3.s64 = ctx.r25.s64 + 1441792;
	// addi r4,r4,-4872
	ctx.r4.s64 = ctx.r4.s64 + -4872;
	// ori r5,r5,16756
	ctx.r5.u64 = ctx.r5.u64 | 16756;
	// addi r3,r3,17992
	ctx.r3.s64 = ctx.r3.s64 + 17992;
	// bl 0x831ce980
	ctx.lr = 0x83079910;
	sub_831CE980(ctx, base);
	// addis r4,r26,236
	ctx.r4.s64 = ctx.r26.s64 + 15466496;
	// addis r3,r25,26
	ctx.r3.s64 = ctx.r25.s64 + 1703936;
	// addi r4,r4,1908
	ctx.r4.s64 = ctx.r4.s64 + 1908;
	// addi r3,r3,-30788
	ctx.r3.s64 = ctx.r3.s64 + -30788;
	// bl 0x83073eb0
	ctx.lr = 0x83079924;
	sub_83073EB0(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// ori r9,r11,60652
	ctx.r9.u64 = ctx.r11.u64 | 60652;
	// lis r8,95
	ctx.r8.s64 = 6225920;
	// lis r7,25
	ctx.r7.s64 = 1638400;
	// ori r6,r10,37968
	ctx.r6.u64 = ctx.r10.u64 | 37968;
	// ori r5,r8,60656
	ctx.r5.u64 = ctx.r8.u64 | 60656;
	// lwzx r3,r26,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// ori r4,r7,37972
	ctx.r4.u64 = ctx.r7.u64 | 37972;
	// stwx r3,r25,r6
	PPC_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r11,r26,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// stwx r11,r25,r4
	PPC_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307995C"))) PPC_WEAK_FUNC(sub_8307995C);
PPC_FUNC_IMPL(__imp__sub_8307995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079960"))) PPC_WEAK_FUNC(sub_83079960);
PPC_FUNC_IMPL(__imp__sub_83079960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83079968;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83079974;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x8307997C;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r25,52(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x8311a0a8
	ctx.lr = 0x83079998;
	sub_8311A0A8(ctx, base);
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r26,80
	ctx.r29.s64 = ctx.r26.s64 + 80;
	// ori r28,r11,13856
	ctx.r28.u64 = ctx.r11.u64 | 13856;
loc_830799AC:
	// cmplwi cr6,r31,21097
	cr6.compare<uint32_t>(ctx.r31.u32, 21097, xer);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bge cr6,0x830799bc
	if (!cr6.lt) goto loc_830799BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830799BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x830799C4;
	sub_82B1E0E8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// cmplwi cr6,r31,1920
	cr6.compare<uint32_t>(ctx.r31.u32, 1920, xer);
	// blt cr6,0x830799ac
	if (cr6.lt) goto loc_830799AC;
	// addis r29,r26,7
	ctx.r29.s64 = ctx.r26.s64 + 458752;
	// addis r30,r27,72
	ctx.r30.s64 = ctx.r27.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-28592
	ctx.r29.s64 = ctx.r29.s64 + -28592;
	// addi r30,r30,7136
	ctx.r30.s64 = ctx.r30.s64 + 7136;
	// ori r28,r11,58144
	ctx.r28.u64 = ctx.r11.u64 | 58144;
loc_830799F4:
	// cmplwi cr6,r31,653
	cr6.compare<uint32_t>(ctx.r31.u32, 653, xer);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bge cr6,0x83079a04
	if (!cr6.lt) goto loc_83079A04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079A04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ace470
	ctx.lr = 0x83079A0C;
	sub_82ACE470(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// cmplwi cr6,r31,60
	cr6.compare<uint32_t>(ctx.r31.u32, 60, xer);
	// blt cr6,0x830799f4
	if (cr6.lt) goto loc_830799F4;
	// addis r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 524288;
	// addis r30,r27,88
	ctx.r30.s64 = ctx.r27.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-15408
	ctx.r29.s64 = ctx.r29.s64 + -15408;
	// addi r30,r30,-20304
	ctx.r30.s64 = ctx.r30.s64 + -20304;
	// ori r28,r11,60004
	ctx.r28.u64 = ctx.r11.u64 | 60004;
loc_83079A3C:
	// cmplwi cr6,r31,850
	cr6.compare<uint32_t>(ctx.r31.u32, 850, xer);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bge cr6,0x83079a4c
	if (!cr6.lt) goto loc_83079A4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079A4C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x83079A54;
	sub_82D8A4D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// addi r29,r29,632
	ctx.r29.s64 = ctx.r29.s64 + 632;
	// cmplwi cr6,r31,60
	cr6.compare<uint32_t>(ctx.r31.u32, 60, xer);
	// blt cr6,0x83079a3c
	if (cr6.lt) goto loc_83079A3C;
	// addis r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 524288;
	// addis r30,r27,85
	ctx.r30.s64 = ctx.r27.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,22512
	ctx.r29.s64 = ctx.r29.s64 + 22512;
	// addi r30,r30,11904
	ctx.r30.s64 = ctx.r30.s64 + 11904;
	// ori r28,r11,59456
	ctx.r28.u64 = ctx.r11.u64 | 59456;
loc_83079A84:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bge cr6,0x83079a94
	if (!cr6.lt) goto loc_83079A94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079A94:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f16120
	ctx.lr = 0x83079A9C;
	sub_82F16120(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// cmplwi cr6,r31,40
	cr6.compare<uint32_t>(ctx.r31.u32, 40, xer);
	// blt cr6,0x83079a84
	if (cr6.lt) goto loc_83079A84;
	// addis r28,r27,99
	ctx.r28.s64 = ctx.r27.s64 + 6488064;
	// addis r29,r26,9
	ctx.r29.s64 = ctx.r26.s64 + 589824;
	// addi r28,r28,11884
	ctx.r28.s64 = ctx.r28.s64 + 11884;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-21104
	ctx.r29.s64 = ctx.r29.s64 + -21104;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079AC8:
	// cmplwi cr6,r31,1500
	cr6.compare<uint32_t>(ctx.r31.u32, 1500, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge cr6,0x83079ad8
	if (!cr6.lt) goto loc_83079AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079AD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c16910
	ctx.lr = 0x83079AE0;
	sub_82C16910(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// addi r29,r29,520
	ctx.r29.s64 = ctx.r29.s64 + 520;
	// cmplwi cr6,r31,100
	cr6.compare<uint32_t>(ctx.r31.u32, 100, xer);
	// blt cr6,0x83079ac8
	if (cr6.lt) goto loc_83079AC8;
	// addis r28,r27,195
	ctx.r28.s64 = ctx.r27.s64 + 12779520;
	// addis r29,r26,17
	ctx.r29.s64 = ctx.r26.s64 + 1114112;
	// addi r28,r28,-13384
	ctx.r28.s64 = ctx.r28.s64 + -13384;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,15112
	ctx.r29.s64 = ctx.r29.s64 + 15112;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079B0C:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge cr6,0x83079b1c
	if (!cr6.lt) goto loc_83079B1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079B1C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83077c00
	ctx.lr = 0x83079B24;
	sub_83077C00(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// addi r29,r29,2124
	ctx.r29.s64 = ctx.r29.s64 + 2124;
	// cmplwi cr6,r31,40
	cr6.compare<uint32_t>(ctx.r31.u32, 40, xer);
	// blt cr6,0x83079b0c
	if (cr6.lt) goto loc_83079B0C;
	// addis r4,r26,9
	ctx.r4.s64 = ctx.r26.s64 + 589824;
	// addis r3,r25,5
	ctx.r3.s64 = ctx.r25.s64 + 327680;
	// addi r4,r4,30896
	ctx.r4.s64 = ctx.r4.s64 + 30896;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x82f09f38
	ctx.lr = 0x83079B4C;
	sub_82F09F38(ctx, base);
	// addis r28,r27,111
	ctx.r28.s64 = ctx.r27.s64 + 7274496;
	// addis r29,r26,10
	ctx.r29.s64 = ctx.r26.s64 + 655360;
	// addi r28,r28,5452
	ctx.r28.s64 = ctx.r28.s64 + 5452;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,-14324
	ctx.r29.s64 = ctx.r29.s64 + -14324;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83079B64:
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge cr6,0x83079b74
	if (!cr6.lt) goto loc_83079B74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83079B74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bb0388
	ctx.lr = 0x83079B7C;
	sub_82BB0388(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// addi r29,r29,588
	ctx.r29.s64 = ctx.r29.s64 + 588;
	// cmplwi cr6,r31,500
	cr6.compare<uint32_t>(ctx.r31.u32, 500, xer);
	// blt cr6,0x83079b64
	if (cr6.lt) goto loc_83079B64;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r4,r26,14
	ctx.r4.s64 = ctx.r26.s64 + 917504;
	// addis r3,r27,192
	ctx.r3.s64 = ctx.r27.s64 + 12582912;
	// addi r4,r4,17532
	ctx.r4.s64 = ctx.r4.s64 + 17532;
	// ori r5,r5,63116
	ctx.r5.u64 = ctx.r5.u64 | 63116;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x831ce980
	ctx.lr = 0x83079BAC;
	sub_831CE980(ctx, base);
	// addis r4,r26,19
	ctx.r4.s64 = ctx.r26.s64 + 1245184;
	// addis r3,r27,221
	ctx.r3.s64 = ctx.r27.s64 + 14483456;
	// addi r4,r4,-31000
	ctx.r4.s64 = ctx.r4.s64 + -31000;
	// addi r3,r3,-26512
	ctx.r3.s64 = ctx.r3.s64 + -26512;
	// bl 0x83075da8
	ctx.lr = 0x83079BC0;
	sub_83075DA8(ctx, base);
	// addis r4,r26,20
	ctx.r4.s64 = ctx.r26.s64 + 1310720;
	// addis r3,r27,229
	ctx.r3.s64 = ctx.r27.s64 + 15007744;
	// addi r4,r4,-16696
	ctx.r4.s64 = ctx.r4.s64 + -16696;
	// addi r3,r3,-6536
	ctx.r3.s64 = ctx.r3.s64 + -6536;
	// bl 0x83076dc8
	ctx.lr = 0x83079BD4;
	sub_83076DC8(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addis r4,r26,22
	ctx.r4.s64 = ctx.r26.s64 + 1441792;
	// addis r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 6291456;
	// addi r4,r4,17992
	ctx.r4.s64 = ctx.r4.s64 + 17992;
	// ori r5,r5,16756
	ctx.r5.u64 = ctx.r5.u64 | 16756;
	// addi r3,r3,-4872
	ctx.r3.s64 = ctx.r3.s64 + -4872;
	// bl 0x831ce980
	ctx.lr = 0x83079BF0;
	sub_831CE980(ctx, base);
	// addis r4,r26,26
	ctx.r4.s64 = ctx.r26.s64 + 1703936;
	// addis r3,r27,236
	ctx.r3.s64 = ctx.r27.s64 + 15466496;
	// addi r4,r4,-30788
	ctx.r4.s64 = ctx.r4.s64 + -30788;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x83073eb0
	ctx.lr = 0x83079C04;
	sub_83073EB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83117b70
	ctx.lr = 0x83079C0C;
	sub_83117B70(ctx, base);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// ori r9,r11,37968
	ctx.r9.u64 = ctx.r11.u64 | 37968;
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// lis r7,95
	ctx.r7.s64 = 6225920;
	// ori r6,r10,60652
	ctx.r6.u64 = ctx.r10.u64 | 60652;
	// ori r5,r8,37972
	ctx.r5.u64 = ctx.r8.u64 | 37972;
	// lwzx r3,r26,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// ori r4,r7,60656
	ctx.r4.u64 = ctx.r7.u64 | 60656;
	// stwx r3,r27,r6
	PPC_STORE_U32(ctx.r27.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwzx r11,r26,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	// stwx r11,r27,r4
	PPC_STORE_U32(ctx.r27.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079C44"))) PPC_WEAK_FUNC(sub_83079C44);
PPC_FUNC_IMPL(__imp__sub_83079C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079C48"))) PPC_WEAK_FUNC(sub_83079C48);
PPC_FUNC_IMPL(__imp__sub_83079C48) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6484
	ctx.r10.s64 = ctx.r11.s64 + 6484;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524cd0
	ctx.lr = 0x83079C74;
	sub_83524CD0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83079c94
	if (cr6.eq) goto loc_83079C94;
	// bl 0x82595188
	ctx.lr = 0x83079C84;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83079C94;
	sub_825952B8(ctx, base);
loc_83079C94:
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

__attribute__((alias("__imp__sub_83079CB0"))) PPC_WEAK_FUNC(sub_83079CB0);
PPC_FUNC_IMPL(__imp__sub_83079CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bgt cr6,0x83079cc0
	if (cr6.gt) goto loc_83079CC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83079CC0:
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bge cr6,0x83079cd0
	if (!cr6.lt) goto loc_83079CD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83079CD0:
	// cmplwi cr6,r3,100
	cr6.compare<uint32_t>(ctx.r3.u32, 100, xer);
	// bge cr6,0x83079ce0
	if (!cr6.lt) goto loc_83079CE0;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83079CE0:
	// cmplwi cr6,r3,1000
	cr6.compare<uint32_t>(ctx.r3.u32, 1000, xer);
	// bge cr6,0x83079cf0
	if (!cr6.lt) goto loc_83079CF0;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83079CF0:
	// cmplwi cr6,r3,10000
	cr6.compare<uint32_t>(ctx.r3.u32, 10000, xer);
	// bge cr6,0x83079d00
	if (!cr6.lt) goto loc_83079D00;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83079D00:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x83079d18
	if (!cr6.lt) goto loc_83079D18;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83079D18:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r10,r11,16960
	ctx.r10.u64 = ctx.r11.u64 | 16960;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x83079d30
	if (!cr6.lt) goto loc_83079D30;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83079D30:
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r10,r11,38528
	ctx.r10.u64 = ctx.r11.u64 | 38528;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x83079d48
	if (!cr6.lt) goto loc_83079D48;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83079D48:
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// ori r10,r11,57600
	ctx.r10.u64 = ctx.r11.u64 | 57600;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x83079d60
	if (!cr6.lt) goto loc_83079D60;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83079D60:
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// subfc r9,r10,r3
	xer.ca = ctx.r3.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079D78"))) PPC_WEAK_FUNC(sub_83079D78);
PPC_FUNC_IMPL(__imp__sub_83079D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83079D80;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1bd8
	ctx.lr = 0x83079DB4;
	sub_832D1BD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83079e2c
	if (cr6.eq) goto loc_83079E2C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832d1ab0
	ctx.lr = 0x83079DD4;
	sub_832D1AB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83079dfc
	if (!cr6.eq) goto loc_83079DFC;
	// bl 0x82417100
	ctx.lr = 0x83079DE0;
	sub_82417100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83079e1c
	if (cr6.eq) goto loc_83079E1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1a68
	ctx.lr = 0x83079DF4;
	sub_832D1A68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83079e30
	goto loc_83079E30;
loc_83079DFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83079e1c
	if (cr6.eq) goto loc_83079E1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,29
	ctx.r30.s64 = 29;
	// bl 0x832d1a68
	ctx.lr = 0x83079E14;
	sub_832D1A68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83079e30
	goto loc_83079E30;
loc_83079E1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1a68
	ctx.lr = 0x83079E24;
	sub_832D1A68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83079e38
	if (!cr6.eq) goto loc_83079E38;
loc_83079E2C:
	// bl 0x82417100
	ctx.lr = 0x83079E30;
	sub_82417100(ctx, base);
loc_83079E30:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83079e60
	if (!cr6.eq) goto loc_83079E60;
loc_83079E38:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d3be8
	ctx.lr = 0x83079E48;
	sub_832D3BE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83079e5c
	if (!cr6.eq) goto loc_83079E5C;
	// bl 0x82417100
	ctx.lr = 0x83079E54;
	sub_82417100(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83079E5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83079E60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079E68"))) PPC_WEAK_FUNC(sub_83079E68);
PPC_FUNC_IMPL(__imp__sub_83079E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83079E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83079E90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// ble cr6,0x83079eac
	if (!cr6.gt) goto loc_83079EAC;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83079EAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83079ec0
	if (cr6.eq) goto loc_83079EC0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x83079ec4
	if (!cr6.gt) goto loc_83079EC4;
loc_83079EC0:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83079EC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83079EE0;
	sub_82595718(ctx, base);
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079F00"))) PPC_WEAK_FUNC(sub_83079F00);
PPC_FUNC_IMPL(__imp__sub_83079F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,112
	cr6.compare<uint32_t>(ctx.r3.u32, 112, xer);
	// bgt cr6,0x83079f3c
	if (cr6.gt) goto loc_83079F3C;
	// beq cr6,0x83079f34
	if (cr6.eq) goto loc_83079F34;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x83079f4c
	if (cr6.lt) goto loc_83079F4C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// ble cr6,0x83079f2c
	if (!cr6.gt) goto loc_83079F2C;
	// cmplwi cr6,r3,30
	cr6.compare<uint32_t>(ctx.r3.u32, 30, xer);
	// bne cr6,0x83079f4c
	if (!cr6.eq) goto loc_83079F4C;
loc_83079F24:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83079F2C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83079F34:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83079F3C:
	// cmplwi cr6,r3,1223
	cr6.compare<uint32_t>(ctx.r3.u32, 1223, xer);
	// beq cr6,0x83079f54
	if (cr6.eq) goto loc_83079F54;
	// cmplwi cr6,r3,1392
	cr6.compare<uint32_t>(ctx.r3.u32, 1392, xer);
	// beq cr6,0x83079f24
	if (cr6.eq) goto loc_83079F24;
loc_83079F4C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83079F54:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079F5C"))) PPC_WEAK_FUNC(sub_83079F5C);
PPC_FUNC_IMPL(__imp__sub_83079F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83079F60"))) PPC_WEAK_FUNC(sub_83079F60);
PPC_FUNC_IMPL(__imp__sub_83079F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83079F68;
	__savegprlr_25(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83079F9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83079fcc
	if (cr6.eq) goto loc_83079FCC;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d1a28
	ctx.lr = 0x83079FC4;
	sub_832D1A28(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83079FCC:
	// li r5,312
	ctx.r5.s64 = 312;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83079FDC;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x831ce980
	ctx.lr = 0x83079FFC;
	sub_831CE980(ctx, base);
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r10,r1,358
	ctx.r10.s64 = ctx.r1.s64 + 358;
	// addi r11,r31,262
	ctx.r11.s64 = ctx.r31.s64 + 262;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8307A00C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8307a00c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8307A00C;
	// bl 0x83111980
	ctx.lr = 0x8307A01C;
	sub_83111980(ctx, base);
	// stw r3,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d3ee0
	ctx.lr = 0x8307A048;
	sub_832D3EE0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A050"))) PPC_WEAK_FUNC(sub_8307A050);
PPC_FUNC_IMPL(__imp__sub_8307A050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8307A058;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A08C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
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
	// beq cr6,0x8307a0bc
	if (cr6.eq) goto loc_8307A0BC;
	// bl 0x832d1990
	ctx.lr = 0x8307A0B4;
	sub_832D1990(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8307A0BC:
	// bl 0x832d4028
	ctx.lr = 0x8307A0C0;
	sub_832D4028(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A0C8"))) PPC_WEAK_FUNC(sub_8307A0C8);
PPC_FUNC_IMPL(__imp__sub_8307A0C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d1bd8
	ctx.lr = 0x8307A104;
	sub_832D1BD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8307a118
	if (!cr6.eq) goto loc_8307A118;
	// bl 0x82417100
	ctx.lr = 0x8307A114;
	sub_82417100(ctx, base);
	// b 0x8307a170
	goto loc_8307A170;
loc_8307A118:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d37a8
	ctx.lr = 0x8307A124;
	sub_832D37A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8307a144
	if (!cr6.eq) goto loc_8307A144;
	// bl 0x82417100
	ctx.lr = 0x8307A130;
	sub_82417100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1a68
	ctx.lr = 0x8307A13C;
	sub_832D1A68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8307a170
	goto loc_8307A170;
loc_8307A144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1a68
	ctx.lr = 0x8307A14C;
	sub_832D1A68(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// ble cr6,0x8307a168
	if (!cr6.gt) goto loc_8307A168;
	// li r3,1392
	ctx.r3.s64 = 1392;
	// b 0x8307a170
	goto loc_8307A170;
loc_8307A168:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8307A170:
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

__attribute__((alias("__imp__sub_8307A188"))) PPC_WEAK_FUNC(sub_8307A188);
PPC_FUNC_IMPL(__imp__sub_8307A188) {
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
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8307A1AC;
	sub_82596FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82597088
	ctx.lr = 0x8307A1C4;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_8307A1E0"))) PPC_WEAK_FUNC(sub_8307A1E0);
PPC_FUNC_IMPL(__imp__sub_8307A1E0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// b 0x832d19a8
	sub_832D19A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A1FC"))) PPC_WEAK_FUNC(sub_8307A1FC);
PPC_FUNC_IMPL(__imp__sub_8307A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A200"))) PPC_WEAK_FUNC(sub_8307A200);
PPC_FUNC_IMPL(__imp__sub_8307A200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// b 0x832d19a8
	sub_832D19A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A218"))) PPC_WEAK_FUNC(sub_8307A218);
PPC_FUNC_IMPL(__imp__sub_8307A218) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,6524
	ctx.r10.s64 = ctx.r11.s64 + 6524;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8307a288
	if (cr6.eq) goto loc_8307A288;
	// lwsync 
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_8307A250:
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
	// bne 0x8307a250
	if (!cr0.eq) goto loc_8307A250;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8307a288
	if (!cr6.eq) goto loc_8307A288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8307A288:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,6484
	ctx.r10.s64 = ctx.r11.s64 + 6484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83524cd0
	ctx.lr = 0x8307A29C;
	sub_83524CD0(ctx, base);
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

__attribute__((alias("__imp__sub_8307A2B0"))) PPC_WEAK_FUNC(sub_8307A2B0);
PPC_FUNC_IMPL(__imp__sub_8307A2B0) {
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
	// bl 0x8307a218
	ctx.lr = 0x8307A2D0;
	sub_8307A218(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8307a2f0
	if (cr6.eq) goto loc_8307A2F0;
	// bl 0x82595188
	ctx.lr = 0x8307A2E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8307A2F0;
	sub_825952B8(ctx, base);
loc_8307A2F0:
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

__attribute__((alias("__imp__sub_8307A30C"))) PPC_WEAK_FUNC(sub_8307A30C);
PPC_FUNC_IMPL(__imp__sub_8307A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A310"))) PPC_WEAK_FUNC(sub_8307A310);
PPC_FUNC_IMPL(__imp__sub_8307A310) {
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
	// bl 0x8310cc00
	ctx.lr = 0x8307A328;
	sub_8310CC00(ctx, base);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8307A338;
	sub_82596FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82597088
	ctx.lr = 0x8307A350;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_8307A36C"))) PPC_WEAK_FUNC(sub_8307A36C);
PPC_FUNC_IMPL(__imp__sub_8307A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A370"))) PPC_WEAK_FUNC(sub_8307A370);
PPC_FUNC_IMPL(__imp__sub_8307A370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8307A378;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x832d1bd8
	ctx.lr = 0x8307A3B0;
	sub_832D1BD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8307a3c8
	if (!cr6.eq) goto loc_8307A3C8;
	// bl 0x82417100
	ctx.lr = 0x8307A3C0;
	sub_82417100(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8307A3C8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d37a8
	ctx.lr = 0x8307A3D4;
	sub_832D37A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8307a3f8
	if (!cr6.eq) goto loc_8307A3F8;
loc_8307A3DC:
	// bl 0x82417100
	ctx.lr = 0x8307A3E0;
	sub_82417100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1a68
	ctx.lr = 0x8307A3EC;
	sub_832D1A68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8307A3F8:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// ble cr6,0x8307a41c
	if (!cr6.gt) goto loc_8307A41C;
loc_8307A408:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1a68
	ctx.lr = 0x8307A410;
	sub_832D1A68(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8307A41C:
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bne cr6,0x8307a408
	if (!cr6.eq) goto loc_8307A408;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8307a498
	if (cr6.eq) goto loc_8307A498;
	// lis r27,2
	ctx.r27.s64 = 131072;
loc_8307A434:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8307a4b0
	if (cr6.eq) goto loc_8307A4B0;
	// subf r31,r30,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// ble cr6,0x8307a460
	if (!cr6.gt) goto loc_8307A460;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8307A460:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r30,r26
	ctx.r4.u64 = ctx.r30.u64 + ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1dd0
	ctx.lr = 0x8307A478;
	sub_832D1DD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8307a3dc
	if (cr6.eq) goto loc_8307A3DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8307a408
	if (!cr6.eq) goto loc_8307A408;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8307a434
	if (cr6.lt) goto loc_8307A434;
loc_8307A498:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1a68
	ctx.lr = 0x8307A4A4;
	sub_832D1A68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8307A4B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832d1a68
	ctx.lr = 0x8307A4B8;
	sub_832D1A68(ctx, base);
	// li r3,1223
	ctx.r3.s64 = 1223;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A4C4"))) PPC_WEAK_FUNC(sub_8307A4C4);
PPC_FUNC_IMPL(__imp__sub_8307A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A4C8"))) PPC_WEAK_FUNC(sub_8307A4C8);
PPC_FUNC_IMPL(__imp__sub_8307A4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8307A4D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8307a4f4
	if (cr6.eq) goto loc_8307A4F4;
	// bl 0x83105d48
	ctx.lr = 0x8307A4E8;
	sub_83105D48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8307a500
	goto loc_8307A500;
loc_8307A4F4:
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_8307A500:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8310cc00
	ctx.lr = 0x8307A50C;
	sub_8310CC00(ctx, base);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8307A51C;
	sub_82596FE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82597088
	ctx.lr = 0x8307A534;
	sub_82597088(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8307a55c
	if (!cr6.eq) goto loc_8307A55C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8307A55C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d19a0
	ctx.lr = 0x8307A568;
	sub_832D19A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8307a578
	if (!cr6.eq) goto loc_8307A578;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_8307A578:
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A584"))) PPC_WEAK_FUNC(sub_8307A584);
PPC_FUNC_IMPL(__imp__sub_8307A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307A588"))) PPC_WEAK_FUNC(sub_8307A588);
PPC_FUNC_IMPL(__imp__sub_8307A588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8307A5A0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x8307a5c0
	if (cr6.eq) goto loc_8307A5C0;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// eqv r7,r9,r10
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// b 0x8307a5d0
	goto loc_8307A5D0;
loc_8307A5C0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subfc r7,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8307A5D0:
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8307a5e8
	if (cr6.eq) goto loc_8307A5E8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8307a5f0
	goto loc_8307A5F0;
loc_8307A5E8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8307A5F0:
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8307a5a0
	if (cr6.eq) goto loc_8307A5A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A600"))) PPC_WEAK_FUNC(sub_8307A600);
PPC_FUNC_IMPL(__imp__sub_8307A600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8307A608;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r24,0(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r28,r4,8
	ctx.r28.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// blt cr6,0x8307a644
	if (cr6.lt) goto loc_8307A644;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A63C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8307A644:
	// lbz r11,45(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 45);
	// li r31,254
	ctx.r31.s64 = 254;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8307a66c
	if (cr6.eq) goto loc_8307A66C;
	// bl 0x83105d48
	ctx.lr = 0x8307A658;
	sub_83105D48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8307a684
	goto loc_8307A684;
loc_8307A66C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8307A684:
	// bl 0x8307a310
	ctx.lr = 0x8307A688;
	sub_8307A310(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8307a6b4
	if (!cr6.eq) goto loc_8307A6B4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A6AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8307A6B4:
	// li r11,128
	ctx.r11.s64 = 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8307A6D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8307a6e0
	if (!cr6.eq) goto loc_8307A6E0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_8307A6E0:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8307a050
	ctx.lr = 0x8307A704;
	sub_8307A050(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8307a72c
	if (cr6.eq) goto loc_8307A72C;
loc_8307A70C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8307A72C:
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82595718
	ctx.lr = 0x8307A740;
	sub_82595718(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8307a70c
	if (cr6.eq) goto loc_8307A70C;
loc_8307A74C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8307a78c
	if (cr6.eq) goto loc_8307A78C;
	// bl 0x832d31b8
	ctx.lr = 0x8307A788;
	sub_832D31B8(ctx, base);
	// b 0x8307a790
	goto loc_8307A790;
loc_8307A78C:
	// bl 0x832d43f8
	ctx.lr = 0x8307A790;
	sub_832D43F8(ctx, base);
loc_8307A790:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8307a838
	if (!cr6.eq) goto loc_8307A838;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A7AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8307a7c4
	if (!cr6.eq) goto loc_8307A7C4;
	// bl 0x83111980
	ctx.lr = 0x8307A7B8;
	sub_83111980(ctx, base);
	// lwz r11,308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 308);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8307a74c
	if (!cr6.eq) goto loc_8307A74C;
loc_8307A7C4:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8307a74c
	if (cr6.eq) goto loc_8307A74C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r31,r26,264
	ctx.r31.s64 = ctx.r26.s64 + 264;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_8307A7E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c348
	ctx.lr = 0x8307A7E8;
	sub_8241C348(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8307a81c
	if (cr6.eq) goto loc_8307A81C;
	// add r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_8307A7FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8307a81c
	if (!cr0.eq) goto loc_8307A81C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8307a7fc
	if (!cr6.eq) goto loc_8307A7FC;
loc_8307A81C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8307a870
	if (cr6.eq) goto loc_8307A870;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,308
	ctx.r31.s64 = ctx.r31.s64 + 308;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x8307a7e0
	if (cr6.lt) goto loc_8307A7E0;
	// b 0x8307a74c
	goto loc_8307A74C;
loc_8307A838:
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x8307A848;
	sub_825952B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x832d3798
	ctx.lr = 0x8307A850;
	sub_832D3798(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8307A868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8307A870:
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x8307A880;
	sub_825952B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x832d3798
	ctx.lr = 0x8307A888;
	sub_832D3798(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A890"))) PPC_WEAK_FUNC(sub_8307A890);
PPC_FUNC_IMPL(__imp__sub_8307A890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8307A898;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8307a8e8
	if (cr6.eq) goto loc_8307A8E8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8307a8e8
	if (cr6.lt) goto loc_8307A8E8;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8307a8d4
	if (cr6.eq) goto loc_8307A8D4;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8307A8D4;
	sub_831CE980(ctx, base);
loc_8307A8D4:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8307A8E8;
	sub_825952B8(ctx, base);
loc_8307A8E8:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// sthx r9,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A908"))) PPC_WEAK_FUNC(sub_8307A908);
PPC_FUNC_IMPL(__imp__sub_8307A908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8307A910;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r31,r4,7
	ctx.r31.u64 = ctx.r4.u64 | 7;
	// ori r9,r11,65534
	ctx.r9.u64 = ctx.r11.u64 | 65534;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x8307a938
	if (!cr6.gt) goto loc_8307A938;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x8307a964
	goto loc_8307A964;
loc_8307A938:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r7,r31,r8
	ctx.r7.u32 = PPCDivide(ctx.r31.u32, ctx.r8.u32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x8307a964
	if (!cr6.gt) goto loc_8307A964;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x8307a964
	if (!cr6.gt) goto loc_8307A964;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_8307A964:
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8307A980;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8307a9b0
	if (cr6.eq) goto loc_8307A9B0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8307a9a0
	if (cr6.lt) goto loc_8307A9A0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8307a9a4
	goto loc_8307A9A4;
loc_8307A9A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8307A9A4:
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8307A9B0;
	sub_831CE980(ctx, base);
loc_8307A9B0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8307a9cc
	if (cr6.lt) goto loc_8307A9CC;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8307A9CC;
	sub_825952B8(ctx, base);
loc_8307A9CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// blt cr6,0x8307a9ec
	if (cr6.lt) goto loc_8307A9EC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8307A9EC:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A9FC"))) PPC_WEAK_FUNC(sub_8307A9FC);
PPC_FUNC_IMPL(__imp__sub_8307A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8307AA00"))) PPC_WEAK_FUNC(sub_8307AA00);
PPC_FUNC_IMPL(__imp__sub_8307AA00) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8307AA34;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,52(r7)
	PPC_STORE_U8(ctx.r7.u32 + 52, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,53(r6)
	PPC_STORE_U8(ctx.r6.u32 + 53, ctx.r11.u8);
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

