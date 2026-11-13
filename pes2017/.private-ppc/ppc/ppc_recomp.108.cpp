#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A5223C"))) PPC_WEAK_FUNC(sub_82A5223C);
PPC_FUNC_IMPL(__imp__sub_82A5223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52240"))) PPC_WEAK_FUNC(sub_82A52240);
PPC_FUNC_IMPL(__imp__sub_82A52240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14308
	ctx.r9.s64 = ctx.r11.s64 + 14308;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52254"))) PPC_WEAK_FUNC(sub_82A52254);
PPC_FUNC_IMPL(__imp__sub_82A52254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52258"))) PPC_WEAK_FUNC(sub_82A52258);
PPC_FUNC_IMPL(__imp__sub_82A52258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14344
	ctx.r9.s64 = ctx.r11.s64 + 14344;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5226C"))) PPC_WEAK_FUNC(sub_82A5226C);
PPC_FUNC_IMPL(__imp__sub_82A5226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52270"))) PPC_WEAK_FUNC(sub_82A52270);
PPC_FUNC_IMPL(__imp__sub_82A52270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14384
	ctx.r9.s64 = ctx.r11.s64 + 14384;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52284"))) PPC_WEAK_FUNC(sub_82A52284);
PPC_FUNC_IMPL(__imp__sub_82A52284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52288"))) PPC_WEAK_FUNC(sub_82A52288);
PPC_FUNC_IMPL(__imp__sub_82A52288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14496
	ctx.r9.s64 = ctx.r11.s64 + 14496;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5229C"))) PPC_WEAK_FUNC(sub_82A5229C);
PPC_FUNC_IMPL(__imp__sub_82A5229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A522A0"))) PPC_WEAK_FUNC(sub_82A522A0);
PPC_FUNC_IMPL(__imp__sub_82A522A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14584
	ctx.r9.s64 = ctx.r11.s64 + 14584;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A522B4"))) PPC_WEAK_FUNC(sub_82A522B4);
PPC_FUNC_IMPL(__imp__sub_82A522B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A522B8"))) PPC_WEAK_FUNC(sub_82A522B8);
PPC_FUNC_IMPL(__imp__sub_82A522B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14696
	ctx.r9.s64 = ctx.r11.s64 + 14696;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A522CC"))) PPC_WEAK_FUNC(sub_82A522CC);
PPC_FUNC_IMPL(__imp__sub_82A522CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A522D0"))) PPC_WEAK_FUNC(sub_82A522D0);
PPC_FUNC_IMPL(__imp__sub_82A522D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15072
	ctx.r9.s64 = ctx.r11.s64 + 15072;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A522E4"))) PPC_WEAK_FUNC(sub_82A522E4);
PPC_FUNC_IMPL(__imp__sub_82A522E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A522E8"))) PPC_WEAK_FUNC(sub_82A522E8);
PPC_FUNC_IMPL(__imp__sub_82A522E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15536
	ctx.r9.s64 = ctx.r11.s64 + 15536;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A522FC"))) PPC_WEAK_FUNC(sub_82A522FC);
PPC_FUNC_IMPL(__imp__sub_82A522FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52300"))) PPC_WEAK_FUNC(sub_82A52300);
PPC_FUNC_IMPL(__imp__sub_82A52300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15600
	ctx.r9.s64 = ctx.r11.s64 + 15600;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52314"))) PPC_WEAK_FUNC(sub_82A52314);
PPC_FUNC_IMPL(__imp__sub_82A52314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52318"))) PPC_WEAK_FUNC(sub_82A52318);
PPC_FUNC_IMPL(__imp__sub_82A52318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15632
	ctx.r9.s64 = ctx.r11.s64 + 15632;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5232C"))) PPC_WEAK_FUNC(sub_82A5232C);
PPC_FUNC_IMPL(__imp__sub_82A5232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52330"))) PPC_WEAK_FUNC(sub_82A52330);
PPC_FUNC_IMPL(__imp__sub_82A52330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15648
	ctx.r9.s64 = ctx.r11.s64 + 15648;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52344"))) PPC_WEAK_FUNC(sub_82A52344);
PPC_FUNC_IMPL(__imp__sub_82A52344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52348"))) PPC_WEAK_FUNC(sub_82A52348);
PPC_FUNC_IMPL(__imp__sub_82A52348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15696
	ctx.r9.s64 = ctx.r11.s64 + 15696;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5235C"))) PPC_WEAK_FUNC(sub_82A5235C);
PPC_FUNC_IMPL(__imp__sub_82A5235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52360"))) PPC_WEAK_FUNC(sub_82A52360);
PPC_FUNC_IMPL(__imp__sub_82A52360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15720
	ctx.r9.s64 = ctx.r11.s64 + 15720;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52374"))) PPC_WEAK_FUNC(sub_82A52374);
PPC_FUNC_IMPL(__imp__sub_82A52374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52378"))) PPC_WEAK_FUNC(sub_82A52378);
PPC_FUNC_IMPL(__imp__sub_82A52378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16168
	ctx.r9.s64 = ctx.r11.s64 + 16168;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5238C"))) PPC_WEAK_FUNC(sub_82A5238C);
PPC_FUNC_IMPL(__imp__sub_82A5238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52390"))) PPC_WEAK_FUNC(sub_82A52390);
PPC_FUNC_IMPL(__imp__sub_82A52390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16312
	ctx.r9.s64 = ctx.r11.s64 + 16312;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A523A4"))) PPC_WEAK_FUNC(sub_82A523A4);
PPC_FUNC_IMPL(__imp__sub_82A523A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A523A8"))) PPC_WEAK_FUNC(sub_82A523A8);
PPC_FUNC_IMPL(__imp__sub_82A523A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16320
	ctx.r9.s64 = ctx.r11.s64 + 16320;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A523BC"))) PPC_WEAK_FUNC(sub_82A523BC);
PPC_FUNC_IMPL(__imp__sub_82A523BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A523C0"))) PPC_WEAK_FUNC(sub_82A523C0);
PPC_FUNC_IMPL(__imp__sub_82A523C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16540
	ctx.r9.s64 = ctx.r11.s64 + 16540;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A523D4"))) PPC_WEAK_FUNC(sub_82A523D4);
PPC_FUNC_IMPL(__imp__sub_82A523D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A523D8"))) PPC_WEAK_FUNC(sub_82A523D8);
PPC_FUNC_IMPL(__imp__sub_82A523D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16588
	ctx.r9.s64 = ctx.r11.s64 + 16588;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A523EC"))) PPC_WEAK_FUNC(sub_82A523EC);
PPC_FUNC_IMPL(__imp__sub_82A523EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A523F0"))) PPC_WEAK_FUNC(sub_82A523F0);
PPC_FUNC_IMPL(__imp__sub_82A523F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16604
	ctx.r9.s64 = ctx.r11.s64 + 16604;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52404"))) PPC_WEAK_FUNC(sub_82A52404);
PPC_FUNC_IMPL(__imp__sub_82A52404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52408"))) PPC_WEAK_FUNC(sub_82A52408);
PPC_FUNC_IMPL(__imp__sub_82A52408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16636
	ctx.r9.s64 = ctx.r11.s64 + 16636;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5241C"))) PPC_WEAK_FUNC(sub_82A5241C);
PPC_FUNC_IMPL(__imp__sub_82A5241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52420"))) PPC_WEAK_FUNC(sub_82A52420);
PPC_FUNC_IMPL(__imp__sub_82A52420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16648
	ctx.r9.s64 = ctx.r11.s64 + 16648;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52434"))) PPC_WEAK_FUNC(sub_82A52434);
PPC_FUNC_IMPL(__imp__sub_82A52434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52438"))) PPC_WEAK_FUNC(sub_82A52438);
PPC_FUNC_IMPL(__imp__sub_82A52438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16664
	ctx.r9.s64 = ctx.r11.s64 + 16664;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5244C"))) PPC_WEAK_FUNC(sub_82A5244C);
PPC_FUNC_IMPL(__imp__sub_82A5244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52450"))) PPC_WEAK_FUNC(sub_82A52450);
PPC_FUNC_IMPL(__imp__sub_82A52450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f13,-15340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15340);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f12,-15344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15344);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfs f11,-20192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20192);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f10,-20212(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -20212);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-15348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15348);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f8,-15352(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15352);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f7,-15356(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15356);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f6,-15360(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -15360);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f5,-15364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15364);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f4,-9984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9984);
	ctx.f4.f64 = double(temp.f32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f3,-15368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15368);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f2,-15372(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15372);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-15376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15376);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,-20196(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -20196);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-15380(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15380);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,4276(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,5888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5888);
	ctx.f29.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f8,20(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f5,32(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f4,36(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f3,40(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f2,44(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f31,52(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f30,56(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f29,68(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfd f29,-24(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5253C"))) PPC_WEAK_FUNC(sub_82A5253C);
PPC_FUNC_IMPL(__imp__sub_82A5253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52540"))) PPC_WEAK_FUNC(sub_82A52540);
PPC_FUNC_IMPL(__imp__sub_82A52540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52558"))) PPC_WEAK_FUNC(sub_82A52558);
PPC_FUNC_IMPL(__imp__sub_82A52558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52570"))) PPC_WEAK_FUNC(sub_82A52570);
PPC_FUNC_IMPL(__imp__sub_82A52570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A525A4"))) PPC_WEAK_FUNC(sub_82A525A4);
PPC_FUNC_IMPL(__imp__sub_82A525A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A525A8"))) PPC_WEAK_FUNC(sub_82A525A8);
PPC_FUNC_IMPL(__imp__sub_82A525A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A525B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,8
	ctx.r27.s64 = 8;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bgt cr6,0x82a5283c
	if (cr6.gt) goto loc_82A5283C;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r12,-32091
	ctx.r12.s64 = -2103115776;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9712
	ctx.r12.s64 = ctx.r12.s64 + 9712;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A52620;
	case 1:
		goto loc_82A52630;
	case 2:
		goto loc_82A52640;
	case 3:
		goto loc_82A52650;
	case 4:
		goto loc_82A52660;
	case 5:
		goto loc_82A5266C;
	case 6:
		goto loc_82A52678;
	case 7:
		goto loc_82A52684;
	case 8:
		goto loc_82A52690;
	case 9:
		goto loc_82A52698;
	case 10:
		goto loc_82A526A0;
	case 11:
		goto loc_82A526A8;
	default:
		return;
	}
	// lwz r21,9760(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9760);
	// lwz r21,9776(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9776);
	// lwz r21,9792(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9792);
	// lwz r21,9808(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9808);
	// lwz r21,9824(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9824);
	// lwz r21,9836(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9836);
	// lwz r21,9848(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9848);
	// lwz r21,9860(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9860);
	// lwz r21,9872(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9872);
	// lwz r21,9880(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9880);
	// lwz r21,9888(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9888);
	// lwz r21,9896(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 9896);
loc_82A52620:
	// li r28,4
	ctx.r28.s64 = 4;
	// li r29,7
	ctx.r29.s64 = 7;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a526b0
	goto loc_82A526B0;
loc_82A52630:
	// li r28,6
	ctx.r28.s64 = 6;
	// li r29,5
	ctx.r29.s64 = 5;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a526b0
	goto loc_82A526B0;
loc_82A52640:
	// li r28,5
	ctx.r28.s64 = 5;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a526b0
	goto loc_82A526B0;
loc_82A52650:
	// li r28,7
	ctx.r28.s64 = 7;
	// li r29,6
	ctx.r29.s64 = 6;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a526b0
	goto loc_82A526B0;
loc_82A52660:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a526b0
	goto loc_82A526B0;
loc_82A5266C:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a526b0
	goto loc_82A526B0;
loc_82A52678:
	// li r28,3
	ctx.r28.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a526b0
	goto loc_82A526B0;
loc_82A52684:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a526b0
	goto loc_82A526B0;
loc_82A52690:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a526ac
	goto loc_82A526AC;
loc_82A52698:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// b 0x82a526ac
	goto loc_82A526AC;
loc_82A526A0:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x82a526ac
	goto loc_82A526AC;
loc_82A526A8:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82A526AC:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A526B0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A526B4:
	// lbz r11,1(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82a5272c
	if (!cr6.eq) goto loc_82A5272C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a52714
	if (cr6.lt) goto loc_82A52714;
	// beq cr6,0x82a526fc
	if (cr6.eq) goto loc_82A526FC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a52720
	if (!cr6.lt) goto loc_82A52720;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a52720
	if (cr6.lt) goto loc_82A52720;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bge cr6,0x82a52720
	if (!cr6.lt) goto loc_82A52720;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// b 0x82a52798
	goto loc_82A52798;
loc_82A526FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a54d98
	ctx.lr = 0x82A52708;
	sub_82A54D98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// b 0x82a52798
	goto loc_82A52798;
loc_82A52714:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a54d48
	ctx.lr = 0x82A52720;
	sub_82A54D48(ctx, base);
loc_82A52720:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// b 0x82a52798
	goto loc_82A52798;
loc_82A5272C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a52784
	if (cr6.lt) goto loc_82A52784;
	// beq cr6,0x82a52774
	if (cr6.eq) goto loc_82A52774;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a52790
	if (!cr6.lt) goto loc_82A52790;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a52790
	if (cr6.lt) goto loc_82A52790;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x82a52790
	if (!cr6.lt) goto loc_82A52790;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a52790
	if (cr6.lt) goto loc_82A52790;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bge cr6,0x82a52790
	if (!cr6.lt) goto loc_82A52790;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// b 0x82a52790
	goto loc_82A52790;
loc_82A52774:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a54d98
	ctx.lr = 0x82A52780;
	sub_82A54D98(ctx, base);
	// b 0x82a52790
	goto loc_82A52790;
loc_82A52784:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a54d48
	ctx.lr = 0x82A52790;
	sub_82A54D48(ctx, base);
loc_82A52790:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
loc_82A52798:
	// bne cr6,0x82a527a0
	if (!cr6.eq) goto loc_82A527A0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82A527A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x82a526b4
	if (cr6.lt) goto loc_82A526B4;
	// li r3,18
	ctx.r3.s64 = 18;
	// cmplwi cr6,r27,7
	cr6.compare<uint32_t>(ctx.r27.u32, 7, xer);
	// bgt cr6,0x82a52918
	if (cr6.gt) goto loc_82A52918;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a527e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A527E8;
	// bdzf 4*cr6+eq,0x82a527f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A527F4;
	// bdzf 4*cr6+eq,0x82a52800
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A52800;
	// bdzf 4*cr6+eq,0x82a5280c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A5280C;
	// bdzf 4*cr6+eq,0x82a52818
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A52818;
	// bdzf 4*cr6+eq,0x82a52824
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A52824;
	// bne cr6,0x82a52830
	if (!cr6.eq) goto loc_82A52830;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A527E8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A527F4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A52800:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A5280C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A52818:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A52824:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A52830:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A5283C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a52914
	if (cr6.lt) goto loc_82A52914;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bgt cr6,0x82a52914
	if (cr6.gt) goto loc_82A52914;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
loc_82A528F8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a528f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A528F8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A52914:
	// li r3,18
	ctx.r3.s64 = 18;
loc_82A52918:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A52920"))) PPC_WEAK_FUNC(sub_82A52920);
PPC_FUNC_IMPL(__imp__sub_82A52920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A52928;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 2;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stb r28,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r28.u8);
loc_82A52940:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82A52944:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a54d48
	ctx.lr = 0x82A52950;
	sub_82A54D48(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a52974
	if (cr6.lt) goto loc_82A52974;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x82a52974
	if (!cr6.lt) goto loc_82A52974;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a52974
	if (cr6.lt) goto loc_82A52974;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bge cr6,0x82a52974
	if (!cr6.lt) goto loc_82A52974;
	// stbx r3,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u8);
loc_82A52974:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x82a52944
	if (cr6.lt) goto loc_82A52944;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82a52940
	if (cr6.lt) goto loc_82A52940;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A52998"))) PPC_WEAK_FUNC(sub_82A52998);
PPC_FUNC_IMPL(__imp__sub_82A52998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A529A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a529c0
	if (cr6.lt) goto loc_82A529C0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82a529c0
	if (!cr6.lt) goto loc_82A529C0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_82A529C0:
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a529d8
	if (cr6.lt) goto loc_82A529D8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x82a529d8
	if (!cr6.lt) goto loc_82A529D8;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
loc_82A529D8:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,2
	ctx.r29.s64 = ctx.r3.s64 + 2;
	// subf r27,r3,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r3.s64;
loc_82A529E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A529E8:
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a52a40
	if (cr6.lt) goto loc_82A52A40;
	// beq cr6,0x82a52a30
	if (cr6.eq) goto loc_82A52A30;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a52a4c
	if (!cr6.lt) goto loc_82A52A4C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a52a70
	if (cr6.lt) goto loc_82A52A70;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x82a52a4c
	if (!cr6.lt) goto loc_82A52A4C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a52a4c
	if (cr6.lt) goto loc_82A52A4C;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bge cr6,0x82a52a4c
	if (!cr6.lt) goto loc_82A52A4C;
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lbzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82a52a4c
	goto loc_82A52A4C;
loc_82A52A30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a54d98
	ctx.lr = 0x82A52A3C;
	sub_82A54D98(ctx, base);
	// b 0x82a52a4c
	goto loc_82A52A4C;
loc_82A52A40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a54d48
	ctx.lr = 0x82A52A4C;
	sub_82A54D48(ctx, base);
loc_82A52A4C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a52a70
	if (cr6.lt) goto loc_82A52A70;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x82a52a70
	if (!cr6.lt) goto loc_82A52A70;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a52a70
	if (cr6.lt) goto loc_82A52A70;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// bge cr6,0x82a52a70
	if (!cr6.lt) goto loc_82A52A70;
	// stbx r3,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u8);
loc_82A52A70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x82a529e8
	if (cr6.lt) goto loc_82A529E8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82a529e4
	if (cr6.lt) goto loc_82A529E4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A52A94"))) PPC_WEAK_FUNC(sub_82A52A94);
PPC_FUNC_IMPL(__imp__sub_82A52A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52A98"))) PPC_WEAK_FUNC(sub_82A52A98);
PPC_FUNC_IMPL(__imp__sub_82A52A98) {
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
	// bl 0x82a52920
	ctx.lr = 0x82A52AB0;
	sub_82A52920(ctx, base);
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

__attribute__((alias("__imp__sub_82A52AC8"))) PPC_WEAK_FUNC(sub_82A52AC8);
PPC_FUNC_IMPL(__imp__sub_82A52AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,1114
	cr6.compare<int32_t>(ctx.r4.s32, 1114, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52ADC"))) PPC_WEAK_FUNC(sub_82A52ADC);
PPC_FUNC_IMPL(__imp__sub_82A52ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52AE0"))) PPC_WEAK_FUNC(sub_82A52AE0);
PPC_FUNC_IMPL(__imp__sub_82A52AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A52AEC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1114
	cr6.compare<int32_t>(ctx.r11.s32, 1114, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a52aec
	if (cr6.lt) goto loc_82A52AEC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52B08"))) PPC_WEAK_FUNC(sub_82A52B08);
PPC_FUNC_IMPL(__imp__sub_82A52B08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x82a3fa90
	sub_82A3FA90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A52B30"))) PPC_WEAK_FUNC(sub_82A52B30);
PPC_FUNC_IMPL(__imp__sub_82A52B30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82a3fbe0
	sub_82A3FBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A52B38"))) PPC_WEAK_FUNC(sub_82A52B38);
PPC_FUNC_IMPL(__imp__sub_82A52B38) {
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
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a3fca8
	ctx.lr = 0x82A52B54;
	sub_82A3FCA8(ctx, base);
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

__attribute__((alias("__imp__sub_82A52B6C"))) PPC_WEAK_FUNC(sub_82A52B6C);
PPC_FUNC_IMPL(__imp__sub_82A52B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52B70"))) PPC_WEAK_FUNC(sub_82A52B70);
PPC_FUNC_IMPL(__imp__sub_82A52B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52B7C"))) PPC_WEAK_FUNC(sub_82A52B7C);
PPC_FUNC_IMPL(__imp__sub_82A52B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52B80"))) PPC_WEAK_FUNC(sub_82A52B80);
PPC_FUNC_IMPL(__imp__sub_82A52B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r3,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52B8C"))) PPC_WEAK_FUNC(sub_82A52B8C);
PPC_FUNC_IMPL(__imp__sub_82A52B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52B90"))) PPC_WEAK_FUNC(sub_82A52B90);
PPC_FUNC_IMPL(__imp__sub_82A52B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// addi r8,r3,10
	ctx.r8.s64 = ctx.r3.s64 + 10;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
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
loc_82A52BD4:
	// stbx r9,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a52bd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A52BD4;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// ld r10,17264(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 17264);
	// std r10,84(r3)
	PPC_STORE_U64(ctx.r3.u32 + 84, ctx.r10.u64);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// stb r11,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r11.u8);
	// stb r11,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r11.u8);
	// stw r7,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52C38"))) PPC_WEAK_FUNC(sub_82A52C38);
PPC_FUNC_IMPL(__imp__sub_82A52C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52C50"))) PPC_WEAK_FUNC(sub_82A52C50);
PPC_FUNC_IMPL(__imp__sub_82A52C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52C70"))) PPC_WEAK_FUNC(sub_82A52C70);
PPC_FUNC_IMPL(__imp__sub_82A52C70) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52C84"))) PPC_WEAK_FUNC(sub_82A52C84);
PPC_FUNC_IMPL(__imp__sub_82A52C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52C88"))) PPC_WEAK_FUNC(sub_82A52C88);
PPC_FUNC_IMPL(__imp__sub_82A52C88) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52C9C"))) PPC_WEAK_FUNC(sub_82A52C9C);
PPC_FUNC_IMPL(__imp__sub_82A52C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52CA0"))) PPC_WEAK_FUNC(sub_82A52CA0);
PPC_FUNC_IMPL(__imp__sub_82A52CA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52CB4"))) PPC_WEAK_FUNC(sub_82A52CB4);
PPC_FUNC_IMPL(__imp__sub_82A52CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52CB8"))) PPC_WEAK_FUNC(sub_82A52CB8);
PPC_FUNC_IMPL(__imp__sub_82A52CB8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52CCC"))) PPC_WEAK_FUNC(sub_82A52CCC);
PPC_FUNC_IMPL(__imp__sub_82A52CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52CD0"))) PPC_WEAK_FUNC(sub_82A52CD0);
PPC_FUNC_IMPL(__imp__sub_82A52CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a52d4c
	if (!cr6.lt) goto loc_82A52D4C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a52d34
	if (!cr6.eq) goto loc_82A52D34;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a52d34
	if (!cr6.eq) goto loc_82A52D34;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a52d2c
	if (!cr6.eq) goto loc_82A52D2C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a52d60
	if (cr6.eq) goto loc_82A52D60;
loc_82A52D2C:
	// addi r3,r3,10
	ctx.r3.s64 = ctx.r3.s64 + 10;
	// blr 
	return;
loc_82A52D34:
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x82a52d60
	if (!cr6.lt) goto loc_82A52D60;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// blr 
	return;
loc_82A52D4C:
	// cmpwi cr6,r4,12
	cr6.compare<int32_t>(ctx.r4.s32, 12, xer);
	// bge cr6,0x82a52d60
	if (!cr6.lt) goto loc_82A52D60;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// blr 
	return;
loc_82A52D60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52D68"))) PPC_WEAK_FUNC(sub_82A52D68);
PPC_FUNC_IMPL(__imp__sub_82A52D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
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

__attribute__((alias("__imp__sub_82A52D78"))) PPC_WEAK_FUNC(sub_82A52D78);
PPC_FUNC_IMPL(__imp__sub_82A52D78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52D8C"))) PPC_WEAK_FUNC(sub_82A52D8C);
PPC_FUNC_IMPL(__imp__sub_82A52D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52D90"))) PPC_WEAK_FUNC(sub_82A52D90);
PPC_FUNC_IMPL(__imp__sub_82A52D90) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52D98"))) PPC_WEAK_FUNC(sub_82A52D98);
PPC_FUNC_IMPL(__imp__sub_82A52D98) {
	PPC_FUNC_PROLOGUE();
	// stb r4,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52DA0"))) PPC_WEAK_FUNC(sub_82A52DA0);
PPC_FUNC_IMPL(__imp__sub_82A52DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 + 10;
	// li r9,28
	ctx.r9.s64 = 28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A52DB4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a52db4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A52DB4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r11,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r11.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r10,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r10.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r10,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r10.u8);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stb r11,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r10,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r10.u8);
	// stb r11,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r11.u8);
	// stb r11,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r11.u8);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r11.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r11.u8);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stb r10,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r11.u8);
	// stb r11,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, ctx.r11.u8);
	// sth r8,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r8.u16);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
	// stb r11,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r11.u8);
	// stb r11,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r11.u8);
	// b 0x82a52b90
	sub_82A52B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A52E40"))) PPC_WEAK_FUNC(sub_82A52E40);
PPC_FUNC_IMPL(__imp__sub_82A52E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a52e6c
	if (cr6.eq) goto loc_82A52E6C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a52e60
	if (cr6.eq) goto loc_82A52E60;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
loc_82A52E60:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82A52E6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52E80"))) PPC_WEAK_FUNC(sub_82A52E80);
PPC_FUNC_IMPL(__imp__sub_82A52E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a52eac
	if (cr6.eq) goto loc_82A52EAC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82a52ea0
	if (cr6.eq) goto loc_82A52EA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
loc_82A52EA0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82A52EAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52EC0"))) PPC_WEAK_FUNC(sub_82A52EC0);
PPC_FUNC_IMPL(__imp__sub_82A52EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a52eec
	if (cr6.eq) goto loc_82A52EEC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82a52ee0
	if (cr6.eq) goto loc_82A52EE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
loc_82A52EE0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82A52EEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52F00"))) PPC_WEAK_FUNC(sub_82A52F00);
PPC_FUNC_IMPL(__imp__sub_82A52F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a52f2c
	if (cr6.eq) goto loc_82A52F2C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82a52f20
	if (cr6.eq) goto loc_82A52F20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
loc_82A52F20:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_82A52F2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52F40"))) PPC_WEAK_FUNC(sub_82A52F40);
PPC_FUNC_IMPL(__imp__sub_82A52F40) {
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
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A52F60;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A52F78"))) PPC_WEAK_FUNC(sub_82A52F78);
PPC_FUNC_IMPL(__imp__sub_82A52F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r4,600
	ctx.r5.s64 = ctx.r4.s64 + 600;
	// lis r6,-31763
	ctx.r6.s64 = -2081619968;
loc_82A52F88:
	// lbzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a530a4
	if (cr6.eq) goto loc_82A530A4;
	// cmplwi cr6,r7,19
	cr6.compare<uint32_t>(ctx.r7.u32, 19, xer);
	// bgt cr6,0x82a530a4
	if (cr6.gt) goto loc_82A530A4;
	// lis r12,-32091
	ctx.r12.s64 = -2103115776;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12212
	ctx.r12.s64 = ctx.r12.s64 + 12212;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r7.u32) {
	case 0:
		goto loc_82A53004;
	case 1:
		goto loc_82A530A4;
	case 2:
		goto loc_82A530A4;
	case 3:
		goto loc_82A53010;
	case 4:
		goto loc_82A530A4;
	case 5:
		goto loc_82A530A4;
	case 6:
		goto loc_82A530A4;
	case 7:
		goto loc_82A530A4;
	case 8:
		goto loc_82A530A4;
	case 9:
		goto loc_82A530A4;
	case 10:
		goto loc_82A5301C;
	case 11:
		goto loc_82A5302C;
	case 12:
		goto loc_82A53038;
	case 13:
		goto loc_82A530A4;
	case 14:
		goto loc_82A530A4;
	case 15:
		goto loc_82A530A4;
	case 16:
		goto loc_82A53044;
	case 17:
		goto loc_82A530A4;
	case 18:
		goto loc_82A530A4;
	case 19:
		goto loc_82A53050;
	default:
		return;
	}
	// lwz r21,12292(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12292);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12304(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12304);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12316(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12316);
	// lwz r21,12332(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12332);
	// lwz r21,12344(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12344);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12356(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12356);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12452(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12452);
	// lwz r21,12368(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12368);
loc_82A53004:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82a530a4
	goto loc_82A530A4;
loc_82A53010:
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82a530a4
	goto loc_82A530A4;
loc_82A5301C:
	// lwz r11,-3564(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82a530a4
	goto loc_82A530A4;
loc_82A5302C:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82a530a4
	goto loc_82A530A4;
loc_82A53038:
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82a530a4
	goto loc_82A530A4;
loc_82A53044:
	// lwz r11,132(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x82a530a4
	goto loc_82A530A4;
loc_82A53050:
	// li r9,11
	ctx.r9.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r10,r4,192
	ctx.r10.s64 = ctx.r4.s64 + 192;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A53064:
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bge cr6,0x82a53074
	if (!cr6.lt) goto loc_82A53074;
	// lwz r9,-20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// b 0x82a53078
	goto loc_82A53078;
loc_82A53074:
	// lwz r9,172(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
loc_82A53078:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r31,22
	cr6.compare<uint32_t>(ctx.r31.u32, 22, xer);
	// bge cr6,0x82a53090
	if (!cr6.lt) goto loc_82A53090;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82a53094
	goto loc_82A53094;
loc_82A53090:
	// lwz r9,172(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
loc_82A53094:
	// stwu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// bdnz 0x82a53064
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A53064;
loc_82A530A4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,37
	cr6.compare<int32_t>(ctx.r7.s32, 37, xer);
	// blt cr6,0x82a52f88
	if (cr6.lt) goto loc_82A52F88;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A530B8"))) PPC_WEAK_FUNC(sub_82A530B8);
PPC_FUNC_IMPL(__imp__sub_82A530B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A530CC"))) PPC_WEAK_FUNC(sub_82A530CC);
PPC_FUNC_IMPL(__imp__sub_82A530CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A530D0"))) PPC_WEAK_FUNC(sub_82A530D0);
PPC_FUNC_IMPL(__imp__sub_82A530D0) {
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
	// lbz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// bl 0x83740858
	ctx.lr = 0x82A530E8;
	sub_83740858(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bgt cr6,0x82a53118
	if (cr6.gt) goto loc_82A53118;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
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
loc_82A53118:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
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

__attribute__((alias("__imp__sub_82A53130"))) PPC_WEAK_FUNC(sub_82A53130);
PPC_FUNC_IMPL(__imp__sub_82A53130) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5313C"))) PPC_WEAK_FUNC(sub_82A5313C);
PPC_FUNC_IMPL(__imp__sub_82A5313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A53140"))) PPC_WEAK_FUNC(sub_82A53140);
PPC_FUNC_IMPL(__imp__sub_82A53140) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5314C"))) PPC_WEAK_FUNC(sub_82A5314C);
PPC_FUNC_IMPL(__imp__sub_82A5314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A53150"))) PPC_WEAK_FUNC(sub_82A53150);
PPC_FUNC_IMPL(__imp__sub_82A53150) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5315C"))) PPC_WEAK_FUNC(sub_82A5315C);
PPC_FUNC_IMPL(__imp__sub_82A5315C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A53160"))) PPC_WEAK_FUNC(sub_82A53160);
PPC_FUNC_IMPL(__imp__sub_82A53160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A53168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bl 0x8310d3b8
	ctx.lr = 0x82A53180;
	sub_8310D3B8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x8310d4a0
	ctx.lr = 0x82A53188;
	sub_8310D4A0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x8310d3b8
	ctx.lr = 0x82A53194;
	sub_8310D3B8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x8310d4a0
	ctx.lr = 0x82A5319C;
	sub_8310D4A0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A531AC"))) PPC_WEAK_FUNC(sub_82A531AC);
PPC_FUNC_IMPL(__imp__sub_82A531AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A531B0"))) PPC_WEAK_FUNC(sub_82A531B0);
PPC_FUNC_IMPL(__imp__sub_82A531B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A53200"))) PPC_WEAK_FUNC(sub_82A53200);
PPC_FUNC_IMPL(__imp__sub_82A53200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// lbz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
loc_82A5323C:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lbzu r9,5(r10)
	ea = 5 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// bdnz 0x82a5323c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5323C;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A532B0"))) PPC_WEAK_FUNC(sub_82A532B0);
PPC_FUNC_IMPL(__imp__sub_82A532B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A532B8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a53710
	if (cr6.eq) goto loc_82A53710;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a53710
	if (!cr6.lt) goto loc_82A53710;
	// li r22,0
	ctx.r22.s64 = 0;
	// clrlwi r21,r10,24
	ctx.r21.u64 = ctx.r10.u32 & 0xFF;
	// stw r22,22676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22676, ctx.r22.u32);
	// addi r27,r9,560
	ctx.r27.s64 = ctx.r9.s64 + 560;
	// stw r22,22672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22672, ctx.r22.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a53308
	if (cr6.eq) goto loc_82A53308;
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// addi r11,r11,-21768
	ctx.r11.s64 = ctx.r11.s64 + -21768;
	// b 0x82a5330c
	goto loc_82A5330C;
loc_82A53308:
	// addi r11,r27,19968
	ctx.r11.s64 = ctx.r27.s64 + 19968;
loc_82A5330C:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r8,870
	ctx.r8.s64 = 870;
	// addi r9,r3,19176
	ctx.r9.s64 = ctx.r3.s64 + 19176;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// sth r7,19176(r3)
	PPC_STORE_U16(ctx.r3.u32 + 19176, ctx.r7.u16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwz r6,3484(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3484);
	// stw r6,22660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22660, ctx.r6.u32);
	// lwz r5,3488(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3488);
	// stw r5,22664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22664, ctx.r5.u32);
	// lbz r4,3492(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3492);
	// stb r4,22668(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22668, ctx.r4.u8);
loc_82A53340:
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a53340
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A53340;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
loc_82A53358:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r27,24560
	ctx.r10.s64 = ctx.r27.s64 + 24560;
	// bne cr6,0x82a53370
	if (!cr6.eq) goto loc_82A53370;
	// addi r10,r27,760
	ctx.r10.s64 = ctx.r27.s64 + 760;
loc_82A53370:
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53380
	if (cr6.lt) goto loc_82A53380;
	// addi r10,r10,720
	ctx.r10.s64 = ctx.r10.s64 + 720;
	// b 0x82a53390
	goto loc_82A53390;
loc_82A53380:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82A53390:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,17740(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 17740);
	// rlwinm r8,r7,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// rlwinm r4,r9,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a533bc
	if (!cr6.eq) goto loc_82A533BC;
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// clrlwi r4,r9,14
	ctx.r4.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a533c0
	if (cr6.eq) goto loc_82A533C0;
loc_82A533BC:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
loc_82A533C0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a53584
	if (!cr6.eq) goto loc_82A53584;
	// lwz r9,22672(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22672);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,22672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22672, ctx.r9.u32);
	// bge cr6,0x82a53578
	if (!cr6.lt) goto loc_82A53578;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a53578
	if (cr0.eq) goto loc_82A53578;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r26,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 14) & 0x3FFF;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// rlwimi r31,r4,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r4,r31,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r4,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// lbz r4,5(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r4,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// lbz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r4,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// lbz r4,7(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r4,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r4.u8);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lbz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// stb r4,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r4.u8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// bne cr6,0x82a53474
	if (!cr6.eq) goto loc_82A53474;
	// xor r10,r7,r26
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r26.u64;
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a53478
	if (cr6.eq) goto loc_82A53478;
loc_82A53474:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82A53478:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a534b4
	if (!cr6.eq) goto loc_82A534B4;
	// rlwinm r10,r25,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a534a4
	if (!cr6.eq) goto loc_82A534A4;
	// xor r10,r7,r25
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r25.u64;
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a534a8
	if (cr6.eq) goto loc_82A534A8;
loc_82A534A4:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82A534A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a53578
	if (cr6.eq) goto loc_82A53578;
loc_82A534B4:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a534d0
	if (!cr6.eq) goto loc_82A534D0;
	// xor r10,r7,r26
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r26.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a534d4
	if (cr6.eq) goto loc_82A534D4;
loc_82A534D0:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82A534D4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bne cr6,0x82a534ec
	if (!cr6.eq) goto loc_82A534EC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82A534EC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82a53508
	if (!cr6.eq) goto loc_82A53508;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82A53508:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blt cr6,0x82a53528
	if (cr6.lt) goto loc_82A53528;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82A53528:
	// cmpw cr6,r24,r23
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, xer);
	// ble cr6,0x82a5354c
	if (!cr6.gt) goto loc_82A5354C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a53558
	if (cr6.eq) goto loc_82A53558;
loc_82A53538:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// b 0x82a53578
	goto loc_82A53578;
loc_82A5354C:
	// bge cr6,0x82a5356c
	if (!cr6.lt) goto loc_82A5356C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a53538
	if (cr6.eq) goto loc_82A53538;
loc_82A53558:
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// b 0x82a53578
	goto loc_82A53578;
loc_82A5356C:
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
loc_82A53578:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r5,30
	cr6.compare<uint32_t>(ctx.r5.u32, 30, xer);
	// blt cr6,0x82a53358
	if (cr6.lt) goto loc_82A53358;
loc_82A53584:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r30,r3,764
	ctx.r30.s64 = ctx.r3.s64 + 764;
	// subfic r29,r3,740
	xer.ca = ctx.r3.u32 <= 740;
	ctx.r29.s64 = 740 - ctx.r3.s64;
loc_82A53590:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a535b8
	if (cr6.eq) goto loc_82A535B8;
	// addi r11,r27,23800
	ctx.r11.s64 = ctx.r27.s64 + 23800;
	// cmpwi cr6,r28,576
	cr6.compare<int32_t>(ctx.r28.s32, 576, xer);
	// blt cr6,0x82a535ac
	if (cr6.lt) goto loc_82A535AC;
	// addi r31,r11,19936
	ctx.r31.s64 = ctx.r11.s64 + 19936;
	// b 0x82a535d0
	goto loc_82A535D0;
loc_82A535AC:
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82a535d0
	goto loc_82A535D0;
loc_82A535B8:
	// cmpwi cr6,r28,576
	cr6.compare<int32_t>(ctx.r28.s32, 576, xer);
	// blt cr6,0x82a535c8
	if (cr6.lt) goto loc_82A535C8;
	// addi r31,r27,19936
	ctx.r31.s64 = ctx.r27.s64 + 19936;
	// b 0x82a535d0
	goto loc_82A535D0;
loc_82A535C8:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82A535D0:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82a53700
	if (cr6.eq) goto loc_82A53700;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// bl 0x82a53200
	ctx.lr = 0x82A535E8;
	sub_82A53200(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a53700
	if (!cr6.eq) goto loc_82A53700;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bne cr6,0x82a53680
	if (!cr6.eq) goto loc_82A53680;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// xor r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a53624
	if (!cr6.eq) goto loc_82A53624;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a53628
	if (cr6.eq) goto loc_82A53628;
loc_82A53624:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A53628:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a53700
	if (cr6.eq) goto loc_82A53700;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// xor r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a5365c
	if (!cr6.eq) goto loc_82A5365C;
	// xor r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a53660
	if (cr6.eq) goto loc_82A53660;
loc_82A5365C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A53660:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a53700
	if (cr6.eq) goto loc_82A53700;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// stb r11,-15(r30)
	PPC_STORE_U8(ctx.r30.u32 + -15, ctx.r11.u8);
	// stb r10,-10(r30)
	PPC_STORE_U8(ctx.r30.u32 + -10, ctx.r10.u8);
	// b 0x82a53700
	goto loc_82A53700;
loc_82A53680:
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(ctx.r20.s32, 1, xer);
	// bne cr6,0x82a53700
	if (!cr6.eq) goto loc_82A53700;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// xor r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a536b0
	if (!cr6.eq) goto loc_82A536B0;
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r26.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a536b4
	if (cr6.eq) goto loc_82A536B4;
loc_82A536B0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A536B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a53700
	if (cr6.eq) goto loc_82A53700;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// xor r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a536e8
	if (!cr6.eq) goto loc_82A536E8;
	// xor r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a536ec
	if (cr6.eq) goto loc_82A536EC;
loc_82A536E8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A536EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a53700
	if (cr6.eq) goto loc_82A53700;
	// stb r23,-15(r30)
	PPC_STORE_U8(ctx.r30.u32 + -15, ctx.r23.u8);
	// stb r24,-10(r30)
	PPC_STORE_U8(ctx.r30.u32 + -10, ctx.r24.u8);
loc_82A53700:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplwi cr6,r28,576
	cr6.compare<uint32_t>(ctx.r28.u32, 576, xer);
	// blt cr6,0x82a53590
	if (cr6.lt) goto loc_82A53590;
loc_82A53710:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A53718"))) PPC_WEAK_FUNC(sub_82A53718);
PPC_FUNC_IMPL(__imp__sub_82A53718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A53720;
	__savegprlr_27(ctx, base);
	// lwz r11,22672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22672);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a53870
	if (!cr6.lt) goto loc_82A53870;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a53870
	if (!cr6.lt) goto loc_82A53870;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53748
	if (cr6.lt) goto loc_82A53748;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a53758
	goto loc_82A53758;
loc_82A53748:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82A53758:
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r8,30
	cr6.compare<uint32_t>(ctx.r8.u32, 30, xer);
	// blt cr6,0x82a5376c
	if (cr6.lt) goto loc_82A5376C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82a5377c
	goto loc_82A5377C;
loc_82A5376C:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82A5377C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a53870
	if (cr6.eq) goto loc_82A53870;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a53870
	if (cr6.eq) goto loc_82A53870;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a5379c
	if (cr6.lt) goto loc_82A5379C;
	// addi r11,r3,720
	ctx.r11.s64 = ctx.r3.s64 + 720;
	// b 0x82a537ac
	goto loc_82A537AC;
loc_82A5379C:
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A537AC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,30
	cr6.compare<uint32_t>(ctx.r8.u32, 30, xer);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r27,20(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blt cr6,0x82a537e0
	if (cr6.lt) goto loc_82A537E0;
	// addi r11,r3,720
	ctx.r11.s64 = ctx.r3.s64 + 720;
	// b 0x82a537f0
	goto loc_82A537F0;
loc_82A537E0:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A537F0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r8,r3,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r8,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r3,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// stb r8,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r8.u8);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stb r6,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r6.u8);
	// stb r5,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r5.u8);
	// stb r4,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r4.u8);
	// stb r31,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r31.u8);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// stw r29,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r29.u32);
	// stb r28,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r28.u8);
	// stw r27,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r27.u32);
loc_82A53870:
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A53874"))) PPC_WEAK_FUNC(sub_82A53874);
PPC_FUNC_IMPL(__imp__sub_82A53874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A53878"))) PPC_WEAK_FUNC(sub_82A53878);
PPC_FUNC_IMPL(__imp__sub_82A53878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r6,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3FFF;
loc_82A53888:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a538a0
	if (cr6.lt) goto loc_82A538A0;
	// addi r11,r9,720
	ctx.r11.s64 = ctx.r9.s64 + 720;
	// b 0x82a538b0
	goto loc_82A538B0;
loc_82A538A0:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A538B0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bne cr6,0x82a538d4
	if (!cr6.eq) goto loc_82A538D4;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a538d8
	if (cr6.eq) goto loc_82A538D8;
loc_82A538D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A538D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a538f8
	if (!cr6.eq) goto loc_82A538F8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,30
	cr6.compare<uint32_t>(ctx.r8.u32, 30, xer);
	// blt cr6,0x82a53888
	if (cr6.lt) goto loc_82A53888;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A538F8:
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// bge cr6,0x82a53914
	if (!cr6.lt) goto loc_82A53914;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a5391c
	if (!cr0.eq) goto loc_82A5391C;
loc_82A53914:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5391C:
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a53960
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A53960;
	// bdzf 4*cr6+eq,0x82a53970
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A53970;
	// bdzf 4*cr6+eq,0x82a53984
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A53984;
	// bdzf 4*cr6+eq,0x82a53978
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A53978;
	// bne cr6,0x82a53980
	if (!cr6.eq) goto loc_82A53980;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82A53960:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
loc_82A53970:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
loc_82A53978:
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// blr 
	return;
loc_82A53980:
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
loc_82A53984:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A53988"))) PPC_WEAK_FUNC(sub_82A53988);
PPC_FUNC_IMPL(__imp__sub_82A53988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,576
	cr6.compare<uint32_t>(ctx.r11.u32, 576, xer);
	// bge cr6,0x82a53aa8
	if (!cr6.lt) goto loc_82A53AA8;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r6,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3FFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,744
	ctx.r9.s64 = ctx.r11.s64 + 744;
	// lwz r8,760(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// rlwinm r4,r8,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a539c8
	if (!cr6.eq) goto loc_82A539C8;
	// xor r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a539cc
	if (cr6.eq) goto loc_82A539CC;
loc_82A539C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A539CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a53a10
	if (cr6.eq) goto loc_82A53A10;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// xor r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// rlwinm r3,r3,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a53a00
	if (!cr6.eq) goto loc_82A53A00;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a53a04
	if (cr6.eq) goto loc_82A53A04;
loc_82A53A00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A53A04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a53a74
	if (!cr6.eq) goto loc_82A53A74;
loc_82A53A10:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r3,r11,14,18,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a53a34
	if (!cr6.eq) goto loc_82A53A34;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a53a38
	if (cr6.eq) goto loc_82A53A38;
loc_82A53A34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A53A38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a53a7c
	if (cr6.eq) goto loc_82A53A7C;
	// rlwinm r11,r7,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a53a64
	if (!cr6.eq) goto loc_82A53A64;
	// xor r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a53a68
	if (cr6.eq) goto loc_82A53A68;
loc_82A53A64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A53A68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a53a7c
	if (cr6.eq) goto loc_82A53A7C;
loc_82A53A74:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a53a80
	goto loc_82A53A80;
loc_82A53A7C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A53A80:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82a53aa8
	if (cr6.eq) goto loc_82A53AA8;
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a53aa8
	if (!cr6.eq) goto loc_82A53AA8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A53AA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A53AB0"))) PPC_WEAK_FUNC(sub_82A53AB0);
PPC_FUNC_IMPL(__imp__sub_82A53AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,22676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22676);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82a53b2c
	if (cr6.eq) goto loc_82A53B2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r4,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
loc_82A53AC4:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53adc
	if (cr6.lt) goto loc_82A53ADC;
	// addi r11,r3,720
	ctx.r11.s64 = ctx.r3.s64 + 720;
	// b 0x82a53aec
	goto loc_82A53AEC;
loc_82A53ADC:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A53AEC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a53b10
	if (!cr6.eq) goto loc_82A53B10;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a53b14
	if (cr6.eq) goto loc_82A53B14;
loc_82A53B10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A53B14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a53b34
	if (!cr6.eq) goto loc_82A53B34;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// blt cr6,0x82a53ac4
	if (cr6.lt) goto loc_82A53AC4;
loc_82A53B2C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A53B34:
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// blt cr6,0x82a53b48
	if (cr6.lt) goto loc_82A53B48;
	// addi r11,r3,720
	ctx.r11.s64 = ctx.r3.s64 + 720;
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82A53B48:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A53B60"))) PPC_WEAK_FUNC(sub_82A53B60);
PPC_FUNC_IMPL(__imp__sub_82A53B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,22676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22676);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82a53bd8
	if (cr6.eq) goto loc_82A53BD8;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r4,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
loc_82A53B74:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53b88
	if (cr6.lt) goto loc_82A53B88;
	// addi r11,r3,720
	ctx.r11.s64 = ctx.r3.s64 + 720;
	// b 0x82a53b98
	goto loc_82A53B98;
loc_82A53B88:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A53B98:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a53bbc
	if (!cr6.eq) goto loc_82A53BBC;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a53bc0
	if (cr6.eq) goto loc_82A53BC0;
loc_82A53BBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A53BC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a53be0
	if (!cr6.eq) goto loc_82A53BE0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// blt cr6,0x82a53b74
	if (cr6.lt) goto loc_82A53B74;
loc_82A53BD8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A53BE0:
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A53BE8"))) PPC_WEAK_FUNC(sub_82A53BE8);
PPC_FUNC_IMPL(__imp__sub_82A53BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82a53bfc
	if (!cr6.eq) goto loc_82A53BFC;
	// blr 
	return;
loc_82A53BFC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r6,r11,65534
	ctx.r6.u64 = ctx.r11.u64 | 65534;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
loc_82A53C10:
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53c28
	if (cr6.lt) goto loc_82A53C28;
	// addi r11,r9,720
	ctx.r11.s64 = ctx.r9.s64 + 720;
	// b 0x82a53c38
	goto loc_82A53C38;
loc_82A53C28:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A53C38:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a53c48
	if (!cr6.eq) goto loc_82A53C48;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A53C48:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53c60
	if (cr6.lt) goto loc_82A53C60;
	// addi r11,r9,720
	ctx.r11.s64 = ctx.r9.s64 + 720;
	// b 0x82a53c70
	goto loc_82A53C70;
loc_82A53C60:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A53C70:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a53c80
	if (!cr6.eq) goto loc_82A53C80;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A53C80:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53c94
	if (cr6.lt) goto loc_82A53C94;
	// addi r11,r9,720
	ctx.r11.s64 = ctx.r9.s64 + 720;
	// b 0x82a53ca4
	goto loc_82A53CA4;
loc_82A53C94:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A53CA4:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a53cb4
	if (!cr6.eq) goto loc_82A53CB4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A53CB4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53ccc
	if (cr6.lt) goto loc_82A53CCC;
	// addi r11,r9,720
	ctx.r11.s64 = ctx.r9.s64 + 720;
	// b 0x82a53cdc
	goto loc_82A53CDC;
loc_82A53CCC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A53CDC:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a53cec
	if (!cr6.eq) goto loc_82A53CEC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A53CEC:
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53d04
	if (cr6.lt) goto loc_82A53D04;
	// addi r11,r9,720
	ctx.r11.s64 = ctx.r9.s64 + 720;
	// b 0x82a53d14
	goto loc_82A53D14;
loc_82A53D04:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A53D14:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a53d24
	if (!cr6.eq) goto loc_82A53D24;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A53D24:
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53d3c
	if (cr6.lt) goto loc_82A53D3C;
	// addi r11,r9,720
	ctx.r11.s64 = ctx.r9.s64 + 720;
	// b 0x82a53d4c
	goto loc_82A53D4C;
loc_82A53D3C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A53D4C:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82a53d5c
	if (!cr6.eq) goto loc_82A53D5C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A53D5C:
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a53c10
	if (cr6.lt) goto loc_82A53C10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A53D70"))) PPC_WEAK_FUNC(sub_82A53D70);
PPC_FUNC_IMPL(__imp__sub_82A53D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A53D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a273a0
	ctx.lr = 0x82A53D84;
	sub_82A273A0(ctx, base);
	// addi r30,r31,744
	ctx.r30.s64 = ctx.r31.s64 + 744;
	// li r29,575
	ctx.r29.s64 = 575;
loc_82A53D8C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,25168
	ctx.r6.s64 = ctx.r11.s64 + 25168;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x823fca98
	ctx.lr = 0x82A53DA4;
	sub_823FCA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a257c8
	ctx.lr = 0x82A53DAC;
	sub_82A257C8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bge 0x82a53d8c
	if (!cr0.lt) goto loc_82A53D8C;
	// addi r11,r31,19176
	ctx.r11.s64 = ctx.r31.s64 + 19176;
	// li r10,870
	ctx.r10.s64 = 870;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,22660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22660, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r9,22668(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22668, ctx.r9.u8);
	// sth r8,19176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 19176, ctx.r8.u16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r7,22664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22664, ctx.r7.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82A53DE8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a53de8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A53DE8;
	// stw r9,22672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22672, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,22676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22676, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A53E04"))) PPC_WEAK_FUNC(sub_82A53E04);
PPC_FUNC_IMPL(__imp__sub_82A53E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A53E08"))) PPC_WEAK_FUNC(sub_82A53E08);
PPC_FUNC_IMPL(__imp__sub_82A53E08) {
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
	// li r4,22680
	ctx.r4.s64 = 22680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A53E2C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a53e40
	if (cr6.eq) goto loc_82A53E40;
	// bl 0x82a53d70
	ctx.lr = 0x82A53E38;
	sub_82A53D70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a53e44
	if (!cr6.eq) goto loc_82A53E44;
loc_82A53E40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A53E44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A53E54"))) PPC_WEAK_FUNC(sub_82A53E54);
PPC_FUNC_IMPL(__imp__sub_82A53E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A53E58"))) PPC_WEAK_FUNC(sub_82A53E58);
PPC_FUNC_IMPL(__imp__sub_82A53E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A53E60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a53988
	ctx.lr = 0x82A53E84;
	sub_82A53988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a53f70
	if (cr6.eq) goto loc_82A53F70;
	// rlwinm r11,r30,5,11,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0x1FFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// xor r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a53ec4
	if (!cr6.eq) goto loc_82A53EC4;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x82a53ec8
	if (cr6.eq) goto loc_82A53EC8;
loc_82A53EC4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A53EC8:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r30,r6,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r6,13(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cntlzw r27,r30
	ctx.r27.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lbz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lbz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r27,29,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x4;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwzx r4,r6,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// lwzx r3,r5,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x82a53f5c
	if (!cr6.gt) goto loc_82A53F5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A53F5C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a53f70
	if (!cr6.eq) goto loc_82A53F70;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82A53F70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A53F78"))) PPC_WEAK_FUNC(sub_82A53F78);
PPC_FUNC_IMPL(__imp__sub_82A53F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A53F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a53988
	ctx.lr = 0x82A53FA4;
	sub_82A53988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a54064
	if (cr6.eq) goto loc_82A54064;
	// rlwinm r11,r29,5,11,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x1FFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// xor r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a53fe4
	if (!cr6.eq) goto loc_82A53FE4;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x82a53fe8
	if (cr6.eq) goto loc_82A53FE8;
loc_82A53FE4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A53FE8:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r30,r6,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lbz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,29,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x4;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r7,r4,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// subf r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_82A54064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5406C"))) PPC_WEAK_FUNC(sub_82A5406C);
PPC_FUNC_IMPL(__imp__sub_82A5406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A54070"))) PPC_WEAK_FUNC(sub_82A54070);
PPC_FUNC_IMPL(__imp__sub_82A54070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A54078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a53988
	ctx.lr = 0x82A5409C;
	sub_82A53988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a54120
	if (cr6.eq) goto loc_82A54120;
	// rlwinm r11,r29,5,11,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x1FFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// xor r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a540dc
	if (!cr6.eq) goto loc_82A540DC;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a540e0
	if (cr6.eq) goto loc_82A540E0;
loc_82A540DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A540E0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a54120
	if (!cr6.eq) goto loc_82A54120;
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,11(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A54120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A54128"))) PPC_WEAK_FUNC(sub_82A54128);
PPC_FUNC_IMPL(__imp__sub_82A54128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A54130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a53988
	ctx.lr = 0x82A54154;
	sub_82A53988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a541e4
	if (cr6.eq) goto loc_82A541E4;
	// rlwinm r11,r29,5,11,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x1FFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,744
	ctx.r10.s64 = ctx.r11.s64 + 744;
	// lwz r11,760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	// xor r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a54194
	if (!cr6.eq) goto loc_82A54194;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a54198
	if (cr6.eq) goto loc_82A54198;
loc_82A54194:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A54198:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82A541E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A541EC"))) PPC_WEAK_FUNC(sub_82A541EC);
PPC_FUNC_IMPL(__imp__sub_82A541EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A541F0"))) PPC_WEAK_FUNC(sub_82A541F0);
PPC_FUNC_IMPL(__imp__sub_82A541F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A541F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,764
	ctx.r31.s64 = ctx.r3.s64 + 764;
loc_82A54214:
	// lhz r6,-18(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + -18);
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// beq cr6,0x82a54270
	if (cr6.eq) goto loc_82A54270;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a54248
	if (!cr6.eq) goto loc_82A54248;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a5424c
	if (cr6.eq) goto loc_82A5424C;
loc_82A54248:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A5424C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a54270
	if (cr6.eq) goto loc_82A54270;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a54070
	ctx.lr = 0x82A54270;
	sub_82A54070(ctx, base);
loc_82A54270:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r29,576
	cr6.compare<uint32_t>(ctx.r29.u32, 576, xer);
	// blt cr6,0x82a54214
	if (cr6.lt) goto loc_82A54214;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5428C"))) PPC_WEAK_FUNC(sub_82A5428C);
PPC_FUNC_IMPL(__imp__sub_82A5428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A54290"))) PPC_WEAK_FUNC(sub_82A54290);
PPC_FUNC_IMPL(__imp__sub_82A54290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A54298;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r3,760
	ctx.r27.s64 = ctx.r3.s64 + 760;
loc_82A542BC:
	// lhz r6,-14(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + -14);
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// beq cr6,0x82a54424
	if (cr6.eq) goto loc_82A54424;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r31,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// rlwinm r8,r9,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a542f0
	if (!cr6.eq) goto loc_82A542F0;
	// xor r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a542f4
	if (cr6.eq) goto loc_82A542F4;
loc_82A542F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A542F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a54334
	if (!cr6.eq) goto loc_82A54334;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a54324
	if (!cr6.eq) goto loc_82A54324;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a54328
	if (cr6.eq) goto loc_82A54328;
loc_82A54324:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A54328:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a54424
	if (cr6.eq) goto loc_82A54424;
loc_82A54334:
	// rlwinm r10,r30,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a54354
	if (!cr6.eq) goto loc_82A54354;
	// xor r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a54358
	if (cr6.eq) goto loc_82A54358;
loc_82A54354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A54358:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a54398
	if (!cr6.eq) goto loc_82A54398;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a54388
	if (!cr6.eq) goto loc_82A54388;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a5438c
	if (cr6.eq) goto loc_82A5438C;
loc_82A54388:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A5438C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a54424
	if (cr6.eq) goto loc_82A54424;
loc_82A54398:
	// addi r11,r26,-7
	ctx.r11.s64 = ctx.r26.s64 + -7;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82a54424
	if (cr6.gt) goto loc_82A54424;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a543d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A543D4;
	// bdzf 4*cr6+eq,0x82a543f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A543F0;
	// bne cr6,0x82a5440c
	if (!cr6.eq) goto loc_82A5440C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a53e58
	ctx.lr = 0x82A543D0;
	sub_82A53E58(ctx, base);
	// b 0x82a54424
	goto loc_82A54424;
loc_82A543D4:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a53f78
	ctx.lr = 0x82A543EC;
	sub_82A53F78(ctx, base);
	// b 0x82a54424
	goto loc_82A54424;
loc_82A543F0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a54070
	ctx.lr = 0x82A54408;
	sub_82A54070(ctx, base);
	// b 0x82a54424
	goto loc_82A54424;
loc_82A5440C:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a54128
	ctx.lr = 0x82A54424;
	sub_82A54128(ctx, base);
loc_82A54424:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmplwi cr6,r29,576
	cr6.compare<uint32_t>(ctx.r29.u32, 576, xer);
	// blt cr6,0x82a542bc
	if (cr6.lt) goto loc_82A542BC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A54440"))) PPC_WEAK_FUNC(sub_82A54440);
PPC_FUNC_IMPL(__imp__sub_82A54440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82A54448;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bne cr6,0x82a54530
	if (!cr6.eq) goto loc_82A54530;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// subf r29,r6,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82A54490:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82A5449C;
	sub_835977D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x82a54490
	if (!cr6.gt) goto loc_82A54490;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r28,-4
	ctx.r30.s64 = ctx.r28.s64 + -4;
loc_82A544B8:
	// add r11,r31,r19
	ctx.r11.u64 = ctx.r31.u64 + ctx.r19.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a544d0
	if (cr6.lt) goto loc_82A544D0;
	// addi r11,r27,720
	ctx.r11.s64 = ctx.r27.s64 + 720;
	// b 0x82a544e0
	goto loc_82A544E0;
loc_82A544D0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82A544E0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83546fd8
	ctx.lr = 0x82A544FC;
	sub_83546FD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// ble cr6,0x82a544b8
	if (!cr6.gt) goto loc_82A544B8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a548c4
	if (cr6.eq) goto loc_82A548C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82A54524;
	sub_825952B8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82A54530:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// cmplw cr6,r19,r24
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r24.u32, xer);
	// bgt cr6,0x82a548c4
	if (cr6.gt) goto loc_82A548C4;
	// lis r22,-31778
	ctx.r22.s64 = -2082603008;
	// lwz r9,17740(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17740);
loc_82A54544:
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a54558
	if (cr6.lt) goto loc_82A54558;
	// addi r11,r27,720
	ctx.r11.s64 = ctx.r27.s64 + 720;
	// b 0x82a54568
	goto loc_82A54568;
loc_82A54558:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82A54568:
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// rlwinm r25,r28,14,18,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a54590
	if (!cr6.eq) goto loc_82A54590;
	// xor r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a54594
	if (cr6.eq) goto loc_82A54594;
loc_82A54590:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A54594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a548b8
	if (!cr6.eq) goto loc_82A548B8;
	// addi r11,r21,-1
	ctx.r11.s64 = ctx.r21.s64 + -1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82a548a0
	if (cr6.gt) goto loc_82A548A0;
	// lis r12,-32091
	ctx.r12.s64 = -2103115776;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17864
	ctx.r12.s64 = ctx.r12.s64 + 17864;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A545F0;
	case 1:
		goto loc_82A5460C;
	case 2:
		goto loc_82A54628;
	case 3:
		goto loc_82A54644;
	case 4:
		goto loc_82A5465C;
	case 5:
		goto loc_82A54678;
	case 6:
		goto loc_82A54694;
	case 7:
		goto loc_82A54718;
	case 8:
		goto loc_82A5479C;
	case 9:
		goto loc_82A54820;
	default:
		return;
	}
	// lwz r21,17904(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 17904);
	// lwz r21,17932(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 17932);
	// lwz r21,17960(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 17960);
	// lwz r21,17988(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 17988);
	// lwz r21,18012(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18012);
	// lwz r21,18040(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18040);
	// lwz r21,18068(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18068);
	// lwz r21,18200(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18200);
	// lwz r21,18332(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18332);
	// lwz r21,18464(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18464);
loc_82A545F0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a53878
	ctx.lr = 0x82A54604;
	sub_82A53878(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A5460C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a53878
	ctx.lr = 0x82A54620;
	sub_82A53878(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A54628:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a53878
	ctx.lr = 0x82A5463C;
	sub_82A53878(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A54644:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a541f0
	ctx.lr = 0x82A54654;
	sub_82A541F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A5465C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a53878
	ctx.lr = 0x82A54670;
	sub_82A53878(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A54678:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a53878
	ctx.lr = 0x82A5468C;
	sub_82A53878(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A54694:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82A54698:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a546ac
	if (cr6.lt) goto loc_82A546AC;
	// addi r11,r27,720
	ctx.r11.s64 = ctx.r27.s64 + 720;
	// b 0x82a546bc
	goto loc_82A546BC;
loc_82A546AC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82A546BC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r7,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a546e0
	if (!cr6.eq) goto loc_82A546E0;
	// xor r11,r7,r28
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a546e4
	if (cr6.eq) goto loc_82A546E4;
loc_82A546E0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A546E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a54708
	if (!cr6.eq) goto loc_82A54708;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a54290
	ctx.lr = 0x82A54704;
	sub_82A54290(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_82A54708:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// ble cr6,0x82a54698
	if (!cr6.gt) goto loc_82A54698;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A54718:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82A5471C:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a54730
	if (cr6.lt) goto loc_82A54730;
	// addi r11,r27,720
	ctx.r11.s64 = ctx.r27.s64 + 720;
	// b 0x82a54740
	goto loc_82A54740;
loc_82A54730:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82A54740:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r7,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a54764
	if (!cr6.eq) goto loc_82A54764;
	// xor r11,r7,r28
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a54768
	if (cr6.eq) goto loc_82A54768;
loc_82A54764:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A54768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5478c
	if (!cr6.eq) goto loc_82A5478C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a54290
	ctx.lr = 0x82A54788;
	sub_82A54290(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_82A5478C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// ble cr6,0x82a5471c
	if (!cr6.gt) goto loc_82A5471C;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A5479C:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82A547A0:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a547b4
	if (cr6.lt) goto loc_82A547B4;
	// addi r11,r27,720
	ctx.r11.s64 = ctx.r27.s64 + 720;
	// b 0x82a547c4
	goto loc_82A547C4;
loc_82A547B4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82A547C4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r7,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a547e8
	if (!cr6.eq) goto loc_82A547E8;
	// xor r11,r7,r28
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a547ec
	if (cr6.eq) goto loc_82A547EC;
loc_82A547E8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A547EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a54810
	if (!cr6.eq) goto loc_82A54810;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a54290
	ctx.lr = 0x82A5480C;
	sub_82A54290(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_82A54810:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// ble cr6,0x82a547a0
	if (!cr6.gt) goto loc_82A547A0;
	// b 0x82a548a0
	goto loc_82A548A0;
loc_82A54820:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82A54824:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a54838
	if (cr6.lt) goto loc_82A54838;
	// addi r11,r27,720
	ctx.r11.s64 = ctx.r27.s64 + 720;
	// b 0x82a54848
	goto loc_82A54848;
loc_82A54838:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82A54848:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r7,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a5486c
	if (!cr6.eq) goto loc_82A5486C;
	// xor r11,r7,r28
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a54870
	if (cr6.eq) goto loc_82A54870;
loc_82A5486C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A54870:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a54894
	if (!cr6.eq) goto loc_82A54894;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a54290
	ctx.lr = 0x82A54890;
	sub_82A54290(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_82A54894:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// ble cr6,0x82a54824
	if (!cr6.gt) goto loc_82A54824;
loc_82A548A0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82A548B4;
	sub_83546FD8(ctx, base);
	// lwz r9,17740(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17740);
loc_82A548B8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, xer);
	// ble cr6,0x82a54544
	if (!cr6.gt) goto loc_82A54544;
loc_82A548C4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A548D0"))) PPC_WEAK_FUNC(sub_82A548D0);
PPC_FUNC_IMPL(__imp__sub_82A548D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82A548D8;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82a54908
	if (!cr6.eq) goto loc_82A54908;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A54908:
	// lwz r11,22660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22660);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// blt cr6,0x82a54918
	if (cr6.lt) goto loc_82A54918;
	// li r22,12
	ctx.r22.s64 = 12;
loc_82A54918:
	// cmplwi cr6,r27,30
	cr6.compare<uint32_t>(ctx.r27.u32, 30, xer);
	// bge cr6,0x82a54d04
	if (!cr6.lt) goto loc_82A54D04;
	// cmplwi cr6,r20,30
	cr6.compare<uint32_t>(ctx.r20.u32, 30, xer);
	// bge cr6,0x82a54d04
	if (!cr6.lt) goto loc_82A54D04;
	// addi r11,r22,4795
	ctx.r11.s64 = ctx.r22.s64 + 4795;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(ctx.r31.s32, 12, xer);
	// bne cr6,0x82a54a08
	if (!cr6.eq) goto loc_82A54A08;
	// cmplw cr6,r27,r20
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, xer);
	// bgt cr6,0x82a54cf8
	if (cr6.gt) goto loc_82A54CF8;
loc_82A54948:
	// addi r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r20
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, xer);
	// bgt cr6,0x82a549f0
	if (cr6.gt) goto loc_82A549F0;
	// subf r11,r31,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A54968:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a5497c
	if (cr6.lt) goto loc_82A5497C;
	// addi r11,r29,720
	ctx.r11.s64 = ctx.r29.s64 + 720;
	// b 0x82a5498c
	goto loc_82A5498C;
loc_82A5497C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82A5498C:
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82a549d4
	if (cr6.eq) goto loc_82A549D4;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a549ac
	if (cr6.lt) goto loc_82A549AC;
	// addi r11,r29,720
	ctx.r11.s64 = ctx.r29.s64 + 720;
	// b 0x82a549bc
	goto loc_82A549BC;
loc_82A549AC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82A549BC:
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82a549d0
	if (cr6.eq) goto loc_82A549D0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82a549d4
	if (!cr6.gt) goto loc_82A549D4;
loc_82A549D0:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_82A549D4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82a54968
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A54968;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82a549f0
	if (cr6.eq) goto loc_82A549F0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a53718
	ctx.lr = 0x82A549F0;
	sub_82A53718(ctx, base);
loc_82A549F0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r20
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, xer);
	// ble cr6,0x82a54948
	if (!cr6.gt) goto loc_82A54948;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82A54A08:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a54440
	ctx.lr = 0x82A54A20;
	sub_82A54440(ctx, base);
	// lis r25,32767
	ctx.r25.s64 = 2147418112;
	// stw r31,22676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 22676, ctx.r31.u32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// ori r25,r25,65535
	ctx.r25.u64 = ctx.r25.u64 | 65535;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r20
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, xer);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bgt cr6,0x82a54c1c
	if (cr6.gt) goto loc_82A54C1C;
	// lwz r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82A54A44:
	// cmplwi cr6,r28,30
	cr6.compare<uint32_t>(ctx.r28.u32, 30, xer);
	// bge cr6,0x82a54c10
	if (!cr6.lt) goto loc_82A54C10;
	// subf r11,r23,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r23.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// srawi r4,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a54af0
	if (cr6.eq) goto loc_82A54AF0;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x82a54ad0
	if (!cr6.lt) goto loc_82A54AD0;
loc_82A54A70:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a54a84
	if (cr6.lt) goto loc_82A54A84;
	// addi r11,r29,720
	ctx.r11.s64 = ctx.r29.s64 + 720;
	// b 0x82a54a94
	goto loc_82A54A94;
loc_82A54A84:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82A54A94:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82a54ac0
	if (!cr6.eq) goto loc_82A54AC0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a54ac4
	if (cr6.eq) goto loc_82A54AC4;
loc_82A54AC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A54AC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a54ae4
	if (!cr6.eq) goto loc_82A54AE4;
loc_82A54AD0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// blt cr6,0x82a54a70
	if (cr6.lt) goto loc_82A54A70;
	// b 0x82a54af0
	goto loc_82A54AF0;
loc_82A54AE4:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82A54AF0:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bgt cr6,0x82a54bd8
	if (cr6.gt) goto loc_82A54BD8;
loc_82A54B04:
	// cmplwi cr6,r6,30
	cr6.compare<uint32_t>(ctx.r6.u32, 30, xer);
	// bge cr6,0x82a54bb4
	if (!cr6.lt) goto loc_82A54BB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a54bb4
	if (cr6.eq) goto loc_82A54BB4;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82A54B20:
	// cmplwi cr6,r8,30
	cr6.compare<uint32_t>(ctx.r8.u32, 30, xer);
	// blt cr6,0x82a54b30
	if (cr6.lt) goto loc_82A54B30;
	// addi r11,r29,720
	ctx.r11.s64 = ctx.r29.s64 + 720;
	// b 0x82a54b40
	goto loc_82A54B40;
loc_82A54B30:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82A54B40:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r3,r3,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a54b6c
	if (!cr6.eq) goto loc_82A54B6C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a54b70
	if (cr6.eq) goto loc_82A54B70;
loc_82A54B6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A54B70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a54b84
	if (cr6.eq) goto loc_82A54B84;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// blt cr6,0x82a54b98
	if (cr6.lt) goto loc_82A54B98;
loc_82A54B84:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// blt cr6,0x82a54b20
	if (cr6.lt) goto loc_82A54B20;
	// b 0x82a54bb4
	goto loc_82A54BB4;
loc_82A54B98:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// ble cr6,0x82a54bb4
	if (!cr6.gt) goto loc_82A54BB4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A54BB4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r20
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r20.u32, xer);
	// ble cr6,0x82a54b04
	if (!cr6.gt) goto loc_82A54B04;
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, xer);
	// beq cr6,0x82a54bd8
	if (cr6.eq) goto loc_82A54BD8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a53718
	ctx.lr = 0x82A54BD8;
	sub_82A53718(ctx, base);
loc_82A54BD8:
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// bge cr6,0x82a54be8
	if (!cr6.lt) goto loc_82A54BE8;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82A54BE8:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bge cr6,0x82a54c0c
	if (!cr6.lt) goto loc_82A54C0C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82a54c0c
	if (cr0.eq) goto loc_82A54C0C;
	// stb r26,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r26.u8);
loc_82A54C0C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82A54C10:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r20
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, xer);
	// ble cr6,0x82a54a44
	if (!cr6.gt) goto loc_82A54A44;
loc_82A54C1C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r20
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, xer);
	// bgt cr6,0x82a54cdc
	if (cr6.gt) goto loc_82A54CDC;
loc_82A54C28:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a54c3c
	if (cr6.lt) goto loc_82A54C3C;
	// addi r11,r29,720
	ctx.r11.s64 = ctx.r29.s64 + 720;
	// b 0x82a54c4c
	goto loc_82A54C4C;
loc_82A54C3C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82A54C4C:
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r9,r20
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, xer);
	// bgt cr6,0x82a54cd0
	if (cr6.gt) goto loc_82A54CD0;
	// subf r11,r9,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r9.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A54C6C:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a54c80
	if (cr6.lt) goto loc_82A54C80;
	// addi r11,r29,720
	ctx.r11.s64 = ctx.r29.s64 + 720;
	// b 0x82a54c90
	goto loc_82A54C90;
loc_82A54C80:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82A54C90:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a54ca0
	if (!cr6.eq) goto loc_82A54CA0;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82A54CA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82a54c6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A54C6C;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// beq cr6,0x82a54cd0
	if (cr6.eq) goto loc_82A54CD0;
	// addi r9,r21,1
	ctx.r9.s64 = ctx.r21.s64 + 1;
	// addi r7,r22,1
	ctx.r7.s64 = ctx.r22.s64 + 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a548d0
	ctx.lr = 0x82A54CC8;
	sub_82A548D0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82A54CD0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r20
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r20.u32, xer);
	// ble cr6,0x82a54c28
	if (!cr6.gt) goto loc_82A54C28;
loc_82A54CDC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82a54cf8
	if (cr6.eq) goto loc_82A54CF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A54CF8;
	sub_825952B8(ctx, base);
loc_82A54CF8:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82A54D04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A54D10"))) PPC_WEAK_FUNC(sub_82A54D10);
PPC_FUNC_IMPL(__imp__sub_82A54D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,22672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22672);
	// lhz r4,19176(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 19176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a54d28
	if (!cr6.eq) goto loc_82A54D28;
loc_82A54D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A54D28:
	// addic. r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82a54d20
	if (!cr0.gt) goto loc_82A54D20;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82a548d0
	sub_82A548D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A54D44"))) PPC_WEAK_FUNC(sub_82A54D44);
PPC_FUNC_IMPL(__imp__sub_82A54D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A54D48"))) PPC_WEAK_FUNC(sub_82A54D48);
PPC_FUNC_IMPL(__imp__sub_82A54D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a54d90
	if (cr6.lt) goto loc_82A54D90;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x82a54d90
	if (!cr6.lt) goto loc_82A54D90;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a54d90
	if (cr6.lt) goto loc_82A54D90;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x82a54d90
	if (!cr6.lt) goto loc_82A54D90;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// bne cr6,0x82a54d80
	if (!cr6.eq) goto loc_82A54D80;
	// addi r10,r11,-14184
	ctx.r10.s64 = ctx.r11.s64 + -14184;
	// lbzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// blr 
	return;
loc_82A54D80:
	// addi r11,r11,-14184
	ctx.r11.s64 = ctx.r11.s64 + -14184;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lbzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// blr 
	return;
loc_82A54D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A54D98"))) PPC_WEAK_FUNC(sub_82A54D98);
PPC_FUNC_IMPL(__imp__sub_82A54D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a54de0
	if (cr6.lt) goto loc_82A54DE0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x82a54de0
	if (!cr6.lt) goto loc_82A54DE0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a54de0
	if (cr6.lt) goto loc_82A54DE0;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x82a54de0
	if (!cr6.lt) goto loc_82A54DE0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// bne cr6,0x82a54dd0
	if (!cr6.eq) goto loc_82A54DD0;
	// addi r10,r11,-14168
	ctx.r10.s64 = ctx.r11.s64 + -14168;
	// lbzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// blr 
	return;
loc_82A54DD0:
	// addi r11,r11,-14168
	ctx.r11.s64 = ctx.r11.s64 + -14168;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lbzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// blr 
	return;
loc_82A54DE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A54DE8"))) PPC_WEAK_FUNC(sub_82A54DE8);
PPC_FUNC_IMPL(__imp__sub_82A54DE8) {
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
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a54e34
	if (cr6.eq) goto loc_82A54E34;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a54e34
	if (cr6.eq) goto loc_82A54E34;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A54E28;
	sub_825952B8(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
loc_82A54E34:
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

__attribute__((alias("__imp__sub_82A54E4C"))) PPC_WEAK_FUNC(sub_82A54E4C);
PPC_FUNC_IMPL(__imp__sub_82A54E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A54E50"))) PPC_WEAK_FUNC(sub_82A54E50);
PPC_FUNC_IMPL(__imp__sub_82A54E50) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-13916
	ctx.r9.s64 = ctx.r11.s64 + -13916;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a54e90
	if (cr6.eq) goto loc_82A54E90;
	// bl 0x82595188
	ctx.lr = 0x82A54E80;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A54E90;
	sub_825952B8(ctx, base);
loc_82A54E90:
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

__attribute__((alias("__imp__sub_82A54EA8"))) PPC_WEAK_FUNC(sub_82A54EA8);
PPC_FUNC_IMPL(__imp__sub_82A54EA8) {
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
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a54f00
	if (!cr6.lt) goto loc_82A54F00;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a58318
	ctx.lr = 0x82A54EDC;
	sub_82A58318(ctx, base);
	// lwz r10,632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// li r11,11
	ctx.r11.s64 = 11;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a54ef0
	if (!cr6.eq) goto loc_82A54EF0;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
loc_82A54EF0:
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a54f00
	if (!cr6.eq) goto loc_82A54F00;
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
loc_82A54F00:
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

__attribute__((alias("__imp__sub_82A54F18"))) PPC_WEAK_FUNC(sub_82A54F18);
PPC_FUNC_IMPL(__imp__sub_82A54F18) {
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
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
loc_82A54F34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57b58
	ctx.lr = 0x82A54F3C;
	sub_82A57B58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a54f74
	if (cr6.eq) goto loc_82A54F74;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82a54f34
	if (cr6.lt) goto loc_82A54F34;
	// li r3,11
	ctx.r3.s64 = 11;
loc_82A54F5C:
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
loc_82A54F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a54f5c
	goto loc_82A54F5C;
}

__attribute__((alias("__imp__sub_82A54F7C"))) PPC_WEAK_FUNC(sub_82A54F7C);
PPC_FUNC_IMPL(__imp__sub_82A54F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A54F80"))) PPC_WEAK_FUNC(sub_82A54F80);
PPC_FUNC_IMPL(__imp__sub_82A54F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r9,r4,56
	ctx.r9.s64 = ctx.r4.s64 * 56;
	// stw r4,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r4.u32);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r3,636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 636, ctx.r3.u32);
	// b 0x82a57188
	sub_82A57188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A54FAC"))) PPC_WEAK_FUNC(sub_82A54FAC);
PPC_FUNC_IMPL(__imp__sub_82A54FAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A54FB0"))) PPC_WEAK_FUNC(sub_82A54FB0);
PPC_FUNC_IMPL(__imp__sub_82A54FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,636(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82a57188
	sub_82A57188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A54FC0"))) PPC_WEAK_FUNC(sub_82A54FC0);
PPC_FUNC_IMPL(__imp__sub_82A54FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A54FC4"))) PPC_WEAK_FUNC(sub_82A54FC4);
PPC_FUNC_IMPL(__imp__sub_82A54FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A54FC8"))) PPC_WEAK_FUNC(sub_82A54FC8);
PPC_FUNC_IMPL(__imp__sub_82A54FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A54FDC"))) PPC_WEAK_FUNC(sub_82A54FDC);
PPC_FUNC_IMPL(__imp__sub_82A54FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A54FE0"))) PPC_WEAK_FUNC(sub_82A54FE0);
PPC_FUNC_IMPL(__imp__sub_82A54FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4004(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4004, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A54FF8"))) PPC_WEAK_FUNC(sub_82A54FF8);
PPC_FUNC_IMPL(__imp__sub_82A54FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A55000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55048
	if (cr6.eq) goto loc_82A55048;
	// lhz r29,14(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a55048
	if (cr6.eq) goto loc_82A55048;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A55024:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mulli r10,r31,6456
	ctx.r10.s64 = ctx.r31.s64 * 6456;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a58f20
	ctx.lr = 0x82A55038;
	sub_82A58F20(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82a55024
	if (cr6.lt) goto loc_82A55024;
loc_82A55048:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55084
	if (cr6.eq) goto loc_82A55084;
	// lhz r29,14(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a55084
	if (cr6.eq) goto loc_82A55084;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A55064:
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mulli r11,r31,2000
	ctx.r11.s64 = ctx.r31.s64 * 2000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a58c30
	ctx.lr = 0x82A55074;
	sub_82A58C30(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82a55064
	if (cr6.lt) goto loc_82A55064;
loc_82A55084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5508C"))) PPC_WEAK_FUNC(sub_82A5508C);
PPC_FUNC_IMPL(__imp__sub_82A5508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55090"))) PPC_WEAK_FUNC(sub_82A55090);
PPC_FUNC_IMPL(__imp__sub_82A55090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r4,14(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A550A4"))) PPC_WEAK_FUNC(sub_82A550A4);
PPC_FUNC_IMPL(__imp__sub_82A550A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A550A8"))) PPC_WEAK_FUNC(sub_82A550A8);
PPC_FUNC_IMPL(__imp__sub_82A550A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r4,14(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A550BC"))) PPC_WEAK_FUNC(sub_82A550BC);
PPC_FUNC_IMPL(__imp__sub_82A550BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A550C0"))) PPC_WEAK_FUNC(sub_82A550C0);
PPC_FUNC_IMPL(__imp__sub_82A550C0) {
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
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55114
	if (cr6.eq) goto loc_82A55114;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a55114
	if (cr6.eq) goto loc_82A55114;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82A55100;
	sub_825952B8(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x82a5511c
	goto loc_82A5511C;
loc_82A55114:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82A5511C:
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

__attribute__((alias("__imp__sub_82A55134"))) PPC_WEAK_FUNC(sub_82A55134);
PPC_FUNC_IMPL(__imp__sub_82A55134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55138"))) PPC_WEAK_FUNC(sub_82A55138);
PPC_FUNC_IMPL(__imp__sub_82A55138) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A55144"))) PPC_WEAK_FUNC(sub_82A55144);
PPC_FUNC_IMPL(__imp__sub_82A55144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55148"))) PPC_WEAK_FUNC(sub_82A55148);
PPC_FUNC_IMPL(__imp__sub_82A55148) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mulli r11,r11,6456
	ctx.r11.s64 = ctx.r11.s64 * 6456;
	// addi r3,r11,7868
	ctx.r3.s64 = ctx.r11.s64 + 7868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A55158"))) PPC_WEAK_FUNC(sub_82A55158);
PPC_FUNC_IMPL(__imp__sub_82A55158) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mulli r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 * 2000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A55164"))) PPC_WEAK_FUNC(sub_82A55164);
PPC_FUNC_IMPL(__imp__sub_82A55164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55168"))) PPC_WEAK_FUNC(sub_82A55168);
PPC_FUNC_IMPL(__imp__sub_82A55168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,6456
	ctx.r10.s64 = ctx.r10.s64 * 6456;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,6200(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6200);
	// addi r11,r11,-32767
	ctx.r11.s64 = ctx.r11.s64 + -32767;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r3,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5518C"))) PPC_WEAK_FUNC(sub_82A5518C);
PPC_FUNC_IMPL(__imp__sub_82A5518C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55190"))) PPC_WEAK_FUNC(sub_82A55190);
PPC_FUNC_IMPL(__imp__sub_82A55190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A55198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a55248
	if (!cr6.eq) goto loc_82A55248;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A551C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A551DC;
	sub_82595718(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a551f0
	if (!cr6.eq) goto loc_82A551F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A551F0:
	// addi r11,r3,7868
	ctx.r11.s64 = ctx.r3.s64 + 7868;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a55240
	if (cr6.eq) goto loc_82A55240;
	// bl 0x82a58aa0
	ctx.lr = 0x82A5520C;
	sub_82A58AA0(ctx, base);
	// clrlwi r29,r31,16
	ctx.r29.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a55240
	if (cr6.eq) goto loc_82A55240;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A5521C:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mulli r11,r31,6456
	ctx.r11.s64 = ctx.r31.s64 * 6456;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a58f20
	ctx.lr = 0x82A55230;
	sub_82A58F20(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82a5521c
	if (cr6.lt) goto loc_82A5521C;
loc_82A55240:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
loc_82A55248:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A55254"))) PPC_WEAK_FUNC(sub_82A55254);
PPC_FUNC_IMPL(__imp__sub_82A55254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55258"))) PPC_WEAK_FUNC(sub_82A55258);
PPC_FUNC_IMPL(__imp__sub_82A55258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a55274
	if (!cr6.lt) goto loc_82A55274;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82a58398
	sub_82A58398(ctx, base);
	return;
loc_82A55274:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5527C"))) PPC_WEAK_FUNC(sub_82A5527C);
PPC_FUNC_IMPL(__imp__sub_82A5527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55280"))) PPC_WEAK_FUNC(sub_82A55280);
PPC_FUNC_IMPL(__imp__sub_82A55280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A55288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bge cr6,0x82a552cc
	if (!cr6.lt) goto loc_82A552CC;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r31,r4,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82A552A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a58028
	ctx.lr = 0x82A552B0;
	sub_82A58028(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 | ctx.r29.u64;
	// bne 0x82a552a8
	if (!cr0.eq) goto loc_82A552A8;
loc_82A552CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A552D8"))) PPC_WEAK_FUNC(sub_82A552D8);
PPC_FUNC_IMPL(__imp__sub_82A552D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r11,r5,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lwz r8,56(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// lwz r6,64(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// lwz r5,68(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lwz r8,84(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// lwz r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lwz r6,92(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// lbz r5,96(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// stb r5,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r5.u8);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// lwz r8,112(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r8,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// lwz r7,116(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// lbz r6,120(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 120);
	// stb r6,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r6.u8);
	// lbz r5,121(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 121);
	// stb r5,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r5.u8);
	// lbz r11,122(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 122);
	// stb r11,122(r3)
	PPC_STORE_U8(ctx.r3.u32 + 122, ctx.r11.u8);
	// lwz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A55404"))) PPC_WEAK_FUNC(sub_82A55404);
PPC_FUNC_IMPL(__imp__sub_82A55404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55408"))) PPC_WEAK_FUNC(sub_82A55408);
PPC_FUNC_IMPL(__imp__sub_82A55408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82A5541C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f10,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f6,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,24(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f3,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,28(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f2,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,32(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f1,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,36(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfsu f0,60(r10)
	ea = 60 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// bdnz 0x82a5541c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5541C;
	// addi r11,r3,300
	ctx.r11.s64 = ctx.r3.s64 + 300;
	// li r10,25
	ctx.r10.s64 = 25;
loc_82A554A4:
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
	// bne 0x82a554a4
	if (!cr0.eq) goto loc_82A554A4;
	// lfs f0,700(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,700(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 700, temp.u32);
	// lfs f13,704(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,704(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 704, temp.u32);
	// lfs f12,708(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 708);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,708(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 708, temp.u32);
	// lwz r11,712(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 712);
	// stw r11,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r11.u32);
	// lwz r10,716(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 716);
	// stw r10,716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 716, ctx.r10.u32);
	// lwz r9,720(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// stw r9,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r9.u32);
	// lwz r8,724(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 724);
	// stw r8,724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 724, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A55510"))) PPC_WEAK_FUNC(sub_82A55510);
PPC_FUNC_IMPL(__imp__sub_82A55510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A55518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 640);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a55580
	if (!cr6.eq) goto loc_82A55580;
	// bl 0x83935df8
	ctx.lr = 0x82A55530;
	sub_83935DF8(ctx, base);
	// mulli r29,r3,60
	ctx.r29.s64 = ctx.r3.s64 * 60;
	// bl 0x82a585e8
	ctx.lr = 0x82A55538;
	sub_82A585E8(ctx, base);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x82a582c0
	ctx.lr = 0x82A5554C;
	sub_82A582C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a57a10
	ctx.lr = 0x82A55558;
	sub_82A57A10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A55578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,640(r30)
	PPC_STORE_U8(ctx.r30.u32 + 640, ctx.r9.u8);
loc_82A55580:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A55588"))) PPC_WEAK_FUNC(sub_82A55588);
PPC_FUNC_IMPL(__imp__sub_82A55588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A55590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a585e8
	ctx.lr = 0x82A5559C;
	sub_82A585E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83935df8
	ctx.lr = 0x82A555A4;
	sub_83935DF8(ctx, base);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a582c0
	ctx.lr = 0x82A555B8;
	sub_82A582C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a57a10
	ctx.lr = 0x82A555C4;
	sub_82A57A10(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A555E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A555EC"))) PPC_WEAK_FUNC(sub_82A555EC);
PPC_FUNC_IMPL(__imp__sub_82A555EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A555F0"))) PPC_WEAK_FUNC(sub_82A555F0);
PPC_FUNC_IMPL(__imp__sub_82A555F0) {
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
	// bl 0x82a55280
	ctx.lr = 0x82A55608;
	sub_82A55280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a55640
	if (!cr6.eq) goto loc_82A55640;
	// lwz r4,628(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// beq cr6,0x82a55640
	if (cr6.eq) goto loc_82A55640;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A55634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
loc_82A55640:
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

__attribute__((alias("__imp__sub_82A55654"))) PPC_WEAK_FUNC(sub_82A55654);
PPC_FUNC_IMPL(__imp__sub_82A55654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55658"))) PPC_WEAK_FUNC(sub_82A55658);
PPC_FUNC_IMPL(__imp__sub_82A55658) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A55684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r31,7868
	ctx.r9.s64 = ctx.r31.s64 + 7868;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// lhz r7,94(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 94);
	// sth r7,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r7.u16);
	// lhz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// sth r6,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r6.u16);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,100(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// stw r4,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r4.u32);
	// stb r8,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82A556D0"))) PPC_WEAK_FUNC(sub_82A556D0);
PPC_FUNC_IMPL(__imp__sub_82A556D0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-13868
	ctx.r10.s64 = ctx.r11.s64 + -13868;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82a550c0
	ctx.lr = 0x82A556FC;
	sub_82A550C0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// bl 0x82a57938
	ctx.lr = 0x82A5570C;
	sub_82A57938(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a5572c
	if (cr6.eq) goto loc_82A5572C;
	// bl 0x82595188
	ctx.lr = 0x82A5571C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A5572C;
	sub_825952B8(ctx, base);
loc_82A5572C:
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

__attribute__((alias("__imp__sub_82A55748"))) PPC_WEAK_FUNC(sub_82A55748);
PPC_FUNC_IMPL(__imp__sub_82A55748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A55750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A55764;
	sub_831CE980(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r28,39
	ctx.r28.s64 = 39;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lbz r8,92(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 92);
	// stb r8,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r8.u8);
	// lhz r7,94(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 94);
	// sth r7,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r7.u16);
	// lhz r6,96(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 96);
	// sth r6,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r6.u16);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
loc_82A557A8:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A557B8;
	sub_831CE980(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne 0x82a557a8
	if (!cr0.eq) goto loc_82A557A8;
	// lbz r11,4004(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4004);
	// addi r4,r30,4008
	ctx.r4.s64 = ctx.r30.s64 + 4008;
	// lbz r10,4007(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4007);
	// addi r3,r31,4008
	ctx.r3.s64 = ctx.r31.s64 + 4008;
	// stb r11,4004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4004, ctx.r11.u8);
	// lbz r9,4005(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4005);
	// stb r9,4005(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4005, ctx.r9.u8);
	// lbz r8,4006(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4006);
	// stb r8,4006(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4006, ctx.r8.u8);
	// lbz r7,4007(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4007);
	// rlwimi r7,r10,0,29,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF8);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r6,4007(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4007, ctx.r6.u8);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r11,4007(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4007);
	// rlwimi r5,r11,0,29,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r10,4007(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4007, ctx.r10.u8);
	// lbz r8,4007(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4007);
	// rlwimi r9,r8,0,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stb r7,4007(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4007, ctx.r7.u8);
	// lbz r6,4007(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4007);
	// rlwimi r6,r7,0,24,30
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFE) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF01);
	// stb r6,4007(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4007, ctx.r6.u8);
	// bl 0x82a552d8
	ctx.lr = 0x82A55830;
	sub_82A552D8(ctx, base);
	// lwz r10,4136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4136);
	// lwz r11,4136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4136);
	// addi r4,r30,4152
	ctx.r4.s64 = ctx.r30.s64 + 4152;
	// addi r3,r31,4152
	ctx.r3.s64 = ctx.r31.s64 + 4152;
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// li r5,160
	ctx.r5.s64 = 160;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4136, ctx.r11.u32);
	// lwz r9,4136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4136);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4136, ctx.r9.u32);
	// lwz r6,4140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4140);
	// lwz r7,4140(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4140);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4140, ctx.r7.u32);
	// lwz r11,4140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4140);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4140, ctx.r11.u32);
	// lhz r9,4144(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4144);
	// sth r9,4144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4144, ctx.r9.u16);
	// lbz r8,4146(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4146);
	// stb r8,4146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4146, ctx.r8.u8);
	// lbz r7,4147(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4147);
	// stb r7,4147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4147, ctx.r7.u8);
	// lbz r6,4148(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4148);
	// stb r6,4148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4148, ctx.r6.u8);
	// lbz r11,4149(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4149);
	// stb r11,4149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4149, ctx.r11.u8);
	// lbz r10,4150(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4150);
	// stb r10,4150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4150, ctx.r10.u8);
	// bl 0x831ce980
	ctx.lr = 0x82A558B0;
	sub_831CE980(ctx, base);
	// lwz r9,4312(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4312);
	// addi r4,r30,4332
	ctx.r4.s64 = ctx.r30.s64 + 4332;
	// addi r3,r31,4332
	ctx.r3.s64 = ctx.r31.s64 + 4332;
	// stw r9,4312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4312, ctx.r9.u32);
	// lwz r8,4316(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4316);
	// stw r8,4316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4316, ctx.r8.u32);
	// lwz r7,4320(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4320);
	// stw r7,4320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4320, ctx.r7.u32);
	// lwz r6,4324(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4324);
	// stw r6,4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4324, ctx.r6.u32);
	// lwz r5,4328(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4328);
	// stw r5,4328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4328, ctx.r5.u32);
	// bl 0x82a55408
	ctx.lr = 0x82A558E4;
	sub_82A55408(ctx, base);
	// addi r30,r31,5060
	ctx.r30.s64 = ctx.r31.s64 + 5060;
	// li r29,39
	ctx.r29.s64 = 39;
loc_82A558EC:
	// add r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 + ctx.r27.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A558FC;
	sub_831CE980(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// bne 0x82a558ec
	if (!cr0.eq) goto loc_82A558EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A55914"))) PPC_WEAK_FUNC(sub_82A55914);
PPC_FUNC_IMPL(__imp__sub_82A55914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55918"))) PPC_WEAK_FUNC(sub_82A55918);
PPC_FUNC_IMPL(__imp__sub_82A55918) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// twllei r10,0
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r10
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// andc r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// sth r5,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r5.u16);
	// twlgei r4,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5594C"))) PPC_WEAK_FUNC(sub_82A5594C);
PPC_FUNC_IMPL(__imp__sub_82A5594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55950"))) PPC_WEAK_FUNC(sub_82A55950);
PPC_FUNC_IMPL(__imp__sub_82A55950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A55958;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,-13760
	ctx.r10.s64 = ctx.r11.s64 + -13760;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r30,10
	ctx.r30.s64 = 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-13816
	ctx.r28.s64 = ctx.r11.s64 + -13816;
loc_82A55980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a58208
	ctx.lr = 0x82A55988;
	sub_82A58208(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// bge 0x82a55980
	if (!cr0.lt) goto loc_82A55980;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A559AC"))) PPC_WEAK_FUNC(sub_82A559AC);
PPC_FUNC_IMPL(__imp__sub_82A559AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A559B0"))) PPC_WEAK_FUNC(sub_82A559B0);
PPC_FUNC_IMPL(__imp__sub_82A559B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a559c8
	if (!cr6.lt) goto loc_82A559C8;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82a57b58
	sub_82A57B58(ctx, base);
	return;
loc_82A559C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A559D0"))) PPC_WEAK_FUNC(sub_82A559D0);
PPC_FUNC_IMPL(__imp__sub_82A559D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a559f0
	if (!cr6.lt) goto loc_82A559F0;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82A559F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A559F8"))) PPC_WEAK_FUNC(sub_82A559F8);
PPC_FUNC_IMPL(__imp__sub_82A559F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a55a10
	if (!cr6.lt) goto loc_82A55A10;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82a57c78
	sub_82A57C78(ctx, base);
	return;
loc_82A55A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A55A18"))) PPC_WEAK_FUNC(sub_82A55A18);
PPC_FUNC_IMPL(__imp__sub_82A55A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a55a30
	if (!cr6.lt) goto loc_82A55A30;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
loc_82A55A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A55A38"))) PPC_WEAK_FUNC(sub_82A55A38);
PPC_FUNC_IMPL(__imp__sub_82A55A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a55a54
	if (!cr6.lt) goto loc_82A55A54;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82a584a0
	sub_82A584A0(ctx, base);
	return;
loc_82A55A54:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A55A5C"))) PPC_WEAK_FUNC(sub_82A55A5C);
PPC_FUNC_IMPL(__imp__sub_82A55A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55A60"))) PPC_WEAK_FUNC(sub_82A55A60);
PPC_FUNC_IMPL(__imp__sub_82A55A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A55A68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bge cr6,0x82a55aac
	if (!cr6.lt) goto loc_82A55AAC;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r31,r4,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82A55A88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a58140
	ctx.lr = 0x82A55A90;
	sub_82A58140(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 | ctx.r29.u64;
	// bne 0x82a55a88
	if (!cr0.eq) goto loc_82A55A88;
loc_82A55AAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A55AB8"))) PPC_WEAK_FUNC(sub_82A55AB8);
PPC_FUNC_IMPL(__imp__sub_82A55AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A55AC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x83572958
	ctx.lr = 0x82A55ADC;
	sub_83572958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x82A55AE8;
	sub_83102DB0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a57cc0
	ctx.lr = 0x82A55AF0;
	sub_82A57CC0(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a55b08
	if (!cr6.gt) goto loc_82A55B08;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82A55B08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57a60
	ctx.lr = 0x82A55B10;
	sub_82A57A60(ctx, base);
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55b2c
	if (cr6.eq) goto loc_82A55B2C;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a55b70
	if (!cr6.lt) goto loc_82A55B70;
loc_82A55B2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a58318
	ctx.lr = 0x82A55B34;
	sub_82A58318(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a585e8
	ctx.lr = 0x82A55B3C;
	sub_82A585E8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A55B58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a55b70
	if (!cr6.eq) goto loc_82A55B70;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A55B70:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a57dd8
	ctx.lr = 0x82A55B80;
	sub_82A57DD8(ctx, base);
	// bl 0x83935df8
	ctx.lr = 0x82A55B84;
	sub_83935DF8(ctx, base);
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r25,48(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// twllei r11,0
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// divw r6,r7,r11
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// andc r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// twllei r10,0
	// divw r5,r6,r10
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r10.s32);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r27,r24,16
	ctx.r27.u64 = ctx.r24.u32 & 0xFFFF;
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// twlgei r7,-1
	// twlgei r10,-1
	// beq cr6,0x82a55cc0
	if (cr6.eq) goto loc_82A55CC0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A55C0C:
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mulli r11,r28,6456
	ctx.r11.s64 = ctx.r28.s64 * 6456;
	// mulli r9,r29,6456
	ctx.r9.s64 = ctx.r29.s64 * 6456;
	// li r5,6456
	ctx.r5.s64 = 6456;
	// add r4,r9,r25
	ctx.r4.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A55C2C;
	sub_831CE980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83572958
	ctx.lr = 0x82A55C34;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55c88
	if (cr6.eq) goto loc_82A55C88;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55c88
	if (cr6.eq) goto loc_82A55C88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83572958
	ctx.lr = 0x82A55C54;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55c88
	if (cr6.eq) goto loc_82A55C88;
	// lwz r8,52(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a55c88
	if (cr6.eq) goto loc_82A55C88;
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mulli r10,r28,2000
	ctx.r10.s64 = ctx.r28.s64 * 2000;
	// mulli r11,r29,2000
	ctx.r11.s64 = ctx.r29.s64 * 2000;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r5,2000
	ctx.r5.s64 = 2000;
	// bl 0x831ce980
	ctx.lr = 0x82A55C88;
	sub_831CE980(ctx, base);
loc_82A55C88:
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// divw r8,r10,r31
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r31.s32);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r7,r8,r31
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// andc r5,r31,r6
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r6.u64;
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// twllei r31,0
	// twlgei r5,-1
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x82a55c0c
	if (cr6.lt) goto loc_82A55C0C;
loc_82A55CC0:
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82a55748
	ctx.lr = 0x82A55CCC;
	sub_82A55748(ctx, base);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// sth r24,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r24.u16);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// twllei r11,0
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// divw r6,r7,r11
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// andc r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// twlgei r8,-1
	// divw r6,r7,r27
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r27.s32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// andc r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// sth r4,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r4.u16);
	// twllei r27,0
	// lwz r8,16(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// twlgei r9,-1
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A55D44"))) PPC_WEAK_FUNC(sub_82A55D44);
PPC_FUNC_IMPL(__imp__sub_82A55D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55D48"))) PPC_WEAK_FUNC(sub_82A55D48);
PPC_FUNC_IMPL(__imp__sub_82A55D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A55D50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,-13760
	ctx.r10.s64 = ctx.r11.s64 + -13760;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r31,11
	ctx.r31.s64 = 11;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82A55D6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a582c0
	ctx.lr = 0x82A55D74;
	sub_82A582C0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// bne 0x82a55d6c
	if (!cr0.eq) goto loc_82A55D6C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r27,624
	ctx.r31.s64 = ctx.r27.s64 + 624;
	// li r29,10
	ctx.r29.s64 = 10;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-13868
	ctx.r28.s64 = ctx.r11.s64 + -13868;
loc_82A55D94:
	// stwu r28,-56(r31)
	ea = -56 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55dcc
	if (cr6.eq) goto loc_82A55DCC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55dcc
	if (cr6.eq) goto loc_82A55DCC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x825952b8
	ctx.lr = 0x82A55DC0;
	sub_825952B8(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
loc_82A55DCC:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x82a57938
	ctx.lr = 0x82A55DDC;
	sub_82A57938(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82a55d94
	if (!cr0.lt) goto loc_82A55D94;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-13916
	ctx.r10.s64 = ctx.r11.s64 + -13916;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A55DF8"))) PPC_WEAK_FUNC(sub_82A55DF8);
PPC_FUNC_IMPL(__imp__sub_82A55DF8) {
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
	// bl 0x82a55d48
	ctx.lr = 0x82A55E18;
	sub_82A55D48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55e38
	if (cr6.eq) goto loc_82A55E38;
	// bl 0x82595188
	ctx.lr = 0x82A55E28;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A55E38;
	sub_825952B8(ctx, base);
loc_82A55E38:
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

__attribute__((alias("__imp__sub_82A55E54"))) PPC_WEAK_FUNC(sub_82A55E54);
PPC_FUNC_IMPL(__imp__sub_82A55E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A55E58"))) PPC_WEAK_FUNC(sub_82A55E58);
PPC_FUNC_IMPL(__imp__sub_82A55E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A55E60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// blt cr6,0x82a55e8c
	if (cr6.lt) goto loc_82A55E8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A55E8C:
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r6,22(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a55ee4
	if (cr6.eq) goto loc_82A55EE4;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bge cr6,0x82a55eb8
	if (!cr6.lt) goto loc_82A55EB8;
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
loc_82A55EB8:
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x82a55ecc
	if (!cr6.lt) goto loc_82A55ECC;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_82A55ECC:
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a55ab8
	ctx.lr = 0x82A55EE0;
	sub_82A55AB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A55EE4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a55f4c
	if (cr6.eq) goto loc_82A55F4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A55F0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a55f40
	if (!cr6.eq) goto loc_82A55F40;
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a58398
	ctx.lr = 0x82A55F2C;
	sub_82A58398(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A55F40:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
loc_82A55F4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A55F58"))) PPC_WEAK_FUNC(sub_82A55F58);
PPC_FUNC_IMPL(__imp__sub_82A55F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A55F60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r10,-13708
	ctx.r9.s64 = ctx.r10.s64 + -13708;
	// addi r29,r11,-24712
	ctx.r29.s64 = ctx.r11.s64 + -24712;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,724
	ctx.r30.s64 = ctx.r3.s64 + 724;
	// stw r29,724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 724, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x82A55F8C;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a55fb8
	if (cr6.eq) goto loc_82A55FB8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A55FB4;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82A55FB8:
	// stw r29,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r29.u32);
	// addi r30,r31,704
	ctx.r30.s64 = ctx.r31.s64 + 704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e0cf8
	ctx.lr = 0x82A55FC8;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a55ff0
	if (cr6.eq) goto loc_82A55FF0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A55FEC;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82A55FF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,684
	ctx.r30.s64 = ctx.r31.s64 + 684;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82A56008;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a56030
	if (cr6.eq) goto loc_82A56030;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A5602C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82A56030:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// addi r10,r11,-22948
	ctx.r10.s64 = ctx.r11.s64 + -22948;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x82A56044;
	sub_825C3358(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r30,r31,644
	ctx.r30.s64 = ctx.r31.s64 + 644;
	// addi r8,r9,-24712
	ctx.r8.s64 = ctx.r9.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r8.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82A5605C;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a56084
	if (cr6.eq) goto loc_82A56084;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A56080;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82A56084:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a55d48
	ctx.lr = 0x82A5608C;
	sub_82A55D48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A56094"))) PPC_WEAK_FUNC(sub_82A56094);
PPC_FUNC_IMPL(__imp__sub_82A56094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56098"))) PPC_WEAK_FUNC(sub_82A56098);
PPC_FUNC_IMPL(__imp__sub_82A56098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A560A4"))) PPC_WEAK_FUNC(sub_82A560A4);
PPC_FUNC_IMPL(__imp__sub_82A560A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A560A8"))) PPC_WEAK_FUNC(sub_82A560A8);
PPC_FUNC_IMPL(__imp__sub_82A560A8) {
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
	// bl 0x82a55f58
	ctx.lr = 0x82A560C8;
	sub_82A55F58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a560e8
	if (cr6.eq) goto loc_82A560E8;
	// bl 0x82595188
	ctx.lr = 0x82A560D8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82A560E8;
	sub_825952B8(ctx, base);
loc_82A560E8:
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

__attribute__((alias("__imp__sub_82A56104"))) PPC_WEAK_FUNC(sub_82A56104);
PPC_FUNC_IMPL(__imp__sub_82A56104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56108"))) PPC_WEAK_FUNC(sub_82A56108);
PPC_FUNC_IMPL(__imp__sub_82A56108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A56110;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a55950
	ctx.lr = 0x82A5611C;
	sub_82A55950(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-13708
	ctx.r9.s64 = ctx.r11.s64 + -13708;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r8,r10,-24692
	ctx.r8.s64 = ctx.r10.s64 + -24692;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stb r31,648(r30)
	PPC_STORE_U8(ctx.r30.u32 + 648, ctx.r31.u8);
	// stw r31,652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 652, ctx.r31.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r8.u32);
	// addi r5,r7,11960
	ctx.r5.s64 = ctx.r7.s64 + 11960;
	// stw r31,656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 656, ctx.r31.u32);
	// addi r4,r6,-24672
	ctx.r4.s64 = ctx.r6.s64 + -24672;
	// stw r31,660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 660, ctx.r31.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,668(r30)
	PPC_STORE_U8(ctx.r30.u32 + 668, ctx.r31.u8);
	// addi r3,r30,644
	ctx.r3.s64 = ctx.r30.s64 + 644;
	// stw r31,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r31.u32);
	// addi r10,r11,-22152
	ctx.r10.s64 = ctx.r11.s64 + -22152;
	// stw r5,664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 664, ctx.r5.u32);
	// addi r29,r30,684
	ctx.r29.s64 = ctx.r30.s64 + 684;
	// stw r31,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r31.u32);
	// addi r28,r30,704
	ctx.r28.s64 = ctx.r30.s64 + 704;
	// stw r31,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r31.u32);
	// addi r27,r30,724
	ctx.r27.s64 = ctx.r30.s64 + 724;
	// stb r31,688(r30)
	PPC_STORE_U8(ctx.r30.u32 + 688, ctx.r31.u8);
	// addi r26,r30,664
	ctx.r26.s64 = ctx.r30.s64 + 664;
	// stw r31,692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 692, ctx.r31.u32);
	// stw r4,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r4.u32);
	// stw r31,696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 696, ctx.r31.u32);
	// stw r31,700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 700, ctx.r31.u32);
	// stb r31,708(r30)
	PPC_STORE_U8(ctx.r30.u32 + 708, ctx.r31.u8);
	// stw r31,712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 712, ctx.r31.u32);
	// stw r10,704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 704, ctx.r10.u32);
	// stw r31,716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 716, ctx.r31.u32);
	// stw r31,720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 720, ctx.r31.u32);
	// stb r31,728(r30)
	PPC_STORE_U8(ctx.r30.u32 + 728, ctx.r31.u8);
	// stw r31,732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 732, ctx.r31.u32);
	// stw r31,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r31.u32);
	// stw r31,740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 740, ctx.r31.u32);
	// stw r10,724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 724, ctx.r10.u32);
	// bl 0x825ab6c8
	ctx.lr = 0x82A561C8;
	sub_825AB6C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a12978
	ctx.lr = 0x82A561D0;
	sub_82A12978(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a9e30
	ctx.lr = 0x82A561D8;
	sub_825A9E30(ctx, base);
	// lbz r9,708(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 708);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a56220
	if (!cr6.eq) goto loc_82A56220;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A56200;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a145d8
	ctx.lr = 0x82A5620C;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x825a9f08
	ctx.lr = 0x82A5621C;
	sub_825A9F08(ctx, base);
	// stb r26,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r26.u8);
loc_82A56220:
	// lbz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a56264
	if (!cr6.eq) goto loc_82A56264;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A56244;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a145d8
	ctx.lr = 0x82A56250;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825a9f08
	ctx.lr = 0x82A56260;
	sub_825A9F08(ctx, base);
	// stb r26,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r26.u8);
loc_82A56264:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a56278
	if (!cr6.eq) goto loc_82A56278;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a9e30
	ctx.lr = 0x82A56278;
	sub_825A9E30(ctx, base);
loc_82A56278:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a56294
	if (!cr6.eq) goto loc_82A56294;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
loc_82A56294:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r31,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r31.u32);
	// stw r3,636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 636, ctx.r3.u32);
	// bl 0x82a57188
	ctx.lr = 0x82A562A8;
	sub_82A57188(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a562b8
	if (cr6.eq) goto loc_82A562B8;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
loc_82A562B8:
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r31,640(r30)
	PPC_STORE_U8(ctx.r30.u32 + 640, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 628, ctx.r11.u32);
	// stw r11,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A562D4"))) PPC_WEAK_FUNC(sub_82A562D4);
PPC_FUNC_IMPL(__imp__sub_82A562D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A562D8"))) PPC_WEAK_FUNC(sub_82A562D8);
PPC_FUNC_IMPL(__imp__sub_82A562D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A562E0:
	// mulli r10,r11,3760
	ctx.r10.s64 = ctx.r11.s64 * 3760;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a56310
	if (cr6.eq) goto loc_82A56310;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// blt cr6,0x82a562e0
	if (cr6.lt) goto loc_82A562E0;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82A56310:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56318"))) PPC_WEAK_FUNC(sub_82A56318);
PPC_FUNC_IMPL(__imp__sub_82A56318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A56328:
	// mulli r11,r9,3760
	ctx.r11.s64 = ctx.r9.s64 * 3760;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x82a5637c
	if (!cr6.eq) goto loc_82A5637C;
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a5637c
	if (!cr6.eq) goto loc_82A5637C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a56364
	if (!cr6.eq) goto loc_82A56364;
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// clrlwi r31,r6,24
	ctx.r31.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x82a56394
	if (cr6.eq) goto loc_82A56394;
loc_82A56364:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82a5637c
	if (!cr6.eq) goto loc_82A5637C;
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a56394
	if (cr6.eq) goto loc_82A56394;
loc_82A5637C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// blt cr6,0x82a56328
	if (cr6.lt) goto loc_82A56328;
	// li r3,6
	ctx.r3.s64 = 6;
loc_82A56394:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5639C"))) PPC_WEAK_FUNC(sub_82A5639C);
PPC_FUNC_IMPL(__imp__sub_82A5639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A563A0"))) PPC_WEAK_FUNC(sub_82A563A0);
PPC_FUNC_IMPL(__imp__sub_82A563A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A563B4:
	// mulli r11,r8,3760
	ctx.r11.s64 = ctx.r8.s64 * 3760;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82a563d8
	if (!cr6.lt) goto loc_82A563D8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82A563D8:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// blt cr6,0x82a563b4
	if (cr6.lt) goto loc_82A563B4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A563F0"))) PPC_WEAK_FUNC(sub_82A563F0);
PPC_FUNC_IMPL(__imp__sub_82A563F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
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

__attribute__((alias("__imp__sub_82A56404"))) PPC_WEAK_FUNC(sub_82A56404);
PPC_FUNC_IMPL(__imp__sub_82A56404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56408"))) PPC_WEAK_FUNC(sub_82A56408);
PPC_FUNC_IMPL(__imp__sub_82A56408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,18812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18812);
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
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

__attribute__((alias("__imp__sub_82A5641C"))) PPC_WEAK_FUNC(sub_82A5641C);
PPC_FUNC_IMPL(__imp__sub_82A5641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56420"))) PPC_WEAK_FUNC(sub_82A56420);
PPC_FUNC_IMPL(__imp__sub_82A56420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A56424:
	// mulli r10,r11,3760
	ctx.r10.s64 = ctx.r11.s64 * 3760;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,14
	cr6.compare<int32_t>(ctx.r9.s32, 14, xer);
	// beq cr6,0x82a56450
	if (cr6.eq) goto loc_82A56450;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x82a56424
	if (cr6.lt) goto loc_82A56424;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82A56450:
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5645C"))) PPC_WEAK_FUNC(sub_82A5645C);
PPC_FUNC_IMPL(__imp__sub_82A5645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56460"))) PPC_WEAK_FUNC(sub_82A56460);
PPC_FUNC_IMPL(__imp__sub_82A56460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x82a56474
	if (cr6.lt) goto loc_82A56474;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A56474:
	// mulli r11,r11,3760
	ctx.r11.s64 = ctx.r11.s64 * 3760;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56484"))) PPC_WEAK_FUNC(sub_82A56484);
PPC_FUNC_IMPL(__imp__sub_82A56484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56488"))) PPC_WEAK_FUNC(sub_82A56488);
PPC_FUNC_IMPL(__imp__sub_82A56488) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,22564
	ctx.r3.s64 = ctx.r3.s64 + 22564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56490"))) PPC_WEAK_FUNC(sub_82A56490);
PPC_FUNC_IMPL(__imp__sub_82A56490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,22572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22572);
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
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

__attribute__((alias("__imp__sub_82A564A4"))) PPC_WEAK_FUNC(sub_82A564A4);
PPC_FUNC_IMPL(__imp__sub_82A564A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A564A8"))) PPC_WEAK_FUNC(sub_82A564A8);
PPC_FUNC_IMPL(__imp__sub_82A564A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,26324
	ctx.r3.s64 = ctx.r3.s64 + 26324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A564B0"))) PPC_WEAK_FUNC(sub_82A564B0);
PPC_FUNC_IMPL(__imp__sub_82A564B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,26332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26332);
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
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

__attribute__((alias("__imp__sub_82A564C4"))) PPC_WEAK_FUNC(sub_82A564C4);
PPC_FUNC_IMPL(__imp__sub_82A564C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A564C8"))) PPC_WEAK_FUNC(sub_82A564C8);
PPC_FUNC_IMPL(__imp__sub_82A564C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
loc_82A564D0:
	// mulli r11,r10,3760
	ctx.r11.s64 = ctx.r10.s64 * 3760;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,14
	cr6.compare<int32_t>(ctx.r8.s32, 14, xer);
	// beq cr6,0x82a56500
	if (cr6.eq) goto loc_82A56500;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82a56500
	if (cr6.eq) goto loc_82A56500;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bne cr6,0x82a56500
	if (!cr6.eq) goto loc_82A56500;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
loc_82A56500:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x82a564d0
	if (cr6.lt) goto loc_82A564D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56514"))) PPC_WEAK_FUNC(sub_82A56514);
PPC_FUNC_IMPL(__imp__sub_82A56514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56518"))) PPC_WEAK_FUNC(sub_82A56518);
PPC_FUNC_IMPL(__imp__sub_82A56518) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,30084(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30084);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56520"))) PPC_WEAK_FUNC(sub_82A56520);
PPC_FUNC_IMPL(__imp__sub_82A56520) {
	PPC_FUNC_PROLOGUE();
	// stw r4,30084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30084, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56528"))) PPC_WEAK_FUNC(sub_82A56528);
PPC_FUNC_IMPL(__imp__sub_82A56528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bne cr6,0x82a56548
	if (!cr6.eq) goto loc_82A56548;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x82a56558
	if (!cr6.eq) goto loc_82A56558;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A56548:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x82a56560
	if (!cr6.eq) goto loc_82A56560;
loc_82A56550:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A56558:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A56560:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a56550
	if (cr6.gt) goto loc_82A56550;
	// blt cr6,0x82a56558
	if (cr6.lt) goto loc_82A56558;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a56550
	if (cr6.gt) goto loc_82A56550;
	// blt cr6,0x82a56558
	if (cr6.lt) goto loc_82A56558;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a56550
	if (cr6.lt) goto loc_82A56550;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A565A8"))) PPC_WEAK_FUNC(sub_82A565A8);
PPC_FUNC_IMPL(__imp__sub_82A565A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,3760
	ctx.r5.s64 = 3760;
	// addi r6,r11,25896
	ctx.r6.s64 = ctx.r11.s64 + 25896;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x831d88b0
	sub_831D88B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A565C0"))) PPC_WEAK_FUNC(sub_82A565C0);
PPC_FUNC_IMPL(__imp__sub_82A565C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,25
	ctx.r9.s64 = 25;
	// li r8,14
	ctx.r8.s64 = 14;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r7,23
	ctx.r7.s64 = 23;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r7,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r7.u8);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
loc_82A56630:
	// addi r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 + 11;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// stwx r5,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r5.u32);
	// blt cr6,0x82a56630
	if (cr6.lt) goto loc_82A56630;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// addi r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 + 56;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r9,32
	ctx.r8.s64 = ctx.r9.s64 + 32;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r11,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
loc_82A56680:
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_82A5668C:
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a5668c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5668C;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x82a56680
	if (!cr0.eq) goto loc_82A56680;
	// li r8,27
	ctx.r8.s64 = 27;
	// addi r10,r9,540
	ctx.r10.s64 = ctx.r9.s64 + 540;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82A566B0:
	// stb r11,113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 113, ctx.r11.u8);
	// stw r5,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r5.u32);
	// stb r11,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r11.u8);
	// stb r11,109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 109, ctx.r11.u8);
	// stb r11,110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 110, ctx.r11.u8);
	// stb r11,111(r10)
	PPC_STORE_U8(ctx.r10.u32 + 111, ctx.r11.u8);
	// stbu r11,112(r10)
	ea = 112 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a566b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A566B0;
	// stfs f0,3572(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 3572, temp.u32);
	// addi r8,r9,3576
	ctx.r8.s64 = ctx.r9.s64 + 3576;
	// stfs f0,3568(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 3568, temp.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_82A566E0:
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A566EC:
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a566ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A566EC;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x82a566e0
	if (!cr0.eq) goto loc_82A566E0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56708"))) PPC_WEAK_FUNC(sub_82A56708);
PPC_FUNC_IMPL(__imp__sub_82A56708) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// addi r9,r11,-13500
	ctx.r9.s64 = ctx.r11.s64 + -13500;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 728, ctx.r11.u32);
	// beq cr6,0x82a56748
	if (cr6.eq) goto loc_82A56748;
	// bl 0x82416268
	ctx.lr = 0x82A56744;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A56748:
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

__attribute__((alias("__imp__sub_82A5675C"))) PPC_WEAK_FUNC(sub_82A5675C);
PPC_FUNC_IMPL(__imp__sub_82A5675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56760"))) PPC_WEAK_FUNC(sub_82A56760);
PPC_FUNC_IMPL(__imp__sub_82A56760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A56768;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,512
	ctx.r10.s64 = 512;
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// addi r29,r4,56
	ctx.r29.s64 = ctx.r4.s64 + 56;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// addi r9,r29,32
	ctx.r9.s64 = ctx.r29.s64 + 32;
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r6,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r5,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r5.u8);
	// lbz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lbz r7,6(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r7,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r7.u8);
	// lbz r6,7(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// stb r6,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r6.u8);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// lwz r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// lwz r3,52(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f13,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f11,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lbz r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// stb r6,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r6.u8);
	// lwz r5,84(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r5,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
loc_82A5686C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a5686c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5686C;
	// addi r28,r30,544
	ctx.r28.s64 = ctx.r30.s64 + 544;
	// subf r26,r30,r29
	ctx.r26.s64 = ctx.r29.s64 - ctx.r30.s64;
	// li r27,27
	ctx.r27.s64 = 27;
loc_82A56888:
	// add r4,r26,r28
	ctx.r4.u64 = ctx.r26.u64 + ctx.r28.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A56898;
	sub_831CE980(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,112
	ctx.r28.s64 = ctx.r28.s64 + 112;
	// bne 0x82a56888
	if (!cr0.eq) goto loc_82A56888;
	// li r10,128
	ctx.r10.s64 = 128;
	// lfs f0,3568(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3568(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3568, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,3572(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3572);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r29,3576
	ctx.r9.s64 = ctx.r29.s64 + 3576;
	// stfs f13,3572(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3572, temp.u32);
	// addi r8,r30,3576
	ctx.r8.s64 = ctx.r30.s64 + 3576;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A568C8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a568c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A568C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A568E4"))) PPC_WEAK_FUNC(sub_82A568E4);
PPC_FUNC_IMPL(__imp__sub_82A568E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A568E8"))) PPC_WEAK_FUNC(sub_82A568E8);
PPC_FUNC_IMPL(__imp__sub_82A568E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A568F0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// li r21,6
	ctx.r21.s64 = 6;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,14
	ctx.r23.s64 = 14;
	// li r24,23
	ctx.r24.s64 = 23;
	// li r26,25
	ctx.r26.s64 = 25;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,255
	ctx.r28.s64 = 255;
	// li r25,28
	ctx.r25.s64 = 28;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// li r22,11
	ctx.r22.s64 = 11;
loc_82A56924:
	// stb r30,-32(r31)
	PPC_STORE_U8(ctx.r31.u32 + -32, ctx.r30.u8);
	// addi r10,r31,-32
	ctx.r10.s64 = ctx.r31.s64 + -32;
	// stw r23,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r23.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,-31(r31)
	PPC_STORE_U8(ctx.r31.u32 + -31, ctx.r30.u8);
	// stb r30,-30(r31)
	PPC_STORE_U8(ctx.r31.u32 + -30, ctx.r30.u8);
	// stb r30,-29(r31)
	PPC_STORE_U8(ctx.r31.u32 + -29, ctx.r30.u8);
	// stb r30,-28(r31)
	PPC_STORE_U8(ctx.r31.u32 + -28, ctx.r30.u8);
	// stb r30,-27(r31)
	PPC_STORE_U8(ctx.r31.u32 + -27, ctx.r30.u8);
	// stb r30,-26(r31)
	PPC_STORE_U8(ctx.r31.u32 + -26, ctx.r30.u8);
	// stb r24,-25(r31)
	PPC_STORE_U8(ctx.r31.u32 + -25, ctx.r24.u8);
	// stw r26,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r26.u32);
	// stw r26,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r26.u32);
	// stw r27,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r27.u32);
	// stw r28,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r28.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82A56970:
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// stwx r22,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r22.u32);
	// blt cr6,0x82a56970
	if (cr6.lt) goto loc_82A56970;
	// addi r3,r10,56
	ctx.r3.s64 = ctx.r10.s64 + 56;
	// bl 0x82a17a08
	ctx.lr = 0x82A56994;
	sub_82A17A08(ctx, base);
	// addic. r21,r21,-1
	xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	cr0.compare<int32_t>(ctx.r21.s32, 0, xer);
	// addi r31,r31,3760
	ctx.r31.s64 = ctx.r31.s64 + 3760;
	// bne 0x82a56924
	if (!cr0.eq) goto loc_82A56924;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A569A8"))) PPC_WEAK_FUNC(sub_82A569A8);
PPC_FUNC_IMPL(__imp__sub_82A569A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A569B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-13500
	ctx.r10.s64 = ctx.r11.s64 + -13500;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r29,5
	ctx.r29.s64 = 5;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82A569CC:
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82a17f40
	ctx.lr = 0x82A569D4;
	sub_82A17F40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a565c0
	ctx.lr = 0x82A569DC;
	sub_82A565C0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,3760
	ctx.r30.s64 = ctx.r30.s64 + 3760;
	// bge 0x82a569cc
	if (!cr0.lt) goto loc_82A569CC;
	// addi r30,r31,22564
	ctx.r30.s64 = ctx.r31.s64 + 22564;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82a17f40
	ctx.lr = 0x82A569F4;
	sub_82A17F40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a565c0
	ctx.lr = 0x82A569FC;
	sub_82A565C0(ctx, base);
	// addi r30,r31,26324
	ctx.r30.s64 = ctx.r31.s64 + 26324;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82a17f40
	ctx.lr = 0x82A56A08;
	sub_82A17F40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a565c0
	ctx.lr = 0x82A56A10;
	sub_82A565C0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 728, ctx.r31.u32);
	// stw r10,30084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30084, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A56A2C"))) PPC_WEAK_FUNC(sub_82A56A2C);
PPC_FUNC_IMPL(__imp__sub_82A56A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56A30"))) PPC_WEAK_FUNC(sub_82A56A30);
PPC_FUNC_IMPL(__imp__sub_82A56A30) {
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
	// stwu r1,-3872(r1)
	ea = -3872 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mulli r11,r31,3760
	ctx.r11.s64 = ctx.r31.s64 * 3760;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,3760
	ctx.r5.s64 = 3760;
	// bl 0x831ce980
	ctx.lr = 0x82A56A64;
	sub_831CE980(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// bge cr6,0x82a56b4c
	if (!cr6.lt) goto loc_82A56B4C;
loc_82A56A74:
	// mulli r11,r31,3760
	ctx.r11.s64 = ctx.r31.s64 * 3760;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x82a56b4c
	if (cr6.eq) goto loc_82A56B4C;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r10,r10,-3756
	ctx.r10.s64 = ctx.r10.s64 + -3756;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r3,r10,56
	ctx.r3.s64 = ctx.r10.s64 + 56;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r5,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r5.u8);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r9,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r7,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r7.u8);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r5,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r7,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r7.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r6,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r6.u32);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r5,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r5.u32);
	// bl 0x825a4ce8
	ctx.lr = 0x82A56B3C;
	sub_825A4CE8(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x82a56a74
	if (cr6.lt) goto loc_82A56A74;
loc_82A56B4C:
	// mulli r11,r31,3760
	ctx.r11.s64 = ctx.r31.s64 * 3760;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-3756
	ctx.r3.s64 = ctx.r11.s64 + -3756;
	// bl 0x82a56760
	ctx.lr = 0x82A56B60;
	sub_82A56760(ctx, base);
	// addi r11,r31,255
	ctx.r11.s64 = ctx.r31.s64 + 255;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,3872
	ctx.r1.s64 = ctx.r1.s64 + 3872;
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

__attribute__((alias("__imp__sub_82A56B80"))) PPC_WEAK_FUNC(sub_82A56B80);
PPC_FUNC_IMPL(__imp__sub_82A56B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A56B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-3888(r1)
	ea = -3888 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a17f40
	ctx.lr = 0x82A56B98;
	sub_82A17F40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a565c0
	ctx.lr = 0x82A56BA0;
	sub_82A565C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,22564
	ctx.r3.s64 = ctx.r31.s64 + 22564;
	// lwz r30,22608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22608);
	// lwz r29,22612(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22612);
	// lwz r28,22616(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22616);
	// bl 0x82a56760
	ctx.lr = 0x82A56BB8;
	sub_82A56760(ctx, base);
	// stw r30,22608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22608, ctx.r30.u32);
	// stw r29,22612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22612, ctx.r29.u32);
	// stw r28,22616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22616, ctx.r28.u32);
	// addi r1,r1,3888
	ctx.r1.s64 = ctx.r1.s64 + 3888;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A56BCC"))) PPC_WEAK_FUNC(sub_82A56BCC);
PPC_FUNC_IMPL(__imp__sub_82A56BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56BD0"))) PPC_WEAK_FUNC(sub_82A56BD0);
PPC_FUNC_IMPL(__imp__sub_82A56BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,20
	ctx.r10.s64 = 20;
loc_82A56BDC:
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lhz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lhz r8,6(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82a56bdc
	if (!cr0.eq) goto loc_82A56BDC;
	// lhz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 164);
	// lhz r10,162(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 162);
	// lhz r9,160(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 160);
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r11.u16);
	// sth r10,162(r3)
	PPC_STORE_U16(ctx.r3.u32 + 162, ctx.r10.u16);
	// sth r9,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56C28"))) PPC_WEAK_FUNC(sub_82A56C28);
PPC_FUNC_IMPL(__imp__sub_82A56C28) {
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
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a56cc0
	if (cr6.eq) goto loc_82A56CC0;
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// cmpwi cr6,r7,7
	cr6.compare<int32_t>(ctx.r7.s32, 7, xer);
	// mulli r11,r9,6456
	ctx.r11.s64 = ctx.r9.s64 * 6456;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x82a56c98
	if (!cr6.eq) goto loc_82A56C98;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// twllei r11,0
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// divw r4,r8,r11
	ctx.r4.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// andc r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// mulli r11,r3,6456
	ctx.r11.s64 = ctx.r3.s64 * 6456;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r9,-1
	// lfs f0,6232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
loc_82A56C98:
	// lbz r11,6240(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6240);
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// stfs f0,6232(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6232, temp.u32);
	// stb r5,6236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6236, ctx.r5.u8);
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwimi r6,r7,3,26,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 3) & 0x38) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC7);
	// stb r6,6240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6240, ctx.r6.u8);
	// bl 0x83740858
	ctx.lr = 0x82A56CBC;
	sub_83740858(ctx, base);
	// stb r3,6228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6228, ctx.r3.u8);
loc_82A56CC0:
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

__attribute__((alias("__imp__sub_82A56CD4"))) PPC_WEAK_FUNC(sub_82A56CD4);
PPC_FUNC_IMPL(__imp__sub_82A56CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56CD8"))) PPC_WEAK_FUNC(sub_82A56CD8);
PPC_FUNC_IMPL(__imp__sub_82A56CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,6456
	ctx.r11.s64 = ctx.r11.s64 * 6456;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,6260
	ctx.r3.s64 = ctx.r11.s64 + 6260;
	// stw r7,6260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6260, ctx.r7.u32);
	// stw r6,6264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6264, ctx.r6.u32);
	// stw r5,6268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6268, ctx.r5.u32);
	// stw r4,6272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6272, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56D2C"))) PPC_WEAK_FUNC(sub_82A56D2C);
PPC_FUNC_IMPL(__imp__sub_82A56D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56D30"))) PPC_WEAK_FUNC(sub_82A56D30);
PPC_FUNC_IMPL(__imp__sub_82A56D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r11,r11,6456
	ctx.r11.s64 = ctx.r11.s64 * 6456;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,6324
	ctx.r3.s64 = ctx.r11.s64 + 6324;
	// stw r7,6324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6324, ctx.r7.u32);
	// stw r6,6328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6328, ctx.r6.u32);
	// stw r5,6332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6332, ctx.r5.u32);
	// stw r4,6336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6336, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56D8C"))) PPC_WEAK_FUNC(sub_82A56D8C);
PPC_FUNC_IMPL(__imp__sub_82A56D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56D90"))) PPC_WEAK_FUNC(sub_82A56D90);
PPC_FUNC_IMPL(__imp__sub_82A56D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mulli r10,r10,6456
	ctx.r10.s64 = ctx.r10.s64 * 6456;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,6230(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6230);
	// rlwimi r9,r4,0,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// stb r9,6230(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6230, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56DB8"))) PPC_WEAK_FUNC(sub_82A56DB8);
PPC_FUNC_IMPL(__imp__sub_82A56DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mulli r10,r10,6456
	ctx.r10.s64 = ctx.r10.s64 * 6456;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82a589a0
	sub_82A589A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A56DD4"))) PPC_WEAK_FUNC(sub_82A56DD4);
PPC_FUNC_IMPL(__imp__sub_82A56DD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A56DD8"))) PPC_WEAK_FUNC(sub_82A56DD8);
PPC_FUNC_IMPL(__imp__sub_82A56DD8) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a56e10
	if (cr6.eq) goto loc_82A56E10;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mulli r10,r10,6456
	ctx.r10.s64 = ctx.r10.s64 * 6456;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,6388
	ctx.r11.s64 = ctx.r31.s64 + 6388;
	// stb r4,6388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6388, ctx.r4.u8);
	// bl 0x82a58a80
	ctx.lr = 0x82A56E0C;
	sub_82A58A80(ctx, base);
	// sth r3,6390(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6390, ctx.r3.u16);
loc_82A56E10:
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

__attribute__((alias("__imp__sub_82A56E24"))) PPC_WEAK_FUNC(sub_82A56E24);
PPC_FUNC_IMPL(__imp__sub_82A56E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A56E28"))) PPC_WEAK_FUNC(sub_82A56E28);
PPC_FUNC_IMPL(__imp__sub_82A56E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a56ff4
	if (cr6.eq) goto loc_82A56FF4;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bge cr6,0x82a56ff4
	if (!cr6.lt) goto loc_82A56FF4;
	// lhz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mulli r4,r4,248
	ctx.r4.s64 = ctx.r4.s64 * 248;
	// lhz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r5,r3,6456
	ctx.r5.s64 = ctx.r3.s64 * 6456;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f11,-13432(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -13432);
	ctx.f11.f64 = double(temp.f32);
	// sth r31,180(r11)
	PPC_STORE_U16(ctx.r11.u32 + 180, ctx.r31.u16);
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// sth r3,184(r11)
	PPC_STORE_U16(ctx.r11.u32 + 184, ctx.r3.u16);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lbz r7,206(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 206);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f12.u64);
	// lhz r6,-26(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -26);
	// sth r6,186(r11)
	PPC_STORE_U16(ctx.r11.u32 + 186, ctx.r6.u16);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f8.u64);
	// lhz r5,-26(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -26);
	// sth r5,188(r11)
	PPC_STORE_U16(ctx.r11.u32 + 188, ctx.r5.u16);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// rlwimi r7,r3,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// stb r9,206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 206, ctx.r9.u8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwimi r8,r6,4,26,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x30) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFCF);
	// lbz r10,207(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 207);
	// stb r8,206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 206, ctx.r8.u8);
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a56f00
	if (cr6.eq) goto loc_82A56F00;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// li r9,4
	ctx.r9.s64 = 4;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r6,r8,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwimi r9,r7,2,28,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stb r5,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r5.u8);
	// b 0x82a56f14
	goto loc_82A56F14;
loc_82A56F00:
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// rlwimi r9,r8,2,28,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r7,r9,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r7,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r7.u8);
loc_82A56F14:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a56f30
	if (cr6.eq) goto loc_82A56F30;
	// lbz r9,207(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 207);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// b 0x82a56f3c
	goto loc_82A56F3C;
loc_82A56F30:
	// lbz r10,207(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 207);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
loc_82A56F3C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stb r8,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r8.u8);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f13,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,207(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 207);
	// lfs f12,-13340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13340);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a56f84
	if (!cr6.gt) goto loc_82A56F84;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctidz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f10.u64);
	// lbz r9,-25(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -25);
	// rlwinm r8,r9,2,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x8;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r7,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r7.u8);
	// b 0x82a56f98
	goto loc_82A56F98;
loc_82A56F84:
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// rlwimi r9,r8,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// rlwinm r7,r9,0,29,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r7,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r7.u8);
loc_82A56F98:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,207(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 207);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a56fcc
	if (!cr6.gt) goto loc_82A56FCC;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f13.u64);
	// lbz r9,-25(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -25);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r7,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r7.u8);
	// b 0x82a56fd8
	goto loc_82A56FD8;
loc_82A56FCC:
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r8,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r8.u8);
loc_82A56FD8:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f12.u64);
	// lhz r9,-26(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -26);
	// sth r9,182(r11)
	PPC_STORE_U16(ctx.r11.u32 + 182, ctx.r9.u16);
loc_82A56FF4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A57000"))) PPC_WEAK_FUNC(sub_82A57000);
PPC_FUNC_IMPL(__imp__sub_82A57000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a570a0
	if (cr6.eq) goto loc_82A570A0;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bge cr6,0x82a570a0
	if (!cr6.lt) goto loc_82A570A0;
	// lhz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mulli r4,r4,248
	ctx.r4.s64 = ctx.r4.s64 * 248;
	// lhz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mulli r5,r3,6456
	ctx.r5.s64 = ctx.r3.s64 * 6456;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f0,-13432(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -13432);
	ctx.f0.f64 = double(temp.f32);
	// sth r31,190(r11)
	PPC_STORE_U16(ctx.r11.u32 + 190, ctx.r31.u16);
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// sth r3,192(r11)
	PPC_STORE_U16(ctx.r11.u32 + 192, ctx.r3.u16);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lbz r7,206(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 206);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lhz r5,-10(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r5,194(r11)
	PPC_STORE_U16(ctx.r11.u32 + 194, ctx.r5.u16);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lhz r4,-10(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r4,196(r11)
	PPC_STORE_U16(ctx.r11.u32 + 196, ctx.r4.u16);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// rlwimi r6,r9,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// stb r8,206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 206, ctx.r8.u8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwimi r6,r8,0,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// stb r6,206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 206, ctx.r6.u8);
loc_82A570A0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A570A8"))) PPC_WEAK_FUNC(sub_82A570A8);
PPC_FUNC_IMPL(__imp__sub_82A570A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a57148
	if (cr6.eq) goto loc_82A57148;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bge cr6,0x82a57148
	if (!cr6.lt) goto loc_82A57148;
	// lhz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mulli r4,r4,248
	ctx.r4.s64 = ctx.r4.s64 * 248;
	// lhz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mulli r5,r3,6456
	ctx.r5.s64 = ctx.r3.s64 * 6456;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f0,-13432(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -13432);
	ctx.f0.f64 = double(temp.f32);
	// sth r31,198(r11)
	PPC_STORE_U16(ctx.r11.u32 + 198, ctx.r31.u16);
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// sth r3,200(r11)
	PPC_STORE_U16(ctx.r11.u32 + 200, ctx.r3.u16);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lbz r7,207(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 207);
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lhz r6,-10(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r6,202(r11)
	PPC_STORE_U16(ctx.r11.u32 + 202, ctx.r6.u16);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lhz r5,-10(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r5,204(r11)
	PPC_STORE_U16(ctx.r11.u32 + 204, ctx.r5.u16);
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// rlwimi r7,r3,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// stb r9,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r9.u8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwimi r8,r6,4,26,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x30) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFCF);
	// stb r8,207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 207, ctx.r8.u8);
loc_82A57148:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A57150"))) PPC_WEAK_FUNC(sub_82A57150);
PPC_FUNC_IMPL(__imp__sub_82A57150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stb r4,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r4.u8);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,4312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4312, ctx.r5.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// std r6,4316(r5)
	PPC_STORE_U64(ctx.r5.u32 + 4316, ctx.r6.u64);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// std r7,4324(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4324, ctx.r7.u64);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stb r8,4005(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4005, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A57188"))) PPC_WEAK_FUNC(sub_82A57188);
PPC_FUNC_IMPL(__imp__sub_82A57188) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a5724c
	if (cr6.eq) goto loc_82A5724C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a5724c
	if (cr6.eq) goto loc_82A5724C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82a16ee8
	ctx.lr = 0x82A571C0;
	sub_82A16EE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// beq cr6,0x82a571dc
	if (cr6.eq) goto loc_82A571DC;
	// lbz r10,4007(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4007);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// b 0x82a571e4
	goto loc_82A571E4;
loc_82A571DC:
	// lbz r10,4007(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4007);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_82A571E4:
	// stb r9,4007(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4007, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16ef0
	ctx.lr = 0x82A571F0;
	sub_82A16EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// beq cr6,0x82a5720c
	if (cr6.eq) goto loc_82A5720C;
	// lbz r10,4007(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4007);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// b 0x82a57218
	goto loc_82A57218;
loc_82A5720C:
	// lbz r10,4007(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4007);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82A57218:
	// stb r9,4007(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4007, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d31a8
	ctx.lr = 0x82A57224;
	sub_835D31A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82a5723c
	if (!cr6.eq) goto loc_82A5723C;
	// lbz r10,4007(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4007);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// b 0x82a57248
	goto loc_82A57248;
loc_82A5723C:
	// lbz r10,4007(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4007);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82A57248:
	// stb r9,4007(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4007, ctx.r9.u8);
loc_82A5724C:
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

__attribute__((alias("__imp__sub_82A57264"))) PPC_WEAK_FUNC(sub_82A57264);
PPC_FUNC_IMPL(__imp__sub_82A57264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A57268"))) PPC_WEAK_FUNC(sub_82A57268);
PPC_FUNC_IMPL(__imp__sub_82A57268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A57270;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a5757c
	if (cr6.eq) goto loc_82A5757C;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// bge cr6,0x82a5757c
	if (!cr6.lt) goto loc_82A5757C;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// mulli r10,r10,6456
	ctx.r10.s64 = ctx.r10.s64 * 6456;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a574d0
	if (cr6.eq) goto loc_82A574D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mulli r10,r4,248
	ctx.r10.s64 = ctx.r4.s64 * 248;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,263(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// lfs f0,20592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20592);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lis r28,-32250
	ctx.r28.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// lfs f13,-13428(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -13428);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lhz r5,94(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lhz r4,94(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fmuls f4,f1,f13
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// sth r6,172(r31)
	PPC_STORE_U16(ctx.r31.u32 + 172, ctx.r6.u16);
	// rlwimi r8,r9,7,17,24
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0x7F80) | (ctx.r8.u64 & 0xFFFFFFFFFFFF807F);
	// sth r4,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r4.u16);
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// sth r5,174(r31)
	PPC_STORE_U16(ctx.r31.u32 + 174, ctx.r5.u16);
	// lfs f2,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f1,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lhz r3,94(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lhz r7,94(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stb r8,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r8.u8);
	// lwz r8,268(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// sth r6,178(r31)
	PPC_STORE_U16(ctx.r31.u32 + 178, ctx.r6.u16);
	// sth r9,166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 166, ctx.r9.u16);
	// sth r7,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r7.u16);
	// sth r3,170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 170, ctx.r3.u16);
loc_82A5738C:
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// stb r7,212(r5)
	PPC_STORE_U8(ctx.r5.u32 + 212, ctx.r7.u8);
	// blt cr6,0x82a5738c
	if (cr6.lt) goto loc_82A5738C;
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82a58688
	ctx.lr = 0x82A573C0;
	sub_82A58688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x82a58698
	ctx.lr = 0x82A573CC;
	sub_82A58698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82a586a8
	ctx.lr = 0x82A573D8;
	sub_82A586A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82a58718
	ctx.lr = 0x82A573E4;
	sub_82A58718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,324(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// bl 0x82a586b8
	ctx.lr = 0x82A573F0;
	sub_82A586B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82a586d8
	ctx.lr = 0x82A573FC;
	sub_82A586D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82a586f8
	ctx.lr = 0x82A57408;
	sub_82A586F8(ctx, base);
	// lfs f0,-13428(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -13428);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lbz r6,208(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// lbz r7,359(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// lbz r9,279(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// rlwimi r6,r7,5,25,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 5) & 0x60) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF9F);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// rlwimi r6,r9,0,27,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFE0);
	// stb r6,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r6.u8);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r4,94(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r4,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r4.u16);
	// beq cr6,0x82a5749c
	if (cr6.eq) goto loc_82A5749C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83740a50
	ctx.lr = 0x82A5744C;
	sub_83740A50(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82a57478
	if (cr6.lt) goto loc_82A57478;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// bge cr6,0x82a57478
	if (!cr6.lt) goto loc_82A57478;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r29,r10
	ctx.r9.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r7.s64;
	// b 0x82a5747c
	goto loc_82A5747C;
loc_82A57478:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A5747C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a57490
	if (!cr6.eq) goto loc_82A57490;
	// stb r11,6258(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6258, ctx.r11.u8);
	// b 0x82a5749c
	goto loc_82A5749C;
loc_82A57490:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82a5749c
	if (!cr6.eq) goto loc_82A5749C;
	// stb r11,6259(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6259, ctx.r11.u8);
loc_82A5749C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,367(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// bl 0x82a58720
	ctx.lr = 0x82A574A8;
	sub_82A58720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,375(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 375);
	// bl 0x82a58730
	ctx.lr = 0x82A574B4;
	sub_82A58730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,383(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 383);
	// bl 0x82a58748
	ctx.lr = 0x82A574C0;
	sub_82A58748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,391(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 391);
	// bl 0x82a58760
	ctx.lr = 0x82A574CC;
	sub_82A58760(ctx, base);
	// b 0x82a574e0
	goto loc_82A574E0;
loc_82A574D0:
	// mulli r11,r29,248
	ctx.r11.s64 = ctx.r29.s64 * 248;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a58cd0
	ctx.lr = 0x82A574E0;
	sub_82A58CD0(ctx, base);
loc_82A574E0:
	// lwz r29,24(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a5757c
	if (cr6.eq) goto loc_82A5757C;
	// lbz r27,4004(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4004);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82a5753c
	if (cr6.eq) goto loc_82A5753C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A57500:
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x829112e0
	ctx.lr = 0x82A57514;
	sub_829112E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a5753c
	if (!cr6.eq) goto loc_82A5753C;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x82a57500
	if (cr6.lt) goto loc_82A57500;
loc_82A5753C:
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// bne cr6,0x82a57570
	if (!cr6.eq) goto loc_82A57570;
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A57560;
	sub_831CE980(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lbz r10,4004(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4004);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,4004(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4004, ctx.r10.u8);
loc_82A57570:
	// cmplwi cr6,r30,39
	cr6.compare<uint32_t>(ctx.r30.u32, 39, xer);
	// bge cr6,0x82a5757c
	if (!cr6.lt) goto loc_82A5757C;
	// stb r28,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r28.u8);
loc_82A5757C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

