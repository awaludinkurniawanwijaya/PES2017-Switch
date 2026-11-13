#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8374349C"))) PPC_WEAK_FUNC(sub_8374349C);
PPC_FUNC_IMPL(__imp__sub_8374349C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837434A0"))) PPC_WEAK_FUNC(sub_837434A0);
PPC_FUNC_IMPL(__imp__sub_837434A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837434B4"))) PPC_WEAK_FUNC(sub_837434B4);
PPC_FUNC_IMPL(__imp__sub_837434B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837434B8"))) PPC_WEAK_FUNC(sub_837434B8);
PPC_FUNC_IMPL(__imp__sub_837434B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837434D4"))) PPC_WEAK_FUNC(sub_837434D4);
PPC_FUNC_IMPL(__imp__sub_837434D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837434D8"))) PPC_WEAK_FUNC(sub_837434D8);
PPC_FUNC_IMPL(__imp__sub_837434D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837434EC"))) PPC_WEAK_FUNC(sub_837434EC);
PPC_FUNC_IMPL(__imp__sub_837434EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837434F0"))) PPC_WEAK_FUNC(sub_837434F0);
PPC_FUNC_IMPL(__imp__sub_837434F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374350C"))) PPC_WEAK_FUNC(sub_8374350C);
PPC_FUNC_IMPL(__imp__sub_8374350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743510"))) PPC_WEAK_FUNC(sub_83743510);
PPC_FUNC_IMPL(__imp__sub_83743510) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743524"))) PPC_WEAK_FUNC(sub_83743524);
PPC_FUNC_IMPL(__imp__sub_83743524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743528"))) PPC_WEAK_FUNC(sub_83743528);
PPC_FUNC_IMPL(__imp__sub_83743528) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743544"))) PPC_WEAK_FUNC(sub_83743544);
PPC_FUNC_IMPL(__imp__sub_83743544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743548"))) PPC_WEAK_FUNC(sub_83743548);
PPC_FUNC_IMPL(__imp__sub_83743548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374355C"))) PPC_WEAK_FUNC(sub_8374355C);
PPC_FUNC_IMPL(__imp__sub_8374355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743560"))) PPC_WEAK_FUNC(sub_83743560);
PPC_FUNC_IMPL(__imp__sub_83743560) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374357C"))) PPC_WEAK_FUNC(sub_8374357C);
PPC_FUNC_IMPL(__imp__sub_8374357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743580"))) PPC_WEAK_FUNC(sub_83743580);
PPC_FUNC_IMPL(__imp__sub_83743580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743594"))) PPC_WEAK_FUNC(sub_83743594);
PPC_FUNC_IMPL(__imp__sub_83743594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743598"))) PPC_WEAK_FUNC(sub_83743598);
PPC_FUNC_IMPL(__imp__sub_83743598) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837435B4"))) PPC_WEAK_FUNC(sub_837435B4);
PPC_FUNC_IMPL(__imp__sub_837435B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837435B8"))) PPC_WEAK_FUNC(sub_837435B8);
PPC_FUNC_IMPL(__imp__sub_837435B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837435CC"))) PPC_WEAK_FUNC(sub_837435CC);
PPC_FUNC_IMPL(__imp__sub_837435CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837435D0"))) PPC_WEAK_FUNC(sub_837435D0);
PPC_FUNC_IMPL(__imp__sub_837435D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837435EC"))) PPC_WEAK_FUNC(sub_837435EC);
PPC_FUNC_IMPL(__imp__sub_837435EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837435F0"))) PPC_WEAK_FUNC(sub_837435F0);
PPC_FUNC_IMPL(__imp__sub_837435F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743604"))) PPC_WEAK_FUNC(sub_83743604);
PPC_FUNC_IMPL(__imp__sub_83743604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743608"))) PPC_WEAK_FUNC(sub_83743608);
PPC_FUNC_IMPL(__imp__sub_83743608) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743624"))) PPC_WEAK_FUNC(sub_83743624);
PPC_FUNC_IMPL(__imp__sub_83743624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743628"))) PPC_WEAK_FUNC(sub_83743628);
PPC_FUNC_IMPL(__imp__sub_83743628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374363C"))) PPC_WEAK_FUNC(sub_8374363C);
PPC_FUNC_IMPL(__imp__sub_8374363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743640"))) PPC_WEAK_FUNC(sub_83743640);
PPC_FUNC_IMPL(__imp__sub_83743640) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374365C"))) PPC_WEAK_FUNC(sub_8374365C);
PPC_FUNC_IMPL(__imp__sub_8374365C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743660"))) PPC_WEAK_FUNC(sub_83743660);
PPC_FUNC_IMPL(__imp__sub_83743660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743674"))) PPC_WEAK_FUNC(sub_83743674);
PPC_FUNC_IMPL(__imp__sub_83743674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743678"))) PPC_WEAK_FUNC(sub_83743678);
PPC_FUNC_IMPL(__imp__sub_83743678) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743694"))) PPC_WEAK_FUNC(sub_83743694);
PPC_FUNC_IMPL(__imp__sub_83743694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743698"))) PPC_WEAK_FUNC(sub_83743698);
PPC_FUNC_IMPL(__imp__sub_83743698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837436AC"))) PPC_WEAK_FUNC(sub_837436AC);
PPC_FUNC_IMPL(__imp__sub_837436AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837436B0"))) PPC_WEAK_FUNC(sub_837436B0);
PPC_FUNC_IMPL(__imp__sub_837436B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837436CC"))) PPC_WEAK_FUNC(sub_837436CC);
PPC_FUNC_IMPL(__imp__sub_837436CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837436D0"))) PPC_WEAK_FUNC(sub_837436D0);
PPC_FUNC_IMPL(__imp__sub_837436D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837436E4"))) PPC_WEAK_FUNC(sub_837436E4);
PPC_FUNC_IMPL(__imp__sub_837436E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837436E8"))) PPC_WEAK_FUNC(sub_837436E8);
PPC_FUNC_IMPL(__imp__sub_837436E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743704"))) PPC_WEAK_FUNC(sub_83743704);
PPC_FUNC_IMPL(__imp__sub_83743704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743708"))) PPC_WEAK_FUNC(sub_83743708);
PPC_FUNC_IMPL(__imp__sub_83743708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374371C"))) PPC_WEAK_FUNC(sub_8374371C);
PPC_FUNC_IMPL(__imp__sub_8374371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743720"))) PPC_WEAK_FUNC(sub_83743720);
PPC_FUNC_IMPL(__imp__sub_83743720) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374373C"))) PPC_WEAK_FUNC(sub_8374373C);
PPC_FUNC_IMPL(__imp__sub_8374373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743740"))) PPC_WEAK_FUNC(sub_83743740);
PPC_FUNC_IMPL(__imp__sub_83743740) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743754"))) PPC_WEAK_FUNC(sub_83743754);
PPC_FUNC_IMPL(__imp__sub_83743754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743758"))) PPC_WEAK_FUNC(sub_83743758);
PPC_FUNC_IMPL(__imp__sub_83743758) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,10,0,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0xFFFFFC00) | (ctx.r10.u64 & 0xFFFFFFFF000003FF);
	// sth r10,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743774"))) PPC_WEAK_FUNC(sub_83743774);
PPC_FUNC_IMPL(__imp__sub_83743774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743778"))) PPC_WEAK_FUNC(sub_83743778);
PPC_FUNC_IMPL(__imp__sub_83743778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374378C"))) PPC_WEAK_FUNC(sub_8374378C);
PPC_FUNC_IMPL(__imp__sub_8374378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743790"))) PPC_WEAK_FUNC(sub_83743790);
PPC_FUNC_IMPL(__imp__sub_83743790) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837437AC"))) PPC_WEAK_FUNC(sub_837437AC);
PPC_FUNC_IMPL(__imp__sub_837437AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837437B0"))) PPC_WEAK_FUNC(sub_837437B0);
PPC_FUNC_IMPL(__imp__sub_837437B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837437C4"))) PPC_WEAK_FUNC(sub_837437C4);
PPC_FUNC_IMPL(__imp__sub_837437C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837437C8"))) PPC_WEAK_FUNC(sub_837437C8);
PPC_FUNC_IMPL(__imp__sub_837437C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837437E4"))) PPC_WEAK_FUNC(sub_837437E4);
PPC_FUNC_IMPL(__imp__sub_837437E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837437E8"))) PPC_WEAK_FUNC(sub_837437E8);
PPC_FUNC_IMPL(__imp__sub_837437E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837437FC"))) PPC_WEAK_FUNC(sub_837437FC);
PPC_FUNC_IMPL(__imp__sub_837437FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743800"))) PPC_WEAK_FUNC(sub_83743800);
PPC_FUNC_IMPL(__imp__sub_83743800) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374381C"))) PPC_WEAK_FUNC(sub_8374381C);
PPC_FUNC_IMPL(__imp__sub_8374381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743820"))) PPC_WEAK_FUNC(sub_83743820);
PPC_FUNC_IMPL(__imp__sub_83743820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743834"))) PPC_WEAK_FUNC(sub_83743834);
PPC_FUNC_IMPL(__imp__sub_83743834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743838"))) PPC_WEAK_FUNC(sub_83743838);
PPC_FUNC_IMPL(__imp__sub_83743838) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743854"))) PPC_WEAK_FUNC(sub_83743854);
PPC_FUNC_IMPL(__imp__sub_83743854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743858"))) PPC_WEAK_FUNC(sub_83743858);
PPC_FUNC_IMPL(__imp__sub_83743858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374386C"))) PPC_WEAK_FUNC(sub_8374386C);
PPC_FUNC_IMPL(__imp__sub_8374386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743870"))) PPC_WEAK_FUNC(sub_83743870);
PPC_FUNC_IMPL(__imp__sub_83743870) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374388C"))) PPC_WEAK_FUNC(sub_8374388C);
PPC_FUNC_IMPL(__imp__sub_8374388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743890"))) PPC_WEAK_FUNC(sub_83743890);
PPC_FUNC_IMPL(__imp__sub_83743890) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837438A4"))) PPC_WEAK_FUNC(sub_837438A4);
PPC_FUNC_IMPL(__imp__sub_837438A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837438A8"))) PPC_WEAK_FUNC(sub_837438A8);
PPC_FUNC_IMPL(__imp__sub_837438A8) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,4,22,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x3F0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC0F);
	// sth r10,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837438C4"))) PPC_WEAK_FUNC(sub_837438C4);
PPC_FUNC_IMPL(__imp__sub_837438C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837438C8"))) PPC_WEAK_FUNC(sub_837438C8);
PPC_FUNC_IMPL(__imp__sub_837438C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837438DC"))) PPC_WEAK_FUNC(sub_837438DC);
PPC_FUNC_IMPL(__imp__sub_837438DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837438E0"))) PPC_WEAK_FUNC(sub_837438E0);
PPC_FUNC_IMPL(__imp__sub_837438E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837438FC"))) PPC_WEAK_FUNC(sub_837438FC);
PPC_FUNC_IMPL(__imp__sub_837438FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743900"))) PPC_WEAK_FUNC(sub_83743900);
PPC_FUNC_IMPL(__imp__sub_83743900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743914"))) PPC_WEAK_FUNC(sub_83743914);
PPC_FUNC_IMPL(__imp__sub_83743914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743918"))) PPC_WEAK_FUNC(sub_83743918);
PPC_FUNC_IMPL(__imp__sub_83743918) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743934"))) PPC_WEAK_FUNC(sub_83743934);
PPC_FUNC_IMPL(__imp__sub_83743934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743938"))) PPC_WEAK_FUNC(sub_83743938);
PPC_FUNC_IMPL(__imp__sub_83743938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374394C"))) PPC_WEAK_FUNC(sub_8374394C);
PPC_FUNC_IMPL(__imp__sub_8374394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743950"))) PPC_WEAK_FUNC(sub_83743950);
PPC_FUNC_IMPL(__imp__sub_83743950) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374396C"))) PPC_WEAK_FUNC(sub_8374396C);
PPC_FUNC_IMPL(__imp__sub_8374396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743970"))) PPC_WEAK_FUNC(sub_83743970);
PPC_FUNC_IMPL(__imp__sub_83743970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743984"))) PPC_WEAK_FUNC(sub_83743984);
PPC_FUNC_IMPL(__imp__sub_83743984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743988"))) PPC_WEAK_FUNC(sub_83743988);
PPC_FUNC_IMPL(__imp__sub_83743988) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837439A4"))) PPC_WEAK_FUNC(sub_837439A4);
PPC_FUNC_IMPL(__imp__sub_837439A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837439A8"))) PPC_WEAK_FUNC(sub_837439A8);
PPC_FUNC_IMPL(__imp__sub_837439A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837439BC"))) PPC_WEAK_FUNC(sub_837439BC);
PPC_FUNC_IMPL(__imp__sub_837439BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837439C0"))) PPC_WEAK_FUNC(sub_837439C0);
PPC_FUNC_IMPL(__imp__sub_837439C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837439DC"))) PPC_WEAK_FUNC(sub_837439DC);
PPC_FUNC_IMPL(__imp__sub_837439DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837439E0"))) PPC_WEAK_FUNC(sub_837439E0);
PPC_FUNC_IMPL(__imp__sub_837439E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837439F4"))) PPC_WEAK_FUNC(sub_837439F4);
PPC_FUNC_IMPL(__imp__sub_837439F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837439F8"))) PPC_WEAK_FUNC(sub_837439F8);
PPC_FUNC_IMPL(__imp__sub_837439F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743A14"))) PPC_WEAK_FUNC(sub_83743A14);
PPC_FUNC_IMPL(__imp__sub_83743A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743A18"))) PPC_WEAK_FUNC(sub_83743A18);
PPC_FUNC_IMPL(__imp__sub_83743A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743A2C"))) PPC_WEAK_FUNC(sub_83743A2C);
PPC_FUNC_IMPL(__imp__sub_83743A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743A30"))) PPC_WEAK_FUNC(sub_83743A30);
PPC_FUNC_IMPL(__imp__sub_83743A30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743A4C"))) PPC_WEAK_FUNC(sub_83743A4C);
PPC_FUNC_IMPL(__imp__sub_83743A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743A50"))) PPC_WEAK_FUNC(sub_83743A50);
PPC_FUNC_IMPL(__imp__sub_83743A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743A64"))) PPC_WEAK_FUNC(sub_83743A64);
PPC_FUNC_IMPL(__imp__sub_83743A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743A68"))) PPC_WEAK_FUNC(sub_83743A68);
PPC_FUNC_IMPL(__imp__sub_83743A68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743A84"))) PPC_WEAK_FUNC(sub_83743A84);
PPC_FUNC_IMPL(__imp__sub_83743A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743A88"))) PPC_WEAK_FUNC(sub_83743A88);
PPC_FUNC_IMPL(__imp__sub_83743A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743A9C"))) PPC_WEAK_FUNC(sub_83743A9C);
PPC_FUNC_IMPL(__imp__sub_83743A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743AA0"))) PPC_WEAK_FUNC(sub_83743AA0);
PPC_FUNC_IMPL(__imp__sub_83743AA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743ABC"))) PPC_WEAK_FUNC(sub_83743ABC);
PPC_FUNC_IMPL(__imp__sub_83743ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743AC0"))) PPC_WEAK_FUNC(sub_83743AC0);
PPC_FUNC_IMPL(__imp__sub_83743AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743AD4"))) PPC_WEAK_FUNC(sub_83743AD4);
PPC_FUNC_IMPL(__imp__sub_83743AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743AD8"))) PPC_WEAK_FUNC(sub_83743AD8);
PPC_FUNC_IMPL(__imp__sub_83743AD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743AF4"))) PPC_WEAK_FUNC(sub_83743AF4);
PPC_FUNC_IMPL(__imp__sub_83743AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743AF8"))) PPC_WEAK_FUNC(sub_83743AF8);
PPC_FUNC_IMPL(__imp__sub_83743AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743B14"))) PPC_WEAK_FUNC(sub_83743B14);
PPC_FUNC_IMPL(__imp__sub_83743B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743B18"))) PPC_WEAK_FUNC(sub_83743B18);
PPC_FUNC_IMPL(__imp__sub_83743B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743B2C"))) PPC_WEAK_FUNC(sub_83743B2C);
PPC_FUNC_IMPL(__imp__sub_83743B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743B30"))) PPC_WEAK_FUNC(sub_83743B30);
PPC_FUNC_IMPL(__imp__sub_83743B30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743B4C"))) PPC_WEAK_FUNC(sub_83743B4C);
PPC_FUNC_IMPL(__imp__sub_83743B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743B50"))) PPC_WEAK_FUNC(sub_83743B50);
PPC_FUNC_IMPL(__imp__sub_83743B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743B64"))) PPC_WEAK_FUNC(sub_83743B64);
PPC_FUNC_IMPL(__imp__sub_83743B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743B68"))) PPC_WEAK_FUNC(sub_83743B68);
PPC_FUNC_IMPL(__imp__sub_83743B68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743B84"))) PPC_WEAK_FUNC(sub_83743B84);
PPC_FUNC_IMPL(__imp__sub_83743B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743B88"))) PPC_WEAK_FUNC(sub_83743B88);
PPC_FUNC_IMPL(__imp__sub_83743B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743B9C"))) PPC_WEAK_FUNC(sub_83743B9C);
PPC_FUNC_IMPL(__imp__sub_83743B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743BA0"))) PPC_WEAK_FUNC(sub_83743BA0);
PPC_FUNC_IMPL(__imp__sub_83743BA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743BBC"))) PPC_WEAK_FUNC(sub_83743BBC);
PPC_FUNC_IMPL(__imp__sub_83743BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743BC0"))) PPC_WEAK_FUNC(sub_83743BC0);
PPC_FUNC_IMPL(__imp__sub_83743BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743BD4"))) PPC_WEAK_FUNC(sub_83743BD4);
PPC_FUNC_IMPL(__imp__sub_83743BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743BD8"))) PPC_WEAK_FUNC(sub_83743BD8);
PPC_FUNC_IMPL(__imp__sub_83743BD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743BF4"))) PPC_WEAK_FUNC(sub_83743BF4);
PPC_FUNC_IMPL(__imp__sub_83743BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743BF8"))) PPC_WEAK_FUNC(sub_83743BF8);
PPC_FUNC_IMPL(__imp__sub_83743BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743C0C"))) PPC_WEAK_FUNC(sub_83743C0C);
PPC_FUNC_IMPL(__imp__sub_83743C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743C10"))) PPC_WEAK_FUNC(sub_83743C10);
PPC_FUNC_IMPL(__imp__sub_83743C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743C2C"))) PPC_WEAK_FUNC(sub_83743C2C);
PPC_FUNC_IMPL(__imp__sub_83743C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743C30"))) PPC_WEAK_FUNC(sub_83743C30);
PPC_FUNC_IMPL(__imp__sub_83743C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743C44"))) PPC_WEAK_FUNC(sub_83743C44);
PPC_FUNC_IMPL(__imp__sub_83743C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743C48"))) PPC_WEAK_FUNC(sub_83743C48);
PPC_FUNC_IMPL(__imp__sub_83743C48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743C64"))) PPC_WEAK_FUNC(sub_83743C64);
PPC_FUNC_IMPL(__imp__sub_83743C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743C68"))) PPC_WEAK_FUNC(sub_83743C68);
PPC_FUNC_IMPL(__imp__sub_83743C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743C7C"))) PPC_WEAK_FUNC(sub_83743C7C);
PPC_FUNC_IMPL(__imp__sub_83743C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743C80"))) PPC_WEAK_FUNC(sub_83743C80);
PPC_FUNC_IMPL(__imp__sub_83743C80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743C9C"))) PPC_WEAK_FUNC(sub_83743C9C);
PPC_FUNC_IMPL(__imp__sub_83743C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743CA0"))) PPC_WEAK_FUNC(sub_83743CA0);
PPC_FUNC_IMPL(__imp__sub_83743CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743CB4"))) PPC_WEAK_FUNC(sub_83743CB4);
PPC_FUNC_IMPL(__imp__sub_83743CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743CB8"))) PPC_WEAK_FUNC(sub_83743CB8);
PPC_FUNC_IMPL(__imp__sub_83743CB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743CD4"))) PPC_WEAK_FUNC(sub_83743CD4);
PPC_FUNC_IMPL(__imp__sub_83743CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743CD8"))) PPC_WEAK_FUNC(sub_83743CD8);
PPC_FUNC_IMPL(__imp__sub_83743CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743CEC"))) PPC_WEAK_FUNC(sub_83743CEC);
PPC_FUNC_IMPL(__imp__sub_83743CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743CF0"))) PPC_WEAK_FUNC(sub_83743CF0);
PPC_FUNC_IMPL(__imp__sub_83743CF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743D0C"))) PPC_WEAK_FUNC(sub_83743D0C);
PPC_FUNC_IMPL(__imp__sub_83743D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743D10"))) PPC_WEAK_FUNC(sub_83743D10);
PPC_FUNC_IMPL(__imp__sub_83743D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743D24"))) PPC_WEAK_FUNC(sub_83743D24);
PPC_FUNC_IMPL(__imp__sub_83743D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743D28"))) PPC_WEAK_FUNC(sub_83743D28);
PPC_FUNC_IMPL(__imp__sub_83743D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743D44"))) PPC_WEAK_FUNC(sub_83743D44);
PPC_FUNC_IMPL(__imp__sub_83743D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743D48"))) PPC_WEAK_FUNC(sub_83743D48);
PPC_FUNC_IMPL(__imp__sub_83743D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743D5C"))) PPC_WEAK_FUNC(sub_83743D5C);
PPC_FUNC_IMPL(__imp__sub_83743D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743D60"))) PPC_WEAK_FUNC(sub_83743D60);
PPC_FUNC_IMPL(__imp__sub_83743D60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743D7C"))) PPC_WEAK_FUNC(sub_83743D7C);
PPC_FUNC_IMPL(__imp__sub_83743D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743D80"))) PPC_WEAK_FUNC(sub_83743D80);
PPC_FUNC_IMPL(__imp__sub_83743D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743D94"))) PPC_WEAK_FUNC(sub_83743D94);
PPC_FUNC_IMPL(__imp__sub_83743D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743D98"))) PPC_WEAK_FUNC(sub_83743D98);
PPC_FUNC_IMPL(__imp__sub_83743D98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743DB4"))) PPC_WEAK_FUNC(sub_83743DB4);
PPC_FUNC_IMPL(__imp__sub_83743DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743DB8"))) PPC_WEAK_FUNC(sub_83743DB8);
PPC_FUNC_IMPL(__imp__sub_83743DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743DCC"))) PPC_WEAK_FUNC(sub_83743DCC);
PPC_FUNC_IMPL(__imp__sub_83743DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743DD0"))) PPC_WEAK_FUNC(sub_83743DD0);
PPC_FUNC_IMPL(__imp__sub_83743DD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743DEC"))) PPC_WEAK_FUNC(sub_83743DEC);
PPC_FUNC_IMPL(__imp__sub_83743DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743DF0"))) PPC_WEAK_FUNC(sub_83743DF0);
PPC_FUNC_IMPL(__imp__sub_83743DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743E04"))) PPC_WEAK_FUNC(sub_83743E04);
PPC_FUNC_IMPL(__imp__sub_83743E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743E08"))) PPC_WEAK_FUNC(sub_83743E08);
PPC_FUNC_IMPL(__imp__sub_83743E08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743E24"))) PPC_WEAK_FUNC(sub_83743E24);
PPC_FUNC_IMPL(__imp__sub_83743E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743E28"))) PPC_WEAK_FUNC(sub_83743E28);
PPC_FUNC_IMPL(__imp__sub_83743E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743E3C"))) PPC_WEAK_FUNC(sub_83743E3C);
PPC_FUNC_IMPL(__imp__sub_83743E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743E40"))) PPC_WEAK_FUNC(sub_83743E40);
PPC_FUNC_IMPL(__imp__sub_83743E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743E5C"))) PPC_WEAK_FUNC(sub_83743E5C);
PPC_FUNC_IMPL(__imp__sub_83743E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743E60"))) PPC_WEAK_FUNC(sub_83743E60);
PPC_FUNC_IMPL(__imp__sub_83743E60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743E74"))) PPC_WEAK_FUNC(sub_83743E74);
PPC_FUNC_IMPL(__imp__sub_83743E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743E78"))) PPC_WEAK_FUNC(sub_83743E78);
PPC_FUNC_IMPL(__imp__sub_83743E78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743E94"))) PPC_WEAK_FUNC(sub_83743E94);
PPC_FUNC_IMPL(__imp__sub_83743E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743E98"))) PPC_WEAK_FUNC(sub_83743E98);
PPC_FUNC_IMPL(__imp__sub_83743E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743EAC"))) PPC_WEAK_FUNC(sub_83743EAC);
PPC_FUNC_IMPL(__imp__sub_83743EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743EB0"))) PPC_WEAK_FUNC(sub_83743EB0);
PPC_FUNC_IMPL(__imp__sub_83743EB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743ECC"))) PPC_WEAK_FUNC(sub_83743ECC);
PPC_FUNC_IMPL(__imp__sub_83743ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743ED0"))) PPC_WEAK_FUNC(sub_83743ED0);
PPC_FUNC_IMPL(__imp__sub_83743ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743EE4"))) PPC_WEAK_FUNC(sub_83743EE4);
PPC_FUNC_IMPL(__imp__sub_83743EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743EE8"))) PPC_WEAK_FUNC(sub_83743EE8);
PPC_FUNC_IMPL(__imp__sub_83743EE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743F04"))) PPC_WEAK_FUNC(sub_83743F04);
PPC_FUNC_IMPL(__imp__sub_83743F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743F08"))) PPC_WEAK_FUNC(sub_83743F08);
PPC_FUNC_IMPL(__imp__sub_83743F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743F1C"))) PPC_WEAK_FUNC(sub_83743F1C);
PPC_FUNC_IMPL(__imp__sub_83743F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743F20"))) PPC_WEAK_FUNC(sub_83743F20);
PPC_FUNC_IMPL(__imp__sub_83743F20) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743F3C"))) PPC_WEAK_FUNC(sub_83743F3C);
PPC_FUNC_IMPL(__imp__sub_83743F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743F40"))) PPC_WEAK_FUNC(sub_83743F40);
PPC_FUNC_IMPL(__imp__sub_83743F40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743F54"))) PPC_WEAK_FUNC(sub_83743F54);
PPC_FUNC_IMPL(__imp__sub_83743F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743F58"))) PPC_WEAK_FUNC(sub_83743F58);
PPC_FUNC_IMPL(__imp__sub_83743F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743F74"))) PPC_WEAK_FUNC(sub_83743F74);
PPC_FUNC_IMPL(__imp__sub_83743F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743F78"))) PPC_WEAK_FUNC(sub_83743F78);
PPC_FUNC_IMPL(__imp__sub_83743F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743F8C"))) PPC_WEAK_FUNC(sub_83743F8C);
PPC_FUNC_IMPL(__imp__sub_83743F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743F90"))) PPC_WEAK_FUNC(sub_83743F90);
PPC_FUNC_IMPL(__imp__sub_83743F90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743FAC"))) PPC_WEAK_FUNC(sub_83743FAC);
PPC_FUNC_IMPL(__imp__sub_83743FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743FB0"))) PPC_WEAK_FUNC(sub_83743FB0);
PPC_FUNC_IMPL(__imp__sub_83743FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743FC4"))) PPC_WEAK_FUNC(sub_83743FC4);
PPC_FUNC_IMPL(__imp__sub_83743FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743FC8"))) PPC_WEAK_FUNC(sub_83743FC8);
PPC_FUNC_IMPL(__imp__sub_83743FC8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743FE4"))) PPC_WEAK_FUNC(sub_83743FE4);
PPC_FUNC_IMPL(__imp__sub_83743FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743FE8"))) PPC_WEAK_FUNC(sub_83743FE8);
PPC_FUNC_IMPL(__imp__sub_83743FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743FFC"))) PPC_WEAK_FUNC(sub_83743FFC);
PPC_FUNC_IMPL(__imp__sub_83743FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744000"))) PPC_WEAK_FUNC(sub_83744000);
PPC_FUNC_IMPL(__imp__sub_83744000) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374401C"))) PPC_WEAK_FUNC(sub_8374401C);
PPC_FUNC_IMPL(__imp__sub_8374401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744020"))) PPC_WEAK_FUNC(sub_83744020);
PPC_FUNC_IMPL(__imp__sub_83744020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744034"))) PPC_WEAK_FUNC(sub_83744034);
PPC_FUNC_IMPL(__imp__sub_83744034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744038"))) PPC_WEAK_FUNC(sub_83744038);
PPC_FUNC_IMPL(__imp__sub_83744038) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744054"))) PPC_WEAK_FUNC(sub_83744054);
PPC_FUNC_IMPL(__imp__sub_83744054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744058"))) PPC_WEAK_FUNC(sub_83744058);
PPC_FUNC_IMPL(__imp__sub_83744058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374406C"))) PPC_WEAK_FUNC(sub_8374406C);
PPC_FUNC_IMPL(__imp__sub_8374406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744070"))) PPC_WEAK_FUNC(sub_83744070);
PPC_FUNC_IMPL(__imp__sub_83744070) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374408C"))) PPC_WEAK_FUNC(sub_8374408C);
PPC_FUNC_IMPL(__imp__sub_8374408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744090"))) PPC_WEAK_FUNC(sub_83744090);
PPC_FUNC_IMPL(__imp__sub_83744090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837440A4"))) PPC_WEAK_FUNC(sub_837440A4);
PPC_FUNC_IMPL(__imp__sub_837440A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837440A8"))) PPC_WEAK_FUNC(sub_837440A8);
PPC_FUNC_IMPL(__imp__sub_837440A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837440C4"))) PPC_WEAK_FUNC(sub_837440C4);
PPC_FUNC_IMPL(__imp__sub_837440C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837440C8"))) PPC_WEAK_FUNC(sub_837440C8);
PPC_FUNC_IMPL(__imp__sub_837440C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837440DC"))) PPC_WEAK_FUNC(sub_837440DC);
PPC_FUNC_IMPL(__imp__sub_837440DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837440E0"))) PPC_WEAK_FUNC(sub_837440E0);
PPC_FUNC_IMPL(__imp__sub_837440E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837440FC"))) PPC_WEAK_FUNC(sub_837440FC);
PPC_FUNC_IMPL(__imp__sub_837440FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744100"))) PPC_WEAK_FUNC(sub_83744100);
PPC_FUNC_IMPL(__imp__sub_83744100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744114"))) PPC_WEAK_FUNC(sub_83744114);
PPC_FUNC_IMPL(__imp__sub_83744114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744118"))) PPC_WEAK_FUNC(sub_83744118);
PPC_FUNC_IMPL(__imp__sub_83744118) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744134"))) PPC_WEAK_FUNC(sub_83744134);
PPC_FUNC_IMPL(__imp__sub_83744134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744138"))) PPC_WEAK_FUNC(sub_83744138);
PPC_FUNC_IMPL(__imp__sub_83744138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374414C"))) PPC_WEAK_FUNC(sub_8374414C);
PPC_FUNC_IMPL(__imp__sub_8374414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744150"))) PPC_WEAK_FUNC(sub_83744150);
PPC_FUNC_IMPL(__imp__sub_83744150) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374416C"))) PPC_WEAK_FUNC(sub_8374416C);
PPC_FUNC_IMPL(__imp__sub_8374416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744170"))) PPC_WEAK_FUNC(sub_83744170);
PPC_FUNC_IMPL(__imp__sub_83744170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744184"))) PPC_WEAK_FUNC(sub_83744184);
PPC_FUNC_IMPL(__imp__sub_83744184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744188"))) PPC_WEAK_FUNC(sub_83744188);
PPC_FUNC_IMPL(__imp__sub_83744188) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837441A4"))) PPC_WEAK_FUNC(sub_837441A4);
PPC_FUNC_IMPL(__imp__sub_837441A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837441A8"))) PPC_WEAK_FUNC(sub_837441A8);
PPC_FUNC_IMPL(__imp__sub_837441A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837441BC"))) PPC_WEAK_FUNC(sub_837441BC);
PPC_FUNC_IMPL(__imp__sub_837441BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837441C0"))) PPC_WEAK_FUNC(sub_837441C0);
PPC_FUNC_IMPL(__imp__sub_837441C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837441DC"))) PPC_WEAK_FUNC(sub_837441DC);
PPC_FUNC_IMPL(__imp__sub_837441DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837441E0"))) PPC_WEAK_FUNC(sub_837441E0);
PPC_FUNC_IMPL(__imp__sub_837441E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,19,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837441F4"))) PPC_WEAK_FUNC(sub_837441F4);
PPC_FUNC_IMPL(__imp__sub_837441F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837441F8"))) PPC_WEAK_FUNC(sub_837441F8);
PPC_FUNC_IMPL(__imp__sub_837441F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// li r3,1
	ctx.r3.s64 = 1;
	// rotlwi r8,r10,13
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 13);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r9,0,19,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFE01FFF;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374421C"))) PPC_WEAK_FUNC(sub_8374421C);
PPC_FUNC_IMPL(__imp__sub_8374421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744220"))) PPC_WEAK_FUNC(sub_83744220);
PPC_FUNC_IMPL(__imp__sub_83744220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744234"))) PPC_WEAK_FUNC(sub_83744234);
PPC_FUNC_IMPL(__imp__sub_83744234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744238"))) PPC_WEAK_FUNC(sub_83744238);
PPC_FUNC_IMPL(__imp__sub_83744238) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// li r3,1
	ctx.r3.s64 = 1;
	// rotlwi r8,r10,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r9,0,27,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374425C"))) PPC_WEAK_FUNC(sub_8374425C);
PPC_FUNC_IMPL(__imp__sub_8374425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744260"))) PPC_WEAK_FUNC(sub_83744260);
PPC_FUNC_IMPL(__imp__sub_83744260) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744270"))) PPC_WEAK_FUNC(sub_83744270);
PPC_FUNC_IMPL(__imp__sub_83744270) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744284"))) PPC_WEAK_FUNC(sub_83744284);
PPC_FUNC_IMPL(__imp__sub_83744284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744288"))) PPC_WEAK_FUNC(sub_83744288);
PPC_FUNC_IMPL(__imp__sub_83744288) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744298"))) PPC_WEAK_FUNC(sub_83744298);
PPC_FUNC_IMPL(__imp__sub_83744298) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

