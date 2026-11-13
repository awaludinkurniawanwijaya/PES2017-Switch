#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83253CC8"))) PPC_WEAK_FUNC(sub_83253CC8);
PPC_FUNC_IMPL(__imp__sub_83253CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83253ce4
	if (!cr6.eq) goto loc_83253CE4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83253CE4:
	// b 0x832534f0
	sub_832534F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253CE8"))) PPC_WEAK_FUNC(sub_83253CE8);
PPC_FUNC_IMPL(__imp__sub_83253CE8) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83253300
	ctx.lr = 0x83253D08;
	sub_83253300(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83253d34
	if (!cr6.eq) goto loc_83253D34;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83253D34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253D44"))) PPC_WEAK_FUNC(sub_83253D44);
PPC_FUNC_IMPL(__imp__sub_83253D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253D48"))) PPC_WEAK_FUNC(sub_83253D48);
PPC_FUNC_IMPL(__imp__sub_83253D48) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83253d7c
	if (!cr6.eq) goto loc_83253D7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83253D7C:
	// lfs f2,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83252bc0
	ctx.lr = 0x83253D88;
	sub_83252BC0(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83253db0
	if (!cr6.eq) goto loc_83253DB0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83253DB0:
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

__attribute__((alias("__imp__sub_83253DC4"))) PPC_WEAK_FUNC(sub_83253DC4);
PPC_FUNC_IMPL(__imp__sub_83253DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253DC8"))) PPC_WEAK_FUNC(sub_83253DC8);
PPC_FUNC_IMPL(__imp__sub_83253DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83253de4
	if (!cr6.eq) goto loc_83253DE4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83253DE4:
	// b 0x83252f70
	sub_83252F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253DE8"))) PPC_WEAK_FUNC(sub_83253DE8);
PPC_FUNC_IMPL(__imp__sub_83253DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83253e04
	if (!cr6.eq) goto loc_83253E04;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83253E04:
	// b 0x832530a0
	sub_832530A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253E08"))) PPC_WEAK_FUNC(sub_83253E08);
PPC_FUNC_IMPL(__imp__sub_83253E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r10,0,5,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83253e30
	if (!cr6.eq) goto loc_83253E30;
	// oris r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 134217728;
loc_83253E30:
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253E38"))) PPC_WEAK_FUNC(sub_83253E38);
PPC_FUNC_IMPL(__imp__sub_83253E38) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832535c0
	ctx.lr = 0x83253E54;
	sub_832535C0(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83253e80
	if (!cr6.eq) goto loc_83253E80;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83253E80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253E90"))) PPC_WEAK_FUNC(sub_83253E90);
PPC_FUNC_IMPL(__imp__sub_83253E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83253eac
	if (!cr6.eq) goto loc_83253EAC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83253EAC:
	// b 0x83252aa0
	sub_83252AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253EB0"))) PPC_WEAK_FUNC(sub_83253EB0);
PPC_FUNC_IMPL(__imp__sub_83253EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83253ed8
	if (!cr6.eq) goto loc_83253ED8;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_83253ED8:
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253EE0"))) PPC_WEAK_FUNC(sub_83253EE0);
PPC_FUNC_IMPL(__imp__sub_83253EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83253f08
	if (!cr6.eq) goto loc_83253F08;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_83253F08:
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253F10"))) PPC_WEAK_FUNC(sub_83253F10);
PPC_FUNC_IMPL(__imp__sub_83253F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r10,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83253f38
	if (!cr6.eq) goto loc_83253F38;
	// oris r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 262144;
loc_83253F38:
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253F40"))) PPC_WEAK_FUNC(sub_83253F40);
PPC_FUNC_IMPL(__imp__sub_83253F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83253f68
	if (!cr6.eq) goto loc_83253F68;
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_83253F68:
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253F70"))) PPC_WEAK_FUNC(sub_83253F70);
PPC_FUNC_IMPL(__imp__sub_83253F70) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// li r5,512
	ctx.r5.s64 = 512;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x83253670
	sub_83253670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253F84"))) PPC_WEAK_FUNC(sub_83253F84);
PPC_FUNC_IMPL(__imp__sub_83253F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253F88"))) PPC_WEAK_FUNC(sub_83253F88);
PPC_FUNC_IMPL(__imp__sub_83253F88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x83253670
	sub_83253670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253F9C"))) PPC_WEAK_FUNC(sub_83253F9C);
PPC_FUNC_IMPL(__imp__sub_83253F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253FA0"))) PPC_WEAK_FUNC(sub_83253FA0);
PPC_FUNC_IMPL(__imp__sub_83253FA0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x83253670
	sub_83253670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253FB4"))) PPC_WEAK_FUNC(sub_83253FB4);
PPC_FUNC_IMPL(__imp__sub_83253FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253FB8"))) PPC_WEAK_FUNC(sub_83253FB8);
PPC_FUNC_IMPL(__imp__sub_83253FB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x83253808
	sub_83253808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253FD8"))) PPC_WEAK_FUNC(sub_83253FD8);
PPC_FUNC_IMPL(__imp__sub_83253FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83253FE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x83254044
	if (cr6.eq) goto loc_83254044;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324ee80
	ctx.lr = 0x8325400C;
	sub_8324EE80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321c860
	ctx.lr = 0x83254020;
	sub_8321C860(ctx, base);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x83254044
	if (cr6.eq) goto loc_83254044;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83254044
	if (cr6.eq) goto loc_83254044;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83254044
	if (cr6.eq) goto loc_83254044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83254044;
	sub_83209D68(ctx, base);
loc_83254044:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83254050"))) PPC_WEAK_FUNC(sub_83254050);
PPC_FUNC_IMPL(__imp__sub_83254050) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83254090
	if (!cr6.eq) goto loc_83254090;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_83254090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x832137f0
	ctx.lr = 0x832540C0;
	sub_832137F0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// oris r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 262144;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// blt cr6,0x832540e0
	if (cr6.lt) goto loc_832540E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x832540E0;
	sub_83217670(ctx, base);
loc_832540E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83252928
	ctx.lr = 0x832540EC;
	sub_83252928(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83254114
	if (!cr6.eq) goto loc_83254114;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83254114:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8325412C"))) PPC_WEAK_FUNC(sub_8325412C);
PPC_FUNC_IMPL(__imp__sub_8325412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254130"))) PPC_WEAK_FUNC(sub_83254130);
PPC_FUNC_IMPL(__imp__sub_83254130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8325414c
	if (!cr6.eq) goto loc_8325414C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8325414C:
	// b 0x83253208
	sub_83253208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83254150"))) PPC_WEAK_FUNC(sub_83254150);
PPC_FUNC_IMPL(__imp__sub_83254150) {
	PPC_FUNC_PROLOGUE();
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83254158"))) PPC_WEAK_FUNC(sub_83254158);
PPC_FUNC_IMPL(__imp__sub_83254158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r10,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83254180
	if (!cr6.eq) goto loc_83254180;
	// oris r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 16777216;
loc_83254180:
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83254188"))) PPC_WEAK_FUNC(sub_83254188);
PPC_FUNC_IMPL(__imp__sub_83254188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83254190;
	__savegprlr_27(ctx, base);
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x832541d0
	if (!cr6.eq) goto loc_832541D0;
	// bl 0x83234f88
	ctx.lr = 0x832541C4;
	sub_83234F88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832541dc
	if (!cr6.eq) goto loc_832541DC;
loc_832541D0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832541DC:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x832541F8;
	sub_831FFE38(ctx, base);
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r7,4096
	cr6.compare<uint32_t>(ctx.r7.u32, 4096, xer);
	// blt cr6,0x8325428c
	if (cr6.lt) goto loc_8325428C;
	// cmplwi cr6,r7,4150
	cr6.compare<uint32_t>(ctx.r7.u32, 4150, xer);
	// bge cr6,0x8325428c
	if (!cr6.lt) goto loc_8325428C;
	// addi r11,r7,-4096
	ctx.r11.s64 = ctx.r7.s64 + -4096;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,8624
	ctx.r8.s64 = ctx.r10.s64 + 8624;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8325423C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x83254270
	if (!cr6.eq) goto loc_83254270;
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
loc_8325424C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,15088
	ctx.r6.s64 = ctx.r11.s64 + 15088;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// addi r4,r9,14472
	ctx.r4.s64 = ctx.r9.s64 + 14472;
	// addi r3,r8,14436
	ctx.r3.s64 = ctx.r8.s64 + 14436;
	// bl 0x83208330
	ctx.lr = 0x83254270;
	sub_83208330(ctx, base);
loc_83254270:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x83254280;
	sub_831FFDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8325428C:
	// li r30,-2
	ctx.r30.s64 = -2;
	// b 0x8325424c
	goto loc_8325424C;
}

__attribute__((alias("__imp__sub_83254294"))) PPC_WEAK_FUNC(sub_83254294);
PPC_FUNC_IMPL(__imp__sub_83254294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254298"))) PPC_WEAK_FUNC(sub_83254298);
PPC_FUNC_IMPL(__imp__sub_83254298) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83254300
	if (cr6.eq) goto loc_83254300;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r31,r11,13664
	ctx.r31.s64 = ctx.r11.s64 + 13664;
loc_832542B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83296f08
	ctx.lr = 0x832542C0;
	sub_83296F08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83254300
	if (cr6.eq) goto loc_83254300;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832542e8
	if (cr6.lt) goto loc_832542E8;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832542ec
	if (!cr6.gt) goto loc_832542EC;
loc_832542E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832542EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83254318
	if (!cr6.eq) goto loc_83254318;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832542b8
	if (!cr6.eq) goto loc_832542B8;
loc_83254300:
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
loc_83254318:
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

__attribute__((alias("__imp__sub_83254330"))) PPC_WEAK_FUNC(sub_83254330);
PPC_FUNC_IMPL(__imp__sub_83254330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83254350
	if (cr6.lt) goto loc_83254350;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x83254350
	if (cr6.gt) goto loc_83254350;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
loc_83254350:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x8325436c
	if (cr6.lt) goto loc_8325436C;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x8325436c
	if (cr6.gt) goto loc_8325436C;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
loc_8325436C:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83254388
	if (cr6.lt) goto loc_83254388;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x83254388
	if (cr6.gt) goto loc_83254388;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
loc_83254388:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83254390"))) PPC_WEAK_FUNC(sub_83254390);
PPC_FUNC_IMPL(__imp__sub_83254390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83254398;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// extsb r31,r3
	ctx.r31.s64 = ctx.r3.s8;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x832543f8
	if (cr6.eq) goto loc_832543F8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_832543BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x83296b68
	ctx.lr = 0x832543C4;
	sub_83296B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832543e8
	if (!cr6.eq) goto loc_832543E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83296d08
	ctx.lr = 0x832543DC;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832543e8
	if (!cr6.eq) goto loc_832543E8;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_832543E8:
	// lbzu r3,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// extsb r31,r3
	ctx.r31.s64 = ctx.r3.s8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x832543bc
	if (!cr6.eq) goto loc_832543BC;
loc_832543F8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r26,r11,0,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83254408;
	sub_83209AA8(ctx, base);
	// lbz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsb r29,r30
	ctx.r29.s64 = ctx.r30.s8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x832544dc
	if (cr6.eq) goto loc_832544DC;
	// li r25,37
	ctx.r25.s64 = 37;
loc_83254424:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296b68
	ctx.lr = 0x8325442C;
	sub_83296B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83254444
	if (cr6.eq) goto loc_83254444;
	// stbx r30,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832544cc
	goto loc_832544CC;
loc_83254444:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83296d08
	ctx.lr = 0x83254450;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83254464
	if (cr6.eq) goto loc_83254464;
	// stbx r30,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832544cc
	goto loc_832544CC;
loc_83254464:
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// stbx r25,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r25.u8);
	// srawi r10,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8325448c
	if (cr6.lt) goto loc_8325448C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bgt cr6,0x8325448c
	if (cr6.gt) goto loc_8325448C;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x83254490
	goto loc_83254490;
loc_8325448C:
	// addi r11,r11,55
	ctx.r11.s64 = ctx.r11.s64 + 55;
loc_83254490:
	// add r9,r31,r28
	ctx.r9.u64 = ctx.r31.u64 + ctx.r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// blt cr6,0x832544b8
	if (cr6.lt) goto loc_832544B8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bgt cr6,0x832544b8
	if (cr6.gt) goto loc_832544B8;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x832544bc
	goto loc_832544BC;
loc_832544B8:
	// addi r11,r11,55
	ctx.r11.s64 = ctx.r11.s64 + 55;
loc_832544BC:
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
loc_832544CC:
	// lbzu r30,1(r27)
	ea = 1 + ctx.r27.u32;
	ctx.r30.u64 = PPC_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// extsb r29,r30
	ctx.r29.s64 = ctx.r30.s8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83254424
	if (!cr6.eq) goto loc_83254424;
loc_832544DC:
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// bge cr6,0x83254504
	if (!cr6.lt) goto loc_83254504;
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// subf. r11,r31,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x83254504
	if (cr0.eq) goto loc_83254504;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832544FC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x832544fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832544FC;
loc_83254504:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83254510"))) PPC_WEAK_FUNC(sub_83254510);
PPC_FUNC_IMPL(__imp__sub_83254510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r4,8844(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8844);
	// b 0x83254390
	sub_83254390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325451C"))) PPC_WEAK_FUNC(sub_8325451C);
PPC_FUNC_IMPL(__imp__sub_8325451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254520"))) PPC_WEAK_FUNC(sub_83254520);
PPC_FUNC_IMPL(__imp__sub_83254520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r4,8848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8848);
	// b 0x83254390
	sub_83254390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325452C"))) PPC_WEAK_FUNC(sub_8325452C);
PPC_FUNC_IMPL(__imp__sub_8325452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254530"))) PPC_WEAK_FUNC(sub_83254530);
PPC_FUNC_IMPL(__imp__sub_83254530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r4,8852(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8852);
	// b 0x83254390
	sub_83254390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325453C"))) PPC_WEAK_FUNC(sub_8325453C);
PPC_FUNC_IMPL(__imp__sub_8325453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254540"))) PPC_WEAK_FUNC(sub_83254540);
PPC_FUNC_IMPL(__imp__sub_83254540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83254548;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r21,-31772
	ctx.r21.s64 = -2082209792;
	// extsb r31,r30
	ctx.r31.s64 = ctx.r30.s8;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x832545e4
	if (cr6.eq) goto loc_832545E4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8325456C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296b68
	ctx.lr = 0x83254574;
	sub_83296B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83254588
	if (cr6.eq) goto loc_83254588;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x832545d4
	goto loc_832545D4;
loc_83254588:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8840(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8840);
	// bl 0x83296d08
	ctx.lr = 0x83254594;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832545a4
	if (cr6.eq) goto loc_832545A4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x832545d4
	goto loc_832545D4;
loc_832545A4:
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832545b8
	if (!cr6.eq) goto loc_832545B8;
	// addi r29,r29,3
	ctx.r29.s64 = ctx.r29.s64 + 3;
	// b 0x832545d4
	goto loc_832545D4;
loc_832545B8:
	// rlwinm r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832545d0
	if (!cr6.eq) goto loc_832545D0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x832545d4
	goto loc_832545D4;
loc_832545D0:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
loc_832545D4:
	// lbzu r30,1(r28)
	ea = 1 + ctx.r28.u32;
	ctx.r30.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// extsb r31,r30
	ctx.r31.s64 = ctx.r30.s8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x8325456c
	if (!cr6.eq) goto loc_8325456C;
loc_832545E4:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwinm r24,r11,0,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83209aa8
	ctx.lr = 0x832545F4;
	sub_83209AA8(ctx, base);
	// lbz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsb r29,r30
	ctx.r29.s64 = ctx.r30.s8;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83254828
	if (cr6.eq) goto loc_83254828;
	// li r25,37
	ctx.r25.s64 = 37;
	// lis r22,1
	ctx.r22.s64 = 65536;
	// li r23,117
	ctx.r23.s64 = 117;
loc_8325461C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296b68
	ctx.lr = 0x83254624;
	sub_83296B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325463c
	if (cr6.eq) goto loc_8325463C;
	// stbx r30,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x83254814
	goto loc_83254814;
loc_8325463C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8840(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8840);
	// bl 0x83296d08
	ctx.lr = 0x83254648;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325465c
	if (cr6.eq) goto loc_8325465C;
	// stbx r30,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x83254814
	goto loc_83254814;
loc_8325465C:
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832546e4
	if (!cr6.eq) goto loc_832546E4;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// stbx r25,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r25.u8);
	// srawi r10,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83254690
	if (cr6.lt) goto loc_83254690;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bgt cr6,0x83254690
	if (cr6.gt) goto loc_83254690;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x83254694
	goto loc_83254694;
loc_83254690:
	// addi r11,r11,55
	ctx.r11.s64 = ctx.r11.s64 + 55;
loc_83254694:
	// add r9,r31,r28
	ctx.r9.u64 = ctx.r31.u64 + ctx.r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// blt cr6,0x832546cc
	if (cr6.lt) goto loc_832546CC;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bgt cr6,0x832546cc
	if (cr6.gt) goto loc_832546CC;
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// b 0x83254814
	goto loc_83254814;
loc_832546CC:
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r11,r11,55
	ctx.r11.s64 = ctx.r11.s64 + 55;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// b 0x83254814
	goto loc_83254814;
loc_832546E4:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r11,r27,r26
	ctx.r11.u64 = ctx.r27.u64 + ctx.r26.u64;
	// bne cr6,0x83254708
	if (!cr6.eq) goto loc_83254708;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwimi r10,r29,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x83254724
	goto loc_83254724;
loc_83254708:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r10,r27,r26
	ctx.r10.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// rlwimi r9,r29,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
loc_83254724:
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// blt cr6,0x83254744
	if (cr6.lt) goto loc_83254744;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,30,14,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x3C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFC3FFF);
	// rlwimi r9,r10,30,16,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xFFC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFF003F);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// b 0x83254754
	goto loc_83254754;
loc_83254744:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x83254754
	if (cr6.lt) goto loc_83254754;
	// rlwimi r11,r11,30,21,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x7C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
loc_83254754:
	// add r9,r31,r28
	ctx.r9.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stbx r25,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r25.u8);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r23,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r23.u8);
	// blt cr6,0x8325477c
	if (cr6.lt) goto loc_8325477C;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bgt cr6,0x8325477c
	if (cr6.gt) goto loc_8325477C;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// b 0x83254780
	goto loc_83254780;
loc_8325477C:
	// addi r10,r10,55
	ctx.r10.s64 = ctx.r10.s64 + 55;
loc_83254780:
	// add r8,r31,r28
	ctx.r8.u64 = ctx.r31.u64 + ctx.r28.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r9,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r9.u8);
	// blt cr6,0x832547a8
	if (cr6.lt) goto loc_832547A8;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bgt cr6,0x832547a8
	if (cr6.gt) goto loc_832547A8;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// b 0x832547ac
	goto loc_832547AC;
loc_832547A8:
	// addi r10,r10,55
	ctx.r10.s64 = ctx.r10.s64 + 55;
loc_832547AC:
	// add r8,r31,r28
	ctx.r8.u64 = ctx.r31.u64 + ctx.r28.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r10,r11,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// blt cr6,0x832547d4
	if (cr6.lt) goto loc_832547D4;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bgt cr6,0x832547d4
	if (cr6.gt) goto loc_832547D4;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// b 0x832547d8
	goto loc_832547D8;
loc_832547D4:
	// addi r10,r10,55
	ctx.r10.s64 = ctx.r10.s64 + 55;
loc_832547D8:
	// add r9,r31,r28
	ctx.r9.u64 = ctx.r31.u64 + ctx.r28.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r10,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r10.u8);
	// blt cr6,0x83254800
	if (cr6.lt) goto loc_83254800;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bgt cr6,0x83254800
	if (cr6.gt) goto loc_83254800;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x83254804
	goto loc_83254804;
loc_83254800:
	// addi r11,r11,55
	ctx.r11.s64 = ctx.r11.s64 + 55;
loc_83254804:
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
loc_83254814:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lbzx r30,r27,r26
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r26.u32);
	// extsb r29,r30
	ctx.r29.s64 = ctx.r30.s8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8325461c
	if (!cr6.eq) goto loc_8325461C;
loc_83254828:
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, xer);
	// bge cr6,0x83254850
	if (!cr6.lt) goto loc_83254850;
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// subf. r11,r31,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x83254850
	if (cr0.eq) goto loc_83254850;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83254848:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83254848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83254848;
loc_83254850:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325485C"))) PPC_WEAK_FUNC(sub_8325485C);
PPC_FUNC_IMPL(__imp__sub_8325485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254860"))) PPC_WEAK_FUNC(sub_83254860);
PPC_FUNC_IMPL(__imp__sub_83254860) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83296ba8
	ctx.lr = 0x8325487C;
	sub_83296BA8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8325488C;
	sub_83209AA8(ctx, base);
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832549cc
	if (cr6.eq) goto loc_832549CC;
loc_832548A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// bne cr6,0x832549a4
	if (!cr6.eq) goto loc_832549A4;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832548d8
	if (cr6.lt) goto loc_832548D8;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x832548d8
	if (cr6.gt) goto loc_832548D8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254914
	goto loc_83254914;
loc_832548D8:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x832548f4
	if (cr6.lt) goto loc_832548F4;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x832548f4
	if (cr6.gt) goto loc_832548F4;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254914
	goto loc_83254914;
loc_832548F4:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83254910
	if (cr6.lt) goto loc_83254910;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x83254910
	if (cr6.gt) goto loc_83254910;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254914
	goto loc_83254914;
loc_83254910:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83254914:
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x832549a4
	if (cr6.lt) goto loc_832549A4;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83254948
	if (cr6.lt) goto loc_83254948;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x83254948
	if (cr6.gt) goto loc_83254948;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254984
	goto loc_83254984;
loc_83254948:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x83254964
	if (cr6.lt) goto loc_83254964;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x83254964
	if (cr6.gt) goto loc_83254964;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254984
	goto loc_83254984;
loc_83254964:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83254980
	if (cr6.lt) goto loc_83254980;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x83254980
	if (cr6.gt) goto loc_83254980;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254984
	goto loc_83254984;
loc_83254980:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83254984:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x832549a4
	if (cr6.lt) goto loc_832549A4;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stbx r11,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u8);
loc_832549A4:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832549b4
	if (!cr6.eq) goto loc_832549B4;
	// stbx r5,r7,r3
	PPC_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r5.u8);
loc_832549B4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832548a4
	if (!cr6.eq) goto loc_832548A4;
loc_832549CC:
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, xer);
	// bge cr6,0x832549f4
	if (!cr6.lt) goto loc_832549F4;
	// add r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 + ctx.r3.u64;
	// subf. r11,r7,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x832549f4
	if (cr0.eq) goto loc_832549F4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832549EC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x832549ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832549EC;
loc_832549F4:
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

__attribute__((alias("__imp__sub_83254A0C"))) PPC_WEAK_FUNC(sub_83254A0C);
PPC_FUNC_IMPL(__imp__sub_83254A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254A10"))) PPC_WEAK_FUNC(sub_83254A10);
PPC_FUNC_IMPL(__imp__sub_83254A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x83254860
	sub_83254860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83254A14"))) PPC_WEAK_FUNC(sub_83254A14);
PPC_FUNC_IMPL(__imp__sub_83254A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254A18"))) PPC_WEAK_FUNC(sub_83254A18);
PPC_FUNC_IMPL(__imp__sub_83254A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83254A20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83296ba8
	ctx.lr = 0x83254A2C;
	sub_83296BA8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r27,r11,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83254A3C;
	sub_83209AA8(ctx, base);
	// lbz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83254de0
	if (cr6.eq) goto loc_83254DE0;
	// lis r10,56
	ctx.r10.s64 = 3670016;
	// lis r26,1
	ctx.r26.s64 = 65536;
	// ori r28,r10,8224
	ctx.r28.u64 = ctx.r10.u64 | 8224;
loc_83254A64:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// bne cr6,0x83254db8
	if (!cr6.eq) goto loc_83254DB8;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,117
	cr6.compare<int32_t>(ctx.r11.s32, 117, xer);
	// bne cr6,0x83254c48
	if (!cr6.eq) goto loc_83254C48;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83254aac
	if (cr6.lt) goto loc_83254AAC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x83254aac
	if (cr6.gt) goto loc_83254AAC;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254ae8
	goto loc_83254AE8;
loc_83254AAC:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x83254ac8
	if (cr6.lt) goto loc_83254AC8;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x83254ac8
	if (cr6.gt) goto loc_83254AC8;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254ae8
	goto loc_83254AE8;
loc_83254AC8:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83254ae4
	if (cr6.lt) goto loc_83254AE4;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x83254ae4
	if (cr6.gt) goto loc_83254AE4;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254ae8
	goto loc_83254AE8;
loc_83254AE4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83254AE8:
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x83254db8
	if (cr6.lt) goto loc_83254DB8;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83254b1c
	if (cr6.lt) goto loc_83254B1C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x83254b1c
	if (cr6.gt) goto loc_83254B1C;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254b58
	goto loc_83254B58;
loc_83254B1C:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x83254b38
	if (cr6.lt) goto loc_83254B38;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x83254b38
	if (cr6.gt) goto loc_83254B38;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254b58
	goto loc_83254B58;
loc_83254B38:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83254b54
	if (cr6.lt) goto loc_83254B54;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x83254b54
	if (cr6.gt) goto loc_83254B54;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254b58
	goto loc_83254B58;
loc_83254B54:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83254B58:
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x83254db8
	if (cr6.lt) goto loc_83254DB8;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// bl 0x83254330
	ctx.lr = 0x83254B70;
	sub_83254330(ctx, base);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x83254db8
	if (cr6.lt) goto loc_83254DB8;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// bl 0x83254330
	ctx.lr = 0x83254B88;
	sub_83254330(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83254db8
	if (cr6.lt) goto loc_83254DB8;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x83254bec
	if (cr6.lt) goto loc_83254BEC;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(ctx.r11.u32, 2048, xer);
	// bge cr6,0x83254bd0
	if (!cr6.lt) goto loc_83254BD0;
	// rlwinm r10,r11,2,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1F00;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// ori r8,r10,49280
	ctx.r8.u64 = ctx.r10.u64 | 49280;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x83254bec
	goto loc_83254BEC;
loc_83254BD0:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r11,0,20,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC0;
	// rlwimi r10,r11,2,14,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x3C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFC3FFF);
	// clrlwi r8,r11,26
	ctx.r8.u64 = ctx.r11.u32 & 0x3F;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 | ctx.r8.u64;
loc_83254BEC:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x83254c00
	if (!cr6.lt) goto loc_83254C00;
	// stbx r11,r6,r31
	PPC_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
	// b 0x83254db4
	goto loc_83254DB4;
loc_83254C00:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// add r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 + ctx.r31.u64;
	// bge cr6,0x83254c24
	if (!cr6.lt) goto loc_83254C24;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
	// stbx r9,r6,r31
	PPC_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x83254db4
	goto loc_83254DB4;
loc_83254C24:
	// add r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stbx r8,r6,r31
	PPC_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// addi r4,r4,5
	ctx.r4.s64 = ctx.r4.s64 + 5;
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// b 0x83254db4
	goto loc_83254DB4;
loc_83254C48:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83254c64
	if (cr6.lt) goto loc_83254C64;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x83254c64
	if (cr6.gt) goto loc_83254C64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254ca0
	goto loc_83254CA0;
loc_83254C64:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x83254c80
	if (cr6.lt) goto loc_83254C80;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x83254c80
	if (cr6.gt) goto loc_83254C80;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254ca0
	goto loc_83254CA0;
loc_83254C80:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83254c9c
	if (cr6.lt) goto loc_83254C9C;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x83254c9c
	if (cr6.gt) goto loc_83254C9C;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254ca0
	goto loc_83254CA0;
loc_83254C9C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83254CA0:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83254db8
	if (cr6.lt) goto loc_83254DB8;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x83254cd4
	if (cr6.lt) goto loc_83254CD4;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x83254cd4
	if (cr6.gt) goto loc_83254CD4;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254d10
	goto loc_83254D10;
loc_83254CD4:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x83254cf0
	if (cr6.lt) goto loc_83254CF0;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x83254cf0
	if (cr6.gt) goto loc_83254CF0;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254d10
	goto loc_83254D10;
loc_83254CF0:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83254d0c
	if (cr6.lt) goto loc_83254D0C;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x83254d0c
	if (cr6.gt) goto loc_83254D0C;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x83254d10
	goto loc_83254D10;
loc_83254D0C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83254D10:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83254db8
	if (cr6.lt) goto loc_83254DB8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x83254d64
	if (cr6.lt) goto loc_83254D64;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(ctx.r11.u32, 2048, xer);
	// bge cr6,0x83254d48
	if (!cr6.lt) goto loc_83254D48;
	// rlwinm r10,r11,2,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1F00;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// ori r8,r10,49280
	ctx.r8.u64 = ctx.r10.u64 | 49280;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x83254d64
	goto loc_83254D64;
loc_83254D48:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r11,0,20,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC0;
	// rlwimi r10,r11,2,14,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x3C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFC3FFF);
	// clrlwi r8,r11,26
	ctx.r8.u64 = ctx.r11.u32 & 0x3F;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 | ctx.r8.u64;
loc_83254D64:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x83254d74
	if (!cr6.lt) goto loc_83254D74;
	// stbx r11,r6,r31
	PPC_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u8);
	// b 0x83254db0
	goto loc_83254DB0;
loc_83254D74:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// add r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 + ctx.r31.u64;
	// bge cr6,0x83254d94
	if (!cr6.lt) goto loc_83254D94;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stbx r9,r6,r31
	PPC_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x83254db0
	goto loc_83254DB0;
loc_83254D94:
	// add r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r11,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stbx r8,r6,r31
	PPC_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u8);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
loc_83254DB0:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_83254DB4:
	// li r5,1
	ctx.r5.s64 = 1;
loc_83254DB8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83254dc8
	if (!cr6.eq) goto loc_83254DC8;
	// stbx r29,r6,r31
	PPC_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u8);
loc_83254DC8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzx r29,r4,r30
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83254a64
	if (!cr6.eq) goto loc_83254A64;
loc_83254DE0:
	// cmpw cr6,r6,r27
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r27.s32, xer);
	// bge cr6,0x83254e08
	if (!cr6.lt) goto loc_83254E08;
	// add r10,r6,r31
	ctx.r10.u64 = ctx.r6.u64 + ctx.r31.u64;
	// subf. r11,r6,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x83254e08
	if (cr0.eq) goto loc_83254E08;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83254E00:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83254e00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83254E00;
loc_83254E08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83254E14"))) PPC_WEAK_FUNC(sub_83254E14);
PPC_FUNC_IMPL(__imp__sub_83254E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254E18"))) PPC_WEAK_FUNC(sub_83254E18);
PPC_FUNC_IMPL(__imp__sub_83254E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83254e48
	if (cr6.eq) goto loc_83254E48;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,15200
	ctx.r4.s64 = ctx.r10.s64 + 15200;
	// addi r3,r9,15188
	ctx.r3.s64 = ctx.r9.s64 + 15188;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x832982e8
	sub_832982E8(ctx, base);
	return;
loc_83254E48:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83254e68
	if (cr6.eq) goto loc_83254E68;
loc_83254E58:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83254e58
	if (!cr6.eq) goto loc_83254E58;
loc_83254E68:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83254e94
	if (!cr6.lt) goto loc_83254E94;
loc_83254E7C:
	// lbzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83254e9c
	if (!cr6.eq) goto loc_83254E9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83254e7c
	if (cr6.lt) goto loc_83254E7C;
loc_83254E94:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
loc_83254E9C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,15160
	ctx.r4.s64 = ctx.r10.s64 + 15160;
	// addi r3,r9,15188
	ctx.r3.s64 = ctx.r9.s64 + 15188;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x832982e8
	sub_832982E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83254EBC"))) PPC_WEAK_FUNC(sub_83254EBC);
PPC_FUNC_IMPL(__imp__sub_83254EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254EC0"))) PPC_WEAK_FUNC(sub_83254EC0);
PPC_FUNC_IMPL(__imp__sub_83254EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83254EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83254EDC:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83254eec
	if (cr6.eq) goto loc_83254EEC;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_83254EEC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83254f5c
	if (!cr6.gt) goto loc_83254F5C;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// subf r8,r29,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r29.s64;
loc_83254F04:
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// beq cr6,0x83254f8c
	if (cr6.eq) goto loc_83254F8C;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// beq cr6,0x83254f8c
	if (cr6.eq) goto loc_83254F8C;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// beq cr6,0x83254f8c
	if (cr6.eq) goto loc_83254F8C;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// beq cr6,0x83254f8c
	if (cr6.eq) goto loc_83254F8C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// blt cr6,0x83254f04
	if (cr6.lt) goto loc_83254F04;
loc_83254F5C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83254f80
	if (cr6.eq) goto loc_83254F80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296ba8
	ctx.lr = 0x83254F6C;
	sub_83296BA8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83254F7C;
	sub_83209AA8(ctx, base);
	// b 0x83254edc
	goto loc_83254EDC;
loc_83254F80:
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r30.u8);
loc_83254F8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83254F94"))) PPC_WEAK_FUNC(sub_83254F94);
PPC_FUNC_IMPL(__imp__sub_83254F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83254F98"))) PPC_WEAK_FUNC(sub_83254F98);
PPC_FUNC_IMPL(__imp__sub_83254F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83254FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83254fb8
	if (cr6.eq) goto loc_83254FB8;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
loc_83254FB8:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83255038
	if (!cr6.gt) goto loc_83255038;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
loc_83254FCC:
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83255018
	if (cr6.eq) goto loc_83255018;
	// lbz r6,-1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rlwinm r11,r9,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83255018
	if (cr6.eq) goto loc_83255018;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r4,r9,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83255018
	if (cr6.eq) goto loc_83255018;
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwimi r6,r9,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
loc_83255018:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83255070
	if (cr6.eq) goto loc_83255070;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// blt cr6,0x83254fcc
	if (cr6.lt) goto loc_83254FCC;
loc_83255038:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8325507c
	if (cr6.eq) goto loc_8325507C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296ba8
	ctx.lr = 0x83255048;
	sub_83296BA8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r29,r11,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83255058;
	sub_83209AA8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83254ec0
	ctx.lr = 0x83255068;
	sub_83254EC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83255070:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325507C:
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83255094"))) PPC_WEAK_FUNC(sub_83255094);
PPC_FUNC_IMPL(__imp__sub_83255094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255098"))) PPC_WEAK_FUNC(sub_83255098);
PPC_FUNC_IMPL(__imp__sub_83255098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// bge cr6,0x832551c8
	if (!cr6.lt) goto loc_832551C8;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83255154
	if (!cr6.gt) goto loc_83255154;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r7,r4,3
	ctx.r7.s64 = ctx.r4.s64 + 3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// rlwinm r10,r7,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// bne cr6,0x832550fc
	if (!cr6.eq) goto loc_832550FC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x832550f0
	if (!cr6.lt) goto loc_832550F0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// bge cr6,0x832550f0
	if (!cr6.lt) goto loc_832550F0;
	// stb r9,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r9.u8);
loc_832550F0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832550FC:
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x83255154
	if (!cr6.lt) goto loc_83255154;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// bne cr6,0x83255134
	if (!cr6.eq) goto loc_83255134;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x83255128
	if (!cr6.lt) goto loc_83255128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
loc_83255128:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83255134:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x83255154
	if (!cr6.lt) goto loc_83255154;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r11,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// beq cr6,0x832550f0
	if (cr6.eq) goto loc_832550F0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_83255154:
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bge cr6,0x832551bc
	if (!cr6.lt) goto loc_832551BC;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
loc_83255168:
	// lbz r4,-2(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832551d4
	if (cr6.eq) goto loc_832551D4;
	// lbz r7,-1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832551e8
	if (cr6.eq) goto loc_832551E8;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83255200
	if (cr6.eq) goto loc_83255200;
	// lbz r5,1(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8325521c
	if (cr6.eq) goto loc_8325521C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x83255168
	if (cr6.lt) goto loc_83255168;
loc_832551BC:
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_832551C8:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832551D4:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832551E8:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83255200:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8325521C:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325523C"))) PPC_WEAK_FUNC(sub_8325523C);
PPC_FUNC_IMPL(__imp__sub_8325523C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255240"))) PPC_WEAK_FUNC(sub_83255240);
PPC_FUNC_IMPL(__imp__sub_83255240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// bge cr6,0x832553dc
	if (!cr6.lt) goto loc_832553DC;
	// clrlwi r8,r4,30
	ctx.r8.u64 = ctx.r4.u32 & 0x3;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8325530c
	if (!cr6.gt) goto loc_8325530C;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// bne cr6,0x832552b0
	if (!cr6.eq) goto loc_832552B0;
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bge cr6,0x832552a0
	if (!cr6.lt) goto loc_832552A0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// stb r31,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r31.u8);
	// bge cr6,0x832552a0
	if (!cr6.lt) goto loc_832552A0;
	// stb r31,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r31.u8);
loc_832552A0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832552B0:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bge cr6,0x8325530c
	if (!cr6.lt) goto loc_8325530C;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stb r5,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
	// bne cr6,0x832552ec
	if (!cr6.eq) goto loc_832552EC;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bge cr6,0x832552dc
	if (!cr6.lt) goto loc_832552DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r11.u8);
loc_832552DC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832552EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bge cr6,0x8325530c
	if (!cr6.lt) goto loc_8325530C;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r8,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r8.u8);
	// beq cr6,0x832552a0
	if (cr6.eq) goto loc_832552A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8325530C:
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// bne cr6,0x83255364
	if (!cr6.eq) goto loc_83255364;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bge cr6,0x832553d4
	if (!cr6.lt) goto loc_832553D4;
loc_83255328:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83255354
	if (cr6.eq) goto loc_83255354;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x83255328
	if (cr6.lt) goto loc_83255328;
	// b 0x832553d4
	goto loc_832553D4;
loc_83255354:
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83255364:
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bge cr6,0x832553d4
	if (!cr6.lt) goto loc_832553D4;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
loc_83255374:
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r31,1(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1, ctx.r31.u32);
	// beq cr6,0x83255354
	if (cr6.eq) goto loc_83255354;
	// extsb r30,r7
	ctx.r30.s64 = ctx.r7.s8;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83255354
	if (cr6.eq) goto loc_83255354;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83255354
	if (cr6.eq) goto loc_83255354;
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83255354
	if (cr6.eq) goto loc_83255354;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x83255374
	if (cr6.lt) goto loc_83255374;
loc_832553D4:
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stb r31,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r31.u8);
loc_832553DC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832553EC"))) PPC_WEAK_FUNC(sub_832553EC);
PPC_FUNC_IMPL(__imp__sub_832553EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832553F0"))) PPC_WEAK_FUNC(sub_832553F0);
PPC_FUNC_IMPL(__imp__sub_832553F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832553F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r30,r11,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, xer);
	// ble cr6,0x8325543c
	if (!cr6.gt) goto loc_8325543C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83255434
	if (!cr6.eq) goto loc_83255434;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r5,-1
	ctx.r29.s64 = ctx.r5.s64 + -1;
	// b 0x8325543c
	goto loc_8325543C;
loc_83255434:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8325543C;
	sub_83209AA8(ctx, base);
loc_8325543C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832554c0
	if (!cr6.gt) goto loc_832554C0;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// subf r4,r31,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_83255454:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// beq cr6,0x832554bc
	if (cr6.eq) goto loc_832554BC;
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x832554bc
	if (cr6.eq) goto loc_832554BC;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x832554bc
	if (cr6.eq) goto loc_832554BC;
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// stbx r7,r4,r11
	PPC_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x832554bc
	if (cr6.eq) goto loc_832554BC;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r30
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, xer);
	// blt cr6,0x83255454
	if (cr6.lt) goto loc_83255454;
	// b 0x832554c0
	goto loc_832554C0;
loc_832554BC:
	// li r27,1
	ctx.r27.s64 = 1;
loc_832554C0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832554d4
	if (cr6.eq) goto loc_832554D4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_832554D4:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r29,r5
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, xer);
	// bge cr6,0x832554f4
	if (!cr6.lt) goto loc_832554F4;
	// subf r10,r29,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r29.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832554EC:
	// stbu r28,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x832554ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832554EC;
loc_832554F4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83255500
	if (cr6.eq) goto loc_83255500;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_83255500:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325550C"))) PPC_WEAK_FUNC(sub_8325550C);
PPC_FUNC_IMPL(__imp__sub_8325550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255510"))) PPC_WEAK_FUNC(sub_83255510);
PPC_FUNC_IMPL(__imp__sub_83255510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83255518;
	__savegprlr_28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// blt cr6,0x83255538
	if (cr6.lt) goto loc_83255538;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83255538:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r31,r6
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, xer);
	// ble cr6,0x83255558
	if (!cr6.gt) goto loc_83255558;
	// subf r11,r4,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r4.s64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
loc_83255558:
	// clrlwi r9,r4,30
	ctx.r9.u64 = ctx.r4.u32 & 0x3;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x832555ec
	if (!cr6.gt) goto loc_832555EC;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r3,r5,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stbx r6,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r6.u8);
	// bne cr6,0x832555a0
	if (!cr6.eq) goto loc_832555A0;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x832556a4
	if (!cr6.lt) goto loc_832556A4;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// bge cr6,0x832556a4
	if (!cr6.lt) goto loc_832556A4;
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832555A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x832555ec
	if (!cr6.lt) goto loc_832555EC;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// bne cr6,0x832555cc
	if (!cr6.eq) goto loc_832555CC;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x832556a4
	if (!cr6.lt) goto loc_832556A4;
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832555CC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x832555ec
	if (!cr6.lt) goto loc_832555EC;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// beq cr6,0x832556a4
	if (cr6.eq) goto loc_832556A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832555EC:
	// rlwinm r11,r3,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bge cr6,0x8325566c
	if (!cr6.lt) goto loc_8325566C;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_83255600:
	// lbz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq cr6,0x83255668
	if (cr6.eq) goto loc_83255668;
	// extsb r28,r8
	ctx.r28.s64 = ctx.r8.s8;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83255668
	if (cr6.eq) goto loc_83255668;
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83255668
	if (cr6.eq) goto loc_83255668;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83255668
	if (cr6.eq) goto loc_83255668;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// blt cr6,0x83255600
	if (cr6.lt) goto loc_83255600;
	// b 0x8325566c
	goto loc_8325566C;
loc_83255668:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8325566C:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83255680
	if (cr6.eq) goto loc_83255680;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_83255680:
	// add r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bge cr6,0x832556a4
	if (!cr6.lt) goto loc_832556A4;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8325569C:
	// stbu r30,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8325569c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325569C;
loc_832556A4:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832556A8"))) PPC_WEAK_FUNC(sub_832556A8);
PPC_FUNC_IMPL(__imp__sub_832556A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832556B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// ble cr6,0x832556ec
	if (!cr6.gt) goto loc_832556EC;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832556e4
	if (!cr6.eq) goto loc_832556E4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r5,-1
	ctx.r30.s64 = ctx.r5.s64 + -1;
	// b 0x832556ec
	goto loc_832556EC;
loc_832556E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209aa8
	ctx.lr = 0x832556EC;
	sub_83209AA8(ctx, base);
loc_832556EC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8325572c
	if (!cr6.gt) goto loc_8325572C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_83255704:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r5,3(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8325572c
	if (cr6.eq) goto loc_8325572C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// blt cr6,0x83255704
	if (cr6.lt) goto loc_83255704;
loc_8325572C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x8325574c
	if (!cr6.lt) goto loc_8325574C;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83255744:
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83255744
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83255744;
loc_8325574C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83255758
	if (cr6.eq) goto loc_83255758;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_83255758:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83255764"))) PPC_WEAK_FUNC(sub_83255764);
PPC_FUNC_IMPL(__imp__sub_83255764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255768"))) PPC_WEAK_FUNC(sub_83255768);
PPC_FUNC_IMPL(__imp__sub_83255768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r6,r5,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x83255874
	if (!cr6.gt) goto loc_83255874;
	// addi r8,r4,3
	ctx.r8.s64 = ctx.r4.s64 + 3;
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_83255784:
	// lbz r11,-3(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x832557a0
	if (cr6.lt) goto loc_832557A0;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x832557a4
	if (!cr6.gt) goto loc_832557A4;
loc_832557A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_832557A4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832557b4
	if (cr6.eq) goto loc_832557B4;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_832557B4:
	// stb r11,-2(r9)
	PPC_STORE_U8(ctx.r9.u32 + -2, ctx.r11.u8);
	// lbz r10,-2(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + -2);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x832557d4
	if (cr6.lt) goto loc_832557D4;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x832557d8
	if (!cr6.gt) goto loc_832557D8;
loc_832557D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_832557D8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832557e8
	if (cr6.eq) goto loc_832557E8;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_832557E8:
	// stb r11,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r11.u8);
	// lbzx r10,r4,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x83255808
	if (cr6.lt) goto loc_83255808;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8325580c
	if (!cr6.gt) goto loc_8325580C;
loc_83255808:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8325580C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325581c
	if (cr6.eq) goto loc_8325581C;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_8325581C:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x8325583c
	if (cr6.lt) goto loc_8325583C;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83255840
	if (!cr6.gt) goto loc_83255840;
loc_8325583C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83255840:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83255850
	if (cr6.eq) goto loc_83255850;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_83255850:
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x83255784
	if (cr6.lt) goto loc_83255784;
loc_83255874:
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83255884"))) PPC_WEAK_FUNC(sub_83255884);
PPC_FUNC_IMPL(__imp__sub_83255884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255888"))) PPC_WEAK_FUNC(sub_83255888);
PPC_FUNC_IMPL(__imp__sub_83255888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83255890;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,-28916
	ctx.r5.s64 = ctx.r11.s64 + -28916;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83297a40
	ctx.lr = 0x832558B8;
	sub_83297A40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,101
	ctx.r4.s64 = 101;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296d08
	ctx.lr = 0x832558C8;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832558fc
	if (cr6.eq) goto loc_832558FC;
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-28920
	ctx.r5.s64 = ctx.r11.s64 + -28920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x832558F0;
	sub_83297A40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832558FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325590C"))) PPC_WEAK_FUNC(sub_8325590C);
PPC_FUNC_IMPL(__imp__sub_8325590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255910"))) PPC_WEAK_FUNC(sub_83255910);
PPC_FUNC_IMPL(__imp__sub_83255910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83255940
	if (cr6.eq) goto loc_83255940;
loc_8325592C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8325592c
	if (!cr6.eq) goto loc_8325592C;
loc_83255940:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83255960
	if (!cr6.eq) goto loc_83255960;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_83255960:
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83255974
	if (!cr6.eq) goto loc_83255974;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_83255974:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325597C"))) PPC_WEAK_FUNC(sub_8325597C);
PPC_FUNC_IMPL(__imp__sub_8325597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255980"))) PPC_WEAK_FUNC(sub_83255980);
PPC_FUNC_IMPL(__imp__sub_83255980) {
	PPC_FUNC_PROLOGUE();
	// b 0x83255910
	sub_83255910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83255984"))) PPC_WEAK_FUNC(sub_83255984);
PPC_FUNC_IMPL(__imp__sub_83255984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255988"))) PPC_WEAK_FUNC(sub_83255988);
PPC_FUNC_IMPL(__imp__sub_83255988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// beqlr cr6
	if (cr6.eq) return;
loc_832559B4:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x832559fc
	if (cr6.eq) goto loc_832559FC;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83255a04
	if (cr6.eq) goto loc_83255A04;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83255a0c
	if (cr6.eq) goto loc_83255A0C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bne cr6,0x832559b4
	if (!cr6.eq) goto loc_832559B4;
	// blr 
	return;
loc_832559FC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_83255A04:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_83255A0C:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83255A14"))) PPC_WEAK_FUNC(sub_83255A14);
PPC_FUNC_IMPL(__imp__sub_83255A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255A18"))) PPC_WEAK_FUNC(sub_83255A18);
PPC_FUNC_IMPL(__imp__sub_83255A18) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x83255910
	ctx.lr = 0x83255A2C;
	sub_83255910(ctx, base);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83255240
	ctx.lr = 0x83255A40;
	sub_83255240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83255A50"))) PPC_WEAK_FUNC(sub_83255A50);
PPC_FUNC_IMPL(__imp__sub_83255A50) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x83255910
	ctx.lr = 0x83255A64;
	sub_83255910(ctx, base);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83255098
	ctx.lr = 0x83255A78;
	sub_83255098(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83255A88"))) PPC_WEAK_FUNC(sub_83255A88);
PPC_FUNC_IMPL(__imp__sub_83255A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83255a98
	if (!cr6.eq) goto loc_83255A98;
	// blr 
	return;
loc_83255A98:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83255afc
	if (cr6.eq) goto loc_83255AFC;
loc_83255AB8:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83255b00
	if (cr6.eq) goto loc_83255B00;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83255b04
	if (cr6.eq) goto loc_83255B04;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83255b08
	if (cr6.eq) goto loc_83255B08;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// bne cr6,0x83255ab8
	if (!cr6.eq) goto loc_83255AB8;
loc_83255AFC:
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_83255B00:
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_83255B04:
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_83255B08:
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83255B10"))) PPC_WEAK_FUNC(sub_83255B10);
PPC_FUNC_IMPL(__imp__sub_83255B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83255B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83296d40
	ctx.lr = 0x83255B34;
	sub_83296D40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83255b40
	if (cr6.eq) goto loc_83255B40;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_83255B40:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296d40
	ctx.lr = 0x83255B4C;
	sub_83296D40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83255b58
	if (cr6.eq) goto loc_83255B58;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_83255B58:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// beq cr6,0x83255bf8
	if (cr6.eq) goto loc_83255BF8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83255bf8
	if (!cr6.gt) goto loc_83255BF8;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwinm r7,r11,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subfic r6,r31,3
	xer.ca = ctx.r31.u32 <= 3;
	ctx.r6.s64 = 3 - ctx.r31.s64;
loc_83255B80:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83255bcc
	if (cr6.eq) goto loc_83255BCC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r9,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83255bcc
	if (cr6.eq) goto loc_83255BCC;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r4,r9,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83255bcc
	if (cr6.eq) goto loc_83255BCC;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// or r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
loc_83255BCC:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83255bf8
	if (cr6.eq) goto loc_83255BF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x83255b80
	if (cr6.lt) goto loc_83255B80;
	// add r11,r7,r29
	ctx.r11.u64 = ctx.r7.u64 + ctx.r29.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_83255BF8:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296d40
	ctx.lr = 0x83255C04;
	sub_83296D40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83255c10
	if (cr6.eq) goto loc_83255C10;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
loc_83255C10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83255988
	ctx.lr = 0x83255C18;
	sub_83255988(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83255c4c
	if (!cr6.lt) goto loc_83255C4C;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// beq 0x83255c4c
	if (cr0.eq) goto loc_83255C4C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83255C44:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83255c44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83255C44;
loc_83255C4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83255C54"))) PPC_WEAK_FUNC(sub_83255C54);
PPC_FUNC_IMPL(__imp__sub_83255C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255C58"))) PPC_WEAK_FUNC(sub_83255C58);
PPC_FUNC_IMPL(__imp__sub_83255C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83255C60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_83255C70:
	// srawi r11,r31,2
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// addze. r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x83255cb8
	if (!cr0.gt) goto loc_83255CB8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r8,r30,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r30.s64;
loc_83255C8C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83255cb4
	if (cr6.eq) goto loc_83255CB4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83255c8c
	if (cr6.lt) goto loc_83255C8C;
	// b 0x83255cb8
	goto loc_83255CB8;
loc_83255CB4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_83255CB8:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83255d04
	if (!cr6.eq) goto loc_83255D04;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83255ce8
	if (cr6.eq) goto loc_83255CE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255910
	ctx.lr = 0x83255CD4;
	sub_83255910(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83255CE4;
	sub_83209AA8(ctx, base);
	// b 0x83255c70
	goto loc_83255C70;
loc_83255CE8:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r9,-1(r8)
	PPC_STORE_U8(ctx.r8.u32 + -1, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83255D04:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83255d14
	if (cr6.eq) goto loc_83255D14;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_83255D14:
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83255D20"))) PPC_WEAK_FUNC(sub_83255D20);
PPC_FUNC_IMPL(__imp__sub_83255D20) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83209aa8
	ctx.lr = 0x83255D34;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// ori r5,r6,128
	ctx.r5.u64 = ctx.r6.u64 | 128;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// li r7,163
	ctx.r7.s64 = 163;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// li r4,87
	ctx.r4.s64 = 87;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// sth r7,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r7.u16);
	// sth r4,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r4.u16);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83255D98"))) PPC_WEAK_FUNC(sub_83255D98);
PPC_FUNC_IMPL(__imp__sub_83255D98) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,2320
	cr6.compare<uint32_t>(ctx.r11.u32, 2320, xer);
	// beq cr6,0x83255e08
	if (cr6.eq) goto loc_83255E08;
	// cmplwi cr6,r11,2321
	cr6.compare<uint32_t>(ctx.r11.u32, 2321, xer);
	// beq cr6,0x83255df0
	if (cr6.eq) goto loc_83255DF0;
	// cmplwi cr6,r11,2418
	cr6.compare<uint32_t>(ctx.r11.u32, 2418, xer);
	// beq cr6,0x83255dd4
	if (cr6.eq) goto loc_83255DD4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83255DD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
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
loc_83255DF0:
	// bl 0x832652d0
	ctx.lr = 0x83255DF4;
	sub_832652D0(ctx, base);
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
loc_83255E08:
	// bl 0x83266b98
	ctx.lr = 0x83255E0C;
	sub_83266B98(ctx, base);
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

__attribute__((alias("__imp__sub_83255E20"))) PPC_WEAK_FUNC(sub_83255E20);
PPC_FUNC_IMPL(__imp__sub_83255E20) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1974
	cr6.compare<uint32_t>(ctx.r11.u32, 1974, xer);
	// beq cr6,0x83255e4c
	if (cr6.eq) goto loc_83255E4C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83255E4C:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x83255E54;
	sub_83213150(ctx, base);
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

__attribute__((alias("__imp__sub_83255E68"))) PPC_WEAK_FUNC(sub_83255E68);
PPC_FUNC_IMPL(__imp__sub_83255E68) {
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
	// lbz r11,33(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83255eb4
	if (cr6.eq) goto loc_83255EB4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83266a30
	ctx.lr = 0x83255EA8;
	sub_83266A30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83255EB0;
	sub_83222030(ctx, base);
	// stb r30,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r30.u8);
loc_83255EB4:
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

__attribute__((alias("__imp__sub_83255ECC"))) PPC_WEAK_FUNC(sub_83255ECC);
PPC_FUNC_IMPL(__imp__sub_83255ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255ED0"))) PPC_WEAK_FUNC(sub_83255ED0);
PPC_FUNC_IMPL(__imp__sub_83255ED0) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83255ef4
	if (cr6.eq) goto loc_83255EF4;
	// bl 0x831fe148
	ctx.lr = 0x83255EF4;
	sub_831FE148(ctx, base);
loc_83255EF4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83255f0c
	if (cr6.eq) goto loc_83255F0C;
	// bl 0x83209d68
	ctx.lr = 0x83255F04;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83255F0C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83255f1c
	if (cr6.eq) goto loc_83255F1C;
	// bl 0x832356e0
	ctx.lr = 0x83255F1C;
	sub_832356E0(ctx, base);
loc_83255F1C:
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

__attribute__((alias("__imp__sub_83255F30"))) PPC_WEAK_FUNC(sub_83255F30);
PPC_FUNC_IMPL(__imp__sub_83255F30) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r30,r11,24688
	ctx.r30.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83255f64
	if (cr6.eq) goto loc_83255F64;
	// lwz r3,372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83255fcc
	if (!cr6.eq) goto loc_83255FCC;
loc_83255F64:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x83209aa8
	ctx.lr = 0x83255F6C;
	sub_83209AA8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x83255F7C;
	sub_83294018(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,163
	ctx.r9.s64 = 163;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// li r8,92
	ctx.r8.s64 = 92;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// ori r6,r7,128
	ctx.r6.u64 = ctx.r7.u64 | 128;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// sth r6,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r6.u16);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83255fc8
	if (cr6.eq) goto loc_83255FC8;
	// stw r31,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r31.u32);
loc_83255FC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83255FCC:
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

__attribute__((alias("__imp__sub_83255FE4"))) PPC_WEAK_FUNC(sub_83255FE4);
PPC_FUNC_IMPL(__imp__sub_83255FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83255FE8"))) PPC_WEAK_FUNC(sub_83255FE8);
PPC_FUNC_IMPL(__imp__sub_83255FE8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256028
	if (cr6.eq) goto loc_83256028;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256028
	if (cr6.eq) goto loc_83256028;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83256034
	if (!cr6.eq) goto loc_83256034;
loc_83256028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83210190
	ctx.lr = 0x83256030;
	sub_83210190(ctx, base);
	// b 0x83256050
	goto loc_83256050;
loc_83256034:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83256044:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83256044
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83256044;
loc_83256050:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83200b78
	ctx.lr = 0x83256058;
	sub_83200B78(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc3a0
	ctx.lr = 0x83256068;
	sub_831FC3A0(ctx, base);
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

__attribute__((alias("__imp__sub_8325607C"))) PPC_WEAK_FUNC(sub_8325607C);
PPC_FUNC_IMPL(__imp__sub_8325607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83256080"))) PPC_WEAK_FUNC(sub_83256080);
PPC_FUNC_IMPL(__imp__sub_83256080) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832560f0
	if (cr6.eq) goto loc_832560F0;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832560f0
	if (cr6.eq) goto loc_832560F0;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832560f0
	if (cr6.eq) goto loc_832560F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831fe970
	ctx.lr = 0x832560D8;
	sub_831FE970(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30452(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_832560F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832248d8
	ctx.lr = 0x832560F8;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83256114"))) PPC_WEAK_FUNC(sub_83256114);
PPC_FUNC_IMPL(__imp__sub_83256114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83256118"))) PPC_WEAK_FUNC(sub_83256118);
PPC_FUNC_IMPL(__imp__sub_83256118) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// addi r8,r10,5696
	ctx.r8.s64 = ctx.r10.s64 + 5696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lfs f1,132(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256180
	if (cr6.eq) goto loc_83256180;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256180
	if (cr6.eq) goto loc_83256180;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83256180
	if (cr6.eq) goto loc_83256180;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831fd7d0
	ctx.lr = 0x83256174;
	sub_831FD7D0(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
loc_83256180:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832248d8
	ctx.lr = 0x83256188;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_832561A4"))) PPC_WEAK_FUNC(sub_832561A4);
PPC_FUNC_IMPL(__imp__sub_832561A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832561A8"))) PPC_WEAK_FUNC(sub_832561A8);
PPC_FUNC_IMPL(__imp__sub_832561A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832561B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1472
	cr6.compare<uint32_t>(ctx.r11.u32, 1472, xer);
	// bgt cr6,0x832566ac
	if (cr6.gt) goto loc_832566AC;
	// beq cr6,0x83256694
	if (cr6.eq) goto loc_83256694;
	// cmplwi cr6,r11,341
	cr6.compare<uint32_t>(ctx.r11.u32, 341, xer);
	// bgt cr6,0x832563f8
	if (cr6.gt) goto loc_832563F8;
	// beq cr6,0x8325632c
	if (cr6.eq) goto loc_8325632C;
	// addi r11,r11,-320
	ctx.r11.s64 = ctx.r11.s64 + -320;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x832569e8
	if (cr6.gt) goto loc_832569E8;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25080
	ctx.r12.s64 = ctx.r12.s64 + 25080;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8325624C;
	case 1:
		goto loc_832569E8;
	case 2:
		goto loc_832569E8;
	case 3:
		goto loc_832569E8;
	case 4:
		goto loc_832569E8;
	case 5:
		goto loc_83256288;
	case 6:
		goto loc_83256264;
	case 7:
		goto loc_832569E8;
	case 8:
		goto loc_832562A0;
	case 9:
		goto loc_832563E4;
	case 10:
		goto loc_832569E8;
	case 11:
		goto loc_832569E8;
	case 12:
		goto loc_832569E8;
	case 13:
		goto loc_832569E8;
	case 14:
		goto loc_83256344;
	case 15:
		goto loc_83256384;
	case 16:
		goto loc_832563E4;
	case 17:
		goto loc_832563E4;
	case 18:
		goto loc_832562F4;
	case 19:
		goto loc_83256384;
	case 20:
		goto loc_832563CC;
	default:
		return;
	}
	// lwz r25,25164(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25164);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,25224(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25224);
	// lwz r25,25188(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25188);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,25248(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25248);
	// lwz r25,25572(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25572);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,25412(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25412);
	// lwz r25,25476(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25476);
	// lwz r25,25572(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25572);
	// lwz r25,25572(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25572);
	// lwz r25,25332(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25332);
	// lwz r25,25476(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25476);
	// lwz r25,25548(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25548);
loc_8325624C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,526
	ctx.r4.s64 = 526;
loc_83256254:
	// bl 0x83223c38
	ctx.lr = 0x83256258;
	sub_83223C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256264:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8326b2e0
	ctx.lr = 0x8325626C;
	sub_8326B2E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x8325627C;
	sub_83266DD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256288:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320ab78
	ctx.lr = 0x83256294;
	sub_8320AB78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832562A0:
	// bl 0x83201a00
	ctx.lr = 0x832562A4;
	sub_83201A00(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
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
	// beq cr6,0x832562d4
	if (cr6.eq) goto loc_832562D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832562D4;
	sub_83222030(ctx, base);
loc_832562D4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832562F4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325632c
	if (cr6.eq) goto loc_8325632C;
	// lwz r3,372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325632c
	if (cr6.eq) goto loc_8325632C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8322b928
	ctx.lr = 0x83256320;
	sub_8322B928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8325632C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x83256338;
	sub_8320CF60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256344:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256370
	if (cr6.eq) goto loc_83256370;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256370
	if (cr6.eq) goto loc_83256370;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r4,r11,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
loc_83256370:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x83256378;
	sub_8320CF60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256384:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	// beq cr6,0x832563b0
	if (cr6.eq) goto loc_832563B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832563B0;
	sub_83222030(ctx, base);
loc_832563B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832563CC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x832563D8;
	sub_8322E5B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832563E4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x832563EC;
	sub_83213150(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832563F8:
	// cmplwi cr6,r11,473
	cr6.compare<uint32_t>(ctx.r11.u32, 473, xer);
	// bgt cr6,0x832565a4
	if (cr6.gt) goto loc_832565A4;
	// beq cr6,0x83256558
	if (cr6.eq) goto loc_83256558;
	// cmplwi cr6,r11,424
	cr6.compare<uint32_t>(ctx.r11.u32, 424, xer);
	// bgt cr6,0x832564b0
	if (cr6.gt) goto loc_832564B0;
	// beq cr6,0x83256480
	if (cr6.eq) goto loc_83256480;
	// cmplwi cr6,r11,342
	cr6.compare<uint32_t>(ctx.r11.u32, 342, xer);
	// beq cr6,0x832562f4
	if (cr6.eq) goto loc_832562F4;
	// cmplwi cr6,r11,418
	cr6.compare<uint32_t>(ctx.r11.u32, 418, xer);
	// bne cr6,0x832569e8
	if (!cr6.eq) goto loc_832569E8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256ab8
	if (cr6.eq) goto loc_83256AB8;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,304(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// rotlwi r30,r9,24
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sraw r5,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r5.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83256468
	if (cr6.eq) goto loc_83256468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83256468;
	sub_83222030(ctx, base);
loc_83256468:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256480:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83203a00
	ctx.lr = 0x83256488;
	sub_83203A00(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,256
	cr6.compare<uint32_t>(ctx.r4.u32, 256, xer);
	// bge cr6,0x83256254
	if (!cr6.lt) goto loc_83256254;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x83223a60
	ctx.lr = 0x832564A4;
	sub_83223A60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832564B0:
	// cmplwi cr6,r11,471
	cr6.compare<uint32_t>(ctx.r11.u32, 471, xer);
	// beq cr6,0x8325650c
	if (cr6.eq) goto loc_8325650C;
	// cmplwi cr6,r11,472
	cr6.compare<uint32_t>(ctx.r11.u32, 472, xer);
	// bne cr6,0x832569e8
	if (!cr6.eq) goto loc_832569E8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832564fc
	if (cr6.eq) goto loc_832564FC;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832564fc
	if (cr6.eq) goto loc_832564FC;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832564fc
	if (cr6.eq) goto loc_832564FC;
	// lfs f1,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
loc_832564FC:
	// bl 0x832248d8
	ctx.lr = 0x83256500;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8325650C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256548
	if (cr6.eq) goto loc_83256548;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256548
	if (cr6.eq) goto loc_83256548;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256548
	if (cr6.eq) goto loc_83256548;
	// lfs f1,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
loc_83256548:
	// bl 0x832248d8
	ctx.lr = 0x8325654C;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256558:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lfs f1,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256594
	if (cr6.eq) goto loc_83256594;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256594
	if (cr6.eq) goto loc_83256594;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256594
	if (cr6.eq) goto loc_83256594;
	// lfs f1,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
loc_83256594:
	// bl 0x832248d8
	ctx.lr = 0x83256598;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832565A4:
	// cmplwi cr6,r11,537
	cr6.compare<uint32_t>(ctx.r11.u32, 537, xer);
	// bgt cr6,0x83256668
	if (cr6.gt) goto loc_83256668;
	// beq cr6,0x83256650
	if (cr6.eq) goto loc_83256650;
	// cmplwi cr6,r11,488
	cr6.compare<uint32_t>(ctx.r11.u32, 488, xer);
	// beq cr6,0x83256608
	if (cr6.eq) goto loc_83256608;
	// cmplwi cr6,r11,489
	cr6.compare<uint32_t>(ctx.r11.u32, 489, xer);
	// bne cr6,0x832569e8
	if (!cr6.eq) goto loc_832569E8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256ab8
	if (cr6.eq) goto loc_83256AB8;
	// lwz r3,348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83256ab8
	if (cr6.eq) goto loc_83256AB8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8321da30
	ctx.lr = 0x832565F0;
	sub_8321DA30(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x832565FC;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256608:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256ab8
	if (cr6.eq) goto loc_83256AB8;
	// lwz r3,348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83256ab8
	if (cr6.eq) goto loc_83256AB8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8321da30
	ctx.lr = 0x83256638;
	sub_8321DA30(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x83256644;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256650:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8325665C;
	sub_8322E5B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256668:
	// cmplwi cr6,r11,792
	cr6.compare<uint32_t>(ctx.r11.u32, 792, xer);
	// bne cr6,0x832569e8
	if (!cr6.eq) goto loc_832569E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83273b48
	ctx.lr = 0x83256678;
	sub_83273B48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x83256688;
	sub_83266DD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256694:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83256118
	ctx.lr = 0x832566A0;
	sub_83256118(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832566AC:
	// cmplwi cr6,r11,1492
	cr6.compare<uint32_t>(ctx.r11.u32, 1492, xer);
	// bgt cr6,0x83256848
	if (cr6.gt) goto loc_83256848;
	// beq cr6,0x83256830
	if (cr6.eq) goto loc_83256830;
	// addi r11,r11,-1473
	ctx.r11.s64 = ctx.r11.s64 + -1473;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x832569e8
	if (cr6.gt) goto loc_832569E8;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26332
	ctx.r12.s64 = ctx.r12.s64 + 26332;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83256778;
	case 1:
		goto loc_832569E8;
	case 2:
		goto loc_832569E8;
	case 3:
		goto loc_83256790;
	case 4:
		goto loc_832568BC;
	case 5:
		goto loc_832569E8;
	case 6:
		goto loc_832569E8;
	case 7:
		goto loc_832563E4;
	case 8:
		goto loc_832567D8;
	case 9:
		goto loc_832567F8;
	case 10:
		goto loc_83256728;
	case 11:
		goto loc_832563E4;
	case 12:
		goto loc_83256728;
	case 13:
		goto loc_832569E8;
	case 14:
		goto loc_832569E8;
	case 15:
		goto loc_832569E8;
	case 16:
		goto loc_832569E8;
	case 17:
		goto loc_832569E8;
	case 18:
		goto loc_83256818;
	default:
		return;
	}
	// lwz r25,26488(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26488);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,26512(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26512);
	// lwz r25,26812(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26812);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,25572(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25572);
	// lwz r25,26584(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26584);
	// lwz r25,26616(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26616);
	// lwz r25,26408(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26408);
	// lwz r25,25572(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25572);
	// lwz r25,26408(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26408);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,27112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27112);
	// lwz r25,26648(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 26648);
loc_83256728:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	// beq cr6,0x83256754
	if (cr6.eq) goto loc_83256754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83256754;
	sub_83222030(ctx, base);
loc_83256754:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,92
	ctx.r10.s64 = 92;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256778:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83256118
	ctx.lr = 0x83256784;
	sub_83256118(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256790:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	// beq cr6,0x832567bc
	if (cr6.eq) goto loc_832567BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832567BC;
	sub_83222030(ctx, base);
loc_832567BC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832567D8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83202b20
	ctx.lr = 0x832567E0;
	sub_83202B20(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x832567EC;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832567F8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83202b20
	ctx.lr = 0x83256800;
	sub_83202B20(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832248d8
	ctx.lr = 0x8325680C;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256818:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83256080
	ctx.lr = 0x83256824;
	sub_83256080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256830:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83256080
	ctx.lr = 0x8325683C;
	sub_83256080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256848:
	// cmplwi cr6,r11,1819
	cr6.compare<uint32_t>(ctx.r11.u32, 1819, xer);
	// bgt cr6,0x83256934
	if (cr6.gt) goto loc_83256934;
	// beq cr6,0x83256918
	if (cr6.eq) goto loc_83256918;
	// cmplwi cr6,r11,1499
	cr6.compare<uint32_t>(ctx.r11.u32, 1499, xer);
	// bgt cr6,0x832568ec
	if (cr6.gt) goto loc_832568EC;
	// beq cr6,0x832568d4
	if (cr6.eq) goto loc_832568D4;
	// cmplwi cr6,r11,1493
	cr6.compare<uint32_t>(ctx.r11.u32, 1493, xer);
	// beq cr6,0x832568bc
	if (cr6.eq) goto loc_832568BC;
	// cmplwi cr6,r11,1494
	cr6.compare<uint32_t>(ctx.r11.u32, 1494, xer);
	// bne cr6,0x832569e8
	if (!cr6.eq) goto loc_832569E8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832568a0
	if (!cr6.eq) goto loc_832568A0;
	// li r11,1807
	ctx.r11.s64 = 1807;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83223c38
	ctx.lr = 0x83256894;
	sub_83223C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832568A0:
	// lhz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83223c38
	ctx.lr = 0x832568B0;
	sub_83223C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832568BC:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83256080
	ctx.lr = 0x832568C8;
	sub_83256080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832568D4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83256118
	ctx.lr = 0x832568E0;
	sub_83256118(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832568EC:
	// cmplwi cr6,r11,1809
	cr6.compare<uint32_t>(ctx.r11.u32, 1809, xer);
	// beq cr6,0x832563e4
	if (cr6.eq) goto loc_832563E4;
	// cmplwi cr6,r11,1818
	cr6.compare<uint32_t>(ctx.r11.u32, 1818, xer);
	// bne cr6,0x832569e8
	if (!cr6.eq) goto loc_832569E8;
	// bl 0x83203968
	ctx.lr = 0x83256900;
	sub_83203968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8325690C;
	sub_8322E5B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256918:
	// bl 0x83203990
	ctx.lr = 0x8325691C;
	sub_83203990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83256928;
	sub_8322E5B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256934:
	// cmplwi cr6,r11,1933
	cr6.compare<uint32_t>(ctx.r11.u32, 1933, xer);
	// bgt cr6,0x832569e0
	if (cr6.gt) goto loc_832569E0;
	// beq cr6,0x83256984
	if (cr6.eq) goto loc_83256984;
	// cmplwi cr6,r11,1889
	cr6.compare<uint32_t>(ctx.r11.u32, 1889, xer);
	// beq cr6,0x8325696c
	if (cr6.eq) goto loc_8325696C;
	// cmplwi cr6,r11,1897
	cr6.compare<uint32_t>(ctx.r11.u32, 1897, xer);
	// bne cr6,0x832569e8
	if (!cr6.eq) goto loc_832569E8;
	// bl 0x83203a40
	ctx.lr = 0x83256954;
	sub_83203A40(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83256960;
	sub_83223C38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8325696C:
	// bl 0x832039b8
	ctx.lr = 0x83256970;
	sub_832039B8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x83256978;
	sub_832248D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83256984:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832569a0
	if (cr6.eq) goto loc_832569A0;
	// lwz r3,372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
loc_832569A0:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832569c8
	if (cr6.eq) goto loc_832569C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ab20
	ctx.lr = 0x832569B4;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832569c8
	if (cr6.eq) goto loc_832569C8;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83220140
	ctx.lr = 0x832569C4;
	sub_83220140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832569C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x832569D4;
	sub_8320CF60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832569E0:
	// cmplwi cr6,r11,1973
	cr6.compare<uint32_t>(ctx.r11.u32, 1973, xer);
	// beq cr6,0x832569f4
	if (cr6.eq) goto loc_832569F4;
loc_832569E8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832569F4:
	// li r11,221
	ctx.r11.s64 = 221;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,12
	ctx.r28.s64 = 12;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832728d0
	ctx.lr = 0x83256A1C;
	sub_832728D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83256A28;
	sub_83222030(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x83256A38;
	sub_83266DD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83272c38
	ctx.lr = 0x83256A44;
	sub_83272C38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256a68
	if (cr6.eq) goto loc_83256A68;
	// lwz r30,376(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83256a80
	if (!cr6.eq) goto loc_83256A80;
loc_83256A68:
	// bl 0x83255d20
	ctx.lr = 0x83256A6C;
	sub_83255D20(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256a80
	if (cr6.eq) goto loc_83256A80;
	// stw r3,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r3.u32);
loc_83256A80:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
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
	// beq cr6,0x83256aa8
	if (cr6.eq) goto loc_83256AA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x83256AA8;
	sub_83222030(ctx, base);
loc_83256AA8:
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// sth r28,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r28.u16);
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
loc_83256AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83256AC4"))) PPC_WEAK_FUNC(sub_83256AC4);
PPC_FUNC_IMPL(__imp__sub_83256AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83256AC8"))) PPC_WEAK_FUNC(sub_83256AC8);
PPC_FUNC_IMPL(__imp__sub_83256AC8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x832264e0
	ctx.lr = 0x83256B08;
	sub_832264E0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83256b24
	if (!cr6.eq) goto loc_83256B24;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x83256B1C;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_83256B24:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,594
	cr6.compare<int32_t>(ctx.r10.s32, 594, xer);
	// bgt cr6,0x83256b48
	if (cr6.gt) goto loc_83256B48;
	// cmpwi cr6,r10,591
	cr6.compare<int32_t>(ctx.r10.s32, 591, xer);
	// bge cr6,0x83256bb4
	if (!cr6.lt) goto loc_83256BB4;
	// cmpwi cr6,r10,565
	cr6.compare<int32_t>(ctx.r10.s32, 565, xer);
	// blt cr6,0x83256b48
	if (cr6.lt) goto loc_83256B48;
	// cmpwi cr6,r10,572
	cr6.compare<int32_t>(ctx.r10.s32, 572, xer);
	// ble cr6,0x83256bb4
	if (!cr6.gt) goto loc_83256BB4;
loc_83256B48:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83256b64
	if (!cr6.eq) goto loc_83256B64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x832277f8
	ctx.lr = 0x83256B5C;
	sub_832277F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83256B64:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255768
	ctx.lr = 0x83256B70;
	sub_83255768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832277e8
	ctx.lr = 0x83256B78;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmpwi cr6,r11,594
	cr6.compare<int32_t>(ctx.r11.s32, 594, xer);
	// bgt cr6,0x83256ba0
	if (cr6.gt) goto loc_83256BA0;
	// cmpwi cr6,r11,591
	cr6.compare<int32_t>(ctx.r11.s32, 591, xer);
	// bge cr6,0x83256bb4
	if (!cr6.lt) goto loc_83256BB4;
	// cmpwi cr6,r11,565
	cr6.compare<int32_t>(ctx.r11.s32, 565, xer);
	// blt cr6,0x83256ba0
	if (cr6.lt) goto loc_83256BA0;
	// cmpwi cr6,r11,572
	cr6.compare<int32_t>(ctx.r11.s32, 572, xer);
	// ble cr6,0x83256bb4
	if (!cr6.gt) goto loc_83256BB4;
loc_83256BA0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x8320d7f8
	ctx.lr = 0x83256BAC;
	sub_8320D7F8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
loc_83256BB4:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,-591
	ctx.r10.s64 = ctx.r10.s64 + -591;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x83256bf8
	if (cr6.gt) goto loc_83256BF8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83256be0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83256BE0;
	// bdzf 4*cr6+eq,0x83256be8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83256BE8;
	// bne cr6,0x83256bf0
	if (!cr6.eq) goto loc_83256BF0;
	// li r11,566
	ctx.r11.s64 = 566;
	// b 0x83256bf4
	goto loc_83256BF4;
loc_83256BE0:
	// li r11,567
	ctx.r11.s64 = 567;
	// b 0x83256bf4
	goto loc_83256BF4;
loc_83256BE8:
	// li r11,571
	ctx.r11.s64 = 571;
	// b 0x83256bf4
	goto loc_83256BF4;
loc_83256BF0:
	// li r11,572
	ctx.r11.s64 = 572;
loc_83256BF4:
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_83256BF8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83203a20
	ctx.lr = 0x83256C00;
	sub_83203A20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83256C1C"))) PPC_WEAK_FUNC(sub_83256C1C);
PPC_FUNC_IMPL(__imp__sub_83256C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83256C20"))) PPC_WEAK_FUNC(sub_83256C20);
PPC_FUNC_IMPL(__imp__sub_83256C20) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,424
	cr6.compare<uint32_t>(ctx.r11.u32, 424, xer);
	// bgt cr6,0x83256d5c
	if (cr6.gt) goto loc_83256D5C;
	// beq cr6,0x83256d50
	if (cr6.eq) goto loc_83256D50;
	// cmplwi cr6,r11,338
	cr6.compare<uint32_t>(ctx.r11.u32, 338, xer);
	// bgt cr6,0x83256cf0
	if (cr6.gt) goto loc_83256CF0;
	// cmplwi cr6,r11,336
	cr6.compare<uint32_t>(ctx.r11.u32, 336, xer);
	// bge cr6,0x83256dc4
	if (!cr6.lt) goto loc_83256DC4;
	// addi r11,r11,-320
	ctx.r11.s64 = ctx.r11.s64 + -320;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x83256dec
	if (cr6.gt) goto loc_83256DEC;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27772
	ctx.r12.s64 = ctx.r12.s64 + 27772;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83256DC4;
	case 1:
		goto loc_83256DEC;
	case 2:
		goto loc_83256DEC;
	case 3:
		goto loc_83256DEC;
	case 4:
		goto loc_83256DEC;
	case 5:
		goto loc_83256DEC;
	case 6:
		goto loc_83256DC4;
	case 7:
		goto loc_83256DEC;
	case 8:
		goto loc_83256DEC;
	case 9:
		goto loc_83256DC4;
	case 10:
		goto loc_83256DEC;
	case 11:
		goto loc_83256DEC;
	case 12:
		goto loc_83256DEC;
	case 13:
		goto loc_83256DEC;
	case 14:
		goto loc_83256CB8;
	default:
		return;
	}
	// lwz r25,28100(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28100);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28100(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28100);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28100(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28100);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,28140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28140);
	// lwz r25,27832(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 27832);
loc_83256CB8:
	// bl 0x83255f30
	ctx.lr = 0x83256CBC;
	sub_83255F30(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83220140
	ctx.lr = 0x83256CD4;
	sub_83220140(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83256e78
	if (cr6.eq) goto loc_83256E78;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// b 0x83256e78
	goto loc_83256E78;
loc_83256CF0:
	// cmplwi cr6,r11,341
	cr6.compare<uint32_t>(ctx.r11.u32, 341, xer);
	// beq cr6,0x83256dc4
	if (cr6.eq) goto loc_83256DC4;
	// cmplwi cr6,r11,342
	cr6.compare<uint32_t>(ctx.r11.u32, 342, xer);
	// beq cr6,0x83256d34
	if (cr6.eq) goto loc_83256D34;
	// cmplwi cr6,r11,418
	cr6.compare<uint32_t>(ctx.r11.u32, 418, xer);
	// bne cr6,0x83256dec
	if (!cr6.eq) goto loc_83256DEC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83222578
	ctx.lr = 0x83256D10;
	sub_83222578(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83256e78
	if (cr6.eq) goto loc_83256E78;
	// li r10,255
	ctx.r10.s64 = 255;
	// rlwimi r10,r3,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stw r10,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r10.u32);
	// b 0x83256e78
	goto loc_83256E78;
loc_83256D34:
	// bl 0x83255f30
	ctx.lr = 0x83256D38;
	sub_83255F30(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x83256D4C;
	sub_8322DFB0(ctx, base);
	// b 0x83256e78
	goto loc_83256E78;
loc_83256D50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83256ac8
	ctx.lr = 0x83256D58;
	sub_83256AC8(ctx, base);
	// b 0x83256e78
	goto loc_83256E78;
loc_83256D5C:
	// cmplwi cr6,r11,1494
	cr6.compare<uint32_t>(ctx.r11.u32, 1494, xer);
	// bgt cr6,0x83256da8
	if (cr6.gt) goto loc_83256DA8;
	// beq cr6,0x83256d9c
	if (cr6.eq) goto loc_83256D9C;
	// cmplwi cr6,r11,792
	cr6.compare<uint32_t>(ctx.r11.u32, 792, xer);
	// bgt cr6,0x83256d8c
	if (cr6.gt) goto loc_83256D8C;
	// beq cr6,0x83256dc4
	if (cr6.eq) goto loc_83256DC4;
	// cmplwi cr6,r11,471
	cr6.compare<uint32_t>(ctx.r11.u32, 471, xer);
	// blt cr6,0x83256dec
	if (cr6.lt) goto loc_83256DEC;
	// cmplwi cr6,r11,473
	cr6.compare<uint32_t>(ctx.r11.u32, 473, xer);
	// ble cr6,0x83256dc4
	if (!cr6.gt) goto loc_83256DC4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83256e7c
	goto loc_83256E7C;
loc_83256D8C:
	// cmplwi cr6,r11,1480
	cr6.compare<uint32_t>(ctx.r11.u32, 1480, xer);
	// beq cr6,0x83256dc4
	if (cr6.eq) goto loc_83256DC4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83256e7c
	goto loc_83256E7C;
loc_83256D9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83201fe0
	ctx.lr = 0x83256DA4;
	sub_83201FE0(ctx, base);
	// b 0x83256e78
	goto loc_83256E78;
loc_83256DA8:
	// cmplwi cr6,r11,1889
	cr6.compare<uint32_t>(ctx.r11.u32, 1889, xer);
	// bgt cr6,0x83256de4
	if (cr6.gt) goto loc_83256DE4;
	// beq cr6,0x83256dd4
	if (cr6.eq) goto loc_83256DD4;
	// cmplwi cr6,r11,1818
	cr6.compare<uint32_t>(ctx.r11.u32, 1818, xer);
	// blt cr6,0x83256dec
	if (cr6.lt) goto loc_83256DEC;
	// cmplwi cr6,r11,1819
	cr6.compare<uint32_t>(ctx.r11.u32, 1819, xer);
	// bgt cr6,0x83256dec
	if (cr6.gt) goto loc_83256DEC;
loc_83256DC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x8320d810
	ctx.lr = 0x83256DD0;
	sub_8320D810(ctx, base);
	// b 0x83256e78
	goto loc_83256E78;
loc_83256DD4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83220448
	ctx.lr = 0x83256DDC;
	sub_83220448(ctx, base);
	// bl 0x832039e0
	ctx.lr = 0x83256DE0;
	sub_832039E0(ctx, base);
	// b 0x83256e78
	goto loc_83256E78;
loc_83256DE4:
	// cmplwi cr6,r11,1897
	cr6.compare<uint32_t>(ctx.r11.u32, 1897, xer);
	// beq cr6,0x83256df4
	if (cr6.eq) goto loc_83256DF4;
loc_83256DEC:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83256e7c
	goto loc_83256E7C;
loc_83256DF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x832264e0
	ctx.lr = 0x83256E20;
	sub_832264E0(ctx, base);
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83256e4c
	if (!cr6.eq) goto loc_83256E4C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x83256E34;
	sub_832277E8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r3.u16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83256e4c
	if (!cr6.eq) goto loc_83256E4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r3,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r3.u16);
loc_83256E4C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,573
	cr6.compare<int32_t>(ctx.r11.s32, 573, xer);
	// blt cr6,0x83256e60
	if (cr6.lt) goto loc_83256E60;
	// cmpwi cr6,r11,576
	cr6.compare<int32_t>(ctx.r11.s32, 576, xer);
	// ble cr6,0x83256e74
	if (!cr6.gt) goto loc_83256E74;
loc_83256E60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x8320d7f8
	ctx.lr = 0x83256E6C;
	sub_8320D7F8(ctx, base);
	// li r3,575
	ctx.r3.s64 = 575;
	// sth r3,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r3.u16);
loc_83256E74:
	// bl 0x83203a60
	ctx.lr = 0x83256E78;
	sub_83203A60(ctx, base);
loc_83256E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83256E7C:
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

__attribute__((alias("__imp__sub_83256E94"))) PPC_WEAK_FUNC(sub_83256E94);
PPC_FUNC_IMPL(__imp__sub_83256E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83256E98"))) PPC_WEAK_FUNC(sub_83256E98);
PPC_FUNC_IMPL(__imp__sub_83256E98) {
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
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83256EC8"))) PPC_WEAK_FUNC(sub_83256EC8);
PPC_FUNC_IMPL(__imp__sub_83256EC8) {
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
	// bl 0x83255f30
	ctx.lr = 0x83256EDC;
	sub_83255F30(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83256f18
	if (!cr6.eq) goto loc_83256F18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bl 0x83255f30
	ctx.lr = 0x83256EF8;
	sub_83255F30(ctx, base);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83256f10
	if (!cr6.eq) goto loc_83256F10;
	// bl 0x831fea00
	ctx.lr = 0x83256F0C;
	sub_831FEA00(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_83256F10:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83202120
	ctx.lr = 0x83256F18;
	sub_83202120(ctx, base);
loc_83256F18:
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

__attribute__((alias("__imp__sub_83256F2C"))) PPC_WEAK_FUNC(sub_83256F2C);
PPC_FUNC_IMPL(__imp__sub_83256F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83256F30"))) PPC_WEAK_FUNC(sub_83256F30);
PPC_FUNC_IMPL(__imp__sub_83256F30) {
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
	// beq cr6,0x83256f50
	if (cr6.eq) goto loc_83256F50;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83256f58
	if (!cr6.eq) goto loc_83256F58;
loc_83256F50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83256F58:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83256F64"))) PPC_WEAK_FUNC(sub_83256F64);
PPC_FUNC_IMPL(__imp__sub_83256F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83256F68"))) PPC_WEAK_FUNC(sub_83256F68);
PPC_FUNC_IMPL(__imp__sub_83256F68) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83255f30
	ctx.lr = 0x83256F84;
	sub_83255F30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83256f9c
	if (!cr6.eq) goto loc_83256F9C;
	// bl 0x831fea00
	ctx.lr = 0x83256F98;
	sub_831FEA00(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_83256F9C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83256FAC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83256fac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83256FAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, ctx.r11.u8);
	// stb r11,79(r3)
	PPC_STORE_U8(ctx.r3.u32 + 79, ctx.r11.u8);
	// lbz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83256FE4"))) PPC_WEAK_FUNC(sub_83256FE4);
PPC_FUNC_IMPL(__imp__sub_83256FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83256FE8"))) PPC_WEAK_FUNC(sub_83256FE8);
PPC_FUNC_IMPL(__imp__sub_83256FE8) {
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
	// beq cr6,0x83257008
	if (cr6.eq) goto loc_83257008;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83257010
	if (!cr6.eq) goto loc_83257010;
loc_83257008:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83257010:
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257018"))) PPC_WEAK_FUNC(sub_83257018);
PPC_FUNC_IMPL(__imp__sub_83257018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83257020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83255f30
	ctx.lr = 0x8325702C;
	sub_83255F30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83255f30
	ctx.lr = 0x83257034;
	sub_83255F30(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83257058
	if (!cr6.eq) goto loc_83257058;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83209aa8
	ctx.lr = 0x8325704C;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831fbe28
	ctx.lr = 0x83257054;
	sub_831FBE28(ctx, base);
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
loc_83257058:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbe48
	ctx.lr = 0x83257064;
	sub_831FBE48(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// bl 0x831fbea8
	ctx.lr = 0x83257078;
	sub_831FBEA8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83257090
	if (cr6.eq) goto loc_83257090;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
loc_83257090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbf40
	ctx.lr = 0x83257098;
	sub_831FBF40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832570b4
	if (cr6.eq) goto loc_832570B4;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
loc_832570B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832570BC"))) PPC_WEAK_FUNC(sub_832570BC);
PPC_FUNC_IMPL(__imp__sub_832570BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832570C0"))) PPC_WEAK_FUNC(sub_832570C0);
PPC_FUNC_IMPL(__imp__sub_832570C0) {
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
	// beq cr6,0x832570ec
	if (cr6.eq) goto loc_832570EC;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832570ec
	if (cr6.eq) goto loc_832570EC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x832653d0
	sub_832653D0(ctx, base);
	return;
loc_832570EC:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8320cf60
	sub_8320CF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832570F8"))) PPC_WEAK_FUNC(sub_832570F8);
PPC_FUNC_IMPL(__imp__sub_832570F8) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1141
	cr6.compare<uint32_t>(ctx.r11.u32, 1141, xer);
	// bgt cr6,0x83257264
	if (cr6.gt) goto loc_83257264;
	// beq cr6,0x83257254
	if (cr6.eq) goto loc_83257254;
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x83257368
	if (cr6.gt) goto loc_83257368;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28992
	ctx.r12.s64 = ctx.r12.s64 + 28992;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83257194;
	case 1:
		goto loc_83257368;
	case 2:
		goto loc_83257368;
	case 3:
		goto loc_832571C4;
	case 4:
		goto loc_832571C4;
	case 5:
		goto loc_83257368;
	case 6:
		goto loc_83257368;
	case 7:
		goto loc_832571AC;
	case 8:
		goto loc_83257368;
	case 9:
		goto loc_83257368;
	case 10:
		goto loc_832571D4;
	case 11:
		goto loc_832571E4;
	case 12:
		goto loc_832571F4;
	case 13:
		goto loc_83257204;
	case 14:
		goto loc_83257214;
	case 15:
		goto loc_83257224;
	case 16:
		goto loc_83257368;
	case 17:
		goto loc_83257368;
	case 18:
		goto loc_83257368;
	case 19:
		goto loc_83257234;
	case 20:
		goto loc_83257244;
	default:
		return;
	}
	// lwz r25,29076(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29076);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29124(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29124);
	// lwz r25,29124(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29124);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29100(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29100);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29140(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29140);
	// lwz r25,29156(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29156);
	// lwz r25,29172(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29172);
	// lwz r25,29188(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29188);
	// lwz r25,29204(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29204);
	// lwz r25,29220(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29220);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29544(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29544);
	// lwz r25,29236(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29236);
	// lwz r25,29252(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29252);
loc_83257194:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8321bae8
	ctx.lr = 0x832571A8;
	sub_8321BAE8(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832571AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8321bae8
	ctx.lr = 0x832571C0;
	sub_8321BAE8(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832571C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8321bfe0
	ctx.lr = 0x832571D0;
	sub_8321BFE0(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832571D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320b1d0
	ctx.lr = 0x832571E0;
	sub_8320B1D0(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832571E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320b418
	ctx.lr = 0x832571F0;
	sub_8320B418(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832571F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320b718
	ctx.lr = 0x83257200;
	sub_8320B718(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_83257204:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320c278
	ctx.lr = 0x83257210;
	sub_8320C278(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_83257214:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320bb28
	ctx.lr = 0x83257220;
	sub_8320BB28(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_83257224:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320c400
	ctx.lr = 0x83257230;
	sub_8320C400(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_83257234:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320c578
	ctx.lr = 0x83257240;
	sub_8320C578(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_83257244:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320bc90
	ctx.lr = 0x83257250;
	sub_8320BC90(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_83257254:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320c840
	ctx.lr = 0x83257260;
	sub_8320C840(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_83257264:
	// cmplwi cr6,r11,2320
	cr6.compare<uint32_t>(ctx.r11.u32, 2320, xer);
	// bgt cr6,0x8325730c
	if (cr6.gt) goto loc_8325730C;
	// beq cr6,0x832572fc
	if (cr6.eq) goto loc_832572FC;
	// cmplwi cr6,r11,1145
	cr6.compare<uint32_t>(ctx.r11.u32, 1145, xer);
	// bgt cr6,0x832572c4
	if (cr6.gt) goto loc_832572C4;
	// beq cr6,0x832572ac
	if (cr6.eq) goto loc_832572AC;
	// cmplwi cr6,r11,1142
	cr6.compare<uint32_t>(ctx.r11.u32, 1142, xer);
	// beq cr6,0x8325729c
	if (cr6.eq) goto loc_8325729C;
	// cmplwi cr6,r11,1143
	cr6.compare<uint32_t>(ctx.r11.u32, 1143, xer);
	// bne cr6,0x83257368
	if (!cr6.eq) goto loc_83257368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320c020
	ctx.lr = 0x83257298;
	sub_8320C020(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_8325729C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320ca48
	ctx.lr = 0x832572A8;
	sub_8320CA48(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832572AC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8321bae8
	ctx.lr = 0x832572C0;
	sub_8321BAE8(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832572C4:
	// cmplwi cr6,r11,1146
	cr6.compare<uint32_t>(ctx.r11.u32, 1146, xer);
	// beq cr6,0x832572e4
	if (cr6.eq) goto loc_832572E4;
	// cmplwi cr6,r11,1258
	cr6.compare<uint32_t>(ctx.r11.u32, 1258, xer);
	// bne cr6,0x83257368
	if (!cr6.eq) goto loc_83257368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320bed0
	ctx.lr = 0x832572E0;
	sub_8320BED0(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832572E4:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8321bae8
	ctx.lr = 0x832572F8;
	sub_8321BAE8(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832572FC:
	// bl 0x83255f30
	ctx.lr = 0x83257300;
	sub_83255F30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83266b98
	ctx.lr = 0x83257308;
	sub_83266B98(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_8325730C:
	// cmplwi cr6,r11,2365
	cr6.compare<uint32_t>(ctx.r11.u32, 2365, xer);
	// bgt cr6,0x83257358
	if (cr6.gt) goto loc_83257358;
	// beq cr6,0x83257380
	if (cr6.eq) goto loc_83257380;
	// cmplwi cr6,r11,2321
	cr6.compare<uint32_t>(ctx.r11.u32, 2321, xer);
	// beq cr6,0x83257348
	if (cr6.eq) goto loc_83257348;
	// cmplwi cr6,r11,2342
	cr6.compare<uint32_t>(ctx.r11.u32, 2342, xer);
	// bne cr6,0x83257368
	if (!cr6.eq) goto loc_83257368;
	// bl 0x83255f30
	ctx.lr = 0x8325732C;
	sub_83255F30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83265090
	ctx.lr = 0x83257334;
	sub_83265090(ctx, base);
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
loc_83257348:
	// bl 0x83255f30
	ctx.lr = 0x8325734C;
	sub_83255F30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832652d0
	ctx.lr = 0x83257354;
	sub_832652D0(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_83257358:
	// cmplwi cr6,r11,2376
	cr6.compare<uint32_t>(ctx.r11.u32, 2376, xer);
	// beq cr6,0x832573bc
	if (cr6.eq) goto loc_832573BC;
	// cmplwi cr6,r11,2385
	cr6.compare<uint32_t>(ctx.r11.u32, 2385, xer);
	// beq cr6,0x83257380
	if (cr6.eq) goto loc_83257380;
loc_83257368:
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83257380:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832573ac
	if (cr6.eq) goto loc_832573AC;
	// lwz r3,372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832573ac
	if (cr6.eq) goto loc_832573AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832653d0
	ctx.lr = 0x832573A8;
	sub_832653D0(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832573AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x832573B8;
	sub_8320CF60(ctx, base);
	// b 0x832573c0
	goto loc_832573C0;
loc_832573BC:
	// bl 0x83203aa8
	ctx.lr = 0x832573C0;
	sub_83203AA8(ctx, base);
loc_832573C0:
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

__attribute__((alias("__imp__sub_832573D8"))) PPC_WEAK_FUNC(sub_832573D8);
PPC_FUNC_IMPL(__imp__sub_832573D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832573E0;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8322c870
	ctx.lr = 0x83257404;
	sub_8322C870(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,0
	ctx.r24.s64 = 0;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r21,r11,0,30,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// rlwinm r28,r11,0,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// rlwinm r27,r11,24,8,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// bl 0x83202cf0
	ctx.lr = 0x83257430;
	sub_83202CF0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83257440
	if (cr6.eq) goto loc_83257440;
	// li r24,2
	ctx.r24.s64 = 2;
loc_83257440:
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x83201e38
	ctx.lr = 0x83257448;
	sub_83201E38(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83257458
	if (cr6.eq) goto loc_83257458;
	// li r23,4
	ctx.r23.s64 = 4;
loc_83257458:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83289ac8
	ctx.lr = 0x83257468;
	sub_83289AC8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r25,r11,24688
	ctx.r25.s64 = ctx.r11.s64 + 24688;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325748c
	if (cr6.eq) goto loc_8325748C;
	// lwz r29,360(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// bne cr6,0x83257494
	if (!cr6.eq) goto loc_83257494;
loc_8325748C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83257498
	goto loc_83257498;
loc_83257494:
	// lwz r31,364(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
loc_83257498:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x8325775c
	if (cr6.eq) goto loc_8325775C;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x832574e0
	if (cr6.eq) goto loc_832574E0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x832574c0
	if (!cr6.eq) goto loc_832574C0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x832574e0
	if (cr6.eq) goto loc_832574E0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x832574cc
	goto loc_832574CC;
loc_832574C0:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x832574e0
	if (!cr6.eq) goto loc_832574E0;
	// li r4,5
	ctx.r4.s64 = 5;
loc_832574CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83266348
	ctx.lr = 0x832574DC;
	sub_83266348(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
loc_832574E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8325751c
	if (cr6.eq) goto loc_8325751C;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x8325751c
	if (cr6.eq) goto loc_8325751C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83266348
	ctx.lr = 0x83257504;
	sub_83266348(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83266348
	ctx.lr = 0x83257518;
	sub_83266348(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
loc_8325751C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83257558
	if (cr6.eq) goto loc_83257558;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x83257558
	if (cr6.eq) goto loc_83257558;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83266348
	ctx.lr = 0x83257540;
	sub_83266348(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83266348
	ctx.lr = 0x83257554;
	sub_83266348(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
loc_83257558:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// bne cr6,0x832576b4
	if (!cr6.eq) goto loc_832576B4;
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(ctx.r22.s32, 3, xer);
	// beq cr6,0x83257578
	if (cr6.eq) goto loc_83257578;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// bne cr6,0x832576b4
	if (!cr6.eq) goto loc_832576B4;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq cr6,0x832576d8
	if (cr6.eq) goto loc_832576D8;
loc_83257578:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325758c
	if (cr6.eq) goto loc_8325758C;
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83257598
	if (!cr6.eq) goto loc_83257598;
loc_8325758C:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x832575a0
	goto loc_832575A0;
loc_83257598:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
loc_832575A0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x83257650
	if (cr6.eq) goto loc_83257650;
	// lwz r7,24(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83257650
	if (cr6.eq) goto loc_83257650;
	// dcbt r0,r7
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83257650
	if (!cr6.gt) goto loc_83257650;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832575E0:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,82
	cr6.compare<uint32_t>(ctx.r6.u32, 82, xer);
	// beq cr6,0x83257604
	if (cr6.eq) goto loc_83257604;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x832575e0
	if (cr6.lt) goto loc_832575E0;
	// b 0x83257650
	goto loc_83257650;
loc_83257604:
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x83220448
	ctx.lr = 0x8325760C;
	sub_83220448(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83257620
	if (!cr6.eq) goto loc_83257620;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x83257624
	goto loc_83257624;
loc_83257620:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_83257624:
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
	// blt cr6,0x83257640
	if (cr6.lt) goto loc_83257640;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83257640:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83257650
	if (cr6.eq) goto loc_83257650;
	// li r31,1
	ctx.r31.s64 = 1;
loc_83257650:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x83257680
	if (cr6.eq) goto loc_83257680;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x83266348
	ctx.lr = 0x83257670;
	sub_83266348(ctx, base);
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8322b7d0
	ctx.lr = 0x8325767C;
	sub_8322B7D0(ctx, base);
	// b 0x832576b4
	goto loc_832576B4;
loc_83257680:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x83266348
	ctx.lr = 0x83257688;
	sub_83266348(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832576b4
	if (cr6.eq) goto loc_832576B4;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832576a4
	if (!cr6.eq) goto loc_832576A4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x832576a8
	goto loc_832576A8;
loc_832576A4:
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
loc_832576A8:
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8322c038
	ctx.lr = 0x832576B4;
	sub_8322C038(ctx, base);
loc_832576B4:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq cr6,0x832576d8
	if (cr6.eq) goto loc_832576D8;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x832576d8
	if (!cr6.eq) goto loc_832576D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83266348
	ctx.lr = 0x832576D8;
	sub_83266348(ctx, base);
loc_832576D8:
	// rlwinm r11,r20,0,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x1FC;
	// rlwinm r11,r11,0,29,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325775c
	if (cr6.eq) goto loc_8325775C;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x8325775c
	if (cr6.eq) goto loc_8325775C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83201f28
	ctx.lr = 0x832576F8;
	sub_83201F28(ctx, base);
	// rlwinm r11,r20,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83257730
	if (cr6.eq) goto loc_83257730;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8325771c
	if (!cr6.eq) goto loc_8325771C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83257730
	if (cr6.eq) goto loc_83257730;
loc_8325771C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83266348
	ctx.lr = 0x83257730;
	sub_83266348(ctx, base);
loc_83257730:
	// rlwinm r11,r20,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325775c
	if (cr6.eq) goto loc_8325775C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8325775c
	if (cr6.eq) goto loc_8325775C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83266348
	ctx.lr = 0x8325775C;
	sub_83266348(ctx, base);
loc_8325775C:
	// rlwinm r11,r22,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,18
	ctx.r4.s64 = 18;
	// or r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 | ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// or r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 | ctx.r24.u64;
	// ori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 | 1;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x8322bf60
	ctx.lr = 0x8325777C;
	sub_8322BF60(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83257788"))) PPC_WEAK_FUNC(sub_83257788);
PPC_FUNC_IMPL(__imp__sub_83257788) {
	PPC_FUNC_PROLOGUE();
	// b 0x83237a08
	sub_83237A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325778C"))) PPC_WEAK_FUNC(sub_8325778C);
PPC_FUNC_IMPL(__imp__sub_8325778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257790"))) PPC_WEAK_FUNC(sub_83257790);
PPC_FUNC_IMPL(__imp__sub_83257790) {
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
	// rlwinm r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832577dc
	if (cr6.eq) goto loc_832577DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83266348
	ctx.lr = 0x832577C8;
	sub_83266348(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x832577DC;
	sub_83266348(ctx, base);
loc_832577DC:
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832577fc
	if (cr6.eq) goto loc_832577FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x832577FC;
	sub_83266348(ctx, base);
loc_832577FC:
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

__attribute__((alias("__imp__sub_83257814"))) PPC_WEAK_FUNC(sub_83257814);
PPC_FUNC_IMPL(__imp__sub_83257814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257818"))) PPC_WEAK_FUNC(sub_83257818);
PPC_FUNC_IMPL(__imp__sub_83257818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x83266348
	sub_83266348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83257838"))) PPC_WEAK_FUNC(sub_83257838);
PPC_FUNC_IMPL(__imp__sub_83257838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325783C"))) PPC_WEAK_FUNC(sub_8325783C);
PPC_FUNC_IMPL(__imp__sub_8325783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257840"))) PPC_WEAK_FUNC(sub_83257840);
PPC_FUNC_IMPL(__imp__sub_83257840) {
	PPC_FUNC_PROLOGUE();
	// b 0x83202b20
	sub_83202B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83257844"))) PPC_WEAK_FUNC(sub_83257844);
PPC_FUNC_IMPL(__imp__sub_83257844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257848"))) PPC_WEAK_FUNC(sub_83257848);
PPC_FUNC_IMPL(__imp__sub_83257848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83207288
	sub_83207288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83257860"))) PPC_WEAK_FUNC(sub_83257860);
PPC_FUNC_IMPL(__imp__sub_83257860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257864"))) PPC_WEAK_FUNC(sub_83257864);
PPC_FUNC_IMPL(__imp__sub_83257864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257868"))) PPC_WEAK_FUNC(sub_83257868);
PPC_FUNC_IMPL(__imp__sub_83257868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83207568
	sub_83207568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83257880"))) PPC_WEAK_FUNC(sub_83257880);
PPC_FUNC_IMPL(__imp__sub_83257880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257884"))) PPC_WEAK_FUNC(sub_83257884);
PPC_FUNC_IMPL(__imp__sub_83257884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257888"))) PPC_WEAK_FUNC(sub_83257888);
PPC_FUNC_IMPL(__imp__sub_83257888) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1805
	cr6.compare<uint32_t>(ctx.r11.u32, 1805, xer);
	// blt cr6,0x832578c8
	if (cr6.lt) goto loc_832578C8;
	// cmplwi cr6,r11,1808
	cr6.compare<uint32_t>(ctx.r11.u32, 1808, xer);
	// bgt cr6,0x832578c8
	if (cr6.gt) goto loc_832578C8;
	// addi r4,r11,85
	ctx.r4.s64 = ctx.r11.s64 + 85;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x832578B4;
	sub_83223C38(ctx, base);
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
loc_832578C8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832578DC"))) PPC_WEAK_FUNC(sub_832578DC);
PPC_FUNC_IMPL(__imp__sub_832578DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832578E0"))) PPC_WEAK_FUNC(sub_832578E0);
PPC_FUNC_IMPL(__imp__sub_832578E0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1549
	cr6.compare<uint32_t>(ctx.r11.u32, 1549, xer);
	// bgt cr6,0x83257944
	if (cr6.gt) goto loc_83257944;
	// beq cr6,0x83257924
	if (cr6.eq) goto loc_83257924;
	// cmplwi cr6,r11,1546
	cr6.compare<uint32_t>(ctx.r11.u32, 1546, xer);
	// bne cr6,0x83257984
	if (!cr6.eq) goto loc_83257984;
	// li r4,568
	ctx.r4.s64 = 568;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83257910;
	sub_83223C38(ctx, base);
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
loc_83257924:
	// li r4,569
	ctx.r4.s64 = 569;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83257930;
	sub_83223C38(ctx, base);
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
loc_83257944:
	// cmplwi cr6,r11,1680
	cr6.compare<uint32_t>(ctx.r11.u32, 1680, xer);
	// blt cr6,0x83257984
	if (cr6.lt) goto loc_83257984;
	// cmplwi cr6,r11,1685
	cr6.compare<uint32_t>(ctx.r11.u32, 1685, xer);
	// bgt cr6,0x83257984
	if (cr6.gt) goto loc_83257984;
	// addi r11,r11,-1680
	ctx.r11.s64 = ctx.r11.s64 + -1680;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,15228
	ctx.r8.s64 = ctx.r10.s64 + 15228;
	// lhzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x83223c38
	ctx.lr = 0x83257970;
	sub_83223C38(ctx, base);
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
loc_83257984:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257998"))) PPC_WEAK_FUNC(sub_83257998);
PPC_FUNC_IMPL(__imp__sub_83257998) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1686
	cr6.compare<uint32_t>(ctx.r11.u32, 1686, xer);
	// blt cr6,0x832579d8
	if (cr6.lt) goto loc_832579D8;
	// cmplwi cr6,r11,1689
	cr6.compare<uint32_t>(ctx.r11.u32, 1689, xer);
	// bgt cr6,0x832579d8
	if (cr6.gt) goto loc_832579D8;
	// addi r4,r11,-1113
	ctx.r4.s64 = ctx.r11.s64 + -1113;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x832579C4;
	sub_83223C38(ctx, base);
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
loc_832579D8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832579EC"))) PPC_WEAK_FUNC(sub_832579EC);
PPC_FUNC_IMPL(__imp__sub_832579EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832579F0"))) PPC_WEAK_FUNC(sub_832579F0);
PPC_FUNC_IMPL(__imp__sub_832579F0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1656
	cr6.compare<uint32_t>(ctx.r11.u32, 1656, xer);
	// blt cr6,0x83257a30
	if (cr6.lt) goto loc_83257A30;
	// cmplwi cr6,r11,1657
	cr6.compare<uint32_t>(ctx.r11.u32, 1657, xer);
	// bgt cr6,0x83257a30
	if (cr6.gt) goto loc_83257A30;
	// addi r4,r11,-992
	ctx.r4.s64 = ctx.r11.s64 + -992;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83257A1C;
	sub_83223C38(ctx, base);
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
loc_83257A30:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257A44"))) PPC_WEAK_FUNC(sub_83257A44);
PPC_FUNC_IMPL(__imp__sub_83257A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257A48"))) PPC_WEAK_FUNC(sub_83257A48);
PPC_FUNC_IMPL(__imp__sub_83257A48) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1658
	cr6.compare<uint32_t>(ctx.r11.u32, 1658, xer);
	// blt cr6,0x83257a88
	if (cr6.lt) goto loc_83257A88;
	// cmplwi cr6,r11,1662
	cr6.compare<uint32_t>(ctx.r11.u32, 1662, xer);
	// bgt cr6,0x83257a88
	if (cr6.gt) goto loc_83257A88;
	// addi r4,r11,-992
	ctx.r4.s64 = ctx.r11.s64 + -992;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83257A74;
	sub_83223C38(ctx, base);
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
loc_83257A88:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257A9C"))) PPC_WEAK_FUNC(sub_83257A9C);
PPC_FUNC_IMPL(__imp__sub_83257A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257AA0"))) PPC_WEAK_FUNC(sub_83257AA0);
PPC_FUNC_IMPL(__imp__sub_83257AA0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1663
	cr6.compare<uint32_t>(ctx.r11.u32, 1663, xer);
	// blt cr6,0x83257ae0
	if (cr6.lt) goto loc_83257AE0;
	// cmplwi cr6,r11,1667
	cr6.compare<uint32_t>(ctx.r11.u32, 1667, xer);
	// bgt cr6,0x83257ae0
	if (cr6.gt) goto loc_83257AE0;
	// addi r4,r11,-992
	ctx.r4.s64 = ctx.r11.s64 + -992;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83257ACC;
	sub_83223C38(ctx, base);
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
loc_83257AE0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83257AF4"))) PPC_WEAK_FUNC(sub_83257AF4);
PPC_FUNC_IMPL(__imp__sub_83257AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257AF8"))) PPC_WEAK_FUNC(sub_83257AF8);
PPC_FUNC_IMPL(__imp__sub_83257AF8) {
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
	// bl 0x831feec8
	ctx.lr = 0x83257B10;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83257b34
	if (!cr6.eq) goto loc_83257B34;
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
loc_83257B34:
	// lis r12,32639
	ctx.r12.s64 = 2139029504;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,16720
	ctx.r10.s64 = 1095761920;
	// ori r12,r12,32512
	ctx.r12.u64 = ctx.r12.u64 | 32512;
	// ori r9,r10,12800
	ctx.r9.u64 = ctx.r10.u64 | 12800;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83257b6c
	if (!cr6.eq) goto loc_83257B6C;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
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
loc_83257B6C:
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

__attribute__((alias("__imp__sub_83257B84"))) PPC_WEAK_FUNC(sub_83257B84);
PPC_FUNC_IMPL(__imp__sub_83257B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257B88"))) PPC_WEAK_FUNC(sub_83257B88);
PPC_FUNC_IMPL(__imp__sub_83257B88) {
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
	// bl 0x831feec8
	ctx.lr = 0x83257BA8;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83257cbc
	if (!cr6.eq) goto loc_83257CBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x83257BBC;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83257be4
	if (!cr6.eq) goto loc_83257BE4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15316
	ctx.r4.s64 = ctx.r11.s64 + 15316;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// bl 0x832083d0
	ctx.lr = 0x83257BDC;
	sub_832083D0(ctx, base);
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x83257cc0
	goto loc_83257CC0;
loc_83257BE4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83257c00
	if (!cr6.eq) goto loc_83257C00;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15276
	ctx.r4.s64 = ctx.r11.s64 + 15276;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// bl 0x83208568
	ctx.lr = 0x83257C00;
	sub_83208568(ctx, base);
loc_83257C00:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83257cbc
	if (cr6.eq) goto loc_83257CBC;
	// addi r7,r30,-2
	ctx.r7.s64 = ctx.r30.s64 + -2;
loc_83257C14:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// rlwinm r5,r10,19,13,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// rlwinm r8,r10,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// rlwinm r9,r10,25,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x3F;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bgt cr6,0x83257cd8
	if (cr6.gt) goto loc_83257CD8;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83257c58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83257C58;
	// bdzf 4*cr6+eq,0x83257c70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83257C70;
	// bne cr6,0x83257c88
	if (!cr6.eq) goto loc_83257C88;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// b 0x83257cac
	goto loc_83257CAC;
loc_83257C58:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83257cac
	if (!cr6.gt) goto loc_83257CAC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83257C64:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83257c64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83257C64;
	// b 0x83257cac
	goto loc_83257CAC;
loc_83257C70:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83257cac
	if (!cr6.gt) goto loc_83257CAC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83257C7C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83257c7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83257C7C;
	// b 0x83257cac
	goto loc_83257CAC;
loc_83257C88:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83257cac
	if (!cr6.gt) goto loc_83257CAC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83257C94:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83257c94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83257C94;
loc_83257CAC:
	// lhz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83257c14
	if (!cr6.eq) goto loc_83257C14;
loc_83257CBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83257CC0:
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
loc_83257CD8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15240
	ctx.r4.s64 = ctx.r11.s64 + 15240;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// bl 0x83208568
	ctx.lr = 0x83257CEC;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83257CEC"))) PPC_WEAK_FUNC(sub_83257CEC);
PPC_FUNC_IMPL(__imp__sub_83257CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257CF0"))) PPC_WEAK_FUNC(sub_83257CF0);
PPC_FUNC_IMPL(__imp__sub_83257CF0) {
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
	// bl 0x831feec8
	ctx.lr = 0x83257D08;
	sub_831FEEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83257da8
	if (cr6.eq) goto loc_83257DA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83257af8
	ctx.lr = 0x83257D1C;
	sub_83257AF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83257da8
	if (cr6.eq) goto loc_83257DA8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83257da8
	if (cr6.eq) goto loc_83257DA8;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83257da8
	if (cr6.eq) goto loc_83257DA8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83257da8
	if (cr6.eq) goto loc_83257DA8;
	// cmpwi cr6,r10,-128
	cr6.compare<int32_t>(ctx.r10.s32, -128, xer);
	// beq cr6,0x83257d6c
	if (cr6.eq) goto loc_83257D6C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15344
	ctx.r4.s64 = ctx.r11.s64 + 15344;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// bl 0x83208568
	ctx.lr = 0x83257D6C;
	sub_83208568(ctx, base);
loc_83257D6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83257da8
	if (!cr6.gt) goto loc_83257DA8;
	// subfic r9,r11,128
	xer.ca = ctx.r11.u32 <= 128;
	ctx.r9.s64 = 128 - ctx.r11.s64;
loc_83257D7C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// blt cr6,0x83257d7c
	if (cr6.lt) goto loc_83257D7C;
loc_83257DA8:
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

__attribute__((alias("__imp__sub_83257DC0"))) PPC_WEAK_FUNC(sub_83257DC0);
PPC_FUNC_IMPL(__imp__sub_83257DC0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83257b88
	ctx.lr = 0x83257DE0;
	sub_83257B88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83257dec
	if (cr6.eq) goto loc_83257DEC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83257DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83257cf0
	ctx.lr = 0x83257DF4;
	sub_83257CF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83257e00
	if (!cr6.eq) goto loc_83257E00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83257E00:
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

__attribute__((alias("__imp__sub_83257E18"))) PPC_WEAK_FUNC(sub_83257E18);
PPC_FUNC_IMPL(__imp__sub_83257E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83257E20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83257ea4
	if (!cr6.eq) goto loc_83257EA4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x832278d0
	ctx.lr = 0x83257E40;
	sub_832278D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83257ea0
	if (!cr6.eq) goto loc_83257EA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832001a0
	ctx.lr = 0x83257E54;
	sub_832001A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83257e74
	if (cr6.eq) goto loc_83257E74;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// bl 0x83200388
	ctx.lr = 0x83257E68;
	sub_83200388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83257E74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83291390
	ctx.lr = 0x83257E7C;
	sub_83291390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83257ea0
	if (cr6.eq) goto loc_83257EA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200150
	ctx.lr = 0x83257E90;
	sub_83200150(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83257EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83257EA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83257EAC"))) PPC_WEAK_FUNC(sub_83257EAC);
PPC_FUNC_IMPL(__imp__sub_83257EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83257EB0"))) PPC_WEAK_FUNC(sub_83257EB0);
PPC_FUNC_IMPL(__imp__sub_83257EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83257EB8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,96(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r11,34(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 34);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83258088
	if (!cr6.gt) goto loc_83258088;
	// sth r11,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r11.u16);
	// rlwinm r3,r11,2,14,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// bl 0x83209aa8
	ctx.lr = 0x83257EE0;
	sub_83209AA8(ctx, base);
	// stw r3,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r3.u32);
	// lwz r11,44(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,48(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lhz r9,34(r23)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r23.u32 + 34);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r23
	ctx.r24.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r26,r10,r23
	ctx.r26.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// ble cr6,0x83258088
	if (!cr6.gt) goto loc_83258088;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r18,r11,15304
	ctx.r18.s64 = ctx.r11.s64 + 15304;
	// addi r17,r10,15412
	ctx.r17.s64 = ctx.r10.s64 + 15412;
loc_83257F2C:
	// stw r22,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r22.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lhz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r9,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFC;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x83257e18
	ctx.lr = 0x83257F4C;
	sub_83257E18(ctx, base);
	// lhz r7,2(r24)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8325806c
	if (cr6.eq) goto loc_8325806C;
loc_83257F60:
	// lhz r8,6(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lhz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,14,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0x30000) | (ctx.r7.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r7,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3FFFC;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_83257F80:
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// bge cr6,0x83258094
	if (!cr6.lt) goto loc_83258094;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83257fac
	if (cr6.eq) goto loc_83257FAC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x83257fb8
	goto loc_83257FB8;
loc_83257FAC:
	// rlwinm r11,r11,0,21,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FE;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_83257FB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83257fd0
	if (!cr6.eq) goto loc_83257FD0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// b 0x83257f80
	goto loc_83257F80;
loc_83257FD0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83258058
	if (cr6.eq) goto loc_83258058;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8ab0
	ctx.lr = 0x83257FE0;
	sub_82DA8AB0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83258028
	if (cr6.eq) goto loc_83258028;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832592d8
	ctx.lr = 0x83257FF4;
	sub_832592D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83258028
	if (cr6.eq) goto loc_83258028;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83259198
	ctx.lr = 0x83258008;
	sub_83259198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83258028
	if (cr6.eq) goto loc_83258028;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_83258028:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// bne cr6,0x83258050
	if (!cr6.eq) goto loc_83258050;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x83258050;
	sub_832085E8(ctx, base);
loc_83258050:
	// lhzu r11,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
loc_83258058:
	// lhz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// blt cr6,0x83257f60
	if (cr6.lt) goto loc_83257F60;
loc_8325806C:
	// lhz r11,34(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 34);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r19,r10
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r10.s32, xer);
	// blt cr6,0x83257f2c
	if (cr6.lt) goto loc_83257F2C;
loc_83258088:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83258094:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r4,r11,15376
	ctx.r4.s64 = ctx.r11.s64 + 15376;
	// bl 0x83208568
	ctx.lr = 0x832580A4;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_832580A4"))) PPC_WEAK_FUNC(sub_832580A4);
PPC_FUNC_IMPL(__imp__sub_832580A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832580A8"))) PPC_WEAK_FUNC(sub_832580A8);
PPC_FUNC_IMPL(__imp__sub_832580A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832580B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,-4
	ctx.r25.s64 = -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832580dc
	if (!cr6.eq) goto loc_832580DC;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832580DC:
	// lwz r29,96(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r24,0
	ctx.r24.s64 = 0;
	// lhz r9,34(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// add r23,r11,r29
	ctx.r23.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x832581c4
	if (!cr6.gt) goto loc_832581C4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83258108:
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x83257e18
	ctx.lr = 0x83258128;
	sub_83257E18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832581a8
	if (cr6.eq) goto loc_832581A8;
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// beq cr6,0x832581a8
	if (cr6.eq) goto loc_832581A8;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832581a8
	if (!cr6.eq) goto loc_832581A8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// bl 0x832592d8
	ctx.lr = 0x83258160;
	sub_832592D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x8325818c
	if (cr6.eq) goto loc_8325818C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259198
	ctx.lr = 0x83258174;
	sub_83259198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325818c
	if (cr6.eq) goto loc_8325818C;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// b 0x832581a8
	goto loc_832581A8;
loc_8325818C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832580a8
	ctx.lr = 0x8325819C;
	sub_832580A8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r25,r9,r25
	ctx.r25.u64 = ctx.r9.u64 & ctx.r25.u64;
loc_832581A8:
	// lhz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, xer);
	// blt cr6,0x83258108
	if (cr6.lt) goto loc_83258108;
loc_832581C4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832581D0"))) PPC_WEAK_FUNC(sub_832581D0);
PPC_FUNC_IMPL(__imp__sub_832581D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x832581D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// ble cr6,0x832582c8
	if (!cr6.gt) goto loc_832582C8;
loc_83258224:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r8,r9,10,22,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x3FF;
	// clrlwi r9,r9,10
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8325824c
	if (cr6.eq) goto loc_8325824C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
loc_8325824C:
	// addi r8,r8,-120
	ctx.r8.s64 = ctx.r8.s64 + -120;
	// cmplwi cr6,r8,14
	cr6.compare<uint32_t>(ctx.r8.u32, 14, xer);
	// bgt cr6,0x832582b0
	if (cr6.gt) goto loc_832582B0;
	// lis r12,-31962
	ctx.r12.s64 = -2094661632;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-32144
	ctx.r12.s64 = ctx.r12.s64 + -32144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_832582AC;
	case 1:
		goto loc_832582AC;
	case 2:
		goto loc_832582B0;
	case 3:
		goto loc_832582AC;
	case 4:
		goto loc_832582B0;
	case 5:
		goto loc_832582AC;
	case 6:
		goto loc_832582AC;
	case 7:
		goto loc_832582B0;
	case 8:
		goto loc_832582B0;
	case 9:
		goto loc_832582B0;
	case 10:
		goto loc_832582AC;
	case 11:
		goto loc_832582AC;
	case 12:
		goto loc_832582AC;
	case 13:
		goto loc_832582AC;
	case 14:
		goto loc_832582AC;
	default:
		return;
	}
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32080(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32080);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32080(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32080);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32080(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32080);
	// lwz r25,-32080(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32080);
	// lwz r25,-32080(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32080);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
	// lwz r25,-32084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32084);
loc_832582AC:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_832582B0:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne 0x83258224
	if (!cr0.eq) goto loc_83258224;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
loc_832582C8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83258340
	if (cr6.eq) goto loc_83258340;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lhz r6,34(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x83258320
	if (cr6.lt) goto loc_83258320;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
loc_83258300:
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x83258300
	if (cr6.lt) goto loc_83258300;
loc_83258320:
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bge cr6,0x8325832c
	if (!cr6.lt) goto loc_8325832C;
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_8325832C:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// sth r11,28(r29)
	PPC_STORE_U16(ctx.r29.u32 + 28, ctx.r11.u16);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
loc_83258340:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83258368
	if (!cr6.gt) goto loc_83258368;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8325835C;
	sub_83209AA8(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x831fbab0
	ctx.lr = 0x83258368;
	sub_831FBAB0(ctx, base);
loc_83258368:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832583d0
	if (cr6.eq) goto loc_832583D0;
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832583c4
	if (cr6.eq) goto loc_832583C4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8325838C;
	sub_83209AA8(ctx, base);
	// lhz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// stw r3,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r3.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832583c4
	if (cr6.eq) goto loc_832583C4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_832583A4:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831fe758
	ctx.lr = 0x832583B0;
	sub_831FE758(ctx, base);
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832583a4
	if (cr6.lt) goto loc_832583A4;
loc_832583C4:
	// sth r26,32(r29)
	PPC_STORE_U16(ctx.r29.u32 + 32, ctx.r26.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83257eb0
	ctx.lr = 0x832583D0;
	sub_83257EB0(ctx, base);
loc_832583D0:
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// addi r23,r9,15304
	ctx.r23.s64 = ctx.r9.s64 + 15304;
	// lwz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83258704
	if (!cr6.gt) goto loc_83258704;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r23,121
	ctx.r23.s64 = 121;
	// li r14,63
	ctx.r14.s64 = 63;
	// li r15,123
	ctx.r15.s64 = 123;
	// li r16,127
	ctx.r16.s64 = 127;
	// addi r24,r11,15544
	ctx.r24.s64 = ctx.r11.s64 + 15544;
	// li r17,1
	ctx.r17.s64 = 1;
	// li r18,61
	ctx.r18.s64 = 61;
	// li r19,129
	ctx.r19.s64 = 129;
	// li r20,65
	ctx.r20.s64 = 65;
	// li r21,133
	ctx.r21.s64 = 133;
	// li r22,17
	ctx.r22.s64 = 17;
loc_83258428:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r30,r11,10,22,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// clrlwi r27,r11,10
	ctx.r27.u64 = ctx.r11.u32 & 0x3FFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83258450
	if (cr6.eq) goto loc_83258450;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r27,r11,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_83258450:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, xer);
	// bge cr6,0x83258478
	if (!cr6.lt) goto loc_83258478;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// rlwimi r11,r27,10,0,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 10) & 0xFFFFFC00) | (ctx.r11.u64 & 0xFFFFFFFF000003FF);
	// rlwimi r10,r11,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_83258478:
	// addi r11,r30,-100
	ctx.r11.s64 = ctx.r30.s64 + -100;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bgt cr6,0x83258678
	if (cr6.gt) goto loc_83258678;
	// lis r12,-31962
	ctx.r12.s64 = -2094661632;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31588
	ctx.r12.s64 = ctx.r12.s64 + -31588;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83258694;
	case 1:
		goto loc_83258694;
	case 2:
		goto loc_83258678;
	case 3:
		goto loc_83258678;
	case 4:
		goto loc_83258694;
	case 5:
		goto loc_83258678;
	case 6:
		goto loc_83258678;
	case 7:
		goto loc_83258678;
	case 8:
		goto loc_83258678;
	case 9:
		goto loc_83258678;
	case 10:
		goto loc_83258678;
	case 11:
		goto loc_83258678;
	case 12:
		goto loc_83258678;
	case 13:
		goto loc_83258678;
	case 14:
		goto loc_83258678;
	case 15:
		goto loc_83258678;
	case 16:
		goto loc_83258678;
	case 17:
		goto loc_83258678;
	case 18:
		goto loc_83258678;
	case 19:
		goto loc_83258678;
	case 20:
		goto loc_83258534;
	case 21:
		goto loc_83258548;
	case 22:
		goto loc_83258608;
	case 23:
		goto loc_832585D8;
	case 24:
		goto loc_83258694;
	case 25:
		goto loc_832585B4;
	case 26:
		goto loc_832585C8;
	case 27:
		goto loc_832585E8;
	case 28:
		goto loc_832585F8;
	case 29:
		goto loc_83258618;
	case 30:
		goto loc_83258628;
	case 31:
		goto loc_83258638;
	case 32:
		goto loc_83258648;
	case 33:
		goto loc_83258658;
	case 34:
		goto loc_83258678;
	case 35:
		goto loc_83258678;
	case 36:
		goto loc_83258668;
	case 37:
		goto loc_83258694;
	default:
		return;
	}
	// lwz r25,-31084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31084);
	// lwz r25,-31084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31084);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31084);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31436(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31436);
	// lwz r25,-31416(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31416);
	// lwz r25,-31224(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31224);
	// lwz r25,-31272(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31272);
	// lwz r25,-31084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31084);
	// lwz r25,-31308(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31308);
	// lwz r25,-31288(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31288);
	// lwz r25,-31256(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31256);
	// lwz r25,-31240(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31240);
	// lwz r25,-31208(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31208);
	// lwz r25,-31192(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31192);
	// lwz r25,-31176(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31176);
	// lwz r25,-31160(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31160);
	// lwz r25,-31144(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31144);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31112(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31112);
	// lwz r25,-31128(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31128);
	// lwz r25,-31084(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31084);
loc_83258534:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// rlwimi r11,r10,4,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_83258548:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83209aa8
	ctx.lr = 0x83258550;
	sub_83209AA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwimi r11,r23,1,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 1) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8320a150
	ctx.lr = 0x83258568;
	sub_8320A150(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8325859c
	if (cr6.eq) goto loc_8325859C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,3(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// bl 0x832581d0
	ctx.lr = 0x83258598;
	sub_832581D0(ctx, base);
	// b 0x83258694
	goto loc_83258694;
loc_8325859C:
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lhz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r5,3(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// bl 0x832581d0
	ctx.lr = 0x832585B0;
	sub_832581D0(ctx, base);
	// b 0x83258694
	goto loc_83258694;
loc_832585B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,125
	ctx.r10.s64 = 125;
	// rlwimi r11,r10,1,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_832585C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r14,2,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r14.u32, 2) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_832585D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r15,1,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r15.u32, 1) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_832585E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r16,1,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r16.u32, 1) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_832585F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r17,8,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r17.u32, 8) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_83258608:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r18,2,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r18.u32, 2) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_83258618:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r19,1,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r19.u32, 1) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_83258628:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r20,2,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 2) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_83258638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83291160
	ctx.lr = 0x83258644;
	sub_83291160(ctx, base);
	// b 0x83258694
	goto loc_83258694;
loc_83258648:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832912b8
	ctx.lr = 0x83258654;
	sub_832912B8(ctx, base);
	// b 0x83258694
	goto loc_83258694;
loc_83258658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r21,1,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r21.u32, 1) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_83258668:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r22,4,21,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 4) & 0x7FE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF801);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83258694
	goto loc_83258694;
loc_83258678:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320a108
	ctx.lr = 0x83258680;
	sub_8320A108(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x83258694;
	sub_83208330(ctx, base);
loc_83258694:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fbd90
	ctx.lr = 0x8325869C;
	sub_831FBD90(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x832586b4
	if (cr6.eq) goto loc_832586B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x832586b4
	if (!cr6.gt) goto loc_832586B4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_832586B4:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r5
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r5.s32, xer);
	// bgt cr6,0x83258894
	if (cr6.gt) goto loc_83258894;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r8,r27,3
	ctx.r8.s64 = ctx.r27.s64 + 3;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r26,r7
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r7.s32, xer);
	// blt cr6,0x83258428
	if (cr6.lt) goto loc_83258428;
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r24,r9,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,284(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
loc_83258704:
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r25,r6
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r6.s32, xer);
	// beq cr6,0x83258724
	if (cr6.eq) goto loc_83258724;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,15512
	ctx.r4.s64 = ctx.r11.s64 + 15512;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x83208330
	ctx.lr = 0x83258724;
	sub_83208330(ctx, base);
loc_83258724:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832589e0
	if (cr6.eq) goto loc_832589E0;
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83258770
	if (cr6.eq) goto loc_83258770;
	// lwz r8,72(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lhz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// add r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 + ctx.r26.u64;
loc_8325874C:
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, xer);
	// ble cr6,0x8325875c
	if (!cr6.gt) goto loc_8325875C;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8325875C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x8325874c
	if (cr6.lt) goto loc_8325874C;
loc_83258770:
	// stw r28,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r28.u32);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// sth r26,30(r29)
	PPC_STORE_U16(ctx.r29.u32 + 30, ctx.r26.u16);
	// ble cr6,0x83258968
	if (!cr6.gt) goto loc_83258968;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwinm r31,r22,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bge cr6,0x832588b0
	if (!cr6.lt) goto loc_832588B0;
	// rlwinm r3,r11,2,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x832587A0;
	sub_83209AA8(ctx, base);
	// stw r3,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832587e0
	if (!cr6.gt) goto loc_832587E0;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832587C0:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// bdnz 0x832587c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832587C0;
loc_832587E0:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83258834
	if (!cr6.gt) goto loc_83258834;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_832587F4:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831fbd90
	ctx.lr = 0x83258800;
	sub_831FBD90(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83258820
	if (cr6.eq) goto loc_83258820;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lhz r11,30(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 30);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,30(r29)
	PPC_STORE_U16(ctx.r29.u32 + 30, ctx.r9.u16);
loc_83258820:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832587f4
	if (cr6.lt) goto loc_832587F4;
loc_83258834:
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83258968
	if (cr6.eq) goto loc_83258968;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_83258848:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8325887c
	if (cr6.eq) goto loc_8325887C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,80(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r6,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// lhz r11,30(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 30);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,30(r29)
	PPC_STORE_U16(ctx.r29.u32 + 30, ctx.r5.u16);
loc_8325887C:
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x83258848
	if (cr6.lt) goto loc_83258848;
	// b 0x83258968
	goto loc_83258968;
loc_83258894:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r10,15480
	ctx.r4.s64 = ctx.r10.s64 + 15480;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83208568
	ctx.lr = 0x832588B0;
	sub_83208568(ctx, base);
loc_832588B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209aa8
	ctx.lr = 0x832588B8;
	sub_83209AA8(ctx, base);
	// stw r3,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x832588C8;
	sub_83294018(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83258918
	if (!cr6.gt) goto loc_83258918;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_832588DC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831fbd90
	ctx.lr = 0x832588E8;
	sub_831FBD90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83258904
	if (cr6.eq) goto loc_83258904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fb9e8
	ctx.lr = 0x83258904;
	sub_831FB9E8(ctx, base);
loc_83258904:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832588dc
	if (cr6.lt) goto loc_832588DC;
loc_83258918:
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83258968
	if (cr6.eq) goto loc_83258968;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8325892C:
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// beq cr6,0x83258954
	if (cr6.eq) goto loc_83258954;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831fb9e8
	ctx.lr = 0x83258954;
	sub_831FB9E8(ctx, base);
loc_83258954:
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325892c
	if (cr6.lt) goto loc_8325892C;
loc_83258968:
	// lhz r6,30(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 30);
	// cmpw cr6,r6,r22
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r22.s32, xer);
	// beq cr6,0x83258988
	if (cr6.eq) goto loc_83258988;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,15448
	ctx.r4.s64 = ctx.r11.s64 + 15448;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x83208330
	ctx.lr = 0x83258988;
	sub_83208330(ctx, base);
loc_83258988:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832589e0
	if (!cr6.gt) goto loc_832589E0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8325899C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FE;
	// cmplwi cr6,r9,274
	cr6.compare<uint32_t>(ctx.r9.u32, 274, xer);
	// bne cr6,0x832589cc
	if (!cr6.eq) goto loc_832589CC;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x83259198
	ctx.lr = 0x832589C4;
	sub_83259198(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_832589CC:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325899c
	if (cr6.lt) goto loc_8325899C;
loc_832589E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832589EC"))) PPC_WEAK_FUNC(sub_832589EC);
PPC_FUNC_IMPL(__imp__sub_832589EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832589F0"))) PPC_WEAK_FUNC(sub_832589F0);
PPC_FUNC_IMPL(__imp__sub_832589F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832589F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83257af8
	ctx.lr = 0x83258A0C;
	sub_83257AF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83258a30
	if (!cr6.eq) goto loc_83258A30;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15724
	ctx.r4.s64 = ctx.r11.s64 + 15724;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83208568
	ctx.lr = 0x83258A30;
	sub_83208568(ctx, base);
loc_83258A30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832070f0
	ctx.lr = 0x83258A38;
	sub_832070F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83258a58
	if (cr6.eq) goto loc_83258A58;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15684
	ctx.r4.s64 = ctx.r11.s64 + 15684;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208568
	ctx.lr = 0x83258A58;
	sub_83208568(ctx, base);
loc_83258A58:
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(ctx.r30.u32, 256, xer);
	// beq cr6,0x83258a80
	if (cr6.eq) goto loc_83258A80;
	// cmplwi cr6,r30,512
	cr6.compare<uint32_t>(ctx.r30.u32, 512, xer);
	// beq cr6,0x83258a80
	if (cr6.eq) goto loc_83258A80;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15652
	ctx.r4.s64 = ctx.r11.s64 + 15652;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208568
	ctx.lr = 0x83258A80;
	sub_83208568(ctx, base);
loc_83258A80:
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83258b8c
	if (cr6.eq) goto loc_83258B8C;
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83258b8c
	if (cr6.eq) goto loc_83258B8C;
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r26,r11,r29
	ctx.r26.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,-128
	cr6.compare<int32_t>(ctx.r11.s32, -128, xer);
	// bne cr6,0x83258acc
	if (!cr6.eq) goto loc_83258ACC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15624
	ctx.r4.s64 = ctx.r11.s64 + 15624;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// bl 0x83208568
	ctx.lr = 0x83258ACC;
	sub_83208568(ctx, base);
loc_83258ACC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83258ae8
	if (cr6.eq) goto loc_83258AE8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15344
	ctx.r4.s64 = ctx.r11.s64 + 15344;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// bl 0x83208568
	ctx.lr = 0x83258AE8;
	sub_83208568(ctx, base);
loc_83258AE8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83258b8c
	if (cr6.eq) goto loc_83258B8C;
loc_83258AF4:
	// add r27,r30,r26
	ctx.r27.u64 = ctx.r30.u64 + ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832277e8
	ctx.lr = 0x83258B00;
	sub_832277E8(ctx, base);
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r28,256
	cr6.compare<uint32_t>(ctx.r28.u32, 256, xer);
	// blt cr6,0x83258b6c
	if (cr6.lt) goto loc_83258B6C;
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83258b40
	if (cr6.lt) goto loc_83258B40;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r10,r11,0,16,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFC0;
	// sth r10,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// rlwinm r4,r10,2,14,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// bl 0x83209df8
	ctx.lr = 0x83258B3C;
	sub_83209DF8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_83258B40:
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// rlwinm r9,r30,16,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0x3;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// or r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 | ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r28,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r28.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r6.u16);
loc_83258B6C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83255980
	ctx.lr = 0x83258B74;
	sub_83255980(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x83258af4
	if (cr6.lt) goto loc_83258AF4;
loc_83258B8C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// xori r9,r10,80
	ctx.r9.u64 = ctx.r10.u64 ^ 80;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r7,r8,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// xori r6,r7,70
	ctx.r6.u64 = ctx.r7.u64 ^ 70;
	// stb r6,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r6.u8);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r4,r5,24,24,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x80;
	// xori r3,r4,65
	ctx.r3.u64 = ctx.r4.u64 ^ 65;
	// stb r3,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r3.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83258be8
	if (cr6.eq) goto loc_83258BE8;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
loc_83258BE8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83258c24
	if (cr6.eq) goto loc_83258C24;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,23280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23280);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x83258c2c
	goto loc_83258C2C;
loc_83258C24:
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_83258C2C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r29,56
	ctx.r30.s64 = ctx.r29.s64 + 56;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83258c50
	if (cr6.eq) goto loc_83258C50;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_83258C50:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83258cbc
	if (cr6.eq) goto loc_83258CBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x83258ca8
	if (!cr6.gt) goto loc_83258CA8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_83258C88:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r5,-4(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + -4);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bge cr6,0x83258ca8
	if (!cr6.lt) goto loc_83258CA8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x83258c88
	if (cr6.lt) goto loc_83258C88;
loc_83258CA8:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x83258cbc
	if (cr6.lt) goto loc_83258CBC;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
loc_83258CBC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83258cd8
	if (cr6.eq) goto loc_83258CD8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
loc_83258CD8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83258d1c
	if (cr6.eq) goto loc_83258D1C;
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83258cfc
	if (!cr6.eq) goto loc_83258CFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
loc_83258CFC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r6,38(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83211d38
	ctx.lr = 0x83258D10;
	sub_83211D38(ctx, base);
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_83258D1C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83258dac
	if (cr6.eq) goto loc_83258DAC;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// sth r10,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r10.u16);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83258dac
	if (cr6.eq) goto loc_83258DAC;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83258d80
	if (!cr6.eq) goto loc_83258D80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// b 0x83258da8
	goto loc_83258DA8;
loc_83258D80:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
loc_83258DA8:
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_83258DAC:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// bl 0x832581d0
	ctx.lr = 0x83258DC8;
	sub_832581D0(ctx, base);
	// lhz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83258e70
	if (!cr6.gt) goto loc_83258E70;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r27,r9,r29
	ctx.r27.u64 = ctx.r9.u64 + ctx.r29.u64;
	// ble cr6,0x83258e70
	if (!cr6.gt) goto loc_83258E70;
loc_83258DF4:
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r9,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFC;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x83254298
	ctx.lr = 0x83258E0C;
	sub_83254298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83258e58
	if (cr6.eq) goto loc_83258E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x83259198
	ctx.lr = 0x83258E24;
	sub_83259198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83258e58
	if (cr6.eq) goto loc_83258E58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r11,31,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3FF;
	// cmplwi cr6,r5,121
	cr6.compare<uint32_t>(ctx.r5.u32, 121, xer);
	// bne cr6,0x83258e50
	if (!cr6.eq) goto loc_83258E50;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x83258e58
	goto loc_83258E58;
loc_83258E50:
	// cmplwi cr6,r5,131
	cr6.compare<uint32_t>(ctx.r5.u32, 131, xer);
	// bne cr6,0x83258e78
	if (!cr6.eq) goto loc_83258E78;
loc_83258E58:
	// lhz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x83258df4
	if (cr6.lt) goto loc_83258DF4;
loc_83258E70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83258E78:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,15580
	ctx.r4.s64 = ctx.r11.s64 + 15580;
	// addi r3,r10,15304
	ctx.r3.s64 = ctx.r10.s64 + 15304;
	// bl 0x83208568
	ctx.lr = 0x83258E8C;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83258E8C"))) PPC_WEAK_FUNC(sub_83258E8C);
PPC_FUNC_IMPL(__imp__sub_83258E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83258E90"))) PPC_WEAK_FUNC(sub_83258E90);
PPC_FUNC_IMPL(__imp__sub_83258E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83258E98;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83258ebc
	if (!cr6.eq) goto loc_83258EBC;
loc_83258EB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83258EBC:
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r25,72(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// ble cr6,0x83258ef0
	if (!cr6.gt) goto loc_83258EF0;
	// addi r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 8;
loc_83258ED4:
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// beq cr6,0x83258ef0
	if (cr6.eq) goto loc_83258EF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83258ed4
	if (cr6.lt) goto loc_83258ED4;
loc_83258EF0:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83258eb0
	if (!cr6.lt) goto loc_83258EB0;
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lhz r9,34(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83258f64
	if (!cr6.gt) goto loc_83258F64;
	// lhz r9,2(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
loc_83258F2C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83258f58
	if (!cr6.gt) goto loc_83258F58;
	// lhz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
loc_83258F3C:
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x83258f70
	if (cr6.eq) goto loc_83258F70;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83258f3c
	if (cr6.lt) goto loc_83258F3C;
loc_83258F58:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x83258f2c
	if (cr6.lt) goto loc_83258F2C;
loc_83258F64:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83258F70:
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r29,68(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r26,r11,15304
	ctx.r26.s64 = ctx.r11.s64 + 15304;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// lhzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// lwzx r31,r29,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r27,r11,r5
	ctx.r27.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwimi r4,r6,16,14,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0x30000) | (ctx.r4.u64 & 0xFFFFFFFFFFFCFFFF);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// rlwinm r11,r4,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3FFFC;
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x83259008
	if (!cr6.eq) goto loc_83259008;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832278d0
	ctx.lr = 0x83258FBC;
	sub_832278D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83259054
	if (!cr6.eq) goto loc_83259054;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832001a0
	ctx.lr = 0x83258FD0;
	sub_832001A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83258fe8
	if (cr6.eq) goto loc_83258FE8;
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// bl 0x83200388
	ctx.lr = 0x83258FE4;
	sub_83200388(ctx, base);
	// b 0x83259008
	goto loc_83259008;
loc_83258FE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83291390
	ctx.lr = 0x83258FF0;
	sub_83291390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259054
	if (cr6.eq) goto loc_83259054;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83200150
	ctx.lr = 0x83259004;
	sub_83200150(ctx, base);
	// stwx r31,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r31.u32);
loc_83259008:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832592d8
	ctx.lr = 0x83259014;
	sub_832592D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x83259028
	if (!cr6.eq) goto loc_83259028;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x83259034
	goto loc_83259034;
loc_83259028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259198
	ctx.lr = 0x83259030;
	sub_83259198(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83259034:
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// bne cr6,0x832590e4
	if (!cr6.eq) goto loc_832590E4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,15808
	ctx.r4.s64 = ctx.r11.s64 + 15808;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x83259054;
	sub_832085E8(ctx, base);
loc_83259054:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x832003b0
	ctx.lr = 0x83259060;
	sub_832003B0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832580a8
	ctx.lr = 0x83259070;
	sub_832580A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832003b0
	ctx.lr = 0x83259078;
	sub_832003B0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83258eb0
	if (!cr6.eq) goto loc_83258EB0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,15756
	ctx.r4.s64 = ctx.r10.s64 + 15756;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,92(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x832085e8
	ctx.lr = 0x832590A4;
	sub_832085E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// ori r5,r7,1
	ctx.r5.u64 = ctx.r7.u64 | 1;
	// stw r8,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r6.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r4.u32);
	// stw r5,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r5.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832590E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83259054
	if (cr6.eq) goto loc_83259054;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r8.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r6.u32);
	// stw r7,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r7.u32);
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259120"))) PPC_WEAK_FUNC(sub_83259120);
PPC_FUNC_IMPL(__imp__sub_83259120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r7,r8,0,14,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lhz r8,34(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83259178
	if (!cr6.gt) goto loc_83259178;
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325915C:
	// lhzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// beq cr6,0x83259184
	if (cr6.eq) goto loc_83259184;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8325915c
	if (cr6.lt) goto loc_8325915C;
loc_83259178:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r11.u16);
	// blr 
	return;
loc_83259184:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259198"))) PPC_WEAK_FUNC(sub_83259198);
PPC_FUNC_IMPL(__imp__sub_83259198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// bne cr6,0x832591a8
	if (!cr6.eq) goto loc_832591A8;
loc_832591A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832591A8:
	// lhz r6,30(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832591a0
	if (cr6.eq) goto loc_832591A0;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x832591a0
	if (cr6.lt) goto loc_832591A0;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832591d8
	if (cr6.eq) goto loc_832591D8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x83259294
	goto loc_83259294;
loc_832591D8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x832591a0
	if (!cr6.gt) goto loc_832591A0;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r7,76(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
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
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_83259208:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// blt cr6,0x8325922c
	if (cr6.lt) goto loc_8325922C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832591a0
	if (cr6.eq) goto loc_832591A0;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// b 0x83259208
	goto loc_83259208;
loc_8325922C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// beq cr6,0x83259280
	if (cr6.eq) goto loc_83259280;
	// subfc r8,r4,r8
	xer.ca = ctx.r8.u32 >= ctx.r4.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r8,r5,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83259280
	if (cr0.eq) goto loc_83259280;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832591a0
	if (cr6.eq) goto loc_832591A0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bge cr6,0x83259270
	if (!cr6.lt) goto loc_83259270;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// b 0x83259208
	goto loc_83259208;
loc_83259270:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// b 0x83259208
	goto loc_83259208;
loc_83259280:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832591a0
	if (cr6.lt) goto loc_832591A0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83259294:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x832592b8
	if (!cr6.lt) goto loc_832592B8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_832592B8:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832592D8"))) PPC_WEAK_FUNC(sub_832592D8);
PPC_FUNC_IMPL(__imp__sub_832592D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832592E0;
	__savegprlr_28(ctx, base);
	// lhz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832593f4
	if (cr6.eq) goto loc_832593F4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832593f4
	if (!cr6.gt) goto loc_832593F4;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r30,84(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// subfic r10,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r11.s64;
	// slw r11,r28,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8325931C:
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, xer);
	// blt cr6,0x83259340
	if (cr6.lt) goto loc_83259340;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x832593f4
	if (cr6.eq) goto loc_832593F4;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r5,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// b 0x8325931c
	goto loc_8325931C;
loc_83259340:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8325939c
	if (cr6.eq) goto loc_8325939C;
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_83259358:
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x8325936c
	if (cr6.lt) goto loc_8325936C;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x8325936c
	if (cr6.gt) goto loc_8325936C;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_8325936C:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83259380
	if (cr6.lt) goto loc_83259380;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// bgt cr6,0x83259380
	if (cr6.gt) goto loc_83259380;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_83259380:
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832593a0
	if (!cr0.eq) goto loc_832593A0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83259358
	if (!cr6.eq) goto loc_83259358;
loc_8325939C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_832593A0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832593dc
	if (cr6.eq) goto loc_832593DC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x832593f4
	if (cr6.eq) goto loc_832593F4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// bge cr6,0x832593cc
	if (!cr6.lt) goto loc_832593CC;
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r5,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// b 0x8325931c
	goto loc_8325931C;
loc_832593CC:
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r5,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// b 0x8325931c
	goto loc_8325931C;
loc_832593DC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x832593f4
	if (cr6.lt) goto loc_832593F4;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832593F4:
	// lwz r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lhz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83259520
	if (!cr6.gt) goto loc_83259520;
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// subfic r8,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r9.s64;
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// slw r11,r28,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r6,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r3,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r3.s64 = temp.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
loc_8325943C:
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, xer);
	// blt cr6,0x83259460
	if (cr6.lt) goto loc_83259460;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83259520
	if (cr6.eq) goto loc_83259520;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r3,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r3.s64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r3,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// b 0x8325943c
	goto loc_8325943C;
loc_83259460:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832594cc
	if (cr6.eq) goto loc_832594CC;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
loc_83259488:
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// blt cr6,0x8325949c
	if (cr6.lt) goto loc_8325949C;
	// cmpwi cr6,r9,90
	cr6.compare<int32_t>(ctx.r9.s32, 90, xer);
	// bgt cr6,0x8325949c
	if (cr6.gt) goto loc_8325949C;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
loc_8325949C:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x832594b0
	if (cr6.lt) goto loc_832594B0;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// bgt cr6,0x832594b0
	if (cr6.gt) goto loc_832594B0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_832594B0:
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832594d0
	if (!cr0.eq) goto loc_832594D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83259488
	if (!cr6.eq) goto loc_83259488;
loc_832594CC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832594D0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8325950c
	if (cr6.eq) goto loc_8325950C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83259520
	if (cr6.eq) goto loc_83259520;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x832594fc
	if (!cr6.lt) goto loc_832594FC;
	// subf r5,r3,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r3.s64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r3,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// b 0x8325943c
	goto loc_8325943C;
loc_832594FC:
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r3,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// b 0x8325943c
	goto loc_8325943C;
loc_8325950C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83259520
	if (cr6.lt) goto loc_83259520;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83259520:
	// lhz r11,34(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 34);
	// lis r3,0
	ctx.r3.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83259600
	if (!cr6.gt) goto loc_83259600;
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,48(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
loc_8325955C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832595f4
	if (!cr6.gt) goto loc_832595F4;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83259570:
	// lhz r10,2(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832595dc
	if (cr6.eq) goto loc_832595DC;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
loc_83259598:
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// blt cr6,0x832595ac
	if (cr6.lt) goto loc_832595AC;
	// cmpwi cr6,r9,90
	cr6.compare<int32_t>(ctx.r9.s32, 90, xer);
	// bgt cr6,0x832595ac
	if (cr6.gt) goto loc_832595AC;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
loc_832595AC:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x832595c0
	if (cr6.lt) goto loc_832595C0;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// bgt cr6,0x832595c0
	if (cr6.gt) goto loc_832595C0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_832595C0:
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832595e0
	if (!cr0.eq) goto loc_832595E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83259598
	if (!cr6.eq) goto loc_83259598;
loc_832595DC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832595E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832595ec
	if (!cr6.eq) goto loc_832595EC;
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
loc_832595EC:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x83259570
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83259570;
loc_832595F4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8325955c
	if (!cr0.eq) goto loc_8325955C;
loc_83259600:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259604"))) PPC_WEAK_FUNC(sub_83259604);
PPC_FUNC_IMPL(__imp__sub_83259604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259608"))) PPC_WEAK_FUNC(sub_83259608);
PPC_FUNC_IMPL(__imp__sub_83259608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83259610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83259708
	if (cr6.eq) goto loc_83259708;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83259708
	if (cr6.eq) goto loc_83259708;
	// lwz r31,12(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259708
	if (cr6.eq) goto loc_83259708;
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8325972c
	if (cr6.eq) goto loc_8325972C;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83259708
	if (!cr6.gt) goto loc_83259708;
loc_8325966C:
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x832596f8
	if (cr6.lt) goto loc_832596F8;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bge cr6,0x832596f8
	if (!cr6.lt) goto loc_832596F8;
	// lhz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwimi r10,r4,16,14,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x30000) | (ctx.r10.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r10,r10,0,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832596ac
	if (!cr6.eq) goto loc_832596AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832596ec
	goto loc_832596EC;
loc_832596AC:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf. r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x832596e0
	if (!cr0.eq) goto loc_832596E0;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
loc_832596C0:
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832596e8
	if (cr6.eq) goto loc_832596E8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x832596c0
	if (cr0.eq) goto loc_832596C0;
loc_832596E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832596ec
	goto loc_832596EC;
loc_832596E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832596EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83259714
	if (cr6.eq) goto loc_83259714;
loc_832596F8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r6,r3
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, xer);
	// blt cr6,0x8325966c
	if (cr6.lt) goto loc_8325966C;
loc_83259708:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83259714:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83259720
	if (cr6.eq) goto loc_83259720;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_83259720:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8325972C:
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831fef78
	ctx.lr = 0x83259734;
	sub_831FEF78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r10,-4264
	ctx.r7.s64 = ctx.r10.s64 + -4264;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83208880
	ctx.lr = 0x8325975C;
	sub_83208880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83259708
	if (!cr6.eq) goto loc_83259708;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8325977c
	if (cr6.eq) goto loc_8325977C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_8325977C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259788"))) PPC_WEAK_FUNC(sub_83259788);
PPC_FUNC_IMPL(__imp__sub_83259788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83259790;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832597bc
	if (!cr6.eq) goto loc_832597BC;
loc_832597B0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832597BC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832597b0
	if (cr6.eq) goto loc_832597B0;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832597b0
	if (!cr6.gt) goto loc_832597B0;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x832597b0
	if (!cr6.lt) goto loc_832597B0;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r27,r7,r10
	ctx.r27.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne cr6,0x83259860
	if (!cr6.eq) goto loc_83259860;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83259844
	if (cr6.eq) goto loc_83259844;
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r9,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFC;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
loc_83259844:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83259978
	if (cr6.eq) goto loc_83259978;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83259860:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x832598c4
	if (!cr6.eq) goto loc_832598C4;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x8325987c
	if (!cr6.gt) goto loc_8325987C;
	// subfic r25,r25,1
	xer.ca = ctx.r25.u32 <= 1;
	ctx.r25.s64 = 1 - ctx.r25.s64;
loc_8325987C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832598a4
	if (cr6.eq) goto loc_832598A4;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
loc_832598A4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83259978
	if (cr6.eq) goto loc_83259978;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832598C4:
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x832598e8
	if (!cr6.eq) goto loc_832598E8;
	// lbz r11,22(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 22);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832598e8
	if (cr6.eq) goto loc_832598E8;
	// lwz r30,120(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8325993c
	if (!cr6.eq) goto loc_8325993C;
loc_832598E8:
	// rlwinm r22,r31,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83209aa8
	ctx.lr = 0x832598F4;
	sub_83209AA8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83259904;
	sub_83293EC8(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-4280
	ctx.r6.s64 = ctx.r11.s64 + -4280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832970a8
	ctx.lr = 0x8325991C;
	sub_832970A8(ctx, base);
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325992c
	if (cr6.eq) goto loc_8325992C;
	// bl 0x83209d68
	ctx.lr = 0x8325992C;
	sub_83209D68(ctx, base);
loc_8325992C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r26.u32);
	// stw r30,120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 120, ctx.r30.u32);
	// stb r11,22(r28)
	PPC_STORE_U8(ctx.r28.u32 + 22, ctx.r11.u8);
loc_8325993C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83259964
	if (cr6.eq) goto loc_83259964;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
loc_83259964:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83259978
	if (cr6.eq) goto loc_83259978;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
loc_83259978:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259984"))) PPC_WEAK_FUNC(sub_83259984);
PPC_FUNC_IMPL(__imp__sub_83259984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259988"))) PPC_WEAK_FUNC(sub_83259988);
PPC_FUNC_IMPL(__imp__sub_83259988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83259990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83259a54
	if (cr6.eq) goto loc_83259A54;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83259a54
	if (cr6.eq) goto loc_83259A54;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83259a54
	if (cr6.eq) goto loc_83259A54;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r8,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83259a54
	if (!cr6.gt) goto loc_83259A54;
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x831fef78
	ctx.lr = 0x83259A08;
	sub_831FEF78(ctx, base);
	// lis r7,-31968
	ctx.r7.s64 = -2095054848;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r7,-4264
	ctx.r7.s64 = ctx.r7.s64 + -4264;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83208880
	ctx.lr = 0x83259A28;
	sub_83208880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83259a54
	if (!cr6.eq) goto loc_83259A54;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83259a48
	if (cr6.eq) goto loc_83259A48;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_83259A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83259A54:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259A60"))) PPC_WEAK_FUNC(sub_83259A60);
PPC_FUNC_IMPL(__imp__sub_83259A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83259A68;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83259a94
	if (!cr6.eq) goto loc_83259A94;
loc_83259A88:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83259A94:
	// lwz r29,12(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bge cr6,0x83259a88
	if (!cr6.lt) goto loc_83259A88;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r28,r9,r29
	ctx.r28.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bne cr6,0x83259afc
	if (!cr6.eq) goto loc_83259AFC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83259ae0
	if (cr6.eq) goto loc_83259AE0;
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r9,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFC;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
loc_83259AE0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83259c14
	if (cr6.eq) goto loc_83259C14;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83259AFC:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x83259b60
	if (!cr6.eq) goto loc_83259B60;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x83259b18
	if (!cr6.gt) goto loc_83259B18;
	// subfic r25,r25,1
	xer.ca = ctx.r25.u32 <= 1;
	ctx.r25.s64 = 1 - ctx.r25.s64;
loc_83259B18:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83259b40
	if (cr6.eq) goto loc_83259B40;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
loc_83259B40:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83259c14
	if (cr6.eq) goto loc_83259C14;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83259B60:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x83259b84
	if (!cr6.eq) goto loc_83259B84;
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83259b84
	if (!cr6.eq) goto loc_83259B84;
	// lwz r31,120(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83259bd8
	if (!cr6.eq) goto loc_83259BD8;
loc_83259B84:
	// rlwinm r22,r10,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83259B90;
	sub_83209AA8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83259BA0;
	sub_83293EC8(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r5,4
	ctx.r5.s64 = 4;
	// lhz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// addi r6,r11,-4280
	ctx.r6.s64 = ctx.r11.s64 + -4280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832970a8
	ctx.lr = 0x83259BB8;
	sub_832970A8(ctx, base);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259bc8
	if (cr6.eq) goto loc_83259BC8;
	// bl 0x83209d68
	ctx.lr = 0x83259BC8;
	sub_83209D68(ctx, base);
loc_83259BC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r26.u32);
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// stb r11,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r11.u8);
loc_83259BD8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83259c00
	if (cr6.eq) goto loc_83259C00;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,14,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (ctx.r8.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r11,r8,0,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3FFFC;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
loc_83259C00:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83259c14
	if (cr6.eq) goto loc_83259C14;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
loc_83259C14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259C20"))) PPC_WEAK_FUNC(sub_83259C20);
PPC_FUNC_IMPL(__imp__sub_83259C20) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// sth r10,8(r6)
	PPC_STORE_U16(ctx.r6.u32 + 8, ctx.r10.u16);
	// stb r10,10(r6)
	PPC_STORE_U8(ctx.r6.u32 + 10, ctx.r10.u8);
	// bne cr6,0x83259c5c
	if (!cr6.eq) goto loc_83259C5C;
loc_83259C48:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83259C5C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83259cb8
	if (!cr6.gt) goto loc_83259CB8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83259C80:
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bgt cr6,0x83259cb0
	if (cr6.gt) goto loc_83259CB0;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83259ca8
	if (cr6.eq) goto loc_83259CA8;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x83259cb0
	if (!cr6.gt) goto loc_83259CB0;
loc_83259CA8:
	// lhz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_83259CB0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83259c80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83259C80;
loc_83259CB8:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83259c48
	if (cr6.eq) goto loc_83259C48;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83259120
	ctx.lr = 0x83259CCC;
	sub_83259120(ctx, base);
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

__attribute__((alias("__imp__sub_83259CE0"))) PPC_WEAK_FUNC(sub_83259CE0);
PPC_FUNC_IMPL(__imp__sub_83259CE0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// sth r11,8(r6)
	PPC_STORE_U16(ctx.r6.u32 + 8, ctx.r11.u16);
	// stb r11,10(r6)
	PPC_STORE_U8(ctx.r6.u32 + 10, ctx.r11.u8);
	// bne cr6,0x83259d1c
	if (!cr6.eq) goto loc_83259D1C;
loc_83259D08:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83259D1C:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83259d08
	if (cr6.eq) goto loc_83259D08;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ble cr6,0x83259d60
	if (!cr6.gt) goto loc_83259D60;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_83259D44:
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bgt cr6,0x83259d60
	if (cr6.gt) goto loc_83259D60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83259d44
	if (cr6.lt) goto loc_83259D44;
loc_83259D60:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83259d08
	if (cr6.eq) goto loc_83259D08;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83259120
	ctx.lr = 0x83259D74;
	sub_83259120(ctx, base);
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

__attribute__((alias("__imp__sub_83259D88"))) PPC_WEAK_FUNC(sub_83259D88);
PPC_FUNC_IMPL(__imp__sub_83259D88) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// sth r10,8(r6)
	PPC_STORE_U16(ctx.r6.u32 + 8, ctx.r10.u16);
	// stb r10,10(r6)
	PPC_STORE_U8(ctx.r6.u32 + 10, ctx.r10.u8);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83259dd4
	if (!cr6.eq) goto loc_83259DD4;
loc_83259DBC:
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83259DD4:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r31,r7,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83259e1c
	if (!cr6.eq) goto loc_83259E1C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83259e58
	if (!cr6.gt) goto loc_83259E58;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_83259DFC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x83259e4c
	if (cr6.eq) goto loc_83259E4C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83259dfc
	if (cr6.lt) goto loc_83259DFC;
	// b 0x83259e58
	goto loc_83259E58;
loc_83259E1C:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// ble cr6,0x83259e58
	if (!cr6.gt) goto loc_83259E58;
loc_83259E2C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x83259e4c
	if (cr6.eq) goto loc_83259E4C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83259e2c
	if (cr6.lt) goto loc_83259E2C;
	// b 0x83259e58
	goto loc_83259E58;
loc_83259E4C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_83259E58:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83259dbc
	if (cr6.eq) goto loc_83259DBC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83259120
	ctx.lr = 0x83259E6C;
	sub_83259120(ctx, base);
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

__attribute__((alias("__imp__sub_83259E84"))) PPC_WEAK_FUNC(sub_83259E84);
PPC_FUNC_IMPL(__imp__sub_83259E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259E88"))) PPC_WEAK_FUNC(sub_83259E88);
PPC_FUNC_IMPL(__imp__sub_83259E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83259E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83259ed0
	if (!cr6.gt) goto loc_83259ED0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83259EB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x83222030
	ctx.lr = 0x83259EBC;
	sub_83222030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83259eb0
	if (cr6.lt) goto loc_83259EB0;
loc_83259ED0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259ee4
	if (cr6.eq) goto loc_83259EE4;
	// bl 0x83209d68
	ctx.lr = 0x83259EE0;
	sub_83209D68(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_83259EE4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259EF4"))) PPC_WEAK_FUNC(sub_83259EF4);
PPC_FUNC_IMPL(__imp__sub_83259EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83259EF8"))) PPC_WEAK_FUNC(sub_83259EF8);
PPC_FUNC_IMPL(__imp__sub_83259EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83259F00;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// bne cr6,0x83259f24
	if (!cr6.eq) goto loc_83259F24;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83259F24:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r23,r10,15892
	ctx.r23.s64 = ctx.r10.s64 + 15892;
	// addi r22,r11,-22544
	ctx.r22.s64 = ctx.r11.s64 + -22544;
	// ble cr6,0x83259fd8
	if (!cr6.gt) goto loc_83259FD8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,15868
	ctx.r28.s64 = ctx.r11.s64 + 15868;
loc_83259F50:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add. r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83259f64
	if (!cr0.eq) goto loc_83259F64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x83259f70
	goto loc_83259F70;
loc_83259F64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83259F70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83259fc4
	if (cr6.eq) goto loc_83259FC4;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832083d0
	ctx.lr = 0x83259F90;
	sub_832083D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r21,-24
	ctx.r21.s64 = -24;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83259fa4
	if (cr6.eq) goto loc_83259FA4;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83259FA4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259fb8
	if (cr6.eq) goto loc_83259FB8;
	// bl 0x83209d68
	ctx.lr = 0x83259FB4;
	sub_83209D68(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_83259FB8:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_83259FC4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83259f50
	if (cr6.lt) goto loc_83259F50;
loc_83259FD8:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259fec
	if (cr6.eq) goto loc_83259FEC;
	// bl 0x83209d68
	ctx.lr = 0x83259FE8;
	sub_83209D68(ctx, base);
	// stw r27,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r27.u32);
loc_83259FEC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325a094
	if (!cr6.gt) goto loc_8325A094;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r21,-24
	ctx.r21.s64 = -24;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r25,r11,15848
	ctx.r25.s64 = ctx.r11.s64 + 15848;
loc_8325A00C:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83225c80
	ctx.lr = 0x8325A01C;
	sub_83225C80(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832083d0
	ctx.lr = 0x8325A030;
	sub_832083D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325a064
	if (!cr6.gt) goto loc_8325A064;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8325A044:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x83222030
	ctx.lr = 0x8325A050;
	sub_83222030(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325a044
	if (cr6.lt) goto loc_8325A044;
loc_8325A064:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325a078
	if (cr6.eq) goto loc_8325A078;
	// bl 0x83209d68
	ctx.lr = 0x8325A074;
	sub_83209D68(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_8325A078:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325a00c
	if (cr6.lt) goto loc_8325A00C;
loc_8325A094:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325a0a8
	if (cr6.eq) goto loc_8325A0A8;
	// bl 0x83209d68
	ctx.lr = 0x8325A0A4;
	sub_83209D68(ctx, base);
	// stw r27,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r27.u32);
loc_8325A0A8:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// stw r27,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r27.u32);
	// stw r27,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A0C4"))) PPC_WEAK_FUNC(sub_8325A0C4);
PPC_FUNC_IMPL(__imp__sub_8325A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A0C8"))) PPC_WEAK_FUNC(sub_8325A0C8);
PPC_FUNC_IMPL(__imp__sub_8325A0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8325A0D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83222be8
	ctx.lr = 0x8325A0F0;
	sub_83222BE8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8325a4bc
	if (!cr6.gt) goto loc_8325A4BC;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_8325A10C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8325a11c
	if (!cr6.eq) goto loc_8325A11C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8325a128
	goto loc_8325A128;
loc_8325A11C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8325A128:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325a1ac
	if (cr6.eq) goto loc_8325A1AC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8325a150
	if (!cr6.eq) goto loc_8325A150;
	// addic r11,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// subfe r11,r11,r25
	temp.u8 = (~ctx.r11.u32 + ctx.r25.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r25.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r25.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8325a1a0
	goto loc_8325A1A0;
loc_8325A150:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8325a160
	if (!cr6.eq) goto loc_8325A160;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8325a1a0
	goto loc_8325A1A0;
loc_8325A160:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf. r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x8325a194
	if (!cr0.eq) goto loc_8325A194;
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
loc_8325A174:
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8325a19c
	if (cr6.eq) goto loc_8325A19C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8325a174
	if (cr0.eq) goto loc_8325A174;
loc_8325A194:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8325a1a0
	goto loc_8325A1A0;
loc_8325A19C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8325A1A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325a1c0
	if (cr6.eq) goto loc_8325A1C0;
loc_8325A1AC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8325a10c
	if (cr6.lt) goto loc_8325A10C;
	// b 0x8325a4bc
	goto loc_8325A4BC;
loc_8325A1C0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831ffe38
	ctx.lr = 0x8325A1C8;
	sub_831FFE38(ctx, base);
	// li r11,1941
	ctx.r11.s64 = 1941;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r11.u16);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// bl 0x8322ab20
	ctx.lr = 0x8325A1EC;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325a208
	if (cr6.eq) goto loc_8325A208;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83221440
	ctx.lr = 0x8325A1FC;
	sub_83221440(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8325a20c
	if (!cr6.eq) goto loc_8325A20C;
loc_8325A208:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8325A20C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r31.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x832264e0
	ctx.lr = 0x8325A240;
	sub_832264E0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8322e2b8
	ctx.lr = 0x8325A25C;
	sub_8322E2B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8325a460
	if (!cr6.eq) goto loc_8325A460;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// xori r9,r11,43
	ctx.r9.u64 = ctx.r11.u64 ^ 43;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8325a4b4
	if (!cr6.eq) goto loc_8325A4B4;
	// xori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 ^ 8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8325a4b4
	if (!cr6.eq) goto loc_8325A4B4;
	// xori r11,r11,142
	ctx.r11.u64 = ctx.r11.u64 ^ 142;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8325a3f8
	if (cr6.eq) goto loc_8325A3F8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r3,106(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// addi r30,r1,120
	ctx.r30.s64 = ctx.r1.s64 + 120;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// sth r10,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r10.u16);
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r31.u16);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stb r29,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r29.u8);
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// sth r6,184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 184, ctx.r6.u16);
	// stb r3,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r3.u8);
	// ble cr6,0x8325a3d0
	if (!cr6.gt) goto loc_8325A3D0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8320db50
	ctx.lr = 0x8325A368;
	sub_8320DB50(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8325a3d0
	if (!cr6.gt) goto loc_8325A3D0;
	// li r30,16
	ctx.r30.s64 = 16;
loc_8325A39C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// beq cr6,0x8325a3b0
	if (cr6.eq) goto loc_8325A3B0;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
loc_8325A3B0:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x8325A3BC;
	sub_832240B8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325a39c
	if (cr6.lt) goto loc_8325A39C;
loc_8325A3D0:
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322d248
	ctx.lr = 0x8325A3E4;
	sub_8322D248(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8320d9e8
	ctx.lr = 0x8325A3EC;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83222030
	ctx.lr = 0x8325A3F4;
	sub_83222030(ctx, base);
	// b 0x8325a4b4
	goto loc_8325A4B4;
loc_8325A3F8:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8325a41c
	if (!cr6.eq) goto loc_8325A41C;
	// lhz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// bl 0x832277f8
	ctx.lr = 0x8325A40C;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8325a418
	if (!cr6.eq) goto loc_8325A418;
	// bl 0x83227908
	ctx.lr = 0x8325A418;
	sub_83227908(ctx, base);
loc_8325A418:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8325A41C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83225c80
	ctx.lr = 0x8325A424;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,15892
	ctx.r11.s64 = ctx.r11.s64 + 15892;
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// lis r4,-32221
	ctx.r4.s64 = -2111635456;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r9,15972
	ctx.r6.s64 = ctx.r9.s64 + 15972;
	// addi r7,r10,15964
	ctx.r7.s64 = ctx.r10.s64 + 15964;
	// addi r5,r5,15948
	ctx.r5.s64 = ctx.r5.s64 + 15948;
	// addi r4,r4,15920
	ctx.r4.s64 = ctx.r4.s64 + 15920;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8325A45C;
	sub_832085E8(ctx, base);
	// b 0x8325a4b4
	goto loc_8325A4B4;
loc_8325A460:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8325a488
	if (!cr6.eq) goto loc_8325A488;
	// lhz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// bl 0x832277f8
	ctx.lr = 0x8325A474;
	sub_832277F8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8325a488
	if (!cr6.eq) goto loc_8325A488;
	// bl 0x83227908
	ctx.lr = 0x8325A484;
	sub_83227908(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8325A488:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r4,-32221
	ctx.r4.s64 = -2111635456;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// addi r7,r11,15964
	ctx.r7.s64 = ctx.r11.s64 + 15964;
	// addi r6,r10,15972
	ctx.r6.s64 = ctx.r10.s64 + 15972;
	// addi r5,r9,15948
	ctx.r5.s64 = ctx.r9.s64 + 15948;
	// addi r4,r4,15900
	ctx.r4.s64 = ctx.r4.s64 + 15900;
	// addi r3,r3,15892
	ctx.r3.s64 = ctx.r3.s64 + 15892;
	// bl 0x832085e8
	ctx.lr = 0x8325A4B4;
	sub_832085E8(ctx, base);
loc_8325A4B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8325A4BC;
	sub_83222030(ctx, base);
loc_8325A4BC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8325a4cc
	if (cr6.eq) goto loc_8325A4CC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209d68
	ctx.lr = 0x8325A4CC;
	sub_83209D68(ctx, base);
loc_8325A4CC:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A4D4"))) PPC_WEAK_FUNC(sub_8325A4D4);
PPC_FUNC_IMPL(__imp__sub_8325A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A4D8"))) PPC_WEAK_FUNC(sub_8325A4D8);
PPC_FUNC_IMPL(__imp__sub_8325A4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8325A4E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r27,r11,24688
	ctx.r27.s64 = ctx.r11.s64 + 24688;
	// lwz r31,24688(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24688);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8325a574
	if (cr6.eq) goto loc_8325A574;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r26,44(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r25,48(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r24,20(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325a54c
	if (!cr6.gt) goto loc_8325A54C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8325A51C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8325a0c8
	ctx.lr = 0x8325A530;
	sub_8325A0C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83259e88
	ctx.lr = 0x8325A538;
	sub_83259E88(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325a51c
	if (cr6.lt) goto loc_8325A51C;
loc_8325A54C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325a564
	if (cr6.eq) goto loc_8325A564;
	// bl 0x83209d68
	ctx.lr = 0x8325A55C;
	sub_83209D68(ctx, base);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
loc_8325A564:
	// stw r24,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r24.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r26.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8325A574;
	sub_831FFDD8(ctx, base);
loc_8325A574:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A57C"))) PPC_WEAK_FUNC(sub_8325A57C);
PPC_FUNC_IMPL(__imp__sub_8325A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A580"))) PPC_WEAK_FUNC(sub_8325A580);
PPC_FUNC_IMPL(__imp__sub_8325A580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8325A588;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,24688(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24688);
	// addi r28,r11,24688
	ctx.r28.s64 = ctx.r11.s64 + 24688;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8325a5d0
	if (!cr6.eq) goto loc_8325A5D0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x8325A5B8;
	sub_83209AA8(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_8325A5D0:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8325a630
	if (!cr6.gt) goto loc_8325A630;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8325A5E8:
	// add. r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x8325a5f8
	if (!cr0.eq) goto loc_8325A5F8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8325a604
	goto loc_8325A604;
loc_8325A5F8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8325A604:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325a628
	if (cr6.eq) goto loc_8325A628;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325a5e8
	if (cr6.lt) goto loc_8325A5E8;
	// b 0x8325a630
	goto loc_8325A630;
loc_8325A628:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8325a678
	if (!cr6.eq) goto loc_8325A678;
loc_8325A630:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8325A648;
	sub_83209DF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r29,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_8325A678:
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8325a69c
	if (cr6.eq) goto loc_8325A69C;
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8325A69C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209c20
	ctx.lr = 0x8325A6A4;
	sub_83209C20(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A6B0"))) PPC_WEAK_FUNC(sub_8325A6B0);
PPC_FUNC_IMPL(__imp__sub_8325A6B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325A6B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31748
	ctx.r28.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,24688(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24688);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8325a6f4
	if (!cr6.eq) goto loc_8325A6F4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x8325A6DC;
	sub_83209AA8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r3,24688(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24688, ctx.r3.u32);
loc_8325A6F4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x8325A708;
	sub_83209DF8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r31,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,28(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8325a7c0
	if (!cr6.gt) goto loc_8325A7C0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r9,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8325A768;
	sub_83209AA8(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832240b8
	ctx.lr = 0x8325A784;
	sub_832240B8(ctx, base);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x8325a7c0
	if (!cr6.gt) goto loc_8325A7C0;
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
loc_8325A798:
	// stwu r31,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r30.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r27,r30
	ctx.r4.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x832240b8
	ctx.lr = 0x8325A7B0;
	sub_832240B8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325a798
	if (cr6.lt) goto loc_8325A798;
loc_8325A7C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A7C8"))) PPC_WEAK_FUNC(sub_8325A7C8);
PPC_FUNC_IMPL(__imp__sub_8325A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8325A7D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325a86c
	if (!cr6.gt) goto loc_8325A86C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8325A7F4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add. r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8325a808
	if (!cr0.eq) goto loc_8325A808;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8325a814
	goto loc_8325A814;
loc_8325A808:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8325A814:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325a858
	if (cr6.eq) goto loc_8325A858;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x8325a858
	if (!cr6.eq) goto loc_8325A858;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8325a838
	if (cr6.eq) goto loc_8325A838;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8325A838:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325a84c
	if (cr6.eq) goto loc_8325A84C;
	// bl 0x83209d68
	ctx.lr = 0x8325A848;
	sub_83209D68(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8325A84C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8325A858:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325a7f4
	if (cr6.lt) goto loc_8325A7F4;
loc_8325A86C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A874"))) PPC_WEAK_FUNC(sub_8325A874);
PPC_FUNC_IMPL(__imp__sub_8325A874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A878"))) PPC_WEAK_FUNC(sub_8325A878);
PPC_FUNC_IMPL(__imp__sub_8325A878) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1941
	cr6.compare<uint32_t>(ctx.r11.u32, 1941, xer);
	// beq cr6,0x8325a8a8
	if (cr6.eq) goto loc_8325A8A8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8325a8e0
	goto loc_8325A8E0;
loc_8325A8A8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83221440
	ctx.lr = 0x8325A8B0;
	sub_83221440(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x8325a8c8
	if (!cr6.eq) goto loc_8325A8C8;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x8320d900
	ctx.lr = 0x8325A8C4;
	sub_8320D900(ctx, base);
	// b 0x8325a8dc
	goto loc_8325A8DC;
loc_8325A8C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x8325A8DC;
	sub_8322DFB0(ctx, base);
loc_8325A8DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8325A8E0:
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

__attribute__((alias("__imp__sub_8325A8F8"))) PPC_WEAK_FUNC(sub_8325A8F8);
PPC_FUNC_IMPL(__imp__sub_8325A8F8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2386
	cr6.compare<uint32_t>(ctx.r11.u32, 2386, xer);
	// beq cr6,0x8325a998
	if (cr6.eq) goto loc_8325A998;
	// cmplwi cr6,r11,2726
	cr6.compare<uint32_t>(ctx.r11.u32, 2726, xer);
	// beq cr6,0x8325a930
	if (cr6.eq) goto loc_8325A930;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8325a9c4
	goto loc_8325A9C4;
loc_8325A930:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8325a94c
	if (cr6.eq) goto loc_8325A94C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,15948
	ctx.r3.s64 = ctx.r11.s64 + 15948;
	// bl 0x8320d088
	ctx.lr = 0x8325A94C;
	sub_8320D088(ctx, base);
loc_8325A94C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8325a9c0
	if (cr6.lt) goto loc_8325A9C0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222be8
	ctx.lr = 0x8325A984;
	sub_83222BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325a580
	ctx.lr = 0x8325A994;
	sub_8325A580(ctx, base);
	// b 0x8325a9c0
	goto loc_8325A9C0;
loc_8325A998:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x8325a9b8
	if (!cr6.lt) goto loc_8325A9B8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,15948
	ctx.r3.s64 = ctx.r11.s64 + 15948;
	// bl 0x8320d088
	ctx.lr = 0x8325A9B4;
	sub_8320D088(ctx, base);
	// b 0x8325a9c0
	goto loc_8325A9C0;
loc_8325A9B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325a6b0
	ctx.lr = 0x8325A9C0;
	sub_8325A6B0(ctx, base);
loc_8325A9C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8325A9C4:
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

__attribute__((alias("__imp__sub_8325A9DC"))) PPC_WEAK_FUNC(sub_8325A9DC);
PPC_FUNC_IMPL(__imp__sub_8325A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A9E0"))) PPC_WEAK_FUNC(sub_8325A9E0);
PPC_FUNC_IMPL(__imp__sub_8325A9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r11,26680
	ctx.r3.s64 = ctx.r11.s64 + 26680;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83294018
	sub_83294018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A9F4"))) PPC_WEAK_FUNC(sub_8325A9F4);
PPC_FUNC_IMPL(__imp__sub_8325A9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325A9F8"))) PPC_WEAK_FUNC(sub_8325A9F8);
PPC_FUNC_IMPL(__imp__sub_8325A9F8) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r11,26680
	ctx.r3.s64 = ctx.r11.s64 + 26680;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x8325AA18;
	sub_83294018(ctx, base);
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

__attribute__((alias("__imp__sub_8325AA2C"))) PPC_WEAK_FUNC(sub_8325AA2C);
PPC_FUNC_IMPL(__imp__sub_8325AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325AA30"))) PPC_WEAK_FUNC(sub_8325AA30);
PPC_FUNC_IMPL(__imp__sub_8325AA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,26680
	ctx.r6.s64 = ctx.r11.s64 + 26680;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,26680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26680);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r8,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r8.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r7,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// stw r9,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AA64"))) PPC_WEAK_FUNC(sub_8325AA64);
PPC_FUNC_IMPL(__imp__sub_8325AA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325AA68"))) PPC_WEAK_FUNC(sub_8325AA68);
PPC_FUNC_IMPL(__imp__sub_8325AA68) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1946
	cr6.compare<uint32_t>(ctx.r11.u32, 1946, xer);
	// beq cr6,0x8325aa94
	if (cr6.eq) goto loc_8325AA94;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8325AA94:
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x8320d760
	ctx.lr = 0x8325AA9C;
	sub_8320D760(ctx, base);
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

__attribute__((alias("__imp__sub_8325AAB0"))) PPC_WEAK_FUNC(sub_8325AAB0);
PPC_FUNC_IMPL(__imp__sub_8325AAB0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1220
	cr6.compare<uint32_t>(ctx.r11.u32, 1220, xer);
	// beq cr6,0x8325ab08
	if (cr6.eq) goto loc_8325AB08;
	// cmplwi cr6,r11,1221
	cr6.compare<uint32_t>(ctx.r11.u32, 1221, xer);
	// beq cr6,0x8325aae8
	if (cr6.eq) goto loc_8325AAE8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8325AAE8:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8325ab00
	if (cr6.eq) goto loc_8325AB00;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,15980
	ctx.r3.s64 = ctx.r11.s64 + 15980;
	// bl 0x8320d088
	ctx.lr = 0x8325AB00;
	sub_8320D088(ctx, base);
loc_8325AB00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8325ab24
	goto loc_8325AB24;
loc_8325AB08:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8325ab20
	if (cr6.eq) goto loc_8325AB20;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,15980
	ctx.r3.s64 = ctx.r11.s64 + 15980;
	// bl 0x8320d088
	ctx.lr = 0x8325AB20;
	sub_8320D088(ctx, base);
loc_8325AB20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8325AB24:
	// bl 0x83207028
	ctx.lr = 0x8325AB28;
	sub_83207028(ctx, base);
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

__attribute__((alias("__imp__sub_8325AB3C"))) PPC_WEAK_FUNC(sub_8325AB3C);
PPC_FUNC_IMPL(__imp__sub_8325AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325AB40"))) PPC_WEAK_FUNC(sub_8325AB40);
PPC_FUNC_IMPL(__imp__sub_8325AB40) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1554
	cr6.compare<uint32_t>(ctx.r11.u32, 1554, xer);
	// blt cr6,0x8325ab90
	if (cr6.lt) goto loc_8325AB90;
	// cmplwi cr6,r11,1558
	cr6.compare<uint32_t>(ctx.r11.u32, 1558, xer);
	// bgt cr6,0x8325ab90
	if (cr6.gt) goto loc_8325AB90;
	// addi r11,r11,-1554
	ctx.r11.s64 = ctx.r11.s64 + -1554;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,8856
	ctx.r8.s64 = ctx.r10.s64 + 8856;
	// lhzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x83223c38
	ctx.lr = 0x8325AB7C;
	sub_83223C38(ctx, base);
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
loc_8325AB90:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325ABA4"))) PPC_WEAK_FUNC(sub_8325ABA4);
PPC_FUNC_IMPL(__imp__sub_8325ABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325ABA8"))) PPC_WEAK_FUNC(sub_8325ABA8);
PPC_FUNC_IMPL(__imp__sub_8325ABA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325ABDC"))) PPC_WEAK_FUNC(sub_8325ABDC);
PPC_FUNC_IMPL(__imp__sub_8325ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325ABE0"))) PPC_WEAK_FUNC(sub_8325ABE0);
PPC_FUNC_IMPL(__imp__sub_8325ABE0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8325abf4
	if (!cr6.gt) goto loc_8325ABF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8325ABF4:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8325ac0c
	if (cr6.gt) goto loc_8325AC0C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8325AC0C:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8325ac24
	if (!cr6.gt) goto loc_8325AC24;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8325AC24:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8325ac40
	if (cr6.gt) goto loc_8325AC40;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_8325AC40:
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AC48"))) PPC_WEAK_FUNC(sub_8325AC48);
PPC_FUNC_IMPL(__imp__sub_8325AC48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8325ac5c
	if (cr6.gt) goto loc_8325AC5C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8325AC5C:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8325ac74
	if (!cr6.gt) goto loc_8325AC74;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8325AC74:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8325ac8c
	if (cr6.gt) goto loc_8325AC8C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8325AC8C:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8325aca8
	if (!cr6.gt) goto loc_8325ACA8;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_8325ACA8:
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325ACB0"))) PPC_WEAK_FUNC(sub_8325ACB0);
PPC_FUNC_IMPL(__imp__sub_8325ACB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r8,16
	ctx.r8.s64 = 16;
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r7,32
	ctx.r7.s64 = 32;
	// vor128 v59,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r6,48
	ctx.r6.s64 = 48;
	// vor128 v58,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r5,r10,24688
	ctx.r5.s64 = ctx.r10.s64 + 24688;
	// vrlimi128 v61,v62,8,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 8));
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v59,v62,2,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 2));
	// vrlimi128 v58,v62,1,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 1));
	// vcsxwfp128 v57,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vcsxwfp128 v56,v60,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vcsxwfp128 v55,v59,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vcsxwfp128 v54,v58,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// stvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325ad34
	if (!cr6.eq) goto loc_8325AD34;
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// blr 
	return;
loc_8325AD34:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stb r10,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AD44"))) PPC_WEAK_FUNC(sub_8325AD44);
PPC_FUNC_IMPL(__imp__sub_8325AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325AD48"))) PPC_WEAK_FUNC(sub_8325AD48);
PPC_FUNC_IMPL(__imp__sub_8325AD48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325AD50;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831fead8
	ctx.lr = 0x8325AD74;
	sub_831FEAD8(ctx, base);
	// lfs f11,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f6,f7,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f6,f7,f2,f4
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f4.f64));
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f5,f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f11.f64));
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fadds f4,f8,f3
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lfs f31,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fadds f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fsubs f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fdivs f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmadds f11,f7,f0,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f9,f6,f0,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8325ae08
	if (!cr6.lt) goto loc_8325AE08;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8325AE08:
	// lfs f8,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// ble cr6,0x8325ae18
	if (!cr6.gt) goto loc_8325AE18;
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_8325AE18:
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bge cr6,0x8325ae28
	if (!cr6.lt) goto loc_8325AE28;
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8325AE28:
	// lfs f11,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x8325ae38
	if (!cr6.gt) goto loc_8325AE38;
	// stfs f9,12(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_8325AE38:
	// lfs f11,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f7,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f1,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f5,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f8,f6,f7,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f6,f11,f2,f4
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f4,f1,f7,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fadds f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// fadds f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fsubs f9,f2,f13
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fsubs f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fdivs f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f11,f6,f0,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f9,f5,f0,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f30
	cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x8325aeb8
	if (!cr6.lt) goto loc_8325AEB8;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8325AEB8:
	// lfs f8,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// ble cr6,0x8325aec8
	if (!cr6.gt) goto loc_8325AEC8;
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_8325AEC8:
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bge cr6,0x8325aed8
	if (!cr6.lt) goto loc_8325AED8;
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8325AED8:
	// lfs f11,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x8325aee8
	if (!cr6.gt) goto loc_8325AEE8;
	// stfs f9,12(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_8325AEE8:
	// lfs f11,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f8,f6,f7,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f6,f7,f2,f4
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f5,f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fadds f4,f8,f3
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fsubs f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fdivs f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmadds f11,f7,f0,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f9,f6,f0,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8325af68
	if (!cr6.lt) goto loc_8325AF68;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8325AF68:
	// lfs f8,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// ble cr6,0x8325af78
	if (!cr6.gt) goto loc_8325AF78;
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_8325AF78:
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bge cr6,0x8325af88
	if (!cr6.lt) goto loc_8325AF88;
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8325AF88:
	// lfs f11,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x8325af98
	if (!cr6.gt) goto loc_8325AF98;
	// stfs f9,12(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_8325AF98:
	// lfs f11,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f8,f6,f7,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f6,f7,f2,f4
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f5,f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fadds f4,f8,f3
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fsubs f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fdivs f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmadds f13,f7,f0,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f6,f0,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x8325b018
	if (!cr6.lt) goto loc_8325B018;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8325B018:
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8325b028
	if (!cr6.gt) goto loc_8325B028;
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_8325B028:
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8325b038
	if (!cr6.lt) goto loc_8325B038;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8325B038:
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8325b048
	if (!cr6.gt) goto loc_8325B048;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_8325B048:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325B058"))) PPC_WEAK_FUNC(sub_8325B058);
PPC_FUNC_IMPL(__imp__sub_8325B058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b094
	if (cr6.eq) goto loc_8325B094;
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r7,24(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8325b094
	if (cr6.eq) goto loc_8325B094;
	// b 0x8325ad48
	sub_8325AD48(ctx, base);
	return;
loc_8325B094:
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v62,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v10,v63,187
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x44));
	// lvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v0,v62,5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFA));
	// vspltw128 v9,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v60,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v59,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v11,v60,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFA));
	// vpermwi128 v13,v59,5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFA));
	// vmaddfp v13,v13,v10,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v0,v9,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v0,v12,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vminfp128 v58,v11,v0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp128 v57,v11,v0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v56,v58,108
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x93));
	// vpermwi128 v55,v57,198
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x39));
	// vminfp128 v54,v58,v56
	simde_mm_store_ps(ctx.v54.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vmaxfp128 v53,v57,v55
	simde_mm_store_ps(ctx.v53.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vminfp128 v52,v61,v54
	simde_mm_store_ps(ctx.v52.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmaxfp128 v51,v61,v53
	simde_mm_store_ps(ctx.v51.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vrlimi128 v52,v51,5,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 228), 5));
	// stvx128 v52,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B100"))) PPC_WEAK_FUNC(sub_8325B100);
PPC_FUNC_IMPL(__imp__sub_8325B100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8325b118
	if (cr6.gt) goto loc_8325B118;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x8325b11c
	goto loc_8325B11C;
loc_8325B118:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_8325B11C:
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8325b138
	if (!cr6.gt) goto loc_8325B138;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x8325b13c
	goto loc_8325B13C;
loc_8325B138:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
loc_8325B13C:
	// stfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8325b158
	if (cr6.gt) goto loc_8325B158;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x8325b15c
	goto loc_8325B15C;
loc_8325B158:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_8325B15C:
	// stfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8325b174
	if (cr6.gt) goto loc_8325B174;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8325B174:
	// stfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x8325b190
	if (cr6.lt) goto loc_8325B190;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8325b190
	if (cr6.lt) goto loc_8325B190;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8325B190:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8325abe0
	sub_8325ABE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325B1A8"))) PPC_WEAK_FUNC(sub_8325B1A8);
PPC_FUNC_IMPL(__imp__sub_8325B1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B1AC"))) PPC_WEAK_FUNC(sub_8325B1AC);
PPC_FUNC_IMPL(__imp__sub_8325B1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B1B0"))) PPC_WEAK_FUNC(sub_8325B1B0);
PPC_FUNC_IMPL(__imp__sub_8325B1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8325b1dc
	if (cr6.lt) goto loc_8325B1DC;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8325b1dc
	if (cr6.lt) goto loc_8325B1DC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8325B1DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325b1f8
	if (!cr6.eq) goto loc_8325B1F8;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8325B1F8:
	// lvx128 v62,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B208"))) PPC_WEAK_FUNC(sub_8325B208);
PPC_FUNC_IMPL(__imp__sub_8325B208) {
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
	ctx.lr = 0x8325B210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// sth r4,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r4.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic r5,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// mullw r11,r4,r29
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// sth r28,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r28.u16);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r8,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r8.u8);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbz r6,25344(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25344);
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8325b28c
	if (cr6.eq) goto loc_8325B28C;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8325B28C:
	// bl 0x83209778
	ctx.lr = 0x8325B290;
	sub_83209778(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// neg r10,r3
	ctx.r10.s64 = -ctx.r3.s64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic. r9,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r9.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// sth r10,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r10.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble 0x8325b2d8
	if (!cr0.gt) goto loc_8325B2D8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325B2C4:
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bdnz 0x8325b2c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325B2C4;
loc_8325B2D8:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b300
	if (cr6.eq) goto loc_8325B300;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83294018
	ctx.lr = 0x8325B300;
	sub_83294018(ctx, base);
loc_8325B300:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325B308"))) PPC_WEAK_FUNC(sub_8325B308);
PPC_FUNC_IMPL(__imp__sub_8325B308) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b370
	if (cr6.eq) goto loc_8325B370;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b34c
	if (cr6.eq) goto loc_8325B34C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16004
	ctx.r4.s64 = ctx.r11.s64 + 16004;
	// addi r3,r10,15988
	ctx.r3.s64 = ctx.r10.s64 + 15988;
	// bl 0x832083d0
	ctx.lr = 0x8325B34C;
	sub_832083D0(ctx, base);
loc_8325B34C:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x832097a8
	ctx.lr = 0x8325B35C;
	sub_832097A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8325B370:
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

__attribute__((alias("__imp__sub_8325B384"))) PPC_WEAK_FUNC(sub_8325B384);
PPC_FUNC_IMPL(__imp__sub_8325B384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B388"))) PPC_WEAK_FUNC(sub_8325B388);
PPC_FUNC_IMPL(__imp__sub_8325B388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325B390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325b3b0
	if (!cr6.eq) goto loc_8325B3B0;
loc_8325B3A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325B3B0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8325b3a4
	if (cr6.eq) goto loc_8325B3A4;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srawi r6,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 4;
	// sth r7,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r7.u16);
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8325b450
	if (!cr0.eq) goto loc_8325B450;
	// rlwinm r11,r8,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b428
	if (cr6.eq) goto loc_8325B428;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
loc_8325B410:
	// stvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// bdnz 0x8325b410
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325B410;
loc_8325B428:
	// rlwinm r11,r8,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b49c
	if (cr6.eq) goto loc_8325B49C;
	// stvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// rlwinm r5,r11,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// bl 0x831cee08
	ctx.lr = 0x8325B44C;
	sub_831CEE08(ctx, base);
	// b 0x8325b49c
	goto loc_8325B49C;
loc_8325B450:
	// rlwinm r9,r8,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8325b480
	if (cr6.eq) goto loc_8325B480;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325B468:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8325b468
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325B468;
loc_8325B480:
	// rlwinm r9,r8,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8325b49c
	if (cr6.eq) goto loc_8325B49C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325B494:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8325b494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325B494;
loc_8325B49C:
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b4cc
	if (cr6.eq) goto loc_8325B4CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// twllei r9,0
	// divwu r29,r8,r9
	ctx.r29.u32 = PPCDivide(ctx.r8.u32, ctx.r9.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83204f38
	ctx.lr = 0x8325B4C8;
	sub_83204F38(ctx, base);
	// stbx r3,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
loc_8325B4CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325B4D8"))) PPC_WEAK_FUNC(sub_8325B4D8);
PPC_FUNC_IMPL(__imp__sub_8325B4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8325B4E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b550
	if (cr6.eq) goto loc_8325B550;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8325B504:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325b388
	ctx.lr = 0x8325B514;
	sub_8325B388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8325b650
	if (!cr6.eq) goto loc_8325B650;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8325b534
	if (!cr6.eq) goto loc_8325B534;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325b534
	if (!cr6.eq) goto loc_8325B534;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8325B534:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325b504
	if (cr6.lt) goto loc_8325B504;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8325b588
	if (!cr6.eq) goto loc_8325B588;
loc_8325B550:
	// lhz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8325b5ac
	if (!cr6.lt) goto loc_8325B5AC;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x8325b5ac
	if (cr0.eq) goto loc_8325B5AC;
loc_8325B588:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// bl 0x8325b208
	ctx.lr = 0x8325B59C;
	sub_8325B208(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8325b388
	ctx.lr = 0x8325B5A4;
	sub_8325B388(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8325b650
	if (!cr6.eq) goto loc_8325B650;
loc_8325B5AC:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x8325B5C8;
	sub_83209DF8(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bge cr6,0x8325b60c
	if (!cr6.lt) goto loc_8325B60C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325B5EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// sth r26,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r26.u16);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// bdnz 0x8325b5ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325B5EC;
loc_8325B60C:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325b208
	ctx.lr = 0x8325B638;
	sub_8325B208(ctx, base);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// sth r29,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r29.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
	// bl 0x8325b388
	ctx.lr = 0x8325B650;
	sub_8325B388(ctx, base);
loc_8325B650:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325B658"))) PPC_WEAK_FUNC(sub_8325B658);
PPC_FUNC_IMPL(__imp__sub_8325B658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325B660;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b6fc
	if (cr6.eq) goto loc_8325B6FC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
loc_8325B68C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x8325b6d0
	if (cr6.gt) goto loc_8325B6D0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x8325b6d0
	if (!cr6.lt) goto loc_8325B6D0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lhz r4,18(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// add r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// sth r3,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r3.u16);
	// b 0x8325b6d4
	goto loc_8325B6D4;
loc_8325B6D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8325B6D4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325b6f8
	if (!cr6.eq) goto loc_8325B6F8;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325b68c
	if (cr6.lt) goto loc_8325B68C;
	// b 0x8325b6fc
	goto loc_8325B6FC;
loc_8325B6F8:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8325B6FC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325b72c
	if (!cr6.eq) goto loc_8325B72C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16028
	ctx.r4.s64 = ctx.r11.s64 + 16028;
	// addi r3,r10,15988
	ctx.r3.s64 = ctx.r10.s64 + 15988;
	// bl 0x832085e8
	ctx.lr = 0x8325B720;
	sub_832085E8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8325B72C:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// blt cr6,0x8325b7a8
	if (cr6.lt) goto loc_8325B7A8;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b7a0
	if (cr6.eq) goto loc_8325B7A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8325B75C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b78c
	if (cr6.eq) goto loc_8325B78C;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325b78c
	if (!cr6.eq) goto loc_8325B78C;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x8325b78c
	if (!cr0.lt) goto loc_8325B78C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8325b308
	ctx.lr = 0x8325B78C;
	sub_8325B308(ctx, base);
loc_8325B78C:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325b75c
	if (cr6.lt) goto loc_8325B75C;
loc_8325B7A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_8325B7A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325B7B4"))) PPC_WEAK_FUNC(sub_8325B7B4);
PPC_FUNC_IMPL(__imp__sub_8325B7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325B7B8"))) PPC_WEAK_FUNC(sub_8325B7B8);
PPC_FUNC_IMPL(__imp__sub_8325B7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8325B7C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r23,r11,26752
	ctx.r23.s64 = ctx.r11.s64 + 26752;
	// addi r26,r10,16048
	ctx.r26.s64 = ctx.r10.s64 + 16048;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r31,r23,13
	ctx.r31.s64 = ctx.r23.s64 + 13;
	// addi r28,r26,6
	ctx.r28.s64 = ctx.r26.s64 + 6;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r11,-20092
	ctx.r24.s64 = ctx.r11.s64 + -20092;
loc_8325B7F0:
	// lhz r10,-2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + -2);
	// addi r29,r31,-13
	ctx.r29.s64 = ctx.r31.s64 + -13;
	// lwz r7,2(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2);
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r8,-6(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6);
	// bne cr6,0x8325b810
	if (!cr6.eq) goto loc_8325B810;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8325B810:
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bge cr6,0x8325b81c
	if (!cr6.lt) goto loc_8325B81C;
	// li r8,4
	ctx.r8.s64 = 4;
loc_8325B81C:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bge cr6,0x8325b828
	if (!cr6.lt) goto loc_8325B828;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8325B828:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r11,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// slw r6,r27,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// ble cr6,0x8325b840
	if (!cr6.gt) goto loc_8325B840;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8325B840:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// sth r30,-7(r31)
	PPC_STORE_U16(ctx.r31.u32 + -7, ctx.r30.u16);
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// subfic r9,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r9.s64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// slw r6,r27,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addic r8,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// andc r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// sth r5,-11(r31)
	PPC_STORE_U16(ctx.r31.u32 + -11, ctx.r5.u16);
	// and r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ctx.r9.u64;
	// subfic r9,r3,31
	xer.ca = ctx.r3.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r3.s64;
	// stb r8,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r8.u8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// slw r4,r27,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addic r8,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// sth r3,-9(r31)
	PPC_STORE_U16(ctx.r31.u32 + -9, ctx.r3.u16);
	// and r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 & ctx.r9.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x8325b8b8
	if (cr6.eq) goto loc_8325B8B8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8325B8B8:
	// stw r11,3(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3, ctx.r11.u32);
	// li r3,768
	ctx.r3.s64 = 768;
	// sth r25,-5(r31)
	PPC_STORE_U16(ctx.r31.u32 + -5, ctx.r25.u16);
	// bl 0x83209778
	ctx.lr = 0x8325B8C8;
	sub_83209778(ctx, base);
	// lhz r11,-5(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -5);
	// stw r3,11(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b90c
	if (cr6.eq) goto loc_8325B90C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8325B8E0:
	// lwz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// sth r30,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r30.u16);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lhz r11,-5(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -5);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325b8e0
	if (cr6.lt) goto loc_8325B8E0;
loc_8325B90C:
	// lhz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r4,2(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8325b208
	ctx.lr = 0x8325B920;
	sub_8325B208(ctx, base);
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r10,r26,186
	ctx.r10.s64 = ctx.r26.s64 + 186;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// sth r8,10(r29)
	PPC_STORE_U16(ctx.r29.u32 + 10, ctx.r8.u16);
	// blt cr6,0x8325b7f0
	if (cr6.lt) goto loc_8325B7F0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,420(r23)
	PPC_STORE_U32(ctx.r23.u32 + 420, ctx.r30.u32);
	// stw r30,424(r23)
	PPC_STORE_U32(ctx.r23.u32 + 424, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325B958"))) PPC_WEAK_FUNC(sub_8325B958);
PPC_FUNC_IMPL(__imp__sub_8325B958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8325B960;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r23,r11,26752
	ctx.r23.s64 = ctx.r11.s64 + 26752;
	// lwz r3,420(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325b97c
	if (cr6.eq) goto loc_8325B97C;
	// bl 0x83209d68
	ctx.lr = 0x8325B97C;
	sub_83209D68(ctx, base);
loc_8325B97C:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r23,10
	ctx.r30.s64 = ctx.r23.s64 + 10;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,424(r23)
	PPC_STORE_U32(ctx.r23.u32 + 424, ctx.r26.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,420(r23)
	PPC_STORE_U32(ctx.r23.u32 + 420, ctx.r26.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r25,r10,15988
	ctx.r25.s64 = ctx.r10.s64 + 15988;
	// addi r24,r11,16004
	ctx.r24.s64 = ctx.r11.s64 + 16004;
loc_8325B9A4:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r27,r30,-10
	ctx.r27.s64 = ctx.r30.s64 + -10;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325ba20
	if (cr6.eq) goto loc_8325BA20;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8325B9BC:
	// lwz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325ba0c
	if (cr6.eq) goto loc_8325BA0C;
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325b9ec
	if (cr6.eq) goto loc_8325B9EC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832083d0
	ctx.lr = 0x8325B9EC;
	sub_832083D0(ctx, base);
loc_8325B9EC:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x832097a8
	ctx.lr = 0x8325B9FC;
	sub_832097A8(ctx, base);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// sth r26,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r26.u16);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_8325BA0C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325b9bc
	if (cr6.lt) goto loc_8325B9BC;
loc_8325BA20:
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x832097a8
	ctx.lr = 0x8325BA28;
	sub_832097A8(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83294018
	ctx.lr = 0x8325BA38;
	sub_83294018(ctx, base);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r11,r23,430
	ctx.r11.s64 = ctx.r23.s64 + 430;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325b9a4
	if (cr6.lt) goto loc_8325B9A4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325BA50"))) PPC_WEAK_FUNC(sub_8325BA50);
PPC_FUNC_IMPL(__imp__sub_8325BA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8325BA58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r11,26752
	ctx.r24.s64 = ctx.r11.s64 + 26752;
	// addi r29,r24,10
	ctx.r29.s64 = ctx.r24.s64 + 10;
loc_8325BA6C:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r27,r29,-10
	ctx.r27.s64 = ctx.r29.s64 + -10;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x8325bae0
	if (!cr6.gt) goto loc_8325BAE0;
	// li r30,24
	ctx.r30.s64 = 24;
loc_8325BA88:
	// lwz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325bacc
	if (cr6.eq) goto loc_8325BACC;
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325bab0
	if (cr6.eq) goto loc_8325BAB0;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// b 0x8325bacc
	goto loc_8325BACC;
loc_8325BAB0:
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x832097a8
	ctx.lr = 0x8325BABC;
	sub_832097A8(ctx, base);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// sth r25,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r25.u16);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_8325BACC:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325ba88
	if (cr6.lt) goto loc_8325BA88;
loc_8325BAE0:
	// lhz r10,10(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 10);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8325bb2c
	if (cr6.eq) goto loc_8325BB2C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// sth r11,10(r27)
	PPC_STORE_U16(ctx.r27.u32 + 10, ctx.r11.u16);
	// rlwinm r11,r9,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8325bb2c
	if (cr6.eq) goto loc_8325BB2C;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r11,r11,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// sth r10,8(r27)
	PPC_STORE_U16(ctx.r27.u32 + 8, ctx.r10.u16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x8325BB28;
	sub_83209DF8(ctx, base);
	// stw r3,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r3.u32);
loc_8325BB2C:
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r11,r24,430
	ctx.r11.s64 = ctx.r24.s64 + 430;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325ba6c
	if (cr6.lt) goto loc_8325BA6C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325BB44"))) PPC_WEAK_FUNC(sub_8325BB44);
PPC_FUNC_IMPL(__imp__sub_8325BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325BB48"))) PPC_WEAK_FUNC(sub_8325BB48);
PPC_FUNC_IMPL(__imp__sub_8325BB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8325BB50;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbz r10,25344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325bcb4
	if (cr6.eq) goto loc_8325BCB4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r20,r11,26752
	ctx.r20.s64 = ctx.r11.s64 + 26752;
	// addi r23,r20,10
	ctx.r23.s64 = ctx.r20.s64 + 10;
loc_8325BB78:
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325bca4
	if (cr6.eq) goto loc_8325BCA4;
	// li r22,0
	ctx.r22.s64 = 0;
loc_8325BB8C:
	// lwz r11,14(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14);
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r11,23(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 23);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325bc90
	if (cr6.eq) goto loc_8325BC90;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8325bc90
	if (cr6.eq) goto loc_8325BC90;
	// lhz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325bc90
	if (cr6.eq) goto loc_8325BC90;
	// lhz r25,-10(r23)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r23.u32 + -10);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x8325bc90
	if (!cr6.gt) goto loc_8325BC90;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8325BBD4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,128
	cr6.compare<uint32_t>(ctx.r26.u32, 128, xer);
	// ble cr6,0x8325bbe4
	if (!cr6.gt) goto loc_8325BBE4;
	// li r31,128
	ctx.r31.s64 = 128;
loc_8325BBE4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83294018
	ctx.lr = 0x8325BBF4;
	sub_83294018(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325bc40
	if (cr6.eq) goto loc_8325BC40;
loc_8325BC04:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lhz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// twllei r8,0
	// divwu r6,r7,r8
	ctx.r6.u32 = PPCDivide(ctx.r7.u32, ctx.r8.u32);
	// subf. r11,r30,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8325bc34
	if (cr0.lt) goto loc_8325BC34;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bge cr6,0x8325bc34
	if (!cr6.lt) goto loc_8325BC34;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r28,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r28.u8);
loc_8325BC34:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8325bc04
	if (!cr6.eq) goto loc_8325BC04;
loc_8325BC40:
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, xer);
	// bge cr6,0x8325bc80
	if (!cr6.lt) goto loc_8325BC80;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8325bc80
	if (!cr6.gt) goto loc_8325BC80;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8325BC5C:
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8325bc74
	if (!cr6.eq) goto loc_8325BC74;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stbx r28,r9,r24
	PPC_STORE_U8(ctx.r9.u32 + ctx.r24.u32, ctx.r28.u8);
loc_8325BC74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bdnz 0x8325bc5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325BC5C;
loc_8325BC80:
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// addi r26,r26,-128
	ctx.r26.s64 = ctx.r26.s64 + -128;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, xer);
	// blt cr6,0x8325bbd4
	if (cr6.lt) goto loc_8325BBD4;
loc_8325BC90:
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,24
	ctx.r22.s64 = ctx.r22.s64 + 24;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325bb8c
	if (cr6.lt) goto loc_8325BB8C;
loc_8325BCA4:
	// addi r23,r23,28
	ctx.r23.s64 = ctx.r23.s64 + 28;
	// addi r11,r20,430
	ctx.r11.s64 = ctx.r20.s64 + 430;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325bb78
	if (cr6.lt) goto loc_8325BB78;
loc_8325BCB4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325BCBC"))) PPC_WEAK_FUNC(sub_8325BCBC);
PPC_FUNC_IMPL(__imp__sub_8325BCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325BCC0"))) PPC_WEAK_FUNC(sub_8325BCC0);
PPC_FUNC_IMPL(__imp__sub_8325BCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8325BCC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lbz r10,25344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325bdb0
	if (cr6.eq) goto loc_8325BDB0;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r23,r11,26752
	ctx.r23.s64 = ctx.r11.s64 + 26752;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r30,r23,10
	ctx.r30.s64 = ctx.r23.s64 + 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r9,15988
	ctx.r26.s64 = ctx.r9.s64 + 15988;
	// addi r25,r10,16344
	ctx.r25.s64 = ctx.r10.s64 + 16344;
	// addi r24,r11,-22544
	ctx.r24.s64 = ctx.r11.s64 + -22544;
loc_8325BD04:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325bda0
	if (cr6.eq) goto loc_8325BDA0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8325BD18:
	// lwz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,23(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325bd8c
	if (!cr6.eq) goto loc_8325BD8C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325bd8c
	if (cr6.eq) goto loc_8325BD8C;
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325bd5c
	if (cr6.eq) goto loc_8325BD5C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832083d0
	ctx.lr = 0x8325BD58;
	sub_832083D0(ctx, base);
	// b 0x8325bd8c
	goto loc_8325BD8C;
loc_8325BD5C:
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x832097a8
	ctx.lr = 0x8325BD68;
	sub_832097A8(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// sth r29,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r29.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lhz r6,-6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + -6);
	// lhz r5,-10(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + -10);
	// lhz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + -8);
	// bl 0x8325b208
	ctx.lr = 0x8325BD8C;
	sub_8325B208(ctx, base);
loc_8325BD8C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325bd18
	if (cr6.lt) goto loc_8325BD18;
loc_8325BDA0:
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r11,r23,430
	ctx.r11.s64 = ctx.r23.s64 + 430;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325bd04
	if (cr6.lt) goto loc_8325BD04;
loc_8325BDB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325BDB8"))) PPC_WEAK_FUNC(sub_8325BDB8);
PPC_FUNC_IMPL(__imp__sub_8325BDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stw r3,27200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27200, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BDC4"))) PPC_WEAK_FUNC(sub_8325BDC4);
PPC_FUNC_IMPL(__imp__sub_8325BDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325BDC8"))) PPC_WEAK_FUNC(sub_8325BDC8);
PPC_FUNC_IMPL(__imp__sub_8325BDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325BDD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r5,15
	ctx.r10.s64 = ctx.r5.s64 + 15;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r10,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8325be0c
	if (!cr6.lt) goto loc_8325BE0C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r10,27200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325BE08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8325BE0C:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8325be3c
	if (!cr6.lt) goto loc_8325BE3C;
loc_8325BE24:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// dcbzl r7,r8
	memset(base + ((ctx.r7.u32 + ctx.r8.u32) & ~127), 0, 128);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8325be24
	if (cr6.lt) goto loc_8325BE24;
loc_8325BE3C:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthx r7,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// sth r30,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r30.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325BE68"))) PPC_WEAK_FUNC(sub_8325BE68);
PPC_FUNC_IMPL(__imp__sub_8325BE68) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r30,r11,27200
	ctx.r30.s64 = ctx.r11.s64 + 27200;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8325beb4
	if (cr6.eq) goto loc_8325BEB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8325BEA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// subf r3,r10,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r10.s64;
	// bl 0x83209d68
	ctx.lr = 0x8325BEAC;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8325BEB4:
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

__attribute__((alias("__imp__sub_8325BECC"))) PPC_WEAK_FUNC(sub_8325BECC);
PPC_FUNC_IMPL(__imp__sub_8325BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325BED0"))) PPC_WEAK_FUNC(sub_8325BED0);
PPC_FUNC_IMPL(__imp__sub_8325BED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8325BEE8"))) PPC_WEAK_FUNC(sub_8325BEE8);
PPC_FUNC_IMPL(__imp__sub_8325BEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8325bdc8
	sub_8325BDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325BF00"))) PPC_WEAK_FUNC(sub_8325BF00);
PPC_FUNC_IMPL(__imp__sub_8325BF00) {
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
	// lis r30,-31748
	ctx.r30.s64 = -2080636928;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r30,27200
	ctx.r11.s64 = ctx.r30.s64 + 27200;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325bdc8
	ctx.lr = 0x8325BF30;
	sub_8325BDC8(ctx, base);
	// lwz r10,27200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325BF40;
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

__attribute__((alias("__imp__sub_8325BF58"))) PPC_WEAK_FUNC(sub_8325BF58);
PPC_FUNC_IMPL(__imp__sub_8325BF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8325BF60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x8325bdc8
	ctx.lr = 0x8325BF94;
	sub_8325BDC8(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325BFB4"))) PPC_WEAK_FUNC(sub_8325BFB4);
PPC_FUNC_IMPL(__imp__sub_8325BFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325BFB8"))) PPC_WEAK_FUNC(sub_8325BFB8);
PPC_FUNC_IMPL(__imp__sub_8325BFB8) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325BFE4;
	sub_8325BDC8(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8325BFFC"))) PPC_WEAK_FUNC(sub_8325BFFC);
PPC_FUNC_IMPL(__imp__sub_8325BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C000"))) PPC_WEAK_FUNC(sub_8325C000);
PPC_FUNC_IMPL(__imp__sub_8325C000) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C02C;
	sub_8325BDC8(ctx, base);
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r8,r9,24688
	ctx.r8.s64 = ctx.r9.s64 + 24688;
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8325C054"))) PPC_WEAK_FUNC(sub_8325C054);
PPC_FUNC_IMPL(__imp__sub_8325C054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C058"))) PPC_WEAK_FUNC(sub_8325C058);
PPC_FUNC_IMPL(__imp__sub_8325C058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325C060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x8325c0a0
	if (!cr6.eq) goto loc_8325C0A0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8325bdc8
	ctx.lr = 0x8325C090;
	sub_8325BDC8(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325C0A0:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8325bdc8
	ctx.lr = 0x8325C0AC;
	sub_8325BDC8(ctx, base);
	// cmpwi cr6,r31,100
	cr6.compare<int32_t>(ctx.r31.s32, 100, xer);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// bgt cr6,0x8325c164
	if (cr6.gt) goto loc_8325C164;
	// beq cr6,0x8325c16c
	if (cr6.eq) goto loc_8325C16C;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// bgt cr6,0x8325c17c
	if (cr6.gt) goto loc_8325C17C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8325c104
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8325C104;
	// bdzf 4*cr6+eq,0x8325c11c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8325C11C;
	// bdzf 4*cr6+eq,0x8325c134
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8325C134;
	// bdzf 4*cr6+eq,0x8325c0ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8325C0EC;
	// bdzf 4*cr6+eq,0x8325c17c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8325C17C;
	// bdzf 4*cr6+eq,0x8325c14c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8325C14C;
	// bne cr6,0x8325c0ec
	if (!cr6.eq) goto loc_8325C0EC;
loc_8325C0EC:
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83293ec8
	ctx.lr = 0x8325C0FC;
	sub_83293EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325C104:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83293ec8
	ctx.lr = 0x8325C114;
	sub_83293EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325C11C:
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83293ec8
	ctx.lr = 0x8325C12C;
	sub_83293EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325C134:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83293ec8
	ctx.lr = 0x8325C144;
	sub_83293EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325C14C:
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83293ec8
	ctx.lr = 0x8325C15C;
	sub_83293EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325C164:
	// cmpwi cr6,r31,101
	cr6.compare<int32_t>(ctx.r31.s32, 101, xer);
	// bne cr6,0x8325c17c
	if (!cr6.eq) goto loc_8325C17C;
loc_8325C16C:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83293ec8
	ctx.lr = 0x8325C17C;
	sub_83293EC8(ctx, base);
loc_8325C17C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C184"))) PPC_WEAK_FUNC(sub_8325C184);
PPC_FUNC_IMPL(__imp__sub_8325C184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C188"))) PPC_WEAK_FUNC(sub_8325C188);
PPC_FUNC_IMPL(__imp__sub_8325C188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325C190;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8325bdc8
	ctx.lr = 0x8325C1BC;
	sub_8325BDC8(ctx, base);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x831ce980
	ctx.lr = 0x8325C1D8;
	sub_831CE980(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C1E4"))) PPC_WEAK_FUNC(sub_8325C1E4);
PPC_FUNC_IMPL(__imp__sub_8325C1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C1E8"))) PPC_WEAK_FUNC(sub_8325C1E8);
PPC_FUNC_IMPL(__imp__sub_8325C1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8325C1F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8325bdc8
	ctx.lr = 0x8325C21C;
	sub_8325BDC8(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C26C"))) PPC_WEAK_FUNC(sub_8325C26C);
PPC_FUNC_IMPL(__imp__sub_8325C26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C270"))) PPC_WEAK_FUNC(sub_8325C270);
PPC_FUNC_IMPL(__imp__sub_8325C270) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C29C;
	sub_8325BDC8(ctx, base);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r7,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r6,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r6.u64);
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

__attribute__((alias("__imp__sub_8325C2CC"))) PPC_WEAK_FUNC(sub_8325C2CC);
PPC_FUNC_IMPL(__imp__sub_8325C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C2D0"))) PPC_WEAK_FUNC(sub_8325C2D0);
PPC_FUNC_IMPL(__imp__sub_8325C2D0) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C2FC;
	sub_8325BDC8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325C30C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8325c30c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325C30C;
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

__attribute__((alias("__imp__sub_8325C32C"))) PPC_WEAK_FUNC(sub_8325C32C);
PPC_FUNC_IMPL(__imp__sub_8325C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C330"))) PPC_WEAK_FUNC(sub_8325C330);
PPC_FUNC_IMPL(__imp__sub_8325C330) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8325c394
	if (cr6.eq) goto loc_8325C394;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8325bdc8
	ctx.lr = 0x8325C364;
	sub_8325BDC8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325C374:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8325c374
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325C374;
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
loc_8325C394:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x8325bdc8
	ctx.lr = 0x8325C3A0;
	sub_8325BDC8(ctx, base);
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

__attribute__((alias("__imp__sub_8325C3B4"))) PPC_WEAK_FUNC(sub_8325C3B4);
PPC_FUNC_IMPL(__imp__sub_8325C3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C3B8"))) PPC_WEAK_FUNC(sub_8325C3B8);
PPC_FUNC_IMPL(__imp__sub_8325C3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325C3C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325C3F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325C410;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C418"))) PPC_WEAK_FUNC(sub_8325C418);
PPC_FUNC_IMPL(__imp__sub_8325C418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325C420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325C448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325C460;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C468"))) PPC_WEAK_FUNC(sub_8325C468);
PPC_FUNC_IMPL(__imp__sub_8325C468) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C494;
	sub_8325BDC8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_8325C4C8"))) PPC_WEAK_FUNC(sub_8325C4C8);
PPC_FUNC_IMPL(__imp__sub_8325C4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325C4D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325C4F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325C510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C518"))) PPC_WEAK_FUNC(sub_8325C518);
PPC_FUNC_IMPL(__imp__sub_8325C518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325C520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325C548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325C560;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C568"))) PPC_WEAK_FUNC(sub_8325C568);
PPC_FUNC_IMPL(__imp__sub_8325C568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325C570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325C598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325C5B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C5B8"))) PPC_WEAK_FUNC(sub_8325C5B8);
PPC_FUNC_IMPL(__imp__sub_8325C5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325C5C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325C5E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325C600;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C608"))) PPC_WEAK_FUNC(sub_8325C608);
PPC_FUNC_IMPL(__imp__sub_8325C608) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83296ba8
	ctx.lr = 0x8325C624;
	sub_83296BA8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r5,r3,6
	ctx.r5.s64 = ctx.r3.s64 + 6;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C640;
	sub_8325BDC8(ctx, base);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83296be0
	ctx.lr = 0x8325C650;
	sub_83296BE0(ctx, base);
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

__attribute__((alias("__imp__sub_8325C668"))) PPC_WEAK_FUNC(sub_8325C668);
PPC_FUNC_IMPL(__imp__sub_8325C668) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83296ba8
	ctx.lr = 0x8325C684;
	sub_83296BA8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r5,r3,6
	ctx.r5.s64 = ctx.r3.s64 + 6;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C6A0;
	sub_8325BDC8(ctx, base);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83296be0
	ctx.lr = 0x8325C6B0;
	sub_83296BE0(ctx, base);
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

__attribute__((alias("__imp__sub_8325C6C8"))) PPC_WEAK_FUNC(sub_8325C6C8);
PPC_FUNC_IMPL(__imp__sub_8325C6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8325bdc8
	sub_8325BDC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C6E0"))) PPC_WEAK_FUNC(sub_8325C6E0);
PPC_FUNC_IMPL(__imp__sub_8325C6E0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83296ba8
	ctx.lr = 0x8325C704;
	sub_83296BA8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C720;
	sub_8325BDC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// bl 0x83296be0
	ctx.lr = 0x8325C738;
	sub_83296BE0(ctx, base);
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

__attribute__((alias("__imp__sub_8325C754"))) PPC_WEAK_FUNC(sub_8325C754);
PPC_FUNC_IMPL(__imp__sub_8325C754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C758"))) PPC_WEAK_FUNC(sub_8325C758);
PPC_FUNC_IMPL(__imp__sub_8325C758) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83296ba8
	ctx.lr = 0x8325C77C;
	sub_83296BA8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C798;
	sub_8325BDC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// bl 0x83296be0
	ctx.lr = 0x8325C7B0;
	sub_83296BE0(ctx, base);
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

