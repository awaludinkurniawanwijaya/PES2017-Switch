#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A25864"))) PPC_WEAK_FUNC(sub_82A25864);
PPC_FUNC_IMPL(__imp__sub_82A25864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25868"))) PPC_WEAK_FUNC(sub_82A25868);
PPC_FUNC_IMPL(__imp__sub_82A25868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A25880:
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stb r10,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r8,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r8.u8);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stb r8,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r8.u8);
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// stb r10,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// stb r10,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r10.u8);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stb r8,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r8.u8);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// stb r8,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r8.u8);
	// stb r10,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stb r10,59(r11)
	PPC_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r8,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r8.u8);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// stb r8,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r8.u8);
	// stb r10,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// stb r10,83(r11)
	PPC_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stb r8,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r8.u8);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// stb r8,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r8.u8);
	// stb r10,105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 105, ctx.r10.u8);
	// stb r10,106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 106, ctx.r10.u8);
	// stb r10,107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 107, ctx.r10.u8);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stb r8,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r8.u8);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r4.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r4.u32);
	// stb r8,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r8.u8);
	// stb r10,129(r11)
	PPC_STORE_U8(ctx.r11.u32 + 129, ctx.r10.u8);
	// stb r10,130(r11)
	PPC_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// stb r10,131(r11)
	PPC_STORE_U8(ctx.r11.u32 + 131, ctx.r10.u8);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stb r8,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r8.u8);
	// stwu r10,144(r11)
	ea = 144 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a25880
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A25880;
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r7,720(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r7.u32);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stb r8,724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 724, ctx.r8.u8);
	// stb r10,725(r3)
	PPC_STORE_U8(ctx.r3.u32 + 725, ctx.r10.u8);
	// stb r10,726(r3)
	PPC_STORE_U8(ctx.r3.u32 + 726, ctx.r10.u8);
	// stb r10,727(r3)
	PPC_STORE_U8(ctx.r3.u32 + 727, ctx.r10.u8);
	// stw r6,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r6.u32);
	// stw r10,728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 728, ctx.r10.u32);
	// stw r10,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r10.u32);
	// stb r8,736(r3)
	PPC_STORE_U8(ctx.r3.u32 + 736, ctx.r8.u8);
	// stw r10,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25A3C"))) PPC_WEAK_FUNC(sub_82A25A3C);
PPC_FUNC_IMPL(__imp__sub_82A25A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25A40"))) PPC_WEAK_FUNC(sub_82A25A40);
PPC_FUNC_IMPL(__imp__sub_82A25A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,10
	ctx.r7.s64 = 10;
	// ld r10,4760(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4760);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A25A6C:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// stfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// sth r11,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// sth r11,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// sth r11,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r11.u16);
	// sth r11,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r11.u16);
	// stb r11,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// stb r6,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r6.u8);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// stb r11,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// stb r11,29(r10)
	PPC_STORE_U8(ctx.r10.u32 + 29, ctx.r11.u8);
	// blt cr6,0x82a25a6c
	if (cr6.lt) goto loc_82A25A6C;
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// sth r11,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, ctx.r11.u16);
	// sth r11,130(r3)
	PPC_STORE_U16(ctx.r3.u32 + 130, ctx.r11.u16);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// sth r11,132(r3)
	PPC_STORE_U16(ctx.r3.u32 + 132, ctx.r11.u16);
	// addi r10,r3,152
	ctx.r10.s64 = ctx.r3.s64 + 152;
	// sth r11,134(r3)
	PPC_STORE_U16(ctx.r3.u32 + 134, ctx.r11.u16);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stb r11,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r11.u8);
	// stb r11,142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 142, ctx.r11.u8);
	// stb r11,143(r3)
	PPC_STORE_U8(ctx.r3.u32 + 143, ctx.r11.u8);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stb r11,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r11.u8);
	// stb r11,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r11.u8);
	// stb r11,147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r11.u8);
	// stb r11,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r11.u8);
	// stb r11,150(r3)
	PPC_STORE_U8(ctx.r3.u32 + 150, ctx.r11.u8);
	// stb r11,151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 151, ctx.r11.u8);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// sth r11,152(r3)
	PPC_STORE_U16(ctx.r3.u32 + 152, ctx.r11.u16);
	// sth r11,154(r3)
	PPC_STORE_U16(ctx.r3.u32 + 154, ctx.r11.u16);
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// sth r11,158(r3)
	PPC_STORE_U16(ctx.r3.u32 + 158, ctx.r11.u16);
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r11.u16);
	// sth r11,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, ctx.r11.u16);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r8,168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r8.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r7.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// sth r11,184(r3)
	PPC_STORE_U16(ctx.r3.u32 + 184, ctx.r11.u16);
	// sth r11,186(r3)
	PPC_STORE_U16(ctx.r3.u32 + 186, ctx.r11.u16);
	// sth r11,188(r3)
	PPC_STORE_U16(ctx.r3.u32 + 188, ctx.r11.u16);
	// sth r11,190(r3)
	PPC_STORE_U16(ctx.r3.u32 + 190, ctx.r11.u16);
	// sth r11,196(r3)
	PPC_STORE_U16(ctx.r3.u32 + 196, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25B68"))) PPC_WEAK_FUNC(sub_82A25B68);
PPC_FUNC_IMPL(__imp__sub_82A25B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r4,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A25B78:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x82a25b88
	if (!cr6.lt) goto loc_82A25B88;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A25B88:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a25bac
	if (!cr6.eq) goto loc_82A25BAC;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a25bb0
	if (cr6.eq) goto loc_82A25BB0;
loc_82A25BAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A25BB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82a25b78
	if (cr6.lt) goto loc_82A25B78;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25BD4"))) PPC_WEAK_FUNC(sub_82A25BD4);
PPC_FUNC_IMPL(__imp__sub_82A25BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25BD8"))) PPC_WEAK_FUNC(sub_82A25BD8);
PPC_FUNC_IMPL(__imp__sub_82A25BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A25BE0;
	__savegprlr_29(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// li r31,255
	ctx.r31.s64 = 255;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r7,65535
	ctx.r5.u64 = ctx.r7.u64 | 65535;
loc_82A25C28:
	// mulli r11,r8,52
	ctx.r11.s64 = ctx.r8.s64 * 52;
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r29,r7,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r6,4808(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r7,4808(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stb r4,62(r11)
	PPC_STORE_U8(ctx.r11.u32 + 62, ctx.r4.u8);
	// sth r5,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r5.u16);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blt cr6,0x82a25c28
	if (cr6.lt) goto loc_82A25C28;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25CB8"))) PPC_WEAK_FUNC(sub_82A25CB8);
PPC_FUNC_IMPL(__imp__sub_82A25CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r10,r8,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r10,4808(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r9,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r9.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,4808(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r10,4808(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r9,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r9.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25D84"))) PPC_WEAK_FUNC(sub_82A25D84);
PPC_FUNC_IMPL(__imp__sub_82A25D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25D88"))) PPC_WEAK_FUNC(sub_82A25D88);
PPC_FUNC_IMPL(__imp__sub_82A25D88) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82a25bd8
	ctx.lr = 0x82A25DC0;
	sub_82A25BD8(ctx, base);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A25E34"))) PPC_WEAK_FUNC(sub_82A25E34);
PPC_FUNC_IMPL(__imp__sub_82A25E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25E38"))) PPC_WEAK_FUNC(sub_82A25E38);
PPC_FUNC_IMPL(__imp__sub_82A25E38) {
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
	// bl 0x82a25bd8
	ctx.lr = 0x82A25E50;
	sub_82A25BD8(ctx, base);
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,4808(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// lwz r11,4808(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// lwz r5,144(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
loc_82A25EB0:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwimi r8,r4,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r8,r11,152
	ctx.r8.s64 = ctx.r11.s64 + 152;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r3,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r3.u32);
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r6.u32);
	// lwz r4,176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r5,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r5.u32);
	// lwz r8,180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// rlwimi r3,r8,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r3.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// blt cr6,0x82a25eb0
	if (cr6.lt) goto loc_82A25EB0;
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

__attribute__((alias("__imp__sub_82A25F48"))) PPC_WEAK_FUNC(sub_82A25F48);
PPC_FUNC_IMPL(__imp__sub_82A25F48) {
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
	// bl 0x82a25bd8
	ctx.lr = 0x82A25F60;
	sub_82A25BD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stb r11,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r11.u8);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82A25F88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,144(r10)
	PPC_STORE_U8(ctx.r10.u32 + 144, ctx.r9.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x82a25f88
	if (cr6.lt) goto loc_82A25F88;
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

__attribute__((alias("__imp__sub_82A25FB4"))) PPC_WEAK_FUNC(sub_82A25FB4);
PPC_FUNC_IMPL(__imp__sub_82A25FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25FB8"))) PPC_WEAK_FUNC(sub_82A25FB8);
PPC_FUNC_IMPL(__imp__sub_82A25FB8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82a25d88
	ctx.lr = 0x82A25FF4;
	sub_82A25D88(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82a25e38
	ctx.lr = 0x82A25FFC;
	sub_82A25E38(ctx, base);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x82a25f48
	ctx.lr = 0x82A26004;
	sub_82A25F48(ctx, base);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// addi r11,r31,664
	ctx.r11.s64 = ctx.r31.s64 + 664;
	// stw r8,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r8.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r30,672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 672, ctx.r30.u8);
	// stb r30,673(r31)
	PPC_STORE_U8(ctx.r31.u32 + 673, ctx.r30.u8);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// lwz r7,680(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r7.u32);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stb r10,684(r31)
	PPC_STORE_U8(ctx.r31.u32 + 684, ctx.r10.u8);
	// stb r30,685(r31)
	PPC_STORE_U8(ctx.r31.u32 + 685, ctx.r30.u8);
	// stb r30,686(r31)
	PPC_STORE_U8(ctx.r31.u32 + 686, ctx.r30.u8);
	// stw r7,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r7.u32);
	// stb r30,687(r31)
	PPC_STORE_U8(ctx.r31.u32 + 687, ctx.r30.u8);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// stb r10,696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 696, ctx.r10.u8);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stb r30,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r30.u8);
	// stb r30,709(r31)
	PPC_STORE_U8(ctx.r31.u32 + 709, ctx.r30.u8);
	// stb r30,710(r31)
	PPC_STORE_U8(ctx.r31.u32 + 710, ctx.r30.u8);
	// stb r30,711(r31)
	PPC_STORE_U8(ctx.r31.u32 + 711, ctx.r30.u8);
	// stb r30,712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 712, ctx.r30.u8);
	// stb r30,713(r31)
	PPC_STORE_U8(ctx.r31.u32 + 713, ctx.r30.u8);
	// stb r30,714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 714, ctx.r30.u8);
	// stb r30,715(r31)
	PPC_STORE_U8(ctx.r31.u32 + 715, ctx.r30.u8);
	// sth r30,716(r31)
	PPC_STORE_U16(ctx.r31.u32 + 716, ctx.r30.u16);
	// sth r30,718(r31)
	PPC_STORE_U16(ctx.r31.u32 + 718, ctx.r30.u16);
	// stb r30,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r30.u8);
	// stb r30,721(r31)
	PPC_STORE_U8(ctx.r31.u32 + 721, ctx.r30.u8);
	// stb r30,722(r31)
	PPC_STORE_U8(ctx.r31.u32 + 722, ctx.r30.u8);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// stb r30,728(r31)
	PPC_STORE_U8(ctx.r31.u32 + 728, ctx.r30.u8);
	// stb r30,729(r31)
	PPC_STORE_U8(ctx.r31.u32 + 729, ctx.r30.u8);
	// stb r30,730(r31)
	PPC_STORE_U8(ctx.r31.u32 + 730, ctx.r30.u8);
	// stb r30,731(r31)
	PPC_STORE_U8(ctx.r31.u32 + 731, ctx.r30.u8);
	// stb r30,732(r31)
	PPC_STORE_U8(ctx.r31.u32 + 732, ctx.r30.u8);
	// stb r30,733(r31)
	PPC_STORE_U8(ctx.r31.u32 + 733, ctx.r30.u8);
	// stb r30,734(r31)
	PPC_STORE_U8(ctx.r31.u32 + 734, ctx.r30.u8);
	// stb r30,735(r31)
	PPC_STORE_U8(ctx.r31.u32 + 735, ctx.r30.u8);
	// sth r30,736(r31)
	PPC_STORE_U16(ctx.r31.u32 + 736, ctx.r30.u16);
	// sth r30,738(r31)
	PPC_STORE_U16(ctx.r31.u32 + 738, ctx.r30.u16);
	// stb r30,740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 740, ctx.r30.u8);
	// stb r30,741(r31)
	PPC_STORE_U8(ctx.r31.u32 + 741, ctx.r30.u8);
	// stb r30,742(r31)
	PPC_STORE_U8(ctx.r31.u32 + 742, ctx.r30.u8);
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// stb r30,748(r31)
	PPC_STORE_U8(ctx.r31.u32 + 748, ctx.r30.u8);
	// stb r30,749(r31)
	PPC_STORE_U8(ctx.r31.u32 + 749, ctx.r30.u8);
	// stb r30,750(r31)
	PPC_STORE_U8(ctx.r31.u32 + 750, ctx.r30.u8);
	// stb r30,751(r31)
	PPC_STORE_U8(ctx.r31.u32 + 751, ctx.r30.u8);
	// stb r30,752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 752, ctx.r30.u8);
	// stb r30,753(r31)
	PPC_STORE_U8(ctx.r31.u32 + 753, ctx.r30.u8);
	// stb r30,754(r31)
	PPC_STORE_U8(ctx.r31.u32 + 754, ctx.r30.u8);
	// stb r30,755(r31)
	PPC_STORE_U8(ctx.r31.u32 + 755, ctx.r30.u8);
	// sth r30,756(r31)
	PPC_STORE_U16(ctx.r31.u32 + 756, ctx.r30.u16);
	// sth r30,758(r31)
	PPC_STORE_U16(ctx.r31.u32 + 758, ctx.r30.u16);
	// stb r30,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r30.u8);
	// stb r30,761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 761, ctx.r30.u8);
	// stb r30,762(r31)
	PPC_STORE_U8(ctx.r31.u32 + 762, ctx.r30.u8);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A26128"))) PPC_WEAK_FUNC(sub_82A26128);
PPC_FUNC_IMPL(__imp__sub_82A26128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A26130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82a25868
	ctx.lr = 0x82A26158;
	sub_82A25868(ctx, base);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x82a25868
	ctx.lr = 0x82A26160;
	sub_82A25868(ctx, base);
	// addi r29,r31,1504
	ctx.r29.s64 = ctx.r31.s64 + 1504;
	// li r30,576
	ctx.r30.s64 = 576;
loc_82A26168:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a257c8
	ctx.lr = 0x82A26170;
	sub_82A257C8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x82a26168
	if (!cr0.eq) goto loc_82A26168;
	// addi r3,r31,19936
	ctx.r3.s64 = ctx.r31.s64 + 19936;
	// bl 0x82a257c8
	ctx.lr = 0x82A26184;
	sub_82A257C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2618C"))) PPC_WEAK_FUNC(sub_82A2618C);
PPC_FUNC_IMPL(__imp__sub_82A2618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26190"))) PPC_WEAK_FUNC(sub_82A26190);
PPC_FUNC_IMPL(__imp__sub_82A26190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A26198;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82a26128
	ctx.lr = 0x82A261A4;
	sub_82A26128(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r28,255
	ctx.r28.s64 = 255;
	// stb r30,23465(r24)
	PPC_STORE_U8(ctx.r24.u32 + 23465, ctx.r30.u8);
	// stb r11,23464(r24)
	PPC_STORE_U8(ctx.r24.u32 + 23464, ctx.r11.u8);
	// addi r11,r24,23629
	ctx.r11.s64 = ctx.r24.s64 + 23629;
	// stb r30,23466(r24)
	PPC_STORE_U8(ctx.r24.u32 + 23466, ctx.r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r28,23467(r24)
	PPC_STORE_U8(ctx.r24.u32 + 23467, ctx.r28.u8);
	// li r25,-153
	ctx.r25.s64 = -153;
	// stb r30,23468(r24)
	PPC_STORE_U8(ctx.r24.u32 + 23468, ctx.r30.u8);
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// li r26,7
	ctx.r26.s64 = 7;
	// li r27,-137
	ctx.r27.s64 = -137;
	// li r3,23
	ctx.r3.s64 = 23;
	// lis r31,-31778
	ctx.r31.s64 = -2082603008;
	// li r4,-121
	ctx.r4.s64 = -121;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r6,-105
	ctx.r6.s64 = -105;
	// li r7,55
	ctx.r7.s64 = 55;
	// li r8,-89
	ctx.r8.s64 = -89;
	// li r9,71
	ctx.r9.s64 = 71;
loc_82A26200:
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// lwz r23,-157(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -157);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// stw r23,-157(r11)
	PPC_STORE_U32(ctx.r11.u32 + -157, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r23,r10,0,14,31
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r23.u64 & 0xFFFFFFFFFFFC0000);
	// stw r23,-157(r11)
	PPC_STORE_U32(ctx.r11.u32 + -157, ctx.r23.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stb r28,-145(r11)
	PPC_STORE_U8(ctx.r11.u32 + -145, ctx.r28.u8);
	// stb r30,-144(r11)
	PPC_STORE_U8(ctx.r11.u32 + -144, ctx.r30.u8);
	// stdx r10,r11,r25
	PPC_STORE_U64(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u64);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// lwz r23,3(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// stw r23,3(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r23,r10,0,14,31
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r23.u64 & 0xFFFFFFFFFFFC0000);
	// stw r23,3(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3, ctx.r23.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r26
	PPC_STORE_U64(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u64);
	// stb r28,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r28.u8);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// lwz r23,-141(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -141);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// stw r23,-141(r11)
	PPC_STORE_U32(ctx.r11.u32 + -141, ctx.r23.u32);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r22,r10,0,14,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFC0000);
	// stw r22,-141(r11)
	PPC_STORE_U32(ctx.r11.u32 + -141, ctx.r22.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r27
	PPC_STORE_U64(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u64);
	// stb r28,-129(r11)
	PPC_STORE_U8(ctx.r11.u32 + -129, ctx.r28.u8);
	// stb r30,-128(r11)
	PPC_STORE_U8(ctx.r11.u32 + -128, ctx.r30.u8);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// lwz r23,19(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,19(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r22,r10,0,14,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFC0000);
	// stw r22,19(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19, ctx.r22.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// stb r28,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r28.u8);
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// lwz r23,-125(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -125);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,-125(r11)
	PPC_STORE_U32(ctx.r11.u32 + -125, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r22,r10,0,14,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFC0000);
	// stw r22,-125(r11)
	PPC_STORE_U32(ctx.r11.u32 + -125, ctx.r22.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r4
	PPC_STORE_U64(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u64);
	// stb r28,-113(r11)
	PPC_STORE_U8(ctx.r11.u32 + -113, ctx.r28.u8);
	// stb r30,-112(r11)
	PPC_STORE_U8(ctx.r11.u32 + -112, ctx.r30.u8);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// lwz r23,35(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 35);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,35(r11)
	PPC_STORE_U32(ctx.r11.u32 + 35, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r22,r10,0,14,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFC0000);
	// stw r22,35(r11)
	PPC_STORE_U32(ctx.r11.u32 + 35, ctx.r22.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r5
	PPC_STORE_U64(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u64);
	// stb r28,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r28.u8);
	// stb r30,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r30.u8);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// lwz r23,-109(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -109);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// stw r23,-109(r11)
	PPC_STORE_U32(ctx.r11.u32 + -109, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r23,r10,0,14,31
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r23.u64 & 0xFFFFFFFFFFFC0000);
	// stw r23,-109(r11)
	PPC_STORE_U32(ctx.r11.u32 + -109, ctx.r23.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r6
	PPC_STORE_U64(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u64);
	// stb r28,-97(r11)
	PPC_STORE_U8(ctx.r11.u32 + -97, ctx.r28.u8);
	// stb r30,-96(r11)
	PPC_STORE_U8(ctx.r11.u32 + -96, ctx.r30.u8);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// lwz r23,51(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 51);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,51(r11)
	PPC_STORE_U32(ctx.r11.u32 + 51, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r22,r10,0,14,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFC0000);
	// stw r22,51(r11)
	PPC_STORE_U32(ctx.r11.u32 + 51, ctx.r22.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r7
	PPC_STORE_U64(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u64);
	// stb r28,63(r11)
	PPC_STORE_U8(ctx.r11.u32 + 63, ctx.r28.u8);
	// stb r30,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r30.u8);
	// lwz r23,-93(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -93);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,-93(r11)
	PPC_STORE_U32(ctx.r11.u32 + -93, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r22,r10,0,14,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFC0000);
	// stw r22,-93(r11)
	PPC_STORE_U32(ctx.r11.u32 + -93, ctx.r22.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r8
	PPC_STORE_U64(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u64);
	// stb r28,-81(r11)
	PPC_STORE_U8(ctx.r11.u32 + -81, ctx.r28.u8);
	// stb r30,-80(r11)
	PPC_STORE_U8(ctx.r11.u32 + -80, ctx.r30.u8);
	// lwz r23,67(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 67);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r23,r10,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,67(r11)
	PPC_STORE_U32(ctx.r11.u32 + 67, ctx.r23.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r22,r10,0,14,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFC0000);
	// stw r22,67(r11)
	PPC_STORE_U32(ctx.r11.u32 + 67, ctx.r22.u32);
	// ld r10,4760(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stdx r10,r11,r9
	PPC_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u64);
	// stb r28,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r28.u8);
	// stbu r30,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a26200
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A26200;
	// stw r30,23792(r24)
	PPC_STORE_U32(ctx.r24.u32 + 23792, ctx.r30.u32);
	// addi r27,r24,23800
	ctx.r27.s64 = ctx.r24.s64 + 23800;
	// stw r30,23796(r24)
	PPC_STORE_U32(ctx.r24.u32 + 23796, ctx.r30.u32);
	// stw r30,23800(r24)
	PPC_STORE_U32(ctx.r24.u32 + 23800, ctx.r30.u32);
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// stw r30,23804(r24)
	PPC_STORE_U32(ctx.r24.u32 + 23804, ctx.r30.u32);
	// stb r30,23808(r24)
	PPC_STORE_U8(ctx.r24.u32 + 23808, ctx.r30.u8);
	// stb r30,23809(r24)
	PPC_STORE_U8(ctx.r24.u32 + 23809, ctx.r30.u8);
	// stw r30,23812(r24)
	PPC_STORE_U32(ctx.r24.u32 + 23812, ctx.r30.u32);
	// bl 0x82a25868
	ctx.lr = 0x82A26400;
	sub_82A25868(ctx, base);
	// addi r3,r27,760
	ctx.r3.s64 = ctx.r27.s64 + 760;
	// bl 0x82a25868
	ctx.lr = 0x82A26408;
	sub_82A25868(ctx, base);
	// addi r25,r27,1504
	ctx.r25.s64 = ctx.r27.s64 + 1504;
	// li r26,576
	ctx.r26.s64 = 576;
loc_82A26410:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a257c8
	ctx.lr = 0x82A26418;
	sub_82A257C8(ctx, base);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// bne 0x82a26410
	if (!cr0.eq) goto loc_82A26410;
	// addi r3,r27,19936
	ctx.r3.s64 = ctx.r27.s64 + 19936;
	// bl 0x82a257c8
	ctx.lr = 0x82A2642C;
	sub_82A257C8(ctx, base);
	// addis r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 65536;
	// lwz r11,4808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// addi r10,r10,-18272
	ctx.r10.s64 = ctx.r10.s64 + -18272;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r9,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,4808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// ld r11,4760(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4760);
	// stb r28,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r28.u8);
	// stb r30,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r30.u8);
	// std r11,4(r10)
	PPC_STORE_U64(ctx.r10.u32 + 4, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2646C"))) PPC_WEAK_FUNC(sub_82A2646C);
PPC_FUNC_IMPL(__imp__sub_82A2646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26470"))) PPC_WEAK_FUNC(sub_82A26470);
PPC_FUNC_IMPL(__imp__sub_82A26470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A26478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,4808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4808);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,4808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4808);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r11,4808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4808);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r11,4808(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4808);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bl 0x82a25868
	ctx.lr = 0x82A264E4;
	sub_82A25868(ctx, base);
	// stb r30,848(r31)
	PPC_STORE_U8(ctx.r31.u32 + 848, ctx.r30.u8);
	// stb r30,849(r31)
	PPC_STORE_U8(ctx.r31.u32 + 849, ctx.r30.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,850(r31)
	PPC_STORE_U8(ctx.r31.u32 + 850, ctx.r30.u8);
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// stb r30,851(r31)
	PPC_STORE_U8(ctx.r31.u32 + 851, ctx.r30.u8);
	// li r7,255
	ctx.r7.s64 = 255;
	// stb r30,852(r31)
	PPC_STORE_U8(ctx.r31.u32 + 852, ctx.r30.u8);
	// stb r30,853(r31)
	PPC_STORE_U8(ctx.r31.u32 + 853, ctx.r30.u8);
	// stb r30,854(r31)
	PPC_STORE_U8(ctx.r31.u32 + 854, ctx.r30.u8);
	// stb r30,855(r31)
	PPC_STORE_U8(ctx.r31.u32 + 855, ctx.r30.u8);
	// sth r30,856(r31)
	PPC_STORE_U16(ctx.r31.u32 + 856, ctx.r30.u16);
	// sth r30,858(r31)
	PPC_STORE_U16(ctx.r31.u32 + 858, ctx.r30.u16);
	// stb r30,860(r31)
	PPC_STORE_U8(ctx.r31.u32 + 860, ctx.r30.u8);
	// stb r30,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r30.u8);
	// stb r30,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r30.u8);
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
loc_82A26528:
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// lwz r9,4808(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4808);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r9,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r9,4808(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4808);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// ld r9,4760(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4760);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// stb r30,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r30.u8);
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// blt cr6,0x82a26528
	if (cr6.lt) goto loc_82A26528;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2657C"))) PPC_WEAK_FUNC(sub_82A2657C);
PPC_FUNC_IMPL(__imp__sub_82A2657C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26580"))) PPC_WEAK_FUNC(sub_82A26580);
PPC_FUNC_IMPL(__imp__sub_82A26580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// lwz r11,4808(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lwz r9,4808(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// lwz r5,44(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
loc_82A26600:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r8,r4,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// stw r6,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r6,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r4,r8,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// blt cr6,0x82a26600
	if (cr6.lt) goto loc_82A26600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26680"))) PPC_WEAK_FUNC(sub_82A26680);
PPC_FUNC_IMPL(__imp__sub_82A26680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A26688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,255
	ctx.r5.s64 = 255;
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// li r3,-1
	ctx.r3.s64 = -1;
	// rlwimi r29,r11,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r8,r7,4824
	ctx.r8.s64 = ctx.r7.s64 + 4824;
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r10,4808(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r29,r10,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stb r4,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r4.u8);
	// sth r3,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r3.u16);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lhz r10,4824(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4824);
	// sth r10,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r10.u16);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_82A26740:
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// mulli r11,r29,208
	ctx.r11.s64 = ctx.r29.s64 * 208;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82a25a40
	ctx.lr = 0x82A26754;
	sub_82A25A40(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x82a26740
	if (cr6.lt) goto loc_82A26740;
	// addi r3,r31,6720
	ctx.r3.s64 = ctx.r31.s64 + 6720;
	// bl 0x82a25a40
	ctx.lr = 0x82A26770;
	sub_82A25A40(ctx, base);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// stb r30,6928(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6928, ctx.r30.u8);
	// addi r11,r31,6936
	ctx.r11.s64 = ctx.r31.s64 + 6936;
	// stb r30,6929(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6929, ctx.r30.u8);
	// stw r30,6932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6932, ctx.r30.u32);
	// stb r30,6936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6936, ctx.r30.u8);
	// stb r30,6937(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6937, ctx.r30.u8);
	// sth r30,6938(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6938, ctx.r30.u16);
	// ld r10,4760(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4760);
	// stw r30,6972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6972, ctx.r30.u32);
	// std r10,6940(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6940, ctx.r10.u64);
	// stb r30,6948(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6948, ctx.r30.u8);
	// stb r30,6954(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6954, ctx.r30.u8);
	// stb r30,6949(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6949, ctx.r30.u8);
	// stb r30,6950(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6950, ctx.r30.u8);
	// stb r30,6951(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6951, ctx.r30.u8);
	// stb r30,6952(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6952, ctx.r30.u8);
	// stb r30,6953(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6953, ctx.r30.u8);
	// stb r30,6955(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6955, ctx.r30.u8);
	// stb r30,6956(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6956, ctx.r30.u8);
	// stb r30,6957(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6957, ctx.r30.u8);
	// stb r30,6958(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6958, ctx.r30.u8);
	// stb r30,6959(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6959, ctx.r30.u8);
	// stb r30,6960(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6960, ctx.r30.u8);
	// stb r30,6961(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6961, ctx.r30.u8);
	// stb r30,6962(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6962, ctx.r30.u8);
	// stb r30,6963(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6963, ctx.r30.u8);
	// stb r30,6964(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6964, ctx.r30.u8);
	// stb r30,6965(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6965, ctx.r30.u8);
	// stb r30,6966(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6966, ctx.r30.u8);
	// sth r30,6968(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6968, ctx.r30.u16);
loc_82A267EC:
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,6976
	ctx.r3.s64 = ctx.r11.s64 + 6976;
	// bl 0x82a4e020
	ctx.lr = 0x82A267FC;
	sub_82A4E020(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x82a267ec
	if (cr6.lt) goto loc_82A267EC;
	// addi r3,r31,7424
	ctx.r3.s64 = ctx.r31.s64 + 7424;
	// bl 0x82a4e020
	ctx.lr = 0x82A26818;
	sub_82A4E020(ctx, base);
	// addi r3,r31,7480
	ctx.r3.s64 = ctx.r31.s64 + 7480;
	// bl 0x82a25fb8
	ctx.lr = 0x82A26820;
	sub_82A25FB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26828"))) PPC_WEAK_FUNC(sub_82A26828);
PPC_FUNC_IMPL(__imp__sub_82A26828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26848"))) PPC_WEAK_FUNC(sub_82A26848);
PPC_FUNC_IMPL(__imp__sub_82A26848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r10,564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26868"))) PPC_WEAK_FUNC(sub_82A26868);
PPC_FUNC_IMPL(__imp__sub_82A26868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,160
	cr6.compare<int32_t>(ctx.r4.s32, 160, xer);
	// bne cr6,0x82a26890
	if (!cr6.eq) goto loc_82A26890;
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x83742b00
	sub_83742B00(ctx, base);
	return;
loc_82A26890:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83742b00
	sub_83742B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26898"))) PPC_WEAK_FUNC(sub_82A26898);
PPC_FUNC_IMPL(__imp__sub_82A26898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,160
	cr6.compare<int32_t>(ctx.r4.s32, 160, xer);
	// bne cr6,0x82a268c0
	if (!cr6.eq) goto loc_82A268C0;
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x83742df0
	sub_83742DF0(ctx, base);
	return;
loc_82A268C0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83742df0
	sub_83742DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A268C8"))) PPC_WEAK_FUNC(sub_82A268C8);
PPC_FUNC_IMPL(__imp__sub_82A268C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,160
	cr6.compare<int32_t>(ctx.r4.s32, 160, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82a268f8
	if (!cr6.eq) goto loc_82A268F8;
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x83742bd0
	sub_83742BD0(ctx, base);
	return;
loc_82A268F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83742bd0
	sub_83742BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26900"))) PPC_WEAK_FUNC(sub_82A26900);
PPC_FUNC_IMPL(__imp__sub_82A26900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,160
	cr6.compare<int32_t>(ctx.r4.s32, 160, xer);
	// bne cr6,0x82a26928
	if (!cr6.eq) goto loc_82A26928;
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x83742f00
	sub_83742F00(ctx, base);
	return;
loc_82A26928:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83742f00
	sub_83742F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26930"))) PPC_WEAK_FUNC(sub_82A26930);
PPC_FUNC_IMPL(__imp__sub_82A26930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,160
	cr6.compare<int32_t>(ctx.r4.s32, 160, xer);
	// bne cr6,0x82a26958
	if (!cr6.eq) goto loc_82A26958;
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x83742958
	sub_83742958(ctx, base);
	return;
loc_82A26958:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83742958
	sub_83742958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26960"))) PPC_WEAK_FUNC(sub_82A26960);
PPC_FUNC_IMPL(__imp__sub_82A26960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x82a26984
	if (!cr6.lt) goto loc_82A26984;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a26980
	if (cr6.eq) goto loc_82A26980;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a26984
	if (!cr6.eq) goto loc_82A26984;
loc_82A26980:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A26984:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a26998
	if (!cr6.eq) goto loc_82A26998;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A26998:
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,130
	cr6.compare<int32_t>(ctx.r11.s32, 130, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,133
	cr6.compare<int32_t>(ctx.r11.s32, 133, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269D0"))) PPC_WEAK_FUNC(sub_82A269D0);
PPC_FUNC_IMPL(__imp__sub_82A269D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,24356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24356);
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269E0"))) PPC_WEAK_FUNC(sub_82A269E0);
PPC_FUNC_IMPL(__imp__sub_82A269E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,48709
	ctx.r11.u64 = ctx.r11.u64 | 48709;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269F8"))) PPC_WEAK_FUNC(sub_82A269F8);
PPC_FUNC_IMPL(__imp__sub_82A269F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48709
	ctx.r10.u64 = ctx.r11.u64 | 48709;
	// lbzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26A14"))) PPC_WEAK_FUNC(sub_82A26A14);
PPC_FUNC_IMPL(__imp__sub_82A26A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26A18"))) PPC_WEAK_FUNC(sub_82A26A18);
PPC_FUNC_IMPL(__imp__sub_82A26A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x82a26a30
	if (cr6.lt) goto loc_82A26A30;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r11,4808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4808);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82A26A30:
	// mulli r11,r5,8248
	ctx.r11.s64 = ctx.r5.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ori r8,r10,48952
	ctx.r8.u64 = ctx.r10.u64 | 48952;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26A4C"))) PPC_WEAK_FUNC(sub_82A26A4C);
PPC_FUNC_IMPL(__imp__sub_82A26A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26A50"))) PPC_WEAK_FUNC(sub_82A26A50);
PPC_FUNC_IMPL(__imp__sub_82A26A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x82a26a68
	if (cr6.lt) goto loc_82A26A68;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r11,4808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4808);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82A26A68:
	// mulli r11,r5,8248
	ctx.r11.s64 = ctx.r5.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ori r8,r10,48956
	ctx.r8.u64 = ctx.r10.u64 | 48956;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26A84"))) PPC_WEAK_FUNC(sub_82A26A84);
PPC_FUNC_IMPL(__imp__sub_82A26A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26A88"))) PPC_WEAK_FUNC(sub_82A26A88);
PPC_FUNC_IMPL(__imp__sub_82A26A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a26aa8
	if (!cr6.lt) goto loc_82A26AA8;
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,48936
	ctx.r8.u64 = ctx.r10.u64 | 48936;
	// lbzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
loc_82A26AA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26AB0"))) PPC_WEAK_FUNC(sub_82A26AB0);
PPC_FUNC_IMPL(__imp__sub_82A26AB0) {
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
	// bne cr6,0x82a26ac8
	if (!cr6.eq) goto loc_82A26AC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A26AC8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a26ae0
	if (cr6.gt) goto loc_82A26AE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A26AE0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26AE8"))) PPC_WEAK_FUNC(sub_82A26AE8);
PPC_FUNC_IMPL(__imp__sub_82A26AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82a26b8c
	if (cr6.eq) goto loc_82A26B8C;
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// beq cr6,0x82a26b8c
	if (cr6.eq) goto loc_82A26B8C;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a26b8c
	if (!cr6.gt) goto loc_82A26B8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a26b24
	if (cr6.gt) goto loc_82A26B24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A26B24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a26b6c
	if (cr6.eq) goto loc_82A26B6C;
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82a26b40
	if (cr6.gt) goto loc_82A26B40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A26B40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a26b6c
	if (!cr6.eq) goto loc_82A26B6C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a26b64
	if (!cr6.lt) goto loc_82A26B64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A26B64:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82A26B6C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a26b64
	if (!cr6.lt) goto loc_82A26B64;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82A26B8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26B94"))) PPC_WEAK_FUNC(sub_82A26B94);
PPC_FUNC_IMPL(__imp__sub_82A26B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26B98"))) PPC_WEAK_FUNC(sub_82A26B98);
PPC_FUNC_IMPL(__imp__sub_82A26B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mulli r10,r4,8248
	ctx.r10.s64 = ctx.r4.s64 * 8248;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mulli r10,r9,8248
	ctx.r10.s64 = ctx.r9.s64 * 8248;
	// ori r11,r7,48940
	ctx.r11.u64 = ctx.r7.u64 | 48940;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfsx f2,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a26ae8
	sub_82A26AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26BC4"))) PPC_WEAK_FUNC(sub_82A26BC4);
PPC_FUNC_IMPL(__imp__sub_82A26BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26BC8"))) PPC_WEAK_FUNC(sub_82A26BC8);
PPC_FUNC_IMPL(__imp__sub_82A26BC8) {
	PPC_FUNC_PROLOGUE();
	// fmr f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f2.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82a26ae8
	sub_82A26AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26BD8"))) PPC_WEAK_FUNC(sub_82A26BD8);
PPC_FUNC_IMPL(__imp__sub_82A26BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a26bf0
	if (!cr6.eq) goto loc_82A26BF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26BF0:
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// blt cr6,0x82a26c04
	if (cr6.lt) goto loc_82A26C04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f1,-7352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26C04:
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(ctx.r11.u32, 81, xer);
	// blt cr6,0x82a26c18
	if (cr6.lt) goto loc_82A26C18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-9976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9976);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26C18:
	// cmplwi cr6,r11,79
	cr6.compare<uint32_t>(ctx.r11.u32, 79, xer);
	// blt cr6,0x82a26c2c
	if (cr6.lt) goto loc_82A26C2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-4460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26C2C:
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(ctx.r11.u32, 76, xer);
	// blt cr6,0x82a26c40
	if (cr6.lt) goto loc_82A26C40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-11740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11740);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26C40:
	// cmplwi cr6,r11,74
	cr6.compare<uint32_t>(ctx.r11.u32, 74, xer);
	// blt cr6,0x82a26c54
	if (cr6.lt) goto loc_82A26C54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,21708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26C54:
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// blt cr6,0x82a26c68
	if (cr6.lt) goto loc_82A26C68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-9984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9984);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26C68:
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// blt cr6,0x82a26c7c
	if (cr6.lt) goto loc_82A26C7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26C7C:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// blt cr6,0x82a26c90
	if (cr6.lt) goto loc_82A26C90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-11316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A26C90:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26C9C"))) PPC_WEAK_FUNC(sub_82A26C9C);
PPC_FUNC_IMPL(__imp__sub_82A26C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26CA0"))) PPC_WEAK_FUNC(sub_82A26CA0);
PPC_FUNC_IMPL(__imp__sub_82A26CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a26d94
	if (!cr6.lt) goto loc_82A26D94;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lhz r6,32(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 32);
	// lwz r7,36(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r11,r11,4760
	ctx.r11.s64 = ctx.r11.s64 + 4760;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a26cd4
	if (!cr6.eq) goto loc_82A26CD4;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a26cf8
	goto loc_82A26CF8;
loc_82A26CD4:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82a26cf0
	if (!cr6.eq) goto loc_82A26CF0;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a26cf4
	if (cr6.eq) goto loc_82A26CF4;
loc_82A26CF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A26CF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A26CF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a26d94
	if (!cr6.eq) goto loc_82A26D94;
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,-16600
	ctx.r8.s64 = ctx.r8.s64 + -16600;
loc_82A26D1C:
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x82a26d34
	if (!cr6.lt) goto loc_82A26D34;
	// mulli r11,r9,208
	ctx.r11.s64 = ctx.r9.s64 * 208;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// b 0x82a26d38
	goto loc_82A26D38;
loc_82A26D34:
	// addi r11,r8,6720
	ctx.r11.s64 = ctx.r8.s64 + 6720;
loc_82A26D38:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a26d50
	if (!cr6.eq) goto loc_82A26D50;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a26d74
	goto loc_82A26D74;
loc_82A26D50:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a26d6c
	if (!cr6.eq) goto loc_82A26D6C;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a26d70
	if (cr6.eq) goto loc_82A26D70;
loc_82A26D6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A26D70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A26D74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// blt cr6,0x82a26d1c
	if (cr6.lt) goto loc_82A26D1C;
loc_82A26D94:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26D9C"))) PPC_WEAK_FUNC(sub_82A26D9C);
PPC_FUNC_IMPL(__imp__sub_82A26D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26DA0"))) PPC_WEAK_FUNC(sub_82A26DA0);
PPC_FUNC_IMPL(__imp__sub_82A26DA0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a26ca0
	ctx.lr = 0x82A26DC0;
	sub_82A26CA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// mulli r10,r6,8248
	ctx.r10.s64 = ctx.r6.s64 * 8248;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addis r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 65536;
	// addi r10,r10,-16600
	ctx.r10.s64 = ctx.r10.s64 + -16600;
	// bge cr6,0x82a26e04
	if (!cr6.lt) goto loc_82A26E04;
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x82a26e08
	goto loc_82A26E08;
loc_82A26E04:
	// addi r3,r10,6720
	ctx.r3.s64 = ctx.r10.s64 + 6720;
loc_82A26E08:
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

__attribute__((alias("__imp__sub_82A26E20"))) PPC_WEAK_FUNC(sub_82A26E20);
PPC_FUNC_IMPL(__imp__sub_82A26E20) {
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
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x83742bd0
	ctx.lr = 0x82A26E58;
	sub_83742BD0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a26e7c
	if (cr6.eq) goto loc_82A26E7C;
loc_82A26E64:
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
loc_82A26E7C:
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x83742df0
	ctx.lr = 0x82A26E9C;
	sub_83742DF0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a26ed4
	if (!cr6.eq) goto loc_82A26ED4;
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// li r11,160
	ctx.r11.s64 = 160;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x83742958
	ctx.lr = 0x82A26EC8;
	sub_83742958(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a26e64
	if (cr6.eq) goto loc_82A26E64;
loc_82A26ED4:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-9624
	ctx.r3.s64 = ctx.r3.s64 + -9624;
	// bl 0x82a4d8a0
	ctx.lr = 0x82A26EE0;
	sub_82A4D8A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a26f08
	if (!cr6.eq) goto loc_82A26F08;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-1376
	ctx.r3.s64 = ctx.r3.s64 + -1376;
	// bl 0x82a4d8a0
	ctx.lr = 0x82A26EF8;
	sub_82A4D8A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a26f0c
	if (cr6.eq) goto loc_82A26F0C;
loc_82A26F08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A26F0C:
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

__attribute__((alias("__imp__sub_82A26F20"))) PPC_WEAK_FUNC(sub_82A26F20);
PPC_FUNC_IMPL(__imp__sub_82A26F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a26f5c
	if (!cr6.lt) goto loc_82A26F5C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// ori r9,r11,849
	ctx.r9.u64 = ctx.r11.u64 | 849;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a26f68
	if (cr6.eq) goto loc_82A26F68;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,852
	ctx.r3.s64 = ctx.r3.s64 + 852;
	// blr 
	return;
loc_82A26F5C:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r4,4808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4808);
	// b 0x82a26f7c
	goto loc_82A26F7C;
loc_82A26F68:
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,48952
	ctx.r8.u64 = ctx.r10.u64 | 48952;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82A26F7C:
	// addi r3,r3,576
	ctx.r3.s64 = ctx.r3.s64 + 576;
	// b 0x82635658
	sub_82635658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26F84"))) PPC_WEAK_FUNC(sub_82A26F84);
PPC_FUNC_IMPL(__imp__sub_82A26F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26F88"))) PPC_WEAK_FUNC(sub_82A26F88);
PPC_FUNC_IMPL(__imp__sub_82A26F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r7,568(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 568);
	// li r31,30
	ctx.r31.s64 = 30;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a27038
	if (cr6.eq) goto loc_82A27038;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r8,r3,576
	ctx.r8.s64 = ctx.r3.s64 + 576;
	// lwz r6,4808(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4808);
	// rlwinm r5,r6,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3FFF;
loc_82A26FB4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a26fc8
	if (cr6.lt) goto loc_82A26FC8;
	// addi r10,r8,720
	ctx.r10.s64 = ctx.r8.s64 + 720;
	// b 0x82a26fd8
	goto loc_82A26FD8;
loc_82A26FC8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82A26FD8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r30,r11,14,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a26ffc
	if (!cr6.eq) goto loc_82A26FFC;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a27000
	if (cr6.eq) goto loc_82A27000;
loc_82A26FFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27000:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2701c
	if (!cr6.eq) goto loc_82A2701C;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a27034
	if (cr6.eq) goto loc_82A27034;
loc_82A2701C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82a26fb4
	if (cr6.lt) goto loc_82A26FB4;
	// b 0x82a27038
	goto loc_82A27038;
loc_82A27034:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82A27038:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r10,r3,576
	ctx.r10.s64 = ctx.r3.s64 + 576;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a27058
	if (cr6.lt) goto loc_82A27058;
	// addi r3,r10,720
	ctx.r3.s64 = ctx.r10.s64 + 720;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A27058:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27074"))) PPC_WEAK_FUNC(sub_82A27074);
PPC_FUNC_IMPL(__imp__sub_82A27074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27078"))) PPC_WEAK_FUNC(sub_82A27078);
PPC_FUNC_IMPL(__imp__sub_82A27078) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// addi r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 + 88;
	// sth r11,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r11.u16);
	// sth r11,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r11.u16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// sth r11,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r11.u16);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
loc_82A270E8:
	// sth r11,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// stwu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a270e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A270E8;
	// sth r11,476(r31)
	PPC_STORE_U16(ctx.r31.u32 + 476, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// sth r11,488(r31)
	PPC_STORE_U16(ctx.r31.u32 + 488, ctx.r11.u16);
	// stw r9,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r9.u32);
	// sth r11,496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 496, ctx.r11.u16);
	// stw r9,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r9.u32);
	// sth r11,504(r31)
	PPC_STORE_U16(ctx.r31.u32 + 504, ctx.r11.u16);
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// sth r11,512(r31)
	PPC_STORE_U16(ctx.r31.u32 + 512, ctx.r11.u16);
	// stw r9,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r9.u32);
	// sth r11,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r11.u16);
	// stw r9,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r9.u32);
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// addi r11,r31,484
	ctx.r11.s64 = ctx.r31.s64 + 484;
	// stw r9,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r9.u32);
	// bl 0x82a253d8
	ctx.lr = 0x82A27138;
	sub_82A253D8(ctx, base);
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

__attribute__((alias("__imp__sub_82A27150"))) PPC_WEAK_FUNC(sub_82A27150);
PPC_FUNC_IMPL(__imp__sub_82A27150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A27158;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r7,255
	ctx.r7.s64 = 255;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
loc_82A27198:
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r9,4808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r4,r9,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r9,4808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r4,r9,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r9,4808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r3,r9,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r9,4808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stb r8,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r8.u8);
	// sth r30,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r30.u16);
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// sth r30,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r30.u16);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r9,4808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r4,r9,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r9,4808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r9,4808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r4,r9,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r9,4808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stb r8,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r8.u8);
	// sth r30,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r30.u16);
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// ld r9,4760(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4760);
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// stb r31,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r31.u8);
	// stb r31,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r31.u8);
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bdnz 0x82a27198
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A27198;
	// addi r28,r27,724
	ctx.r28.s64 = ctx.r27.s64 + 724;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a25330
	ctx.lr = 0x82A272AC;
	sub_82A25330(ctx, base);
	// sth r30,776(r27)
	PPC_STORE_U16(ctx.r27.u32 + 776, ctx.r30.u16);
	// stw r31,780(r27)
	PPC_STORE_U32(ctx.r27.u32 + 780, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a25540
	ctx.lr = 0x82A272BC;
	sub_82A25540(ctx, base);
	// stw r29,812(r27)
	PPC_STORE_U32(ctx.r27.u32 + 812, ctx.r29.u32);
	// stw r29,816(r27)
	PPC_STORE_U32(ctx.r27.u32 + 816, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a25600
	ctx.lr = 0x82A272CC;
	sub_82A25600(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A272D8"))) PPC_WEAK_FUNC(sub_82A272D8);
PPC_FUNC_IMPL(__imp__sub_82A272D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r4,r6,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
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
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwimi r4,r6,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
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
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A273A0"))) PPC_WEAK_FUNC(sub_82A273A0);
PPC_FUNC_IMPL(__imp__sub_82A273A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A273A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A273D0:
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r3,4808(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rlwimi r6,r3,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4808(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// rlwimi r4,r6,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stb r10,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4808(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r29,r6,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// lwz r6,4808(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r29,r6,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// stb r10,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// stb r10,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r10.u8);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// stb r9,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r9.u8);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// lwz r6,4808(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r28,r6,0,0,13
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r28.u64 & 0xFFFFFFFF0003FFFF);
	// stw r28,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r28.u32);
	// lwz r6,4808(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r28,r6,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stb r10,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// stb r10,59(r11)
	PPC_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// stb r9,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r9.u8);
	// stb r9,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r9.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r28,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r28.u32);
	// lwz r10,4808(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r27,r10,0,0,13
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r27.u64 & 0xFFFFFFFF0003FFFF);
	// stw r27,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r27.u32);
	// lwz r10,4808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwimi r27,r8,0,14,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stb r30,83(r11)
	PPC_STORE_U8(ctx.r11.u32 + 83, ctx.r30.u8);
	// stb r10,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r10.u8);
	// stb r9,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r9.u8);
	// stw r3,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r3.u32);
	// stw r7,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stb r9,92(r11)
	PPC_STORE_U8(ctx.r11.u32 + 92, ctx.r9.u8);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// stw r27,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r27.u32);
	// lwz r7,4808(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r5,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// lwz r7,4808(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r3,r7,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r6.u32);
	// stb r10,105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 105, ctx.r10.u8);
	// stb r10,106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 106, ctx.r10.u8);
	// stb r10,107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 107, ctx.r10.u8);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r3,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// stb r9,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r9.u8);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// stb r9,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r9.u8);
	// lwz r7,4808(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r4.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r7,4808(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stb r9,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r9.u8);
	// stb r10,129(r11)
	PPC_STORE_U8(ctx.r11.u32 + 129, ctx.r10.u8);
	// stb r10,130(r11)
	PPC_STORE_U8(ctx.r11.u32 + 130, ctx.r10.u8);
	// stb r10,131(r11)
	PPC_STORE_U8(ctx.r11.u32 + 131, ctx.r10.u8);
	// stw r6,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r6.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stb r9,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r9.u8);
	// stwu r10,144(r11)
	ea = 144 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bdnz 0x82a273d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A273D0;
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// lwz r7,4808(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r11,r7,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,4808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// stb r9,724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 724, ctx.r9.u8);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stb r10,725(r31)
	PPC_STORE_U8(ctx.r31.u32 + 725, ctx.r10.u8);
	// stb r10,726(r31)
	PPC_STORE_U8(ctx.r31.u32 + 726, ctx.r10.u8);
	// stb r10,727(r31)
	PPC_STORE_U8(ctx.r31.u32 + 727, ctx.r10.u8);
	// stw r7,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r7.u32);
	// stw r10,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r10.u32);
	// stw r10,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r10.u32);
	// stb r9,736(r31)
	PPC_STORE_U8(ctx.r31.u32 + 736, ctx.r9.u8);
	// stw r10,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r10.u32);
	// bl 0x82a25868
	ctx.lr = 0x82A275F8;
	sub_82A25868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27604"))) PPC_WEAK_FUNC(sub_82A27604);
PPC_FUNC_IMPL(__imp__sub_82A27604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27608"))) PPC_WEAK_FUNC(sub_82A27608);
PPC_FUNC_IMPL(__imp__sub_82A27608) {
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
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// li r10,10
	ctx.r10.s64 = 10;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stb r9,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r9.u8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// sth r11,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r11.u16);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r11.u16);
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r11.u16);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stb r9,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r9.u8);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// sth r11,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r11.u16);
	// sth r11,58(r3)
	PPC_STORE_U16(ctx.r3.u32 + 58, ctx.r11.u16);
	// sth r11,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r11.u16);
	// sth r11,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r11.u16);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stb r9,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r9.u8);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r11.u8);
	// sth r11,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r11.u16);
	// sth r11,82(r3)
	PPC_STORE_U16(ctx.r3.u32 + 82, ctx.r11.u16);
	// sth r11,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r11.u16);
	// sth r11,86(r3)
	PPC_STORE_U16(ctx.r3.u32 + 86, ctx.r11.u16);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stb r9,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r9.u8);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// stb r11,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r11.u8);
	// sth r11,104(r3)
	PPC_STORE_U16(ctx.r3.u32 + 104, ctx.r11.u16);
	// sth r11,106(r3)
	PPC_STORE_U16(ctx.r3.u32 + 106, ctx.r11.u16);
	// sth r11,108(r3)
	PPC_STORE_U16(ctx.r3.u32 + 108, ctx.r11.u16);
	// sth r11,110(r3)
	PPC_STORE_U16(ctx.r3.u32 + 110, ctx.r11.u16);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// stb r9,117(r3)
	PPC_STORE_U8(ctx.r3.u32 + 117, ctx.r9.u8);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// stb r11,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r11.u8);
	// stb r11,125(r3)
	PPC_STORE_U8(ctx.r3.u32 + 125, ctx.r11.u8);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// sth r11,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, ctx.r11.u16);
	// sth r11,130(r3)
	PPC_STORE_U16(ctx.r3.u32 + 130, ctx.r11.u16);
	// sth r11,132(r3)
	PPC_STORE_U16(ctx.r3.u32 + 132, ctx.r11.u16);
	// sth r11,134(r3)
	PPC_STORE_U16(ctx.r3.u32 + 134, ctx.r11.u16);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stb r11,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r11.u8);
	// stb r11,142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 142, ctx.r11.u8);
	// stb r11,143(r3)
	PPC_STORE_U8(ctx.r3.u32 + 143, ctx.r11.u8);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stb r11,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r11.u8);
	// stb r11,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r11.u8);
	// stb r11,147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r11.u8);
	// stb r11,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r11.u8);
	// stb r11,150(r3)
	PPC_STORE_U8(ctx.r3.u32 + 150, ctx.r11.u8);
	// stb r11,151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 151, ctx.r11.u8);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// sth r11,152(r3)
	PPC_STORE_U16(ctx.r3.u32 + 152, ctx.r11.u16);
	// sth r11,154(r3)
	PPC_STORE_U16(ctx.r3.u32 + 154, ctx.r11.u16);
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// sth r11,158(r3)
	PPC_STORE_U16(ctx.r3.u32 + 158, ctx.r11.u16);
	// stw r6,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r6.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// sth r11,152(r3)
	PPC_STORE_U16(ctx.r3.u32 + 152, ctx.r11.u16);
	// addi r10,r3,152
	ctx.r10.s64 = ctx.r3.s64 + 152;
	// sth r11,154(r3)
	PPC_STORE_U16(ctx.r3.u32 + 154, ctx.r11.u16);
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// sth r11,158(r3)
	PPC_STORE_U16(ctx.r3.u32 + 158, ctx.r11.u16);
	// sth r11,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r11.u16);
	// sth r11,166(r3)
	PPC_STORE_U16(ctx.r3.u32 + 166, ctx.r11.u16);
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// lwz r4,168(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// rlwimi r4,r10,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// rlwimi r9,r10,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// sth r11,184(r3)
	PPC_STORE_U16(ctx.r3.u32 + 184, ctx.r11.u16);
	// sth r11,186(r3)
	PPC_STORE_U16(ctx.r3.u32 + 186, ctx.r11.u16);
	// sth r11,188(r3)
	PPC_STORE_U16(ctx.r3.u32 + 188, ctx.r11.u16);
	// sth r11,190(r3)
	PPC_STORE_U16(ctx.r3.u32 + 190, ctx.r11.u16);
	// sth r11,196(r3)
	PPC_STORE_U16(ctx.r3.u32 + 196, ctx.r11.u16);
	// bl 0x82a25a40
	ctx.lr = 0x82A277D0;
	sub_82A25A40(ctx, base);
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

__attribute__((alias("__imp__sub_82A277E8"))) PPC_WEAK_FUNC(sub_82A277E8);
PPC_FUNC_IMPL(__imp__sub_82A277E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
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
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stb r11,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r11.u8);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// ld r10,4760(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4760);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// std r10,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r10.u64);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
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
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stb r11,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r11.u8);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A278B8"))) PPC_WEAK_FUNC(sub_82A278B8);
PPC_FUNC_IMPL(__imp__sub_82A278B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A278C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r29,r10,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// rlwimi r29,r10,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lfs f0,9008(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwimi r29,r10,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// rlwimi r28,r10,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stb r8,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r8.u8);
	// sth r9,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r9.u16);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwimi r4,r10,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// rlwimi r30,r10,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwimi r4,r10,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// lwz r10,4808(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4808);
	// rlwimi r30,r10,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// stb r8,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r8.u8);
	// sth r9,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r9.u16);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82a25bd8
	ctx.lr = 0x82A27A10;
	sub_82A25BD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27A1C"))) PPC_WEAK_FUNC(sub_82A27A1C);
PPC_FUNC_IMPL(__imp__sub_82A27A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27A20"))) PPC_WEAK_FUNC(sub_82A27A20);
PPC_FUNC_IMPL(__imp__sub_82A27A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A27A28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a278b8
	ctx.lr = 0x82A27A34;
	sub_82A278B8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
	// stw r11,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r11.u32);
	// addi r11,r29,120
	ctx.r11.s64 = ctx.r29.s64 + 120;
	// lwz r10,148(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// addi r31,r29,152
	ctx.r31.s64 = ctx.r29.s64 + 152;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r27,4
	ctx.r27.s64 = 4;
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r10.u32);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r9.u32);
	// lwz r8,144(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r8.u32);
	// lwz r7,148(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r7.u32);
	// stw r30,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r30.u32);
	// stw r30,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r30.u32);
	// stw r30,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r30.u32);
	// stw r30,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r30.u32);
	// stw r30,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r30.u32);
	// stw r30,140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 140, ctx.r30.u32);
loc_82A27AA8:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,25168
	ctx.r6.s64 = ctx.r11.s64 + 25168;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823fca98
	ctx.lr = 0x82A27AC0;
	sub_823FCA98(ctx, base);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bge 0x82a27aa8
	if (!cr0.lt) goto loc_82A27AA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a25e38
	ctx.lr = 0x82A27B78;
	sub_82A25E38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27B84"))) PPC_WEAK_FUNC(sub_82A27B84);
PPC_FUNC_IMPL(__imp__sub_82A27B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27B88"))) PPC_WEAK_FUNC(sub_82A27B88);
PPC_FUNC_IMPL(__imp__sub_82A27B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A27B90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x82a278b8
	ctx.lr = 0x82A27BBC;
	sub_82A278B8(ctx, base);
	// addi r3,r29,136
	ctx.r3.s64 = ctx.r29.s64 + 136;
	// bl 0x82a272d8
	ctx.lr = 0x82A27BC4;
	sub_82A272D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a25d88
	ctx.lr = 0x82A27BCC;
	sub_82A25D88(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82a27a20
	ctx.lr = 0x82A27BD4;
	sub_82A27A20(ctx, base);
	// addi r29,r31,516
	ctx.r29.s64 = ctx.r31.s64 + 516;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a278b8
	ctx.lr = 0x82A27BE0;
	sub_82A278B8(ctx, base);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r30.u8);
	// stb r30,645(r31)
	PPC_STORE_U8(ctx.r31.u32 + 645, ctx.r30.u8);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// bl 0x82a25f48
	ctx.lr = 0x82A27C04;
	sub_82A25F48(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82a25cb8
	ctx.lr = 0x82A27C0C;
	sub_82A25CB8(ctx, base);
	// stb r30,708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 708, ctx.r30.u8);
	// stb r30,709(r31)
	PPC_STORE_U8(ctx.r31.u32 + 709, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,710(r31)
	PPC_STORE_U8(ctx.r31.u32 + 710, ctx.r30.u8);
	// stb r30,711(r31)
	PPC_STORE_U8(ctx.r31.u32 + 711, ctx.r30.u8);
	// stb r30,712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 712, ctx.r30.u8);
	// stb r30,713(r31)
	PPC_STORE_U8(ctx.r31.u32 + 713, ctx.r30.u8);
	// stb r30,714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 714, ctx.r30.u8);
	// stb r30,715(r31)
	PPC_STORE_U8(ctx.r31.u32 + 715, ctx.r30.u8);
	// sth r30,716(r31)
	PPC_STORE_U16(ctx.r31.u32 + 716, ctx.r30.u16);
	// sth r30,718(r31)
	PPC_STORE_U16(ctx.r31.u32 + 718, ctx.r30.u16);
	// stb r30,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r30.u8);
	// stb r30,721(r31)
	PPC_STORE_U8(ctx.r31.u32 + 721, ctx.r30.u8);
	// stb r30,722(r31)
	PPC_STORE_U8(ctx.r31.u32 + 722, ctx.r30.u8);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// stb r30,728(r31)
	PPC_STORE_U8(ctx.r31.u32 + 728, ctx.r30.u8);
	// stb r30,729(r31)
	PPC_STORE_U8(ctx.r31.u32 + 729, ctx.r30.u8);
	// stb r30,730(r31)
	PPC_STORE_U8(ctx.r31.u32 + 730, ctx.r30.u8);
	// stb r30,731(r31)
	PPC_STORE_U8(ctx.r31.u32 + 731, ctx.r30.u8);
	// stb r30,732(r31)
	PPC_STORE_U8(ctx.r31.u32 + 732, ctx.r30.u8);
	// stb r30,733(r31)
	PPC_STORE_U8(ctx.r31.u32 + 733, ctx.r30.u8);
	// stb r30,734(r31)
	PPC_STORE_U8(ctx.r31.u32 + 734, ctx.r30.u8);
	// stb r30,735(r31)
	PPC_STORE_U8(ctx.r31.u32 + 735, ctx.r30.u8);
	// sth r30,736(r31)
	PPC_STORE_U16(ctx.r31.u32 + 736, ctx.r30.u16);
	// sth r30,738(r31)
	PPC_STORE_U16(ctx.r31.u32 + 738, ctx.r30.u16);
	// stb r30,740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 740, ctx.r30.u8);
	// stb r30,741(r31)
	PPC_STORE_U8(ctx.r31.u32 + 741, ctx.r30.u8);
	// stb r30,742(r31)
	PPC_STORE_U8(ctx.r31.u32 + 742, ctx.r30.u8);
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// stb r30,748(r31)
	PPC_STORE_U8(ctx.r31.u32 + 748, ctx.r30.u8);
	// stb r30,749(r31)
	PPC_STORE_U8(ctx.r31.u32 + 749, ctx.r30.u8);
	// stb r30,750(r31)
	PPC_STORE_U8(ctx.r31.u32 + 750, ctx.r30.u8);
	// stb r30,751(r31)
	PPC_STORE_U8(ctx.r31.u32 + 751, ctx.r30.u8);
	// stb r30,752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 752, ctx.r30.u8);
	// stb r30,753(r31)
	PPC_STORE_U8(ctx.r31.u32 + 753, ctx.r30.u8);
	// stb r30,754(r31)
	PPC_STORE_U8(ctx.r31.u32 + 754, ctx.r30.u8);
	// stb r30,755(r31)
	PPC_STORE_U8(ctx.r31.u32 + 755, ctx.r30.u8);
	// sth r30,756(r31)
	PPC_STORE_U16(ctx.r31.u32 + 756, ctx.r30.u16);
	// sth r30,758(r31)
	PPC_STORE_U16(ctx.r31.u32 + 758, ctx.r30.u16);
	// stb r30,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r30.u8);
	// stb r30,761(r31)
	PPC_STORE_U8(ctx.r31.u32 + 761, ctx.r30.u8);
	// stb r30,762(r31)
	PPC_STORE_U8(ctx.r31.u32 + 762, ctx.r30.u8);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// bl 0x82a25fb8
	ctx.lr = 0x82A27CBC;
	sub_82A25FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27CC8"))) PPC_WEAK_FUNC(sub_82A27CC8);
PPC_FUNC_IMPL(__imp__sub_82A27CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A27CD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82a273a0
	ctx.lr = 0x82A27CF8;
	sub_82A273A0(ctx, base);
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x82a273a0
	ctx.lr = 0x82A27D00;
	sub_82A273A0(ctx, base);
	// addi r29,r31,1504
	ctx.r29.s64 = ctx.r31.s64 + 1504;
	// li r28,575
	ctx.r28.s64 = 575;
loc_82A27D08:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,25168
	ctx.r6.s64 = ctx.r11.s64 + 25168;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x823fca98
	ctx.lr = 0x82A27D20;
	sub_823FCA98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a257c8
	ctx.lr = 0x82A27D28;
	sub_82A257C8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bge 0x82a27d08
	if (!cr0.lt) goto loc_82A27D08;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r31,19936
	ctx.r3.s64 = ctx.r31.s64 + 19936;
	// stw r11,19952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19952, ctx.r11.u32);
	// stw r11,19956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19956, ctx.r11.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// bl 0x82a257c8
	ctx.lr = 0x82A27D4C;
	sub_82A257C8(ctx, base);
	// addi r11,r31,19968
	ctx.r11.s64 = ctx.r31.s64 + 19968;
	// li r10,870
	ctx.r10.s64 = 870;
	// stw r30,23452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23452, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r30,23460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23460, ctx.r30.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,19968(r31)
	PPC_STORE_U16(ctx.r31.u32 + 19968, ctx.r9.u16);
	// stw r8,23456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23456, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A27D78:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a27d78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A27D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26128
	ctx.lr = 0x82A27D88;
	sub_82A26128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27D94"))) PPC_WEAK_FUNC(sub_82A27D94);
PPC_FUNC_IMPL(__imp__sub_82A27D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27D98"))) PPC_WEAK_FUNC(sub_82A27D98);
PPC_FUNC_IMPL(__imp__sub_82A27D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A27DA0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x82a27cc8
	ctx.lr = 0x82A27DB0;
	sub_82A27CC8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r27,-31778
	ctx.r27.s64 = -2082603008;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r9,23468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23468, ctx.r9.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r8,23467(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23467, ctx.r8.u8);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,23472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23472, ctx.r11.u32);
	// addi r7,r31,23472
	ctx.r7.s64 = ctx.r31.s64 + 23472;
	// sth r10,23476(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23476, ctx.r10.u16);
	// lis r26,-31778
	ctx.r26.s64 = -2082603008;
	// stw r9,23480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23480, ctx.r9.u32);
	// lwz r6,23472(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23472);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,23472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23472, ctx.r6.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,23472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23472, ctx.r5.u32);
	// ld r7,4760(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r11,23488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23488, ctx.r11.u32);
	// std r7,23476(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23476, ctx.r7.u64);
	// stb r8,23484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23484, ctx.r8.u8);
	// stb r9,23485(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23485, ctx.r9.u8);
	// sth r10,23492(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23492, ctx.r10.u16);
	// stw r9,23496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23496, ctx.r9.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r4,23488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23488);
	// rlwimi r7,r4,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r7,23488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23488, ctx.r7.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r3,r7,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,23488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23488, ctx.r3.u32);
	// ld r7,4760(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r11,23504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23504, ctx.r11.u32);
	// std r7,23492(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23492, ctx.r7.u64);
	// stb r8,23500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23500, ctx.r8.u8);
	// stb r9,23501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23501, ctx.r9.u8);
	// sth r10,23508(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23508, ctx.r10.u16);
	// stw r9,23512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23512, ctx.r9.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r6,23504(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23504);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r7,23504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23504, ctx.r7.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,23504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23504, ctx.r5.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ld r7,4760(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r11,23520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23520, ctx.r11.u32);
	// std r7,23508(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23508, ctx.r7.u64);
	// stb r8,23516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23516, ctx.r8.u8);
	// stb r9,23517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23517, ctx.r9.u8);
	// sth r10,23524(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23524, ctx.r10.u16);
	// stw r9,23528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23528, ctx.r9.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r4,23520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23520);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,23520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23520, ctx.r4.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r3,r7,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,23520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23520, ctx.r3.u32);
	// ld r7,4760(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r11,23536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23536, ctx.r11.u32);
	// stb r8,23532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23532, ctx.r8.u8);
	// stb r9,23533(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23533, ctx.r9.u8);
	// std r7,23524(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23524, ctx.r7.u64);
	// sth r10,23540(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23540, ctx.r10.u16);
	// stw r9,23544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23544, ctx.r9.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r6,23536(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23536);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,23536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23536, ctx.r6.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwimi r28,r7,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stw r28,23536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23536, ctx.r28.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// ld r7,4760(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stb r9,23549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23549, ctx.r9.u8);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stw r11,23552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23552, ctx.r11.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// std r7,23540(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23540, ctx.r7.u64);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stb r8,23548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23548, ctx.r8.u8);
	// sth r10,23556(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23556, ctx.r10.u16);
	// stw r9,23560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23560, ctx.r9.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r23,23552(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23552);
	// rlwimi r23,r7,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r23,23552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23552, ctx.r23.u32);
	// lwz r7,4808(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r22,r7,0,14,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFC0000);
	// stw r22,23552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23552, ctx.r22.u32);
	// ld r7,4760(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stb r9,23565(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23565, ctx.r9.u8);
	// stw r11,23568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23568, ctx.r11.u32);
	// std r7,23556(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23556, ctx.r7.u64);
	// stb r8,23564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23564, ctx.r8.u8);
	// sth r10,23572(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23572, ctx.r10.u16);
	// stw r9,23576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23576, ctx.r9.u32);
	// lwz r9,4808(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r7,23568(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23568);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,23568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23568, ctx.r9.u32);
	// lwz r9,4808(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r9,r7,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,23568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23568, ctx.r9.u32);
	// addi r9,r31,23632
	ctx.r9.s64 = ctx.r31.s64 + 23632;
	// ld r9,4760(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,23584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23584, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r9,23572(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23572, ctx.r9.u64);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stb r4,23580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23580, ctx.r4.u8);
	// stb r11,23581(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23581, ctx.r11.u8);
	// sth r10,23588(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23588, ctx.r10.u16);
	// stw r11,23592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23592, ctx.r11.u32);
	// lwz r10,4808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lwz r4,23584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23584);
	// rlwimi r4,r10,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,23584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23584, ctx.r4.u32);
	// lwz r10,4808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,23584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23584, ctx.r4.u32);
	// ld r10,4760(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r29,23600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23600, ctx.r29.u32);
	// stb r8,23596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23596, ctx.r8.u8);
	// stb r11,23597(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23597, ctx.r11.u8);
	// std r10,23588(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23588, ctx.r10.u64);
	// sth r24,23604(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23604, ctx.r24.u16);
	// stw r11,23608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23608, ctx.r11.u32);
	// lwz r10,4808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r9,23600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23600);
	// rlwimi r9,r10,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,23600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23600, ctx.r9.u32);
	// lwz r10,4808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r9,r10,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,23600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23600, ctx.r9.u32);
	// ori r9,r7,65535
	ctx.r9.u64 = ctx.r7.u64 | 65535;
	// ld r10,4760(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r29,23616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23616, ctx.r29.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// std r10,23604(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23604, ctx.r10.u64);
	// stb r11,23613(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23613, ctx.r11.u8);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stb r8,23612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23612, ctx.r8.u8);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// sth r24,23620(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23620, ctx.r24.u16);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r11,23624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23624, ctx.r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// lwz r10,4808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lis r22,0
	ctx.r22.s64 = 0;
	// lwz r7,23616(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23616);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,23616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23616, ctx.r7.u32);
	// lwz r10,4808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,23616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23616, ctx.r7.u32);
	// ld r10,4760(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// std r10,23620(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23620, ctx.r10.u64);
	// stb r11,23629(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23629, ctx.r11.u8);
	// stb r8,23628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23628, ctx.r8.u8);
	// stw r29,23632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23632, ctx.r29.u32);
	// sth r24,23636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23636, ctx.r24.u16);
	// stw r11,23640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23640, ctx.r11.u32);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lwz r11,23632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23632);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lwz r10,4808(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,23632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23632, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r8,23632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23632, ctx.r8.u32);
	// ld r8,4760(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r29,23648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23648, ctx.r29.u32);
	// li r29,255
	ctx.r29.s64 = 255;
	// stb r9,23644(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23644, ctx.r9.u8);
	// std r8,23636(r11)
	PPC_STORE_U64(ctx.r11.u32 + 23636, ctx.r8.u64);
	// stb r10,23645(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23645, ctx.r10.u8);
	// sth r24,23652(r11)
	PPC_STORE_U16(ctx.r11.u32 + 23652, ctx.r24.u16);
	// stw r10,23656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23656, ctx.r10.u32);
	// lwz r31,23648(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23648);
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r8,4808(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r31,r8,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,23648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23648, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r8,4808(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r30,r8,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,23648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23648, ctx.r30.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// ld r8,4760(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r23,23664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23664, ctx.r23.u32);
	// stb r9,23660(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23660, ctx.r9.u8);
	// stb r10,23661(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23661, ctx.r10.u8);
	// std r8,23652(r11)
	PPC_STORE_U64(ctx.r11.u32 + 23652, ctx.r8.u64);
	// sth r3,23668(r11)
	PPC_STORE_U16(ctx.r11.u32 + 23668, ctx.r3.u16);
	// stw r10,23672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23672, ctx.r10.u32);
	// lwz r8,4808(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r6,23664(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23664);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,23664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23664, ctx.r6.u32);
	// lwz r8,4808(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,23664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23664, ctx.r6.u32);
	// ld r8,4760(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r23,23680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23680, ctx.r23.u32);
	// stb r9,23676(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23676, ctx.r9.u8);
	// stb r10,23677(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23677, ctx.r10.u8);
	// std r8,23668(r11)
	PPC_STORE_U64(ctx.r11.u32 + 23668, ctx.r8.u64);
	// sth r3,23684(r11)
	PPC_STORE_U16(ctx.r11.u32 + 23684, ctx.r3.u16);
	// stw r10,23688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23688, ctx.r10.u32);
	// lwz r8,4808(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// addi r28,r31,23800
	ctx.r28.s64 = ctx.r31.s64 + 23800;
	// lwz r5,23680(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23680);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwimi r5,r8,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,23680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23680, ctx.r5.u32);
	// lwz r8,4808(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r5,r8,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,23680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23680, ctx.r5.u32);
	// ld r8,4760(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r23,23696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23696, ctx.r23.u32);
	// stb r9,23692(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23692, ctx.r9.u8);
	// ori r9,r22,65535
	ctx.r9.u64 = ctx.r22.u64 | 65535;
	// stb r10,23693(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23693, ctx.r10.u8);
	// std r8,23684(r11)
	PPC_STORE_U64(ctx.r11.u32 + 23684, ctx.r8.u64);
	// sth r3,23700(r11)
	PPC_STORE_U16(ctx.r11.u32 + 23700, ctx.r3.u16);
	// stw r10,23704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23704, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r8,4808(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r4,23696(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23696);
	// rlwimi r8,r4,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,23696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23696, ctx.r8.u32);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,23696(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23696, ctx.r8.u32);
	// ld r11,4760(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r6,23709(r7)
	PPC_STORE_U8(ctx.r7.u32 + 23709, ctx.r6.u8);
	// stw r23,23712(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23712, ctx.r23.u32);
	// std r11,23700(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23700, ctx.r11.u64);
	// stb r24,23708(r7)
	PPC_STORE_U8(ctx.r7.u32 + 23708, ctx.r24.u8);
	// sth r3,23716(r7)
	PPC_STORE_U16(ctx.r7.u32 + 23716, ctx.r3.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,23720(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23720, ctx.r30.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r7,23712(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 23712);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,23712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23712, ctx.r7.u32);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,23712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23712, ctx.r7.u32);
	// ld r11,4760(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r10,23728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23728, ctx.r10.u32);
	// std r11,23716(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23716, ctx.r11.u64);
	// stb r29,23724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23724, ctx.r29.u8);
	// stb r30,23725(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23725, ctx.r30.u8);
	// sth r9,23732(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23732, ctx.r9.u16);
	// stw r30,23736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23736, ctx.r30.u32);
	// lwz r6,23728(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23728);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,23728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23728, ctx.r6.u32);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,23728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23728, ctx.r6.u32);
	// ld r11,4760(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r10,23744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23744, ctx.r10.u32);
	// std r11,23732(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23732, ctx.r11.u64);
	// stb r29,23740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23740, ctx.r29.u8);
	// stb r30,23741(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23741, ctx.r30.u8);
	// sth r9,23748(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23748, ctx.r9.u16);
	// stw r30,23752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23752, ctx.r30.u32);
	// lwz r5,23744(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23744);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,23744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23744, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,23744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23744, ctx.r4.u32);
	// ld r11,4760(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r10,23760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23760, ctx.r10.u32);
	// std r11,23748(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23748, ctx.r11.u64);
	// stb r29,23756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23756, ctx.r29.u8);
	// stb r30,23757(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23757, ctx.r30.u8);
	// sth r9,23764(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23764, ctx.r9.u16);
	// stw r30,23768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23768, ctx.r30.u32);
	// lwz r8,23760(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23760);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r11,r8,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,23760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23760, ctx.r11.u32);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,23760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23760, ctx.r7.u32);
	// ld r11,4760(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stw r10,23776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23776, ctx.r10.u32);
	// stb r29,23772(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23772, ctx.r29.u8);
	// stb r30,23773(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23773, ctx.r30.u8);
	// std r11,23764(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23764, ctx.r11.u64);
	// sth r9,23780(r31)
	PPC_STORE_U16(ctx.r31.u32 + 23780, ctx.r9.u16);
	// stw r30,23784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23784, ctx.r30.u32);
	// lwz r6,23776(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23776);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,23776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23776, ctx.r6.u32);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,23776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23776, ctx.r6.u32);
	// ld r11,4760(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stb r29,23788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23788, ctx.r29.u8);
	// stb r30,23789(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23789, ctx.r30.u8);
	// std r11,23780(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23780, ctx.r11.u64);
	// stw r30,23792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23792, ctx.r30.u32);
	// stw r30,23796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23796, ctx.r30.u32);
	// bl 0x82a27cc8
	ctx.lr = 0x82A2831C;
	sub_82A27CC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a26128
	ctx.lr = 0x82A28324;
	sub_82A26128(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r5,-18272
	ctx.r5.s64 = ctx.r5.s64 + -18272;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r11.u16);
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r11,4808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4808);
	// rlwimi r10,r11,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// ld r11,4760(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4760);
	// stb r29,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r29.u8);
	// stb r30,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r30.u8);
	// std r11,4(r5)
	PPC_STORE_U64(ctx.r5.u32 + 4, ctx.r11.u64);
	// bl 0x82a26190
	ctx.lr = 0x82A28374;
	sub_82A26190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28380"))) PPC_WEAK_FUNC(sub_82A28380);
PPC_FUNC_IMPL(__imp__sub_82A28380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A28388;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// stb r29,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r29.u8);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x82a273a0
	ctx.lr = 0x82A283BC;
	sub_82A273A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31778
	ctx.r8.s64 = -2082603008;
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r29,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r29.u32);
	// addi r9,r31,768
	ctx.r9.s64 = ctx.r31.s64 + 768;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// sth r11,772(r31)
	PPC_STORE_U16(ctx.r31.u32 + 772, ctx.r11.u16);
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4808(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// lwz r28,768(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// rlwimi r28,r9,0,0,13
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r28.u64 & 0xFFFFFFFF0003FFFF);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r28,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r28.u32);
	// lwz r9,4808(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r27,r9,0,14,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFC0000);
	// stw r27,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r27.u32);
	// ld r9,4760(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4760);
	// std r9,772(r31)
	PPC_STORE_U64(ctx.r31.u32 + 772, ctx.r9.u64);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// stb r29,781(r31)
	PPC_STORE_U8(ctx.r31.u32 + 781, ctx.r29.u8);
	// stb r10,780(r31)
	PPC_STORE_U8(ctx.r31.u32 + 780, ctx.r10.u8);
	// sth r11,788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 788, ctx.r11.u16);
	// stw r29,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r29.u32);
	// lwz r9,4808(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// lwz r28,784(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwimi r9,r28,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// stw r9,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r9.u32);
	// lwz r9,4808(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r28,r9,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stw r28,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r28.u32);
	// ld r9,4760(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4760);
	// std r9,788(r31)
	PPC_STORE_U64(ctx.r31.u32 + 788, ctx.r9.u64);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// stb r29,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r29.u8);
	// stb r10,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r10.u8);
	// sth r11,804(r31)
	PPC_STORE_U16(ctx.r31.u32 + 804, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r29.u32);
	// lwz r9,4808(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// lwz r29,800(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// rlwimi r9,r29,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// lwz r9,4808(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4808);
	// rlwimi r29,r9,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r29.u32);
	// ld r9,4760(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4760);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r30,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r30.u32);
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// stb r11,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r11.u8);
	// std r9,804(r31)
	PPC_STORE_U64(ctx.r31.u32 + 804, ctx.r9.u64);
	// sth r4,820(r31)
	PPC_STORE_U16(ctx.r31.u32 + 820, ctx.r4.u16);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r9,4808(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	// lwz r5,816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// rlwimi r5,r9,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r5,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r5.u32);
	// lwz r9,4808(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r8.u32);
	// ld r9,4760(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4760);
	// std r9,820(r31)
	PPC_STORE_U64(ctx.r31.u32 + 820, ctx.r9.u64);
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// stb r10,828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 828, ctx.r10.u8);
	// stb r11,829(r31)
	PPC_STORE_U8(ctx.r31.u32 + 829, ctx.r11.u8);
	// sth r4,836(r31)
	PPC_STORE_U16(ctx.r31.u32 + 836, ctx.r4.u16);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lwz r9,4808(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwimi r5,r9,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r5.u32);
	// lwz r9,4808(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	// rlwimi r4,r9,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r4.u32);
	// ld r9,4760(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4760);
	// stb r10,844(r31)
	PPC_STORE_U8(ctx.r31.u32 + 844, ctx.r10.u8);
	// stb r11,845(r31)
	PPC_STORE_U8(ctx.r31.u32 + 845, ctx.r11.u8);
	// std r9,836(r31)
	PPC_STORE_U64(ctx.r31.u32 + 836, ctx.r9.u64);
	// stb r11,848(r31)
	PPC_STORE_U8(ctx.r31.u32 + 848, ctx.r11.u8);
	// stb r11,849(r31)
	PPC_STORE_U8(ctx.r31.u32 + 849, ctx.r11.u8);
	// stb r11,850(r31)
	PPC_STORE_U8(ctx.r31.u32 + 850, ctx.r11.u8);
	// stb r11,851(r31)
	PPC_STORE_U8(ctx.r31.u32 + 851, ctx.r11.u8);
	// stb r11,852(r31)
	PPC_STORE_U8(ctx.r31.u32 + 852, ctx.r11.u8);
	// stb r11,853(r31)
	PPC_STORE_U8(ctx.r31.u32 + 853, ctx.r11.u8);
	// stb r11,854(r31)
	PPC_STORE_U8(ctx.r31.u32 + 854, ctx.r11.u8);
	// stb r11,855(r31)
	PPC_STORE_U8(ctx.r31.u32 + 855, ctx.r11.u8);
	// sth r11,856(r31)
	PPC_STORE_U16(ctx.r31.u32 + 856, ctx.r11.u16);
	// sth r11,858(r31)
	PPC_STORE_U16(ctx.r31.u32 + 858, ctx.r11.u16);
	// stb r11,860(r31)
	PPC_STORE_U8(ctx.r31.u32 + 860, ctx.r11.u8);
	// stb r11,861(r31)
	PPC_STORE_U8(ctx.r31.u32 + 861, ctx.r11.u8);
	// stb r11,862(r31)
	PPC_STORE_U8(ctx.r31.u32 + 862, ctx.r11.u8);
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// bl 0x82a26470
	ctx.lr = 0x82A2855C;
	sub_82A26470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28568"))) PPC_WEAK_FUNC(sub_82A28568);
PPC_FUNC_IMPL(__imp__sub_82A28568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A28570;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r27,4
	ctx.r27.s64 = 4;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stb r30,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r30.u8);
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lwz r10,4808(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// rlwimi r8,r10,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
loc_82A2860C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,25168
	ctx.r6.s64 = ctx.r11.s64 + 25168;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823fca98
	ctx.lr = 0x82A28624;
	sub_823FCA98(ctx, base);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r11,4808(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4808);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bge 0x82a2860c
	if (!cr0.lt) goto loc_82A2860C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a26580
	ctx.lr = 0x82A286DC;
	sub_82A26580(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A286E8"))) PPC_WEAK_FUNC(sub_82A286E8);
PPC_FUNC_IMPL(__imp__sub_82A286E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A286F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a25330
	ctx.lr = 0x82A286FC;
	sub_82A25330(ctx, base);
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r10,4824
	ctx.r7.s64 = ctx.r10.s64 + 4824;
	// sth r9,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r9.u16);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// li r30,31
	ctx.r30.s64 = 31;
	// lhz r11,4824(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4824);
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82A28738:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a27608
	ctx.lr = 0x82A28740;
	sub_82A27608(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// bge 0x82a28738
	if (!cr0.lt) goto loc_82A28738;
	// addi r3,r31,6720
	ctx.r3.s64 = ctx.r31.s64 + 6720;
	// bl 0x82a27608
	ctx.lr = 0x82A28754;
	sub_82A27608(ctx, base);
	// stb r28,6928(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6928, ctx.r28.u8);
	// stb r28,6929(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6929, ctx.r28.u8);
	// addi r3,r31,6936
	ctx.r3.s64 = ctx.r31.s64 + 6936;
	// stw r28,6932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6932, ctx.r28.u32);
	// bl 0x82a277e8
	ctx.lr = 0x82A28768;
	sub_82A277E8(ctx, base);
	// addi r29,r31,6976
	ctx.r29.s64 = ctx.r31.s64 + 6976;
	// li r30,7
	ctx.r30.s64 = 7;
loc_82A28770:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4e020
	ctx.lr = 0x82A28778;
	sub_82A4E020(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// bge 0x82a28770
	if (!cr0.lt) goto loc_82A28770;
	// addi r3,r31,7424
	ctx.r3.s64 = ctx.r31.s64 + 7424;
	// bl 0x82a4e020
	ctx.lr = 0x82A2878C;
	sub_82A4E020(ctx, base);
	// addi r3,r31,7480
	ctx.r3.s64 = ctx.r31.s64 + 7480;
	// bl 0x82a27b88
	ctx.lr = 0x82A28794;
	sub_82A27B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26680
	ctx.lr = 0x82A2879C;
	sub_82A26680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A287A8"))) PPC_WEAK_FUNC(sub_82A287A8);
PPC_FUNC_IMPL(__imp__sub_82A287A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// ori r10,r11,48709
	ctx.r10.u64 = ctx.r11.u64 | 48709;
	// addi r7,r7,-16812
	ctx.r7.s64 = ctx.r7.s64 + -16812;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82a28858
	if (!cr6.eq) goto loc_82A28858;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a287e8
	if (!cr6.eq) goto loc_82A287E8;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a287ec
	if (cr6.eq) goto loc_82A287EC;
loc_82A287E8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A287EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a28858
	if (cr6.eq) goto loc_82A28858;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A28808:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82a28840
	if (cr6.eq) goto loc_82A28840;
	// sraw r10,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a28840
	if (cr6.eq) goto loc_82A28840;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
loc_82A28840:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// blt cr6,0x82a28808
	if (cr6.lt) goto loc_82A28808;
	// blr 
	return;
loc_82A28858:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A28860"))) PPC_WEAK_FUNC(sub_82A28860);
PPC_FUNC_IMPL(__imp__sub_82A28860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x82a28884
	if (!cr6.lt) goto loc_82A28884;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a288d0
	if (cr6.eq) goto loc_82A288D0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a288d0
	if (cr6.eq) goto loc_82A288D0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a288d0
	if (cr6.eq) goto loc_82A288D0;
loc_82A28884:
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,48940
	ctx.r8.u64 = ctx.r10.u64 | 48940;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a288b0
	if (!cr6.eq) goto loc_82A288B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A288B0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a288c8
	if (cr6.gt) goto loc_82A288C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A288C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82A288D0:
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,48984
	ctx.r8.u64 = ctx.r10.u64 | 48984;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// srawi r6,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A288F0"))) PPC_WEAK_FUNC(sub_82A288F0);
PPC_FUNC_IMPL(__imp__sub_82A288F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x82a28914
	if (!cr6.lt) goto loc_82A28914;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a28960
	if (cr6.eq) goto loc_82A28960;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a28960
	if (cr6.eq) goto loc_82A28960;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a28960
	if (cr6.eq) goto loc_82A28960;
loc_82A28914:
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,48940
	ctx.r8.u64 = ctx.r10.u64 | 48940;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a28940
	if (!cr6.eq) goto loc_82A28940;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A28940:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a28958
	if (!cr6.gt) goto loc_82A28958;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A28958:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82A28960:
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,48984
	ctx.r8.u64 = ctx.r10.u64 | 48984;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// srawi r6,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A28980"))) PPC_WEAK_FUNC(sub_82A28980);
PPC_FUNC_IMPL(__imp__sub_82A28980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mulli r10,r4,8248
	ctx.r10.s64 = ctx.r4.s64 * 8248;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mulli r10,r9,8248
	ctx.r10.s64 = ctx.r9.s64 * 8248;
	// ori r11,r7,48940
	ctx.r11.u64 = ctx.r7.u64 | 48940;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfsx f1,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f2,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// b 0x82a26ae8
	sub_82A26AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A289AC"))) PPC_WEAK_FUNC(sub_82A289AC);
PPC_FUNC_IMPL(__imp__sub_82A289AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A289B0"))) PPC_WEAK_FUNC(sub_82A289B0);
PPC_FUNC_IMPL(__imp__sub_82A289B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a289d0
	if (!cr6.lt) goto loc_82A289D0;
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,48936
	ctx.r8.u64 = ctx.r10.u64 | 48936;
	// lbzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// b 0x82a289d4
	goto loc_82A289D4;
loc_82A289D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A289D4:
	// b 0x82a26bd8
	sub_82A26BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A289D8"))) PPC_WEAK_FUNC(sub_82A289D8);
PPC_FUNC_IMPL(__imp__sub_82A289D8) {
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a28aac
	if (!cr6.lt) goto loc_82A28AAC;
	// mulli r11,r4,8248
	ctx.r11.s64 = ctx.r4.s64 * 8248;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// addi r3,r3,-8936
	ctx.r3.s64 = ctx.r3.s64 + -8936;
	// addi r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 + 120;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a28a24
	if (!cr6.eq) goto loc_82A28A24;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a28a28
	if (cr6.eq) goto loc_82A28A28;
loc_82A28A24:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A28A28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a28aac
	if (cr6.eq) goto loc_82A28AAC;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a28a58
	if (!cr6.eq) goto loc_82A28A58;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a28a5c
	if (cr6.eq) goto loc_82A28A5C;
loc_82A28A58:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A28A5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a28aac
	if (cr6.eq) goto loc_82A28AAC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ori r8,r11,48952
	ctx.r8.u64 = ctx.r11.u64 | 48952;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82a25b68
	ctx.lr = 0x82A28A84;
	sub_82A25B68(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r6,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r5,r11,r3
	ctx.r5.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A28AAC:
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

__attribute__((alias("__imp__sub_82A28AC0"))) PPC_WEAK_FUNC(sub_82A28AC0);
PPC_FUNC_IMPL(__imp__sub_82A28AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A28AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a28b00
	if (cr6.eq) goto loc_82A28B00;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A28AF8;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82A28B00:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a28b34
	if (cr6.eq) goto loc_82A28B34;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A28B2C;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A28B34:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a28b68
	if (cr6.eq) goto loc_82A28B68;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A28B60;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_82A28B68:
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a28b9c
	if (cr6.eq) goto loc_82A28B9C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A28B94;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82A28B9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28BA4"))) PPC_WEAK_FUNC(sub_82A28BA4);
PPC_FUNC_IMPL(__imp__sub_82A28BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28BA8"))) PPC_WEAK_FUNC(sub_82A28BA8);
PPC_FUNC_IMPL(__imp__sub_82A28BA8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// sth r31,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r31.u16);
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// stb r31,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r31.u8);
	// stb r31,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r31.u8);
	// stb r31,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r31.u8);
	// bl 0x82a253d8
	ctx.lr = 0x82A28BE4;
	sub_82A253D8(ctx, base);
	// stw r31,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r31.u32);
	// stw r31,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r31.u32);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stw r31,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r31.u32);
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// bl 0x82a25600
	ctx.lr = 0x82A28BFC;
	sub_82A25600(ctx, base);
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82a26190
	ctx.lr = 0x82A28C04;
	sub_82A26190(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-17696
	ctx.r3.s64 = ctx.r3.s64 + -17696;
	// bl 0x82a26470
	ctx.lr = 0x82A28C10;
	sub_82A26470(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-16828
	ctx.r3.s64 = ctx.r3.s64 + -16828;
	// bl 0x82a26580
	ctx.lr = 0x82A28C1C;
	sub_82A26580(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-16600
	ctx.r3.s64 = ctx.r3.s64 + -16600;
	// bl 0x82a26680
	ctx.lr = 0x82A28C28;
	sub_82A26680(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-8352
	ctx.r3.s64 = ctx.r3.s64 + -8352;
	// bl 0x82a26680
	ctx.lr = 0x82A28C34;
	sub_82A26680(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// ori r7,r10,849
	ctx.r7.u64 = ctx.r10.u64 | 849;
	// ori r6,r9,850
	ctx.r6.u64 = ctx.r9.u64 | 850;
	// ori r8,r11,848
	ctx.r8.u64 = ctx.r11.u64 | 848;
	// addi r5,r5,852
	ctx.r5.s64 = ctx.r5.s64 + 852;
	// lis r4,-31778
	ctx.r4.s64 = -2082603008;
	// stbx r31,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u8);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stbx r31,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u8);
	// addi r9,r9,876
	ctx.r9.s64 = ctx.r9.s64 + 876;
	// lwz r10,4808(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4808);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r10,4808(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4808);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stb r31,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r31.u8);
	// stb r31,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r31.u8);
	// stb r31,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r31.u8);
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// stw r31,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r31.u32);
	// stw r31,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r31.u32);
	// stb r11,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r11.u8);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// stb r11,16(r5)
	PPC_STORE_U8(ctx.r5.u32 + 16, ctx.r11.u8);
	// lwz r10,4808(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4808);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r6,r10,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,4808(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4808);
	// stb r31,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r31.u8);
	// rlwimi r5,r10,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stb r31,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r31.u8);
	// stb r31,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r31.u8);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stw r31,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
	// stw r31,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r31.u32);
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// stb r11,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r11.u8);
	// addi r31,r31,720
	ctx.r31.s64 = ctx.r31.s64 + 720;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stb r11,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28ac0
	ctx.lr = 0x82A28D00;
	sub_82A28AC0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82a28ac0
	ctx.lr = 0x82A28D08;
	sub_82A28AC0(ctx, base);
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

__attribute__((alias("__imp__sub_82A28D20"))) PPC_WEAK_FUNC(sub_82A28D20);
PPC_FUNC_IMPL(__imp__sub_82A28D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A28D28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A28D3C:
	// stw r30,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r30.u32);
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// stw r30,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r30.u32);
	// stw r30,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82a28ac0
	ctx.lr = 0x82A28D74;
	sub_82A28AC0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bge 0x82a28d3c
	if (!cr0.lt) goto loc_82A28D3C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a28ac0
	ctx.lr = 0x82A28D88;
	sub_82A28AC0(ctx, base);
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x82a28ac0
	ctx.lr = 0x82A28D90;
	sub_82A28AC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28D9C"))) PPC_WEAK_FUNC(sub_82A28D9C);
PPC_FUNC_IMPL(__imp__sub_82A28D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28DA0"))) PPC_WEAK_FUNC(sub_82A28DA0);
PPC_FUNC_IMPL(__imp__sub_82A28DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A28DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a27078
	ctx.lr = 0x82A28DBC;
	sub_82A27078(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// sth r31,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r31.u16);
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// stb r31,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r31.u8);
	// stb r31,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r31.u8);
	// stb r31,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r31.u8);
	// bl 0x82a253d8
	ctx.lr = 0x82A28DE0;
	sub_82A253D8(ctx, base);
	// stw r31,548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 548, ctx.r31.u32);
	// stw r31,552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 552, ctx.r31.u32);
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// stw r31,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r31.u32);
	// bl 0x82a27d98
	ctx.lr = 0x82A28DF4;
	sub_82A27D98(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-17696
	ctx.r3.s64 = ctx.r3.s64 + -17696;
	// bl 0x82a28380
	ctx.lr = 0x82A28E00;
	sub_82A28380(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-16828
	ctx.r3.s64 = ctx.r3.s64 + -16828;
	// bl 0x82a28568
	ctx.lr = 0x82A28E0C;
	sub_82A28568(ctx, base);
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r28,-16600
	ctx.r28.s64 = ctx.r28.s64 + -16600;
loc_82A28E18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a286e8
	ctx.lr = 0x82A28E20;
	sub_82A286E8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,8248
	ctx.r28.s64 = ctx.r28.s64 + 8248;
	// bge 0x82a28e18
	if (!cr0.lt) goto loc_82A28E18;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// bl 0x82a27150
	ctx.lr = 0x82A28E38;
	sub_82A27150(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,720
	ctx.r3.s64 = ctx.r3.s64 + 720;
	// bl 0x82a28d20
	ctx.lr = 0x82A28E44;
	sub_82A28D20(ctx, base);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// addi r7,r7,852
	ctx.r7.s64 = ctx.r7.s64 + 852;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwz r8,4808(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	// rlwimi r11,r8,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4808(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r9.u32);
	// stb r10,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r10.u8);
	// stb r31,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r31.u8);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// stb r31,6(r7)
	PPC_STORE_U8(ctx.r7.u32 + 6, ctx.r31.u8);
	// stb r31,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r31.u8);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// stb r10,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, ctx.r10.u8);
	// stw r31,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r31.u32);
	// lwz r11,4808(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r5,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r5.u32);
	// lwz r11,4808(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4808);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stb r10,28(r7)
	PPC_STORE_U8(ctx.r7.u32 + 28, ctx.r10.u8);
	// stb r31,29(r7)
	PPC_STORE_U8(ctx.r7.u32 + 29, ctx.r31.u8);
	// stb r31,30(r7)
	PPC_STORE_U8(ctx.r7.u32 + 30, ctx.r31.u8);
	// stw r9,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r9.u32);
	// stb r31,31(r7)
	PPC_STORE_U8(ctx.r7.u32 + 31, ctx.r31.u8);
	// stw r31,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r31.u32);
	// stw r31,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r31.u32);
	// stb r10,40(r7)
	PPC_STORE_U8(ctx.r7.u32 + 40, ctx.r10.u8);
	// stw r31,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r31.u32);
	// bl 0x82a28ba8
	ctx.lr = 0x82A28EE8;
	sub_82A28BA8(ctx, base);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addi r8,r8,-16584
	ctx.r8.s64 = ctx.r8.s64 + -16584;
	// addi r7,r7,-8336
	ctx.r7.s64 = ctx.r7.s64 + -8336;
	// li r11,25
	ctx.r11.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r6,r11,2,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rlwimi r5,r11,3,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28F20"))) PPC_WEAK_FUNC(sub_82A28F20);
PPC_FUNC_IMPL(__imp__sub_82A28F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a28f38
	if (!cr6.eq) goto loc_82A28F38;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f1,15796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15796);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A28F38:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f1,15792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15792);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A28F44"))) PPC_WEAK_FUNC(sub_82A28F44);
PPC_FUNC_IMPL(__imp__sub_82A28F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28F48"))) PPC_WEAK_FUNC(sub_82A28F48);
PPC_FUNC_IMPL(__imp__sub_82A28F48) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f31,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x83740868
	ctx.lr = 0x82A28F70;
	sub_83740868(ctx, base);
	// fdivs f12,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f11,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fdivs f1,f13,f8
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A28FB4"))) PPC_WEAK_FUNC(sub_82A28FB4);
PPC_FUNC_IMPL(__imp__sub_82A28FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28FB8"))) PPC_WEAK_FUNC(sub_82A28FB8);
PPC_FUNC_IMPL(__imp__sub_82A28FB8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f31,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83740868
	ctx.lr = 0x82A28FE8;
	sub_83740868(ctx, base);
	// fdivs f12,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f11,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 / ctx.f9.f64));
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fdivs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2903C"))) PPC_WEAK_FUNC(sub_82A2903C);
PPC_FUNC_IMPL(__imp__sub_82A2903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29040"))) PPC_WEAK_FUNC(sub_82A29040);
PPC_FUNC_IMPL(__imp__sub_82A29040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A29048;
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
	// lfs f31,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83740868
	ctx.lr = 0x82A2906C;
	sub_83740868(ctx, base);
	// fdivs f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// lfs f12,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-23844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f6,f31,f8
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f8.f64));
	// fdivs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// fdivs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fmadds f3,f4,f7,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A290C4"))) PPC_WEAK_FUNC(sub_82A290C4);
PPC_FUNC_IMPL(__imp__sub_82A290C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A290C8"))) PPC_WEAK_FUNC(sub_82A290C8);
PPC_FUNC_IMPL(__imp__sub_82A290C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,60
	ctx.r11.s64 = 60;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// divwu r8,r10,r11
	ctx.r8.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lis r9,-30584
	ctx.r9.s64 = -2004353024;
	// divwu r7,r8,r11
	ctx.r7.u32 = PPCDivide(ctx.r8.u32, ctx.r11.u32);
	// ori r6,r9,34953
	ctx.r6.u64 = ctx.r9.u64 | 34953;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mulhwu r3,r4,r6
	ctx.r3.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r3,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2910C"))) PPC_WEAK_FUNC(sub_82A2910C);
PPC_FUNC_IMPL(__imp__sub_82A2910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29110"))) PPC_WEAK_FUNC(sub_82A29110);
PPC_FUNC_IMPL(__imp__sub_82A29110) {
	PPC_FUNC_PROLOGUE();
	// li r11,60
	ctx.r11.s64 = 60;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// divwu r9,r10,r11
	ctx.r9.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// divwu r3,r9,r11
	ctx.r3.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2912C"))) PPC_WEAK_FUNC(sub_82A2912C);
PPC_FUNC_IMPL(__imp__sub_82A2912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29130"))) PPC_WEAK_FUNC(sub_82A29130);
PPC_FUNC_IMPL(__imp__sub_82A29130) {
	PPC_FUNC_PROLOGUE();
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// li r11,60
	ctx.r11.s64 = 60;
	// lis r9,-30584
	ctx.r9.s64 = -2004353024;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// divwu r8,r10,r11
	ctx.r8.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// ori r9,r9,34953
	ctx.r9.u64 = ctx.r9.u64 | 34953;
	// mulhwu r7,r8,r9
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r6,r7,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r5,r6,60
	ctx.r5.s64 = ctx.r6.s64 * 60;
	// subf r3,r5,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r5.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29160"))) PPC_WEAK_FUNC(sub_82A29160);
PPC_FUNC_IMPL(__imp__sub_82A29160) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r3,3600
	ctx.r11.s64 = ctx.r3.s64 * 3600;
	// mulli r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 * 60;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fadds f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29198"))) PPC_WEAK_FUNC(sub_82A29198);
PPC_FUNC_IMPL(__imp__sub_82A29198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f0,15800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,-23868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bne cr6,0x82a291e8
	if (!cr6.eq) goto loc_82A291E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15796);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a291f0
	goto loc_82A291F0;
loc_82A291E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15792);
	ctx.f0.f64 = double(temp.f32);
loc_82A291F0:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29208"))) PPC_WEAK_FUNC(sub_82A29208);
PPC_FUNC_IMPL(__imp__sub_82A29208) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83740858
	ctx.lr = 0x82A29220;
	sub_83740858(ctx, base);
	// mulli r11,r3,360
	ctx.r11.s64 = ctx.r3.s64 * 360;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82a29264
	if (!cr6.gt) goto loc_82A29264;
	// bl 0x83740858
	ctx.lr = 0x82A29248;
	sub_83740858(ctx, base);
	// mulli r11,r3,360
	ctx.r11.s64 = ctx.r3.s64 * 360;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82A29264:
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

__attribute__((alias("__imp__sub_82A29278"))) PPC_WEAK_FUNC(sub_82A29278);
PPC_FUNC_IMPL(__imp__sub_82A29278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a292a0
	if (!cr6.eq) goto loc_82A292A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15796);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lfs f0,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
loc_82A292A0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15792);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lfs f0,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A292B8"))) PPC_WEAK_FUNC(sub_82A292B8);
PPC_FUNC_IMPL(__imp__sub_82A292B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f30,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f29,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83740868
	ctx.lr = 0x82A292E8;
	sub_83740868(ctx, base);
	// fdivs f12,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 / ctx.f1.f64));
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f11,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29340"))) PPC_WEAK_FUNC(sub_82A29340);
PPC_FUNC_IMPL(__imp__sub_82A29340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A29348;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r30,292(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82a29380
	if (cr6.eq) goto loc_82A29380;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82a29384
	if (!cr6.eq) goto loc_82A29384;
loc_82A29380:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A29384:
	// lbz r11,4510(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4510);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a293dc
	if (cr6.eq) goto loc_82A293DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a0c710
	ctx.lr = 0x82A29398;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A293AC;
	sub_82A0C710(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82a47828
	ctx.lr = 0x82A293B8;
	sub_82A47828(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a293d8
	if (!cr6.eq) goto loc_82A293D8;
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// bl 0x82a47828
	ctx.lr = 0x82A293CC;
	sub_82A47828(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a293dc
	if (cr6.eq) goto loc_82A293DC;
loc_82A293D8:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A293DC:
	// lfs f31,4468(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x83740858
	ctx.lr = 0x82A293E4;
	sub_83740858(ctx, base);
	// mulli r11,r3,360
	ctx.r11.s64 = ctx.r3.s64 * 360;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f31,f12
	cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x82a29490
	if (!cr6.lt) goto loc_82A29490;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a29490
	if (!cr6.gt) goto loc_82A29490;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a29430
	if (!cr6.eq) goto loc_82A29430;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15796);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a29438
	goto loc_82A29438;
loc_82A29430:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,15792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15792);
	ctx.f0.f64 = double(temp.f32);
loc_82A29438:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a29490
	if (!cr6.lt) goto loc_82A29490;
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82a29480
	if (cr6.gt) goto loc_82A29480;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a29480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29480;
	// bdzf 4*cr6+eq,0x82a29470
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29470;
	// bdzf 4*cr6+eq,0x82a29480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29480;
	// bdzf 4*cr6+eq,0x82a29470
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29470;
	// bdzf 4*cr6+eq,0x82a29480
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29480;
	// bne cr6,0x82a29470
	if (!cr6.eq) goto loc_82A29470;
loc_82A29470:
	// lbz r11,4496(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4496);
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bne cr6,0x82a29480
	if (!cr6.eq) goto loc_82A29480;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82A29480:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a29490
	if (cr6.eq) goto loc_82A29490;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82A29490:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a29514
	if (cr6.eq) goto loc_82A29514;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a294b0
	if (cr6.eq) goto loc_82A294B0;
loc_82A294A8:
	// li r26,3
	ctx.r26.s64 = 3;
	// b 0x82a29514
	goto loc_82A29514;
loc_82A294B0:
	// lwz r11,5388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5388);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a29510
	if (cr6.eq) goto loc_82A29510;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82a294e4
	if (cr6.eq) goto loc_82A294E4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a29514
	if (!cr6.eq) goto loc_82A29514;
	// lwz r11,5356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5356);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// b 0x82a29514
	goto loc_82A29514;
loc_82A294E4:
	// lwz r11,5356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5356);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a29508
	if (cr6.eq) goto loc_82A29508;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a294a8
	if (cr6.eq) goto loc_82A294A8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a29514
	if (!cr6.eq) goto loc_82A29514;
	// li r26,3
	ctx.r26.s64 = 3;
	// b 0x82a29514
	goto loc_82A29514;
loc_82A29508:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82a29514
	goto loc_82A29514;
loc_82A29510:
	// li r26,4
	ctx.r26.s64 = 4;
loc_82A29514:
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82a29570
	if (cr6.gt) goto loc_82A29570;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a29570
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29570;
	// bdzf 4*cr6+eq,0x82a29564
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29564;
	// bdzf 4*cr6+eq,0x82a29570
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29570;
	// bdzf 4*cr6+eq,0x82a29544
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29544;
	// bdzf 4*cr6+eq,0x82a29570
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A29570;
	// bne cr6,0x82a29544
	if (!cr6.eq) goto loc_82A29544;
loc_82A29544:
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// rlwinm r11,r26,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r26,r11,2,16,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A29564:
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// mulli r10,r11,45
	ctx.r10.s64 = ctx.r11.s64 * 45;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A29570:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29580"))) PPC_WEAK_FUNC(sub_82A29580);
PPC_FUNC_IMPL(__imp__sub_82A29580) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a295a8
	if (cr6.lt) goto loc_82A295A8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a295ac
	if (cr6.lt) goto loc_82A295AC;
loc_82A295A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A295AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a295d0
	if (!cr6.eq) goto loc_82A295D0;
	// li r3,10
	ctx.r3.s64 = 10;
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
loc_82A295D0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a295e0
	if (!cr6.lt) goto loc_82A295E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a29608
	goto loc_82A29608;
loc_82A295E0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a295f0
	if (!cr6.lt) goto loc_82A295F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a29608
	goto loc_82A29608;
loc_82A295F0:
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
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_82A29608:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a29634
	if (cr6.lt) goto loc_82A29634;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82a29634
	if (!cr6.lt) goto loc_82A29634;
	// lis r10,-17874
	ctx.r10.s64 = -1171390464;
	// ori r9,r10,35747
	ctx.r9.u64 = ctx.r10.u64 | 35747;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r7,11
	ctx.r6.s64 = ctx.r7.s64 * 11;
	// subf r31,r6,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x82a29638
	goto loc_82A29638;
loc_82A29634:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A29638:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A29644;
	sub_82A0C710(ctx, base);
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82a29670
	if (!cr6.lt) goto loc_82A29670;
	// addi r10,r31,3826
	ctx.r10.s64 = ctx.r31.s64 + 3826;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
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
loc_82A29670:
	// lwz r3,15304(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
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

__attribute__((alias("__imp__sub_82A29688"))) PPC_WEAK_FUNC(sub_82A29688);
PPC_FUNC_IMPL(__imp__sub_82A29688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A29690;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a296a8
	if (!cr6.lt) goto loc_82A296A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a296d0
	goto loc_82A296D0;
loc_82A296A8:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a296b8
	if (!cr6.lt) goto loc_82A296B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a296d0
	goto loc_82A296D0;
loc_82A296B8:
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
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_82A296D0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a296fc
	if (cr6.lt) goto loc_82A296FC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x82a296fc
	if (!cr6.lt) goto loc_82A296FC;
	// lis r10,-17874
	ctx.r10.s64 = -1171390464;
	// ori r9,r10,35747
	ctx.r9.u64 = ctx.r10.u64 | 35747;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r7,11
	ctx.r6.s64 = ctx.r7.s64 * 11;
	// subf r30,r6,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x82a29700
	goto loc_82A29700;
loc_82A296FC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A29700:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A2970C;
	sub_82A0C710(ctx, base);
	// addi r31,r3,3612
	ctx.r31.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a29728
	if (!cr6.lt) goto loc_82A29728;
	// addi r11,r30,3826
	ctx.r11.s64 = ctx.r30.s64 + 3826;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x82a2972c
	goto loc_82A2972C;
loc_82A29728:
	// lwz r29,15304(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15304);
loc_82A2972C:
	// addi r11,r30,1166
	ctx.r11.s64 = ctx.r30.s64 + 1166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82a13c08
	ctx.lr = 0x82A29760;
	sub_82A13C08(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a29790
	if (cr6.eq) goto loc_82A29790;
	// lbz r11,30104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a29790
	if (!cr6.eq) goto loc_82A29790;
	// lwz r11,30092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30092);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a297dc
	if (cr6.eq) goto loc_82A297DC;
	// lwz r10,30096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30096);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a297e0
	if (cr6.eq) goto loc_82A297E0;
loc_82A29790:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_82A29794:
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(ctx.r29.u32, 9, xer);
	// bgt cr6,0x82a298c4
	if (cr6.gt) goto loc_82A298C4;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26700
	ctx.r12.s64 = ctx.r12.s64 + -26700;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_82A297F8;
	case 1:
		goto loc_82A29804;
	case 2:
		goto loc_82A29810;
	case 3:
		goto loc_82A29838;
	case 4:
		goto loc_82A29844;
	case 5:
		goto loc_82A29850;
	case 6:
		goto loc_82A29878;
	case 7:
		goto loc_82A29884;
	case 8:
		goto loc_82A29890;
	case 9:
		goto loc_82A298B8;
	default:
		return;
	}
	// lwz r21,-26632(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26632);
	// lwz r21,-26620(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26620);
	// lwz r21,-26608(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26608);
	// lwz r21,-26568(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26568);
	// lwz r21,-26556(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26556);
	// lwz r21,-26544(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26544);
	// lwz r21,-26504(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26504);
	// lwz r21,-26492(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26492);
	// lwz r21,-26480(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26480);
	// lwz r21,-26440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -26440);
loc_82A297DC:
	// lwz r11,30096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30096);
loc_82A297E0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,14000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14000);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a29794
	goto loc_82A29794;
loc_82A297F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29804:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29810:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a2982c
	if (!cr6.gt) goto loc_82A2982C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2982C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29838:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29844:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29850:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a2986c
	if (!cr6.gt) goto loc_82A2986C;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2986C:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29878:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29884:
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29890:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a298ac
	if (!cr6.gt) goto loc_82A298AC;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A298AC:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A298B8:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A298C4:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A298D0"))) PPC_WEAK_FUNC(sub_82A298D0);
PPC_FUNC_IMPL(__imp__sub_82A298D0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a298fc
	if (!cr6.lt) goto loc_82A298FC;
loc_82A298F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a2991c
	goto loc_82A2991C;
loc_82A298FC:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a298f4
	if (cr6.lt) goto loc_82A298F4;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A2991C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A29928;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16608
	ctx.lr = 0x82A29930;
	sub_82A16608(ctx, base);
	// lbzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A2994C"))) PPC_WEAK_FUNC(sub_82A2994C);
PPC_FUNC_IMPL(__imp__sub_82A2994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29950"))) PPC_WEAK_FUNC(sub_82A29950);
PPC_FUNC_IMPL(__imp__sub_82A29950) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8355a178
	ctx.lr = 0x82A29968;
	sub_8355A178(ctx, base);
	// lbzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A29980"))) PPC_WEAK_FUNC(sub_82A29980);
PPC_FUNC_IMPL(__imp__sub_82A29980) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x82A299A0;
	sub_82A0C7B0(ctx, base);
	// bl 0x8355a178
	ctx.lr = 0x82A299A4;
	sub_8355A178(ctx, base);
	// lbzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A299BC"))) PPC_WEAK_FUNC(sub_82A299BC);
PPC_FUNC_IMPL(__imp__sub_82A299BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A299C0"))) PPC_WEAK_FUNC(sub_82A299C0);
PPC_FUNC_IMPL(__imp__sub_82A299C0) {
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
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x82A299E8;
	sub_82A0C7B0(ctx, base);
	// bl 0x8355a178
	ctx.lr = 0x82A299EC;
	sub_8355A178(ctx, base);
	// lbzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A29A04"))) PPC_WEAK_FUNC(sub_82A29A04);
PPC_FUNC_IMPL(__imp__sub_82A29A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29A08"))) PPC_WEAK_FUNC(sub_82A29A08);
PPC_FUNC_IMPL(__imp__sub_82A29A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a16608
	ctx.lr = 0x82A29A28;
	sub_82A16608(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// slw r9,r11,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82A29A54"))) PPC_WEAK_FUNC(sub_82A29A54);
PPC_FUNC_IMPL(__imp__sub_82A29A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29A58"))) PPC_WEAK_FUNC(sub_82A29A58);
PPC_FUNC_IMPL(__imp__sub_82A29A58) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a29aa0
	if (cr6.lt) goto loc_82A29AA0;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82a29aa0
	if (!cr6.lt) goto loc_82A29AA0;
	// lis r10,-17874
	ctx.r10.s64 = -1171390464;
	// ori r9,r10,35747
	ctx.r9.u64 = ctx.r10.u64 | 35747;
	// mulhwu r8,r3,r9
	ctx.r8.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r4,r7,11
	ctx.r4.s64 = ctx.r7.s64 * 11;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
	// b 0x82a29aa4
	goto loc_82A29AA4;
loc_82A29AA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A29AA4:
	// addi r11,r6,3612
	ctx.r11.s64 = ctx.r6.s64 + 3612;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bge cr6,0x82a29ac0
	if (!cr6.lt) goto loc_82A29AC0;
	// addi r10,r4,3826
	ctx.r10.s64 = ctx.r4.s64 + 3826;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82a29ac4
	goto loc_82A29AC4;
loc_82A29AC0:
	// lwz r31,15304(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82A29AC4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a165c8
	ctx.lr = 0x82A29ACC;
	sub_82A165C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8291b910
	ctx.lr = 0x82A29AD8;
	sub_8291B910(ctx, base);
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

__attribute__((alias("__imp__sub_82A29AF0"))) PPC_WEAK_FUNC(sub_82A29AF0);
PPC_FUNC_IMPL(__imp__sub_82A29AF0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r6,3612
	ctx.r10.s64 = ctx.r6.s64 + 3612;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bge cr6,0x82a29b28
	if (!cr6.lt) goto loc_82A29B28;
	// addi r9,r3,3826
	ctx.r9.s64 = ctx.r3.s64 + 3826;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r8,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// b 0x82a29b2c
	goto loc_82A29B2C;
loc_82A29B28:
	// lwz r31,15304(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15304);
loc_82A29B2C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a165c8
	ctx.lr = 0x82A29B38;
	sub_82A165C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8291b910
	ctx.lr = 0x82A29B44;
	sub_8291B910(ctx, base);
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

__attribute__((alias("__imp__sub_82A29B5C"))) PPC_WEAK_FUNC(sub_82A29B5C);
PPC_FUNC_IMPL(__imp__sub_82A29B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29B60"))) PPC_WEAK_FUNC(sub_82A29B60);
PPC_FUNC_IMPL(__imp__sub_82A29B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a29bf0
	if (cr6.eq) goto loc_82A29BF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 * 11;
	// li r9,15304
	ctx.r9.s64 = 15304;
loc_82A29B78:
	// add. r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a29b8c
	if (cr0.lt) goto loc_82A29B8C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a29b90
	if (cr6.lt) goto loc_82A29B90;
loc_82A29B8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A29B90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a29bb0
	if (cr6.eq) goto loc_82A29BB0;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfe r11,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a29bb4
	goto loc_82A29BB4;
loc_82A29BB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A29BB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a29be0
	if (cr6.eq) goto loc_82A29BE0;
	// addi r11,r5,3612
	ctx.r11.s64 = ctx.r5.s64 + 3612;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// bge cr6,0x82a29bd4
	if (!cr6.lt) goto loc_82A29BD4;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82a29bd8
	goto loc_82A29BD8;
loc_82A29BD4:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82A29BD8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82A29BE0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r9,15348
	cr6.compare<int32_t>(ctx.r9.s32, 15348, xer);
	// blt cr6,0x82a29b78
	if (cr6.lt) goto loc_82A29B78;
loc_82A29BF0:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29BF8"))) PPC_WEAK_FUNC(sub_82A29BF8);
PPC_FUNC_IMPL(__imp__sub_82A29BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a29c08
	if (!cr6.eq) goto loc_82A29C08;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82A29C08:
	// b 0x82a16440
	sub_82A16440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29C0C"))) PPC_WEAK_FUNC(sub_82A29C0C);
PPC_FUNC_IMPL(__imp__sub_82A29C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29C10"))) PPC_WEAK_FUNC(sub_82A29C10);
PPC_FUNC_IMPL(__imp__sub_82A29C10) {
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
	// beq cr6,0x82a29c60
	if (cr6.eq) goto loc_82A29C60;
	// bl 0x82a16440
	ctx.lr = 0x82A29C28;
	sub_82A16440(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a29c60
	if (cr6.lt) goto loc_82A29C60;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82a29c60
	if (!cr6.lt) goto loc_82A29C60;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A29C60:
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

__attribute__((alias("__imp__sub_82A29C74"))) PPC_WEAK_FUNC(sub_82A29C74);
PPC_FUNC_IMPL(__imp__sub_82A29C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29C78"))) PPC_WEAK_FUNC(sub_82A29C78);
PPC_FUNC_IMPL(__imp__sub_82A29C78) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a29d00
	if (cr6.eq) goto loc_82A29D00;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a29ca8
	if (!cr6.lt) goto loc_82A29CA8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a29cd0
	goto loc_82A29CD0;
loc_82A29CA8:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a29cb8
	if (!cr6.lt) goto loc_82A29CB8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a29cd0
	goto loc_82A29CD0;
loc_82A29CB8:
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
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
loc_82A29CD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a161a8
	ctx.lr = 0x82A29CD8;
	sub_82A161A8(ctx, base);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82a29d00
	if (!cr6.lt) goto loc_82A29D00;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x82a29d00
	if (!cr6.lt) goto loc_82A29D00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bne cr6,0x82a29d00
	if (!cr6.eq) goto loc_82A29D00;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x82a29d10
	goto loc_82A29D10;
loc_82A29D00:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82A29D10:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82A29D2C"))) PPC_WEAK_FUNC(sub_82A29D2C);
PPC_FUNC_IMPL(__imp__sub_82A29D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29D30"))) PPC_WEAK_FUNC(sub_82A29D30);
PPC_FUNC_IMPL(__imp__sub_82A29D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A29D38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r27,r4,11
	ctx.r27.s64 = ctx.r4.s64 * 11;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
loc_82A29D4C:
	// add. r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x82a29d60
	if (cr0.lt) goto loc_82A29D60;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a29d64
	if (cr6.lt) goto loc_82A29D64;
loc_82A29D60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A29D64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a29d9c
	if (cr6.eq) goto loc_82A29D9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x82A29D7C;
	sub_82A0C7B0(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a29d9c
	if (cr6.eq) goto loc_82A29D9C;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x82a29db4
	if (cr6.eq) goto loc_82A29DB4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// beq cr6,0x82a29db4
	if (cr6.eq) goto loc_82A29DB4;
loc_82A29D9C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82a29d4c
	if (cr6.lt) goto loc_82A29D4C;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A29DB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29DC0"))) PPC_WEAK_FUNC(sub_82A29DC0);
PPC_FUNC_IMPL(__imp__sub_82A29DC0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// blt cr6,0x82a29df4
	if (cr6.lt) goto loc_82A29DF4;
loc_82A29DDC:
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
loc_82A29DF4:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a29ddc
	if (!cr6.lt) goto loc_82A29DDC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A29E08;
	sub_82A0C710(ctx, base);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x82917c10
	ctx.lr = 0x82A29E1C;
	sub_82917C10(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82A29E34"))) PPC_WEAK_FUNC(sub_82A29E34);
PPC_FUNC_IMPL(__imp__sub_82A29E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29E38"))) PPC_WEAK_FUNC(sub_82A29E38);
PPC_FUNC_IMPL(__imp__sub_82A29E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r3,3612
	ctx.r10.s64 = ctx.r3.s64 + 3612;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,29696
	ctx.r11.s64 = ctx.r10.s64 + 29696;
	// lbz r9,29600(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29600);
loc_82A29E48:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82a29e70
	if (!cr6.eq) goto loc_82A29E70;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82A29E70:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x82a29e48
	if (cr6.lt) goto loc_82A29E48;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29E88"))) PPC_WEAK_FUNC(sub_82A29E88);
PPC_FUNC_IMPL(__imp__sub_82A29E88) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// blt cr6,0x82a29eb4
	if (cr6.lt) goto loc_82A29EB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a29f04
	goto loc_82A29F04;
loc_82A29EB4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a29ec4
	if (!cr6.lt) goto loc_82A29EC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a29ed8
	goto loc_82A29ED8;
loc_82A29EC4:
	// li r11,11
	ctx.r11.s64 = 11;
	// srawi r10,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// adde r4,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A29ED8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A29EE4;
	sub_82A0C710(ctx, base);
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// bl 0x825832e0
	ctx.lr = 0x82A29EF4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8291a540
	ctx.lr = 0x82A29F04;
	sub_8291A540(ctx, base);
loc_82A29F04:
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

__attribute__((alias("__imp__sub_82A29F1C"))) PPC_WEAK_FUNC(sub_82A29F1C);
PPC_FUNC_IMPL(__imp__sub_82A29F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29F20"))) PPC_WEAK_FUNC(sub_82A29F20);
PPC_FUNC_IMPL(__imp__sub_82A29F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a29f38
	if (cr6.eq) goto loc_82A29F38;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A29F38:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29F40"))) PPC_WEAK_FUNC(sub_82A29F40);
PPC_FUNC_IMPL(__imp__sub_82A29F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a29f54
	if (cr6.eq) goto loc_82A29F54;
loc_82A29F4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A29F54:
	// lwz r11,5388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5388);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a29f4c
	if (!cr6.eq) goto loc_82A29F4C;
	// lwz r11,5408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5408);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a29f4c
	if (!cr6.eq) goto loc_82A29F4C;
	// lbz r11,5437(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5437);
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

__attribute__((alias("__imp__sub_82A29F7C"))) PPC_WEAK_FUNC(sub_82A29F7C);
PPC_FUNC_IMPL(__imp__sub_82A29F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29F80"))) PPC_WEAK_FUNC(sub_82A29F80);
PPC_FUNC_IMPL(__imp__sub_82A29F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x82a29fa0
	if (cr6.lt) goto loc_82A29FA0;
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82A29FA0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A29FAC"))) PPC_WEAK_FUNC(sub_82A29FAC);
PPC_FUNC_IMPL(__imp__sub_82A29FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29FB0"))) PPC_WEAK_FUNC(sub_82A29FB0);
PPC_FUNC_IMPL(__imp__sub_82A29FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A29FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a29fd8
	if (cr6.lt) goto loc_82A29FD8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a29fdc
	if (cr6.lt) goto loc_82A29FDC;
loc_82A29FD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A29FDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a29ff4
	if (!cr6.eq) goto loc_82A29FF4;
loc_82A29FE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A29FF4:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r29,2056(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a2a028
	if (cr6.eq) goto loc_82A2A028;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A2A018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a2a02c
	if (!cr6.eq) goto loc_82A2A02C;
loc_82A2A028:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2A02C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82a2a09c
	if (cr6.eq) goto loc_82A2A09C;
	// bl 0x825ca6b8
	ctx.lr = 0x82A2A044;
	sub_825CA6B8(ctx, base);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// beq cr6,0x82a29fe8
	if (cr6.eq) goto loc_82A29FE8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x82a2a058
	if (cr6.lt) goto loc_82A2A058;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2A058:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a29fe8
	if (cr6.eq) goto loc_82A29FE8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,76(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A2A084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2A09C:
	// bl 0x825ca6b8
	ctx.lr = 0x82A2A0A0;
	sub_825CA6B8(ctx, base);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A0B4"))) PPC_WEAK_FUNC(sub_82A2A0B4);
PPC_FUNC_IMPL(__imp__sub_82A2A0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A0B8"))) PPC_WEAK_FUNC(sub_82A2A0B8);
PPC_FUNC_IMPL(__imp__sub_82A2A0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a2a0fc
	if (cr6.eq) goto loc_82A2A0FC;
	// bdz 0x82a2a124
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A124;
	// bdz 0x82a2a0e4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A0E4;
	// bdz 0x82a2a13c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A13C;
	// b 0x82a2a15c
	goto loc_82A2A15C;
loc_82A2A0E4:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82a2a17c
	if (cr6.eq) goto loc_82A2A17C;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A2A0FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a2a164
	if (cr6.eq) goto loc_82A2A164;
loc_82A2A104:
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// beq cr6,0x82a2a11c
	if (cr6.eq) goto loc_82A2A11C;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82a2a11c
	if (cr6.eq) goto loc_82A2A11C;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A2A11C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A2A124:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2a144
	if (!cr6.eq) goto loc_82A2A144;
loc_82A2A12C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82a2a17c
	if (cr6.eq) goto loc_82A2A17C;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// b 0x82a2a178
	goto loc_82A2A178;
loc_82A2A13C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2a12c
	if (!cr6.eq) goto loc_82A2A12C;
loc_82A2A144:
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// beq cr6,0x82a2a154
	if (cr6.eq) goto loc_82A2A154;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A2A154:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82A2A15C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a2a104
	if (cr6.eq) goto loc_82A2A104;
loc_82A2A164:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82a2a17c
	if (cr6.eq) goto loc_82A2A17C;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82a2a17c
	if (cr6.eq) goto loc_82A2A17C;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
loc_82A2A178:
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A2A17C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2A184"))) PPC_WEAK_FUNC(sub_82A2A184);
PPC_FUNC_IMPL(__imp__sub_82A2A184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A188"))) PPC_WEAK_FUNC(sub_82A2A188);
PPC_FUNC_IMPL(__imp__sub_82A2A188) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82A2A1AC;
	sub_83747068(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// lfs f12,-28496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28496);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// bgt cr6,0x82a2a23c
	if (cr6.gt) goto loc_82A2A23C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a2a1f4
	if (cr6.eq) goto loc_82A2A1F4;
	// bdz 0x82a2a1fc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A1FC;
	// bdz 0x82a2a23c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A23C;
	// bdz 0x82a2a23c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A23C;
	// bdz 0x82a2a1ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A1EC;
	// bdz 0x82a2a23c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A23C;
	// bdz 0x82a2a204
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2A204;
	// b 0x82a2a20c
	goto loc_82A2A20C;
loc_82A2A1EC:
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a2a210
	goto loc_82A2A210;
loc_82A2A1F4:
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a2a210
	goto loc_82A2A210;
loc_82A2A1FC:
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a2a210
	goto loc_82A2A210;
loc_82A2A204:
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a2a210
	goto loc_82A2A210;
loc_82A2A20C:
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
loc_82A2A210:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a2a23c
	if (cr6.gt) goto loc_82A2A23C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
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
loc_82A2A23C:
	// fdivs f1,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
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

__attribute__((alias("__imp__sub_82A2A254"))) PPC_WEAK_FUNC(sub_82A2A254);
PPC_FUNC_IMPL(__imp__sub_82A2A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A258"))) PPC_WEAK_FUNC(sub_82A2A258);
PPC_FUNC_IMPL(__imp__sub_82A2A258) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2a280
	if (cr6.lt) goto loc_82A2A280;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2a284
	if (cr6.lt) goto loc_82A2A284;
loc_82A2A280:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2A284:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2a2a8
	if (!cr6.eq) goto loc_82A2A2A8;
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
loc_82A2A2A8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a2a2b8
	if (!cr6.lt) goto loc_82A2A2B8;
loc_82A2A2B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a2a2d8
	goto loc_82A2A2D8;
loc_82A2A2B8:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a2a2b0
	if (cr6.lt) goto loc_82A2A2B0;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A2A2D8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2A2E4;
	sub_82A0C738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a169d8
	ctx.lr = 0x82A2A2F4;
	sub_82A169D8(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_82A2A30C"))) PPC_WEAK_FUNC(sub_82A2A30C);
PPC_FUNC_IMPL(__imp__sub_82A2A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A310"))) PPC_WEAK_FUNC(sub_82A2A310);
PPC_FUNC_IMPL(__imp__sub_82A2A310) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,292(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x82A2A338;
	sub_82A0C710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29b60
	ctx.lr = 0x82A2A348;
	sub_82A29B60(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2a35c
	if (cr6.eq) goto loc_82A2A35C;
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82a2a360
	goto loc_82A2A360;
loc_82A2A35C:
	// li r3,255
	ctx.r3.s64 = 255;
loc_82A2A360:
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

__attribute__((alias("__imp__sub_82A2A378"))) PPC_WEAK_FUNC(sub_82A2A378);
PPC_FUNC_IMPL(__imp__sub_82A2A378) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2a3ec
	if (cr6.eq) goto loc_82A2A3EC;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a2a3bc
	if (cr6.lt) goto loc_82A2A3BC;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82a2a3bc
	if (!cr6.lt) goto loc_82A2A3BC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2a3bc
	if (cr6.lt) goto loc_82A2A3BC;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2a3c0
	if (cr6.lt) goto loc_82A2A3C0;
loc_82A2A3BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2A3C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2a3ec
	if (cr6.eq) goto loc_82A2A3EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a2a3ec
	if (!cr6.eq) goto loc_82A2A3EC;
	// bl 0x82a16440
	ctx.lr = 0x82A2A3DC;
	sub_82A16440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A2A3EC:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2A400"))) PPC_WEAK_FUNC(sub_82A2A400);
PPC_FUNC_IMPL(__imp__sub_82A2A400) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x82a2a434
	if (cr6.lt) goto loc_82A2A434;
loc_82A2A41C:
	// li r3,255
	ctx.r3.s64 = 255;
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
loc_82A2A434:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2A440;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2a41c
	if (cr6.eq) goto loc_82A2A41C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16440
	ctx.lr = 0x82A2A450;
	sub_82A16440(ctx, base);
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

__attribute__((alias("__imp__sub_82A2A464"))) PPC_WEAK_FUNC(sub_82A2A464);
PPC_FUNC_IMPL(__imp__sub_82A2A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A468"))) PPC_WEAK_FUNC(sub_82A2A468);
PPC_FUNC_IMPL(__imp__sub_82A2A468) {
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
	// bl 0x82a2a378
	ctx.lr = 0x82A2A478;
	sub_82A2A378(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a2a4b0
	if (cr6.lt) goto loc_82A2A4B0;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82a2a4b0
	if (!cr6.lt) goto loc_82A2A4B0;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A2A4B0:
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

__attribute__((alias("__imp__sub_82A2A4C4"))) PPC_WEAK_FUNC(sub_82A2A4C4);
PPC_FUNC_IMPL(__imp__sub_82A2A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A4C8"))) PPC_WEAK_FUNC(sub_82A2A4C8);
PPC_FUNC_IMPL(__imp__sub_82A2A4C8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a2a53c
	if (!cr6.lt) goto loc_82A2A53C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2A4F0;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2a53c
	if (cr6.eq) goto loc_82A2A53C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16440
	ctx.lr = 0x82A2A500;
	sub_82A16440(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a2a53c
	if (cr6.lt) goto loc_82A2A53C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82a2a53c
	if (!cr6.lt) goto loc_82A2A53C;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
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
loc_82A2A53C:
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

__attribute__((alias("__imp__sub_82A2A554"))) PPC_WEAK_FUNC(sub_82A2A554);
PPC_FUNC_IMPL(__imp__sub_82A2A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A558"))) PPC_WEAK_FUNC(sub_82A2A558);
PPC_FUNC_IMPL(__imp__sub_82A2A558) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2a580
	if (cr6.lt) goto loc_82A2A580;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2a584
	if (cr6.lt) goto loc_82A2A584;
loc_82A2A580:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2A584:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2a5b8
	if (!cr6.eq) goto loc_82A2A5B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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
loc_82A2A5B8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a2a5c8
	if (!cr6.lt) goto loc_82A2A5C8;
loc_82A2A5C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a2a5e8
	goto loc_82A2A5E8;
loc_82A2A5C8:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a2a5c0
	if (cr6.lt) goto loc_82A2A5C0;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A2A5E8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2A5F4;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a29c78
	ctx.lr = 0x82A2A5FC;
	sub_82A29C78(ctx, base);
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

__attribute__((alias("__imp__sub_82A2A610"))) PPC_WEAK_FUNC(sub_82A2A610);
PPC_FUNC_IMPL(__imp__sub_82A2A610) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A61C"))) PPC_WEAK_FUNC(sub_82A2A61C);
PPC_FUNC_IMPL(__imp__sub_82A2A61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A620"))) PPC_WEAK_FUNC(sub_82A2A620);
PPC_FUNC_IMPL(__imp__sub_82A2A620) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2a648
	if (cr6.lt) goto loc_82A2A648;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2a64c
	if (cr6.lt) goto loc_82A2A64C;
loc_82A2A648:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2A64C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2a670
	if (!cr6.eq) goto loc_82A2A670;
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
loc_82A2A670:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a2a680
	if (!cr6.lt) goto loc_82A2A680;
loc_82A2A678:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a2a6a0
	goto loc_82A2A6A0;
loc_82A2A680:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a2a678
	if (cr6.lt) goto loc_82A2A678;
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A2A6A0:
	// bl 0x82a2a310
	ctx.lr = 0x82A2A6A4;
	sub_82A2A310(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82A2A6C4"))) PPC_WEAK_FUNC(sub_82A2A6C4);
PPC_FUNC_IMPL(__imp__sub_82A2A6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A6C8"))) PPC_WEAK_FUNC(sub_82A2A6C8);
PPC_FUNC_IMPL(__imp__sub_82A2A6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,14
	cr6.compare<int32_t>(ctx.r5.s32, 14, xer);
	// blt cr6,0x82a2a6d8
	if (cr6.lt) goto loc_82A2A6D8;
loc_82A2A6D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A2A6D8:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a2a6d0
	if (!cr6.lt) goto loc_82A2A6D0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,27152
	ctx.r3.s64 = ctx.r3.s64 + 27152;
	// b 0x82600f48
	sub_82600F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A6F0"))) PPC_WEAK_FUNC(sub_82A2A6F0);
PPC_FUNC_IMPL(__imp__sub_82A2A6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2A6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a2a714
	if (!cr6.lt) goto loc_82A2A714;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a2a73c
	goto loc_82A2A73C;
loc_82A2A714:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a2a724
	if (!cr6.lt) goto loc_82A2A724;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a2a73c
	goto loc_82A2A73C;
loc_82A2A724:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
loc_82A2A73C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,3
	ctx.r5.s64 = 3;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,27152
	ctx.r3.s64 = ctx.r3.s64 + 27152;
	// bl 0x82600f48
	ctx.lr = 0x82A2A758;
	sub_82600F48(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a2a8e8
	if (cr6.eq) goto loc_82A2A8E8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a2a790
	if (cr6.lt) goto loc_82A2A790;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// bge cr6,0x82a2a790
	if (!cr6.lt) goto loc_82A2A790;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r31,r10
	ctx.r9.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// b 0x82a2a794
	goto loc_82A2A794;
loc_82A2A790:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A2A794:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A2A7A4;
	sub_82A0C710(ctx, base);
	// addi r7,r3,3612
	ctx.r7.s64 = ctx.r3.s64 + 3612;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,29692(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29692);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x82a2a8e8
	if (!cr6.eq) goto loc_82A2A8E8;
	// addi r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 + 3712;
	// lbz r10,29600(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 29600);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lbzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// blt cr6,0x82a2a8e8
	if (cr6.lt) goto loc_82A2A8E8;
	// beq cr6,0x82a2a8e4
	if (cr6.eq) goto loc_82A2A8E4;
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82a2a8d4
	if (!cr0.eq) goto loc_82A2A8D4;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82a2a80c
	if (cr6.eq) goto loc_82A2A80C;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a2a8e8
	if (!cr6.eq) goto loc_82A2A8E8;
loc_82A2A80C:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r7,29696
	ctx.r10.s64 = ctx.r7.s64 + 29696;
loc_82A2A814:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82a2a840
	if (!cr6.eq) goto loc_82A2A840;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82a2a840
	if (cr6.eq) goto loc_82A2A840;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x82a2a85c
	if (cr6.eq) goto loc_82A2A85C;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x82a2a85c
	if (cr6.eq) goto loc_82A2A85C;
loc_82A2A840:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// blt cr6,0x82a2a814
	if (cr6.lt) goto loc_82A2A814;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2A85C:
	// addi r11,r31,1166
	ctx.r11.s64 = ctx.r31.s64 + 1166;
	// addi r10,r9,1166
	ctx.r10.s64 = ctx.r9.s64 + 1166;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r3,r10,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// blt cr6,0x82a2a8e4
	if (cr6.lt) goto loc_82A2A8E4;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a2a8e8
	if (!cr6.eq) goto loc_82A2A8E8;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// b 0x82a2a8e0
	goto loc_82A2A8E0;
loc_82A2A8D4:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
loc_82A2A8E0:
	// bne cr6,0x82a2a8e8
	if (!cr6.eq) goto loc_82A2A8E8;
loc_82A2A8E4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A2A8E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A8F4"))) PPC_WEAK_FUNC(sub_82A2A8F4);
PPC_FUNC_IMPL(__imp__sub_82A2A8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A8F8"))) PPC_WEAK_FUNC(sub_82A2A8F8);
PPC_FUNC_IMPL(__imp__sub_82A2A8F8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A2A910;
	sub_82A0C710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// addi r10,r10,-26424
	ctx.r10.s64 = ctx.r10.s64 + -26424;
	// bge cr6,0x82a2a930
	if (!cr6.lt) goto loc_82A2A930;
loc_82A2A924:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,61
	cr6.compare<int32_t>(ctx.r9.s32, 61, xer);
	// beq cr6,0x82a2a954
	if (cr6.eq) goto loc_82A2A954;
loc_82A2A930:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x82a2a924
	if (cr6.lt) goto loc_82A2A924;
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
loc_82A2A954:
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

__attribute__((alias("__imp__sub_82A2A968"))) PPC_WEAK_FUNC(sub_82A2A968);
PPC_FUNC_IMPL(__imp__sub_82A2A968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A2A970;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r25,292(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x82A2A994;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c738
	ctx.lr = 0x82A2A9A8;
	sub_82A0C738(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r29,255
	ctx.r29.s64 = 255;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r22,r31,11
	ctx.r22.s64 = ctx.r31.s64 * 11;
	// li r26,15304
	ctx.r26.s64 = 15304;
loc_82A2A9C0:
	// add. r10,r22,r30
	ctx.r10.u64 = ctx.r22.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a2a9d4
	if (cr0.lt) goto loc_82A2A9D4;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2a9d8
	if (cr6.lt) goto loc_82A2A9D8;
loc_82A2A9D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2A9D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a2a9f8
	if (cr6.lt) goto loc_82A2A9F8;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2a9fc
	if (cr6.lt) goto loc_82A2A9FC;
loc_82A2A9F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2A9FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2aa1c
	if (cr6.eq) goto loc_82A2AA1C;
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a2aa20
	goto loc_82A2AA20;
loc_82A2AA1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2AA20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
	// cmpw cr6,r21,r30
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a16490
	ctx.lr = 0x82A2AA40;
	sub_82A16490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x82A2AA48;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
	// addi r11,r24,3612
	ctx.r11.s64 = ctx.r24.s64 + 3612;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a2aa68
	if (!cr6.lt) goto loc_82A2AA68;
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// b 0x82a2aa6c
	goto loc_82A2AA6C;
loc_82A2AA68:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82A2AA6C:
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// beq cr6,0x82a2aa7c
	if (cr6.eq) goto loc_82A2AA7C;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// bne cr6,0x82a2aa8c
	if (!cr6.eq) goto loc_82A2AA8C;
loc_82A2AA7C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
loc_82A2AA8C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2aaac
	if (!cr6.eq) goto loc_82A2AAAC;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, xer);
	// beq cr6,0x82a2aad8
	if (cr6.eq) goto loc_82A2AAD8;
loc_82A2AAAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83530640
	ctx.lr = 0x82A2AAB4;
	sub_83530640(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8291a4e8
	ctx.lr = 0x82A2AABC;
	sub_8291A4E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r29,255
	cr6.compare<int32_t>(ctx.r29.s32, 255, xer);
	// beq cr6,0x82a2aad0
	if (cr6.eq) goto loc_82A2AAD0;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a2aad8
	if (!cr6.lt) goto loc_82A2AAD8;
loc_82A2AAD0:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82A2AAD8:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r26,15348
	cr6.compare<int32_t>(ctx.r26.s32, 15348, xer);
	// blt cr6,0x82a2a9c0
	if (cr6.lt) goto loc_82A2A9C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AAF4"))) PPC_WEAK_FUNC(sub_82A2AAF4);
PPC_FUNC_IMPL(__imp__sub_82A2AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2AAF8"))) PPC_WEAK_FUNC(sub_82A2AAF8);
PPC_FUNC_IMPL(__imp__sub_82A2AAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A2AB00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2ab3c
	if (cr6.lt) goto loc_82A2AB3C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// bge cr6,0x82a2ab3c
	if (!cr6.lt) goto loc_82A2AB3C;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r4,r10
	ctx.r9.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r30,r7,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r7.s64;
	// b 0x82a2ab40
	goto loc_82A2AB40;
loc_82A2AB3C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82A2AB40:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x82a2ab50
	if (!cr6.lt) goto loc_82A2AB50;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82a2ab78
	goto loc_82A2AB78;
loc_82A2AB50:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x82a2ab60
	if (!cr6.lt) goto loc_82A2AB60;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82a2ab78
	goto loc_82A2AB78;
loc_82A2AB60:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r28
	xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// eqv r9,r11,r28
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r28.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
loc_82A2AB78:
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2AB88;
	sub_82A0C738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a16490
	ctx.lr = 0x82A2AB90;
	sub_82A16490(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x82A2AB94;
	sub_83530640(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A2ABA8;
	sub_82A0C710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,-30988
	ctx.r3.s64 = ctx.r3.s64 + -30988;
	// lbz r10,253(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 253);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82917550
	ctx.lr = 0x82A2ABD4;
	sub_82917550(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x82a2ac90
	if (cr6.gt) goto loc_82A2AC90;
	// lis r12,-32093
	ctx.r12.s64 = -2103246848;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21516
	ctx.r12.s64 = ctx.r12.s64 + -21516;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82A2AC28;
	case 1:
		goto loc_82A2AC30;
	case 2:
		goto loc_82A2AC38;
	case 3:
		goto loc_82A2AC40;
	case 4:
		goto loc_82A2AC48;
	case 5:
		goto loc_82A2AC50;
	case 6:
		goto loc_82A2AC58;
	case 7:
		goto loc_82A2AC60;
	case 8:
		goto loc_82A2AC68;
	case 9:
		goto loc_82A2AC70;
	case 10:
		goto loc_82A2AC78;
	case 11:
		goto loc_82A2AC80;
	case 12:
		goto loc_82A2AC88;
	default:
		return;
	}
	// lwz r21,-21464(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21464);
	// lwz r21,-21456(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21456);
	// lwz r21,-21448(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21448);
	// lwz r21,-21440(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21440);
	// lwz r21,-21432(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21432);
	// lwz r21,-21424(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21424);
	// lwz r21,-21416(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21416);
	// lwz r21,-21408(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21408);
	// lwz r21,-21400(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21400);
	// lwz r21,-21392(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21392);
	// lwz r21,-21384(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21384);
	// lwz r21,-21376(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21376);
	// lwz r21,-21368(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + -21368);
loc_82A2AC28:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x82a2ac90
	goto loc_82A2AC90;
loc_82A2AC30:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC38:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC40:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC48:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC50:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC58:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC60:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC68:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC70:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC78:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC80:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82a2ac8c
	goto loc_82A2AC8C;
loc_82A2AC88:
	// li r11,12
	ctx.r11.s64 = 12;
loc_82A2AC8C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82A2AC90:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a29e88
	ctx.lr = 0x82A2ACA4;
	sub_82A29E88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2ACAC"))) PPC_WEAK_FUNC(sub_82A2ACAC);
PPC_FUNC_IMPL(__imp__sub_82A2ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2ACB0"))) PPC_WEAK_FUNC(sub_82A2ACB0);
PPC_FUNC_IMPL(__imp__sub_82A2ACB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A2ACB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A2ACD4;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,56
	cr6.compare<int32_t>(ctx.r11.s32, 56, xer);
	// bgt cr6,0x82a2ad88
	if (cr6.gt) goto loc_82A2AD88;
	// beq cr6,0x82a2add4
	if (cr6.eq) goto loc_82A2ADD4;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x82a2ada0
	if (cr6.gt) goto loc_82A2ADA0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2ad5c
	if (cr6.eq) goto loc_82A2AD5C;
	// bdz 0x82a2ad5c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2AD5C;
	// bdz 0x82a2ad5c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2AD5C;
	// bdz 0x82a2ad14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2AD14;
	// bdz 0x82a2ad14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2AD14;
	// bdz 0x82a2ad14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A2AD14;
loc_82A2AD14:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,17,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a2ad30
	if (!cr6.eq) goto loc_82A2AD30;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a2ad34
	if (!cr6.eq) goto loc_82A2AD34;
loc_82A2AD30:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A2AD34:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82a2ae14
	if (!cr6.eq) goto loc_82A2AE14;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r10,768
	cr6.compare<int32_t>(ctx.r10.s32, 768, xer);
	// bne cr6,0x82a2ae14
	if (!cr6.eq) goto loc_82A2AE14;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A2AD5C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a2ad78
	if (!cr6.eq) goto loc_82A2AD78;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2ae14
	if (!cr6.eq) goto loc_82A2AE14;
loc_82A2AD78:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r10,1792
	cr6.compare<int32_t>(ctx.r10.s32, 1792, xer);
	// b 0x82a2ae0c
	goto loc_82A2AE0C;
loc_82A2AD88:
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(ctx.r11.s32, 58, xer);
	// beq cr6,0x82a2add4
	if (cr6.eq) goto loc_82A2ADD4;
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, xer);
	// ble cr6,0x82a2ada0
	if (!cr6.gt) goto loc_82A2ADA0;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, xer);
	// ble cr6,0x82a2add4
	if (!cr6.gt) goto loc_82A2ADD4;
loc_82A2ADA0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a2ae14
	if (cr6.eq) goto loc_82A2AE14;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r10,r11,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r10,768
	cr6.compare<int32_t>(ctx.r10.s32, 768, xer);
	// bne cr6,0x82a2ae14
	if (!cr6.eq) goto loc_82A2AE14;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A2ADD4:
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a2ae14
	if (!cr6.lt) goto loc_82A2AE14;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1f110
	ctx.lr = 0x82A2AE04;
	sub_82A1F110(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82A2AE0C:
	// bne cr6,0x82a2ae14
	if (!cr6.eq) goto loc_82A2AE14;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A2AE14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AE20"))) PPC_WEAK_FUNC(sub_82A2AE20);
PPC_FUNC_IMPL(__imp__sub_82A2AE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2AE28;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce770
	ctx.lr = 0x82A2AE30;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A2AE48;
	sub_82A0C788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a363b0
	ctx.lr = 0x82A2AE54;
	sub_82A363B0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f31,f11
	ctx.f31.f64 = double(float(sqrt(ctx.f11.f64)));
	// bl 0x83740868
	ctx.lr = 0x82A2AE6C;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,-23868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27156);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fdivs f30,f13,f10
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// bl 0x82a0c760
	ctx.lr = 0x82A2AE90;
	sub_82A0C760(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r9,18(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// lhz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// extsb r30,r6
	ctx.r30.s64 = ctx.r6.s8;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f26,f6
	ctx.f26.f64 = double(float(ctx.f6.f64));
	// frsp f27,f7
	ctx.f27.f64 = double(float(ctx.f7.f64));
	// bl 0x82a0c760
	ctx.lr = 0x82A2AED8;
	sub_82A0C760(ctx, base);
	// lhz r4,18(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// frsp f28,f2
	ctx.f28.f64 = double(float(ctx.f2.f64));
	// frsp f29,f3
	ctx.f29.f64 = double(float(ctx.f3.f64));
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(ctx.r30.s32, 17, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(ctx.r30.s32, 10, xer);
	// bne cr6,0x82a2af50
	if (!cr6.eq) goto loc_82A2AF50;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r10,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a2af98
	if (!cr6.eq) goto loc_82A2AF98;
loc_82A2AF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7bc
	ctx.lr = 0x82A2AF4C;
	__restfpr_26(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2AF50:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x82a2af60
	if (cr6.eq) goto loc_82A2AF60;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x82a2af70
	if (!cr6.eq) goto loc_82A2AF70;
loc_82A2AF60:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
loc_82A2AF70:
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(ctx.r30.s32, 21, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r30,85
	cr6.compare<int32_t>(ctx.r30.s32, 85, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r30,88
	cr6.compare<int32_t>(ctx.r30.s32, 88, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// beq cr6,0x82a2af98
	if (cr6.eq) goto loc_82A2AF98;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// bne cr6,0x82a2afb0
	if (!cr6.eq) goto loc_82A2AFB0;
loc_82A2AF98:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r10,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a2afb0
	if (!cr6.eq) goto loc_82A2AFB0;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82a2af3c
	if (cr6.lt) goto loc_82A2AF3C;
loc_82A2AFB0:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x82a2afc0
	if (!cr6.eq) goto loc_82A2AFC0;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82a2af3c
	if (cr6.lt) goto loc_82A2AF3C;
loc_82A2AFC0:
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x82a2afd8
	if (cr6.eq) goto loc_82A2AFD8;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x82a2afd8
	if (cr6.eq) goto loc_82A2AFD8;
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// bne cr6,0x82a2aff0
	if (!cr6.eq) goto loc_82A2AFF0;
loc_82A2AFD8:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF00;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a2aff0
	if (!cr6.eq) goto loc_82A2AFF0;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
loc_82A2AFF0:
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// beq cr6,0x82a2b000
	if (cr6.eq) goto loc_82A2B000;
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// bne cr6,0x82a2b024
	if (!cr6.eq) goto loc_82A2B024;
loc_82A2B000:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 24;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
loc_82A2B024:
	// cmpwi cr6,r3,21
	cr6.compare<int32_t>(ctx.r3.s32, 21, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r3,85
	cr6.compare<int32_t>(ctx.r3.s32, 85, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r3,88
	cr6.compare<int32_t>(ctx.r3.s32, 88, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// beq cr6,0x82a2af3c
	if (cr6.eq) goto loc_82A2AF3C;
	// bl 0x82a3d2a8
	ctx.lr = 0x82A2B058;
	sub_82A3D2A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f30,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82a2b0a8
	if (cr6.eq) goto loc_82A2B0A8;
	// bl 0x83740868
	ctx.lr = 0x82A2B078;
	sub_83740868(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fadds f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fcmpu cr6,f8,f28
	cr6.compare(ctx.f8.f64, ctx.f28.f64);
	// blt cr6,0x82a2af3c
	if (cr6.lt) goto loc_82A2AF3C;
loc_82A2B0A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3d2a8
	ctx.lr = 0x82A2B0B0;
	sub_82A3D2A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2b0f0
	if (cr6.eq) goto loc_82A2B0F0;
	// bl 0x83740868
	ctx.lr = 0x82A2B0C0;
	sub_83740868(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fadds f8,f9,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// fcmpu cr6,f8,f26
	cr6.compare(ctx.f8.f64, ctx.f26.f64);
	// blt cr6,0x82a2af3c
	if (cr6.lt) goto loc_82A2AF3C;
loc_82A2B0F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7bc
	ctx.lr = 0x82A2B100;
	__restfpr_26(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B104"))) PPC_WEAK_FUNC(sub_82A2B104);
PPC_FUNC_IMPL(__imp__sub_82A2B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B108"))) PPC_WEAK_FUNC(sub_82A2B108);
PPC_FUNC_IMPL(__imp__sub_82A2B108) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,255
	ctx.r30.s64 = 255;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A2B130;
	sub_82A0C710(ctx, base);
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26424
	ctx.r10.s64 = ctx.r10.s64 + -26424;
loc_82A2B13C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a2b150
	if (!cr6.lt) goto loc_82A2B150;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,60
	cr6.compare<int32_t>(ctx.r9.s32, 60, xer);
	// beq cr6,0x82a2b168
	if (cr6.eq) goto loc_82A2B168;
loc_82A2B150:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82a2b13c
	if (cr6.lt) goto loc_82A2B13C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a2b170
	goto loc_82A2B170;
loc_82A2B168:
	// mulli r10,r31,11
	ctx.r10.s64 = ctx.r31.s64 * 11;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A2B170:
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

__attribute__((alias("__imp__sub_82A2B188"))) PPC_WEAK_FUNC(sub_82A2B188);
PPC_FUNC_IMPL(__imp__sub_82A2B188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26424
	ctx.r10.s64 = ctx.r10.s64 + -26424;
loc_82A2B198:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a2b1ac
	if (!cr6.lt) goto loc_82A2B1AC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,60
	cr6.compare<int32_t>(ctx.r8.s32, 60, xer);
	// beq cr6,0x82a2b1c4
	if (cr6.eq) goto loc_82A2B1C4;
loc_82A2B1AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82a2b198
	if (cr6.lt) goto loc_82A2B198;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_82A2B1C4:
	// mulli r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 * 11;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B1D0"))) PPC_WEAK_FUNC(sub_82A2B1D0);
PPC_FUNC_IMPL(__imp__sub_82A2B1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A2B1D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,255
	ctx.r28.s64 = 255;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a2b1f4
	if (!cr6.lt) goto loc_82A2B1F4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a2b21c
	goto loc_82A2B21C;
loc_82A2B1F4:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x82a2b204
	if (!cr6.lt) goto loc_82A2B204;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a2b21c
	goto loc_82A2B21C;
loc_82A2B204:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// eqv r9,r11,r29
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r29.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
loc_82A2B21C:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A2B234;
	sub_82A0C710(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r3,980
	ctx.r8.s64 = ctx.r3.s64 + 980;
	// lwz r7,292(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
loc_82A2B244:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82a2b258
	if (cr6.eq) goto loc_82A2B258;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82a2b25c
	if (!cr6.eq) goto loc_82A2B25C;
loc_82A2B258:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A2B25C:
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82a2b274
	if (cr0.lt) goto loc_82A2B274;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a2b278
	if (cr6.lt) goto loc_82A2B278;
loc_82A2B274:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2B278:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a2b298
	if (cr6.eq) goto loc_82A2B298;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r11,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a2b29c
	goto loc_82A2B29C;
loc_82A2B298:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2B29C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2b2c0
	if (cr6.eq) goto loc_82A2B2C0;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// li r11,255
	ctx.r11.s64 = 255;
	// bge cr6,0x82a2b2b8
	if (!cr6.lt) goto loc_82A2B2B8;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82A2B2B8:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a2b2dc
	if (cr6.eq) goto loc_82A2B2DC;
loc_82A2B2C0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// blt cr6,0x82a2b244
	if (cr6.lt) goto loc_82A2B244;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A2B2DC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82a2b2f0
	if (cr6.eq) goto loc_82A2B2F0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82a2b2f4
	if (!cr6.eq) goto loc_82A2B2F4;
loc_82A2B2F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A2B2F4:
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B304"))) PPC_WEAK_FUNC(sub_82A2B304);
PPC_FUNC_IMPL(__imp__sub_82A2B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B308"))) PPC_WEAK_FUNC(sub_82A2B308);
PPC_FUNC_IMPL(__imp__sub_82A2B308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,6112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lfs f31,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a0c710
	ctx.lr = 0x82A2B338;
	sub_82A0C710(ctx, base);
	// lbz r9,252(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B388"))) PPC_WEAK_FUNC(sub_82A2B388);
PPC_FUNC_IMPL(__imp__sub_82A2B388) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x82a2b3b8
	if (cr6.lt) goto loc_82A2B3B8;
loc_82A2B3A4:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A2B3B8:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2B3C4;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2b3a4
	if (cr6.eq) goto loc_82A2B3A4;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82a16440
	ctx.lr = 0x82A2B3D4;
	sub_82A16440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B3E4"))) PPC_WEAK_FUNC(sub_82A2B3E4);
PPC_FUNC_IMPL(__imp__sub_82A2B3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B3E8"))) PPC_WEAK_FUNC(sub_82A2B3E8);
PPC_FUNC_IMPL(__imp__sub_82A2B3E8) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a2b458
	if (!cr6.lt) goto loc_82A2B458;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2B410;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2b458
	if (cr6.eq) goto loc_82A2B458;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82a16440
	ctx.lr = 0x82A2B420;
	sub_82A16440(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a2b458
	if (cr6.lt) goto loc_82A2B458;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82a2b458
	if (!cr6.lt) goto loc_82A2B458;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r3,r10
	ctx.r9.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A2B458:
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

__attribute__((alias("__imp__sub_82A2B46C"))) PPC_WEAK_FUNC(sub_82A2B46C);
PPC_FUNC_IMPL(__imp__sub_82A2B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B470"))) PPC_WEAK_FUNC(sub_82A2B470);
PPC_FUNC_IMPL(__imp__sub_82A2B470) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a2b4c4
	if (!cr6.lt) goto loc_82A2B4C4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2B498;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a2b4a8
	if (!cr6.eq) goto loc_82A2B4A8;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82a2b4b0
	goto loc_82A2B4B0;
loc_82A2B4A8:
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82a16440
	ctx.lr = 0x82A2B4B0;
	sub_82A16440(ctx, base);
loc_82A2B4B0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a2b4c4
	if (cr6.lt) goto loc_82A2B4C4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2b4c8
	if (cr6.lt) goto loc_82A2B4C8;
loc_82A2B4C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2B4C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B4DC"))) PPC_WEAK_FUNC(sub_82A2B4DC);
PPC_FUNC_IMPL(__imp__sub_82A2B4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B4E0"))) PPC_WEAK_FUNC(sub_82A2B4E0);
PPC_FUNC_IMPL(__imp__sub_82A2B4E0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82a2b518
	if (!cr6.eq) goto loc_82A2B518;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r9,r11,28136
	ctx.r9.u64 = ctx.r11.u64 | 28136;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A2B518:
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x82A2B524;
	sub_82A22C10(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// blt cr6,0x82a2b54c
	if (cr6.lt) goto loc_82A2B54C;
loc_82A2B538:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A2B54C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A2B558;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2b538
	if (cr6.eq) goto loc_82A2B538;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82a16440
	ctx.lr = 0x82A2B568;
	sub_82A16440(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B578"))) PPC_WEAK_FUNC(sub_82A2B578);
PPC_FUNC_IMPL(__imp__sub_82A2B578) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2b5a0
	if (cr6.lt) goto loc_82A2B5A0;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2b5a4
	if (cr6.lt) goto loc_82A2B5A4;
loc_82A2B5A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2B5A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2b5c8
	if (!cr6.eq) goto loc_82A2B5C8;
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
loc_82A2B5C8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A2B5D0;
	sub_82A2B4E0(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82A2B5F0"))) PPC_WEAK_FUNC(sub_82A2B5F0);
PPC_FUNC_IMPL(__imp__sub_82A2B5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2B5F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a2aaf8
	ctx.lr = 0x82A2B608;
	sub_82A2AAF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2aaf8
	ctx.lr = 0x82A2B618;
	sub_82A2AAF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B638"))) PPC_WEAK_FUNC(sub_82A2B638);
PPC_FUNC_IMPL(__imp__sub_82A2B638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B648"))) PPC_WEAK_FUNC(sub_82A2B648);
PPC_FUNC_IMPL(__imp__sub_82A2B648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a2b660
	if (!cr6.lt) goto loc_82A2B660;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A2B660:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B668"))) PPC_WEAK_FUNC(sub_82A2B668);
PPC_FUNC_IMPL(__imp__sub_82A2B668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2b6a0
	if (!cr6.eq) goto loc_82A2B6A0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2b6a0
	if (cr6.eq) goto loc_82A2B6A0;
	// lbz r11,35(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2b6a0
	if (cr6.eq) goto loc_82A2B6A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
loc_82A2B6A0:
	// stb r4,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B6A8"))) PPC_WEAK_FUNC(sub_82A2B6A8);
PPC_FUNC_IMPL(__imp__sub_82A2B6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,35(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2b6e0
	if (!cr6.eq) goto loc_82A2B6E0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2b6e0
	if (cr6.eq) goto loc_82A2B6E0;
	// lbz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2b6e0
	if (cr6.eq) goto loc_82A2B6E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
loc_82A2B6E0:
	// stb r4,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B6E8"))) PPC_WEAK_FUNC(sub_82A2B6E8);
PPC_FUNC_IMPL(__imp__sub_82A2B6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r4,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B6FC"))) PPC_WEAK_FUNC(sub_82A2B6FC);
PPC_FUNC_IMPL(__imp__sub_82A2B6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B700"))) PPC_WEAK_FUNC(sub_82A2B700);
PPC_FUNC_IMPL(__imp__sub_82A2B700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r4,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B714"))) PPC_WEAK_FUNC(sub_82A2B714);
PPC_FUNC_IMPL(__imp__sub_82A2B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B718"))) PPC_WEAK_FUNC(sub_82A2B718);
PPC_FUNC_IMPL(__imp__sub_82A2B718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r4,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B72C"))) PPC_WEAK_FUNC(sub_82A2B72C);
PPC_FUNC_IMPL(__imp__sub_82A2B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B730"))) PPC_WEAK_FUNC(sub_82A2B730);
PPC_FUNC_IMPL(__imp__sub_82A2B730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r4,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B744"))) PPC_WEAK_FUNC(sub_82A2B744);
PPC_FUNC_IMPL(__imp__sub_82A2B744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B748"))) PPC_WEAK_FUNC(sub_82A2B748);
PPC_FUNC_IMPL(__imp__sub_82A2B748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r4,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B75C"))) PPC_WEAK_FUNC(sub_82A2B75C);
PPC_FUNC_IMPL(__imp__sub_82A2B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B760"))) PPC_WEAK_FUNC(sub_82A2B760);
PPC_FUNC_IMPL(__imp__sub_82A2B760) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,33(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B768"))) PPC_WEAK_FUNC(sub_82A2B768);
PPC_FUNC_IMPL(__imp__sub_82A2B768) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,34(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B770"))) PPC_WEAK_FUNC(sub_82A2B770);
PPC_FUNC_IMPL(__imp__sub_82A2B770) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,35(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B778"))) PPC_WEAK_FUNC(sub_82A2B778);
PPC_FUNC_IMPL(__imp__sub_82A2B778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r6,11
	cr6.compare<uint32_t>(ctx.r6.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 * 11;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
loc_82A2B7B8:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x82a2b7b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2B7B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B7CC"))) PPC_WEAK_FUNC(sub_82A2B7CC);
PPC_FUNC_IMPL(__imp__sub_82A2B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B7D0"))) PPC_WEAK_FUNC(sub_82A2B7D0);
PPC_FUNC_IMPL(__imp__sub_82A2B7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a2b7f8
	if (!cr6.lt) goto loc_82A2B7F8;
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// bge cr6,0x82a2b7f8
	if (!cr6.lt) goto loc_82A2B7F8;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A2B7F8:
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B800"))) PPC_WEAK_FUNC(sub_82A2B800);
PPC_FUNC_IMPL(__imp__sub_82A2B800) {
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
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B828"))) PPC_WEAK_FUNC(sub_82A2B828);
PPC_FUNC_IMPL(__imp__sub_82A2B828) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B834"))) PPC_WEAK_FUNC(sub_82A2B834);
PPC_FUNC_IMPL(__imp__sub_82A2B834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B838"))) PPC_WEAK_FUNC(sub_82A2B838);
PPC_FUNC_IMPL(__imp__sub_82A2B838) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,360(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 360);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B840"))) PPC_WEAK_FUNC(sub_82A2B840);
PPC_FUNC_IMPL(__imp__sub_82A2B840) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B848"))) PPC_WEAK_FUNC(sub_82A2B848);
PPC_FUNC_IMPL(__imp__sub_82A2B848) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,356(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B850"))) PPC_WEAK_FUNC(sub_82A2B850);
PPC_FUNC_IMPL(__imp__sub_82A2B850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B860"))) PPC_WEAK_FUNC(sub_82A2B860);
PPC_FUNC_IMPL(__imp__sub_82A2B860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B870"))) PPC_WEAK_FUNC(sub_82A2B870);
PPC_FUNC_IMPL(__imp__sub_82A2B870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2b890
	if (!cr6.eq) goto loc_82A2B890;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2b8a0
	if (cr6.eq) goto loc_82A2B8A0;
loc_82A2B888:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A2B890:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2b888
	if (!cr6.eq) goto loc_82A2B888;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2b888
	if (!cr6.eq) goto loc_82A2B888;
loc_82A2B8A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B8A8"))) PPC_WEAK_FUNC(sub_82A2B8A8);
PPC_FUNC_IMPL(__imp__sub_82A2B8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2b8c8
	if (!cr6.eq) goto loc_82A2B8C8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2b8d8
	if (cr6.eq) goto loc_82A2B8D8;
loc_82A2B8C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A2B8C8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2b8c0
	if (!cr6.eq) goto loc_82A2B8C0;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2b8c0
	if (!cr6.eq) goto loc_82A2B8C0;
loc_82A2B8D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B8E0"))) PPC_WEAK_FUNC(sub_82A2B8E0);
PPC_FUNC_IMPL(__imp__sub_82A2B8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f0,-4460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B934"))) PPC_WEAK_FUNC(sub_82A2B934);
PPC_FUNC_IMPL(__imp__sub_82A2B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B938"))) PPC_WEAK_FUNC(sub_82A2B938);
PPC_FUNC_IMPL(__imp__sub_82A2B938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B970"))) PPC_WEAK_FUNC(sub_82A2B970);
PPC_FUNC_IMPL(__imp__sub_82A2B970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B99C"))) PPC_WEAK_FUNC(sub_82A2B99C);
PPC_FUNC_IMPL(__imp__sub_82A2B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B9A0"))) PPC_WEAK_FUNC(sub_82A2B9A0);
PPC_FUNC_IMPL(__imp__sub_82A2B9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2ba04
	if (!cr6.eq) goto loc_82A2BA04;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2ba14
	if (cr6.eq) goto loc_82A2BA14;
loc_82A2B9D4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
loc_82A2B9DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_82A2BA04:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2b9d4
	if (!cr6.eq) goto loc_82A2B9D4;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2b9d4
	if (!cr6.eq) goto loc_82A2B9D4;
loc_82A2BA14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a2b9dc
	goto loc_82A2B9DC;
}

__attribute__((alias("__imp__sub_82A2BA20"))) PPC_WEAK_FUNC(sub_82A2BA20);
PPC_FUNC_IMPL(__imp__sub_82A2BA20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,372(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BA28"))) PPC_WEAK_FUNC(sub_82A2BA28);
PPC_FUNC_IMPL(__imp__sub_82A2BA28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,376(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BA30"))) PPC_WEAK_FUNC(sub_82A2BA30);
PPC_FUNC_IMPL(__imp__sub_82A2BA30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,428(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BA38"))) PPC_WEAK_FUNC(sub_82A2BA38);
PPC_FUNC_IMPL(__imp__sub_82A2BA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bge cr6,0x82a2ba6c
	if (!cr6.lt) goto loc_82A2BA6C;
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// b 0x82a2ba94
	goto loc_82A2BA94;
loc_82A2BA6C:
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_82A2BA94:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x82a2bb48
	if (cr6.lt) goto loc_82A2BB48;
	// bne cr6,0x82a2babc
	if (!cr6.eq) goto loc_82A2BABC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82a2bb48
	if (cr6.eq) goto loc_82A2BB48;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82A2BABC:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x82a2bb08
	if (!cr6.eq) goto loc_82A2BB08;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82a2baf4
	if (!cr6.eq) goto loc_82A2BAF4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82a2badc
	if (cr6.lt) goto loc_82A2BADC;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x82a2baec
	if (cr6.lt) goto loc_82A2BAEC;
loc_82A2BADC:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a2bb48
	if (cr6.lt) goto loc_82A2BB48;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bge cr6,0x82a2bb48
	if (!cr6.lt) goto loc_82A2BB48;
loc_82A2BAEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A2BAF4:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82A2BB08:
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bne cr6,0x82a2bb40
	if (!cr6.eq) goto loc_82A2BB40;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82a2bb50
	if (!cr6.eq) goto loc_82A2BB50;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a2bb28
	if (cr6.lt) goto loc_82A2BB28;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x82a2baec
	if (cr6.lt) goto loc_82A2BAEC;
loc_82A2BB28:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a2bb48
	if (cr6.lt) goto loc_82A2BB48;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bge cr6,0x82a2bb48
	if (!cr6.lt) goto loc_82A2BB48;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A2BB40:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82a2bb50
	if (!cr6.eq) goto loc_82A2BB50;
loc_82A2BB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A2BB50:
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

__attribute__((alias("__imp__sub_82A2BB5C"))) PPC_WEAK_FUNC(sub_82A2BB5C);
PPC_FUNC_IMPL(__imp__sub_82A2BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2BB60"))) PPC_WEAK_FUNC(sub_82A2BB60);
PPC_FUNC_IMPL(__imp__sub_82A2BB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a2bb8c
	if (!cr6.lt) goto loc_82A2BB8C;
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bge cr6,0x82a2bb8c
	if (!cr6.lt) goto loc_82A2BB8C;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,97
	ctx.r11.s64 = ctx.r11.s64 + 97;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A2BB8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BB94"))) PPC_WEAK_FUNC(sub_82A2BB94);
PPC_FUNC_IMPL(__imp__sub_82A2BB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2BB98"))) PPC_WEAK_FUNC(sub_82A2BB98);
PPC_FUNC_IMPL(__imp__sub_82A2BB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2bbb4
	if (!cr6.eq) goto loc_82A2BBB4;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82a2bbdc
	if (cr6.eq) goto loc_82A2BBDC;
loc_82A2BBB4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2bbd4
	if (!cr6.eq) goto loc_82A2BBD4;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82a2bbdc
	if (cr6.eq) goto loc_82A2BBDC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2bbd4
	if (!cr6.eq) goto loc_82A2BBD4;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x82a2bbdc
	if (cr6.eq) goto loc_82A2BBDC;
loc_82A2BBD4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A2BBDC:
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BBF8"))) PPC_WEAK_FUNC(sub_82A2BBF8);
PPC_FUNC_IMPL(__imp__sub_82A2BBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BC14"))) PPC_WEAK_FUNC(sub_82A2BC14);
PPC_FUNC_IMPL(__imp__sub_82A2BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2BC18"))) PPC_WEAK_FUNC(sub_82A2BC18);
PPC_FUNC_IMPL(__imp__sub_82A2BC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a2bc34
	if (!cr6.lt) goto loc_82A2BC34;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A2BC34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BC3C"))) PPC_WEAK_FUNC(sub_82A2BC3C);
PPC_FUNC_IMPL(__imp__sub_82A2BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2BC40"))) PPC_WEAK_FUNC(sub_82A2BC40);
PPC_FUNC_IMPL(__imp__sub_82A2BC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BC5C"))) PPC_WEAK_FUNC(sub_82A2BC5C);
PPC_FUNC_IMPL(__imp__sub_82A2BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2BC60"))) PPC_WEAK_FUNC(sub_82A2BC60);
PPC_FUNC_IMPL(__imp__sub_82A2BC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2bc94
	if (!cr6.eq) goto loc_82A2BC94;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2bca4
	if (cr6.eq) goto loc_82A2BCA4;
loc_82A2BC78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A2BC7C:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_82A2BC94:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2bc78
	if (!cr6.eq) goto loc_82A2BC78;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2bc78
	if (!cr6.eq) goto loc_82A2BC78;
loc_82A2BCA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a2bc7c
	goto loc_82A2BC7C;
}

__attribute__((alias("__imp__sub_82A2BCAC"))) PPC_WEAK_FUNC(sub_82A2BCAC);
PPC_FUNC_IMPL(__imp__sub_82A2BCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2BCB0"))) PPC_WEAK_FUNC(sub_82A2BCB0);
PPC_FUNC_IMPL(__imp__sub_82A2BCB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,33(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// beq cr6,0x82a2bcdc
	if (cr6.eq) goto loc_82A2BCDC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2bd00
	if (!cr6.eq) goto loc_82A2BD00;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82a2bce8
	goto loc_82A2BCE8;
loc_82A2BCDC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2bd00
	if (!cr6.eq) goto loc_82A2BD00;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82A2BCE8:
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2bd00
	if (!cr6.eq) goto loc_82A2BD00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
loc_82A2BD00:
	// stb r4,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BD08"))) PPC_WEAK_FUNC(sub_82A2BD08);
PPC_FUNC_IMPL(__imp__sub_82A2BD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r5,r10,52429
	ctx.r5.u64 = ctx.r10.u64 | 52429;
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulhwu r8,r7,r5
	ctx.r8.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// bge cr6,0x82a2bd78
	if (!cr6.lt) goto loc_82A2BD78;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bge cr6,0x82a2bd78
	if (!cr6.lt) goto loc_82A2BD78;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82a2bd78
	if (!cr6.lt) goto loc_82A2BD78;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,97
	ctx.r11.s64 = ctx.r11.s64 + 97;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
loc_82A2BD78:
	// stb r4,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BD80"))) PPC_WEAK_FUNC(sub_82A2BD80);
PPC_FUNC_IMPL(__imp__sub_82A2BD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r9,352(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// twllei r9,0
	// divwu r7,r10,r9
	ctx.r7.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
loc_82A2BDD8:
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2bdd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2BDD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BDE8"))) PPC_WEAK_FUNC(sub_82A2BDE8);
PPC_FUNC_IMPL(__imp__sub_82A2BDE8) {
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
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82a2bef8
	if (!cr6.lt) goto loc_82A2BEF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,352(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x82a2be44
	if (!cr6.eq) goto loc_82A2BE44;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a2bef8
	if (cr6.eq) goto loc_82A2BEF8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bne cr6,0x82a2be40
	if (!cr6.eq) goto loc_82A2BE40;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_82A2BE40:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82A2BE44:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82a2bef8
	if (cr6.lt) goto loc_82A2BEF8;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x82a2bef8
	if (cr6.lt) goto loc_82A2BEF8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a2bef8
	if (cr6.lt) goto loc_82A2BEF8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a2bef8
	if (cr6.eq) goto loc_82A2BEF8;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// divwu r8,r10,r9
	ctx.r8.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// twllei r9,0
	// bl 0x82a2b778
	ctx.lr = 0x82A2BEAC;
	sub_82A2B778(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a2bef8
	if (cr6.eq) goto loc_82A2BEF8;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a2bef8
	if (cr6.eq) goto loc_82A2BEF8;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A2BED4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a2bed4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2BED4;
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
loc_82A2BEF8:
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
}

__attribute__((alias("__imp__sub_82A2BF10"))) PPC_WEAK_FUNC(sub_82A2BF10);
PPC_FUNC_IMPL(__imp__sub_82A2BF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82a2bf30
	if (!cr6.eq) goto loc_82A2BF30;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
loc_82A2BF30:
	// li r8,11
	ctx.r8.s64 = 11;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r10,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r10.u32);
	// addi r9,r3,308
	ctx.r9.s64 = ctx.r3.s64 + 308;
	// stw r10,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r10.u32);
	// stw r10,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r10,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r10.u32);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stb r11,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r11.u8);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
loc_82A2BF9C:
	// cmplwi cr6,r7,11
	cr6.compare<uint32_t>(ctx.r7.u32, 11, xer);
	// bge cr6,0x82a2bffc
	if (!cr6.lt) goto loc_82A2BFFC;
	// stb r11,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r11.u8);
	// stb r11,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r11.u8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// stb r11,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// stb r11,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// stb r11,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r11.u8);
	// stb r11,109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 109, ctx.r11.u8);
	// stb r11,110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 110, ctx.r11.u8);
	// stb r11,111(r10)
	PPC_STORE_U8(ctx.r10.u32 + 111, ctx.r11.u8);
	// stb r11,112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 112, ctx.r11.u8);
	// stb r11,113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 113, ctx.r11.u8);
	// stb r11,114(r10)
	PPC_STORE_U8(ctx.r10.u32 + 114, ctx.r11.u8);
	// stb r11,115(r10)
	PPC_STORE_U8(ctx.r10.u32 + 115, ctx.r11.u8);
	// stb r11,116(r10)
	PPC_STORE_U8(ctx.r10.u32 + 116, ctx.r11.u8);
	// stb r11,117(r10)
	PPC_STORE_U8(ctx.r10.u32 + 117, ctx.r11.u8);
	// stw r8,-44(r9)
	PPC_STORE_U32(ctx.r9.u32 + -44, ctx.r8.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82A2BFFC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// bdnz 0x82a2bf9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2BF9C;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r8.u32);
	// stw r8,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r8.u32);
	// addi r10,r3,364
	ctx.r10.s64 = ctx.r3.s64 + 364;
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// addi r10,r3,408
	ctx.r10.s64 = ctx.r3.s64 + 408;
	// stb r11,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A2C034:
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bge cr6,0x82a2c044
	if (!cr6.lt) goto loc_82A2C044;
	// stw r11,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82A2C044:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a2c034
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2C034;
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2C058"))) PPC_WEAK_FUNC(sub_82A2C058);
PPC_FUNC_IMPL(__imp__sub_82A2C058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a2c074
	if (!cr6.eq) goto loc_82A2C074;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a2c080
	goto loc_82A2C080;
loc_82A2C074:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82a2c0a4
	if (!cr6.lt) goto loc_82A2C0A4;
loc_82A2C080:
	// addi r9,r10,6
	ctx.r9.s64 = ctx.r10.s64 + 6;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// bge cr6,0x82a2c0b8
	if (!cr6.lt) goto loc_82A2C0B8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// b 0x82a2c0bc
	goto loc_82A2C0BC;
loc_82A2C0A4:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// b 0x82a2c0bc
	goto loc_82A2C0BC;
loc_82A2C0B8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82A2C0BC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a2c0e0
	if (!cr6.eq) goto loc_82A2C0E0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82a2c0f0
	if (cr6.eq) goto loc_82A2C0F0;
loc_82A2C0CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A2C0D0:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a2c0f8
	if (!cr6.eq) goto loc_82A2C0F8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x82a2c0fc
	goto loc_82A2C0FC;
loc_82A2C0E0:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2c0cc
	if (!cr6.eq) goto loc_82A2C0CC;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82a2c0cc
	if (!cr6.eq) goto loc_82A2C0CC;
loc_82A2C0F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a2c0d0
	goto loc_82A2C0D0;
loc_82A2C0F8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82A2C0FC:
	// b 0x82a2ba38
	sub_82A2BA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C100"))) PPC_WEAK_FUNC(sub_82A2C100);
PPC_FUNC_IMPL(__imp__sub_82A2C100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2C118"))) PPC_WEAK_FUNC(sub_82A2C118);
PPC_FUNC_IMPL(__imp__sub_82A2C118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2C130"))) PPC_WEAK_FUNC(sub_82A2C130);
PPC_FUNC_IMPL(__imp__sub_82A2C130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2c14c
	if (!cr6.eq) goto loc_82A2C14C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a2c158
	goto loc_82A2C158;
loc_82A2C14C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a2c17c
	if (!cr6.lt) goto loc_82A2C17C;
loc_82A2C158:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// bge cr6,0x82a2c190
	if (!cr6.lt) goto loc_82A2C190;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82a2c194
	goto loc_82A2C194;
loc_82A2C17C:
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82a2c194
	goto loc_82A2C194;
loc_82A2C190:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82A2C194:
	// b 0x82a2ba38
	sub_82A2BA38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C198"))) PPC_WEAK_FUNC(sub_82A2C198);
PPC_FUNC_IMPL(__imp__sub_82A2C198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,22
	ctx.r9.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,41
	ctx.r10.s64 = ctx.r3.s64 + 41;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r11,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r11.u8);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// stb r11,39(r3)
	PPC_STORE_U8(ctx.r3.u32 + 39, ctx.r11.u8);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
loc_82A2C1D0:
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// stb r11,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// stb r11,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// stb r11,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stbu r11,10(r10)
	ea = 10 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82a2c1d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2C1D0;
	// b 0x82a2bf10
	sub_82A2BF10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C200"))) PPC_WEAK_FUNC(sub_82A2C200);
PPC_FUNC_IMPL(__imp__sub_82A2C200) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2c264
	if (!cr6.eq) goto loc_82A2C264;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2c274
	if (cr6.eq) goto loc_82A2C274;
loc_82A2C230:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82A2C234:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bge cr6,0x82a2c27c
	if (!cr6.lt) goto loc_82A2C27C;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a2c27c
	if (!cr6.lt) goto loc_82A2C27C;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// mulli r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 * 11;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// b 0x82a2c280
	goto loc_82A2C280;
loc_82A2C264:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2c230
	if (!cr6.eq) goto loc_82A2C230;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2c230
	if (!cr6.eq) goto loc_82A2C230;
loc_82A2C274:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x82a2c234
	goto loc_82A2C234;
loc_82A2C27C:
	// lwz r30,264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
loc_82A2C280:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-22152
	ctx.r10.s64 = ctx.r11.s64 + -22152;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x825a9cf0
	ctx.lr = 0x82A2C2A8;
	sub_825A9CF0(ctx, base);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a2c2bc
	if (!cr6.eq) goto loc_82A2C2BC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a94f0
	ctx.lr = 0x82A2C2BC;
	sub_825A94F0(ctx, base);
loc_82A2C2BC:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a2c2d8
	if (!cr6.eq) goto loc_82A2C2D8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_82A2C2D8:
	// li r31,255
	ctx.r31.s64 = 255;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2c304
	if (cr6.eq) goto loc_82A2C304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a29bf8
	ctx.lr = 0x82A2C2EC;
	sub_82A29BF8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_82A2C304:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82A2C318;
	sub_825E0CF8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2c338
	if (cr6.eq) goto loc_82A2C338;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A2C338;
	sub_8353F3B8(ctx, base);
loc_82A2C338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A2C354"))) PPC_WEAK_FUNC(sub_82A2C354);
PPC_FUNC_IMPL(__imp__sub_82A2C354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C358"))) PPC_WEAK_FUNC(sub_82A2C358);
PPC_FUNC_IMPL(__imp__sub_82A2C358) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2c480
	if (!cr6.eq) goto loc_82A2C480;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2c490
	if (cr6.eq) goto loc_82A2C490;
loc_82A2C388:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82A2C38C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2c498
	if (!cr6.eq) goto loc_82A2C498;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2c4a8
	if (cr6.eq) goto loc_82A2C4A8;
loc_82A2C39C:
	// lwz r30,364(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
loc_82A2C3A0:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r7,r10,-22152
	ctx.r7.s64 = ctx.r10.s64 + -22152;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a9cf0
	ctx.lr = 0x82A2C3D4;
	sub_825A9CF0(ctx, base);
	// lbz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82a2c3e8
	if (!cr6.eq) goto loc_82A2C3E8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a94f0
	ctx.lr = 0x82A2C3E8;
	sub_825A94F0(ctx, base);
loc_82A2C3E8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a2c404
	if (!cr6.eq) goto loc_82A2C404;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_82A2C404:
	// li r31,255
	ctx.r31.s64 = 255;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a2c430
	if (cr6.eq) goto loc_82A2C430;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a29bf8
	ctx.lr = 0x82A2C418;
	sub_82A29BF8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
loc_82A2C430:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x82A2C444;
	sub_825E0CF8(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2c464
	if (cr6.eq) goto loc_82A2C464;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x82A2C464;
	sub_8353F3B8(ctx, base);
loc_82A2C464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82A2C480:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2c388
	if (!cr6.eq) goto loc_82A2C388;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2c388
	if (!cr6.eq) goto loc_82A2C388;
loc_82A2C490:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x82a2c38c
	goto loc_82A2C38C;
loc_82A2C498:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2c39c
	if (!cr6.eq) goto loc_82A2C39C;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2c39c
	if (!cr6.eq) goto loc_82A2C39C;
loc_82A2C4A8:
	// lwz r30,368(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// b 0x82a2c3a0
	goto loc_82A2C3A0;
}

__attribute__((alias("__imp__sub_82A2C4B0"))) PPC_WEAK_FUNC(sub_82A2C4B0);
PPC_FUNC_IMPL(__imp__sub_82A2C4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A2C4B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a2c200
	ctx.lr = 0x82A2C4C8;
	sub_82A2C200(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2c358
	ctx.lr = 0x82A2C4D4;
	sub_82A2C358(ctx, base);
	// lwz r11,356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2c51c
	if (!cr6.eq) goto loc_82A2C51C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2c52c
	if (cr6.eq) goto loc_82A2C52C;
loc_82A2C4EC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A2C4F0:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a2c510
	if (cr6.eq) goto loc_82A2C510;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// beq cr6,0x82a2c510
	if (cr6.eq) goto loc_82A2C510;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x82a2c534
	if (!cr6.eq) goto loc_82A2C534;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a2c544
	if (cr6.eq) goto loc_82A2C544;
loc_82A2C510:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2C51C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2c4ec
	if (!cr6.eq) goto loc_82A2C4EC;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2c4ec
	if (!cr6.eq) goto loc_82A2C4EC;
loc_82A2C52C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a2c4f0
	goto loc_82A2C4F0;
loc_82A2C534:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bne cr6,0x82a2c510
	if (!cr6.eq) goto loc_82A2C510;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2c510
	if (!cr6.eq) goto loc_82A2C510;
loc_82A2C544:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C550"))) PPC_WEAK_FUNC(sub_82A2C550);
PPC_FUNC_IMPL(__imp__sub_82A2C550) {
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
	// bl 0x82a2c358
	ctx.lr = 0x82A2C570;
	sub_82A2C358(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// beq cr6,0x82a2c58c
	if (cr6.eq) goto loc_82A2C58C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2c200
	ctx.lr = 0x82A2C580;
	sub_82A2C200(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82a2c590
	if (!cr6.eq) goto loc_82A2C590;
loc_82A2C58C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2C590:
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

__attribute__((alias("__imp__sub_82A2C5A8"))) PPC_WEAK_FUNC(sub_82A2C5A8);
PPC_FUNC_IMPL(__imp__sub_82A2C5A8) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a2c5ec
	if (cr6.eq) goto loc_82A2C5EC;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// beq cr6,0x82a2c5ec
	if (cr6.eq) goto loc_82A2C5EC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// beq cr6,0x82a2c5ec
	if (cr6.eq) goto loc_82A2C5EC;
	// cmpwi cr6,r4,23
	cr6.compare<int32_t>(ctx.r4.s32, 23, xer);
	// beq cr6,0x82a2c5ec
	if (cr6.eq) goto loc_82A2C5EC;
	// bl 0x82a2c200
	ctx.lr = 0x82A2C5E0;
	sub_82A2C200(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82a2c5f0
	if (!cr6.eq) goto loc_82A2C5F0;
loc_82A2C5EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A2C5F0:
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

__attribute__((alias("__imp__sub_82A2C604"))) PPC_WEAK_FUNC(sub_82A2C604);
PPC_FUNC_IMPL(__imp__sub_82A2C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C608"))) PPC_WEAK_FUNC(sub_82A2C608);
PPC_FUNC_IMPL(__imp__sub_82A2C608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A2C610;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2c8fc
	if (cr6.eq) goto loc_82A2C8FC;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// li r26,24
	ctx.r26.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// stw r26,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r26.u32);
	// stw r26,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r26.u32);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stw r26,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r26.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// ori r28,r11,43691
	ctx.r28.u64 = ctx.r11.u64 | 43691;
loc_82A2C654:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mulhwu r10,r11,r28
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a2c680
	if (cr6.lt) goto loc_82A2C680;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2C680:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2C690;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2C694;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a2c6d0
	if (cr6.eq) goto loc_82A2C6D0;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2c6d0
	if (!cr6.eq) goto loc_82A2C6D0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a2c6d0
	if (cr6.eq) goto loc_82A2C6D0;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a2c6d0
	if (!cr0.eq) goto loc_82A2C6D0;
	// lwz r11,380(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 380);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2c6d0
	if (!cr6.eq) goto loc_82A2C6D0;
	// stw r31,380(r25)
	PPC_STORE_U32(ctx.r25.u32 + 380, ctx.r31.u32);
loc_82A2C6D0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82a2c654
	if (cr6.lt) goto loc_82A2C654;
	// lwz r11,384(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 384);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r26,384(r25)
	PPC_STORE_U32(ctx.r25.u32 + 384, ctx.r26.u32);
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 & ctx.r11.u64;
loc_82A2C6F8:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mulhwu r10,r11,r28
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x82a2c724
	if (cr6.lt) goto loc_82A2C724;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2C724:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2C734;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2C738;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82a2c778
	if (cr6.eq) goto loc_82A2C778;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2c778
	if (!cr6.eq) goto loc_82A2C778;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82a2c778
	if (cr6.eq) goto loc_82A2C778;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2c778
	if (!cr6.eq) goto loc_82A2C778;
	// lwz r11,384(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 384);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2c778
	if (!cr6.eq) goto loc_82A2C778;
	// stw r31,384(r25)
	PPC_STORE_U32(ctx.r25.u32 + 384, ctx.r31.u32);
loc_82A2C778:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82a2c6f8
	if (cr6.lt) goto loc_82A2C6F8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2c200
	ctx.lr = 0x82A2C78C;
	sub_82A2C200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2c828
	if (cr6.eq) goto loc_82A2C828;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A2C79C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2c7ac
	if (cr6.lt) goto loc_82A2C7AC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2C7AC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2C7BC;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2C7C0;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a2c7e0
	if (!cr6.eq) goto loc_82A2C7E0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2c7e0
	if (!cr6.eq) goto loc_82A2C7E0;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2c7f0
	if (cr6.eq) goto loc_82A2C7F0;
loc_82A2C7E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2c79c
	if (cr6.lt) goto loc_82A2C79C;
	// b 0x82a2c7f4
	goto loc_82A2C7F4;
loc_82A2C7F0:
	// stw r30,372(r25)
	PPC_STORE_U32(ctx.r25.u32 + 372, ctx.r30.u32);
loc_82A2C7F4:
	// lwz r11,372(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2c828
	if (!cr6.eq) goto loc_82A2C828;
	// lwz r11,356(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 356);
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2c894
	if (!cr6.eq) goto loc_82A2C894;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a2c8a4
	if (cr6.eq) goto loc_82A2C8A4;
loc_82A2C818:
	// lwz r11,384(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 384);
loc_82A2C81C:
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82a2c828
	if (cr6.eq) goto loc_82A2C828;
	// stw r11,372(r25)
	PPC_STORE_U32(ctx.r25.u32 + 372, ctx.r11.u32);
loc_82A2C828:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2c358
	ctx.lr = 0x82A2C830;
	sub_82A2C358(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82a2c8fc
	if (cr6.eq) goto loc_82A2C8FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A2C840:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2c850
	if (cr6.lt) goto loc_82A2C850;
	// li r11,23
	ctx.r11.s64 = 23;
loc_82A2C850:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8357ece0
	ctx.lr = 0x82A2C860;
	sub_8357ECE0(ctx, base);
	// bl 0x82a47d40
	ctx.lr = 0x82A2C864;
	sub_82A47D40(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82a2c884
	if (!cr6.eq) goto loc_82A2C884;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a2c884
	if (!cr6.eq) goto loc_82A2C884;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2c8ac
	if (cr6.eq) goto loc_82A2C8AC;
loc_82A2C884:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82a2c840
	if (cr6.lt) goto loc_82A2C840;
	// b 0x82a2c8b0
	goto loc_82A2C8B0;
loc_82A2C894:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2c818
	if (!cr6.eq) goto loc_82A2C818;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a2c818
	if (!cr6.eq) goto loc_82A2C818;
loc_82A2C8A4:
	// lwz r11,380(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 380);
	// b 0x82a2c81c
	goto loc_82A2C81C;
loc_82A2C8AC:
	// stw r30,376(r25)
	PPC_STORE_U32(ctx.r25.u32 + 376, ctx.r30.u32);
loc_82A2C8B0:
	// lwz r11,376(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 376);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82a2c8fc
	if (!cr6.eq) goto loc_82A2C8FC;
	// lwz r11,356(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 356);
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a2c8d4
	if (!cr6.eq) goto loc_82A2C8D4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// b 0x82a2c8e0
	goto loc_82A2C8E0;
loc_82A2C8D4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2c8e4
	if (!cr6.eq) goto loc_82A2C8E4;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
loc_82A2C8E0:
	// beq cr6,0x82a2c8ec
	if (cr6.eq) goto loc_82A2C8EC;
loc_82A2C8E4:
	// lwz r11,380(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 380);
	// b 0x82a2c8f0
	goto loc_82A2C8F0;
loc_82A2C8EC:
	// lwz r11,384(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 384);
loc_82A2C8F0:
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82a2c8fc
	if (cr6.eq) goto loc_82A2C8FC;
	// stw r11,376(r25)
	PPC_STORE_U32(ctx.r25.u32 + 376, ctx.r11.u32);
loc_82A2C8FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2C904"))) PPC_WEAK_FUNC(sub_82A2C904);
PPC_FUNC_IMPL(__imp__sub_82A2C904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C908"))) PPC_WEAK_FUNC(sub_82A2C908);
PPC_FUNC_IMPL(__imp__sub_82A2C908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A2C910;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,7068
	ctx.r9.s64 = ctx.r10.s64 + 7068;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x828c6d28
	ctx.lr = 0x82A2C94C;
	sub_828C6D28(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82a2c968
	if (!cr6.eq) goto loc_82A2C968;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
loc_82A2C968:
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2ca60
	if (cr6.eq) goto loc_82A2CA60;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// bne cr6,0x82a2c988
	if (!cr6.eq) goto loc_82A2C988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b8e0
	ctx.lr = 0x82A2C984;
	sub_82A2B8E0(ctx, base);
	// b 0x82a2ca4c
	goto loc_82A2CA4C;
loc_82A2C988:
	// cmpwi cr6,r30,23
	cr6.compare<int32_t>(ctx.r30.s32, 23, xer);
	// bne cr6,0x82a2c9c0
	if (!cr6.eq) goto loc_82A2C9C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82a2ca4c
	goto loc_82A2CA4C;
loc_82A2C9C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2c4b0
	ctx.lr = 0x82A2C9CC;
	sub_82A2C4B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2c9ec
	if (cr6.eq) goto loc_82A2C9EC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a2b9a0
	ctx.lr = 0x82A2C9E8;
	sub_82A2B9A0(ctx, base);
	// b 0x82a2ca48
	goto loc_82A2CA48;
loc_82A2C9EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a2c5a8
	ctx.lr = 0x82A2C9F4;
	sub_82A2C5A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2ca48
	if (!cr6.eq) goto loc_82A2CA48;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-22592(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22592);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,68(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f8,f9,f13,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f11.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A2CA48:
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82A2CA4C:
	// addic r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r28,1
	ctx.r28.s64 = 1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_82A2CA60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x82A2CA74;
	sub_825C3358(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

