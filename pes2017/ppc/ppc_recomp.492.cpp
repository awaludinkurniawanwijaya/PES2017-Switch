#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A12BF0"))) PPC_WEAK_FUNC(sub_83A12BF0);
PPC_FUNC_IMPL(__imp__sub_83A12BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lhz r8,110(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 110);
	// sth r8,396(r3)
	PPC_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// lhz r7,110(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 110);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r8,396(r3)
	PPC_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// stw r10,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x83a12c44
	if (!cr6.gt) goto loc_83A12C44;
	// li r10,2
	ctx.r10.s64 = 2;
loc_83A12C44:
	// stw r10,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r9,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lhz r11,110(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 110);
	// sth r11,396(r3)
	PPC_STORE_U16(ctx.r3.u32 + 396, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A12C64"))) PPC_WEAK_FUNC(sub_83A12C64);
PPC_FUNC_IMPL(__imp__sub_83A12C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A12C68"))) PPC_WEAK_FUNC(sub_83A12C68);
PPC_FUNC_IMPL(__imp__sub_83A12C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A12C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// rotlwi r5,r11,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// bl 0x831cdcf0
	ctx.lr = 0x83A12C94;
	sub_831CDCF0(ctx, base);
	// lhz r9,34(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a12e9c
	if (cr6.eq) goto loc_83A12E9C;
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,32767
	ctx.r30.s64 = 32767;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83A12CC4:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r7,r9,1776
	ctx.r7.s64 = ctx.r9.s64 * 1776;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mulli r8,r9,112
	ctx.r8.s64 = ctx.r9.s64 * 112;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r5,336(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// srawi r6,r6,1
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r5,268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lwz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stw r8,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// sth r30,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r30.u16);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// sth r10,122(r11)
	PPC_STORE_U16(ctx.r11.u32 + 122, ctx.r10.u16);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// sth r10,124(r11)
	PPC_STORE_U16(ctx.r11.u32 + 124, ctx.r10.u16);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// sth r10,126(r11)
	PPC_STORE_U16(ctx.r11.u32 + 126, ctx.r10.u16);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// sth r10,128(r11)
	PPC_STORE_U16(ctx.r11.u32 + 128, ctx.r10.u16);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// sth r10,130(r11)
	PPC_STORE_U16(ctx.r11.u32 + 130, ctx.r10.u16);
	// sth r10,132(r11)
	PPC_STORE_U16(ctx.r11.u32 + 132, ctx.r10.u16);
	// sth r10,134(r11)
	PPC_STORE_U16(ctx.r11.u32 + 134, ctx.r10.u16);
	// sth r10,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r10.u16);
	// sth r10,118(r11)
	PPC_STORE_U16(ctx.r11.u32 + 118, ctx.r10.u16);
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83a12dd8
	if (!cr6.eq) goto loc_83A12DD8;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,436(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r6,436(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mullw r8,r5,r9
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r6.u32);
	// b 0x83a12df8
	goto loc_83A12DF8;
loc_83A12DD8:
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
loc_83A12DF8:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r6,416(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r6,420(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,424(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r6,424(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// sth r29,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r29.u16);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,424(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r5,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
	// lwz r5,424(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,-2(r5)
	PPC_STORE_U16(ctx.r5.u32 + -2, ctx.r8.u16);
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sth r10,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r10,172(r7)
	PPC_STORE_U32(ctx.r7.u32 + 172, ctx.r10.u32);
	// lhz r6,34(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x83a12cc4
	if (cr6.lt) goto loc_83A12CC4;
loc_83A12E9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A12EA4"))) PPC_WEAK_FUNC(sub_83A12EA4);
PPC_FUNC_IMPL(__imp__sub_83A12EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A12EA8"))) PPC_WEAK_FUNC(sub_83A12EA8);
PPC_FUNC_IMPL(__imp__sub_83A12EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A12EB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a12ecc
	if (!cr6.eq) goto loc_83A12ECC;
loc_83A12EC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A12ECC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a12ec0
	if (cr6.eq) goto loc_83A12EC0;
	// addi r27,r30,224
	ctx.r27.s64 = ctx.r30.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a2b828
	ctx.lr = 0x83A12EE4;
	sub_83A2B828(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r29,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r28.u32);
	// stw r29,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r29.u32);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x831cdcf0
	ctx.lr = 0x83A12F0C;
	sub_831CDCF0(ctx, base);
	// lhz r7,34(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r29,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a12f9c
	if (cr6.eq) goto loc_83A12F9C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83A12F38:
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// srawi r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// sth r4,122(r5)
	PPC_STORE_U16(ctx.r5.u32 + 122, ctx.r4.u16);
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r7,122(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 122);
	// sth r7,124(r9)
	PPC_STORE_U16(ctx.r9.u32 + 124, ctx.r7.u16);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lwz r3,424(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 424);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sth r4,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, ctx.r4.u16);
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r29,116(r7)
	PPC_STORE_U16(ctx.r7.u32 + 116, ctx.r29.u16);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lhz r6,34(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x83a12f38
	if (cr6.lt) goto loc_83A12F38;
loc_83A12F9C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// std r29,184(r30)
	PPC_STORE_U64(ctx.r30.u32 + 184, ctx.r29.u64);
	// stw r29,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 ^ 1;
	// stw r9,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r9.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r28,696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 696, ctx.r28.u32);
	// stw r29,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r29.u32);
	// stw r5,692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 692, ctx.r5.u32);
	// stw r29,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r29.u32);
	// std r11,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r11.u64);
	// std r11,176(r30)
	PPC_STORE_U64(ctx.r30.u32 + 176, ctx.r11.u64);
	// sth r29,154(r30)
	PPC_STORE_U16(ctx.r30.u32 + 154, ctx.r29.u16);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// bl 0x83a27a60
	ctx.lr = 0x83A13000;
	sub_83A27A60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A13008"))) PPC_WEAK_FUNC(sub_83A13008);
PPC_FUNC_IMPL(__imp__sub_83A13008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A13010;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,16(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r29,24(r4)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r25,32(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r26,8(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// beq cr6,0x83a13064
	if (cr6.eq) goto loc_83A13064;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a13064
	if (!cr6.eq) goto loc_83A13064;
	// lwz r11,696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a13064
	if (!cr6.eq) goto loc_83A13064;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83a130dc
	if (cr6.eq) goto loc_83A130DC;
	// bl 0x83a12ea8
	ctx.lr = 0x83A13060;
	sub_83A12EA8(ctx, base);
	// stw r27,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r27.u32);
loc_83A13064:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83a130dc
	if (cr6.eq) goto loc_83A130DC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83a130dc
	if (cr6.eq) goto loc_83A130DC;
	// lhz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x83a1308c
	if (!cr6.gt) goto loc_83A1308C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r11.u16);
loc_83A1308C:
	// ld r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// cmpd cr6,r11,r29
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r29.s64, xer);
	// beq cr6,0x83a130dc
	if (cr6.eq) goto loc_83A130DC;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a130b4
	if (!cr6.eq) goto loc_83A130B4;
	// std r29,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r29.u64);
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// sth r27,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r27.u16);
	// b 0x83a130dc
	goto loc_83A130DC;
loc_83A130B4:
	// lhz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// std r29,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r29.u64);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r9.u16);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x83a130dc
	if (cr6.eq) goto loc_83A130DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// sth r11,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r11.u16);
loc_83A130DC:
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a130f8
	if (cr6.eq) goto loc_83A130F8;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83a130f8
	if (cr6.eq) goto loc_83A130F8;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x83a2b828
	ctx.lr = 0x83A130F8;
	sub_83A2B828(ctx, base);
loc_83A130F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r8,704(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// beq cr6,0x83a13130
	if (cr6.eq) goto loc_83A13130;
	// bl 0x83a2c108
	ctx.lr = 0x83A1312C;
	sub_83A2C108(ctx, base);
	// b 0x83a13134
	goto loc_83A13134;
loc_83A13130:
	// bl 0x83a2c100
	ctx.lr = 0x83A13134;
	sub_83A2C100(ctx, base);
loc_83A13134:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a1319c
	if (cr6.lt) goto loc_83A1319C;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x83a13154
	if (!cr6.eq) goto loc_83A13154;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r27,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r27.u32);
loc_83A13154:
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1319c
	if (cr6.eq) goto loc_83A1319C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x83a13180
	if (!cr6.eq) goto loc_83A13180;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x83a1319c
	if (cr6.eq) goto loc_83A1319C;
loc_83A13170:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A13180:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x83a1319c
	if (cr6.eq) goto loc_83A1319C;
	// cmpwi cr6,r25,8
	cr6.compare<int32_t>(ctx.r25.s32, 8, xer);
	// bge cr6,0x83a13170
	if (!cr6.lt) goto loc_83A13170;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a2c418
	ctx.lr = 0x83A1319C;
	sub_83A2C418(ctx, base);
loc_83A1319C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A131A4"))) PPC_WEAK_FUNC(sub_83A131A4);
PPC_FUNC_IMPL(__imp__sub_83A131A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A131A8"))) PPC_WEAK_FUNC(sub_83A131A8);
PPC_FUNC_IMPL(__imp__sub_83A131A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A131B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bne cr6,0x83a131d8
	if (!cr6.eq) goto loc_83A131D8;
loc_83A131C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A131D8:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a131c8
	if (cr6.eq) goto loc_83A131C8;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x83a131f4
	if (cr6.gt) goto loc_83A131F4;
	// li r25,4
	ctx.r25.s64 = 4;
loc_83A131F4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a13474
	if (cr6.eq) goto loc_83A13474;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r27,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// bne cr6,0x83a13510
	if (!cr6.eq) goto loc_83A13510;
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a13290
	if (!cr6.eq) goto loc_83A13290;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x83a13290
	if (cr6.gt) goto loc_83A13290;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83a13248
	if (!cr6.lt) goto loc_83A13248;
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_83A13248:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83a13260
	if (cr0.eq) goto loc_83A13260;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x83a2bac8
	ctx.lr = 0x83A13260;
	sub_83A2BAC8(ctx, base);
loc_83A13260:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a13288
	if (!cr6.eq) goto loc_83A13288;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x83a2b828
	ctx.lr = 0x83A13278;
	sub_83A2B828(ctx, base);
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A13288:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x83a13420
	goto loc_83A13420;
loc_83A13290:
	// li r28,-2
	ctx.r28.s64 = -2;
loc_83A13294:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a132f4
	if (!cr6.eq) goto loc_83A132F4;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_83A132A4:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a132dc
	if (!cr6.eq) goto loc_83A132DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a2b828
	ctx.lr = 0x83A132B8;
	sub_83A2B828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a12398
	ctx.lr = 0x83A132C0;
	sub_83A12398(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a2c118
	ctx.lr = 0x83A132D0;
	sub_83A2C118(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a13514
	if (cr6.lt) goto loc_83A13514;
	// b 0x83a132e8
	goto loc_83A132E8;
loc_83A132DC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_83A132E8:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a132a4
	if (cr6.eq) goto loc_83A132A4;
loc_83A132F4:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// ble cr6,0x83a133e0
	if (!cr6.gt) goto loc_83A133E0;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r10,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r6,r7,32
	xer.ca = ctx.r7.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r7.s64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x83a1335c
	if (!cr6.eq) goto loc_83A1335C;
	// sth r27,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a13378
	if (cr6.lt) goto loc_83A13378;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A1335C:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subfc r7,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// eqv r6,r9,r10
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// sth r3,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
loc_83A13378:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83a13398
	if (!cr6.eq) goto loc_83A13398;
	// lhz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a133c0
	if (!cr6.eq) goto loc_83A133C0;
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x83a13294
	goto loc_83A13294;
loc_83A13398:
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x83a133c0
	if (!cr6.eq) goto loc_83A133C0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83a133c0
	if (!cr6.eq) goto loc_83A133C0;
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// bl 0x83a2b828
	ctx.lr = 0x83A133B8;
	sub_83A2B828(ctx, base);
	// stw r27,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
	// b 0x83a13294
	goto loc_83A13294;
loc_83A133C0:
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a1340c
	if (cr6.lt) goto loc_83A1340C;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x83a133d8
	if (!cr6.eq) goto loc_83A133D8;
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
loc_83A133D8:
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x83a13294
	goto loc_83A13294;
loc_83A133E0:
	// subfic r10,r25,32
	xer.ca = ctx.r25.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r25.s64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r6,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// slw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r3,r4,29
	xer.ca = ctx.r4.u32 <= 29;
	ctx.r3.s64 = 29 - ctx.r4.s64;
	// srw r11,r7,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_83A1340C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1341c
	if (!cr6.eq) goto loc_83A1341C;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x83a2bac8
	ctx.lr = 0x83A1341C;
	sub_83A2BAC8(ctx, base);
loc_83A1341C:
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
loc_83A13420:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a13468
	if (!cr6.eq) goto loc_83A13468;
	// lhz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a1351c
	if (!cr6.eq) goto loc_83A1351C;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// mulld r6,r8,r9
	ctx.r6.s64 = ctx.r8.s64 * ctx.r9.s64;
	// divd r5,r6,r7
	ctx.r5.s64 = PPCDivide(ctx.r6.s64, ctx.r7.s64);
	// std r5,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r5.u64);
loc_83A1345C:
	// sth r26,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r26.u16);
	// stw r26,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
loc_83A13464:
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
loc_83A13468:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a13510
	if (cr6.eq) goto loc_83A13510;
loc_83A13474:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// ble cr6,0x83a134b4
	if (!cr6.gt) goto loc_83A134B4;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_83A13488:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a2c418
	ctx.lr = 0x83A13494;
	sub_83A2C418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a13514
	if (cr6.lt) goto loc_83A13514;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// bgt cr6,0x83a13488
	if (cr6.gt) goto loc_83A13488;
loc_83A134B4:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a2c418
	ctx.lr = 0x83A134C0;
	sub_83A2C418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a13514
	if (cr6.lt) goto loc_83A13514;
	// lhz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a13504
	if (cr6.eq) goto loc_83A13504;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r8,32767
	ctx.r8.s64 = 32767;
loc_83A134DC:
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = ctx.r11.s64 * 1776;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r8,112(r10)
	PPC_STORE_U16(ctx.r10.u32 + 112, ctx.r8.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r7,34(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x83a134dc
	if (cr6.lt) goto loc_83A134DC;
loc_83A13504:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_83A13510:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83A13514:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A1351C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a1345c
	if (!cr6.eq) goto loc_83A1345C;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ld r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 176);
	// ori r6,r10,38528
	ctx.r6.u64 = ctx.r10.u64 | 38528;
	// sth r27,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r27.u16);
	// mulld r5,r8,r9
	ctx.r5.s64 = ctx.r8.s64 * ctx.r9.s64;
	// std r7,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r7.u64);
	// divd r4,r5,r6
	ctx.r4.s64 = PPCDivide(ctx.r5.s64, ctx.r6.s64);
	// std r4,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r4.u64);
	// b 0x83a13464
	goto loc_83A13464;
}

__attribute__((alias("__imp__sub_83A13554"))) PPC_WEAK_FUNC(sub_83A13554);
PPC_FUNC_IMPL(__imp__sub_83A13554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A13558"))) PPC_WEAK_FUNC(sub_83A13558);
PPC_FUNC_IMPL(__imp__sub_83A13558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83A13560;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// li r15,3
	ctx.r15.s64 = 3;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a13dec
	if (cr6.eq) goto loc_83A13DEC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a13dec
	if (cr6.eq) goto loc_83A13DEC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a13dec
	if (cr6.eq) goto loc_83A13DEC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// sth r28,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r28.u16);
	// beq cr6,0x83a135ac
	if (cr6.eq) goto loc_83A135AC;
	// sth r28,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r28.u16);
loc_83A135AC:
	// lis r11,-32764
	ctx.r11.s64 = -2147221504;
	// li r26,32767
	ctx.r26.s64 = 32767;
	// li r23,5
	ctx.r23.s64 = 5;
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r25,r11,4
	ctx.r25.u64 = ctx.r11.u64 | 4;
	// li r27,8
	ctx.r27.s64 = 8;
	// li r17,4
	ctx.r17.s64 = 4;
	// li r24,7
	ctx.r24.s64 = 7;
	// li r22,6
	ctx.r22.s64 = 6;
loc_83A135D0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83a135d0
	if (cr6.gt) goto loc_83A135D0;
	// lis r12,-31839
	ctx.r12.s64 = -2086600704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13812
	ctx.r12.s64 = ctx.r12.s64 + 13812;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A13958;
	case 1:
		goto loc_83A135D0;
	case 2:
		goto loc_83A13978;
	case 3:
		goto loc_83A13A44;
	case 4:
		goto loc_83A1361C;
	case 5:
		goto loc_83A136E8;
	case 6:
		goto loc_83A13794;
	case 7:
		goto loc_83A137D4;
	case 8:
		goto loc_83A13818;
	case 9:
		goto loc_83A138E4;
	default:
		return;
	}
	// lwz r29,14680(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14680);
	// lwz r29,13776(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 13776);
	// lwz r29,14712(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14712);
	// lwz r29,14916(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14916);
	// lwz r29,13852(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 13852);
	// lwz r29,14056(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14056);
	// lwz r29,14228(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14228);
	// lwz r29,14292(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14292);
	// lwz r29,14360(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14360);
	// lwz r29,14564(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 14564);
loc_83A1361C:
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a13690
	if (!cr6.eq) goto loc_83A13690;
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a1367c
	if (!cr6.gt) goto loc_83A1367C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A13640:
	// lwz r8,584(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = ctx.r4.s64 * 1776;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r26,112(r3)
	PPC_STORE_U16(ctx.r3.u32 + 112, ctx.r26.u16);
	// lhz r9,580(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a13640
	if (cr6.lt) goto loc_83A13640;
loc_83A1367C:
	// stw r23,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r23.u32);
	// stw r28,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// stw r28,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r28.u32);
	// sth r28,150(r29)
	PPC_STORE_U16(ctx.r29.u32 + 150, ctx.r28.u16);
	// sth r28,152(r29)
	PPC_STORE_U16(ctx.r29.u32 + 152, ctx.r28.u16);
loc_83A13690:
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a136e4
	if (!cr6.gt) goto loc_83A136E4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A136A8:
	// lwz r8,584(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = ctx.r4.s64 * 1776;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r21,490(r3)
	PPC_STORE_U16(ctx.r3.u32 + 490, ctx.r21.u16);
	// lhz r9,580(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a136a8
	if (cr6.lt) goto loc_83A136A8;
loc_83A136E4:
	// sth r21,730(r31)
	PPC_STORE_U16(ctx.r31.u32 + 730, ctx.r21.u16);
loc_83A136E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83a1374c
	if (cr6.eq) goto loc_83A1374C;
	// lwz r11,504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 504);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A13708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, xer);
	// bne cr6,0x83a13744
	if (!cr6.eq) goto loc_83A13744;
	// addi r3,r29,224
	ctx.r3.s64 = ctx.r29.s64 + 224;
	// bl 0x83a2bbd0
	ctx.lr = 0x83A1371C;
	sub_83A2BBD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a13df4
	if (cr6.eq) goto loc_83A13DF4;
	// lwz r11,704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a13df4
	if (cr6.eq) goto loc_83A13DF4;
	// stw r27,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r27.u32);
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// stw r21,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r21.u32);
	// sth r28,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r28.u16);
	// b 0x83a135d0
	goto loc_83A135D0;
loc_83A13744:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// blt cr6,0x83a13df4
	if (cr6.lt) goto loc_83A13DF4;
loc_83A1374C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a13794
	if (!cr6.eq) goto loc_83A13794;
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a13788
	if (cr6.eq) goto loc_83A13788;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a1377c
	if (!cr6.eq) goto loc_83A1377C;
	// stw r24,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r24.u32);
	// b 0x83a135d0
	goto loc_83A135D0;
loc_83A1377C:
	// lbz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a13790
	if (cr6.eq) goto loc_83A13790;
loc_83A13788:
	// stw r27,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r27.u32);
	// b 0x83a135d0
	goto loc_83A135D0;
loc_83A13790:
	// stw r22,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r22.u32);
loc_83A13794:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83a137d0
	if (cr6.lt) goto loc_83A137D0;
	// addi r30,r29,224
	ctx.r30.s64 = ctx.r29.s64 + 224;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_83A137A8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a2c2a8
	ctx.lr = 0x83A137B8;
	sub_83A2C2A8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a13df4
	if (cr6.lt) goto loc_83A13DF4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a137a8
	if (!cr6.eq) goto loc_83A137A8;
loc_83A137D0:
	// stw r24,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r24.u32);
loc_83A137D4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x83a137f0
	if (cr6.gt) goto loc_83A137F0;
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r10,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r10.u16);
	// b 0x83a137fc
	goto loc_83A137FC;
loc_83A137F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a2c548
	ctx.lr = 0x83A137F8;
	sub_83A2C548(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_83A137FC:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// blt cr6,0x83a13df4
	if (cr6.lt) goto loc_83A13DF4;
	// lwz r11,704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a13814
	if (cr6.eq) goto loc_83A13814;
	// sth r28,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r28.u16);
loc_83A13814:
	// stw r27,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r27.u32);
loc_83A13818:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x83a13824
	if (!cr6.eq) goto loc_83A13824;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
loc_83A13824:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a1385c
	if (!cr6.eq) goto loc_83A1385C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,708(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x83a27de0
	ctx.lr = 0x83A1384C;
	sub_83A27DE0(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x83a13860
	if (cr6.eq) goto loc_83A13860;
	// sth r28,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r28.u16);
	// b 0x83a13860
	goto loc_83A13860;
loc_83A1385C:
	// bl 0x83a30270
	ctx.lr = 0x83A13860;
	sub_83A30270(ctx, base);
loc_83A13860:
	// lhz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 220);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,220(r29)
	PPC_STORE_U16(ctx.r29.u32 + 220, ctx.r10.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83a138e4
	if (!cr6.gt) goto loc_83A138E4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A13884:
	// lwz r8,584(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = ctx.r6.s64 * 1776;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,424(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r4,114(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 114);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x83a13c14
	if (!cr6.lt) goto loc_83A13C14;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// sth r7,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r7.u16);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r5,580(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// blt cr6,0x83a13884
	if (cr6.lt) goto loc_83A13884;
loc_83A138E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a1391c
	if (!cr6.eq) goto loc_83A1391C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83a1391c
	if (!cr6.eq) goto loc_83A1391C;
	// lbz r10,144(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a13910
	if (cr6.eq) goto loc_83A13910;
	// stw r21,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r21.u32);
loc_83A13910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,708(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// bl 0x83a2d968
	ctx.lr = 0x83A1391C;
	sub_83A2D968(ctx, base);
loc_83A1391C:
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a13de4
	if (cr6.eq) goto loc_83A13DE4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a13d04
	if (!cr6.eq) goto loc_83A13D04;
	// lwz r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a13aa4
	if (!cr6.gt) goto loc_83A13AA4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	PPC_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// b 0x83a135d0
	goto loc_83A135D0;
loc_83A13958:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// stw r16,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r16.u32);
	// stw r16,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r16.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a135d0
	if (!cr6.gt) goto loc_83A135D0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
	// b 0x83a135d0
	goto loc_83A135D0;
loc_83A13978:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r10.u32);
	// stw r28,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r28.u32);
	// sth r28,220(r29)
	PPC_STORE_U16(ctx.r29.u32 + 220, ctx.r28.u16);
	// stw r28,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
	// stw r28,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r28.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x83a139b0
	if (!cr6.eq) goto loc_83A139B0;
	// sth r28,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r28.u16);
	// b 0x83a139ec
	goto loc_83A139EC;
loc_83A139B0:
	// lwz r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a139d0
	if (!cr6.gt) goto loc_83A139D0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	PPC_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// b 0x83a135d0
	goto loc_83A135D0;
loc_83A139D0:
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a139ec
	if (cr6.lt) goto loc_83A139EC;
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r28,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
loc_83A139EC:
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a13a3c
	if (cr6.eq) goto loc_83A13A3C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83A139FC:
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = ctx.r11.s64 * 1776;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r28,114(r10)
	PPC_STORE_U16(ctx.r10.u32 + 114, ctx.r28.u16);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x83a13a24
	if (!cr6.eq) goto loc_83A13A24;
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
loc_83A13A24:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a139fc
	if (cr6.lt) goto loc_83A139FC;
loc_83A13A3C:
	// stw r15,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r15.u32);
	// b 0x83a135d0
	goto loc_83A135D0;
loc_83A13A44:
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a13ddc
	if (cr6.eq) goto loc_83A13DDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a2e8a0
	ctx.lr = 0x83A13A58;
	sub_83A2E8A0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a13df4
	if (cr6.lt) goto loc_83A13DF4;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a13a9c
	if (cr6.eq) goto loc_83A13A9C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83A13A74:
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = ctx.r11.s64 * 1776;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r28,116(r10)
	PPC_STORE_U16(ctx.r10.u32 + 116, ctx.r28.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a13a74
	if (cr6.lt) goto loc_83A13A74;
loc_83A13A9C:
	// stw r17,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r17.u32);
	// b 0x83a135d0
	goto loc_83A135D0;
loc_83A13AA4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a13d74
	if (cr6.lt) goto loc_83A13D74;
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x83a13d74
	if (!cr6.lt) goto loc_83A13D74;
	// lwz r9,708(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a13ad8
	if (cr6.eq) goto loc_83A13AD8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x83a13ae8
	goto loc_83A13AE8;
loc_83A13AD8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a27ba0
	ctx.lr = 0x83A13AE4;
	sub_83A27BA0(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_83A13AE8:
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83a13bac
	if (!cr6.gt) goto loc_83A13BAC;
	// lwz r7,708(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83a13bac
	if (!cr6.eq) goto loc_83A13BAC;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a13b30
	if (cr6.lt) goto loc_83A13B30;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,392(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stw r8,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// b 0x83a13b40
	goto loc_83A13B40;
loc_83A13B30:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_83A13B40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a27d00
	ctx.lr = 0x83A13B48;
	sub_83A27D00(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83a13bac
	if (cr6.lt) goto loc_83A13BAC;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a13bac
	if (cr6.eq) goto loc_83A13BAC;
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a13b78
	if (cr6.eq) goto loc_83A13B78;
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x83a13b8c
	goto loc_83A13B8C;
loc_83A13B78:
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a13b8c
	if (cr6.eq) goto loc_83A13B8C;
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_83A13B8C:
	// lwz r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a13bac
	if (!cr6.lt) goto loc_83A13BAC;
	// stw r28,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r28,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
loc_83A13BAC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83a13c04
	if (cr6.lt) goto loc_83A13C04;
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a13c04
	if (!cr6.eq) goto loc_83A13C04;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a13be0
	if (cr6.eq) goto loc_83A13BE0;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x83a13bf8
	goto loc_83A13BF8;
loc_83A13BE0:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// beq cr6,0x83a13bf8
	if (cr6.eq) goto loc_83A13BF8;
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_83A13BF8:
	// lwz r10,392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r9.u32);
loc_83A13C04:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83a13c20
	if (!cr6.lt) goto loc_83A13C20;
loc_83A13C14:
	// lis r19,-32764
	ctx.r19.s64 = -2147221504;
	// ori r19,r19,2
	ctx.r19.u64 = ctx.r19.u64 | 2;
	// b 0x83a13df4
	goto loc_83A13DF4;
loc_83A13C20:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r11,0(r18)
	PPC_STORE_U16(ctx.r18.u32 + 0, ctx.r11.u16);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a13d04
	if (cr6.eq) goto loc_83A13D04;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// bne cr6,0x83a13c40
	if (!cr6.eq) goto loc_83A13C40;
	// addi r20,r1,80
	ctx.r20.s64 = ctx.r1.s64 + 80;
loc_83A13C40:
	// sth r28,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r28.u16);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x83a13cec
	if (cr6.gt) goto loc_83A13CEC;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,424(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r5,-2(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// beq cr6,0x83a13c8c
	if (cr6.eq) goto loc_83A13C8C;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r6,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r6.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r5,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x83a13cb8
	goto loc_83A13CB8;
loc_83A13C8C:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a13cb8
	if (cr6.eq) goto loc_83A13CB8;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// slw r5,r9,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
loc_83A13CB8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a2d3e8
	ctx.lr = 0x83A13CCC;
	sub_83A2D3E8(ctx, base);
	// lhz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r6,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r6.u16);
loc_83A13CEC:
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// lhz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// ld r10,184(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 184);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,184(r29)
	PPC_STORE_U64(ctx.r29.u32 + 184, ctx.r10.u64);
loc_83A13D04:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a13dac
	if (cr6.eq) goto loc_83A13DAC;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a13dac
	if (cr6.eq) goto loc_83A13DAC;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_83A13D20:
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r11,r8,1776
	ctx.r11.s64 = ctx.r8.s64 * 1776;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// lwz r11,424(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 424);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// bgt cr6,0x83a13d80
	if (cr6.gt) goto loc_83A13D80;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,-2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + -2);
	// sth r6,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r6.u16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// sth r4,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sth r28,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r28.u16);
	// sth r21,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r21.u16);
	// b 0x83a13d94
	goto loc_83A13D94;
loc_83A13D74:
	// lis r19,-32768
	ctx.r19.s64 = -2147483648;
	// ori r19,r19,16389
	ctx.r19.u64 = ctx.r19.u64 | 16389;
	// b 0x83a13df4
	goto loc_83A13DF4;
loc_83A13D80:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// sth r9,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
loc_83A13D94:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a13d20
	if (cr6.lt) goto loc_83A13D20;
loc_83A13DAC:
	// stw r21,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r21.u32);
	// stw r16,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r16.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a13dcc
	if (!cr6.gt) goto loc_83A13DCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a2c590
	ctx.lr = 0x83A13DCC;
	sub_83A2C590(ctx, base);
loc_83A13DCC:
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a13df4
	if (cr6.gt) goto loc_83A13DF4;
loc_83A13DDC:
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// b 0x83a13df4
	goto loc_83A13DF4;
loc_83A13DE4:
	// stw r17,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r17.u32);
	// b 0x83a13df4
	goto loc_83A13DF4;
loc_83A13DEC:
	// lis r19,-32761
	ctx.r19.s64 = -2147024896;
	// ori r19,r19,87
	ctx.r19.u64 = ctx.r19.u64 | 87;
loc_83A13DF4:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x83a13e20
	if (cr6.eq) goto loc_83A13E20;
	// lhz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a13e20
	if (cr6.eq) goto loc_83A13E20;
	// stw r15,692(r29)
	PPC_STORE_U32(ctx.r29.u32 + 692, ctx.r15.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lhz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// stw r11,700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 700, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83A13E20:
	// stw r16,692(r29)
	PPC_STORE_U32(ctx.r29.u32 + 692, ctx.r16.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A13E30"))) PPC_WEAK_FUNC(sub_83A13E30);
PPC_FUNC_IMPL(__imp__sub_83A13E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r5,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a13e64
	if (!cr6.gt) goto loc_83A13E64;
loc_83A13E48:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a13e5c
	if (!cr6.lt) goto loc_83A13E5C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83A13E5C:
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x83a13e48
	if (cr0.gt) goto loc_83A13E48;
loc_83A13E64:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// divw r10,r4,r11
	ctx.r10.s32 = PPCDivide(ctx.r4.s32, ctx.r11.s32);
	// divw r9,r5,r11
	ctx.r9.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// stw r10,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r10.u32);
	// stw r9,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A13E80"))) PPC_WEAK_FUNC(sub_83A13E80);
PPC_FUNC_IMPL(__imp__sub_83A13E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a13ea4
	if (cr6.eq) goto loc_83A13EA4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a13ea4
	if (!cr6.gt) goto loc_83A13EA4;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
loc_83A13EA4:
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,340(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lwz r7,328(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r11,r6,r7
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A13ED8"))) PPC_WEAK_FUNC(sub_83A13ED8);
PPC_FUNC_IMPL(__imp__sub_83A13ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83A13EE0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r28,360(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// divwu r9,r6,r10
	ctx.r9.u32 = PPCDivide(ctx.r6.u32, ctx.r10.u32);
	// divwu r8,r9,r28
	ctx.r8.u32 = PPCDivide(ctx.r9.u32, ctx.r28.u32);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a13f24
	if (!cr6.lt) goto loc_83A13F24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A13F24:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83a14088
	if (!cr6.gt) goto loc_83A14088;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r22,0
	ctx.r22.s64 = 0;
	// mullw r23,r10,r28
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// mullw r24,r11,r28
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
loc_83A13F48:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mullw r11,r23,r4
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r4.s32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x83A13F74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r8,r25,r28
	ctx.r8.u64 = ctx.r25.u64 + ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r21
	ctx.r26.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// ble cr6,0x83a14018
	if (!cr6.gt) goto loc_83A14018;
loc_83A13F94:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A13FB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// mullw r9,r4,r28
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r27,r9,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r9.s64;
	// subf r29,r9,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r9.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x83A13FDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,520(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// srawi r10,r17,1
	xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 1;
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r6,r28,r7
	ctx.r6.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// subf r29,r6,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r6.s64;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// bgt cr6,0x83a13f94
	if (cr6.gt) goto loc_83A13F94;
loc_83A14018:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,344(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r8,520(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mullw r7,r28,r9
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// lwzx r4,r22,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// subf r4,r7,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r7.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A14068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,344(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 344);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r25,r28
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, xer);
	// stwx r20,r22,r3
	PPC_STORE_U32(ctx.r22.u32 + ctx.r3.u32, ctx.r20.u32);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// blt cr6,0x83a13f48
	if (cr6.lt) goto loc_83A13F48;
loc_83A14088:
	// lhz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sth r10,0(r18)
	PPC_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A140A0"))) PPC_WEAK_FUNC(sub_83A140A0);
PPC_FUNC_IMPL(__imp__sub_83A140A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83A140A8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,332(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,360(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// lwz r15,328(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a14154
	if (!cr6.lt) goto loc_83A14154;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a14140
	if (cr6.eq) goto loc_83A14140;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a14140
	if (!cr6.gt) goto loc_83A14140;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83A14100:
	// lhz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83A14128;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,344(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 344);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// stwx r3,r8,r28
	PPC_STORE_U32(ctx.r8.u32 + ctx.r28.u32, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// blt cr6,0x83a14100
	if (cr6.lt) goto loc_83A14100;
loc_83A14140:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r17)
	PPC_STORE_U16(ctx.r17.u32 + 0, ctx.r11.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83A14154:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r26,r8,r15
	ctx.r26.s32 = PPCDivide(ctx.r8.s32, ctx.r15.s32);
	// divw r7,r6,r9
	ctx.r7.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// addi r14,r26,1
	ctx.r14.s64 = ctx.r26.s64 + 1;
	// divw r6,r7,r30
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	// cmpw cr6,r6,r14
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r14.s32, xer);
	// bge cr6,0x83a14184
	if (!cr6.lt) goto loc_83A14184;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83A14184:
	// mullw r10,r26,r15
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r15.s32);
	// add r16,r10,r11
	ctx.r16.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// divw r27,r16,r24
	ctx.r27.s32 = PPCDivide(ctx.r16.s32, ctx.r24.s32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a141e0
	if (!cr6.gt) goto loc_83A141E0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83A141A0:
	// lhz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83A141C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,348(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 348);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// stwx r3,r28,r8
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// blt cr6,0x83a141a0
	if (cr6.lt) goto loc_83A141A0;
loc_83A141E0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r25,r10,r20
	ctx.r25.u64 = ctx.r10.u64 + ctx.r20.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bgt cr6,0x83a14200
	if (cr6.gt) goto loc_83A14200;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_83A14200:
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r22,r10,r20
	ctx.r22.u64 = ctx.r10.u64 + ctx.r20.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// ble cr6,0x83a1421c
	if (!cr6.gt) goto loc_83A1421C;
	// subf r18,r26,r27
	ctx.r18.s64 = ctx.r27.s64 - ctx.r26.s64;
loc_83A1421C:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r19,r11,r20
	ctx.r19.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mullw r11,r27,r24
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r24.s32);
	// subf r27,r11,r16
	ctx.r27.s64 = ctx.r16.s64 - ctx.r11.s64;
	// cmplw cr6,r25,r19
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, xer);
	// blt cr6,0x83a1430c
	if (cr6.lt) goto loc_83A1430C;
loc_83A14234:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a142cc
	if (!cr6.gt) goto loc_83A142CC;
	// subf r23,r27,r24
	ctx.r23.s64 = ctx.r24.s64 - ctx.r27.s64;
	// neg r28,r30
	ctx.r28.s64 = -ctx.r30.s64;
loc_83A14248:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83a14274
	if (cr6.eq) goto loc_83A14274;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1426C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x83a14278
	goto loc_83A14278;
loc_83A14274:
	// li r26,0
	ctx.r26.s64 = 0;
loc_83A14278:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mullw r11,r3,r23
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r23.s32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mullw r10,r26,r27
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// divw r3,r9,r24
	ctx.r3.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x83A142BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// blt cr6,0x83a14248
	if (cr6.lt) goto loc_83A14248;
loc_83A142CC:
	// subf. r27,r15,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r15.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt 0x83a142f8
	if (cr0.gt) goto loc_83A142F8;
	// subf r11,r24,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r24.s64;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r8,r24
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r24.s32);
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// subf r27,r6,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r6.s64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_83A142F8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r25,r19
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r19.u32, xer);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r22,r10,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r10.s64;
	// bge cr6,0x83a14234
	if (!cr6.lt) goto loc_83A14234;
loc_83A1430C:
	// lwz r11,340(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 340);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a14390
	if (!cr6.gt) goto loc_83A14390;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// bge cr6,0x83a14390
	if (!cr6.lt) goto loc_83A14390;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a143b8
	if (!cr6.gt) goto loc_83A143B8;
	// subf r26,r27,r24
	ctx.r26.s64 = ctx.r24.s64 - ctx.r27.s64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83A14334:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,344(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 344);
	// mullw r10,r3,r27
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// lwz r8,520(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwzx r7,r9,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// mullw r11,r7,r26
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// divw r3,r3,r24
	ctx.r3.s32 = PPCDivide(ctx.r3.s32, ctx.r24.s32);
	// bctrl 
	ctx.lr = 0x83A14380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// blt cr6,0x83a14334
	if (cr6.lt) goto loc_83A14334;
loc_83A14390:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a143b8
	if (!cr6.gt) goto loc_83A143B8;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A143A0:
	// lwz r10,348(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 348);
	// lwz r9,344(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 344);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a143a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A143A0;
loc_83A143B8:
	// lhz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// subf r11,r10,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r10.s64;
	// add r9,r11,r15
	ctx.r9.u64 = ctx.r11.u64 + ctx.r15.u64;
	// stw r9,340(r21)
	PPC_STORE_U32(ctx.r21.u32 + 340, ctx.r9.u32);
	// beq cr6,0x83a143f4
	if (cr6.eq) goto loc_83A143F4;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mullw r9,r10,r18
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mullw r8,r14,r10
	ctx.r8.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A143F4;
	sub_831CE980(ctx, base);
loc_83A143F4:
	// sth r14,0(r17)
	PPC_STORE_U16(ctx.r17.u32 + 0, ctx.r14.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A14404"))) PPC_WEAK_FUNC(sub_83A14404);
PPC_FUNC_IMPL(__imp__sub_83A14404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A14408"))) PPC_WEAK_FUNC(sub_83A14408);
PPC_FUNC_IMPL(__imp__sub_83A14408) {
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
	ctx.lr = 0x83A14410;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce774
	ctx.lr = 0x83A14418;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r19,360(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r31,384(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lhz r20,34(r11)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// beq cr6,0x83a14a44
	if (cr6.eq) goto loc_83A14A44;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a14454
	if (cr6.eq) goto loc_83A14454;
	// li r19,6
	ctx.r19.s64 = 6;
loc_83A14454:
	// cmpwi cr6,r20,6
	cr6.compare<int32_t>(ctx.r20.s32, 6, xer);
	// bne cr6,0x83a14684
	if (!cr6.eq) goto loc_83A14684;
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(ctx.r19.s32, 2, xer);
	// bne cr6,0x83a14684
	if (!cr6.eq) goto loc_83A14684;
	// lwz r10,372(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// blt cr6,0x83a14604
	if (cr6.lt) goto loc_83A14604;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
loc_83A144B0:
	// lfs f2,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f30,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f31,f9,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f2,f31,f3,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f1,f30,f11,f1
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f2,f30,f5,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f1,f29,f12,f1
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f2,f29,f6,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f1,f28,f13,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f28,f7,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f1,f27,f0,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,0(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmadds f2,f27,f8,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 + ctx.f2.f64));
	// stfs f2,4(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f1,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f29.f64));
	// lfs f27,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f30.f64));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,8(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f2.f64));
	// stfs f2,12(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f1,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f29.f64));
	// lfs f27,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f30.f64));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,16(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f2.f64));
	// stfs f2,20(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// lfs f1,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,84(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,80(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,88(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f29.f64));
	// lfs f27,76(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f27.f64 = double(temp.f32);
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f30.f64));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,24(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f2.f64));
	// stfs f2,28(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 28, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a144b0
	if (cr6.lt) goto loc_83A144B0;
loc_83A14604:
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x83a14a44
	if (!cr6.lt) goto loc_83A14A44;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A1461C:
	// lfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f2,f4
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f29,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfsu f2,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f2,f9,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f2,f2,f3,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f30.f64));
	// fmadds f1,f27,f11,f1
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f2,f27,f5,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f1,f28,f12,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f2,f28,f6,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f1,f29,f13,f1
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f29,f7,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f1,f31,f0,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f2,f31,f8,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 + ctx.f2.f64));
	// stfsu f2,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a1461c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1461C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7c0
	ctx.lr = 0x83A14680;
	__restfpr_27(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83A14684:
	// cmpw cr6,r20,r19
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, xer);
	// blt cr6,0x83a14864
	if (cr6.lt) goto loc_83A14864;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83a14a44
	if (!cr6.gt) goto loc_83A14A44;
	// neg r11,r19
	ctx.r11.s64 = -ctx.r19.s64;
	// neg r10,r20
	ctx.r10.s64 = -ctx.r20.s64;
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r26,r6,r31
	ctx.r26.s64 = ctx.r31.s64 - ctx.r6.s64;
	// subfic r28,r4,-8
	xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r28.s64 = -8 - ctx.r4.s64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
loc_83A146B8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A146C8;
	sub_831CDCF0(ctx, base);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x83a147c8
	if (!cr6.gt) goto loc_83A147C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_83A146D8:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	cr6.compare<int32_t>(ctx.r20.s32, 4, xer);
	// blt cr6,0x83a14784
	if (cr6.lt) goto loc_83A14784;
	// addi r5,r20,-3
	ctx.r5.s64 = ctx.r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
loc_83A146F4:
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f10,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lwzx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfsx f3,r11,r31
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsx f0,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f2,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f3.f64));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// blt cr6,0x83a146f4
	if (cr6.lt) goto loc_83A146F4;
loc_83A14784:
	// cmpw cr6,r8,r20
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, xer);
	// bge cr6,0x83a147bc
	if (!cr6.lt) goto loc_83A147BC;
	// subf r9,r8,r20
	ctx.r9.s64 = ctx.r20.s64 - ctx.r8.s64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A14798:
	// lwz r9,372(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// lfsx f0,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x83a14798
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A14798;
loc_83A147BC:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83a146d8
	if (!cr0.eq) goto loc_83A146D8;
loc_83A147C8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	cr6.compare<int32_t>(ctx.r19.s32, 4, xer);
	// blt cr6,0x83a14810
	if (cr6.lt) goto loc_83A14810;
	// addi r8,r19,-3
	ctx.r8.s64 = ctx.r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_83A147E0:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r26,r11
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
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
	// blt cr6,0x83a147e0
	if (cr6.lt) goto loc_83A147E0;
loc_83A14810:
	// cmpw cr6,r9,r19
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, xer);
	// bge cr6,0x83a14838
	if (!cr6.lt) goto loc_83A14838;
	// subf r10,r9,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A14828:
	// lfsx f0,r26,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a14828
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A14828;
loc_83A14838:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// add r29,r23,r29
	ctx.r29.u64 = ctx.r23.u64 + ctx.r29.u64;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// bne 0x83a146b8
	if (!cr0.eq) goto loc_83A146B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7c0
	ctx.lr = 0x83A14860;
	__restfpr_27(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83A14864:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// mullw r9,r11,r19
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r4
	ctx.r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r9,r6
	ctx.r26.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a14a44
	if (cr6.lt) goto loc_83A14A44;
	// neg r11,r19
	ctx.r11.s64 = -ctx.r19.s64;
	// neg r10,r20
	ctx.r10.s64 = -ctx.r20.s64;
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r26,r31
	ctx.r27.s64 = ctx.r31.s64 - ctx.r26.s64;
	// subfic r29,r28,-8
	xer.ca = ctx.r28.u32 <= 4294967288;
	ctx.r29.s64 = -8 - ctx.r28.s64;
loc_83A148AC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A148BC;
	sub_831CDCF0(ctx, base);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x83a149bc
	if (!cr6.gt) goto loc_83A149BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_83A148CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	cr6.compare<int32_t>(ctx.r20.s32, 4, xer);
	// blt cr6,0x83a14978
	if (cr6.lt) goto loc_83A14978;
	// addi r5,r20,-3
	ctx.r5.s64 = ctx.r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
loc_83A148E8:
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f10,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfsx f3,r11,r31
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfsx f0,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f1,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x83a148e8
	if (cr6.lt) goto loc_83A148E8;
loc_83A14978:
	// cmpw cr6,r8,r20
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, xer);
	// bge cr6,0x83a149b0
	if (!cr6.lt) goto loc_83A149B0;
	// subf r9,r8,r20
	ctx.r9.s64 = ctx.r20.s64 - ctx.r8.s64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A1498C:
	// lwz r9,372(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x83a1498c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1498C;
loc_83A149B0:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x83a148cc
	if (!cr0.eq) goto loc_83A148CC;
loc_83A149BC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	cr6.compare<int32_t>(ctx.r19.s32, 4, xer);
	// blt cr6,0x83a14a04
	if (cr6.lt) goto loc_83A14A04;
	// addi r8,r19,-3
	ctx.r8.s64 = ctx.r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_83A149D4:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
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
	// blt cr6,0x83a149d4
	if (cr6.lt) goto loc_83A149D4;
loc_83A14A04:
	// cmpw cr6,r9,r19
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, xer);
	// bge cr6,0x83a14a2c
	if (!cr6.lt) goto loc_83A14A2C;
	// subf r10,r9,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A14A1C:
	// lfsx f0,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a14a1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A14A1C;
loc_83A14A2C:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// subf r28,r23,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r23.s64;
	// subf r29,r21,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r21.s64;
	// subf r26,r24,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r24.s64;
	// subf r27,r22,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r22.s64;
	// bge 0x83a148ac
	if (!cr0.lt) goto loc_83A148AC;
loc_83A14A44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce7c0
	ctx.lr = 0x83A14A54;
	__restfpr_27(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A14A58"))) PPC_WEAK_FUNC(sub_83A14A58);
PPC_FUNC_IMPL(__imp__sub_83A14A58) {
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
	ctx.lr = 0x83A14A60;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce740
	ctx.lr = 0x83A14A68;
	__savefpr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r20,360(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r27,384(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lhz r25,34(r31)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// beq cr6,0x83a15038
	if (cr6.eq) goto loc_83A15038;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a14aa4
	if (cr6.eq) goto loc_83A14AA4;
	// li r20,6
	ctx.r20.s64 = 6;
loc_83A14AA4:
	// cmpwi cr6,r25,6
	cr6.compare<int32_t>(ctx.r25.s32, 6, xer);
	// bne cr6,0x83a14d5c
	if (!cr6.eq) goto loc_83A14D5C;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(ctx.r20.s32, 2, xer);
	// bne cr6,0x83a14d5c
	if (!cr6.eq) goto loc_83A14D5C;
	// lwz r11,372(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 372);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f18.f64 = double(temp.f32);
	// ble cr6,0x83a15038
	if (!cr6.gt) goto loc_83A15038;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_83A14B10:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14B2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A14B5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwz r7,524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,2
	ctx.r6.s64 = 2;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f17,f11
	ctx.f17.f64 = double(float(ctx.f11.f64));
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A14B8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,3
	ctx.r6.s64 = 3;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f16,f9
	ctx.f16.f64 = double(float(ctx.f9.f64));
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f8,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f15,f7
	ctx.f15.f64 = double(float(ctx.f7.f64));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A14BEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwz r7,524(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r6,5
	ctx.r6.s64 = 5;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f6,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f14,f5
	ctx.f14.f64 = double(float(ctx.f5.f64));
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A14C1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// fmuls f4,f14,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f14.f64 * ctx.f25.f64));
	// fmuls f3,f14,f19
	ctx.f3.f64 = double(float(ctx.f14.f64 * ctx.f19.f64));
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f2,128(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmadds f13,f0,f24,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f4.f64));
	// fmadds f12,f0,f18,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f18.f64 + ctx.f3.f64));
	// fmadds f11,f15,f26,f13
	ctx.f11.f64 = double(float(ctx.f15.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmadds f10,f15,f20,f12
	ctx.f10.f64 = double(float(ctx.f15.f64 * ctx.f20.f64 + ctx.f12.f64));
	// fmadds f9,f16,f27,f11
	ctx.f9.f64 = double(float(ctx.f16.f64 * ctx.f27.f64 + ctx.f11.f64));
	// fmadds f8,f17,f28,f9
	ctx.f8.f64 = double(float(ctx.f17.f64 * ctx.f28.f64 + ctx.f9.f64));
	// fmadds f0,f31,f29,f8
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 + ctx.f8.f64));
	// fmadds f7,f16,f21,f10
	ctx.f7.f64 = double(float(ctx.f16.f64 * ctx.f21.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// fmadds f6,f17,f22,f7
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f22.f64 + ctx.f7.f64));
	// lfs f17,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f31,f31,f23,f6
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f23.f64 + ctx.f6.f64));
	// bge cr6,0x83a14c80
	if (!cr6.lt) goto loc_83A14C80;
	// fsubs f0,f0,f17
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x83a14c90
	goto loc_83A14C90;
loc_83A14C80:
	// fadds f0,f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_83A14C90:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a14ca8
	if (cr6.lt) goto loc_83A14CA8;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a14cac
	if (!cr6.gt) goto loc_83A14CAC;
loc_83A14CA8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83A14CAC:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14CC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x83a14ce0
	if (!cr6.lt) goto loc_83A14CE0;
	// fsubs f0,f31,f17
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x83a14cf0
	goto loc_83A14CF0;
loc_83A14CE0:
	// fadds f0,f31,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_83A14CF0:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a14d08
	if (cr6.lt) goto loc_83A14D08;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a14d0c
	if (!cr6.gt) goto loc_83A14D0C;
loc_83A14D08:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83A14D0C:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14D24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne 0x83a14b10
	if (!cr0.eq) goto loc_83A14B10;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce78c
	ctx.lr = 0x83A14D58;
	__restfpr_14(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83A14D5C:
	// cmpw cr6,r25,r20
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, xer);
	// blt cr6,0x83a14ecc
	if (cr6.lt) goto loc_83A14ECC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83a15038
	if (!cr6.gt) goto loc_83A15038;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_83A14D84:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A14D94;
	sub_831CDCF0(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// ble cr6,0x83a14e18
	if (!cr6.gt) goto loc_83A14E18;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_83A14DA4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a14e0c
	if (!cr6.gt) goto loc_83A14E0C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A14DB4:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14DD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,372(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 372);
	// lfsx f0,r28,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lfsx f10,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fmadds f9,f11,f10,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfsx f9,r28,r27
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, temp.u32);
	// blt cr6,0x83a14db4
	if (cr6.lt) goto loc_83A14DB4;
loc_83A14E0C:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x83a14da4
	if (!cr0.eq) goto loc_83A14DA4;
loc_83A14E18:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// ble cr6,0x83a14e9c
	if (!cr6.gt) goto loc_83A14E9C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83A14E28:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x83a14e48
	if (!cr6.lt) goto loc_83A14E48;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x83a14e58
	goto loc_83A14E58;
loc_83A14E48:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_83A14E58:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a14e70
	if (cr6.lt) goto loc_83A14E70;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a14e74
	if (!cr6.gt) goto loc_83A14E74;
loc_83A14E70:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83A14E74:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14E8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r20
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, xer);
	// blt cr6,0x83a14e28
	if (cr6.lt) goto loc_83A14E28;
loc_83A14E9C:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bne 0x83a14d84
	if (!cr0.eq) goto loc_83A14D84;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce78c
	ctx.lr = 0x83A14EC8;
	__restfpr_14(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83A14ECC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r22,r5,-1
	ctx.r22.s64 = ctx.r5.s64 + -1;
	// mullw r10,r22,r11
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r20.s32);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// blt cr6,0x83a15038
	if (cr6.lt) goto loc_83A15038;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_83A14F04:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A14F14;
	sub_831CDCF0(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// ble cr6,0x83a14f98
	if (!cr6.gt) goto loc_83A14F98;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_83A14F24:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a14f8c
	if (!cr6.gt) goto loc_83A14F8C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A14F34:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A14F50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,372(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 372);
	// lfsx f0,r28,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lfsx f13,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// fmadds f9,f10,f13,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f9,r28,r27
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, temp.u32);
	// blt cr6,0x83a14f34
	if (cr6.lt) goto loc_83A14F34;
loc_83A14F8C:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x83a14f24
	if (!cr0.eq) goto loc_83A14F24;
loc_83A14F98:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// ble cr6,0x83a1501c
	if (!cr6.gt) goto loc_83A1501C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83A14FA8:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x83a14fc8
	if (!cr6.lt) goto loc_83A14FC8;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x83a14fd8
	goto loc_83A14FD8;
loc_83A14FC8:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_83A14FD8:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a14ff0
	if (cr6.lt) goto loc_83A14FF0;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// ble cr6,0x83a14ff4
	if (!cr6.gt) goto loc_83A14FF4;
loc_83A14FF0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_83A14FF4:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1500C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r20
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, xer);
	// blt cr6,0x83a14fa8
	if (cr6.lt) goto loc_83A14FA8;
loc_83A1501C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// mullw r10,r11,r25
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// mullw r9,r11,r20
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// subf r26,r10,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r10.s64;
	// subf r23,r9,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r9.s64;
	// bge 0x83a14f04
	if (!cr0.lt) goto loc_83A14F04;
loc_83A15038:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831ce78c
	ctx.lr = 0x83A15048;
	__restfpr_14(ctx, base);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1504C"))) PPC_WEAK_FUNC(sub_83A1504C);
PPC_FUNC_IMPL(__imp__sub_83A1504C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A15050"))) PPC_WEAK_FUNC(sub_83A15050);
PPC_FUNC_IMPL(__imp__sub_83A15050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83A15058;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r26,360(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lhz r21,0(r5)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r25,428(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// li r19,0
	ctx.r19.s64 = 0;
	// lhz r24,34(r30)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a150b4
	if (!cr6.eq) goto loc_83A150B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83A150B4:
	// lwz r11,424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a150c4
	if (cr6.eq) goto loc_83A150C4;
	// li r24,6
	ctx.r24.s64 = 6;
loc_83A150C4:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x83a15238
	if (!cr6.gt) goto loc_83A15238;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
loc_83A150E0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x83a15140
	if (!cr6.gt) goto loc_83A15140;
loc_83A150EC:
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhz r5,110(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A15108;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,432(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// lwz r8,148(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mullw r11,r31,r9
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, xer);
	// stfsx f12,r6,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x83a150ec
	if (cr6.lt) goto loc_83A150EC;
loc_83A15140:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,432(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// beq cr6,0x83a15168
	if (cr6.eq) goto loc_83A15168;
	// addi r11,r21,-1
	ctx.r11.s64 = ctx.r21.s64 + -1;
	// cmpw cr6,r20,r11
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, xer);
	// bne cr6,0x83a1522c
	if (!cr6.eq) goto loc_83A1522C;
loc_83A15168:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 428);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a2a180
	ctx.lr = 0x83A15178;
	sub_83A2A180(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bgt cr6,0x83a15250
	if (cr6.gt) goto loc_83A15250;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a15224
	if (!cr6.gt) goto loc_83A15224;
loc_83A15194:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83a1520c
	if (!cr6.gt) goto loc_83A1520C;
loc_83A151A0:
	// lwz r11,432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// lwz r10,148(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x83a151d4
	if (!cr6.lt) goto loc_83A151D4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x83a151e4
	goto loc_83A151E4;
loc_83A151D4:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_83A151E4:
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A151FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// blt cr6,0x83a151a0
	if (cr6.lt) goto loc_83A151A0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83A1520C:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a15194
	if (cr6.lt) goto loc_83A15194;
loc_83A15224:
	// add r22,r10,r22
	ctx.r22.u64 = ctx.r10.u64 + ctx.r22.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A1522C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpw cr6,r20,r21
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r21.s32, xer);
	// blt cr6,0x83a150e0
	if (cr6.lt) goto loc_83A150E0;
loc_83A15238:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// sth r22,0(r18)
	PPC_STORE_U16(ctx.r18.u32 + 0, ctx.r22.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83A15250:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A15268"))) PPC_WEAK_FUNC(sub_83A15268);
PPC_FUNC_IMPL(__imp__sub_83A15268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A15270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x83a15290
	if (cr6.gt) goto loc_83A15290;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A15290:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a152f4
	if (!cr6.gt) goto loc_83A152F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A152A4:
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a152e0
	if (!cr6.eq) goto loc_83A152E0;
	// lwz r9,564(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r8,560(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r7,148(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lhz r6,34(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x83a2b510
	ctx.lr = 0x83A152D8;
	sub_83A2B510(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a152f4
	if (cr6.lt) goto loc_83A152F4;
loc_83A152E0:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a152a4
	if (cr6.lt) goto loc_83A152A4;
loc_83A152F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A152FC"))) PPC_WEAK_FUNC(sub_83A152FC);
PPC_FUNC_IMPL(__imp__sub_83A152FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A15300"))) PPC_WEAK_FUNC(sub_83A15300);
PPC_FUNC_IMPL(__imp__sub_83A15300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83a1531c
	if (cr6.gt) goto loc_83A1531C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
loc_83A1531C:
	// lwz r11,512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A15338"))) PPC_WEAK_FUNC(sub_83A15338);
PPC_FUNC_IMPL(__imp__sub_83A15338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83A15340;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83a15a94
	if (cr6.eq) goto loc_83A15A94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r22,4
	ctx.r22.s64 = 4;
	// li r19,2
	ctx.r19.s64 = 2;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// li r24,6
	ctx.r24.s64 = 6;
	// lfs f29,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f29.f64 = double(temp.f32);
	// li r18,5
	ctx.r18.s64 = 5;
	// li r20,8
	ctx.r20.s64 = 8;
	// li r23,-1
	ctx.r23.s64 = -1;
loc_83A15398:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83a15a88
	if (cr6.gt) goto loc_83A15A88;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a15450
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A15450;
	// bdzf 4*cr6+eq,0x83a15478
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A15478;
	// bdzf 4*cr6+eq,0x83a15a88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A15A88;
	// bdzf 4*cr6+eq,0x83a1552c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A1552C;
	// bne cr6,0x83a155f0
	if (!cr6.eq) goto loc_83A155F0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a2eea0
	ctx.lr = 0x83A153C8;
	sub_83A2EEA0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a15a94
	if (cr6.lt) goto loc_83A15A94;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bne cr6,0x83a15428
	if (!cr6.eq) goto loc_83A15428;
	// stw r21,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r21.u32);
	// sth r25,202(r11)
	PPC_STORE_U16(ctx.r11.u32 + 202, ctx.r25.u16);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// sth r25,150(r28)
	PPC_STORE_U16(ctx.r28.u32 + 150, ctx.r25.u16);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bgt cr6,0x83a15408
	if (cr6.gt) goto loc_83A15408;
	// stw r25,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r25.u32);
	// b 0x83a15a88
	goto loc_83A15A88;
loc_83A15408:
	// lwz r11,512(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 512);
	// stw r22,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r22.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a15a88
	if (cr6.eq) goto loc_83A15A88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A15424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a15a88
	goto loc_83A15A88;
loc_83A15428:
	// stw r19,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r19.u32);
	// sth r25,150(r28)
	PPC_STORE_U16(ctx.r28.u32 + 150, ctx.r25.u16);
	// stb r25,145(r28)
	PPC_STORE_U8(ctx.r28.u32 + 145, ctx.r25.u8);
	// stw r24,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r24.u32);
	// sth r25,148(r28)
	PPC_STORE_U16(ctx.r28.u32 + 148, ctx.r25.u16);
	// sth r25,202(r11)
	PPC_STORE_U16(ctx.r11.u32 + 202, ctx.r25.u16);
	// stw r25,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r25.u32);
	// stw r25,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r25.u32);
	// stw r25,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r25.u32);
	// b 0x83a15a88
	goto loc_83A15A88;
loc_83A15450:
	// lwz r11,508(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 508);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A15464;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a15a94
	if (cr6.lt) goto loc_83A15A94;
	// stw r18,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r18.u32);
	// b 0x83a15a88
	goto loc_83A15A88;
loc_83A15478:
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,150(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a15524
	if (!cr6.lt) goto loc_83A15524;
loc_83A15490:
	// lhz r11,150(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 150);
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = ctx.r6.s64 * 1776;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,40(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a154d8
	if (cr6.eq) goto loc_83A154D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83a30ad0
	ctx.lr = 0x83A154CC;
	sub_83A30AD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a15a94
	if (cr6.lt) goto loc_83A15A94;
loc_83A154D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stb r25,145(r28)
	PPC_STORE_U8(ctx.r28.u32 + 145, ctx.r25.u8);
	// stw r24,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r24.u32);
	// sth r25,148(r28)
	PPC_STORE_U16(ctx.r28.u32 + 148, ctx.r25.u16);
	// sth r25,202(r11)
	PPC_STORE_U16(ctx.r11.u32 + 202, ctx.r25.u16);
	// stw r25,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r25.u32);
	// stw r25,200(r28)
	PPC_STORE_U32(ctx.r28.u32 + 200, ctx.r25.u32);
	// stw r25,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r25.u32);
	// lhz r10,150(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,150(r28)
	PPC_STORE_U16(ctx.r28.u32 + 150, ctx.r8.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// blt cr6,0x83a15490
	if (cr6.lt) goto loc_83A15490;
loc_83A15524:
	// stw r22,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r22.u32);
	// b 0x83a15a88
	goto loc_83A15A88;
loc_83A1552C:
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a15a84
	if (!cr6.gt) goto loc_83A15A84;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A15544:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = ctx.r7.s64 * 1776;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83a155b0
	if (cr6.eq) goto loc_83A155B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83a31078
	ctx.lr = 0x83A15578;
	sub_83A31078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a15a94
	if (cr6.lt) goto loc_83A15A94;
	// stw r25,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a155cc
	if (!cr6.eq) goto loc_83A155CC;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83a28590
	ctx.lr = 0x83A155AC;
	sub_83A28590(ctx, base);
	// b 0x83a155cc
	goto loc_83A155CC;
loc_83A155B0:
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83A155C8;
	sub_831CDCF0(ctx, base);
	// stw r25,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
loc_83A155CC:
	// lhz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a15544
	if (cr6.lt) goto loc_83A15544;
	// b 0x83a15a84
	goto loc_83A15A84;
loc_83A155F0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a15660
	if (!cr6.eq) goto loc_83A15660;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a15660
	if (cr6.eq) goto loc_83A15660;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A15610:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = ctx.r7.s64 * 1776;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83a15644
	if (cr6.eq) goto loc_83A15644;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x83a28590
	ctx.lr = 0x83A15644;
	sub_83A28590(ctx, base);
loc_83A15644:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a15610
	if (cr6.lt) goto loc_83A15610;
loc_83A15660:
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x83a2d880
	ctx.lr = 0x83A15668;
	sub_83A2D880(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1573c
	if (cr6.eq) goto loc_83A1573C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A15680:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = ctx.r7.s64 * 1776;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83a156c8
	if (cr6.eq) goto loc_83A156C8;
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,52(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A156B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a15a94
	if (cr6.lt) goto loc_83A15A94;
	// b 0x83a15720
	goto loc_83A15720;
loc_83A156C8:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a156ec
	if (cr6.eq) goto loc_83A156EC;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lhz r10,118(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// sraw r11,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x83a15710
	goto loc_83A15710;
loc_83A156EC:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lhz r11,118(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 118);
	// beq cr6,0x83a1570c
	if (cr6.eq) goto loc_83A1570C;
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x83a15710
	goto loc_83A15710;
loc_83A1570C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_83A15710:
	// lwz r3,56(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A15720;
	sub_831CDCF0(ctx, base);
loc_83A15720:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a15680
	if (cr6.lt) goto loc_83A15680;
loc_83A1573C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a15268
	ctx.lr = 0x83A15744;
	sub_83A15268(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a15a94
	if (cr6.lt) goto loc_83A15A94;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a2dce0
	ctx.lr = 0x83A1575C;
	sub_83A2DCE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a2dce0
	ctx.lr = 0x83A15768;
	sub_83A2DCE0(ctx, base);
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a157d0
	if (!cr6.gt) goto loc_83A157D0;
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A1578C:
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = ctx.r7.s64 * 1776;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83a157cc
	if (!cr6.eq) goto loc_83A157CC;
	// lhz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a1578c
	if (cr6.lt) goto loc_83A1578C;
	// b 0x83a157d0
	goto loc_83A157D0;
loc_83A157CC:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_83A157D0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a1588c
	if (!cr6.gt) goto loc_83A1588C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83a1588c
	if (!cr6.eq) goto loc_83A1588C;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1588c
	if (cr6.eq) goto loc_83A1588C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A157F8:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lhz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 108);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r10,r5,1776
	ctx.r10.s64 = ctx.r5.s64 * 1776;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bne cr6,0x83a15848
	if (!cr6.eq) goto loc_83A15848;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83A15848;
	sub_831CDCF0(ctx, base);
loc_83A15848:
	// sth r23,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r23.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x83a2a788
	ctx.lr = 0x83A15864;
	sub_83A2A788(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a15a94
	if (cr6.lt) goto loc_83A15A94;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a157f8
	if (cr6.lt) goto loc_83A157F8;
loc_83A1588C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a15908
	if (!cr6.eq) goto loc_83A15908;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a15908
	if (cr6.eq) goto loc_83A15908;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A158AC:
	// lwz r8,584(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r7,472(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = ctx.r5.s64 * 1776;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83A158EC;
	sub_831CDCF0(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// lhz r5,34(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// blt cr6,0x83a158ac
	if (cr6.lt) goto loc_83A158AC;
loc_83A15908:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83a1591c
	if (cr6.eq) goto loc_83A1591C;
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a15a84
	if (cr6.eq) goto loc_83A15A84;
loc_83A1591C:
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a15a84
	if (cr6.eq) goto loc_83A15A84;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A15930:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = ctx.r6.s64 * 1776;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x83a1595c
	if (!cr6.eq) goto loc_83A1595C;
	// lfs f31,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f31.f64 = double(temp.f32);
	// b 0x83a15978
	goto loc_83A15978;
loc_83A1595C:
	// lhz r11,118(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f29,f12
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f12.f64));
loc_83A15978:
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a159cc
	if (cr6.eq) goto loc_83A159CC;
	// lhz r11,118(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// lwz r10,332(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,328(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// srawi r6,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divw r4,r5,r7
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r7.s32);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ble 0x83a159cc
	if (!cr0.gt) goto loc_83A159CC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A159BC:
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f30,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a159bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A159BC;
loc_83A159CC:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a159e4
	if (!cr6.eq) goto loc_83A159E4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a15a68
	if (!cr6.gt) goto loc_83A15A68;
loc_83A159E4:
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// lhz r10,118(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83a15a20
	if (!cr6.gt) goto loc_83A15A20;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A15A20;
	sub_831CDCF0(ctx, base);
loc_83A15A20:
	// lwz r9,464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lhz r6,114(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 114);
	// lhz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r9,440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r8,532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r7,516(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bctrl 
	ctx.lr = 0x83A15A68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A15A68:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a15930
	if (cr6.lt) goto loc_83A15930;
loc_83A15A84:
	// stw r20,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r20.u32);
loc_83A15A88:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a15398
	if (!cr6.eq) goto loc_83A15398;
loc_83A15A94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A15AAC"))) PPC_WEAK_FUNC(sub_83A15AAC);
PPC_FUNC_IMPL(__imp__sub_83A15AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A15AB0"))) PPC_WEAK_FUNC(sub_83A15AB0);
PPC_FUNC_IMPL(__imp__sub_83A15AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a15ae0
	if (!cr6.eq) goto loc_83A15AE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
loc_83A15AD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83A15AE0:
	// lhz r11,580(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a15ad0
	if (!cr6.gt) goto loc_83A15AD0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A15AFC:
	// lwz r8,584(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 584);
	// lwz r11,320(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 320);
	// lwz r31,256(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mulli r10,r10,1776
	ctx.r10.s64 = ctx.r10.s64 * 1776;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r10,114(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 114);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lhzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r30.u32);
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a15b6c
	if (cr6.lt) goto loc_83A15B6C;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r3,216(r5)
	PPC_STORE_U32(ctx.r5.u32 + 216, ctx.r3.u32);
	// lwz r7,424(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r7,r10
	PPC_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u16);
	// b 0x83a15be0
	goto loc_83A15BE0;
loc_83A15B6C:
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sth r4,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r4.u16);
	// lwz r7,424(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r31,12(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lhzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// lwz r8,424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r7,256(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// lwz r31,12(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bgt cr6,0x83a15c10
	if (cr6.gt) goto loc_83A15C10;
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
loc_83A15BE0:
	// lhz r10,580(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 580);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a15afc
	if (cr6.lt) goto loc_83A15AFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83A15C10:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A15C24"))) PPC_WEAK_FUNC(sub_83A15C24);
PPC_FUNC_IMPL(__imp__sub_83A15C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A15C28"))) PPC_WEAK_FUNC(sub_83A15C28);
PPC_FUNC_IMPL(__imp__sub_83A15C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83A15C30;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r17,56(r5)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r19,r11,-25208
	ctx.r19.s64 = ctx.r11.s64 + -25208;
	// dcbt r0,r19
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r19
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a15c7c
	if (!cr6.gt) goto loc_83A15C7C;
	// lhz r11,118(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a15c94
	if (cr6.gt) goto loc_83A15C94;
loc_83A15C7C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A15C94:
	// rlwinm r9,r10,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// li r24,0
	ctx.r24.s64 = 0;
	// divw r23,r9,r11
	ctx.r23.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// ble cr6,0x83a15cb8
	if (!cr6.gt) goto loc_83A15CB8;
loc_83A15CA8:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// srw r11,r23,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bgt cr6,0x83a15ca8
	if (cr6.gt) goto loc_83A15CA8;
loc_83A15CB8:
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r11,0
	ctx.r11.s64 = 0;
	// divw r10,r9,r10
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x83a15cdc
	if (!cr6.gt) goto loc_83A15CDC;
loc_83A15CCC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x83a15ccc
	if (cr6.gt) goto loc_83A15CCC;
loc_83A15CDC:
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 * 116;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x83a15d04
	if (!cr6.gt) goto loc_83A15D04;
loc_83A15CF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x83a15cf4
	if (cr6.gt) goto loc_83A15CF4;
loc_83A15D04:
	// lhz r9,202(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mullw r4,r6,r23
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r23.s32);
	// lwzx r21,r7,r8
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// srawi r11,r4,12
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r18,r3
	ctx.r18.s64 = ctx.r3.s16;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x83a15d64
	if (cr6.lt) goto loc_83A15D64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mullw r8,r9,r23
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// srawi r9,r8,12
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
loc_83A15D54:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a15d54
	if (!cr6.lt) goto loc_83A15D54;
loc_83A15D64:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A15D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a160d8
	if (cr6.lt) goto loc_83A160D8;
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r22,r18
	ctx.r22.s64 = ctx.r18.s16;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r10,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r10.u16);
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, xer);
	// bge cr6,0x83a15f84
	if (!cr6.lt) goto loc_83A15F84;
	// li r26,1
	ctx.r26.s64 = 1;
loc_83A15DB8:
	// cmpw cr6,r30,r21
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a15f84
	if (!cr6.lt) goto loc_83A15F84;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// mullw r8,r11,r23
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r8,12
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x83a15e00
	if (cr6.lt) goto loc_83A15E00;
	// lhz r9,202(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r23
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r23.s32);
	// srawi r8,r7,12
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 12;
loc_83A15DF0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a15df0
	if (!cr6.lt) goto loc_83A15DF0;
loc_83A15E00:
	// cmpw cr6,r30,r21
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a15f84
	if (!cr6.lt) goto loc_83A15F84;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x83a15e4c
	if (!cr6.eq) goto loc_83A15E4C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f30
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x83a31328
	ctx.lr = 0x83A15E44;
	sub_83A31328(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x83a15e74
	goto loc_83A15E74;
loc_83A15E4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a31328
	ctx.lr = 0x83A15E54;
	sub_83A31328(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f1
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
loc_83A15E74:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r24,12
	cr6.compare<int32_t>(ctx.r24.s32, 12, xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x83a15ea4
	if (!cr6.gt) goto loc_83A15EA4;
	// addi r10,r24,-13
	ctx.r10.s64 = ctx.r24.s64 + -13;
	// addi r8,r24,-12
	ctx.r8.s64 = ctx.r24.s64 + -12;
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r9,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sraw r6,r7,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r6.s64 = ctx.r7.s32 >> temp.u32;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// b 0x83a15eb4
	goto loc_83A15EB4;
loc_83A15EA4:
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// subfic r10,r24,12
	xer.ca = ctx.r24.u32 <= 12;
	ctx.r10.s64 = 12 - ctx.r24.s64;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
loc_83A15EB4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, xer);
	// ble cr6,0x83a15ecc
	if (!cr6.gt) goto loc_83A15ECC;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
loc_83A15ECC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a15edc
	if (cr6.eq) goto loc_83A15EDC;
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_83A15EDC:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r9,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r17.u32, temp.u32);
	// lwz r8,484(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A15F00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a160d8
	if (cr6.lt) goto loc_83A160D8;
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r10,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r10.u16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a15f70
	if (!cr6.lt) goto loc_83A15F70;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// bge cr6,0x83a15f54
	if (!cr6.lt) goto loc_83A15F54;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r19
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// b 0x83a15ecc
	goto loc_83A15ECC;
loc_83A15F54:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f30
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// b 0x83a15ecc
	goto loc_83A15ECC;
loc_83A15F70:
	// lhz r9,202(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r22
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, xer);
	// blt cr6,0x83a15db8
	if (cr6.lt) goto loc_83A15DB8;
loc_83A15F84:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r22
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, xer);
	// bne cr6,0x83a16030
	if (!cr6.eq) goto loc_83A16030;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a15ff4
	if (cr6.lt) goto loc_83A15FF4;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r10,r21
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a15fd8
	if (!cr6.lt) goto loc_83A15FD8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_83A15FB0:
	// mullw r8,r9,r23
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r6,r8,12
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 12;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// blt cr6,0x83a15fd8
	if (cr6.lt) goto loc_83A15FD8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r21
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, xer);
	// blt cr6,0x83a15fb0
	if (cr6.lt) goto loc_83A15FB0;
loc_83A15FD8:
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r5,r21
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r21.s32, xer);
	// bgt cr6,0x83a15ff4
	if (cr6.gt) goto loc_83A15FF4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a31328
	ctx.lr = 0x83A15FF0;
	sub_83A31328(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_83A15FF4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// beq cr6,0x83a16020
	if (cr6.eq) goto loc_83A16020;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_83A16020:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r17
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r17.u32, temp.u32);
loc_83A16030:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lhz r10,118(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bgt cr6,0x83a15c7c
	if (cr6.gt) goto loc_83A15C7C;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a16064
	if (!cr6.gt) goto loc_83A16064;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A16064;
	sub_831CDCF0(ctx, base);
loc_83A16064:
	// lhz r11,120(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83A16088;
	sub_831CDCF0(ctx, base);
	// lhz r7,202(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r22
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r22.s32, xer);
	// bne cr6,0x83a160b8
	if (!cr6.eq) goto loc_83A160B8;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,490(r25)
	PPC_STORE_U16(ctx.r25.u32 + 490, ctx.r11.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A160B8:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r9,490(r25)
	PPC_STORE_U16(ctx.r25.u32 + 490, ctx.r9.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A160D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A160EC"))) PPC_WEAK_FUNC(sub_83A160EC);
PPC_FUNC_IMPL(__imp__sub_83A160EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A160F0"))) PPC_WEAK_FUNC(sub_83A160F0);
PPC_FUNC_IMPL(__imp__sub_83A160F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A160F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,118(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 118);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,56(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a1625c
	if (!cr6.gt) goto loc_83A1625C;
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A1613C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16264
	if (cr6.lt) goto loc_83A16264;
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x83a16204
	if (!cr6.lt) goto loc_83A16204;
loc_83A1616C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83A1617C:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x83a16194
	if (cr6.eq) goto loc_83A16194;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_83A16194:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, temp.u32);
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A161B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16264
	if (cr6.lt) goto loc_83A16264;
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x83a161f4
	if (!cr6.lt) goto loc_83A161F4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x83a1617c
	goto loc_83A1617C;
loc_83A161F4:
	// lhz r9,202(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, xer);
	// blt cr6,0x83a1616c
	if (cr6.lt) goto loc_83A1616C;
loc_83A16204:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x83a16248
	if (!cr6.eq) goto loc_83A16248;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x83a16238
	if (cr6.eq) goto loc_83A16238;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_83A16238:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, temp.u32);
loc_83A16248:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a16264
	if (!cr6.gt) goto loc_83A16264;
loc_83A1625C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_83A16264:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bne cr6,0x83a16284
	if (!cr6.eq) goto loc_83A16284;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// sth r11,490(r29)
	PPC_STORE_U16(ctx.r29.u32 + 490, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A16284:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r9,490(r29)
	PPC_STORE_U16(ctx.r29.u32 + 490, ctx.r9.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1629C"))) PPC_WEAK_FUNC(sub_83A1629C);
PPC_FUNC_IMPL(__imp__sub_83A1629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A162A0"))) PPC_WEAK_FUNC(sub_83A162A0);
PPC_FUNC_IMPL(__imp__sub_83A162A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A162A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,118(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 118);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,56(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a16440
	if (!cr6.gt) goto loc_83A16440;
	// lwz r9,456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// sraw r30,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r30.s64 = ctx.r11.s32 >> temp.u32;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x83a162f0
	if (cr6.lt) goto loc_83A162F0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_83A162F0:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A16304;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16448
	if (cr6.lt) goto loc_83A16448;
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x83a163cc
	if (!cr6.lt) goto loc_83A163CC;
loc_83A16334:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_83A16344:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x83a1635c
	if (cr6.eq) goto loc_83A1635C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_83A1635C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, temp.u32);
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A16378;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16448
	if (cr6.lt) goto loc_83A16448;
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x83a163bc
	if (!cr6.lt) goto loc_83A163BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x83a16344
	goto loc_83A16344;
loc_83A163BC:
	// lhz r9,202(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, xer);
	// blt cr6,0x83a16334
	if (cr6.lt) goto loc_83A16334;
loc_83A163CC:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bge cr6,0x83a1642c
	if (!cr6.lt) goto loc_83A1642C;
loc_83A163D8:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A163EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16448
	if (cr6.lt) goto loc_83A16448;
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// sth r9,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r9.u16);
	// cmpw cr6,r9,r26
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, xer);
	// blt cr6,0x83a163d8
	if (cr6.lt) goto loc_83A163D8;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// blt cr6,0x83a163d8
	if (cr6.lt) goto loc_83A163D8;
loc_83A1642C:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a16448
	if (!cr6.gt) goto loc_83A16448;
loc_83A16440:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_83A16448:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// bne cr6,0x83a16468
	if (!cr6.eq) goto loc_83A16468;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// sth r11,490(r29)
	PPC_STORE_U16(ctx.r29.u32 + 490, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A16468:
	// lhz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r9,490(r29)
	PPC_STORE_U16(ctx.r29.u32 + 490, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A16480"))) PPC_WEAK_FUNC(sub_83A16480);
PPC_FUNC_IMPL(__imp__sub_83A16480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x83A16488;
	__savegprlr_16(ctx, base);
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83a16dcc
	if (cr6.eq) goto loc_83A16DCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32764
	ctx.r9.s64 = -2147221504;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r23,4
	ctx.r23.s64 = 4;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r18,2
	ctx.r18.s64 = 2;
	// lfs f29,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f29.f64 = double(temp.f32);
	// li r24,6
	ctx.r24.s64 = 6;
	// ori r20,r9,4
	ctx.r20.u64 = ctx.r9.u64 | 4;
	// li r16,5
	ctx.r16.s64 = 5;
	// li r19,8
	ctx.r19.s64 = 8;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_83A164F0:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83a16d9c
	if (cr6.gt) goto loc_83A16D9C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a16688
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A16688;
	// bdzf 4*cr6+eq,0x83a16878
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A16878;
	// bdzf 4*cr6+eq,0x83a16d9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A16D9C;
	// bdzf 4*cr6+eq,0x83a16d84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A16D84;
	// bne cr6,0x83a169ec
	if (!cr6.eq) goto loc_83A169EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a2eea0
	ctx.lr = 0x83A16520;
	sub_83A2EEA0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a165f8
	if (!cr6.eq) goto loc_83A165F8;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x83a2d880
	ctx.lr = 0x83A16540;
	sub_83A2D880(ctx, base);
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a165a8
	if (!cr6.gt) goto loc_83A165A8;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A1655C:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r8,472(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = ctx.r6.s64 * 1776;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x831cdcf0
	ctx.lr = 0x83A16588;
	sub_831CDCF0(ctx, base);
	// lhz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a1655c
	if (cr6.lt) goto loc_83A1655C;
loc_83A165A8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r22,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r22.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,202(r10)
	PPC_STORE_U16(ctx.r10.u32 + 202, ctx.r11.u16);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// sth r25,150(r29)
	PPC_STORE_U16(ctx.r29.u32 + 150, ctx.r25.u16);
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bgt cr6,0x83a165d8
	if (cr6.gt) goto loc_83A165D8;
	// stw r25,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r25.u32);
	// b 0x83a16d9c
	goto loc_83A16D9C;
loc_83A165D8:
	// lwz r11,512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 512);
	// stw r23,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a16d9c
	if (cr6.eq) goto loc_83A16D9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A165F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a16d9c
	goto loc_83A16D9C;
loc_83A165F8:
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// sth r10,730(r31)
	PPC_STORE_U16(ctx.r31.u32 + 730, ctx.r10.u16);
	// bne cr6,0x83a1662c
	if (!cr6.eq) goto loc_83A1662C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a1662c
	if (cr6.eq) goto loc_83A1662C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x83a2b740
	ctx.lr = 0x83A16620;
	sub_83A2B740(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
loc_83A1662C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a1665c
	if (!cr6.eq) goto loc_83A1665C;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a1665c
	if (!cr6.eq) goto loc_83A1665C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x83a2b740
	ctx.lr = 0x83A16650;
	sub_83A2B740(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
loc_83A1665C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r18,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r18.u32);
	// sth r25,150(r29)
	PPC_STORE_U16(ctx.r29.u32 + 150, ctx.r25.u16);
	// stb r25,145(r29)
	PPC_STORE_U8(ctx.r29.u32 + 145, ctx.r25.u8);
	// stw r24,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r24.u32);
	// sth r25,148(r29)
	PPC_STORE_U16(ctx.r29.u32 + 148, ctx.r25.u16);
	// sth r25,202(r11)
	PPC_STORE_U16(ctx.r11.u32 + 202, ctx.r25.u16);
	// stw r25,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r25.u32);
	// stw r25,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r25.u32);
	// stw r25,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r25.u32);
	// b 0x83a16d9c
	goto loc_83A16D9C;
loc_83A16688:
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a1681c
	if (!cr6.lt) goto loc_83A1681C;
loc_83A166A0:
	// lhz r10,150(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 150);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mulli r9,r6,1776
	ctx.r9.s64 = ctx.r6.s64 * 1776;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x83a166e8
	if (!cr6.gt) goto loc_83A166E8;
loc_83A166D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x83a166d8
	if (cr6.gt) goto loc_83A166D8;
loc_83A166E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,312(r29)
	PPC_STORE_U16(ctx.r29.u32 + 312, ctx.r11.u16);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a16770
	if (cr6.eq) goto loc_83A16770;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83a1675c
	if (cr6.lt) goto loc_83A1675C;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a16728
	if (!cr6.eq) goto loc_83A16728;
	// bl 0x83a160f0
	ctx.lr = 0x83A16724;
	sub_83A160F0(ctx, base);
	// b 0x83a1672c
	goto loc_83A1672C;
loc_83A16728:
	// bl 0x83a162a0
	ctx.lr = 0x83A1672C;
	sub_83A162A0(ctx, base);
loc_83A1672C:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r20
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, xer);
	// bne cr6,0x83a16768
	if (!cr6.eq) goto loc_83A16768;
	// addi r3,r29,224
	ctx.r3.s64 = ctx.r29.s64 + 224;
	// bl 0x83a2bbd0
	ctx.lr = 0x83A16740;
	sub_83A2BBD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a16da8
	if (cr6.eq) goto loc_83A16DA8;
	// lwz r11,704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a16da8
	if (cr6.eq) goto loc_83A16DA8;
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// b 0x83a16770
	goto loc_83A16770;
loc_83A1675C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a15c28
	ctx.lr = 0x83A16764;
	sub_83A15C28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_83A16768:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
loc_83A16770:
	// lhz r11,490(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 490);
	// lhz r10,730(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 730);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a1678c
	if (!cr6.gt) goto loc_83A1678C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A1678C:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// sth r11,730(r31)
	PPC_STORE_U16(ctx.r31.u32 + 730, ctx.r11.u16);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a167b0
	if (!cr6.eq) goto loc_83A167B0;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// addi r11,r29,224
	ctx.r11.s64 = ctx.r29.s64 + 224;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 264, ctx.r8.u32);
loc_83A167B0:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bgt cr6,0x83a167d4
	if (cr6.gt) goto loc_83A167D4;
	// stw r25,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r25.u32);
	// b 0x83a167f0
	goto loc_83A167F0;
loc_83A167D4:
	// lwz r11,512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 512);
	// stw r23,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a167f0
	if (cr6.eq) goto loc_83A167F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A167F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A167F0:
	// lhz r11,150(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r29)
	PPC_STORE_U16(ctx.r29.u32 + 150, ctx.r9.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// blt cr6,0x83a166a0
	if (cr6.lt) goto loc_83A166A0;
loc_83A1681C:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a16870
	if (cr6.eq) goto loc_83A16870;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a16870
	if (!cr6.gt) goto loc_83A16870;
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lhz r11,730(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 730);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r9,r7,1776
	ctx.r9.s64 = ctx.r7.s64 * 1776;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r5,118(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 118);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// srawi r3,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a1686c
	if (cr6.lt) goto loc_83A1686C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A1686C:
	// sth r11,730(r31)
	PPC_STORE_U16(ctx.r31.u32 + 730, ctx.r11.u16);
loc_83A16870:
	// stw r16,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r16.u32);
	// b 0x83a16d9c
	goto loc_83A16D9C;
loc_83A16878:
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x83a169e4
	if (!cr6.lt) goto loc_83A169E4;
loc_83A16890:
	// lhz r11,150(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 150);
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = ctx.r6.s64 * 1776;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83a168dc
	if (cr6.eq) goto loc_83A168DC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a30ad0
	ctx.lr = 0x83A168D0;
	sub_83A30AD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
loc_83A168DC:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a16944
	if (cr6.eq) goto loc_83A16944;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a31078
	ctx.lr = 0x83A168F8;
	sub_83A31078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
	// stw r25,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a16974
	if (!cr6.eq) goto loc_83A16974;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a16928
	if (cr6.eq) goto loc_83A16928;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// b 0x83a1692c
	goto loc_83A1692C;
loc_83A16928:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
loc_83A1692C:
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83a28590
	ctx.lr = 0x83A16940;
	sub_83A28590(ctx, base);
	// b 0x83a16974
	goto loc_83A16974;
loc_83A16944:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a16958
	if (cr6.eq) goto loc_83A16958;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// b 0x83a1695c
	goto loc_83A1695C;
loc_83A16958:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
loc_83A1695C:
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83A16970;
	sub_831CDCF0(ctx, base);
	// stw r25,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
loc_83A16974:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a16998
	if (cr6.eq) goto loc_83A16998;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce980
	ctx.lr = 0x83A16998;
	sub_831CE980(ctx, base);
loc_83A16998:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r25,145(r29)
	PPC_STORE_U8(ctx.r29.u32 + 145, ctx.r25.u8);
	// stw r24,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r24.u32);
	// sth r25,148(r29)
	PPC_STORE_U16(ctx.r29.u32 + 148, ctx.r25.u16);
	// sth r25,202(r11)
	PPC_STORE_U16(ctx.r11.u32 + 202, ctx.r25.u16);
	// stw r25,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r25.u32);
	// stw r25,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r25.u32);
	// stw r25,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r25.u32);
	// lhz r10,150(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,150(r29)
	PPC_STORE_U16(ctx.r29.u32 + 150, ctx.r8.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// blt cr6,0x83a16890
	if (cr6.lt) goto loc_83A16890;
loc_83A169E4:
	// stw r23,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r23.u32);
	// b 0x83a16d9c
	goto loc_83A16D9C;
loc_83A169EC:
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a16a90
	if (!cr6.gt) goto loc_83A16A90;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A16A04:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = ctx.r7.s64 * 1776;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83a16a54
	if (cr6.eq) goto loc_83A16A54;
	// stw r25,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a16a70
	if (!cr6.eq) goto loc_83A16A70;
	// lhz r11,118(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83a28590
	ctx.lr = 0x83A16A50;
	sub_83A28590(ctx, base);
	// b 0x83a16a70
	goto loc_83A16A70;
loc_83A16A54:
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83A16A6C;
	sub_831CDCF0(ctx, base);
	// stw r25,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
loc_83A16A70:
	// lhz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a16a04
	if (cr6.lt) goto loc_83A16A04;
loc_83A16A90:
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a16af8
	if (!cr6.gt) goto loc_83A16AF8;
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A16AB4:
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = ctx.r7.s64 * 1776;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83a16af4
	if (!cr6.eq) goto loc_83A16AF4;
	// lhz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a16ab4
	if (cr6.lt) goto loc_83A16AB4;
	// b 0x83a16af8
	goto loc_83A16AF8;
loc_83A16AF4:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_83A16AF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a15268
	ctx.lr = 0x83A16B00;
	sub_83A15268(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a2dce0
	ctx.lr = 0x83A16B18;
	sub_83A2DCE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a2dce0
	ctx.lr = 0x83A16B24;
	sub_83A2DCE0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a16bec
	if (!cr6.gt) goto loc_83A16BEC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83a16bf4
	if (!cr6.eq) goto loc_83A16BF4;
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a16c00
	if (!cr6.gt) goto loc_83A16C00;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A16B50:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lhz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 108);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = ctx.r5.s64 * 1776;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bne cr6,0x83a16ba0
	if (!cr6.eq) goto loc_83A16BA0;
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83A16BA0;
	sub_831CDCF0(ctx, base);
loc_83A16BA0:
	// sth r21,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r21.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x83a2a788
	ctx.lr = 0x83A16BBC;
	sub_83A2A788(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
	// lhz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a16b50
	if (cr6.lt) goto loc_83A16B50;
	// b 0x83a16c00
	goto loc_83A16C00;
loc_83A16BEC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83a16c00
	if (cr6.eq) goto loc_83A16C00;
loc_83A16BF4:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a16d70
	if (cr6.eq) goto loc_83A16D70;
loc_83A16C00:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a16c14
	if (!cr6.eq) goto loc_83A16C14;
	// lfs f30,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f30.f64 = double(temp.f32);
	// b 0x83a16c30
	goto loc_83A16C30;
loc_83A16C14:
	// lhz r11,118(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f29,f12
	ctx.f30.f64 = double(float(ctx.f29.f64 / ctx.f12.f64));
loc_83A16C30:
	// lhz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a16d70
	if (!cr6.gt) goto loc_83A16D70;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A16C48:
	// lwz r9,584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r8,320(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = ctx.r6.s64 * 1776;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x83a16cb4
	if (cr6.eq) goto loc_83A16CB4;
	// lhz r11,118(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// lwz r10,332(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,328(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// srawi r6,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divw r4,r5,r7
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r7.s32);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ble 0x83a16cb4
	if (!cr0.gt) goto loc_83A16CB4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A16CA4:
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a16ca4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A16CA4;
loc_83A16CB4:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a16ccc
	if (!cr6.eq) goto loc_83A16CCC;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a16d50
	if (!cr6.gt) goto loc_83A16D50;
loc_83A16CCC:
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// lhz r10,118(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83a16d08
	if (!cr6.gt) goto loc_83A16D08;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A16D08;
	sub_831CDCF0(ctx, base);
loc_83A16D08:
	// lwz r9,464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,496(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lhz r6,114(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 114);
	// lhz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r9,440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r8,532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r7,516(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bctrl 
	ctx.lr = 0x83A16D50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A16D50:
	// lhz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83a16c48
	if (cr6.lt) goto loc_83A16C48;
loc_83A16D70:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a16d90
	if (!cr6.gt) goto loc_83A16D90;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83a16d90
	if (!cr6.eq) goto loc_83A16D90;
loc_83A16D84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a2a780
	ctx.lr = 0x83A16D8C;
	sub_83A2A780(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_83A16D90:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x83a16da8
	if (cr6.lt) goto loc_83A16DA8;
	// stw r19,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r19.u32);
loc_83A16D9C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a164f0
	if (!cr6.eq) goto loc_83A164F0;
loc_83A16DA8:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// beq cr6,0x83a16dcc
	if (cr6.eq) goto loc_83A16DCC;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_83A16DCC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A16DE4"))) PPC_WEAK_FUNC(sub_83A16DE4);
PPC_FUNC_IMPL(__imp__sub_83A16DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A16DE8"))) PPC_WEAK_FUNC(sub_83A16DE8);
PPC_FUNC_IMPL(__imp__sub_83A16DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,580(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 580);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a16ec0
	if (!cr6.gt) goto loc_83A16EC0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83A16E08:
	// lwz r11,584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lhzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = ctx.r6.s64 * 1776;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x83a16ea8
	if (!cr6.eq) goto loc_83A16EA8;
	// lwz r10,460(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a16e48
	if (cr6.eq) goto loc_83A16E48;
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x83a16e60
	goto loc_83A16E60;
loc_83A16E48:
	// lwz r10,448(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// beq cr6,0x83a16e60
	if (cr6.eq) goto loc_83A16E60;
	// lwz r9,456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
loc_83A16E60:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r31,116(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 116);
	// lwz r7,140(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// srawi r31,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r7,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// sth r30,116(r11)
	PPC_STORE_U16(ctx.r11.u32 + 116, ctx.r30.u16);
	// mullw r10,r31,r6
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
loc_83A16EA8:
	// lhz r11,580(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 580);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a16e08
	if (cr6.lt) goto loc_83A16E08;
loc_83A16EC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A16ED0"))) PPC_WEAK_FUNC(sub_83A16ED0);
PPC_FUNC_IMPL(__imp__sub_83A16ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a16ef8
	if (cr6.eq) goto loc_83A16EF8;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a16ef8
	if (!cr6.eq) goto loc_83A16EF8;
	// lis r10,-31839
	ctx.r10.s64 = -2086600704;
	// addi r9,r10,25728
	ctx.r9.s64 = ctx.r10.s64 + 25728;
	// b 0x83a16f00
	goto loc_83A16F00;
loc_83A16EF8:
	// lis r10,-31839
	ctx.r10.s64 = -2086600704;
	// addi r9,r10,21304
	ctx.r9.s64 = ctx.r10.s64 + 21304;
loc_83A16F00:
	// stw r9,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r9.u32);
	// lhz r10,34(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a16fc8
	if (cr6.eq) goto loc_83A16FC8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_83A16F14:
	// lwz r9,320(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mulli r10,r7,1776
	ctx.r10.s64 = ctx.r7.s64 * 1776;
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83a16f90
	if (!cr6.eq) goto loc_83A16F90;
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a16f48
	if (cr6.eq) goto loc_83A16F48;
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r8,256(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x83a16f4c
	goto loc_83A16F4C;
loc_83A16F48:
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
loc_83A16F4C:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r8,436(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// lwz r6,448(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// beq cr6,0x83a16f78
	if (cr6.eq) goto loc_83A16F78;
	// lwz r8,456(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
loc_83A16F78:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r8,436(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r8.u32);
	// b 0x83a16fb0
	goto loc_83A16FB0;
loc_83A16F90:
	// lwz r8,320(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r6.u32);
	// lwz r8,320(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r4.u32);
loc_83A16FB0:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// lhz r9,34(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a16f14
	if (cr6.lt) goto loc_83A16F14;
loc_83A16FC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A16FD0"))) PPC_WEAK_FUNC(sub_83A16FD0);
PPC_FUNC_IMPL(__imp__sub_83A16FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_83A16FDC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x83a170c0
	if (cr6.lt) goto loc_83A170C0;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_83A16FFC:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83a17028
	if (!cr6.gt) goto loc_83A17028;
	// lwz r31,-12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwzx r30,r9,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r30.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
loc_83A17028:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83a17054
	if (!cr6.gt) goto loc_83A17054;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r30,-4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r31,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r31.u32);
loc_83A17054:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83a17080
	if (!cr6.gt) goto loc_83A17080;
	// lwz r31,-4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r30.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_83A17080:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83a170ac
	if (!cr6.gt) goto loc_83A170AC;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_83A170AC:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// blt cr6,0x83a16ffc
	if (cr6.lt) goto loc_83A16FFC;
loc_83A170C0:
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// bge cr6,0x83a1711c
	if (!cr6.lt) goto loc_83A1711C;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r7,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r7.s64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_83A170E4:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83a17110
	if (!cr6.gt) goto loc_83A17110;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_83A17110:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83a170e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A170E4;
loc_83A1711C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83a16fdc
	if (!cr6.eq) goto loc_83A16FDC;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A17130"))) PPC_WEAK_FUNC(sub_83A17130);
PPC_FUNC_IMPL(__imp__sub_83A17130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A17138;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce768
	ctx.lr = 0x83A17140;
	__savefpr_24(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,27692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27692);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32207
	ctx.r6.s64 = -2110717952;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lfs f13,-20096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f12,-6656(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -6656);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,-8380(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8380);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-27216(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27216);
	ctx.f10.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f9,-23860(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23860);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// lfs f8,-25156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25156);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,9644(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9644);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-11744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11744);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// blt cr6,0x83a171e8
	if (cr6.lt) goto loc_83A171E8;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// bge cr6,0x83a17200
	if (!cr6.lt) goto loc_83A17200;
loc_83A171E8:
	// lis r23,-32764
	ctx.r23.s64 = -2147221504;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7b4
	ctx.lr = 0x83A171FC;
	__restfpr_24(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A17200:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a17284
	if (!cr6.gt) goto loc_83A17284;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_83A17210:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// blt cr6,0x83a17254
	if (cr6.lt) goto loc_83A17254;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r26,-3
	ctx.r6.s64 = ctx.r26.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A17228:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// stfs f31,4(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f31,-4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// stfsx f31,r10,r8
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x83a17228
	if (cr6.lt) goto loc_83A17228;
loc_83A17254:
	// cmpw cr6,r9,r26
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, xer);
	// bge cr6,0x83a17278
	if (!cr6.lt) goto loc_83A17278;
	// subf r8,r9,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r9.s64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A1726C:
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a1726c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1726C;
loc_83A17278:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83a17210
	if (!cr0.eq) goto loc_83A17210;
loc_83A17284:
	// cmpwi cr6,r26,5
	cr6.compare<int32_t>(ctx.r26.s32, 5, xer);
	// bne cr6,0x83a172a4
	if (!cr6.eq) goto loc_83A172A4;
	// cmpwi cr6,r25,5
	cr6.compare<int32_t>(ctx.r25.s32, 5, xer);
	// bne cr6,0x83a172a4
	if (!cr6.eq) goto loc_83A172A4;
	// cmplwi cr6,r31,1543
	cr6.compare<uint32_t>(ctx.r31.u32, 1543, xer);
	// bne cr6,0x83a17514
	if (!cr6.eq) goto loc_83A17514;
	// cmplwi cr6,r30,55
	cr6.compare<uint32_t>(ctx.r30.u32, 55, xer);
	// beq cr6,0x83a17524
	if (cr6.eq) goto loc_83A17524;
loc_83A172A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,17056(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17056);
	// bl 0x831d16d8
	ctx.lr = 0x83A172B0;
	sub_831D16D8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// lfs f0,-4460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ble cr6,0x83a17334
	if (!cr6.gt) goto loc_83A17334;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83A172D8:
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bne cr6,0x83a17308
	if (!cr6.eq) goto loc_83A17308;
loc_83A172EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bgt cr6,0x83a176d8
	if (cr6.gt) goto loc_83A176D8;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a172ec
	if (cr6.eq) goto loc_83A172EC;
loc_83A17308:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r9,r26
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, xer);
	// stfsx f0,r8,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// blt cr6,0x83a172d8
	if (cr6.lt) goto loc_83A172D8;
loc_83A17334:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x83a16fd0
	ctx.lr = 0x83A17344;
	sub_83A16FD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a173b8
	if (!cr6.gt) goto loc_83A173B8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83A1735C:
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// and r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bne cr6,0x83a1738c
	if (!cr6.eq) goto loc_83A1738C;
loc_83A17370:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bgt cr6,0x83a176d8
	if (cr6.gt) goto loc_83A176D8;
	// and r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a17370
	if (cr6.eq) goto loc_83A17370;
loc_83A1738C:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r9,r25
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, xer);
	// stfsx f0,r8,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// blt cr6,0x83a1735c
	if (cr6.lt) goto loc_83A1735C;
loc_83A173B8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83a16fd0
	ctx.lr = 0x83A173C8;
	sub_83A16FD0(ctx, base);
	// addi r27,r25,-1
	ctx.r27.s64 = ctx.r25.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// blt cr6,0x83a17448
	if (cr6.lt) goto loc_83A17448;
	// addi r9,r27,-3
	ctx.r9.s64 = ctx.r27.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
loc_83A173F0:
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfsx f13,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r1,324
	ctx.r31.s64 = ctx.r1.s64 + 324;
	// lfsx f12,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r1,328
	ctx.r30.s64 = ctx.r1.s64 + 328;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r29,r1,332
	ctx.r29.s64 = ctx.r1.s64 + 332;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f9,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfsx f8,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfsx f11,r11,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// stfsx f10,r11,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// stfsx f7,r11,r30
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// stfsx f6,r11,r29
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x83a173f0
	if (cr6.lt) goto loc_83A173F0;
loc_83A17448:
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bge cr6,0x83a17480
	if (!cr6.lt) goto loc_83A17480;
	// subf r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A1745C:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a1745c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1745C;
loc_83A17480:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f25,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f25.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// fsubs f13,f25,f0
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// lfs f27,11412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11412);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,-24912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24912);
	ctx.f28.f64 = double(temp.f32);
	// lfs f24,-26260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f24.f64 = double(temp.f32);
	// fadds f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// stfs f12,-4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// ble cr6,0x83a17644
	if (!cr6.gt) goto loc_83A17644;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
loc_83A174D4:
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x83a17508
	if (!cr6.gt) goto loc_83A17508;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
loc_83A174E8:
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bge cr6,0x83a17500
	if (!cr6.lt) goto loc_83A17500;
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83a174e8
	if (cr6.gt) goto loc_83A174E8;
loc_83A17500:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a17568
	if (!cr6.eq) goto loc_83A17568;
loc_83A17508:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83a17584
	goto loc_83A17584;
loc_83A17514:
	// cmplwi cr6,r31,55
	cr6.compare<uint32_t>(ctx.r31.u32, 55, xer);
	// bne cr6,0x83a172a4
	if (!cr6.eq) goto loc_83A172A4;
	// cmplwi cr6,r30,1543
	cr6.compare<uint32_t>(ctx.r30.u32, 1543, xer);
	// bne cr6,0x83a172a4
	if (!cr6.eq) goto loc_83A172A4;
loc_83A17524:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r7,12(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r6,16(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7b4
	ctx.lr = 0x83A17564;
	__restfpr_24(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A17568:
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// ble cr6,0x83a1757c
	if (!cr6.gt) goto loc_83A1757C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83a17584
	goto loc_83A17584;
loc_83A1757C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83A17584:
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lfsx f13,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83a175a8
	if (!cr6.lt) goto loc_83A175A8;
loc_83A1759C:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x83a1759c
	if (cr6.lt) goto loc_83A1759C;
loc_83A175A8:
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lfsx f13,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f29,f11,f28
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x831d1a10
	ctx.lr = 0x83A175C4;
	sub_831D1A10(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x83a175d4
	if (!cr6.lt) goto loc_83A175D4;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_83A175D4:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x831d1930
	ctx.lr = 0x83A175DC;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x83a175ec
	if (!cr6.lt) goto loc_83A175EC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_83A175EC:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// bne cr6,0x83a175fc
	if (!cr6.eq) goto loc_83A175FC;
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
	// fmr f30,f24
	ctx.f30.f64 = ctx.f24.f64;
loc_83A175FC:
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// addi r8,r1,576
	ctx.r8.s64 = ctx.r1.s64 + 576;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r29,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// lwzx r8,r3,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r24.u32);
	// stfsx f30,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// bne 0x83a174d4
	if (!cr0.eq) goto loc_83A174D4;
loc_83A17644:
	// fmr f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f31.f64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a176d8
	if (!cr6.gt) goto loc_83A176D8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
loc_83A17658:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// blt cr6,0x83a176a0
	if (cr6.lt) goto loc_83A176A0;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A1767C:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfsx f10,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// blt cr6,0x83a1767c
	if (cr6.lt) goto loc_83A1767C;
loc_83A176A0:
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// bge cr6,0x83a176b4
	if (!cr6.lt) goto loc_83A176B4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
loc_83A176B4:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x83a176c8
	if (!cr6.lt) goto loc_83A176C8;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_83A176C8:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x83a17658
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A17658;
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bgt cr6,0x83a176f4
	if (cr6.gt) goto loc_83A176F4;
loc_83A176D8:
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// ori r23,r23,16389
	ctx.r23.u64 = ctx.r23.u64 | 16389;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7b4
	ctx.lr = 0x83A176F0;
	__restfpr_24(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A176F4:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lfs f12,23372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
loc_83A1770C:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// blt cr6,0x83a17818
	if (cr6.lt) goto loc_83A17818;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f0,f24,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// addi r4,r26,-3
	ctx.r4.s64 = ctx.r26.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A17728:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfsx f10,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfsx f8,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,-4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f2,f9,f13,f28
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fmadds f10,f4,f13,f28
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fmadds f1,f6,f13,f28
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fmadds f9,f3,f13,f28
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fctiwz f8,f2
	ctx.f8.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// fctiwz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f5,f1
	ctx.f5.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// lfd f3,176(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lfd f1,152(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f4,160(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lfd f2,168(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f10,f4
	ctx.f10.f64 = double(ctx.f4.s64);
	// fcfid f8,f2
	ctx.f8.f64 = double(ctx.f2.s64);
	// fcfid f9,f3
	ctx.f9.f64 = double(ctx.f3.s64);
	// fcfid f7,f1
	ctx.f7.f64 = double(ctx.f1.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfsx f2,r11,r10
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmuls f10,f4,f12
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f10,-4(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfsx f1,r10,r9
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// blt cr6,0x83a17728
	if (cr6.lt) goto loc_83A17728;
loc_83A17818:
	// cmpw cr6,r6,r26
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, xer);
	// bge cr6,0x83a17870
	if (!cr6.lt) goto loc_83A17870;
	// subf r9,r6,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r6.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f0,f24,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A17834:
	// lfsx f10,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f8,f9,f13,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfsx f3,r10,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a17834
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A17834;
loc_83A17870:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x83a1770c
	if (!cr0.eq) goto loc_83A1770C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7b4
	ctx.lr = 0x83A1788C;
	__restfpr_24(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A17890"))) PPC_WEAK_FUNC(sub_83A17890);
PPC_FUNC_IMPL(__imp__sub_83A17890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83A17898;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a178fc
	if (cr6.eq) goto loc_83A178FC;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bgt cr6,0x83a178fc
	if (cr6.gt) goto loc_83A178FC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x83a178fc
	if (cr6.lt) goto loc_83A178FC;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// bgt cr6,0x83a178fc
	if (cr6.gt) goto loc_83A178FC;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// blt cr6,0x83a178fc
	if (cr6.lt) goto loc_83A178FC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a178fc
	if (cr6.eq) goto loc_83A178FC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83a1790c
	if (!cr6.eq) goto loc_83A1790C;
loc_83A178FC:
	// lis r28,-32764
	ctx.r28.s64 = -2147221504;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A1790C:
	// rlwinm r10,r25,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a178fc
	if (!cr6.eq) goto loc_83A178FC;
	// rlwinm r10,r24,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a178fc
	if (!cr6.eq) goto loc_83A178FC;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83A17948:
	// and r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 & ctx.r25.u64;
	// and r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 & ctx.r24.u64;
	// addic r29,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r29.s64 = ctx.r31.s64 + -1;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r11,r29,r31
	temp.u8 = (~ctx.r29.u32 + ctx.r31.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r29.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r31,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	// and r29,r28,r25
	ctx.r29.u64 = ctx.r28.u64 & ctx.r25.u64;
	// subfe r31,r31,r30
	temp.u8 = (~ctx.r31.u32 + ctx.r30.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r31.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r30,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// and r27,r28,r24
	ctx.r27.u64 = ctx.r28.u64 & ctx.r24.u64;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r30,r30,r29
	temp.u8 = (~ctx.r30.u32 + ctx.r29.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r29.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r30.u64 + ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r29,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r29.s64 = ctx.r27.s64 + -1;
	// and r26,r28,r25
	ctx.r26.u64 = ctx.r28.u64 & ctx.r25.u64;
	// subfe r29,r29,r27
	temp.u8 = (~ctx.r29.u32 + ctx.r27.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r27.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r29.u64 + ctx.r27.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r27,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r27.s64 = ctx.r26.s64 + -1;
	// and r19,r28,r24
	ctx.r19.u64 = ctx.r28.u64 & ctx.r24.u64;
	// rlwinm r18,r28,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r28,r27,r26
	temp.u8 = (~ctx.r27.u32 + ctx.r26.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r26.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r27.u64 + ctx.r26.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r27,r19,-1
	xer.ca = ctx.r19.u32 > 0;
	ctx.r27.s64 = ctx.r19.s64 + -1;
	// and r26,r18,r25
	ctx.r26.u64 = ctx.r18.u64 & ctx.r25.u64;
	// subfe r27,r27,r19
	temp.u8 = (~ctx.r27.u32 + ctx.r19.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r19.u32 + xer.ca < xer.ca);
	ctx.r27.u64 = ~ctx.r27.u64 + ctx.r19.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r19,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r19.s64 = ctx.r26.s64 + -1;
	// and r17,r18,r24
	ctx.r17.u64 = ctx.r18.u64 & ctx.r24.u64;
	// subfe r26,r19,r26
	temp.u8 = (~ctx.r19.u32 + ctx.r26.u32 < ~ctx.r19.u32) | (~ctx.r19.u32 + ctx.r26.u32 + xer.ca < xer.ca);
	ctx.r26.u64 = ~ctx.r19.u64 + ctx.r26.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r19,r17,-1
	xer.ca = ctx.r17.u32 > 0;
	ctx.r19.s64 = ctx.r17.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r19,r17
	temp.u8 = (~ctx.r19.u32 + ctx.r17.u32 < ~ctx.r19.u32) | (~ctx.r19.u32 + ctx.r17.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r19.u64 + ctx.r17.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 + ctx.r6.u64;
	// add r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 + ctx.r5.u64;
	// add r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 + ctx.r4.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x83a17948
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A17948;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// bne cr6,0x83a17a04
	if (!cr6.eq) goto loc_83A17A04;
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, xer);
	// beq cr6,0x83a17a18
	if (cr6.eq) goto loc_83A17A18;
loc_83A17A04:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A17A18:
	// rlwinm r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a17a34
	if (cr6.eq) goto loc_83A17A34;
	// rlwinm r4,r25,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r3,r21,-1
	ctx.r3.s64 = ctx.r21.s64 + -1;
loc_83A17A34:
	// rlwinm r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a17a50
	if (cr6.eq) goto loc_83A17A50;
	// rlwinm r6,r24,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r5,r22,-1
	ctx.r5.s64 = ctx.r22.s64 + -1;
loc_83A17A50:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x83a178fc
	if (cr6.lt) goto loc_83A178FC;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// blt cr6,0x83a178fc
	if (cr6.lt) goto loc_83A178FC;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// bl 0x83a17130
	ctx.lr = 0x83A17A68;
	sub_83A17130(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a18114
	if (cr6.lt) goto loc_83A18114;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// ble cr6,0x83a17b00
	if (!cr6.gt) goto loc_83A17B00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83A17A8C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r21,4
	cr6.compare<int32_t>(ctx.r21.s32, 4, xer);
	// blt cr6,0x83a17ad0
	if (cr6.lt) goto loc_83A17AD0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r21,-3
	ctx.r6.s64 = ctx.r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A17AA4:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,-4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x83a17aa4
	if (cr6.lt) goto loc_83A17AA4;
loc_83A17AD0:
	// cmpw cr6,r9,r21
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a17af4
	if (!cr6.lt) goto loc_83A17AF4;
	// subf r8,r9,r21
	ctx.r8.s64 = ctx.r21.s64 - ctx.r9.s64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A17AE8:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a17ae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A17AE8;
loc_83A17AF4:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83a17a8c
	if (!cr0.eq) goto loc_83A17A8C;
loc_83A17B00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a2af78
	ctx.lr = 0x83A17B10;
	sub_83A2AF78(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a2af78
	ctx.lr = 0x83A17B20;
	sub_83A2AF78(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x83a17d80
	if (cr6.eq) goto loc_83A17D80;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a17d78
	if (cr6.eq) goto loc_83A17D78;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r7,r11,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a17c60
	if (!cr6.gt) goto loc_83A17C60;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83A17B70:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a17bb0
	if (!cr6.gt) goto loc_83A17BB0;
	// lwzx r8,r5,r20
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A17B8C:
	// lwzx r9,r5,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a17b8c
	if (cr6.lt) goto loc_83A17B8C;
loc_83A17BB0:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r21
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a17c48
	if (!cr6.lt) goto loc_83A17C48;
	// subf r11,r10,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83a17c18
	if (cr6.lt) goto loc_83A17C18;
	// lwzx r9,r5,r20
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r3,r21,-3
	ctx.r3.s64 = ctx.r21.s64 + -3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A17BD4:
	// lwzx r7,r5,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// lfs f0,-4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// blt cr6,0x83a17bd4
	if (cr6.lt) goto loc_83A17BD4;
loc_83A17C18:
	// cmpw cr6,r10,r21
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a17c48
	if (!cr6.lt) goto loc_83A17C48;
	// subf r8,r10,r21
	ctx.r8.s64 = ctx.r21.s64 - ctx.r10.s64;
	// lwzx r9,r5,r20
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A17C30:
	// lwzx r10,r5,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a17c30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A17C30;
loc_83A17C48:
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a17b70
	if (cr6.lt) goto loc_83A17B70;
loc_83A17C60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bge cr6,0x83a18114
	if (!cr6.lt) goto loc_83A18114;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r22
	ctx.r30.s64 = ctx.r22.s64 - ctx.r11.s64;
loc_83A17C74:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a17cbc
	if (!cr6.gt) goto loc_83A17CBC;
	// lwzx r7,r6,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + ctx.r23.u64;
loc_83A17C94:
	// lwz r9,-4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + ctx.r23.u64;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a17c94
	if (cr6.lt) goto loc_83A17C94;
loc_83A17CBC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r21
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a17d60
	if (!cr6.lt) goto loc_83A17D60;
	// subf r11,r9,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83a17d2c
	if (cr6.lt) goto loc_83A17D2C;
	// lwzx r10,r6,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// addi r31,r21,-3
	ctx.r31.s64 = ctx.r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + ctx.r23.u64;
loc_83A17CE4:
	// lwz r7,-4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + ctx.r23.u64;
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, xer);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// blt cr6,0x83a17ce4
	if (cr6.lt) goto loc_83A17CE4;
loc_83A17D2C:
	// cmpw cr6,r9,r21
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a17d60
	if (!cr6.lt) goto loc_83A17D60;
	// subf r10,r9,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r9.s64;
	// lwzx r8,r6,r20
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A17D44:
	// add r10,r6,r23
	ctx.r10.u64 = ctx.r6.u64 + ctx.r23.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a17d44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A17D44;
loc_83A17D60:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x83a17c74
	if (!cr0.eq) goto loc_83A17C74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A17D78:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x83a17f04
	if (!cr6.eq) goto loc_83A17F04;
loc_83A17D80:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a17efc
	if (cr6.eq) goto loc_83A17EFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a17e3c
	if (!cr6.gt) goto loc_83A17E3C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83A17D9C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	cr6.compare<int32_t>(ctx.r21.s32, 4, xer);
	// blt cr6,0x83a17df8
	if (cr6.lt) goto loc_83A17DF8;
	// lwzx r9,r5,r20
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r31,r21,-3
	ctx.r31.s64 = ctx.r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A17DB4:
	// lwzx r10,r5,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, xer);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x83a17db4
	if (cr6.lt) goto loc_83A17DB4;
loc_83A17DF8:
	// cmpw cr6,r7,r21
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a17e24
	if (!cr6.lt) goto loc_83A17E24;
	// subf r9,r7,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r7.s64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A17E10:
	// lwzx r9,r5,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a17e10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A17E10;
loc_83A17E24:
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a17d9c
	if (cr6.lt) goto loc_83A17D9C;
loc_83A17E3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bge cr6,0x83a18114
	if (!cr6.lt) goto loc_83A18114;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r11,r22
	ctx.r29.s64 = ctx.r22.s64 - ctx.r11.s64;
loc_83A17E50:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	cr6.compare<int32_t>(ctx.r21.s32, 4, xer);
	// blt cr6,0x83a17eb4
	if (cr6.lt) goto loc_83A17EB4;
	// lwzx r9,r5,r20
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r30,r21,-3
	ctx.r30.s64 = ctx.r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + ctx.r23.u64;
loc_83A17E6C:
	// lwz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + ctx.r23.u64;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, xer);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x83a17e6c
	if (cr6.lt) goto loc_83A17E6C;
loc_83A17EB4:
	// cmpw cr6,r7,r21
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a17ee4
	if (!cr6.lt) goto loc_83A17EE4;
	// subf r9,r7,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r7.s64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A17ECC:
	// add r9,r5,r23
	ctx.r9.u64 = ctx.r5.u64 + ctx.r23.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a17ecc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A17ECC;
loc_83A17EE4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83a17e50
	if (!cr0.eq) goto loc_83A17E50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A17EFC:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x83a18070
	if (cr6.eq) goto loc_83A18070;
loc_83A17F04:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x83a18070
	if (!cr6.eq) goto loc_83A18070;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// ble cr6,0x83a18114
	if (!cr6.gt) goto loc_83A18114;
	// extsw r11,r22
	ctx.r11.s64 = ctx.r22.s32;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lfs f12,-27732(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27732);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
loc_83A17F44:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a17f8c
	if (!cr6.gt) goto loc_83A17F8C;
	// lwzx r8,r5,r20
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A17F60:
	// lwzx r9,r5,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f11,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a17f60
	if (cr6.lt) goto loc_83A17F60;
loc_83A17F8C:
	// lwzx r10,r5,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r21
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a18058
	if (!cr6.lt) goto loc_83A18058;
	// subf r11,r9,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83a18024
	if (cr6.lt) goto loc_83A18024;
	// addi r3,r21,-3
	ctx.r3.s64 = ctx.r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A17FC0:
	// lwzx r7,r5,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// lfs f11,-4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fdivs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// stfs f6,4(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fdivs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f13.f64));
	// stfsx f3,r10,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f2,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fdivs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// blt cr6,0x83a17fc0
	if (cr6.lt) goto loc_83A17FC0;
loc_83A18024:
	// cmpw cr6,r9,r21
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a18058
	if (!cr6.lt) goto loc_83A18058;
	// subf r8,r9,r21
	ctx.r8.s64 = ctx.r21.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A18038:
	// lwzx r9,r5,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f11,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a18038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A18038;
loc_83A18058:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83a17f44
	if (!cr0.eq) goto loc_83A17F44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A18070:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// ble cr6,0x83a18114
	if (!cr6.gt) goto loc_83A18114;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83A18080:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	cr6.compare<int32_t>(ctx.r21.s32, 4, xer);
	// blt cr6,0x83a180dc
	if (cr6.lt) goto loc_83A180DC;
	// lwzx r9,r5,r20
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r31,r21,-3
	ctx.r31.s64 = ctx.r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A18098:
	// lwzx r10,r5,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, xer);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x83a18098
	if (cr6.lt) goto loc_83A18098;
loc_83A180DC:
	// cmpw cr6,r7,r21
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r21.s32, xer);
	// bge cr6,0x83a18108
	if (!cr6.lt) goto loc_83A18108;
	// subf r9,r7,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r7.s64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A180F4:
	// lwzx r9,r5,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a180f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A180F4;
loc_83A18108:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83a18080
	if (!cr0.eq) goto loc_83A18080;
loc_83A18114:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A18120"))) PPC_WEAK_FUNC(sub_83A18120);
PPC_FUNC_IMPL(__imp__sub_83A18120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83A18128;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a184a0
	if (cr6.eq) goto loc_83A184A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a184a0
	if (cr6.eq) goto loc_83A184A0;
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a181c4
	if (cr6.eq) goto loc_83A181C4;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83a181b0
	if (!cr6.gt) goto loc_83A181B0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_83A18184:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a181a4
	if (cr6.eq) goto loc_83A181A4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83a26ce8
	ctx.lr = 0x83A1819C;
	sub_83A26CE8(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stwx r23,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
loc_83A181A4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83a18184
	if (!cr0.eq) goto loc_83A18184;
loc_83A181B0:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a181c4
	if (cr6.eq) goto loc_83A181C4;
	// bl 0x83a26ce8
	ctx.lr = 0x83A181C0;
	sub_83A26CE8(ctx, base);
	// stw r23,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r23.u32);
loc_83A181C4:
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a18220
	if (cr6.eq) goto loc_83A18220;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a1820c
	if (!cr6.gt) goto loc_83A1820C;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83A181E0:
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a18200
	if (cr6.eq) goto loc_83A18200;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83a26ce8
	ctx.lr = 0x83A181F8;
	sub_83A26CE8(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stwx r23,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
loc_83A18200:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83a181e0
	if (!cr0.eq) goto loc_83A181E0;
loc_83A1820C:
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a18220
	if (cr6.eq) goto loc_83A18220;
	// bl 0x83a26ce8
	ctx.lr = 0x83A1821C;
	sub_83A26CE8(ctx, base);
	// stw r23,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r23.u32);
loc_83A18220:
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a26cd8
	ctx.lr = 0x83A1822C;
	sub_83A26CD8(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a18244
	if (!cr6.eq) goto loc_83A18244;
loc_83A18238:
	// lis r23,-32761
	ctx.r23.s64 = -2147024896;
	// ori r23,r23,14
	ctx.r23.u64 = ctx.r23.u64 | 14;
	// b 0x83a184a8
	goto loc_83A184A8;
loc_83A18244:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A18250;
	sub_831CDCF0(ctx, base);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a182a4
	if (!cr6.gt) goto loc_83A182A4;
	// rlwinm r28,r22,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_83A18264:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a26cd8
	ctx.lr = 0x83A1826C;
	sub_83A26CD8(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a18238
	if (cr6.eq) goto loc_83A18238;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A18294;
	sub_831CDCF0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, xer);
	// blt cr6,0x83a18264
	if (cr6.lt) goto loc_83A18264;
loc_83A182A4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a26cd8
	ctx.lr = 0x83A182AC;
	sub_83A26CD8(ctx, base);
	// stw r3,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a18238
	if (cr6.eq) goto loc_83A18238;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A182C4;
	sub_831CDCF0(ctx, base);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a18318
	if (!cr6.gt) goto loc_83A18318;
	// rlwinm r28,r22,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_83A182D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a26cd8
	ctx.lr = 0x83A182E0;
	sub_83A26CD8(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a18238
	if (cr6.eq) goto loc_83A18238;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A18308;
	sub_831CDCF0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, xer);
	// blt cr6,0x83a182d8
	if (cr6.lt) goto loc_83A182D8;
loc_83A18318:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83a183c8
	if (cr6.eq) goto loc_83A183C8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x83a184a8
	if (!cr6.gt) goto loc_83A184A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lfd f30,20040(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20040);
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// lfd f31,-24952(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24952);
	// lfs f29,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
loc_83A1834C:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// ble cr6,0x83a183b8
	if (!cr6.gt) goto loc_83A183B8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// add r29,r28,r21
	ctx.r29.u64 = ctx.r28.u64 + ctx.r21.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_83A18360:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x83a1837c
	if (!cr6.eq) goto loc_83A1837C;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stfsx f29,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// b 0x83a183a8
	goto loc_83A183A8;
loc_83A1837C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f2,f13,f31
	ctx.f2.f64 = ctx.f13.f64 * ctx.f31.f64;
	// bl 0x831d20a0
	ctx.lr = 0x83A18398;
	sub_831D20A0(ctx, base);
	// lwz r10,372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stfsx f12,r9,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
loc_83A183A8:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83a18360
	if (!cr0.eq) goto loc_83A18360;
loc_83A183B8:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x83a1834c
	if (!cr0.eq) goto loc_83A1834C;
	// b 0x83a184a8
	goto loc_83A184A8;
loc_83A183C8:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a183f8
	if (cr6.eq) goto loc_83A183F8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r8,376(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83a17890
	ctx.lr = 0x83A183F0;
	sub_83A17890(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x83a184a8
	goto loc_83A184A8;
loc_83A183F8:
	// cmpw cr6,r27,r22
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r22.s32, xer);
	// beq cr6,0x83a18408
	if (cr6.eq) goto loc_83A18408;
	// lis r23,-32764
	ctx.r23.s64 = -2147221504;
	// b 0x83a184a8
	goto loc_83A184A8;
loc_83A18408:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x83a18474
	if (cr6.lt) goto loc_83A18474;
	// addi r6,r27,-3
	ctx.r6.s64 = ctx.r27.s64 + -3;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83A18424:
	// lwz r7,372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r7,372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r7,372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lwz r4,372(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stfsx f0,r3,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x83a18424
	if (cr6.lt) goto loc_83A18424;
loc_83A18474:
	// cmpw cr6,r9,r27
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, xer);
	// bge cr6,0x83a184a8
	if (!cr6.lt) goto loc_83A184A8;
	// subf r10,r9,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A18488:
	// lwz r10,372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a18488
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A18488;
	// b 0x83a184a8
	goto loc_83A184A8;
loc_83A184A0:
	// lis r23,-32761
	ctx.r23.s64 = -2147024896;
	// ori r23,r23,87
	ctx.r23.u64 = ctx.r23.u64 | 87;
loc_83A184A8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A184C0"))) PPC_WEAK_FUNC(sub_83A184C0);
PPC_FUNC_IMPL(__imp__sub_83A184C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A184C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r28,360(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18560
	if (cr6.eq) goto loc_83A18560;
	// lhz r11,110(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 110);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r25,r11,-16
	ctx.r25.s64 = ctx.r11.s64 + -16;
	// ble cr6,0x83a18560
	if (!cr6.gt) goto loc_83A18560;
	// rlwinm r23,r28,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
loc_83A18500:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x83a18548
	if (!cr6.gt) goto loc_83A18548;
	// addi r29,r24,-2
	ctx.r29.s64 = ctx.r24.s64 + -2;
loc_83A18510:
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r5,110(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1852C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sraw r10,r3,r25
	temp.u32 = ctx.r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// sthu r9,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r29.u32 = ea;
	// blt cr6,0x83a18510
	if (cr6.lt) goto loc_83A18510;
loc_83A18548:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// add r24,r23,r24
	ctx.r24.u64 = ctx.r23.u64 + ctx.r24.u64;
	// mullw r11,r28,r11
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne 0x83a18500
	if (!cr0.eq) goto loc_83A18500;
loc_83A18560:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1856C"))) PPC_WEAK_FUNC(sub_83A1856C);
PPC_FUNC_IMPL(__imp__sub_83A1856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A18570"))) PPC_WEAK_FUNC(sub_83A18570);
PPC_FUNC_IMPL(__imp__sub_83A18570) {
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
	// lwz r11,444(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 444);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1860c
	if (cr6.eq) goto loc_83A1860C;
	// lhz r11,118(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 118);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r6,432(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// lwz r5,428(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 428);
	// lwz r9,304(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x83a2b150
	ctx.lr = 0x83A185B8;
	sub_83A2B150(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,304(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ble cr6,0x83a185f8
	if (!cr6.gt) goto loc_83A185F8;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A185D4:
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x83a185e4
	if (!cr6.gt) goto loc_83A185E4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83A185E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x83a185d4
	if (cr6.lt) goto loc_83A185D4;
loc_83A185F8:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
loc_83A1860C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83A18628"))) PPC_WEAK_FUNC(sub_83A18628);
PPC_FUNC_IMPL(__imp__sub_83A18628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A18630;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r29,34(r8)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + 34);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83a1867c
	if (!cr6.gt) goto loc_83A1867C;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A1865C:
	// lwz r9,320(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r7,388(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r4,60(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// stwx r4,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83a1865c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1865C;
loc_83A1867C:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18974
	if (cr6.eq) goto loc_83A18974;
	// clrlwi r26,r5,16
	ctx.r26.u64 = ctx.r5.u32 & 0xFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83a18974
	if (!cr6.gt) goto loc_83A18974;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mullw r28,r29,r29
	ctx.r28.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r29.s32);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
loc_83A186AC:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a187e0
	if (cr6.eq) goto loc_83A187E0;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// li r8,0
	ctx.r8.s64 = 0;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// blt cr6,0x83a187a0
	if (cr6.lt) goto loc_83A187A0;
	// addi r5,r28,-3
	ctx.r5.s64 = ctx.r28.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A186FC:
	// lwz r7,464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r6,448(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r4,468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// lfsx f12,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfsx f10,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfsx f9,r4,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// lwz r6,448(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r7,464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,468(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f6,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f5,4(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r4,448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r7,468(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lfsx f4,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f1,f4,f0,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfsx f1,r9,r7
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// lwz r6,448(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r3,468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lfsx f12,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f9,f12,f0,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfsx f9,r10,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blt cr6,0x83a186fc
	if (cr6.lt) goto loc_83A186FC;
loc_83A187A0:
	// cmpw cr6,r8,r28
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, xer);
	// bge cr6,0x83a187f0
	if (!cr6.lt) goto loc_83A187F0;
	// subf r10,r8,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r8.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A187B4:
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r9,448(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r8,468(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfsx f10,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfsx f9,r11,r8
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a187b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A187B4;
	// b 0x83a187f0
	goto loc_83A187F0;
loc_83A187E0:
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r3,468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// bl 0x831ce980
	ctx.lr = 0x83A187F0;
	sub_831CE980(ctx, base);
loc_83A187F0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// blt cr6,0x83a18874
	if (cr6.lt) goto loc_83A18874;
	// addi r5,r29,-3
	ctx.r5.s64 = ctx.r29.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A18804:
	// lwz r7,388(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r6,384(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// lwzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lwz r7,384(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lwz r6,388(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r6,384(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r6,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r4,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x83a18804
	if (cr6.lt) goto loc_83A18804;
loc_83A18874:
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, xer);
	// bge cr6,0x83a188a4
	if (!cr6.lt) goto loc_83A188A4;
	// subf r10,r9,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A18888:
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r9,384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a18888
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A18888;
loc_83A188A4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x83a18968
	if (!cr6.gt) goto loc_83A18968;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A188BC:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x83a18918
	if (cr6.lt) goto loc_83A18918;
	// lwz r9,384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A188E8:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfsx f11,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfsx f10,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f8,f9,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f13.f64));
	// blt cr6,0x83a188e8
	if (cr6.lt) goto loc_83A188E8;
loc_83A18918:
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bge cr6,0x83a18934
	if (!cr6.lt) goto loc_83A18934;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_83A18934:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bdnz 0x83a188bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A188BC;
loc_83A18968:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// blt cr6,0x83a186ac
	if (cr6.lt) goto loc_83A186AC;
loc_83A18974:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A18988"))) PPC_WEAK_FUNC(sub_83A18988);
PPC_FUNC_IMPL(__imp__sub_83A18988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A18990;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a18ab8
	if (cr6.eq) goto loc_83A18AB8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83a18ab8
	if (cr6.lt) goto loc_83A18AB8;
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a18ab8
	if (!cr6.eq) goto loc_83A18AB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a31588
	ctx.lr = 0x83A189C8;
	sub_83A31588(ctx, base);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// lwz r9,484(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// li r29,3
	ctx.r29.s64 = 3;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// blt cr6,0x83a18a08
	if (cr6.lt) goto loc_83A18A08;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83A18A08:
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lhz r9,110(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 110);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x83a314d0
	ctx.lr = 0x83A18A28;
	sub_83A314D0(ctx, base);
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r7,496(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// lwz r6,492(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r28,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a18a70
	if (cr6.eq) goto loc_83A18A70;
	// bl 0x83a316d8
	ctx.lr = 0x83A18A60;
	sub_83A316D8(ctx, base);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x83a26ce8
	ctx.lr = 0x83A18A68;
	sub_83A26CE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
loc_83A18A70:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x83a26cd8
	ctx.lr = 0x83A18A78;
	sub_83A26CD8(ctx, base);
	// stw r3,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a18a94
	if (!cr6.eq) goto loc_83A18A94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A18A94:
	// bl 0x83a315d0
	ctx.lr = 0x83A18A98;
	sub_83A315D0(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a31d38
	ctx.lr = 0x83A18AAC;
	sub_83A31D38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a18ab8
	if (cr6.lt) goto loc_83A18AB8;
	// stw r28,472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 472, ctx.r28.u32);
loc_83A18AB8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A18AC0"))) PPC_WEAK_FUNC(sub_83A18AC0);
PPC_FUNC_IMPL(__imp__sub_83A18AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83A18AC8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// beq cr6,0x83a18d14
	if (cr6.eq) goto loc_83A18D14;
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83a18d14
	if (cr6.eq) goto loc_83A18D14;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a18d14
	if (cr6.eq) goto loc_83A18D14;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a18d14
	if (cr6.eq) goto loc_83A18D14;
	// lwz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a18b20
	if (cr6.eq) goto loc_83A18B20;
	// lis r30,-32764
	ctx.r30.s64 = -2147221504;
	// ori r30,r30,10
	ctx.r30.u64 = ctx.r30.u64 | 10;
	// b 0x83a18d1c
	goto loc_83A18D1C;
loc_83A18B20:
	// stw r23,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r23.u32);
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a18d28
	if (cr6.eq) goto loc_83A18D28;
	// lwz r11,820(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 820);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a18b44
	if (!cr6.eq) goto loc_83A18B44;
	// stw r23,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r23.u32);
loc_83A18B44:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// lis r10,-32764
	ctx.r10.s64 = -2147221504;
	// lis r9,-32764
	ctx.r9.s64 = -2147221504;
	// ori r27,r10,2
	ctx.r27.u64 = ctx.r10.u64 | 2;
	// ori r25,r9,4
	ctx.r25.u64 = ctx.r9.u64 | 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18c24
	if (cr6.eq) goto loc_83A18C24;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18b84
	if (cr6.eq) goto loc_83A18B84;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a18b84
	if (cr6.eq) goto loc_83A18B84;
	// bl 0x83a2b828
	ctx.lr = 0x83A18B84;
	sub_83A2B828(ctx, base);
loc_83A18B84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a131a8
	ctx.lr = 0x83A18B8C;
	sub_83A131A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// bne cr6,0x83a18bc8
	if (!cr6.eq) goto loc_83A18BC8;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r28,r11,16960
	ctx.r28.u64 = ctx.r11.u64 | 16960;
loc_83A18BA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a12ea8
	ctx.lr = 0x83A18BA8;
	sub_83A12EA8(ctx, base);
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bgt cr6,0x83a18bd0
	if (cr6.gt) goto loc_83A18BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a131a8
	ctx.lr = 0x83A18BBC;
	sub_83A131A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// beq cr6,0x83a18ba0
	if (cr6.eq) goto loc_83A18BA0;
loc_83A18BC8:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x83a18c18
	if (!cr6.eq) goto loc_83A18C18;
loc_83A18BD0:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18bf8
	if (cr6.eq) goto loc_83A18BF8;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a18bf8
	if (!cr6.eq) goto loc_83A18BF8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x83a18d28
	goto loc_83A18D28;
loc_83A18BF8:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// b 0x83a18d28
	goto loc_83A18D28;
loc_83A18C18:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x83a18d1c
	if (cr6.lt) goto loc_83A18D1C;
	// stw r23,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r23.u32);
loc_83A18C24:
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a13558
	ctx.lr = 0x83A18C38;
	sub_83A13558(ctx, base);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r4.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r8,452(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 452);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x83a18c64
	if (cr6.eq) goto loc_83A18C64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a13e80
	ctx.lr = 0x83A18C60;
	sub_83A13E80(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_83A18C64:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// bne cr6,0x83a18c7c
	if (!cr6.eq) goto loc_83A18C7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a12ea8
	ctx.lr = 0x83A18C74;
	sub_83A12EA8(ctx, base);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x83a18d28
	goto loc_83A18D28;
loc_83A18C7C:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bne cr6,0x83a18cd0
	if (!cr6.eq) goto loc_83A18CD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// stw r10,72(r24)
	PPC_STORE_U32(ctx.r24.u32 + 72, ctx.r10.u32);
	// lwz r9,704(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a18d28
	if (cr6.eq) goto loc_83A18D28;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83a18d28
	if (cr6.eq) goto loc_83A18D28;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x83a2bc20
	ctx.lr = 0x83A18CB0;
	sub_83A2BC20(ctx, base);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// srawi r9,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r6,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r6.u32);
	// b 0x83a18d28
	goto loc_83A18D28;
loc_83A18CD0:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x83a18d00
	if (!cr6.eq) goto loc_83A18D00;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18bf8
	if (cr6.eq) goto loc_83A18BF8;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a18bf8
	if (!cr6.eq) goto loc_83A18BF8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x83a18d28
	goto loc_83A18D28;
loc_83A18D00:
	// li r11,7
	ctx.r11.s64 = 7;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r11,72(r24)
	PPC_STORE_U32(ctx.r24.u32 + 72, ctx.r11.u32);
	// blt cr6,0x83a18d1c
	if (cr6.lt) goto loc_83A18D1C;
	// b 0x83a18d28
	goto loc_83A18D28;
loc_83A18D14:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
loc_83A18D1C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a18d90
	if (cr6.eq) goto loc_83A18D90;
	// stw r23,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r23.u32);
loc_83A18D28:
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a18d44
	if (!cr6.eq) goto loc_83A18D44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 820);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a18d74
	if (cr6.eq) goto loc_83A18D74;
loc_83A18D44:
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18d74
	if (cr6.eq) goto loc_83A18D74;
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a18d74
	if (!cr6.eq) goto loc_83A18D74;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r8.u32);
loc_83A18D74:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x83a18d94
	if (cr6.eq) goto loc_83A18D94;
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83A18D90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A18D94:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A18D9C"))) PPC_WEAK_FUNC(sub_83A18D9C);
PPC_FUNC_IMPL(__imp__sub_83A18D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A18DA0"))) PPC_WEAK_FUNC(sub_83A18DA0);
PPC_FUNC_IMPL(__imp__sub_83A18DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A18DA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,500(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 500);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// bne cr6,0x83a18dd8
	if (!cr6.eq) goto loc_83A18DD8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A18DD8:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18e00
	if (cr6.eq) goto loc_83A18E00;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a18628
	ctx.lr = 0x83A18DF8;
	sub_83A18628(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a18e5c
	if (cr6.lt) goto loc_83A18E5C;
loc_83A18E00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a18988
	ctx.lr = 0x83A18E0C;
	sub_83A18988(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a18e5c
	if (cr6.lt) goto loc_83A18E5C;
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a18e5c
	if (!cr6.eq) goto loc_83A18E5C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83a18e5c
	if (cr6.eq) goto loc_83A18E5C;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// lbz r5,201(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 201);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x83a18e58
	if (!cr6.eq) goto loc_83A18E58;
	// bl 0x83a32f38
	ctx.lr = 0x83A18E4C;
	sub_83A32F38(ctx, base);
	// sth r29,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A18E58:
	// bl 0x83a329e8
	ctx.lr = 0x83A18E5C;
	sub_83A329E8(ctx, base);
loc_83A18E5C:
	// sth r29,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A18E68"))) PPC_WEAK_FUNC(sub_83A18E68);
PPC_FUNC_IMPL(__imp__sub_83A18E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A18E70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a18e9c
	if (cr6.eq) goto loc_83A18E9C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a18ea8
	if (!cr6.eq) goto loc_83A18EA8;
loc_83A18E9C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x83a18fe8
	goto loc_83A18FE8;
loc_83A18EA8:
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lhz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// mullw r7,r8,r29
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpw cr6,r7,r28
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, xer);
	// bgt cr6,0x83a18ffc
	if (cr6.gt) goto loc_83A18FFC;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// bgt cr6,0x83a18ffc
	if (cr6.gt) goto loc_83A18FFC;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a18f54
	if (!cr6.eq) goto loc_83A18F54;
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a18efc
	if (cr6.eq) goto loc_83A18EFC;
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a18f28
	if (!cr6.eq) goto loc_83A18F28;
loc_83A18EFC:
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x83a18f1c
	if (!cr6.eq) goto loc_83A18F1C;
	// bl 0x83a14a58
	ctx.lr = 0x83A18F18;
	sub_83A14A58(ctx, base);
	// b 0x83a18f20
	goto loc_83A18F20;
loc_83A18F1C:
	// bl 0x83a14408
	ctx.lr = 0x83A18F20;
	sub_83A14408(ctx, base);
loc_83A18F20:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a18fe8
	if (cr6.lt) goto loc_83A18FE8;
loc_83A18F28:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a18f54
	if (!cr6.eq) goto loc_83A18F54;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a15050
	ctx.lr = 0x83A18F48;
	sub_83A15050(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a18fe4
	if (cr6.lt) goto loc_83A18FE4;
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_83A18F54:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18f8c
	if (cr6.eq) goto loc_83A18F8C;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a18f8c
	if (cr6.eq) goto loc_83A18F8C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a13ed8
	ctx.lr = 0x83A18F80;
	sub_83A13ED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a18fe4
	if (cr6.lt) goto loc_83A18FE4;
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_83A18F8C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a18fc4
	if (cr6.eq) goto loc_83A18FC4;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a18fc4
	if (cr6.eq) goto loc_83A18FC4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a140a0
	ctx.lr = 0x83A18FB8;
	sub_83A140A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a18fe4
	if (cr6.lt) goto loc_83A18FE4;
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_83A18FC4:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a18fe8
	if (!cr6.eq) goto loc_83A18FE8;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a184c0
	ctx.lr = 0x83A18FE0;
	sub_83A184C0(ctx, base);
	// b 0x83a18fe8
	goto loc_83A18FE8;
loc_83A18FE4:
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_83A18FE8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a19004
	if (cr6.eq) goto loc_83A19004;
	// sth r29,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A18FFC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_83A19004:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1900C"))) PPC_WEAK_FUNC(sub_83A1900C);
PPC_FUNC_IMPL(__imp__sub_83A1900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A19010"))) PPC_WEAK_FUNC(sub_83A19010);
PPC_FUNC_IMPL(__imp__sub_83A19010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83A19018;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a192a8
	if (cr6.eq) goto loc_83A192A8;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a192a8
	if (cr6.eq) goto loc_83A192A8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a192a8
	if (cr6.eq) goto loc_83A192A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a19070
	if (cr6.eq) goto loc_83A19070;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83a192a8
	if (cr6.eq) goto loc_83A192A8;
loc_83A19070:
	// lwz r10,692(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x83a19088
	if (cr6.eq) goto loc_83A19088;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x83a192b8
	goto loc_83A192B8;
loc_83A19088:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r22,700(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// beq cr6,0x83a190bc
	if (cr6.eq) goto loc_83A190BC;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a190b8
	if (cr6.eq) goto loc_83A190B8;
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// b 0x83a190bc
	goto loc_83A190BC;
loc_83A190B8:
	// stw r26,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r26.u32);
loc_83A190BC:
	// lwz r9,416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a190cc
	if (cr6.eq) goto loc_83A190CC;
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
loc_83A190CC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a190e0
	if (cr6.eq) goto loc_83A190E0;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x83a190e4
	goto loc_83A190E4;
loc_83A190E0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_83A190E4:
	// lwz r30,192(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// stw r26,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x831cdcf0
	ctx.lr = 0x83A19104;
	sub_831CDCF0(ctx, base);
	// lhz r8,34(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83a1914c
	if (!cr6.gt) goto loc_83A1914C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A1911C:
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stwx r7,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r7.u32);
	// lhz r8,34(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a1911c
	if (cr6.lt) goto loc_83A1911C;
loc_83A1914C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a19178
	if (cr6.eq) goto loc_83A19178;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83a19178
	if (cr6.eq) goto loc_83A19178;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83a19178
	if (cr6.eq) goto loc_83A19178;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83a192b8
	goto loc_83A192B8;
loc_83A19178:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r7,452(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x83a191ac
	if (cr6.eq) goto loc_83A191AC;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mullw r7,r11,r24
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// divwu r11,r7,r9
	ctx.r11.u32 = PPCDivide(ctx.r7.u32, ctx.r9.u32);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a191ac
	if (cr6.lt) goto loc_83A191AC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83A191AC:
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a191c8
	if (!cr6.eq) goto loc_83A191C8;
	// mullw r11,r10,r28
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// li r10,6
	ctx.r10.s64 = 6;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// b 0x83a191d4
	goto loc_83A191D4;
loc_83A191C8:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// divwu r11,r10,r11
	ctx.r11.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
loc_83A191D4:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a191e0
	if (cr6.lt) goto loc_83A191E0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83A191E0:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r9,708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a29528
	ctx.lr = 0x83A191FC;
	sub_83A29528(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a192b4
	if (cr6.lt) goto loc_83A192B4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a18e68
	ctx.lr = 0x83A19220;
	sub_83A18E68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a192b4
	if (cr6.lt) goto loc_83A192B4;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83a1924c
	if (cr6.eq) goto loc_83A1924C;
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,360(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// stw r6,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r6.u32);
loc_83A1924C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83a19274
	if (cr6.eq) goto loc_83A19274;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 184);
	// lwz r8,336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r9,r7
	ctx.r5.s64 = ctx.r9.s64 * ctx.r7.s64;
	// divd r4,r5,r6
	ctx.r4.s64 = PPCDivide(ctx.r5.s64, ctx.r6.s64);
	// std r4,0(r21)
	PPC_STORE_U64(ctx.r21.u32 + 0, ctx.r4.u64);
loc_83A19274:
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// ld r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 184);
	// clrldi r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFF;
	// subf r7,r8,r22
	ctx.r7.s64 = ctx.r22.s64 - ctx.r8.s64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// stw r7,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r7.u32);
	// std r6,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r6.u64);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r10.u32);
	// b 0x83a192b8
	goto loc_83A192B8;
loc_83A192A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x83a192b8
	goto loc_83A192B8;
loc_83A192B4:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_83A192B8:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x83a192c8
	if (cr6.eq) goto loc_83A192C8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_83A192C8:
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a19304
	if (cr6.eq) goto loc_83A19304;
	// lwz r11,696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a19304
	if (cr6.eq) goto loc_83A19304;
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a19304
	if (!cr6.eq) goto loc_83A19304;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r8.u32);
loc_83A19304:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x83a19314
	if (cr6.eq) goto loc_83A19314;
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_83A19314:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1931C"))) PPC_WEAK_FUNC(sub_83A1931C);
PPC_FUNC_IMPL(__imp__sub_83A1931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A19320"))) PPC_WEAK_FUNC(sub_83A19320);
PPC_FUNC_IMPL(__imp__sub_83A19320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,11072(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 11072);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x83a19010
	ctx.lr = 0x83A19360;
	sub_83A19010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83a19370
	// ERROR 83A19370
	return;
}

__attribute__((alias("__imp__sub_83A19328"))) PPC_WEAK_FUNC(sub_83A19328);
PPC_FUNC_IMPL(__imp__sub_83A19328) {
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
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x83a19010
	ctx.lr = 0x83A19360;
	sub_83A19010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83a19370
	goto loc_83A19370;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_83A19370:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
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

__attribute__((alias("__imp__sub_83A19368"))) PPC_WEAK_FUNC(sub_83A19368);
PPC_FUNC_IMPL(__imp__sub_83A19368) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
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

__attribute__((alias("__imp__sub_83A19388"))) PPC_WEAK_FUNC(sub_83A19388);
PPC_FUNC_IMPL(__imp__sub_83A19388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A193AC"))) PPC_WEAK_FUNC(sub_83A193AC);
PPC_FUNC_IMPL(__imp__sub_83A193AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A193B0"))) PPC_WEAK_FUNC(sub_83A193B0);
PPC_FUNC_IMPL(__imp__sub_83A193B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83A193B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// beq cr6,0x83a19cd8
	if (cr6.eq) goto loc_83A19CD8;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a19cd8
	if (cr6.eq) goto loc_83A19CD8;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83a1979c
	if (cr6.gt) goto loc_83A1979C;
	// li r20,1
	ctx.r20.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a194a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A194A0;
	// bdzf 4*cr6+eq,0x83a194a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A194A8;
	// bdzf 4*cr6+eq,0x83a194b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A194B0;
	// bdzf 4*cr6+eq,0x83a1979c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A1979C;
	// bdzf 4*cr6+eq,0x83a194bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A194BC;
	// bdzf 4*cr6+eq,0x83a194cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A194CC;
	// bne cr6,0x83a194dc
	if (!cr6.eq) goto loc_83A194DC;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_83A19430:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a129c8
	ctx.lr = 0x83A19444;
	sub_83A129C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a126f8
	ctx.lr = 0x83A19458;
	sub_83A126F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// bl 0x83a28a30
	ctx.lr = 0x83A19468;
	sub_83A28A30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// lis r11,-31837
	ctx.r11.s64 = -2086469632;
	// lis r10,-31839
	ctx.r10.s64 = -2086600704;
	// addi r9,r11,25096
	ctx.r9.s64 = ctx.r11.s64 + 25096;
	// addi r8,r10,12296
	ctx.r8.s64 = ctx.r10.s64 + 12296;
	// stw r9,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r9.u32);
	// stw r8,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r8.u32);
loc_83A19490:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83a194f0
	if (cr6.eq) goto loc_83A194F0;
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// b 0x83a194f4
	goto loc_83A194F4;
loc_83A194A0:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x83a19430
	goto loc_83A19430;
loc_83A194A8:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x83a19430
	goto loc_83A19430;
loc_83A194B0:
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// b 0x83a19430
	goto loc_83A19430;
loc_83A194BC:
	// li r20,1
	ctx.r20.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x83a19490
	goto loc_83A19490;
loc_83A194CC:
	// li r20,1
	ctx.r20.s64 = 1;
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x83a19490
	goto loc_83A19490;
loc_83A194DC:
	// li r20,1
	ctx.r20.s64 = 1;
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// b 0x83a19490
	goto loc_83A19490;
loc_83A194F0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83A194F4:
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// lhz r6,20(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 20);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83a35d18
	ctx.lr = 0x83A19514;
	sub_83A35D18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a1979c
	if (!cr6.gt) goto loc_83A1979C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// addi r11,r31,476
	ctx.r11.s64 = ctx.r31.s64 + 476;
	// beq cr6,0x83a1954c
	if (cr6.eq) goto loc_83A1954C;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A1953C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83a1953c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1953C;
	// b 0x83a19564
	goto loc_83A19564;
loc_83A1954C:
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A1955C:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a1955c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1955C;
loc_83A19564:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r27,480(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// rlwinm r8,r10,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a19584
	if (cr6.eq) goto loc_83A19584;
	// stw r20,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r20.u32);
loc_83A19584:
	// lhz r8,500(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 500);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a195a4
	if (cr6.eq) goto loc_83A195A4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,128
	ctx.r22.u64 = ctx.r9.u64 | 128;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_83A195A4:
	// lhz r10,14(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 14);
	// lwz r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83a195c4
	if (cr6.gt) goto loc_83A195C4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_83A195C4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r29,20(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r17,0(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r16,22(r25)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r25.u32 + 22);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r15,20(r25)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r25.u32 + 20);
	// lhz r26,12(r25)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r25.u32 + 12);
	// lwz r30,8(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r14,16(r25)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lhz r8,2(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// sth r16,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r16.u16);
	// sth r15,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r15.u16);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x83a29478
	ctx.lr = 0x83A19618;
	sub_83A29478(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a12398
	ctx.lr = 0x83A1962C;
	sub_83A12398(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x83a1979c
	if (cr6.gt) goto loc_83A1979C;
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// mulli r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 * 1776;
	// bl 0x83a26cd8
	ctx.lr = 0x83A19644;
	sub_83A26CD8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,1776
	ctx.r5.s64 = ctx.r11.s64 * 1776;
	// bl 0x831cdcf0
	ctx.lr = 0x83A19660;
	sub_831CDCF0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a27360
	ctx.lr = 0x83A1966C;
	sub_83A27360(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a12808
	ctx.lr = 0x83A19684;
	sub_83A12808(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a27908
	ctx.lr = 0x83A1969C;
	sub_83A27908(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,320(r28)
	PPC_STORE_U32(ctx.r28.u32 + 320, ctx.r11.u32);
	// bl 0x83a16ed0
	ctx.lr = 0x83A196B8;
	sub_83A16ED0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// lwz r11,588(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 588);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a196ec
	if (cr6.eq) goto loc_83A196EC;
	// lis r11,-31837
	ctx.r11.s64 = -2086469632;
	// stw r24,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r24.u32);
	// lis r10,-31837
	ctx.r10.s64 = -2086469632;
	// addi r9,r11,23792
	ctx.r9.s64 = ctx.r11.s64 + 23792;
	// addi r8,r10,23536
	ctx.r8.s64 = ctx.r10.s64 + 23536;
	// stw r9,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r9.u32);
	// stw r8,484(r28)
	PPC_STORE_U32(ctx.r28.u32 + 484, ctx.r8.u32);
loc_83A196EC:
	// stw r24,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r24.u32);
	// stw r24,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r24.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// lwz r7,360(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// lhz r10,34(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x83a19720
	if (!cr6.eq) goto loc_83A19720;
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a19730
	if (cr6.eq) goto loc_83A19730;
loc_83A19720:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a1979c
	if (!cr6.gt) goto loc_83A1979C;
	// stw r20,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r20.u32);
loc_83A19730:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a19854
	if (!cr6.eq) goto loc_83A19854;
	// rlwinm r11,r22,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1974c
	if (cr6.eq) goto loc_83A1974C;
	// stw r20,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r20.u32);
loc_83A1974C:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a1976c
	if (!cr6.eq) goto loc_83A1976C;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83a1976c
	if (!cr6.eq) goto loc_83A1976C;
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bgt cr6,0x83a19770
	if (cr6.gt) goto loc_83A19770;
loc_83A1976C:
	// stw r24,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r24.u32);
loc_83A19770:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a197ac
	if (!cr6.eq) goto loc_83A197AC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,104(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lhz r5,34(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// bl 0x83a18120
	ctx.lr = 0x83A19794;
	sub_83A18120(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a19854
	if (cr6.eq) goto loc_83A19854;
loc_83A1979C:
	// lis r29,-32764
	ctx.r29.s64 = -2147221504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83A197AC:
	// stw r24,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r24.u32);
	// lhz r5,34(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bne cr6,0x83a197c8
	if (!cr6.eq) goto loc_83A197C8;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(ctx.r11.u32, 63, xer);
	// beq cr6,0x83a197f0
	if (cr6.eq) goto loc_83A197F0;
loc_83A197C8:
	// li r8,63
	ctx.r8.s64 = 63;
	// lwz r6,104(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a18120
	ctx.lr = 0x83A197E0;
	sub_83A18120(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// stw r20,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r20.u32);
loc_83A197F0:
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x83a26cd8
	ctx.lr = 0x83A197F8;
	sub_83A26CD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r3.u32);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// bl 0x83a299d0
	ctx.lr = 0x83A19808;
	sub_83A299D0(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,452(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 452);
	// lhz r11,110(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 110);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r11,r20,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x83a29ae0
	ctx.lr = 0x83A19848;
	sub_83A29AE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
loc_83A19854:
	// stw r24,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r24.u32);
	// stw r24,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r24.u32);
	// stw r24,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r24.u32);
	// stw r24,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r24.u32);
	// stw r24,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r24.u32);
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83a198c8
	if (!cr6.gt) goto loc_83A198C8;
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83a26cd8
	ctx.lr = 0x83A19884;
	sub_83A26CD8(ctx, base);
	// stw r3,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83a26cd8
	ctx.lr = 0x83A198A0;
	sub_83A26CD8(ctx, base);
	// stw r3,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83a26cd8
	ctx.lr = 0x83A198BC;
	sub_83A26CD8(ctx, base);
	// stw r3,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
loc_83A198C8:
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x83a198dc
	if (cr6.gt) goto loc_83A198DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A198DC:
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a198f4
	if (cr6.eq) goto loc_83A198F4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bgt cr6,0x83a198f4
	if (cr6.gt) goto loc_83A198F4;
	// li r11,6
	ctx.r11.s64 = 6;
loc_83A198F4:
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a26cd8
	ctx.lr = 0x83A19900;
	sub_83A26CD8(ctx, base);
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a26cd8
	ctx.lr = 0x83A19918;
	sub_83A26CD8(ctx, base);
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a12bf0
	ctx.lr = 0x83A19934;
	sub_83A12BF0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r24,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r24.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r24,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r24.u32);
	// stw r24,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r24.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// lwz r11,452(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 452);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bne cr6,0x83a19964
	if (!cr6.eq) goto loc_83A19964;
	// stw r20,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r20.u32);
	// b 0x83a19980
	goto loc_83A19980;
loc_83A19964:
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// beq cr6,0x83a19980
	if (cr6.eq) goto loc_83A19980;
	// stw r20,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r20.u32);
	// lwz r11,452(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 452);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a19980
	if (!cr6.lt) goto loc_83A19980;
	// stw r20,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r20.u32);
loc_83A19980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,452(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 452);
	// bl 0x83a13e30
	ctx.lr = 0x83A1998C;
	sub_83A13E30(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r10,10000
	cr6.compare<int32_t>(ctx.r10.s32, 10000, xer);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// bge cr6,0x83a1979c
	if (!cr6.lt) goto loc_83A1979C;
	// cmpwi cr6,r11,10000
	cr6.compare<int32_t>(ctx.r11.s32, 10000, xer);
	// bge cr6,0x83a1979c
	if (!cr6.lt) goto loc_83A1979C;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a199c0
	if (!cr6.eq) goto loc_83A199C0;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a19a20
	if (cr6.eq) goto loc_83A19A20;
loc_83A199C0:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83a26cd8
	ctx.lr = 0x83A199CC;
	sub_83A26CD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a19a08
	if (!cr6.gt) goto loc_83A19A08;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83A199EC:
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r24,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,360(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a199ec
	if (cr6.lt) goto loc_83A199EC;
loc_83A19A08:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83a26cd8
	ctx.lr = 0x83A19A14;
	sub_83A26CD8(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
loc_83A19A20:
	// lis r11,-31838
	ctx.r11.s64 = -2086535168;
	// rlwinm r10,r22,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x80;
	// addi r9,r11,-29280
	ctx.r9.s64 = ctx.r11.s64 + -29280;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r9.u32);
	// stw r24,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r24.u32);
	// beq cr6,0x83a19a58
	if (cr6.eq) goto loc_83A19A58;
	// lhz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83a18988
	ctx.lr = 0x83A19A4C;
	sub_83A18988(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
loc_83A19A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a12c68
	ctx.lr = 0x83A19A60;
	sub_83A12C68(ctx, base);
	// lhz r11,2(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a19a78
	if (!cr6.eq) goto loc_83A19A78;
	// lis r11,-31837
	ctx.r11.s64 = -2086469632;
	// addi r10,r11,15008
	ctx.r10.s64 = ctx.r11.s64 + 15008;
	// b 0x83a19a80
	goto loc_83A19A80;
loc_83A19A78:
	// lis r11,-31837
	ctx.r11.s64 = -2086469632;
	// addi r10,r11,15136
	ctx.r10.s64 = ctx.r11.s64 + 15136;
loc_83A19A80:
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// addi r25,r31,224
	ctx.r25.s64 = ctx.r31.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a2bdf0
	ctx.lr = 0x83A19A94;
	sub_83A2BDF0(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83a19aac
	if (cr6.eq) goto loc_83A19AAC;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
loc_83A19AAC:
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a19ae4
	if (!cr6.eq) goto loc_83A19AE4;
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// addi r8,r10,3744
	ctx.r8.s64 = ctx.r10.s64 + 3744;
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// addi r6,r9,22224
	ctx.r6.s64 = ctx.r9.s64 + 22224;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r5,r7,23176
	ctx.r5.s64 = ctx.r7.s64 + 23176;
	// lwz r4,320(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// stw r6,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// b 0x83a19b38
	goto loc_83A19B38;
loc_83A19AE4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a19b08
	if (!cr6.eq) goto loc_83A19B08;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32206
	ctx.r9.s64 = -2110652416;
	// lis r6,-32206
	ctx.r6.s64 = -2110652416;
	// addi r8,r10,16888
	ctx.r8.s64 = ctx.r10.s64 + 16888;
	// addi r7,r9,-30032
	ctx.r7.s64 = ctx.r9.s64 + -30032;
	// addi r5,r6,-28704
	ctx.r5.s64 = ctx.r6.s64 + -28704;
	// b 0x83a19b28
	goto loc_83A19B28;
loc_83A19B08:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a19cd8
	if (!cr6.eq) goto loc_83A19CD8;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// lis r6,-32207
	ctx.r6.s64 = -2110717952;
	// addi r8,r10,5488
	ctx.r8.s64 = ctx.r10.s64 + 5488;
	// addi r7,r9,25872
	ctx.r7.s64 = ctx.r9.s64 + 25872;
	// addi r5,r6,28544
	ctx.r5.s64 = ctx.r6.s64 + 28544;
loc_83A19B28:
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r4,320(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// stw r7,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
loc_83A19B38:
	// lwz r3,320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r10,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r10.u32);
	// beq cr6,0x83a19b60
	if (cr6.eq) goto loc_83A19B60;
	// bl 0x83a2a780
	ctx.lr = 0x83A19B5C;
	sub_83A2A780(ctx, base);
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
loc_83A19B60:
	// stw r24,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r24.u32);
	// addi r27,r31,120
	ctx.r27.s64 = ctx.r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r4,34(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// bl 0x83a2b1e0
	ctx.lr = 0x83A19B74;
	sub_83A2B1E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a19ce0
	if (cr6.lt) goto loc_83A19CE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lhz r10,34(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a19c00
	if (cr6.eq) goto loc_83A19C00;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_83A19B98:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r24.u32);
	// lhz r10,34(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83a26cd8
	ctx.lr = 0x83A19BB4;
	sub_83A26CD8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r3,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,148(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cdcf0
	ctx.lr = 0x83A19BE8;
	sub_831CDCF0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// lhz r8,34(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// cmpw cr6,r26,r8
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a19b98
	if (cr6.lt) goto loc_83A19B98;
loc_83A19C00:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// stw r24,572(r28)
	PPC_STORE_U32(ctx.r28.u32 + 572, ctx.r24.u32);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// stw r11,576(r28)
	PPC_STORE_U32(ctx.r28.u32 + 576, ctx.r11.u32);
	// blt cr6,0x83a19c28
	if (cr6.lt) goto loc_83A19C28;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a19c30
	if (!cr6.eq) goto loc_83A19C30;
loc_83A19C28:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// beq cr6,0x83a19c4c
	if (cr6.eq) goto loc_83A19C4C;
loc_83A19C30:
	// stw r20,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r20.u32);
	// b 0x83a19c50
	goto loc_83A19C50;
loc_83A19C38:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83A19C4C:
	// stw r24,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r24.u32);
loc_83A19C50:
	// stw r24,124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 124, ctx.r24.u32);
	// stw r20,732(r28)
	PPC_STORE_U32(ctx.r28.u32 + 732, ctx.r20.u32);
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x83a26cd8
	ctx.lr = 0x83A19C64;
	sub_83A26CD8(ctx, base);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a19c38
	if (cr6.eq) goto loc_83A19C38;
	// lhz r11,34(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x831cdcf0
	ctx.lr = 0x83A19C80;
	sub_831CDCF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823fc7c0
	ctx.lr = 0x83A19C90;
	sub_823FC7C0(ctx, base);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r20.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r24,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r24.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r24,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r24.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// sth r24,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r24.u16);
	// std r11,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83A19CD8:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
loc_83A19CE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A19CEC"))) PPC_WEAK_FUNC(sub_83A19CEC);
PPC_FUNC_IMPL(__imp__sub_83A19CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A19CF0"))) PPC_WEAK_FUNC(sub_83A19CF0);
PPC_FUNC_IMPL(__imp__sub_83A19CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// beq cr6,0x83a19d20
	if (cr6.eq) goto loc_83A19D20;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r11,r11,-19936
	ctx.r11.s64 = ctx.r11.s64 + -19936;
	// beq cr6,0x83a19d14
	if (cr6.eq) goto loc_83A19D14;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r8,r11,8768
	ctx.r8.s64 = ctx.r11.s64 + 8768;
	// b 0x83a19d28
	goto loc_83A19D28;
loc_83A19D14:
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r8,r11,6104
	ctx.r8.s64 = ctx.r11.s64 + 6104;
	// b 0x83a19d28
	goto loc_83A19D28;
loc_83A19D20:
	// li r9,30
	ctx.r9.s64 = 30;
	// addi r8,r11,-19936
	ctx.r8.s64 = ctx.r11.s64 + -19936;
loc_83A19D28:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a19d88
	if (cr6.eq) goto loc_83A19D88;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83A19D38:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83a19d50
	if (!cr6.eq) goto loc_83A19D50;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// beq cr6,0x83a19d68
	if (cr6.eq) goto loc_83A19D68;
loc_83A19D50:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a19d38
	if (cr6.lt) goto loc_83A19D38;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A19D68:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a19d88
	if (cr6.eq) goto loc_83A19D88;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_83A19D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A19D90"))) PPC_WEAK_FUNC(sub_83A19D90);
PPC_FUNC_IMPL(__imp__sub_83A19D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfe r31,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r10,0
	ctx.r10.s64 = 0;
	// and r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x83a19e5c
	if (!cr6.lt) goto loc_83A19E5C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x83a19dc0
	if (cr6.eq) goto loc_83A19DC0;
	// li r3,32
	ctx.r3.s64 = 32;
loc_83A19DC0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a19dd0
	if (cr6.eq) goto loc_83A19DD0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r11,2
	ctx.r3.u64 = ctx.r11.u64 | 2;
loc_83A19DD0:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83a19ef0
	if (cr6.eq) goto loc_83A19EF0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83a19e24
	if (!cr6.eq) goto loc_83A19E24;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// ble cr6,0x83a19e04
	if (!cr6.gt) goto loc_83A19E04;
loc_83A19DF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x83a19df4
	if (cr6.gt) goto loc_83A19DF4;
loc_83A19E04:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83A19E24:
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// ble cr6,0x83a19e3c
	if (!cr6.gt) goto loc_83A19E3C;
loc_83A19E2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x83a19e2c
	if (cr6.gt) goto loc_83A19E2C;
loc_83A19E3C:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83A19E5C:
	// bne cr6,0x83a19eec
	if (!cr6.eq) goto loc_83A19EEC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a19e80
	if (cr6.eq) goto loc_83A19E80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// bne cr6,0x83a19e80
	if (!cr6.eq) goto loc_83A19E80;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83a19ea0
	goto loc_83A19EA0;
loc_83A19E80:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a19e8c
	if (cr6.eq) goto loc_83A19E8C;
	// li r10,64
	ctx.r10.s64 = 64;
loc_83A19E8C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a19ea0
	if (cr6.eq) goto loc_83A19EA0;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
loc_83A19EA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// ble cr6,0x83a19ebc
	if (!cr6.gt) goto loc_83A19EBC;
loc_83A19EAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x83a19eac
	if (cr6.gt) goto loc_83A19EAC;
loc_83A19EBC:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r7,r3,31
	ctx.r7.u64 = ctx.r3.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a19ef0
	if (cr6.eq) goto loc_83A19EF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r3,r11,256
	ctx.r3.u64 = ctx.r11.u64 | 256;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83A19EEC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_83A19EF0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A19EF8"))) PPC_WEAK_FUNC(sub_83A19EF8);
PPC_FUNC_IMPL(__imp__sub_83A19EF8) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// beq cr6,0x83a19f40
	if (cr6.eq) goto loc_83A19F40;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83a19f38
	if (!cr6.eq) goto loc_83A19F38;
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83a19f40
	if (!cr6.eq) goto loc_83A19F40;
loc_83A19F38:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83a19f44
	goto loc_83A19F44;
loc_83A19F40:
	// li r4,0
	ctx.r4.s64 = 0;
loc_83A19F44:
	// divwu r9,r11,r10
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// lwz r31,32(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// li r6,32000
	ctx.r6.s64 = 32000;
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// lwz r30,16(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// subfc r3,r6,r9
	xer.ca = ctx.r9.u32 >= ctx.r6.u32;
	ctx.r3.s64 = ctx.r9.s64 - ctx.r6.s64;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addic r5,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// subfe r5,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83a19d90
	ctx.lr = 0x83A19F88;
	sub_83A19D90(ctx, base);
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

__attribute__((alias("__imp__sub_83A19FA0"))) PPC_WEAK_FUNC(sub_83A19FA0);
PPC_FUNC_IMPL(__imp__sub_83A19FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A19FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// bne cr6,0x83a19fd4
	if (!cr6.eq) goto loc_83A19FD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A19FD4:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a35d18
	ctx.lr = 0x83A19FE8;
	sub_83A35D18(ctx, base);
	// mullw r11,r3,r28
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r31,32
	ctx.r9.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mulld r9,r9,r11
	ctx.r9.s64 = ctx.r9.s64 * ctx.r11.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// divd r7,r8,r10
	ctx.r7.s64 = PPCDivide(ctx.r8.s64, ctx.r10.s64);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r6,r10,7
	ctx.r6.s64 = ctx.r10.s64 + 7;
	// rlwinm r9,r6,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// bne cr6,0x83a1a094
	if (!cr6.eq) goto loc_83A1A094;
	// cmplwi cr6,r30,44100
	cr6.compare<uint32_t>(ctx.r30.u32, 44100, xer);
	// bne cr6,0x83a1a094
	if (!cr6.eq) goto loc_83A1A094;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// bne cr6,0x83a1a094
	if (!cr6.eq) goto loc_83A1A094;
	// cmplwi cr6,r31,32000
	cr6.compare<uint32_t>(ctx.r31.u32, 32000, xer);
	// bne cr6,0x83a1a094
	if (!cr6.eq) goto loc_83A1A094;
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r8,r8,44100
	ctx.r8.u64 = ctx.r8.u64 | 44100;
	// mulld r7,r10,r8
	ctx.r7.s64 = ctx.r10.s64 * ctx.r8.s64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// divd r6,r7,r11
	ctx.r6.s64 = PPCDivide(ctx.r7.s64, ctx.r11.s64);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r5,r7,7
	ctx.r5.s64 = ctx.r7.s64 + 7;
	// rlwinm r4,r5,0,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r4,32000
	cr6.compare<uint32_t>(ctx.r4.u32, 32000, xer);
	// blt cr6,0x83a1a094
	if (cr6.lt) goto loc_83A1A094;
loc_83A1A064:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r7,r7,r8
	ctx.r7.s64 = ctx.r7.s64 * ctx.r8.s64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// divd r5,r6,r11
	ctx.r5.s64 = PPCDivide(ctx.r6.s64, ctx.r11.s64);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r4,r7,7
	ctx.r4.s64 = ctx.r7.s64 + 7;
	// rlwinm r3,r4,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r3,32000
	cr6.compare<uint32_t>(ctx.r3.u32, 32000, xer);
	// bge cr6,0x83a1a064
	if (!cr6.lt) goto loc_83A1A064;
loc_83A1A094:
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1A0A0"))) PPC_WEAK_FUNC(sub_83A1A0A0);
PPC_FUNC_IMPL(__imp__sub_83A1A0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A1A0A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x83a35d18
	ctx.lr = 0x83A1A0D4;
	sub_83A35D18(ctx, base);
	// mullw r11,r3,r28
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r28.s32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrldi r31,r11,32
	ctx.r31.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x83a19fa0
	ctx.lr = 0x83A1A0F8;
	sub_83A19FA0(ctx, base);
	// rlwinm r10,r3,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x7FFF8;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// mulld r11,r10,r9
	ctx.r11.s64 = ctx.r10.s64 * ctx.r9.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divd r7,r8,r31
	ctx.r7.s64 = PPCDivide(ctx.r8.s64, ctx.r31.s64);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// rlwinm r3,r6,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1A124"))) PPC_WEAK_FUNC(sub_83A1A124);
PPC_FUNC_IMPL(__imp__sub_83A1A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1A128"))) PPC_WEAK_FUNC(sub_83A1A128);
PPC_FUNC_IMPL(__imp__sub_83A1A128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A1A130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,32000
	ctx.r11.s64 = 32000;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 5;
	// bl 0x83a35d18
	ctx.lr = 0x83A1A164;
	sub_83A35D18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a1a174
	if (!cr6.eq) goto loc_83A1A174;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A1A174:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83a1a1a0
	if (!cr6.eq) goto loc_83A1A1A0;
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// divwu r9,r31,r10
	ctx.r9.u32 = PPCDivide(ctx.r31.u32, ctx.r10.u32);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bge cr6,0x83a1a1a0
	if (!cr6.lt) goto loc_83A1A1A0;
	// mullw r11,r3,r29
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// divwu r3,r31,r11
	ctx.r3.u32 = PPCDivide(ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A1A1A0:
	// lbz r3,7(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1A1AC"))) PPC_WEAK_FUNC(sub_83A1A1AC);
PPC_FUNC_IMPL(__imp__sub_83A1A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1A1B0"))) PPC_WEAK_FUNC(sub_83A1A1B0);
PPC_FUNC_IMPL(__imp__sub_83A1A1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83A1A1B8;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r28,108(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r29,112(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r19,4(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lhz r31,2(r7)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// li r23,2
	ctx.r23.s64 = 2;
	// lwz r24,28(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r25,32(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r20,36(r7)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r27,40(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r5,24(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r18,44(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// bne cr6,0x83a1a21c
	if (!cr6.eq) goto loc_83A1A21C;
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a21c
	if (!cr6.eq) goto loc_83A1A21C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83a1a880
	if (cr6.eq) goto loc_83A1A880;
loc_83A1A21C:
	// li r15,8
	ctx.r15.s64 = 8;
	// cmplwi cr6,r17,2
	cr6.compare<uint32_t>(ctx.r17.u32, 2, xer);
	// bgt cr6,0x83a1a284
	if (cr6.gt) goto loc_83A1A284;
	// lhz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// rlwinm r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a1a27c
	if (cr6.eq) goto loc_83A1A27C;
	// rlwinm r10,r8,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a1a27c
	if (cr6.eq) goto loc_83A1A27C;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rlwinm r30,r8,29,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x3;
	// bl 0x83a1a0a0
	ctx.lr = 0x83A1A260;
	sub_83A1A0A0(ctx, base);
	// divwu r11,r3,r31
	ctx.r11.u32 = PPCDivide(ctx.r3.u32, ctx.r31.u32);
	// cmplwi cr6,r11,4000
	cr6.compare<uint32_t>(ctx.r11.u32, 4000, xer);
	// blt cr6,0x83a1a274
	if (cr6.lt) goto loc_83A1A274;
	// slw r31,r15,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r30.u8 & 0x3F));
	// b 0x83a1a2d8
	goto loc_83A1A2D8;
loc_83A1A274:
	// slw r31,r23,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r30.u8 & 0x3F));
	// b 0x83a1a2d8
	goto loc_83A1A2D8;
loc_83A1A27C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x83a1a2d8
	goto loc_83A1A2D8;
loc_83A1A284:
	// lhz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,29,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// slw r31,r10,r9
	ctx.r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x83a1a9e8
	if (cr6.gt) goto loc_83A1A9E8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1a2d8
	if (cr6.eq) goto loc_83A1A2D8;
	// bdz 0x83a1a9e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A9E8;
	// bdz 0x83a1a2c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A2C4;
	// bdz 0x83a1a9e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A9E8;
	// bdz 0x83a1a2cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A2CC;
	// bdz 0x83a1a9e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A9E8;
	// b 0x83a1a2d4
	goto loc_83A1A2D4;
loc_83A1A2C4:
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x83a1a2d8
	goto loc_83A1A2D8;
loc_83A1A2CC:
	// li r23,4
	ctx.r23.s64 = 4;
	// b 0x83a1a2d8
	goto loc_83A1A2D8;
loc_83A1A2D4:
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
loc_83A1A2D8:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// ori r5,r11,52429
	ctx.r5.u64 = ctx.r11.u64 | 52429;
	// li r3,5
	ctx.r3.s64 = 5;
	// ori r6,r10,43691
	ctx.r6.u64 = ctx.r10.u64 | 43691;
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r17,3
	cr6.compare<uint32_t>(ctx.r17.u32, 3, xer);
	// bne cr6,0x83a1a358
	if (!cr6.eq) goto loc_83A1A358;
	// lwz r11,92(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1a358
	if (cr6.eq) goto loc_83A1A358;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a358
	if (!cr6.eq) goto loc_83A1A358;
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,151
	cr6.compare<uint32_t>(ctx.r11.u32, 151, xer);
	// bge cr6,0x83a1a338
	if (!cr6.lt) goto loc_83A1A338;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// rlwinm r11,r24,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// bne cr6,0x83a1a34c
	if (!cr6.eq) goto loc_83A1A34C;
loc_83A1A328:
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a548
	if (cr6.lt) goto loc_83A1A548;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x83a1a368
	goto loc_83A1A368;
loc_83A1A338:
	// cmplwi cr6,r11,251
	cr6.compare<uint32_t>(ctx.r11.u32, 251, xer);
	// bge cr6,0x83a1a358
	if (!cr6.lt) goto loc_83A1A358;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// rlwinm r11,r24,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x83a1a328
	if (cr6.eq) goto loc_83A1A328;
loc_83A1A34C:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a358
	if (cr6.lt) goto loc_83A1A358;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83A1A358:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83a1a548
	if (cr6.eq) goto loc_83A1A548;
	// cmplwi cr6,r17,3
	cr6.compare<uint32_t>(ctx.r17.u32, 3, xer);
	// bne cr6,0x83a1a548
	if (!cr6.eq) goto loc_83A1A548;
loc_83A1A368:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x83a1a548
	if (cr6.eq) goto loc_83A1A548;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x83a1a4b4
	if (!cr6.eq) goto loc_83A1A4B4;
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// ble cr6,0x83a1a4b4
	if (!cr6.gt) goto loc_83A1A4B4;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r23,r23,31,1,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// rlwinm r18,r18,31,1,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a1a3ac
	if (!cr6.eq) goto loc_83A1A3AC;
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a548
	if (!cr6.eq) goto loc_83A1A548;
loc_83A1A3AC:
	// rlwinm r11,r27,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a1a3c0
	if (cr6.lt) goto loc_83A1A3C0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_83A1A3C0:
	// rlwinm r11,r20,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 31) & 0x7FFFFFFF;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a1a3d4
	if (cr6.lt) goto loc_83A1A3D4;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_83A1A3D4:
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(ctx.r27.u32, 5, xer);
	// bgt cr6,0x83a1a3e4
	if (cr6.gt) goto loc_83A1A3E4;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x83a1a548
	goto loc_83A1A548;
loc_83A1A3E4:
	// mulhwu r11,r27,r5
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83a1a404
	if (!cr0.eq) goto loc_83A1A404;
	// divwu r25,r27,r3
	ctx.r25.u32 = PPCDivide(ctx.r27.u32, ctx.r3.u32);
	// b 0x83a1a548
	goto loc_83A1A548;
loc_83A1A404:
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// ble cr6,0x83a1a420
	if (!cr6.gt) goto loc_83A1A420;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1a420
	if (!cr6.eq) goto loc_83A1A420;
	// rlwinm r25,r27,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x83a1a548
	goto loc_83A1A548;
loc_83A1A420:
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// ble cr6,0x83a1a448
	if (!cr6.gt) goto loc_83A1A448;
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a1a448
	if (!cr0.eq) goto loc_83A1A448;
	// divwu r25,r27,r4
	ctx.r25.u32 = PPCDivide(ctx.r27.u32, ctx.r4.u32);
	// b 0x83a1a548
	goto loc_83A1A548;
loc_83A1A448:
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a484
	if (cr6.lt) goto loc_83A1A484;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83a1a47c
	if (cr6.gt) goto loc_83A1A47C;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// rlwinm r25,r27,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x83a1a4a0
	goto loc_83A1A4A0;
loc_83A1A47C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83a1a498
	if (cr6.gt) goto loc_83A1A498;
loc_83A1A484:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83a1a498
	if (cr6.gt) goto loc_83A1A498;
	// subf r27,r10,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r10.s64;
	// divwu r25,r27,r4
	ctx.r25.u32 = PPCDivide(ctx.r27.u32, ctx.r4.u32);
	// b 0x83a1a4a0
	goto loc_83A1A4A0;
loc_83A1A498:
	// subf r27,r8,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r8.s64;
	// divwu r25,r27,r3
	ctx.r25.u32 = PPCDivide(ctx.r27.u32, ctx.r3.u32);
loc_83A1A4A0:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a548
	if (cr6.lt) goto loc_83A1A548;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// b 0x83a1a548
	goto loc_83A1A548;
loc_83A1A4B4:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a1a500
	if (!cr6.eq) goto loc_83A1A500;
	// cmplwi cr6,r23,8
	cr6.compare<uint32_t>(ctx.r23.u32, 8, xer);
	// bge cr6,0x83a1a500
	if (!cr6.lt) goto loc_83A1A500;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a4f0
	if (!cr6.eq) goto loc_83A1A4F0;
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a548
	if (!cr6.eq) goto loc_83A1A548;
loc_83A1A4F0:
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83a1a548
	goto loc_83A1A548;
loc_83A1A500:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a1a548
	if (!cr6.eq) goto loc_83A1A548;
	// cmplwi cr6,r23,4
	cr6.compare<uint32_t>(ctx.r23.u32, 4, xer);
	// bge cr6,0x83a1a548
	if (!cr6.lt) goto loc_83A1A548;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r24,30,2,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a53c
	if (!cr6.eq) goto loc_83A1A53C;
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a548
	if (!cr6.eq) goto loc_83A1A548;
loc_83A1A53C:
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_83A1A548:
	// lwz r11,92(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 92);
	// li r7,1000
	ctx.r7.s64 = 1000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1a728
	if (cr6.eq) goto loc_83A1A728;
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// addi r9,r11,999
	ctx.r9.s64 = ctx.r11.s64 + 999;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// divwu r10,r9,r7
	ctx.r10.u32 = PPCDivide(ctx.r9.u32, ctx.r7.u32);
	// bne cr6,0x83a1a6c0
	if (!cr6.eq) goto loc_83A1A6C0;
loc_83A1A574:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a1a5a0
	if (!cr6.gt) goto loc_83A1A5A0;
	// cmplwi cr6,r17,3
	cr6.compare<uint32_t>(ctx.r17.u32, 3, xer);
	// blt cr6,0x83a1a9e8
	if (cr6.lt) goto loc_83A1A9E8;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r23,16
	cr6.compare<uint32_t>(ctx.r23.u32, 16, xer);
	// blt cr6,0x83a1a574
	if (cr6.lt) goto loc_83A1A574;
loc_83A1A5A0:
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// mullw r9,r11,r24
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x83a1a728
	if (!cr6.lt) goto loc_83A1A728;
	// divwu r11,r10,r24
	ctx.r11.u32 = PPCDivide(ctx.r10.u32, ctx.r24.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a1a9e8
	if (!cr6.gt) goto loc_83A1A9E8;
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// blt cr6,0x83a1a9e8
	if (cr6.lt) goto loc_83A1A9E8;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a5e0
	if (cr6.lt) goto loc_83A1A5E0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_83A1A5E0:
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(ctx.r27.u32, 5, xer);
	// bgt cr6,0x83a1a5f0
	if (cr6.gt) goto loc_83A1A5F0;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x83a1a728
	goto loc_83A1A728;
loc_83A1A5F0:
	// mulhwu r11,r27,r5
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83a1a610
	if (!cr0.eq) goto loc_83A1A610;
	// divwu r25,r27,r3
	ctx.r25.u32 = PPCDivide(ctx.r27.u32, ctx.r3.u32);
	// b 0x83a1a728
	goto loc_83A1A728;
loc_83A1A610:
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// ble cr6,0x83a1a62c
	if (!cr6.gt) goto loc_83A1A62C;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1a62c
	if (!cr6.eq) goto loc_83A1A62C;
	// rlwinm r25,r27,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x83a1a728
	goto loc_83A1A728;
loc_83A1A62C:
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// ble cr6,0x83a1a654
	if (!cr6.gt) goto loc_83A1A654;
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a1a654
	if (!cr0.eq) goto loc_83A1A654;
	// divwu r25,r27,r4
	ctx.r25.u32 = PPCDivide(ctx.r27.u32, ctx.r4.u32);
	// b 0x83a1a728
	goto loc_83A1A728;
loc_83A1A654:
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a690
	if (cr6.lt) goto loc_83A1A690;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83a1a688
	if (cr6.gt) goto loc_83A1A688;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// rlwinm r25,r27,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x83a1a6ac
	goto loc_83A1A6AC;
loc_83A1A688:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83a1a6a4
	if (cr6.gt) goto loc_83A1A6A4;
loc_83A1A690:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83a1a6a4
	if (cr6.gt) goto loc_83A1A6A4;
	// subf r27,r10,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r10.s64;
	// divwu r25,r27,r4
	ctx.r25.u32 = PPCDivide(ctx.r27.u32, ctx.r4.u32);
	// b 0x83a1a6ac
	goto loc_83A1A6AC;
loc_83A1A6A4:
	// subf r27,r8,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r8.s64;
	// divwu r25,r27,r3
	ctx.r25.u32 = PPCDivide(ctx.r27.u32, ctx.r3.u32);
loc_83A1A6AC:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a728
	if (cr6.lt) goto loc_83A1A728;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// b 0x83a1a728
	goto loc_83A1A728;
loc_83A1A6C0:
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
loc_83A1A6C4:
	// cmplwi cr6,r9,355
	cr6.compare<uint32_t>(ctx.r9.u32, 355, xer);
	// beq cr6,0x83a1a6d8
	if (cr6.eq) goto loc_83A1A6D8;
	// cmplwi cr6,r9,359
	cr6.compare<uint32_t>(ctx.r9.u32, 359, xer);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83a1a6dc
	if (!cr6.eq) goto loc_83A1A6DC;
loc_83A1A6D8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83A1A6DC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a1a700
	if (!cr6.gt) goto loc_83A1A700;
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r17,3
	cr6.compare<uint32_t>(ctx.r17.u32, 3, xer);
	// blt cr6,0x83a1a9e8
	if (cr6.lt) goto loc_83A1A9E8;
	// cmplwi cr6,r23,16
	cr6.compare<uint32_t>(ctx.r23.u32, 16, xer);
	// blt cr6,0x83a1a6c4
	if (cr6.lt) goto loc_83A1A6C4;
loc_83A1A700:
	// mullw r11,r20,r24
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r24.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a1a728
	if (!cr6.lt) goto loc_83A1A728;
	// divwu r20,r10,r24
	ctx.r20.u32 = PPCDivide(ctx.r10.u32, ctx.r24.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplw cr6,r25,r20
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r20.u32, xer);
	// blt cr6,0x83a1a720
	if (cr6.lt) goto loc_83A1A720;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_83A1A720:
	// cmplwi cr6,r20,1
	cr6.compare<uint32_t>(ctx.r20.u32, 1, xer);
	// blt cr6,0x83a1a9e8
	if (cr6.lt) goto loc_83A1A9E8;
loc_83A1A728:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a878
	if (!cr6.eq) goto loc_83A1A878;
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1a878
	if (cr6.eq) goto loc_83A1A878;
	// lwz r10,88(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// add r11,r18,r25
	ctx.r11.u64 = ctx.r18.u64 + ctx.r25.u64;
	// mullw r10,r10,r19
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// addi r9,r10,999
	ctx.r9.s64 = ctx.r10.s64 + 999;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// divwu r10,r9,r7
	ctx.r10.u32 = PPCDivide(ctx.r9.u32, ctx.r7.u32);
	// mullw r8,r11,r24
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a1a878
	if (!cr6.gt) goto loc_83A1A878;
	// divwu r9,r10,r24
	ctx.r9.u32 = PPCDivide(ctx.r10.u32, ctx.r24.u32);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bge cr6,0x83a1a780
	if (!cr6.lt) goto loc_83A1A780;
	// cmplwi cr6,r17,2
	cr6.compare<uint32_t>(ctx.r17.u32, 2, xer);
	// beq cr6,0x83a1a9e8
	if (cr6.eq) goto loc_83A1A9E8;
	// cmplwi cr6,r23,8
	cr6.compare<uint32_t>(ctx.r23.u32, 8, xer);
	// beq cr6,0x83a1a9e8
	if (cr6.eq) goto loc_83A1A9E8;
loc_83A1A780:
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bge cr6,0x83a1a7a4
	if (!cr6.lt) goto loc_83A1A7A4;
	// cmplwi cr6,r17,3
	cr6.compare<uint32_t>(ctx.r17.u32, 3, xer);
	// bne cr6,0x83a1a7a4
	if (!cr6.eq) goto loc_83A1A7A4;
	// cmplwi cr6,r23,8
	cr6.compare<uint32_t>(ctx.r23.u32, 8, xer);
	// beq cr6,0x83a1a7a4
	if (cr6.eq) goto loc_83A1A7A4;
	// divwu r9,r15,r23
	ctx.r9.u32 = PPCDivide(ctx.r15.u32, ctx.r23.u32);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// divwu r24,r24,r9
	ctx.r24.u32 = PPCDivide(ctx.r24.u32, ctx.r9.u32);
loc_83A1A7A4:
	// mullw r8,r11,r24
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// divwu r9,r10,r24
	ctx.r9.u32 = PPCDivide(ctx.r10.u32, ctx.r24.u32);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a7b8
	if (cr6.lt) goto loc_83A1A7B8;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_83A1A7B8:
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a1a7f4
	if (!cr6.gt) goto loc_83A1A7F4;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// blt cr6,0x83a1a9e8
	if (cr6.lt) goto loc_83A1A9E8;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a1a848
	if (!cr6.gt) goto loc_83A1A848;
	// subf r11,r25,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r25.s64;
	// addi r11,r11,253
	ctx.r11.s64 = ctx.r11.s64 + 253;
	// clrlwi r18,r11,24
	ctx.r18.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r18,r25
	ctx.r11.u64 = ctx.r18.u64 + ctx.r25.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_83A1A7E8:
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1a7f4
	if (cr6.lt) goto loc_83A1A7F4;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_83A1A7F4:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bne cr6,0x83a1a814
	if (!cr6.eq) goto loc_83A1A814;
	// cmplwi cr6,r17,2
	cr6.compare<uint32_t>(ctx.r17.u32, 2, xer);
	// bgt cr6,0x83a1a814
	if (cr6.gt) goto loc_83A1A814;
	// lhz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// sth r10,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r10.u16);
loc_83A1A814:
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83a1a9e8
	if (cr6.gt) goto loc_83A1A9E8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1a88c
	if (cr6.eq) goto loc_83A1A88C;
	// bdz 0x83a1a8a4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A8A4;
	// bdz 0x83a1a9e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A9E8;
	// bdz 0x83a1a8c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A8C0;
	// bdz 0x83a1a9e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A9E8;
	// bdz 0x83a1a9e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A9E8;
	// bdz 0x83a1a9e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A1A9E8;
	// b 0x83a1a90c
	goto loc_83A1A90C;
loc_83A1A848:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r25,r9,-4
	ctx.r25.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1a870
	if (!cr6.eq) goto loc_83A1A870;
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// divwu r10,r27,r11
	ctx.r10.u32 = PPCDivide(ctx.r27.u32, ctx.r11.u32);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r9.s64;
	// subf r27,r8,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r8.s64;
loc_83A1A870:
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// b 0x83a1a7e8
	goto loc_83A1A7E8;
loc_83A1A878:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne cr6,0x83a1a7f4
	if (!cr6.eq) goto loc_83A1A7F4;
loc_83A1A880:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83A1A88C:
	// lhz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// sth r9,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r9.u16);
	// b 0x83a1a95c
	goto loc_83A1A95C;
loc_83A1A8A4:
	// cmplwi cr6,r17,3
	cr6.compare<uint32_t>(ctx.r17.u32, 3, xer);
	// bne cr6,0x83a1a95c
	if (!cr6.eq) goto loc_83A1A95C;
	// lhz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// sth r10,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r10.u16);
	// b 0x83a1a95c
	goto loc_83A1A95C;
loc_83A1A8C0:
	// lhz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// ori r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 4;
	// sth r11,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r11.u16);
	// ble cr6,0x83a1a8e0
	if (!cr6.gt) goto loc_83A1A8E0;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_83A1A8E0:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,29,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// sth r10,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r10.u16);
	// ble cr6,0x83a1a94c
	if (!cr6.gt) goto loc_83A1A94C;
loc_83A1A8F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x83a1a8f8
	if (cr6.gt) goto loc_83A1A8F8;
	// b 0x83a1a94c
	goto loc_83A1A94C;
loc_83A1A90C:
	// lhz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// sth r11,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r11.u16);
	// ble cr6,0x83a1a924
	if (!cr6.gt) goto loc_83A1A924;
	// li r31,4
	ctx.r31.s64 = 4;
loc_83A1A924:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,29,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// sth r10,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r10.u16);
	// ble cr6,0x83a1a94c
	if (!cr6.gt) goto loc_83A1A94C;
loc_83A1A93C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x83a1a93c
	if (cr6.gt) goto loc_83A1A93C;
loc_83A1A94C:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r9.u16);
loc_83A1A95C:
	// stw r24,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r24.u32);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// stw r18,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r18.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r27,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r27.u32);
	// stw r25,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r25.u32);
	// stw r20,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r20.u32);
	// lhz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r4,4(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r3,0(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// bl 0x83a1a0a0
	ctx.lr = 0x83A1A98C;
	sub_83A1A0A0(ctx, base);
	// stw r3,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r3.u32);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// lhz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 20);
	// lwz r6,32(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r4,4(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r3,0(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// bl 0x83a19fa0
	ctx.lr = 0x83A1A9AC;
	sub_83A19FA0(ctx, base);
	// sth r3,12(r26)
	PPC_STORE_U16(ctx.r26.u32 + 12, ctx.r3.u16);
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1a9d4
	if (cr6.eq) goto loc_83A1A9D4;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(ctx.r11.u32, 4096, xer);
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// bne cr6,0x83a1a9d0
	if (!cr6.eq) goto loc_83A1A9D0;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_83A1A9D0:
	// sth r11,12(r26)
	PPC_STORE_U16(ctx.r26.u32 + 12, ctx.r11.u16);
loc_83A1A9D4:
	// lhz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// bl 0x83a35f08
	ctx.lr = 0x83A1A9DC;
	sub_83A35F08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83A1A9E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1A9F4"))) PPC_WEAK_FUNC(sub_83A1A9F4);
PPC_FUNC_IMPL(__imp__sub_83A1A9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1A9F8"))) PPC_WEAK_FUNC(sub_83A1A9F8);
PPC_FUNC_IMPL(__imp__sub_83A1A9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A1AA00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a35eb0
	ctx.lr = 0x83A1AA14;
	sub_83A35EB0(ctx, base);
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r7,2(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x83a19cf0
	ctx.lr = 0x83A1AA34;
	sub_83A19CF0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x83a1aa5c
	if (cr6.eq) goto loc_83A1AA5C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a1aa5c
	if (!cr6.eq) goto loc_83A1AA5C;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x83a1aa68
	goto loc_83A1AA68;
loc_83A1AA5C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_83A1AA68:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// beq cr6,0x83a1aa84
	if (cr6.eq) goto loc_83A1AA84;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bne cr6,0x83a1aa88
	if (!cr6.eq) goto loc_83A1AA88;
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x83a1aa88
	goto loc_83A1AA88;
loc_83A1AA84:
	// li r31,8
	ctx.r31.s64 = 8;
loc_83A1AA88:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a1aa9c
	if (!cr6.eq) goto loc_83A1AA9C;
loc_83A1AA90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A1AA9C:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83a1aa90
	if (cr6.eq) goto loc_83A1AA90;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
loc_83A1AAB4:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwimi r3,r26,0,31,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r26.u32, 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r3.u64 & 0x2);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1ab30
	if (cr6.eq) goto loc_83A1AB30;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a1ab30
	if (cr6.eq) goto loc_83A1AB30;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lhz r3,14(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x83a1ab30
	if (!cr6.eq) goto loc_83A1AB30;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a1aaf8
	if (cr6.eq) goto loc_83A1AAF8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x83a1aafc
	goto loc_83A1AAFC;
loc_83A1AAF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83A1AAFC:
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r3,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a1ab44
	if (cr0.eq) goto loc_83A1AB44;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a1ab30
	if (!cr6.gt) goto loc_83A1AB30;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a1ab28
	if (cr6.eq) goto loc_83A1AB28;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a1ab30
	if (cr6.gt) goto loc_83A1AB30;
loc_83A1AB28:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_83A1AB30:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,25
	ctx.r8.s64 = ctx.r8.s64 + 25;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x83a1aab4
	if (cr6.lt) goto loc_83A1AAB4;
	// b 0x83a1ab48
	goto loc_83A1AB48;
loc_83A1AB44:
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_83A1AB48:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// beq cr6,0x83a1aa90
	if (cr6.eq) goto loc_83A1AA90;
	// mulli r11,r27,25
	ctx.r11.s64 = ctx.r27.s64 * 25;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1AB60"))) PPC_WEAK_FUNC(sub_83A1AB60);
PPC_FUNC_IMPL(__imp__sub_83A1AB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A1AB68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1abb4
	if (cr6.eq) goto loc_83A1ABB4;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1abb4
	if (cr6.eq) goto loc_83A1ABB4;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bne cr6,0x83a1abb4
	if (!cr6.eq) goto loc_83A1ABB4;
loc_83A1ABA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A1ABB4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83a19ef8
	ctx.lr = 0x83A1ABCC;
	sub_83A19EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83a35d18
	ctx.lr = 0x83A1ABF0;
	sub_83A35D18(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lbz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83a1ac28
	if (!cr6.eq) goto loc_83A1AC28;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1ac28
	if (cr6.eq) goto loc_83A1AC28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x83a1ad64
	goto loc_83A1AD64;
loc_83A1AC28:
	// lhz r11,5(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 5);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lbz r10,7(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a1ac64
	if (cr6.eq) goto loc_83A1AC64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lhz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83a1a128
	ctx.lr = 0x83A1AC60;
	sub_83A1A128(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_83A1AC64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1aca8
	if (cr6.eq) goto loc_83A1ACA8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1aca8
	if (!cr6.eq) goto loc_83A1ACA8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1ac94
	if (!cr6.eq) goto loc_83A1AC94;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1aca8
	if (cr6.eq) goto loc_83A1ACA8;
loc_83A1AC94:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x83a1aca4
	if (!cr6.gt) goto loc_83A1ACA4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83A1ACA4:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83A1ACA8:
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// bgt cr6,0x83a1acbc
	if (cr6.gt) goto loc_83A1ACBC;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x83a1ad64
	goto loc_83A1AD64;
loc_83A1ACBC:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f12,-26260(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f13,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f11,21588(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21588);
	ctx.f11.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fdivs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fsubs f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fcmpu cr6,f2,f11
	cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x83a1ad58
	if (cr6.gt) goto loc_83A1AD58;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
loc_83A1AD58:
	// li r11,36
	ctx.r11.s64 = 36;
	// fctidz f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
loc_83A1AD64:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// beq cr6,0x83a1adb8
	if (cr6.eq) goto loc_83A1ADB8;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// beq cr6,0x83a1adb0
	if (cr6.eq) goto loc_83A1ADB0;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bne cr6,0x83a1aba8
	if (!cr6.eq) goto loc_83A1ABA8;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a1ad94
	if (cr6.eq) goto loc_83A1AD94;
	// li r11,355
	ctx.r11.s64 = 355;
	// b 0x83a1adbc
	goto loc_83A1ADBC;
loc_83A1AD94:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,354
	ctx.r8.s64 = ctx.r11.s64 + 354;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// b 0x83a1adc0
	goto loc_83A1ADC0;
loc_83A1ADB0:
	// li r11,353
	ctx.r11.s64 = 353;
	// b 0x83a1adbc
	goto loc_83A1ADBC;
loc_83A1ADB8:
	// li r11,352
	ctx.r11.s64 = 352;
loc_83A1ADBC:
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83A1ADC0:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x83a1add4
	if (cr6.eq) goto loc_83A1ADD4;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83A1ADD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lhz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// lbz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83a1a0a0
	ctx.lr = 0x83A1AE10;
	sub_83A1A0A0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lhz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83a19fa0
	ctx.lr = 0x83A1AE30;
	sub_83A19FA0(ctx, base);
	// sth r3,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r3.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1ae58
	if (cr6.eq) goto loc_83A1AE58;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(ctx.r11.u32, 4096, xer);
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// bne cr6,0x83a1ae54
	if (!cr6.eq) goto loc_83A1AE54;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_83A1AE54:
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_83A1AE58:
	// lwz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a1ae90
	if (cr6.eq) goto loc_83A1AE90;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1ae90
	if (!cr6.eq) goto loc_83A1AE90;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1ae90
	if (!cr6.eq) goto loc_83A1AE90;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_83A1AE90:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r26,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// divwu r9,r11,r10
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// bl 0x83a1a1b0
	ctx.lr = 0x83A1AEC8;
	sub_83A1A1B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1AED0"))) PPC_WEAK_FUNC(sub_83A1AED0);
PPC_FUNC_IMPL(__imp__sub_83A1AED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1AED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83a1afd8
	ctx.lr = 0x83A1AEF0;
	sub_83A1AFD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1a9f8
	ctx.lr = 0x83A1AEFC;
	sub_83A1A9F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a1af10
	if (!cr6.eq) goto loc_83A1AF10;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A1AF10:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x83a35f08
	ctx.lr = 0x83A1AF18;
	sub_83A35F08(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x83a35eb0
	ctx.lr = 0x83A1AF24;
	sub_83A35EB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x83a1ab60
	ctx.lr = 0x83A1AF3C;
	sub_83A1AB60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1AF44"))) PPC_WEAK_FUNC(sub_83A1AF44);
PPC_FUNC_IMPL(__imp__sub_83A1AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1AF48"))) PPC_WEAK_FUNC(sub_83A1AF48);
PPC_FUNC_IMPL(__imp__sub_83A1AF48) {
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A1AF68;
	sub_831CDCF0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_83A1AF94:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a1af94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1AF94;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// sth r10,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A1AFD4"))) PPC_WEAK_FUNC(sub_83A1AFD4);
PPC_FUNC_IMPL(__imp__sub_83A1AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1AFD8"))) PPC_WEAK_FUNC(sub_83A1AFD8);
PPC_FUNC_IMPL(__imp__sub_83A1AFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lhz r7,14(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// srawi r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1B018"))) PPC_WEAK_FUNC(sub_83A1B018);
PPC_FUNC_IMPL(__imp__sub_83A1B018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A1B028:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a1b028
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1B028;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// sth r9,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r9.u16);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// sth r7,14(r4)
	PPC_STORE_U16(ctx.r4.u32 + 14, ctx.r7.u16);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r5.u32);
	// sth r9,20(r4)
	PPC_STORE_U16(ctx.r4.u32 + 20, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1B064"))) PPC_WEAK_FUNC(sub_83A1B064);
PPC_FUNC_IMPL(__imp__sub_83A1B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1B068"))) PPC_WEAK_FUNC(sub_83A1B068);
PPC_FUNC_IMPL(__imp__sub_83A1B068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1B070;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r5,528(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_83A1B08C:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x83a1b0dc
	goto loc_83A1B0DC;
loc_83A1B094:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a1b0ac
	if (cr6.eq) goto loc_83A1B0AC;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1b0b0
	goto loc_83A1B0B0;
loc_83A1B0AC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_83A1B0B0:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1b0d8
	if (cr6.eq) goto loc_83A1B0D8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83A1B0C4:
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// bdnz 0x83a1b0c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1B0C4;
loc_83A1B0D8:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_83A1B0DC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a1b094
	if (!cr6.eq) goto loc_83A1B094;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a1b0fc
	if (cr6.eq) goto loc_83A1B0FC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// cmplwi cr6,r6,13
	cr6.compare<uint32_t>(ctx.r6.u32, 13, xer);
	// blt cr6,0x83a1b08c
	if (cr6.lt) goto loc_83A1B08C;
loc_83A1B0FC:
	// lwz r30,540(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lwz r10,536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r28,552(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// addi r29,r11,9136
	ctx.r29.s64 = ctx.r11.s64 + 9136;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x83a1b15c
	if (cr6.eq) goto loc_83A1B15C;
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1b12c
	if (cr6.eq) goto loc_83A1B12C;
	// bl 0x83a39b78
	ctx.lr = 0x83A1B128;
	sub_83A39B78(ctx, base);
	// stw r27,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r27.u32);
loc_83A1B12C:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// mullw r4,r11,r30
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1B148;
	sub_839F8CD8(ctx, base);
	// stw r3,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1b1b4
	if (cr0.eq) goto loc_83A1B1B4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
loc_83A1B15C:
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a1b1ac
	if (!cr6.gt) goto loc_83A1B1AC;
	// lwz r3,544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1b17c
	if (cr6.eq) goto loc_83A1B17C;
	// bl 0x83a39b78
	ctx.lr = 0x83A1B178;
	sub_83A39B78(ctx, base);
	// stw r27,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r27.u32);
loc_83A1B17C:
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// mullw r4,r11,r28
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1B198;
	sub_839F8CD8(ctx, base);
	// stw r3,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1b1b4
	if (cr0.eq) goto loc_83A1B1B4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r28.u32);
loc_83A1B1AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A1B1B4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83a1b1ac
	goto loc_83A1B1AC;
}

__attribute__((alias("__imp__sub_83A1B1C0"))) PPC_WEAK_FUNC(sub_83A1B1C0);
PPC_FUNC_IMPL(__imp__sub_83A1B1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1B1C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,528(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
loc_83A1B1DC:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x83a1b20c
	goto loc_83A1B20C;
loc_83A1B1E4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a1b1fc
	if (cr6.eq) goto loc_83A1B1FC;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1b200
	goto loc_83A1B200;
loc_83A1B1FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A1B200:
	// lwz r4,556(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// bl 0x83a36cc0
	ctx.lr = 0x83A1B208;
	sub_83A36CC0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_83A1B20C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a1b1e4
	if (!cr6.eq) goto loc_83A1B1E4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a1b22c
	if (cr6.eq) goto loc_83A1B22C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(ctx.r27.u32, 13, xer);
	// blt cr6,0x83a1b1dc
	if (cr6.lt) goto loc_83A1B1DC;
loc_83A1B22C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1B234"))) PPC_WEAK_FUNC(sub_83A1B234);
PPC_FUNC_IMPL(__imp__sub_83A1B234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1B238"))) PPC_WEAK_FUNC(sub_83A1B238);
PPC_FUNC_IMPL(__imp__sub_83A1B238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,13
	ctx.r11.s64 = 13;
	// divw r11,r4,r11
	ctx.r11.s32 = PPCDivide(ctx.r4.s32, ctx.r11.s32);
	// mulli r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 * 13;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_83A1B254:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1b26c
	if (cr6.eq) goto loc_83A1B26C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x83a1b270
	goto loc_83A1B270;
loc_83A1B26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A1B270:
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x83a1b254
	if (!cr6.eq) goto loc_83A1B254;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1B280"))) PPC_WEAK_FUNC(sub_83A1B280);
PPC_FUNC_IMPL(__imp__sub_83A1B280) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a1b2bc
	if (!cr6.lt) goto loc_83A1B2BC;
	// bl 0x83d755ac
	ctx.lr = 0x83A1B2B0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a1b2bc
	if (cr6.eq) goto loc_83A1B2BC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83A1B2BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1b2d0
	if (cr6.eq) goto loc_83A1B2D0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a1b330
	if (cr6.eq) goto loc_83A1B330;
loc_83A1B2D0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a1b330
	if (cr6.gt) goto loc_83A1B330;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1B300;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1b330
	if (cr0.eq) goto loc_83A1B330;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83A1B330:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1b348
	if (cr6.eq) goto loc_83A1B348;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83a1b34c
	goto loc_83A1B34C;
loc_83A1B348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A1B34C:
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

__attribute__((alias("__imp__sub_83A1B364"))) PPC_WEAK_FUNC(sub_83A1B364);
PPC_FUNC_IMPL(__imp__sub_83A1B364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1B368"))) PPC_WEAK_FUNC(sub_83A1B368);
PPC_FUNC_IMPL(__imp__sub_83A1B368) {
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
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// divw r11,r4,r11
	ctx.r11.s32 = PPCDivide(ctx.r4.s32, ctx.r11.s32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mulli r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 * 13;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
loc_83A1B3A0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1b3bc
	if (cr6.eq) goto loc_83A1B3BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x83a1b3c0
	goto loc_83A1B3C0;
loc_83A1B3BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A1B3C0:
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x83a1b3a0
	if (!cr6.eq) goto loc_83A1B3A0;
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// bl 0x839f99e0
	ctx.lr = 0x83A1B3D4;
	sub_839F99E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a37158
	ctx.lr = 0x83A1B3DC;
	sub_83A37158(ctx, base);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A1B400"))) PPC_WEAK_FUNC(sub_83A1B400);
PPC_FUNC_IMPL(__imp__sub_83A1B400) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a1b280
	ctx.lr = 0x83A1B420;
	sub_83A1B280(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1b464
	if (cr0.eq) goto loc_83A1B464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1b450
	if (cr6.eq) goto loc_83A1B450;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x83a1b454
	goto loc_83A1B454;
loc_83A1B450:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_83A1B454:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83A1B464:
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

__attribute__((alias("__imp__sub_83A1B47C"))) PPC_WEAK_FUNC(sub_83A1B47C);
PPC_FUNC_IMPL(__imp__sub_83A1B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1B480"))) PPC_WEAK_FUNC(sub_83A1B480);
PPC_FUNC_IMPL(__imp__sub_83A1B480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83A1B494:
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bge 0x83a1b494
	if (!cr0.lt) goto loc_83A1B494;
	// stw r6,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r6.u32);
	// stw r10,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r10.u32);
	// stw r10,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r10.u32);
	// stw r10,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r10.u32);
	// stw r10,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r10.u32);
	// stw r10,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r10.u32);
	// stw r10,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r10.u32);
	// stw r10,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1B4FC"))) PPC_WEAK_FUNC(sub_83A1B4FC);
PPC_FUNC_IMPL(__imp__sub_83A1B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1B500"))) PPC_WEAK_FUNC(sub_83A1B500);
PPC_FUNC_IMPL(__imp__sub_83A1B500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1B508;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// li r29,13
	ctx.r29.s64 = 13;
loc_83A1B518:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1b54c
	if (cr6.eq) goto loc_83A1B54C;
	// addi r28,r30,-40
	ctx.r28.s64 = ctx.r30.s64 + -40;
loc_83A1B528:
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x83a0af38
	ctx.lr = 0x83A1B530;
	sub_83A0AF38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83a36e50
	ctx.lr = 0x83A1B538;
	sub_83A36E50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1B540;
	sub_83A39B78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1b528
	if (!cr6.eq) goto loc_83A1B528;
loc_83A1B54C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x83a1b518
	if (!cr0.eq) goto loc_83A1B518;
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1b570
	if (cr6.eq) goto loc_83A1B570;
	// bl 0x83a39b78
	ctx.lr = 0x83A1B56C;
	sub_83A39B78(ctx, base);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
loc_83A1B570:
	// lwz r3,544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1b584
	if (cr6.eq) goto loc_83A1B584;
	// bl 0x83a39b78
	ctx.lr = 0x83A1B580;
	sub_83A39B78(ctx, base);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
loc_83A1B584:
	// addi r31,r31,528
	ctx.r31.s64 = ctx.r31.s64 + 528;
	// li r30,12
	ctx.r30.s64 = 12;
loc_83A1B58C:
	// addi r31,r31,-40
	ctx.r31.s64 = ctx.r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fa2d0
	ctx.lr = 0x83A1B598;
	sub_839FA2D0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83a1b58c
	if (!cr0.lt) goto loc_83A1B58C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1B5A8"))) PPC_WEAK_FUNC(sub_83A1B5A8);
PPC_FUNC_IMPL(__imp__sub_83A1B5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1B5B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r6,556(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a371d0
	ctx.lr = 0x83A1B5E0;
	sub_83A371D0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x83a1b634
	if (cr0.lt) goto loc_83A1B634;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// divw r11,r10,r11
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// mulli r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 * 13;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x83a1b400
	ctx.lr = 0x83A1B610;
	sub_83A1B400(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1b640
	if (cr0.eq) goto loc_83A1B640;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
loc_83A1B634:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A1B640:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// bl 0x83a37158
	ctx.lr = 0x83A1B650;
	sub_83A37158(ctx, base);
	// b 0x83a1b634
	goto loc_83A1B634;
}

__attribute__((alias("__imp__sub_83A1B654"))) PPC_WEAK_FUNC(sub_83A1B654);
PPC_FUNC_IMPL(__imp__sub_83A1B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1B658"))) PPC_WEAK_FUNC(sub_83A1B658);
PPC_FUNC_IMPL(__imp__sub_83A1B658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a1b668
	if (cr6.eq) goto loc_83A1B668;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83a1b678
	goto loc_83A1B678;
loc_83A1B668:
	// lwz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A1B678:
	// stw r11,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1B680"))) PPC_WEAK_FUNC(sub_83A1B680);
PPC_FUNC_IMPL(__imp__sub_83A1B680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A1B688;
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
loc_83A1B6A0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x83a1b6c4
	if (!cr6.eq) goto loc_83A1B6C4;
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83a1b6a0
	if (!cr0.eq) goto loc_83A1B6A0;
	// b 0x83a1b6cc
	goto loc_83A1B6CC;
loc_83A1B6C4:
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83A1B6CC:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r28,r11,9136
	ctx.r28.s64 = ctx.r11.s64 + 9136;
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// bl 0x83d7554c
	ctx.lr = 0x83A1B6DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x83a1b6ec
	if (!cr6.eq) goto loc_83A1B6EC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x83a1b6f8
	goto loc_83A1B6F8;
loc_83A1B6EC:
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_83A1B6F8:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// bl 0x83d7553c
	ctx.lr = 0x83A1B704;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1B710"))) PPC_WEAK_FUNC(sub_83A1B710);
PPC_FUNC_IMPL(__imp__sub_83A1B710) {
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
	// stwu r1,-1904(r1)
	ea = -1904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// beq cr6,0x83a1b778
	if (cr6.eq) goto loc_83A1B778;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mulli r11,r11,-10000
	ctx.r11.s64 = ctx.r11.s64 * -10000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x83a1b77c
	goto loc_83A1B77C;
loc_83A1B75C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
loc_83A1B778:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A1B77C:
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83d7637c
	ctx.lr = 0x83A1B79C;
	__imp__KeWaitForMultipleObjects(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x83a1b75c
	if (cr6.eq) goto loc_83A1B75C;
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// beq cr6,0x83a1b7b8
	if (cr6.eq) goto loc_83A1B7B8;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83a1b7bc
	if (!cr6.eq) goto loc_83A1B7BC;
loc_83A1B7B8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A1B7BC:
	// addi r1,r1,1904
	ctx.r1.s64 = ctx.r1.s64 + 1904;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1B7D0"))) PPC_WEAK_FUNC(sub_83A1B7D0);
PPC_FUNC_IMPL(__imp__sub_83A1B7D0) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a1b710
	ctx.lr = 0x83A1B7EC;
	sub_83A1B710(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1B800;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x832d27b0
	ctx.lr = 0x83A1B814;
	sub_832D27B0(ctx, base);
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

__attribute__((alias("__imp__sub_83A1B82C"))) PPC_WEAK_FUNC(sub_83A1B82C);
PPC_FUNC_IMPL(__imp__sub_83A1B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1B830"))) PPC_WEAK_FUNC(sub_83A1B830);
PPC_FUNC_IMPL(__imp__sub_83A1B830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1B84C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1B860"))) PPC_WEAK_FUNC(sub_83A1B860);
PPC_FUNC_IMPL(__imp__sub_83A1B860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A1B868;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// b 0x83a1b960
	goto loc_83A1B960;
loc_83A1B880:
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1b97c
	if (!cr6.eq) goto loc_83A1B97C;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1b8a8
	if (cr6.eq) goto loc_83A1B8A8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1b8ac
	goto loc_83A1B8AC;
loc_83A1B8A8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A1B8AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1B8C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,616(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1b8f8
	if (cr6.eq) goto loc_83A1B8F8;
	// addic. r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a1b904
	if (cr0.eq) goto loc_83A1B904;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A1B8DC:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1b8f0
	if (cr6.eq) goto loc_83A1B8F0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
loc_83A1B8F0:
	// bdnz 0x83a1b8dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1B8DC;
	// b 0x83a1b904
	goto loc_83A1B904;
loc_83A1B8F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
loc_83A1B904:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1B918;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a1b95c
	if (cr6.eq) goto loc_83A1B95C;
loc_83A1B920:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1B938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a1b950
	if (cr6.eq) goto loc_83A1B950;
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1b954
	goto loc_83A1B954;
loc_83A1B950:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A1B954:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a1b920
	if (!cr0.eq) goto loc_83A1B920;
loc_83A1B95C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_83A1B960:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1B970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1b880
	if (!cr6.eq) goto loc_83A1B880;
loc_83A1B97C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1B990;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a1b9d4
	if (!cr6.gt) goto loc_83A1B9D4;
	// addi r11,r31,624
	ctx.r11.s64 = ctx.r31.s64 + 624;
loc_83A1B9A0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83a1b9a0
	if (!cr0.eq) goto loc_83A1B9A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a1b9d4
	if (!cr6.eq) goto loc_83A1B9D4;
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x832d2b10
	ctx.lr = 0x83A1B9D4;
	sub_832D2B10(ctx, base);
loc_83A1B9D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1B9DC"))) PPC_WEAK_FUNC(sub_83A1B9DC);
PPC_FUNC_IMPL(__imp__sub_83A1B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1B9E0"))) PPC_WEAK_FUNC(sub_83A1B9E0);
PPC_FUNC_IMPL(__imp__sub_83A1B9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A1B9E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r3,728
	ctx.r25.s64 = ctx.r3.s64 + 728;
loc_83A1BA00:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ea = ctx.r25.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r27,0,r25
	ea = ctx.r25.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83a1ba00
	if (!cr0.eq) goto loc_83A1BA00;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1ba40
	if (cr6.eq) goto loc_83A1BA40;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x83a1ba44
	if (!cr6.gt) goto loc_83A1BA44;
loc_83A1BA40:
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_83A1BA44:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1ba58
	if (cr6.eq) goto loc_83A1BA58;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x83a1ba5c
	if (!cr6.lt) goto loc_83A1BA5C;
loc_83A1BA58:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
loc_83A1BA5C:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1BA74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lwz r28,156(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1badc
	if (cr6.eq) goto loc_83A1BADC;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// ld r3,-17520(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -17520);
	// bl 0x831ce710
	ctx.lr = 0x83A1BA9C;
	sub_831CE710(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83a1badc
	if (!cr6.gt) goto loc_83A1BADC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a37418
	ctx.lr = 0x83A1BADC;
	sub_83A37418(ctx, base);
loc_83A1BADC:
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r8,148(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
loc_83A1BAF8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83a1baf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1BAF8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// ld r10,752(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 752);
	// clrldi r28,r26,32
	ctx.r28.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// subf r3,r10,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r10.s64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x831ce710
	ctx.lr = 0x83A1BB30;
	sub_831CE710(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r28,752(r31)
	PPC_STORE_U64(ctx.r31.u32 + 752, ctx.r28.u64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x83a1b680
	ctx.lr = 0x83A1BB7C;
	sub_83A1B680(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r9,740(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a1bba8
	if (cr6.eq) goto loc_83A1BBA8;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
loc_83A1BBA8:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1BBC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r3,22593
	ctx.r3.s64 = 1480654848;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r3,r3,30002
	ctx.r3.u64 = ctx.r3.u64 | 30002;
	// bl 0x83ae3308
	ctx.lr = 0x83A1BBD4;
	sub_83AE3308(ctx, base);
	// lwsync 
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// stw r29,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1BBE8"))) PPC_WEAK_FUNC(sub_83A1BBE8);
PPC_FUNC_IMPL(__imp__sub_83A1BBE8) {
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
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x83a1bc28
	if (!cr6.eq) goto loc_83A1BC28;
	// std r9,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// std r9,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r9.u64);
	// std r9,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r9.u64);
	// std r9,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r9.u64);
	// b 0x83a1bd00
	goto loc_83A1BD00;
loc_83A1BC28:
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a1bcd0
	if (!cr6.eq) goto loc_83A1BCD0;
	// lwz r10,732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// addi r6,r11,728
	ctx.r6.s64 = ctx.r11.s64 + 728;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,648
	ctx.r8.s64 = ctx.r10.s64 + 648;
	// std r9,648(r10)
	PPC_STORE_U64(ctx.r10.u32 + 648, ctx.r9.u64);
	// std r9,656(r10)
	PPC_STORE_U64(ctx.r10.u32 + 656, ctx.r9.u64);
	// std r9,664(r10)
	PPC_STORE_U64(ctx.r10.u32 + 664, ctx.r9.u64);
	// std r9,672(r10)
	PPC_STORE_U64(ctx.r10.u32 + 672, ctx.r9.u64);
	// std r9,680(r10)
	PPC_STORE_U64(ctx.r10.u32 + 680, ctx.r9.u64);
loc_83A1BC60:
	// lwz r10,732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// mulli r7,r8,40
	ctx.r7.s64 = ctx.r8.s64 * 40;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r8,r8,648
	ctx.r8.s64 = ctx.r8.s64 + 648;
	// addi r10,r10,648
	ctx.r10.s64 = ctx.r10.s64 + 648;
loc_83A1BC80:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r5.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// bne cr6,0x83a1bca4
	if (!cr6.eq) goto loc_83A1BCA4;
	// stwcx. r10,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83a1bc80
	if (!cr0.eq) goto loc_83A1BC80;
	// b 0x83a1bcac
	goto loc_83A1BCAC;
loc_83A1BCA4:
	// stwcx. r5,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_83A1BCAC:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwsync 
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a1bcc4
	if (!cr6.eq) goto loc_83A1BCC4;
	// db16cyc 
	// b 0x83a1bc60
	goto loc_83A1BC60;
loc_83A1BCC4:
	// lwz r10,732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 732, ctx.r10.u32);
loc_83A1BCD0:
	// lwz r8,732(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r7,r31,-8
	ctx.r7.s64 = ctx.r31.s64 + -8;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// mulli r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 * 40;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,640
	ctx.r10.s64 = ctx.r10.s64 + 640;
loc_83A1BCF0:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r7)
	ea = 8 + ctx.r7.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x83a1bcf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1BCF0;
	// stw r9,736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 736, ctx.r9.u32);
loc_83A1BD00:
	// mftb r10
	ctx.r10.u64 = PPC_QUERY_TIMEBASE();
	// ld r8,744(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 744);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r7,-31742
	ctx.r7.s64 = -2080243712;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r3,r7,9136
	ctx.r3.s64 = ctx.r7.s64 + 9136;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r10,744(r11)
	PPC_STORE_U64(ctx.r11.u32 + 744, ctx.r10.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x83a1b680
	ctx.lr = 0x83A1BD30;
	sub_83A1B680(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A1BD4C"))) PPC_WEAK_FUNC(sub_83A1BD4C);
PPC_FUNC_IMPL(__imp__sub_83A1BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1BD50"))) PPC_WEAK_FUNC(sub_83A1BD50);
PPC_FUNC_IMPL(__imp__sub_83A1BD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_83A1BD60:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83a1bd60
	if (!cr0.eq) goto loc_83A1BD60;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a1bd94
	if (!cr6.eq) goto loc_83A1BD94;
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x83a39b78
	ctx.lr = 0x83A1BD94;
	sub_83A39B78(ctx, base);
loc_83A1BD94:
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

__attribute__((alias("__imp__sub_83A1BDA8"))) PPC_WEAK_FUNC(sub_83A1BDA8);
PPC_FUNC_IMPL(__imp__sub_83A1BDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,11096(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 11096);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A1BDB8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x83d755dc
	ctx.lr = 0x83A1BDD8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83a1bdf8
	sub_83A1BDF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1BDB0"))) PPC_WEAK_FUNC(sub_83A1BDB0);
PPC_FUNC_IMPL(__imp__sub_83A1BDB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A1BDB8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x83d755dc
	ctx.lr = 0x83A1BDD8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83a1bdf8
	goto loc_83A1BDF8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x83a1bed4
	goto loc_83A1BED4;
loc_83A1BDF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a1f1e0
	ctx.lr = 0x83A1BE04;
	sub_83A1F1E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// beq 0x83a1be68
	if (cr0.eq) goto loc_83A1BE68;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1be68
	if (cr6.eq) goto loc_83A1BE68;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a1f1e0
	ctx.lr = 0x83A1BE24;
	sub_83A1F1E0(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1be68
	if (cr0.eq) goto loc_83A1BE68;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1be68
	if (cr6.eq) goto loc_83A1BE68;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a1f1e0
	ctx.lr = 0x83A1BE44;
	sub_83A1F1E0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1be68
	if (cr0.eq) goto loc_83A1BE68;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1be68
	if (cr6.eq) goto loc_83A1BE68;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x83a1bed0
	goto loc_83A1BED0;
loc_83A1BE68:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1be94
	if (cr6.eq) goto loc_83A1BE94;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1be94
	if (cr6.eq) goto loc_83A1BE94;
	// bl 0x83a1bd50
	ctx.lr = 0x83A1BE88;
	sub_83A1BD50(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// b 0x83a1be98
	goto loc_83A1BE98;
loc_83A1BE94:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A1BE98:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1beb4
	if (cr6.eq) goto loc_83A1BEB4;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1beb4
	if (cr6.eq) goto loc_83A1BEB4;
	// bl 0x83a1bd50
	ctx.lr = 0x83A1BEB0;
	sub_83A1BD50(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_83A1BEB4:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1bed0
	if (cr6.eq) goto loc_83A1BED0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1bed0
	if (cr6.eq) goto loc_83A1BED0;
	// bl 0x83a1bd50
	ctx.lr = 0x83A1BECC;
	sub_83A1BD50(ctx, base);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
loc_83A1BED0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83A1BED4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1BDE8"))) PPC_WEAK_FUNC(sub_83A1BDE8);
PPC_FUNC_IMPL(__imp__sub_83A1BDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// lwz r30,148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x83a1bed4
	// ERROR 83A1BED4
	return;
}

__attribute__((alias("__imp__sub_83A1BDF8"))) PPC_WEAK_FUNC(sub_83A1BDF8);
PPC_FUNC_IMPL(__imp__sub_83A1BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a1f1e0
	ctx.lr = 0x83A1BE04;
	sub_83A1F1E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// beq 0x83a1be68
	if (cr0.eq) goto loc_83A1BE68;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1be68
	if (cr6.eq) goto loc_83A1BE68;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a1f1e0
	ctx.lr = 0x83A1BE24;
	sub_83A1F1E0(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1be68
	if (cr0.eq) goto loc_83A1BE68;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1be68
	if (cr6.eq) goto loc_83A1BE68;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a1f1e0
	ctx.lr = 0x83A1BE44;
	sub_83A1F1E0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1be68
	if (cr0.eq) goto loc_83A1BE68;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1be68
	if (cr6.eq) goto loc_83A1BE68;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x83a1bed0
	goto loc_83A1BED0;
loc_83A1BE68:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1be94
	if (cr6.eq) goto loc_83A1BE94;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1be94
	if (cr6.eq) goto loc_83A1BE94;
	// bl 0x83a1bd50
	ctx.lr = 0x83A1BE88;
	sub_83A1BD50(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// b 0x83a1be98
	goto loc_83A1BE98;
loc_83A1BE94:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A1BE98:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1beb4
	if (cr6.eq) goto loc_83A1BEB4;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1beb4
	if (cr6.eq) goto loc_83A1BEB4;
	// bl 0x83a1bd50
	ctx.lr = 0x83A1BEB0;
	sub_83A1BD50(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_83A1BEB4:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1bed0
	if (cr6.eq) goto loc_83A1BED0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1bed0
	if (cr6.eq) goto loc_83A1BED0;
	// bl 0x83a1bd50
	ctx.lr = 0x83A1BECC;
	sub_83A1BD50(ctx, base);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
loc_83A1BED0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1BEDC"))) PPC_WEAK_FUNC(sub_83A1BEDC);
PPC_FUNC_IMPL(__imp__sub_83A1BEDC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1BF00"))) PPC_WEAK_FUNC(sub_83A1BF00);
PPC_FUNC_IMPL(__imp__sub_83A1BF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A1BF08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,24
	ctx.r26.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83A1BF1C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1bfd4
	if (cr6.eq) goto loc_83A1BFD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1bf78
	if (cr6.eq) goto loc_83A1BF78;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83d7617c
	ctx.lr = 0x83A1BF48;
	__imp__KeSetEvent(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82417108
	ctx.lr = 0x83A1BF58;
	sub_82417108(ctx, base);
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1bf78
	if (cr6.eq) goto loc_83A1BF78;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1bf78
	if (cr6.eq) goto loc_83A1BF78;
	// bl 0x832d1a68
	ctx.lr = 0x83A1BF74;
	sub_832D1A68(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_83A1BF78:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a1bfc0
	if (!cr6.gt) goto loc_83A1BFC0;
	// li r30,4
	ctx.r30.s64 = 4;
loc_83A1BF8C:
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1bfac
	if (cr6.eq) goto loc_83A1BFAC;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a1bfac
	if (cr6.eq) goto loc_83A1BFAC;
	// bl 0x832d1a68
	ctx.lr = 0x83A1BFA8;
	sub_832D1A68(ctx, base);
	// stwx r27,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r27.u32);
loc_83A1BFAC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1bf8c
	if (cr6.lt) goto loc_83A1BF8C;
loc_83A1BFC0:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1bfd4
	if (cr6.eq) goto loc_83A1BFD4;
	// bl 0x83a39b78
	ctx.lr = 0x83A1BFD0;
	sub_83A39B78(ctx, base);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
loc_83A1BFD4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1bfe8
	if (cr6.eq) goto loc_83A1BFE8;
	// bl 0x83a39b78
	ctx.lr = 0x83A1BFE4;
	sub_83A39B78(ctx, base);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
loc_83A1BFE8:
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83A1BFF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1BFFC"))) PPC_WEAK_FUNC(sub_83A1BFFC);
PPC_FUNC_IMPL(__imp__sub_83A1BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C000"))) PPC_WEAK_FUNC(sub_83A1C000);
PPC_FUNC_IMPL(__imp__sub_83A1C000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1C008;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83A1C020;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a1bd50
	ctx.lr = 0x83A1C028;
	sub_83A1BD50(ctx, base);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
loc_83A1C02C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83a1c02c
	if (!cr0.eq) goto loc_83A1C02C;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83A1C054;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1C05C"))) PPC_WEAK_FUNC(sub_83A1C05C);
PPC_FUNC_IMPL(__imp__sub_83A1C05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C060"))) PPC_WEAK_FUNC(sub_83A1C060);
PPC_FUNC_IMPL(__imp__sub_83A1C060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1C088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a1c0b4
	if (cr0.lt) goto loc_83A1C0B4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1C0A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a1c0b4
	if (cr0.lt) goto loc_83A1C0B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1bdb0
	ctx.lr = 0x83A1C0B4;
	sub_83A1BDB0(ctx, base);
loc_83A1C0B4:
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

__attribute__((alias("__imp__sub_83A1C0C8"))) PPC_WEAK_FUNC(sub_83A1C0C8);
PPC_FUNC_IMPL(__imp__sub_83A1C0C8) {
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
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x83a1c0fc
	goto loc_83A1C0FC;
loc_83A1C0EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83a1c104
	if (cr6.eq) goto loc_83A1C104;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83A1C0FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1c0ec
	if (!cr6.eq) goto loc_83A1C0EC;
loc_83A1C104:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1c118
	if (cr6.eq) goto loc_83A1C118;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x839f9970
	ctx.lr = 0x83A1C118;
	sub_839F9970(ctx, base);
loc_83A1C118:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// b 0x83a1c130
	goto loc_83A1C130;
loc_83A1C120:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83a1c138
	if (cr6.eq) goto loc_83A1C138;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83A1C130:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1c120
	if (!cr6.eq) goto loc_83A1C120;
loc_83A1C138:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1c14c
	if (cr6.eq) goto loc_83A1C14C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x839f9970
	ctx.lr = 0x83A1C14C;
	sub_839F9970(ctx, base);
loc_83A1C14C:
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

__attribute__((alias("__imp__sub_83A1C164"))) PPC_WEAK_FUNC(sub_83A1C164);
PPC_FUNC_IMPL(__imp__sub_83A1C164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C168"))) PPC_WEAK_FUNC(sub_83A1C168);
PPC_FUNC_IMPL(__imp__sub_83A1C168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A1C170;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1c234
	if (cr6.eq) goto loc_83A1C234;
	// bl 0x83a1bf00
	ctx.lr = 0x83A1C18C;
	sub_83A1BF00(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r29.u32);
	// beq cr6,0x83a1c1e4
	if (cr6.eq) goto loc_83A1C1E4;
	// lwz r30,372(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// b 0x83a1c1d8
	goto loc_83A1C1D8;
loc_83A1C1AC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a1c1c4
	if (cr6.eq) goto loc_83A1C1C4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1c1c8
	goto loc_83A1C1C8;
loc_83A1C1C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83A1C1C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1C1D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A1C1D8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a1c1ac
	if (!cr6.eq) goto loc_83A1C1AC;
	// b 0x83a1c1e8
	goto loc_83A1C1E8;
loc_83A1C1E4:
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
loc_83A1C1E8:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A1C1FC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83a1c1fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1C1FC;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r3,22593
	ctx.r3.s64 = 1480654848;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r3,r3,30002
	ctx.r3.u64 = ctx.r3.u64 | 30002;
	// bl 0x83ae3308
	ctx.lr = 0x83A1C234;
	sub_83AE3308(ctx, base);
loc_83A1C234:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1C23C"))) PPC_WEAK_FUNC(sub_83A1C23C);
PPC_FUNC_IMPL(__imp__sub_83A1C23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C240"))) PPC_WEAK_FUNC(sub_83A1C240);
PPC_FUNC_IMPL(__imp__sub_83A1C240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1C248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,628
	ctx.r11.s64 = ctx.r3.s64 + 628;
loc_83A1C254:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83a1c254
	if (!cr0.eq) goto loc_83A1C254;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// b 0x83a1c28c
	goto loc_83A1C28C;
loc_83A1C280:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1b860
	ctx.lr = 0x83A1C28C;
	sub_83A1B860(ctx, base);
loc_83A1C28C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x82417108
	ctx.lr = 0x83A1C298;
	sub_82417108(ctx, base);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1c280
	if (cr6.eq) goto loc_83A1C280;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1C2AC"))) PPC_WEAK_FUNC(sub_83A1C2AC);
PPC_FUNC_IMPL(__imp__sub_83A1C2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C2B0"))) PPC_WEAK_FUNC(sub_83A1C2B0);
PPC_FUNC_IMPL(__imp__sub_83A1C2B0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a0af98
	ctx.lr = 0x83A1C2D0;
	sub_83A0AF98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1c314
	if (cr0.eq) goto loc_83A1C314;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1c300
	if (cr6.eq) goto loc_83A1C300;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x83a1c304
	goto loc_83A1C304;
loc_83A1C300:
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
loc_83A1C304:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_83A1C314:
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

__attribute__((alias("__imp__sub_83A1C32C"))) PPC_WEAK_FUNC(sub_83A1C32C);
PPC_FUNC_IMPL(__imp__sub_83A1C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C330"))) PPC_WEAK_FUNC(sub_83A1C330);
PPC_FUNC_IMPL(__imp__sub_83A1C330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1C338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a1c35c
	if (!cr6.eq) goto loc_83A1C35C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83a1c2b0
	ctx.lr = 0x83A1C358;
	sub_83A1C2B0(ctx, base);
	// b 0x83a1c3a0
	goto loc_83A1C3A0;
loc_83A1C35C:
	// bl 0x83a0af98
	ctx.lr = 0x83A1C360;
	sub_83A0AF98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1c3a0
	if (cr0.eq) goto loc_83A1C3A0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1c38c
	if (cr6.eq) goto loc_83A1C38C;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x83a1c390
	goto loc_83A1C390;
loc_83A1C38C:
	// stw r3,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r3.u32);
loc_83A1C390:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r11.u32);
loc_83A1C3A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1C3A8"))) PPC_WEAK_FUNC(sub_83A1C3A8);
PPC_FUNC_IMPL(__imp__sub_83A1C3A8) {
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
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-9512
	ctx.r11.s64 = ctx.r11.s64 + -9512;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83a1c3f0
	if (cr6.eq) goto loc_83A1C3F0;
	// bl 0x83a1bf00
	ctx.lr = 0x83A1C3D8;
	sub_83A1BF00(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83a1bd50
	ctx.lr = 0x83A1C3E0;
	sub_83A1BD50(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83a1bd50
	ctx.lr = 0x83A1C3E8;
	sub_83A1BD50(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a1bd50
	ctx.lr = 0x83A1C3F0;
	sub_83A1BD50(ctx, base);
loc_83A1C3F0:
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

__attribute__((alias("__imp__sub_83A1C404"))) PPC_WEAK_FUNC(sub_83A1C404);
PPC_FUNC_IMPL(__imp__sub_83A1C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C408"))) PPC_WEAK_FUNC(sub_83A1C408);
PPC_FUNC_IMPL(__imp__sub_83A1C408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A1C410;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r22,r3,24
	ctx.r22.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83d7554c
	ctx.lr = 0x83A1C430;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// ble cr6,0x83a1c458
	if (!cr6.gt) goto loc_83A1C458;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_83A1C458:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r29,r11,9136
	ctx.r29.s64 = ctx.r11.s64 + 9136;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1C474;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// beq 0x83a1c4b0
	if (cr0.eq) goto loc_83A1C4B0;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x83a1c490
	if (!cr6.gt) goto loc_83A1C490;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_83A1C490:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1C4A4;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// bne 0x83a1c4bc
	if (!cr0.eq) goto loc_83A1C4BC;
loc_83A1C4B0:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x83a1c690
	goto loc_83A1C690;
loc_83A1C4BC:
	// rlwinm r30,r25,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832d27b0
	ctx.lr = 0x83A1C4D0;
	sub_832D27B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x832d27b0
	ctx.lr = 0x83A1C4E0;
	sub_832D27B0(ctx, base);
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A1C4F8;
	sub_831CDCF0(ctx, base);
	// rlwinm. r10,r27,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq 0x83a1c510
	if (cr0.eq) goto loc_83A1C510;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A1C510:
	// rlwinm. r10,r27,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a1c52c
	if (cr0.eq) goto loc_83A1C52C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_83A1C52C:
	// rlwinm. r10,r27,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a1c548
	if (cr0.eq) goto loc_83A1C548;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_83A1C548:
	// rlwinm. r10,r27,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a1c564
	if (cr0.eq) goto loc_83A1C564;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_83A1C564:
	// rlwinm. r10,r27,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a1c57c
	if (cr0.eq) goto loc_83A1C57C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_83A1C57C:
	// lis r11,-31838
	ctx.r11.s64 = -2086535168;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-18480
	ctx.r5.s64 = ctx.r11.s64 + -18480;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d4720
	ctx.lr = 0x83A1C59C;
	sub_832D4720(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a1c6bc
	if (cr6.eq) goto loc_83A1C6BC;
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c48
	ctx.lr = 0x83A1C5C8;
	sub_82416C48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82416a10
	ctx.lr = 0x83A1C5D4;
	sub_82416A10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d2f58
	ctx.lr = 0x83A1C5DC;
	sub_832D2F58(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83A1C5E8:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// ble cr6,0x83a1c688
	if (!cr6.gt) goto loc_83A1C688;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r28,r24,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_83A1C5FC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x83a1c690
	if (cr6.lt) goto loc_83A1C690;
	// lis r11,-31838
	ctx.r11.s64 = -2086535168;
	// add r29,r30,r24
	ctx.r29.u64 = ctx.r30.u64 + ctx.r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-18384
	ctx.r5.s64 = ctx.r11.s64 + -18384;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d4720
	ctx.lr = 0x83A1C628;
	sub_832D4720(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1c6c8
	if (cr6.eq) goto loc_83A1C6C8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r4,r28,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416c48
	ctx.lr = 0x83A1C664;
	sub_82416C48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82416a10
	ctx.lr = 0x83A1C670;
	sub_82416A10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d2f58
	ctx.lr = 0x83A1C678;
	sub_832D2F58(ctx, base);
loc_83A1C678:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x83a1c5fc
	if (cr6.lt) goto loc_83A1C5FC;
loc_83A1C688:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge cr6,0x83a1c6a8
	if (!cr6.lt) goto loc_83A1C6A8;
loc_83A1C690:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1bf00
	ctx.lr = 0x83A1C698;
	sub_83A1BF00(ctx, base);
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832d27b0
	ctx.lr = 0x83A1C6A8;
	sub_832D27B0(ctx, base);
loc_83A1C6A8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83d7553c
	ctx.lr = 0x83A1C6B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A1C6BC:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x83a1c5e8
	goto loc_83A1C5E8;
loc_83A1C6C8:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x83a1c678
	goto loc_83A1C678;
}

__attribute__((alias("__imp__sub_83A1C6D4"))) PPC_WEAK_FUNC(sub_83A1C6D4);
PPC_FUNC_IMPL(__imp__sub_83A1C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C6D8"))) PPC_WEAK_FUNC(sub_83A1C6D8);
PPC_FUNC_IMPL(__imp__sub_83A1C6D8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a1c3a8
	ctx.lr = 0x83A1C6F8;
	sub_83A1C3A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a1c708
	if (cr0.eq) goto loc_83A1C708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1C708;
	sub_83A39B78(ctx, base);
loc_83A1C708:
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

__attribute__((alias("__imp__sub_83A1C724"))) PPC_WEAK_FUNC(sub_83A1C724);
PPC_FUNC_IMPL(__imp__sub_83A1C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C728"))) PPC_WEAK_FUNC(sub_83A1C728);
PPC_FUNC_IMPL(__imp__sub_83A1C728) {
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
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-9500
	ctx.r11.s64 = ctx.r11.s64 + -9500;
	// addi r10,r10,-27432
	ctx.r10.s64 = ctx.r10.s64 + -27432;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// stw r5,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r7,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r7.u32);
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// bl 0x839f9ca8
	ctx.lr = 0x83A1C7B0;
	sub_839F9CA8(ctx, base);
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x839f9ca8
	ctx.lr = 0x83A1C7B8;
	sub_839F9CA8(ctx, base);
	// addi r11,r31,648
	ctx.r11.s64 = ctx.r31.s64 + 648;
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
	// std r30,744(r31)
	PPC_STORE_U64(ctx.r31.u32 + 744, ctx.r30.u64);
	// std r30,752(r31)
	PPC_STORE_U64(ctx.r31.u32 + 752, ctx.r30.u64);
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

__attribute__((alias("__imp__sub_83A1C814"))) PPC_WEAK_FUNC(sub_83A1C814);
PPC_FUNC_IMPL(__imp__sub_83A1C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1C818"))) PPC_WEAK_FUNC(sub_83A1C818);
PPC_FUNC_IMPL(__imp__sub_83A1C818) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r3,r3,388
	ctx.r3.s64 = ctx.r3.s64 + 388;
	// addi r11,r11,-9500
	ctx.r11.s64 = ctx.r11.s64 + -9500;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// b 0x83a1c864
	goto loc_83A1C864;
loc_83A1C848:
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r9.u32);
loc_83A1C864:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1c848
	if (!cr6.eq) goto loc_83A1C848;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// addi r31,r30,168
	ctx.r31.s64 = ctx.r30.s64 + 168;
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lwz r10,372(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// b 0x83a1c89c
	goto loc_83A1C89C;
loc_83A1C880:
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
loc_83A1C89C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a1c880
	if (!cr6.eq) goto loc_83A1C880;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// bl 0x839fa3f0
	ctx.lr = 0x83A1C8B0;
	sub_839FA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fa3f0
	ctx.lr = 0x83A1C8B8;
	sub_839FA3F0(ctx, base);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// bl 0x839f8de0
	ctx.lr = 0x83A1C8C0;
	sub_839F8DE0(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x839f8de0
	ctx.lr = 0x83A1C8C8;
	sub_839F8DE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a1c3a8
	ctx.lr = 0x83A1C8D0;
	sub_83A1C3A8(ctx, base);
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

__attribute__((alias("__imp__sub_83A1C8E8"))) PPC_WEAK_FUNC(sub_83A1C8E8);
PPC_FUNC_IMPL(__imp__sub_83A1C8E8) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a1c910
	if (!cr6.eq) goto loc_83A1C910;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x83a1c2b0
	ctx.lr = 0x83A1C90C;
	sub_83A1C2B0(ctx, base);
	// b 0x83a1c93c
	goto loc_83A1C93C;
loc_83A1C910:
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// b 0x83a1c928
	goto loc_83A1C928;
loc_83A1C918:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83a1c930
	if (cr6.eq) goto loc_83A1C930;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83A1C928:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1c918
	if (!cr6.eq) goto loc_83A1C918;
loc_83A1C930:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x83a1c330
	ctx.lr = 0x83A1C93C;
	sub_83A1C330(ctx, base);
loc_83A1C93C:
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1C960"))) PPC_WEAK_FUNC(sub_83A1C960);
PPC_FUNC_IMPL(__imp__sub_83A1C960) {
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
	ctx.lr = 0x83A1C968;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a1ca34
	if (!cr6.eq) goto loc_83A1CA34;
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// addi r29,r3,388
	ctx.r29.s64 = ctx.r3.s64 + 388;
	// b 0x83a1c9ac
	goto loc_83A1C9AC;
loc_83A1C990:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r9.u32);
loc_83A1C9AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1c990
	if (!cr6.eq) goto loc_83A1C990;
	// stw r27,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r27.u32);
	// stw r27,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r27.u32);
	// lwz r31,372(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a1ca9c
	if (cr6.eq) goto loc_83A1CA9C;
loc_83A1C9C8:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x83a1caa0
	if (cr6.lt) goto loc_83A1CAA0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a1c9e8
	if (cr6.eq) goto loc_83A1C9E8;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1c9ec
	goto loc_83A1C9EC;
loc_83A1C9E8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83A1C9EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CA00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a1ca28
	if (cr0.eq) goto loc_83A1CA28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a0b8a0
	ctx.lr = 0x83A1CA14;
	sub_83A0B8A0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// and r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_83A1CA28:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a1c9c8
	if (!cr6.eq) goto loc_83A1C9C8;
	// b 0x83a1ca94
	goto loc_83A1CA94;
loc_83A1CA34:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a1ca9c
	if (!cr6.eq) goto loc_83A1CA9C;
	// lwz r31,592(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 592);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a1ca9c
	if (cr6.eq) goto loc_83A1CA9C;
loc_83A1CA48:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a1ca64
	if (cr6.eq) goto loc_83A1CA64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1ca68
	goto loc_83A1CA68;
loc_83A1CA64:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83A1CA68:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CA78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a1ca8c
	if (!cr0.eq) goto loc_83A1CA8C;
	// addi r3,r28,388
	ctx.r3.s64 = ctx.r28.s64 + 388;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839f9970
	ctx.lr = 0x83A1CA8C;
	sub_839F9970(ctx, base);
loc_83A1CA8C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a1ca48
	if (!cr6.eq) goto loc_83A1CA48;
loc_83A1CA94:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x83a1caa0
	if (cr6.lt) goto loc_83A1CAA0;
loc_83A1CA9C:
	// stw r27,640(r28)
	PPC_STORE_U32(ctx.r28.u32 + 640, ctx.r27.u32);
loc_83A1CAA0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1CAAC"))) PPC_WEAK_FUNC(sub_83A1CAAC);
PPC_FUNC_IMPL(__imp__sub_83A1CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1CAB0"))) PPC_WEAK_FUNC(sub_83A1CAB0);
PPC_FUNC_IMPL(__imp__sub_83A1CAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A1CAB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,128(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r26,164(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CAE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x83a1cb10
	if (cr0.eq) goto loc_83A1CB10;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a1cb10
	if (cr6.eq) goto loc_83A1CB10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1c000
	ctx.lr = 0x83A1CB04;
	sub_83A1C000(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x83a1cb14
	goto loc_83A1CB14;
loc_83A1CB10:
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
loc_83A1CB14:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// li r5,80
	ctx.r5.s64 = 80;
	// std r11,744(r31)
	PPC_STORE_U64(ctx.r31.u32 + 744, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,752(r31)
	PPC_STORE_U64(ctx.r31.u32 + 752, ctx.r11.u64);
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// bl 0x831cdcf0
	ctx.lr = 0x83A1CB3C;
	sub_831CDCF0(ctx, base);
	// stw r29,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r29.u32);
	// stw r29,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r29.u32);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// stw r29,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r29.u32);
	// ble cr6,0x83a1cb9c
	if (!cr6.gt) goto loc_83A1CB9C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d2b88
	ctx.lr = 0x83A1CB64;
	sub_832D2B88(ctx, base);
	// stw r3,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1cb90
	if (cr0.eq) goto loc_83A1CB90;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d2a70
	ctx.lr = 0x83A1CB84;
	sub_832D2A70(ctx, base);
	// stw r3,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a1cb9c
	if (!cr0.eq) goto loc_83A1CB9C;
loc_83A1CB90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x83a1cbb8
	goto loc_83A1CBB8;
loc_83A1CB9C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1c408
	ctx.lr = 0x83A1CBB0;
	sub_83A1C408(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a1cbbc
	if (!cr0.lt) goto loc_83A1CBBC;
loc_83A1CBB8:
	// stw r26,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r26.u32);
loc_83A1CBBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1CBC4"))) PPC_WEAK_FUNC(sub_83A1CBC4);
PPC_FUNC_IMPL(__imp__sub_83A1CBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1CBC8"))) PPC_WEAK_FUNC(sub_83A1CBC8);
PPC_FUNC_IMPL(__imp__sub_83A1CBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1CBD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CBF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mftb r27
	ctx.r27.u64 = PPC_QUERY_TIMEBASE();
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CC0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83a1ecd0
	ctx.lr = 0x83A1CC14;
	sub_83A1ECD0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x83a1ccf4
	if (cr0.lt) goto loc_83A1CCF4;
	// lwz r11,640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1cc34
	if (cr6.eq) goto loc_83A1CC34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1c960
	ctx.lr = 0x83A1CC30;
	sub_83A1C960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A1CC34:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x83a1ccf4
	if (cr6.lt) goto loc_83A1CCF4;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x83a1b068
	ctx.lr = 0x83A1CC44;
	sub_83A1B068(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x83a1ccf4
	if (cr0.lt) goto loc_83A1CCF4;
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// b 0x83a1cccc
	goto loc_83A1CCCC;
loc_83A1CC60:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a1cc90
	if (!cr6.gt) goto loc_83A1CC90;
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x832d2b50
	ctx.lr = 0x83A1CC7C;
	sub_832D2B50(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x832d2c20
	ctx.lr = 0x83A1CC90;
	sub_832D2C20(ctx, base);
loc_83A1CC90:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1b860
	ctx.lr = 0x83A1CC9C;
	sub_83A1B860(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a1ccc8
	if (!cr6.gt) goto loc_83A1CCC8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x82417108
	ctx.lr = 0x83A1CCB4;
	sub_82417108(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1ccc8
	if (cr6.eq) goto loc_83A1CCC8;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x83a1b1c0
	ctx.lr = 0x83A1CCC8;
	sub_83A1B1C0(ctx, base);
loc_83A1CCC8:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
loc_83A1CCCC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1cc60
	if (!cr6.eq) goto loc_83A1CC60;
	// lwz r30,620(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x83a1ccf4
	if (cr6.lt) goto loc_83A1CCF4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CCF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A1CCF4:
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// li r9,-1
	ctx.r9.s64 = -1;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// bgt cr6,0x83a1cd1c
	if (cr6.gt) goto loc_83A1CD1C;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1b9e0
	ctx.lr = 0x83A1CD1C;
	sub_83A1B9E0(ctx, base);
loc_83A1CD1C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CD30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1CD3C"))) PPC_WEAK_FUNC(sub_83A1CD3C);
PPC_FUNC_IMPL(__imp__sub_83A1CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1CD40"))) PPC_WEAK_FUNC(sub_83A1CD40);
PPC_FUNC_IMPL(__imp__sub_83A1CD40) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a1c818
	ctx.lr = 0x83A1CD60;
	sub_83A1C818(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a1cd70
	if (cr0.eq) goto loc_83A1CD70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1CD70;
	sub_83A39B78(ctx, base);
loc_83A1CD70:
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

__attribute__((alias("__imp__sub_83A1CD8C"))) PPC_WEAK_FUNC(sub_83A1CD8C);
PPC_FUNC_IMPL(__imp__sub_83A1CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1CD90"))) PPC_WEAK_FUNC(sub_83A1CD90);
PPC_FUNC_IMPL(__imp__sub_83A1CD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A1CD98;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,628
	ctx.r11.s64 = ctx.r3.s64 + 628;
loc_83A1CDA4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83a1cda4
	if (!cr0.eq) goto loc_83A1CDA4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// bl 0x83a25020
	ctx.lr = 0x83A1CDCC;
	sub_83A25020(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CDE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rldicl r10,r9,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// tdllei r9,0
	// divdu r11,r11,r9
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r9.u64);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_83A1CE08:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x83a372c0
	ctx.lr = 0x83A1CE18;
	sub_83A372C0(ctx, base);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x83a1ce3c
	goto loc_83A1CE3C;
loc_83A1CE20:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a1ce44
	if (!cr6.lt) goto loc_83A1CE44;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1cbc8
	ctx.lr = 0x83A1CE38;
	sub_83A1CBC8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83A1CE3C:
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1ce20
	if (!cr0.lt) goto loc_83A1CE20;
loc_83A1CE44:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a1ce54
	if (cr6.eq) goto loc_83A1CE54;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_83A1CE54:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x83a1ce70
	if (cr6.lt) goto loc_83A1CE70;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1b710
	ctx.lr = 0x83A1CE68;
	sub_83A1B710(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a1ce08
	if (!cr0.eq) goto loc_83A1CE08;
loc_83A1CE70:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a1cee0
	if (!cr6.gt) goto loc_83A1CEE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x832d2c20
	ctx.lr = 0x83A1CE94;
	sub_832D2C20(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83a1cec8
	if (!cr6.gt) goto loc_83A1CEC8;
	// li r29,4
	ctx.r29.s64 = 4;
loc_83A1CEA4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82417108
	ctx.lr = 0x83A1CEB4;
	sub_82417108(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a1cea4
	if (cr6.lt) goto loc_83A1CEA4;
loc_83A1CEC8:
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x832d1a68
	ctx.lr = 0x83A1CED0;
	sub_832D1A68(ctx, base);
	// stw r25,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r25.u32);
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// bl 0x832d1a68
	ctx.lr = 0x83A1CEDC;
	sub_832D1A68(ctx, base);
	// stw r25,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r25.u32);
loc_83A1CEE0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x83a1cf04
	if (!cr6.lt) goto loc_83A1CF04;
	// stw r25,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r25.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CF04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A1CF04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1CF0C"))) PPC_WEAK_FUNC(sub_83A1CF0C);
PPC_FUNC_IMPL(__imp__sub_83A1CF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1CF10"))) PPC_WEAK_FUNC(sub_83A1CF10);
PPC_FUNC_IMPL(__imp__sub_83A1CF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1CF18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CF3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a1e358
	ctx.lr = 0x83A1CF4C;
	sub_83A1E358(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CF68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1CF74"))) PPC_WEAK_FUNC(sub_83A1CF74);
PPC_FUNC_IMPL(__imp__sub_83A1CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1CF78"))) PPC_WEAK_FUNC(sub_83A1CF78);
PPC_FUNC_IMPL(__imp__sub_83A1CF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1CF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CFA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a1e680
	ctx.lr = 0x83A1CFB4;
	sub_83A1E680(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1CFD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1CFDC"))) PPC_WEAK_FUNC(sub_83A1CFDC);
PPC_FUNC_IMPL(__imp__sub_83A1CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1CFE0"))) PPC_WEAK_FUNC(sub_83A1CFE0);
PPC_FUNC_IMPL(__imp__sub_83A1CFE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a1e060
	ctx.lr = 0x83A1D014;
	sub_83A1E060(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1D048"))) PPC_WEAK_FUNC(sub_83A1D048);
PPC_FUNC_IMPL(__imp__sub_83A1D048) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1cf78
	sub_83A1CF78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D050"))) PPC_WEAK_FUNC(sub_83A1D050);
PPC_FUNC_IMPL(__imp__sub_83A1D050) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1cfe0
	sub_83A1CFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D058"))) PPC_WEAK_FUNC(sub_83A1D058);
PPC_FUNC_IMPL(__imp__sub_83A1D058) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1cf10
	sub_83A1CF10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D060"))) PPC_WEAK_FUNC(sub_83A1D060);
PPC_FUNC_IMPL(__imp__sub_83A1D060) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1d0c8
	sub_83A1D0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D068"))) PPC_WEAK_FUNC(sub_83A1D068);
PPC_FUNC_IMPL(__imp__sub_83A1D068) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x83a1e128
	ctx.lr = 0x83A1D08C;
	sub_83A1E128(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r11,r11,-9428
	ctx.r11.s64 = ctx.r11.s64 + -9428;
	// addi r10,r10,-9488
	ctx.r10.s64 = ctx.r10.s64 + -9488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83A1D0C4"))) PPC_WEAK_FUNC(sub_83A1D0C4);
PPC_FUNC_IMPL(__imp__sub_83A1D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D0C8"))) PPC_WEAK_FUNC(sub_83A1D0C8);
PPC_FUNC_IMPL(__imp__sub_83A1D0C8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9488
	ctx.r11.s64 = ctx.r11.s64 + -9488;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a1e230
	ctx.lr = 0x83A1D100;
	sub_83A1E230(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a1d110
	if (cr0.eq) goto loc_83A1D110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1D110;
	sub_83A39B78(ctx, base);
loc_83A1D110:
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

__attribute__((alias("__imp__sub_83A1D12C"))) PPC_WEAK_FUNC(sub_83A1D12C);
PPC_FUNC_IMPL(__imp__sub_83A1D12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D130"))) PPC_WEAK_FUNC(sub_83A1D130);
PPC_FUNC_IMPL(__imp__sub_83A1D130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A1D138;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1D174;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1d198
	if (cr0.eq) goto loc_83A1D198;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a1d068
	ctx.lr = 0x83A1D190;
	sub_83A1D068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83a1d19c
	goto loc_83A1D19C;
loc_83A1D198:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A1D19C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a1d1b0
	if (!cr6.eq) goto loc_83A1D1B0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x83a1d200
	goto loc_83A1D200;
loc_83A1D1B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D1D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a1d1e4
	if (cr0.lt) goto loc_83A1D1E4;
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// b 0x83a1d200
	goto loc_83A1D200;
loc_83A1D1E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D1FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x83A1D200;
	sub_83A39B78(ctx, base);
loc_83A1D200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D20C"))) PPC_WEAK_FUNC(sub_83A1D20C);
PPC_FUNC_IMPL(__imp__sub_83A1D20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D210"))) PPC_WEAK_FUNC(sub_83A1D210);
PPC_FUNC_IMPL(__imp__sub_83A1D210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1D218;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x83a37ae0
	ctx.lr = 0x83A1D258;
	sub_83A37AE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a1d290
	if (cr0.lt) goto loc_83A1D290;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x83a1d130
	ctx.lr = 0x83A1D280;
	sub_83A1D130(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a1d290
	if (cr0.lt) goto loc_83A1D290;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83A1D290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D298"))) PPC_WEAK_FUNC(sub_83A1D298);
PPC_FUNC_IMPL(__imp__sub_83A1D298) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D2C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a1e2a0
	ctx.lr = 0x83A1D2D4;
	sub_83A1E2A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D2F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1D30C"))) PPC_WEAK_FUNC(sub_83A1D30C);
PPC_FUNC_IMPL(__imp__sub_83A1D30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D310"))) PPC_WEAK_FUNC(sub_83A1D310);
PPC_FUNC_IMPL(__imp__sub_83A1D310) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a1e418
	sub_83A1E418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D318"))) PPC_WEAK_FUNC(sub_83A1D318);
PPC_FUNC_IMPL(__imp__sub_83A1D318) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a1e028
	sub_83A1E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D320"))) PPC_WEAK_FUNC(sub_83A1D320);
PPC_FUNC_IMPL(__imp__sub_83A1D320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1D328;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D34C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a1e500
	ctx.lr = 0x83A1D35C;
	sub_83A1E500(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D378;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D384"))) PPC_WEAK_FUNC(sub_83A1D384);
PPC_FUNC_IMPL(__imp__sub_83A1D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D388"))) PPC_WEAK_FUNC(sub_83A1D388);
PPC_FUNC_IMPL(__imp__sub_83A1D388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1D390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D3B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a1e5c0
	ctx.lr = 0x83A1D3C4;
	sub_83A1E5C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D3E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D3EC"))) PPC_WEAK_FUNC(sub_83A1D3EC);
PPC_FUNC_IMPL(__imp__sub_83A1D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D3F0"))) PPC_WEAK_FUNC(sub_83A1D3F0);
PPC_FUNC_IMPL(__imp__sub_83A1D3F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D420;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a1e060
	ctx.lr = 0x83A1D42C;
	sub_83A1E060(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1D464"))) PPC_WEAK_FUNC(sub_83A1D464);
PPC_FUNC_IMPL(__imp__sub_83A1D464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D468"))) PPC_WEAK_FUNC(sub_83A1D468);
PPC_FUNC_IMPL(__imp__sub_83A1D468) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x83a38118
	ctx.lr = 0x83A1D4A4;
	sub_83A38118(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D4B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83A1D4D4"))) PPC_WEAK_FUNC(sub_83A1D4D4);
PPC_FUNC_IMPL(__imp__sub_83A1D4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D4D8"))) PPC_WEAK_FUNC(sub_83A1D4D8);
PPC_FUNC_IMPL(__imp__sub_83A1D4D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D500;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D514;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1D53C"))) PPC_WEAK_FUNC(sub_83A1D53C);
PPC_FUNC_IMPL(__imp__sub_83A1D53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D540"))) PPC_WEAK_FUNC(sub_83A1D540);
PPC_FUNC_IMPL(__imp__sub_83A1D540) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x83a1e358
	sub_83A1E358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D54C"))) PPC_WEAK_FUNC(sub_83A1D54C);
PPC_FUNC_IMPL(__imp__sub_83A1D54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D550"))) PPC_WEAK_FUNC(sub_83A1D550);
PPC_FUNC_IMPL(__imp__sub_83A1D550) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1d318
	sub_83A1D318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D558"))) PPC_WEAK_FUNC(sub_83A1D558);
PPC_FUNC_IMPL(__imp__sub_83A1D558) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1d298
	sub_83A1D298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D560"))) PPC_WEAK_FUNC(sub_83A1D560);
PPC_FUNC_IMPL(__imp__sub_83A1D560) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1d310
	sub_83A1D310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D568"))) PPC_WEAK_FUNC(sub_83A1D568);
PPC_FUNC_IMPL(__imp__sub_83A1D568) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1d3f0
	sub_83A1D3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D570"))) PPC_WEAK_FUNC(sub_83A1D570);
PPC_FUNC_IMPL(__imp__sub_83A1D570) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1d388
	sub_83A1D388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D578"))) PPC_WEAK_FUNC(sub_83A1D578);
PPC_FUNC_IMPL(__imp__sub_83A1D578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1d320
	sub_83A1D320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D580"))) PPC_WEAK_FUNC(sub_83A1D580);
PPC_FUNC_IMPL(__imp__sub_83A1D580) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1d5e8
	sub_83A1D5E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D588"))) PPC_WEAK_FUNC(sub_83A1D588);
PPC_FUNC_IMPL(__imp__sub_83A1D588) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a1d5a4
	if (cr6.eq) goto loc_83A1D5A4;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// bne cr6,0x83a1d5bc
	if (!cr6.eq) goto loc_83A1D5BC;
loc_83A1D5A4:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1d5c4
	if (cr6.eq) goto loc_83A1D5C4;
	// bl 0x83a0aa90
	ctx.lr = 0x83A1D5B4;
	sub_83A0AA90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a1d5c4
	if (!cr0.eq) goto loc_83A1D5C4;
loc_83A1D5BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a1d5c8
	goto loc_83A1D5C8;
loc_83A1D5C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A1D5C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1D5D8"))) PPC_WEAK_FUNC(sub_83A1D5D8);
PPC_FUNC_IMPL(__imp__sub_83A1D5D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1D5E0"))) PPC_WEAK_FUNC(sub_83A1D5E0);
PPC_FUNC_IMPL(__imp__sub_83A1D5E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1D5E8"))) PPC_WEAK_FUNC(sub_83A1D5E8);
PPC_FUNC_IMPL(__imp__sub_83A1D5E8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9396
	ctx.r11.s64 = ctx.r11.s64 + -9396;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a1e230
	ctx.lr = 0x83A1D620;
	sub_83A1E230(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a1d630
	if (cr0.eq) goto loc_83A1D630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1D630;
	sub_83A39B78(ctx, base);
loc_83A1D630:
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

__attribute__((alias("__imp__sub_83A1D64C"))) PPC_WEAK_FUNC(sub_83A1D64C);
PPC_FUNC_IMPL(__imp__sub_83A1D64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D650"))) PPC_WEAK_FUNC(sub_83A1D650);
PPC_FUNC_IMPL(__imp__sub_83A1D650) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x83a1d6fc
	if (cr6.gt) goto loc_83A1D6FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a1d698
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A1D698;
	// bdzf 4*cr6+eq,0x83a1d6a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A1D6A8;
	// bdzf 4*cr6+eq,0x83a1d6b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A1D6B4;
	// bdzf 4*cr6+eq,0x83a1d6c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A1D6C0;
	// bdzf 4*cr6+eq,0x83a1d6cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A1D6CC;
	// bdzf 4*cr6+eq,0x83a1d6dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A1D6DC;
	// bne cr6,0x83a1d6ec
	if (!cr6.eq) goto loc_83A1D6EC;
loc_83A1D698:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x83a39608
	ctx.lr = 0x83A1D6A4;
	sub_83A39608(ctx, base);
	// b 0x83a1d700
	goto loc_83A1D700;
loc_83A1D6A8:
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x83a38ae0
	ctx.lr = 0x83A1D6B0;
	sub_83A38AE0(ctx, base);
	// b 0x83a1d704
	goto loc_83A1D704;
loc_83A1D6B4:
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x83a38340
	ctx.lr = 0x83A1D6BC;
	sub_83A38340(ctx, base);
	// b 0x83a1d704
	goto loc_83A1D704;
loc_83A1D6C0:
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x83a38378
	ctx.lr = 0x83A1D6C8;
	sub_83A38378(ctx, base);
	// b 0x83a1d704
	goto loc_83A1D704;
loc_83A1D6CC:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x83a39338
	ctx.lr = 0x83A1D6D8;
	sub_83A39338(ctx, base);
	// b 0x83a1d700
	goto loc_83A1D700;
loc_83A1D6DC:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x83a39458
	ctx.lr = 0x83A1D6E8;
	sub_83A39458(ctx, base);
	// b 0x83a1d700
	goto loc_83A1D700;
loc_83A1D6EC:
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x83a39588
	ctx.lr = 0x83A1D6F8;
	sub_83A39588(ctx, base);
	// b 0x83a1d700
	goto loc_83A1D700;
loc_83A1D6FC:
	// bl 0x83a1e150
	ctx.lr = 0x83A1D700;
	sub_83A1E150(ctx, base);
loc_83A1D700:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A1D704:
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

__attribute__((alias("__imp__sub_83A1D71C"))) PPC_WEAK_FUNC(sub_83A1D71C);
PPC_FUNC_IMPL(__imp__sub_83A1D71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D720"))) PPC_WEAK_FUNC(sub_83A1D720);
PPC_FUNC_IMPL(__imp__sub_83A1D720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1D728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x83a1e128
	ctx.lr = 0x83A1D73C;
	sub_83A1E128(ctx, base);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addi r11,r11,-9336
	ctx.r11.s64 = ctx.r11.s64 + -9336;
	// addi r10,r10,-9396
	ctx.r10.s64 = ctx.r10.s64 + -9396;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A1D76C;
	sub_831CDCF0(ctx, base);
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A1D780;
	sub_831CDCF0(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D794"))) PPC_WEAK_FUNC(sub_83A1D794);
PPC_FUNC_IMPL(__imp__sub_83A1D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D798"))) PPC_WEAK_FUNC(sub_83A1D798);
PPC_FUNC_IMPL(__imp__sub_83A1D798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A1D7A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-2
	cr6.compare<int32_t>(ctx.r5.s32, -2, xer);
	// beq cr6,0x83a1d7cc
	if (cr6.eq) goto loc_83A1D7CC;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D7CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A1D7CC:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r25,r11,9136
	ctx.r25.s64 = ctx.r11.s64 + 9136;
	// bne cr6,0x83a1d7f4
	if (!cr6.eq) goto loc_83A1D7F4;
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
	// addi r30,r29,68
	ctx.r30.s64 = ctx.r29.s64 + 68;
	// b 0x83a1d830
	goto loc_83A1D830;
loc_83A1D7F4:
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1d80c
	if (!cr6.eq) goto loc_83A1D80C;
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
	// addi r30,r29,128
	ctx.r30.s64 = ctx.r29.s64 + 128;
	// b 0x83a1d830
	goto loc_83A1D830;
loc_83A1D80C:
	// bl 0x83d755ac
	ctx.lr = 0x83A1D810;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1D828;
	sub_839F8CD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83A1D830:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a1d844
	if (!cr6.eq) goto loc_83A1D844;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1d974
	goto loc_83A1D974;
loc_83A1D844:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// beq cr6,0x83a1d8a4
	if (cr6.eq) goto loc_83A1D8A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83A1D8A4:
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a1d588
	ctx.lr = 0x83A1D8B4;
	sub_83A1D588(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a1d8cc
	if (cr0.eq) goto loc_83A1D8CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x83a39608
	ctx.lr = 0x83A1D8C8;
	sub_83A39608(ctx, base);
	// b 0x83a1d8fc
	goto loc_83A1D8FC;
loc_83A1D8CC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x83a1d904
	if (cr6.eq) goto loc_83A1D904;
	// addic r11,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// subfe r11,r11,r26
	temp.u8 = (~ctx.r11.u32 + ctx.r26.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r26.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r26.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83a1e788
	ctx.lr = 0x83A1D8FC;
	sub_83A1E788(ctx, base);
loc_83A1D8FC:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83a1d974
	goto loc_83A1D974;
loc_83A1D904:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1D91C;
	sub_839F8CD8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a1d930
	if (!cr0.eq) goto loc_83A1D930;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1d96c
	goto loc_83A1D96C;
loc_83A1D930:
	// addic r11,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// subfe r11,r11,r26
	temp.u8 = (~ctx.r11.u32 + ctx.r26.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r26.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r26.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83a1e788
	ctx.lr = 0x83A1D95C;
	sub_83A1E788(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1d974
	if (!cr0.lt) goto loc_83A1D974;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1D96C;
	sub_83A39B78(ctx, base);
loc_83A1D96C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1D974;
	sub_83A39B78(ctx, base);
loc_83A1D974:
	// cmpwi cr6,r26,-2
	cr6.compare<int32_t>(ctx.r26.s32, -2, xer);
	// beq cr6,0x83a1d990
	if (cr6.eq) goto loc_83A1D990;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D990;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A1D990:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1D99C"))) PPC_WEAK_FUNC(sub_83A1D99C);
PPC_FUNC_IMPL(__imp__sub_83A1D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1D9A0"))) PPC_WEAK_FUNC(sub_83A1D9A0);
PPC_FUNC_IMPL(__imp__sub_83A1D9A0) {
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
	ctx.lr = 0x83A1D9A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1D9C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1d9ec
	if (!cr6.eq) goto loc_83A1D9EC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a1d9ec
	if (!cr6.eq) goto loc_83A1D9EC;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x83a38ae0
	ctx.lr = 0x83A1D9E8;
	sub_83A38AE0(ctx, base);
	// b 0x83a1da58
	goto loc_83A1DA58;
loc_83A1D9EC:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1DA08;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1da1c
	if (!cr0.eq) goto loc_83A1DA1C;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1da58
	goto loc_83A1DA58;
loc_83A1DA1C:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// subfe r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83a1e788
	ctx.lr = 0x83A1DA48;
	sub_83A1E788(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1da58
	if (!cr0.lt) goto loc_83A1DA58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1DA58;
	sub_83A39B78(ctx, base);
loc_83A1DA58:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DA6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1DA78"))) PPC_WEAK_FUNC(sub_83A1DA78);
PPC_FUNC_IMPL(__imp__sub_83A1DA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1DA80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DAA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83a1d588
	ctx.lr = 0x83A1DAB4;
	sub_83A1D588(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a1dac8
	if (cr0.eq) goto loc_83A1DAC8;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x83a38340
	ctx.lr = 0x83A1DAC4;
	sub_83A38340(ctx, base);
	// b 0x83a1db30
	goto loc_83A1DB30;
loc_83A1DAC8:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1DAE4;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1daf8
	if (!cr0.eq) goto loc_83A1DAF8;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1db30
	goto loc_83A1DB30;
loc_83A1DAF8:
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x83a1e788
	ctx.lr = 0x83A1DB20;
	sub_83A1E788(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1db30
	if (!cr0.lt) goto loc_83A1DB30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1DB30;
	sub_83A39B78(ctx, base);
loc_83A1DB30:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DB44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1DB50"))) PPC_WEAK_FUNC(sub_83A1DB50);
PPC_FUNC_IMPL(__imp__sub_83A1DB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1DB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DB74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1db90
	if (!cr6.eq) goto loc_83A1DB90;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x83a38378
	ctx.lr = 0x83A1DB8C;
	sub_83A38378(ctx, base);
	// b 0x83a1dbf4
	goto loc_83A1DBF4;
loc_83A1DB90:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1DBAC;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1dbc0
	if (!cr0.eq) goto loc_83A1DBC0;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x83a1dbf4
	goto loc_83A1DBF4;
loc_83A1DBC0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83a1e788
	ctx.lr = 0x83A1DBE4;
	sub_83A1E788(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x83a1dbf4
	if (!cr0.lt) goto loc_83A1DBF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1DBF4;
	sub_83A39B78(ctx, base);
loc_83A1DBF4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DC08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1DC14"))) PPC_WEAK_FUNC(sub_83A1DC14);
PPC_FUNC_IMPL(__imp__sub_83A1DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1DC18"))) PPC_WEAK_FUNC(sub_83A1DC18);
PPC_FUNC_IMPL(__imp__sub_83A1DC18) {
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
	ctx.lr = 0x83A1DC20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DC44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1dc6c
	if (!cr6.eq) goto loc_83A1DC6C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a1dc6c
	if (!cr6.eq) goto loc_83A1DC6C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x83a39338
	ctx.lr = 0x83A1DC64;
	sub_83A39338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83a1dcdc
	goto loc_83A1DCDC;
loc_83A1DC6C:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1DC88;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1dc9c
	if (!cr0.eq) goto loc_83A1DC9C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x83a1dcdc
	goto loc_83A1DCDC;
loc_83A1DC9C:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// subfe r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83a1e788
	ctx.lr = 0x83A1DCCC;
	sub_83A1E788(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x83a1dcdc
	if (!cr0.lt) goto loc_83A1DCDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1DCDC;
	sub_83A39B78(ctx, base);
loc_83A1DCDC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DCF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1DCFC"))) PPC_WEAK_FUNC(sub_83A1DCFC);
PPC_FUNC_IMPL(__imp__sub_83A1DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1DD00"))) PPC_WEAK_FUNC(sub_83A1DD00);
PPC_FUNC_IMPL(__imp__sub_83A1DD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1DD08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DD28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1dd48
	if (!cr6.eq) goto loc_83A1DD48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x83a39458
	ctx.lr = 0x83A1DD40;
	sub_83A39458(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83a1ddb4
	goto loc_83A1DDB4;
loc_83A1DD48:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1DD64;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1dd78
	if (!cr0.eq) goto loc_83A1DD78;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x83a1ddb4
	goto loc_83A1DDB4;
loc_83A1DD78:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83a1e788
	ctx.lr = 0x83A1DDA4;
	sub_83A1E788(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x83a1ddb4
	if (!cr0.lt) goto loc_83A1DDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1DDB4;
	sub_83A39B78(ctx, base);
loc_83A1DDB4:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DDC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1DDD4"))) PPC_WEAK_FUNC(sub_83A1DDD4);
PPC_FUNC_IMPL(__imp__sub_83A1DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1DDD8"))) PPC_WEAK_FUNC(sub_83A1DDD8);
PPC_FUNC_IMPL(__imp__sub_83A1DDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1DDE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DE00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1de20
	if (!cr6.eq) goto loc_83A1DE20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x83a39588
	ctx.lr = 0x83A1DE18;
	sub_83A39588(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83a1de8c
	goto loc_83A1DE8C;
loc_83A1DE20:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1DE3C;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1de50
	if (!cr0.eq) goto loc_83A1DE50;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x83a1de8c
	goto loc_83A1DE8C;
loc_83A1DE50:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83a1e788
	ctx.lr = 0x83A1DE7C;
	sub_83A1E788(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x83a1de8c
	if (!cr0.lt) goto loc_83A1DE8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1DE8C;
	sub_83A39B78(ctx, base);
loc_83A1DE8C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DEA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1DEAC"))) PPC_WEAK_FUNC(sub_83A1DEAC);
PPC_FUNC_IMPL(__imp__sub_83A1DEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1DEB0"))) PPC_WEAK_FUNC(sub_83A1DEB0);
PPC_FUNC_IMPL(__imp__sub_83A1DEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A1DEB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,152
	ctx.r4.s64 = 152;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1DEF4;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1df18
	if (cr0.eq) goto loc_83A1DF18;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a1d720
	ctx.lr = 0x83A1DF10;
	sub_83A1D720(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83a1df1c
	goto loc_83A1DF1C;
loc_83A1DF18:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A1DF1C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83a1df30
	if (!cr6.eq) goto loc_83A1DF30;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x83a1df80
	goto loc_83A1DF80;
loc_83A1DF30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DF54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a1df64
	if (cr0.lt) goto loc_83A1DF64;
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// b 0x83a1df80
	goto loc_83A1DF80;
loc_83A1DF64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1DF7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x83A1DF80;
	sub_83A39B78(ctx, base);
loc_83A1DF80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1DF8C"))) PPC_WEAK_FUNC(sub_83A1DF8C);
PPC_FUNC_IMPL(__imp__sub_83A1DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1DF90"))) PPC_WEAK_FUNC(sub_83A1DF90);
PPC_FUNC_IMPL(__imp__sub_83A1DF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A1DF98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bl 0x83a397c8
	ctx.lr = 0x83A1DFD4;
	sub_83A397C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a1e018
	if (cr0.lt) goto loc_83A1E018;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,220(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x83a1deb0
	ctx.lr = 0x83A1DFFC;
	sub_83A1DEB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x83a1e018
	if (cr0.lt) goto loc_83A1E018;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a381e8
	ctx.lr = 0x83A1E010;
	sub_83A381E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83A1E018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1E024"))) PPC_WEAK_FUNC(sub_83A1E024);
PPC_FUNC_IMPL(__imp__sub_83A1E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E028"))) PPC_WEAK_FUNC(sub_83A1E028);
PPC_FUNC_IMPL(__imp__sub_83A1E028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1E05C"))) PPC_WEAK_FUNC(sub_83A1E05C);
PPC_FUNC_IMPL(__imp__sub_83A1E05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E060"))) PPC_WEAK_FUNC(sub_83A1E060);
PPC_FUNC_IMPL(__imp__sub_83A1E060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A1E074"))) PPC_WEAK_FUNC(sub_83A1E074);
PPC_FUNC_IMPL(__imp__sub_83A1E074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E078"))) PPC_WEAK_FUNC(sub_83A1E078);
PPC_FUNC_IMPL(__imp__sub_83A1E078) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E0A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1E0CC"))) PPC_WEAK_FUNC(sub_83A1E0CC);
PPC_FUNC_IMPL(__imp__sub_83A1E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E0D0"))) PPC_WEAK_FUNC(sub_83A1E0D0);
PPC_FUNC_IMPL(__imp__sub_83A1E0D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E0FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E114;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1E128"))) PPC_WEAK_FUNC(sub_83A1E128);
PPC_FUNC_IMPL(__imp__sub_83A1E128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r11,r11,-9268
	ctx.r11.s64 = ctx.r11.s64 + -9268;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1E150"))) PPC_WEAK_FUNC(sub_83A1E150);
PPC_FUNC_IMPL(__imp__sub_83A1E150) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83a1e1dc
	if (cr6.lt) goto loc_83A1E1DC;
	// beq cr6,0x83a1e1d4
	if (cr6.eq) goto loc_83A1E1D4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83a1e1b0
	if (cr6.lt) goto loc_83A1E1B0;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// beq cr6,0x83a1e19c
	if (cr6.eq) goto loc_83A1E19C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x83a1e190
	if (cr6.lt) goto loc_83A1E190;
	// bl 0x83a39b68
	ctx.lr = 0x83A1E18C;
	sub_83A39B68(ctx, base);
	// b 0x83a1e1e0
	goto loc_83A1E1E0;
loc_83A1E190:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x83a1e1a4
	goto loc_83A1E1A4;
loc_83A1E19C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_83A1E1A4:
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E1AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a1e1e0
	goto loc_83A1E1E0;
loc_83A1E1B0:
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E1D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a1e1e0
	goto loc_83A1E1E0;
loc_83A1E1D4:
	// bl 0x83a1e0d0
	ctx.lr = 0x83A1E1D8;
	sub_83A1E0D0(ctx, base);
	// b 0x83a1e1e0
	goto loc_83A1E1E0;
loc_83A1E1DC:
	// bl 0x83a1e078
	ctx.lr = 0x83A1E1E0;
	sub_83A1E078(ctx, base);
loc_83A1E1E0:
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

__attribute__((alias("__imp__sub_83A1E1F4"))) PPC_WEAK_FUNC(sub_83A1E1F4);
PPC_FUNC_IMPL(__imp__sub_83A1E1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E1F8"))) PPC_WEAK_FUNC(sub_83A1E1F8);
PPC_FUNC_IMPL(__imp__sub_83A1E1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blt cr6,0x83a1e224
	if (cr6.lt) goto loc_83A1E224;
	// beq cr6,0x83a1e218
	if (cr6.eq) goto loc_83A1E218;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_83A1E218:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_83A1E224:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A1E230"))) PPC_WEAK_FUNC(sub_83A1E230);
PPC_FUNC_IMPL(__imp__sub_83A1E230) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-9268
	ctx.r11.s64 = ctx.r11.s64 + -9268;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83a1e280
	if (cr6.eq) goto loc_83A1E280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83a39b78
	ctx.lr = 0x83A1E27C;
	sub_83A39B78(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83A1E280:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83A1E29C"))) PPC_WEAK_FUNC(sub_83A1E29C);
PPC_FUNC_IMPL(__imp__sub_83A1E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E2A0"))) PPC_WEAK_FUNC(sub_83A1E2A0);
PPC_FUNC_IMPL(__imp__sub_83A1E2A0) {
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
	ctx.lr = 0x83A1E2A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1e2e4
	if (!cr6.eq) goto loc_83A1E2E4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a1e2e4
	if (!cr6.eq) goto loc_83A1E2E4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E2E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a1e348
	goto loc_83A1E348;
loc_83A1E2E4:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1E300;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1e314
	if (!cr0.eq) goto loc_83A1E314;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1e348
	goto loc_83A1E348;
loc_83A1E314:
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83a1e788
	ctx.lr = 0x83A1E338;
	sub_83A1E788(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1e348
	if (!cr0.lt) goto loc_83A1E348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1E348;
	sub_83A39B78(ctx, base);
loc_83A1E348:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1E354"))) PPC_WEAK_FUNC(sub_83A1E354);
PPC_FUNC_IMPL(__imp__sub_83A1E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E358"))) PPC_WEAK_FUNC(sub_83A1E358);
PPC_FUNC_IMPL(__imp__sub_83A1E358) {
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
	ctx.lr = 0x83A1E360;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a1e3a0
	if (!cr6.eq) goto loc_83A1E3A0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a1e3a0
	if (!cr6.eq) goto loc_83A1E3A0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E39C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a1e40c
	goto loc_83A1E40C;
loc_83A1E3A0:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1E3BC;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1e3d0
	if (!cr0.eq) goto loc_83A1E3D0;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1e40c
	goto loc_83A1E40C;
loc_83A1E3D0:
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83a1e788
	ctx.lr = 0x83A1E3FC;
	sub_83A1E788(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1e40c
	if (!cr0.lt) goto loc_83A1E40C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1E40C;
	sub_83A39B78(ctx, base);
loc_83A1E40C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1E418"))) PPC_WEAK_FUNC(sub_83A1E418);
PPC_FUNC_IMPL(__imp__sub_83A1E418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A1E420;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83a1d588
	ctx.lr = 0x83A1E444;
	sub_83A1D588(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a1e470
	if (cr0.eq) goto loc_83A1E470;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E46C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a1e4f4
	goto loc_83A1E4F4;
loc_83A1E470:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// addi r4,r28,24
	ctx.r4.s64 = ctx.r28.s64 + 24;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1E48C;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1e4a0
	if (!cr0.eq) goto loc_83A1E4A0;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x83a1e4f4
	goto loc_83A1E4F4;
loc_83A1E4A0:
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// subfe r9,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831ce980
	ctx.lr = 0x83A1E4D8;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83a1e788
	ctx.lr = 0x83A1E4E4;
	sub_83A1E788(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge 0x83a1e4f4
	if (!cr0.lt) goto loc_83A1E4F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1E4F4;
	sub_83A39B78(ctx, base);
loc_83A1E4F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1E500"))) PPC_WEAK_FUNC(sub_83A1E500);
PPC_FUNC_IMPL(__imp__sub_83A1E500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1E508;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83a1d588
	ctx.lr = 0x83A1E524;
	sub_83A1D588(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a1e548
	if (cr0.eq) goto loc_83A1E548;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a1e5b4
	goto loc_83A1E5B4;
loc_83A1E548:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1E564;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1e578
	if (!cr0.eq) goto loc_83A1E578;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1e5b4
	goto loc_83A1E5B4;
loc_83A1E578:
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83a1e788
	ctx.lr = 0x83A1E5A4;
	sub_83A1E788(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1e5b4
	if (!cr0.lt) goto loc_83A1E5B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1E5B4;
	sub_83A39B78(ctx, base);
loc_83A1E5B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1E5C0"))) PPC_WEAK_FUNC(sub_83A1E5C0);
PPC_FUNC_IMPL(__imp__sub_83A1E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1E5C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83a1d588
	ctx.lr = 0x83A1E5E4;
	sub_83A1D588(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a1e608
	if (cr0.eq) goto loc_83A1E608;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1E604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a1e674
	goto loc_83A1E674;
loc_83A1E608:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1E624;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1e638
	if (!cr0.eq) goto loc_83A1E638;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1e674
	goto loc_83A1E674;
loc_83A1E638:
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83a1e788
	ctx.lr = 0x83A1E664;
	sub_83A1E788(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1e674
	if (!cr0.lt) goto loc_83A1E674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1E674;
	sub_83A39B78(ctx, base);
loc_83A1E674:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1E680"))) PPC_WEAK_FUNC(sub_83A1E680);
PPC_FUNC_IMPL(__imp__sub_83A1E680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1E688;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83a1d588
	ctx.lr = 0x83A1E6A4;
	sub_83A1D588(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83a1e6bc
	if (cr0.eq) goto loc_83A1E6BC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83a39b68
	ctx.lr = 0x83A1E6B8;
	sub_83A39B68(ctx, base);
	// b 0x83a1e728
	goto loc_83A1E728;
loc_83A1E6BC:
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1E6D8;
	sub_839F8CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a1e6ec
	if (!cr0.eq) goto loc_83A1E6EC;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x83a1e728
	goto loc_83A1E728;
loc_83A1E6EC:
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x83a1e788
	ctx.lr = 0x83A1E718;
	sub_83A1E788(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x83a1e728
	if (!cr0.lt) goto loc_83A1E728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1E728;
	sub_83A39B78(ctx, base);
loc_83A1E728:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1E734"))) PPC_WEAK_FUNC(sub_83A1E734);
PPC_FUNC_IMPL(__imp__sub_83A1E734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E738"))) PPC_WEAK_FUNC(sub_83A1E738);
PPC_FUNC_IMPL(__imp__sub_83A1E738) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a1e230
	ctx.lr = 0x83A1E758;
	sub_83A1E230(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a1e768
	if (cr0.eq) goto loc_83A1E768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1E768;
	sub_83A39B78(ctx, base);
loc_83A1E768:
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

__attribute__((alias("__imp__sub_83A1E784"))) PPC_WEAK_FUNC(sub_83A1E784);
PPC_FUNC_IMPL(__imp__sub_83A1E784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E788"))) PPC_WEAK_FUNC(sub_83A1E788);
PPC_FUNC_IMPL(__imp__sub_83A1E788) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82415e30
	sub_82415E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1E790"))) PPC_WEAK_FUNC(sub_83A1E790);
PPC_FUNC_IMPL(__imp__sub_83A1E790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a1e7e4
	if (cr6.eq) goto loc_83A1E7E4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
	// beq cr6,0x83a1e7c0
	if (cr6.eq) goto loc_83A1E7C0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x83a1e7c8
	goto loc_83A1E7C8;
loc_83A1E7C0:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
loc_83A1E7C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,212(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
loc_83A1E7E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A1E7EC"))) PPC_WEAK_FUNC(sub_83A1E7EC);
PPC_FUNC_IMPL(__imp__sub_83A1E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E7F0"))) PPC_WEAK_FUNC(sub_83A1E7F0);
PPC_FUNC_IMPL(__imp__sub_83A1E7F0) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83a1e830
	if (!cr6.lt) goto loc_83A1E830;
	// bl 0x83d755ac
	ctx.lr = 0x83A1E824;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a1e830
	if (cr6.eq) goto loc_83A1E830;
	// li r30,1
	ctx.r30.s64 = 1;
loc_83A1E830:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1e844
	if (cr6.eq) goto loc_83A1E844;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83a1e8b4
	if (cr6.eq) goto loc_83A1E8B4;
loc_83A1E844:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a1e8b4
	if (cr6.gt) goto loc_83A1E8B4;
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x839f8cd8
	ctx.lr = 0x83A1E874;
	sub_839F8CD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1e8b4
	if (cr0.eq) goto loc_83A1E8B4;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A1E888:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x83a1e888
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A1E888;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
loc_83A1E8B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a1e8cc
	if (cr6.eq) goto loc_83A1E8CC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83a1e8d0
	goto loc_83A1E8D0;
loc_83A1E8CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A1E8D0:
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

__attribute__((alias("__imp__sub_83A1E8E8"))) PPC_WEAK_FUNC(sub_83A1E8E8);
PPC_FUNC_IMPL(__imp__sub_83A1E8E8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83a1e7f0
	ctx.lr = 0x83A1E908;
	sub_83A1E7F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1e94c
	if (cr0.eq) goto loc_83A1E94C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a1e938
	if (cr6.eq) goto loc_83A1E938;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x83a1e93c
	goto loc_83A1E93C;
loc_83A1E938:
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
loc_83A1E93C:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_83A1E94C:
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

__attribute__((alias("__imp__sub_83A1E964"))) PPC_WEAK_FUNC(sub_83A1E964);
PPC_FUNC_IMPL(__imp__sub_83A1E964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1E968"))) PPC_WEAK_FUNC(sub_83A1E968);
PPC_FUNC_IMPL(__imp__sub_83A1E968) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// b 0x83a1e998
	goto loc_83A1E998;
loc_83A1E988:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x83a1e998
	if (cr6.eq) goto loc_83A1E998;
	// bl 0x83a39b78
	ctx.lr = 0x83A1E998;
	sub_83A39B78(ctx, base);
loc_83A1E998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1e790
	ctx.lr = 0x83A1E9A0;
	sub_83A1E790(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83a1e988
	if (!cr0.eq) goto loc_83A1E988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fa3f0
	ctx.lr = 0x83A1E9B0;
	sub_839FA3F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839fe378
	ctx.lr = 0x83A1E9B8;
	sub_839FE378(ctx, base);
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

__attribute__((alias("__imp__sub_83A1E9D0"))) PPC_WEAK_FUNC(sub_83A1E9D0);
PPC_FUNC_IMPL(__imp__sub_83A1E9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A1E9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83a1ea0c
	goto loc_83A1EA0C;
loc_83A1E9EC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x83a1ea44
	if (cr6.lt) goto loc_83A1EA44;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a1e8e8
	ctx.lr = 0x83A1EA04;
	sub_83A1E8E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83a1ea14
	if (cr0.eq) goto loc_83A1EA14;
loc_83A1EA0C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83a1ea30
	goto loc_83A1EA30;
loc_83A1EA14:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x83a1ea30
	if (cr6.eq) goto loc_83A1EA30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1EA30;
	sub_83A39B78(ctx, base);
loc_83A1EA30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a01728
	ctx.lr = 0x83A1EA3C;
	sub_83A01728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83a1e9ec
	if (!cr0.eq) goto loc_83A1E9EC;
loc_83A1EA44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1EA50"))) PPC_WEAK_FUNC(sub_83A1EA50);
PPC_FUNC_IMPL(__imp__sub_83A1EA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A1EA58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83a1e9d0
	ctx.lr = 0x83A1EA68;
	sub_83A1E9D0(ctx, base);
	// lwz r30,212(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// b 0x83a1eadc
	goto loc_83A1EADC;
loc_83A1EA70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a1ea8c
	if (cr6.eq) goto loc_83A1EA8C;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1ea90
	goto loc_83A1EA90;
loc_83A1EA8C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83A1EA90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x83a1eac0
	if (cr6.eq) goto loc_83A1EAC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a1eadc
	if (!cr6.eq) goto loc_83A1EADC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x83a1eac0
	if (cr6.eq) goto loc_83A1EAC0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x83a1eadc
	if (!cr6.eq) goto loc_83A1EADC;
loc_83A1EAC0:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x839f9970
	ctx.lr = 0x83A1EAC8;
	sub_839F9970(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x83a1eadc
	if (cr6.eq) goto loc_83A1EADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1EADC;
	sub_83A39B78(ctx, base);
loc_83A1EADC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a1ea70
	if (!cr6.eq) goto loc_83A1EA70;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1EAEC"))) PPC_WEAK_FUNC(sub_83A1EAEC);
PPC_FUNC_IMPL(__imp__sub_83A1EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1EAF0"))) PPC_WEAK_FUNC(sub_83A1EAF0);
PPC_FUNC_IMPL(__imp__sub_83A1EAF0) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1EB1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x83a1eb34
	if (cr6.eq) goto loc_83A1EB34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1EB34;
	sub_83A39B78(ctx, base);
loc_83A1EB34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_83A1EB50"))) PPC_WEAK_FUNC(sub_83A1EB50);
PPC_FUNC_IMPL(__imp__sub_83A1EB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1EB58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,212(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x83a1ec30
	goto loc_83A1EC30;
loc_83A1EB6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a1ebac
	if (!cr6.eq) goto loc_83A1EBAC;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x839f9970
	ctx.lr = 0x83A1EB90;
	sub_839F9970(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a1eaf0
	ctx.lr = 0x83A1EB9C;
	sub_83A1EAF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a1ec30
	if (!cr0.lt) goto loc_83A1EC30;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x83a1ec30
	goto loc_83A1EC30;
loc_83A1EBAC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a1ec30
	if (!cr6.eq) goto loc_83A1EC30;
	// lwz r31,212(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x83a1ec10
	goto loc_83A1EC10;
loc_83A1EBC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x83a1ebe4
	if (cr6.eq) goto loc_83A1EBE4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a1ec10
	if (!cr6.eq) goto loc_83A1EC10;
loc_83A1EBE4:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x839f9970
	ctx.lr = 0x83A1EBEC;
	sub_839F9970(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83a1ec1c
	if (cr6.eq) goto loc_83A1EC1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a1eaf0
	ctx.lr = 0x83A1EC04;
	sub_83A1EAF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a1ec10
	if (!cr0.lt) goto loc_83A1EC10;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83A1EC10:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a1ebc0
	if (!cr6.eq) goto loc_83A1EBC0;
	// b 0x83a1ec38
	goto loc_83A1EC38;
loc_83A1EC1C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x83a1ec30
	if (cr6.eq) goto loc_83A1EC30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a39b78
	ctx.lr = 0x83A1EC30;
	sub_83A39B78(ctx, base);
loc_83A1EC30:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a1eb6c
	if (!cr6.eq) goto loc_83A1EB6C;
loc_83A1EC38:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1EC44"))) PPC_WEAK_FUNC(sub_83A1EC44);
PPC_FUNC_IMPL(__imp__sub_83A1EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1EC48"))) PPC_WEAK_FUNC(sub_83A1EC48);
PPC_FUNC_IMPL(__imp__sub_83A1EC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A1EC50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83a1e9d0
	ctx.lr = 0x83A1EC60;
	sub_83A1E9D0(ctx, base);
	// lwz r31,212(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// b 0x83a1ecb8
	goto loc_83A1ECB8;
loc_83A1EC68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a1ec84
	if (cr6.eq) goto loc_83A1EC84;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a1ec88
	goto loc_83A1EC88;
loc_83A1EC84:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A1EC88:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x83a1ec9c
	if (cr6.eq) goto loc_83A1EC9C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a1ecbc
	if (!cr6.eq) goto loc_83A1ECBC;
loc_83A1EC9C:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x839f9970
	ctx.lr = 0x83A1ECA4;
	sub_839F9970(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a1eaf0
	ctx.lr = 0x83A1ECB0;
	sub_83A1EAF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83a1ecbc
	if (!cr0.lt) goto loc_83A1ECBC;
loc_83A1ECB8:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_83A1ECBC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a1ec68
	if (!cr6.eq) goto loc_83A1EC68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1ECD0"))) PPC_WEAK_FUNC(sub_83A1ECD0);
PPC_FUNC_IMPL(__imp__sub_83A1ECD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x83a1e9d0
	ctx.lr = 0x83A1ECE8;
	sub_83A1E9D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83a1ecf8
	if (cr0.lt) goto loc_83A1ECF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a1eb50
	ctx.lr = 0x83A1ECF8;
	sub_83A1EB50(ctx, base);
loc_83A1ECF8:
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

__attribute__((alias("__imp__sub_83A1ED0C"))) PPC_WEAK_FUNC(sub_83A1ED0C);
PPC_FUNC_IMPL(__imp__sub_83A1ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1ED10"))) PPC_WEAK_FUNC(sub_83A1ED10);
PPC_FUNC_IMPL(__imp__sub_83A1ED10) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a1e418
	sub_83A1E418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1ED1C"))) PPC_WEAK_FUNC(sub_83A1ED1C);
PPC_FUNC_IMPL(__imp__sub_83A1ED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1ED20"))) PPC_WEAK_FUNC(sub_83A1ED20);
PPC_FUNC_IMPL(__imp__sub_83A1ED20) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83a1e028
	sub_83A1E028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1ED2C"))) PPC_WEAK_FUNC(sub_83A1ED2C);
PPC_FUNC_IMPL(__imp__sub_83A1ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1ED30"))) PPC_WEAK_FUNC(sub_83A1ED30);
PPC_FUNC_IMPL(__imp__sub_83A1ED30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1ED60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a1e500
	ctx.lr = 0x83A1ED70;
	sub_83A1E500(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1ED8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1EDA8"))) PPC_WEAK_FUNC(sub_83A1EDA8);
PPC_FUNC_IMPL(__imp__sub_83A1EDA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1EDD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a1e5c0
	ctx.lr = 0x83A1EDE8;
	sub_83A1E5C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A1EE04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83A1EE20"))) PPC_WEAK_FUNC(sub_83A1EE20);
PPC_FUNC_IMPL(__imp__sub_83A1EE20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x83a37360
	sub_83A37360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1EE28"))) PPC_WEAK_FUNC(sub_83A1EE28);
PPC_FUNC_IMPL(__imp__sub_83A1EE28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83a373b8
	sub_83A373B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A1EE34"))) PPC_WEAK_FUNC(sub_83A1EE34);
PPC_FUNC_IMPL(__imp__sub_83A1EE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A1EE38"))) PPC_WEAK_FUNC(sub_83A1EE38);
PPC_FUNC_IMPL(__imp__sub_83A1EE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A1EE48"))) PPC_WEAK_FUNC(sub_83A1EE48);
PPC_FUNC_IMPL(__imp__sub_83A1EE48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a1eda8
	sub_83A1EDA8(ctx, base);
	return;
}

