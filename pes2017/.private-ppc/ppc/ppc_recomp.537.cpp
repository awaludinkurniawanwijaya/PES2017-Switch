#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B777FC"))) PPC_WEAK_FUNC(sub_83B777FC);
PPC_FUNC_IMPL(__imp__sub_83B777FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77800"))) PPC_WEAK_FUNC(sub_83B77800);
PPC_FUNC_IMPL(__imp__sub_83B77800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26728
	ctx.r3.s64 = ctx.r11.s64 + 26728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7780C"))) PPC_WEAK_FUNC(sub_83B7780C);
PPC_FUNC_IMPL(__imp__sub_83B7780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77810"))) PPC_WEAK_FUNC(sub_83B77810);
PPC_FUNC_IMPL(__imp__sub_83B77810) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce740
	ctx.lr = 0x83B77820;
	__savefpr_14(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r10,r11,-30096
	ctx.r10.s64 = ctx.r11.s64 + -30096;
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// lfd f0,6512(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 6512);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f7,-26940(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26940);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,-30000
	ctx.r11.s64 = ctx.r11.s64 + -30000;
	// lfs f11,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f6,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f16,-11300(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11300);
	ctx.f16.f64 = double(temp.f32);
	// lfs f10,9008(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f10.f64 = double(temp.f32);
	// lfs f15,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f15.f64 = double(temp.f32);
	// lfs f1,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f29.f64 = double(temp.f32);
	// lfs f5,-3404(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -3404);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,-26260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -26260);
	ctx.f3.f64 = double(temp.f32);
	// lfs f17,-11416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -11416);
	ctx.f17.f64 = double(temp.f32);
	// stfs f16,-252(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// stfs f11,-200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// stfs f3,-256(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f13,f15,f16
	ctx.f13.f64 = double(float(ctx.f15.f64 * ctx.f16.f64));
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmuls f9,f29,f16
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f16.f64));
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f4,40(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bne cr6,0x83b778e0
	if (!cr6.eq) goto loc_83B778E0;
	// stfs f10,48(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f10,52(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f10,56(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// b 0x83b778f8
	goto loc_83B778F8;
loc_83B778E0:
	// fdivs f12,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// fmuls f4,f12,f17
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f17.f64));
	// stfs f4,48(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_83B778F8:
	// stfs f13,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fmuls f13,f1,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f13,88(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// fmuls f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f6,84(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f9,92(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f9,104(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f8,108(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f12,112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// bne cr6,0x83b77940
	if (!cr6.eq) goto loc_83B77940;
	// stfs f10,116(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f10,120(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f10,124(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// b 0x83b77958
	goto loc_83B77958;
loc_83B77940:
	// fdivs f13,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// fmuls f12,f13,f17
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
loc_83B77958:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f14,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f14.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f23,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f23.f64 = double(temp.f32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f19,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f19.f64 = double(temp.f32);
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// stfs f14,-208(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// stfs f23,-212(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// lfs f2,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f15,f2
	ctx.f30.f64 = double(float(ctx.f15.f64 * ctx.f2.f64));
	// lfs f5,6508(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6508);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f14,f13
	ctx.f12.f64 = double(float(ctx.f14.f64 * ctx.f13.f64));
	// lfs f4,16100(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16100);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f15,f5
	ctx.f9.f64 = double(float(ctx.f15.f64 * ctx.f5.f64));
	// fmuls f7,f6,f4
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f19,-248(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// stfs f6,152(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f1,156(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f23,160(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f19,168(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f9,172(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f7,176(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f1,180(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// stfs f30,148(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// stfs f12,164(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// bne cr6,0x83b779dc
	if (!cr6.eq) goto loc_83B779DC;
	// stfs f10,184(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stfs f10,188(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stfs f10,192(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// b 0x83b779f4
	goto loc_83B779F4;
loc_83B779DC:
	// fdivs f9,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// stfs f9,188(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f7,184(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// fmuls f9,f9,f17
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f17.f64));
	// stfs f9,192(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
loc_83B779F4:
	// stfs f30,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// stfs f6,220(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// stfs f1,224(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// stfs f23,228(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// stfs f14,232(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// stfs f19,236(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f23,240(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// stfs f12,244(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// stfs f19,248(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// bne cr6,0x83b77a30
	if (!cr6.eq) goto loc_83B77A30;
	// stfs f10,252(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// stfs f10,256(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// stfs f10,260(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// b 0x83b77a48
	goto loc_83B77A48;
loc_83B77A30:
	// fdivs f12,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// stfs f12,256(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f9,252(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// fmuls f12,f12,f17
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f17.f64));
	// stfs f12,260(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
loc_83B77A48:
	// lfs f18,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f9,f8,f4
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfs f9,300(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 300, temp.u32);
	// fmuls f12,f29,f5
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f5.f64));
	// lfs f22,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f9,f18,f13
	ctx.f9.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// lfs f20,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f20.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// stfs f22,-192(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// stfs f18,-188(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// stfs f20,-184(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// stfs f22,284(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 284, temp.u32);
	// stfs f18,288(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// stfs f20,292(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 292, temp.u32);
	// stfs f11,304(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 304, temp.u32);
	// stfs f22,308(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 308, temp.u32);
	// stfs f9,312(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 312, temp.u32);
	// stfs f20,316(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// stfs f12,296(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// bne cr6,0x83b77aa8
	if (!cr6.eq) goto loc_83B77AA8;
	// stfs f10,320(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// stfs f10,324(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// stfs f10,328(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// b 0x83b77ac0
	goto loc_83B77AC0;
loc_83B77AA8:
	// fdivs f9,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// stfs f9,324(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f7,320(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f9,328(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 328, temp.u32);
loc_83B77AC0:
	// stfs f12,376(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 376, temp.u32);
	// fmuls f9,f29,f2
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// fmuls f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f9,-172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// stfs f22,352(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// stfs f18,356(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 356, temp.u32);
	// stfs f20,360(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// stfs f8,368(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// stfs f11,372(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 372, temp.u32);
	// stfs f12,380(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 380, temp.u32);
	// stfs f11,384(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 384, temp.u32);
	// stfs f9,364(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// bne cr6,0x83b77b08
	if (!cr6.eq) goto loc_83B77B08;
	// stfs f10,388(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 388, temp.u32);
	// stfs f10,392(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// stfs f10,396(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 396, temp.u32);
	// b 0x83b77b20
	goto loc_83B77B20;
loc_83B77B08:
	// fdivs f0,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// stfs f0,392(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,388(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 388, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,396(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 396, temp.u32);
loc_83B77B20:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmuls f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f0,-168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfd f28,-2240(r9)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r9.u32 + -2240);
	// fmuls f5,f3,f16
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f16.f64));
	// fsqrts f21,f28
	ctx.f21.f64 = double(float(sqrt(ctx.f28.f64)));
	// lfs f27,6504(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6504);
	ctx.f27.f64 = double(temp.f32);
	// lfs f13,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// stfs f13,-240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// stfs f6,424(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// stfs f1,428(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// stfs f26,452(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// stfs f31,436(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// stfs f5,440(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 440, temp.u32);
	// fmuls f12,f15,f27
	ctx.f12.f64 = double(float(ctx.f15.f64 * ctx.f27.f64));
	// stfs f12,-216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmuls f25,f4,f27
	ctx.f25.f64 = double(float(ctx.f4.f64 * ctx.f27.f64));
	// stfs f25,-244(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -244, temp.u32);
	// fmuls f24,f0,f2
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f12,420(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 420, temp.u32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f7,432(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 432, temp.u32);
	// stfs f25,444(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 444, temp.u32);
	// fcmpu cr6,f21,f10
	cr6.compare(ctx.f21.f64, ctx.f10.f64);
	// stfs f24,448(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// bne cr6,0x83b77bb8
	if (!cr6.eq) goto loc_83B77BB8;
	// stfs f10,456(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// stfs f10,460(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 460, temp.u32);
	// stfs f10,464(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// b 0x83b77bd4
	goto loc_83B77BD4;
loc_83B77BB8:
	// lfs f28,-256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f28.f64 = double(temp.f32);
	// fdivs f25,f28,f21
	ctx.f25.f64 = double(float(ctx.f28.f64 / ctx.f21.f64));
	// fmuls f28,f25,f13
	ctx.f28.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// stfs f28,456(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 456, temp.u32);
	// fmuls f25,f25,f10
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// stfs f25,460(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 460, temp.u32);
	// stfs f28,464(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
loc_83B77BD4:
	// stfs f12,488(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 488, temp.u32);
	// fmuls f12,f23,f13
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// stfs f12,500(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// fmuls f12,f19,f16
	ctx.f12.f64 = double(float(ctx.f19.f64 * ctx.f16.f64));
	// stfs f6,492(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// fcmpu cr6,f21,f10
	cr6.compare(ctx.f21.f64, ctx.f10.f64);
	// stfs f1,496(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stfs f14,504(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 504, temp.u32);
	// stfs f12,508(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// stfs f7,512(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 512, temp.u32);
	// stfs f31,516(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 516, temp.u32);
	// stfs f5,520(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 520, temp.u32);
	// bne cr6,0x83b77c18
	if (!cr6.eq) goto loc_83B77C18;
	// stfs f10,524(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f10,528(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// stfs f10,532(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 532, temp.u32);
	// b 0x83b77c34
	goto loc_83B77C34;
loc_83B77C18:
	// lfs f12,-256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f7,f12,f21
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f21.f64));
	// fmuls f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f12,524(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f7,528(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// stfs f12,532(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 532, temp.u32);
loc_83B77C34:
	// fmuls f12,f22,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// lfs f22,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f5,f20,f16
	ctx.f5.f64 = double(float(ctx.f20.f64 * ctx.f16.f64));
	// lfs f20,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f19.f64 = double(temp.f32);
	// fcmpu cr6,f21,f10
	cr6.compare(ctx.f21.f64, ctx.f10.f64);
	// lfs f23,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f23.f64 = double(temp.f32);
	// lfs f7,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f28,f23,f27
	ctx.f28.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// stfs f22,-196(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fmuls f25,f7,f2
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f20,-180(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// fmuls f22,f22,f2
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f2.f64));
	// stfs f19,-176(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fmuls f20,f20,f13
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f13.f64));
	// lfs f24,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f19,f19,f16
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f16.f64));
	// stfs f28,-224(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// stfs f18,560(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 560, temp.u32);
	// stfs f24,576(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 576, temp.u32);
	// stfs f20,580(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 580, temp.u32);
	// stfs f19,588(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// stfs f12,556(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 556, temp.u32);
	// stfs f5,564(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 564, temp.u32);
	// stfs f28,568(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 568, temp.u32);
	// stfs f25,572(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 572, temp.u32);
	// stfs f22,584(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 584, temp.u32);
	// bne cr6,0x83b77cb4
	if (!cr6.eq) goto loc_83B77CB4;
	// stfs f10,592(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 592, temp.u32);
	// stfs f10,596(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 596, temp.u32);
	// stfs f10,600(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 600, temp.u32);
	// b 0x83b77cd0
	goto loc_83B77CD0;
loc_83B77CB4:
	// lfs f22,-256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f22.f64 = double(temp.f32);
	// fdivs f22,f22,f21
	ctx.f22.f64 = double(float(ctx.f22.f64 / ctx.f21.f64));
	// stfs f22,600(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 600, temp.u32);
	// fmuls f20,f22,f13
	ctx.f20.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// stfs f20,592(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 592, temp.u32);
	// fmuls f20,f22,f10
	ctx.f20.f64 = double(float(ctx.f22.f64 * ctx.f10.f64));
	// stfs f20,596(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 596, temp.u32);
loc_83B77CD0:
	// fmuls f22,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// stfs f22,-232(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// stfs f12,624(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 624, temp.u32);
	// fcmpu cr6,f21,f10
	cr6.compare(ctx.f21.f64, ctx.f10.f64);
	// stfs f18,628(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 628, temp.u32);
	// stfs f5,632(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 632, temp.u32);
	// stfs f8,640(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 640, temp.u32);
	// stfs f11,644(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 644, temp.u32);
	// stfs f28,648(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 648, temp.u32);
	// stfs f25,652(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 652, temp.u32);
	// stfs f24,656(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 656, temp.u32);
	// stfs f22,636(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 636, temp.u32);
	// bne cr6,0x83b77d14
	if (!cr6.eq) goto loc_83B77D14;
	// stfs f10,660(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 660, temp.u32);
	// stfs f10,664(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 664, temp.u32);
	// stfs f10,668(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 668, temp.u32);
	// b 0x83b77d30
	goto loc_83B77D30;
loc_83B77D14:
	// lfs f12,-256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f12,f21
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f21.f64));
	// stfs f12,668(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 668, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,660(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 660, temp.u32);
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,664(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 664, temp.u32);
loc_83B77D30:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmuls f12,f11,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmuls f19,f11,f17
	ctx.f19.f64 = double(float(ctx.f11.f64 * ctx.f17.f64));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmuls f22,f26,f17
	ctx.f22.f64 = double(float(ctx.f26.f64 * ctx.f17.f64));
	// stfs f19,836(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 836, temp.u32);
	// fmuls f13,f26,f2
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f2.f64));
	// stfs f19,904(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 904, temp.u32);
	// fmuls f5,f24,f2
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f2.f64));
	// lfs f25,-11316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f28,f4,f25
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f25.f64));
	// stfs f28,704(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 704, temp.u32);
	// stfs f28,784(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 784, temp.u32);
	// fmuls f18,f15,f25
	ctx.f18.f64 = double(float(ctx.f15.f64 * ctx.f25.f64));
	// fmuls f28,f23,f25
	ctx.f28.f64 = double(float(ctx.f23.f64 * ctx.f25.f64));
	// stfs f18,772(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 772, temp.u32);
	// stfs f28,852(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 852, temp.u32);
	// fmuls f18,f1,f17
	ctx.f18.f64 = double(float(ctx.f1.f64 * ctx.f17.f64));
	// lfs f11,6500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6500);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f28,f24,f17
	ctx.f28.f64 = double(float(ctx.f24.f64 * ctx.f17.f64));
	// fmuls f20,f29,f25
	ctx.f20.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// stfs f18,780(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 780, temp.u32);
	// stfs f28,860(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 860, temp.u32);
	// fmuls f28,f1,f2
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfs f22,712(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 712, temp.u32);
	// fmuls f19,f29,f11
	ctx.f19.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// stfs f22,792(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 792, temp.u32);
	// fmuls f18,f8,f11
	ctx.f18.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f20,828(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 828, temp.u32);
	// fmuls f17,f4,f11
	ctx.f17.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f20,896(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 896, temp.u32);
	// fmuls f16,f0,f11
	ctx.f16.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f20,4328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4328);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f22,f6,f11
	ctx.f22.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f29,692(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 692, temp.u32);
	// stfs f8,696(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 696, temp.u32);
	// stfs f0,708(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 708, temp.u32);
	// stfs f12,700(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 700, temp.u32);
	// stfs f23,716(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 716, temp.u32);
	// stfs f7,720(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 720, temp.u32);
	// stfs f5,724(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 724, temp.u32);
	// stfs f29,760(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 760, temp.u32);
	// stfs f8,764(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 764, temp.u32);
	// stfs f12,768(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 768, temp.u32);
	// stfs f6,776(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 776, temp.u32);
	// stfs f0,788(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 788, temp.u32);
	// stfs f8,832(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 832, temp.u32);
	// stfs f4,840(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 840, temp.u32);
	// stfs f0,844(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 844, temp.u32);
	// stfs f13,848(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 848, temp.u32);
	// stfs f7,856(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 856, temp.u32);
	// stfs f8,900(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 900, temp.u32);
	// stfs f15,908(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 908, temp.u32);
	// stfs f6,912(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 912, temp.u32);
	// stfs f28,916(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 916, temp.u32);
	// stfs f4,920(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 920, temp.u32);
	// stfs f0,924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// stfs f13,928(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 928, temp.u32);
	// stfs f29,964(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 964, temp.u32);
	// stfs f8,968(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 968, temp.u32);
	// stfs f12,972(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 972, temp.u32);
	// stfs f4,976(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 976, temp.u32);
	// stfs f0,980(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 980, temp.u32);
	// stfs f13,984(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 984, temp.u32);
	// stfs f23,988(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 988, temp.u32);
	// stfs f7,992(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 992, temp.u32);
	// stfs f5,996(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 996, temp.u32);
	// stfs f29,1032(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1032, temp.u32);
	// stfs f8,1036(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1036, temp.u32);
	// stfs f12,1040(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1040, temp.u32);
	// stfs f15,1044(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1044, temp.u32);
	// stfs f6,1048(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1048, temp.u32);
	// stfs f28,1052(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1052, temp.u32);
	// stfs f4,1056(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1056, temp.u32);
	// stfs f0,1060(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1060, temp.u32);
	// stfs f13,1064(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1064, temp.u32);
	// stfs f19,1100(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1100, temp.u32);
	// stfs f18,1104(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1104, temp.u32);
	// stfs f12,1108(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1108, temp.u32);
	// stfs f17,1112(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1112, temp.u32);
	// fmuls f29,f1,f20
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f20.f64));
	// stfs f29,-204(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmuls f14,f7,f11
	ctx.f14.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f16,1116(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1116, temp.u32);
	// fmuls f29,f23,f11
	ctx.f29.f64 = double(float(ctx.f23.f64 * ctx.f11.f64));
	// stfs f16,1196(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1196, temp.u32);
	// fmuls f11,f15,f11
	ctx.f11.f64 = double(float(ctx.f15.f64 * ctx.f11.f64));
	// lfs f16,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f15,f0,f27
	ctx.f15.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f15,1252(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1252, temp.u32);
	// stfs f15,1332(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1332, temp.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f15,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f15.f64 = double(temp.f32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stfs f15,-216(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// lfs f15,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f15.f64 = double(temp.f32);
	// stfs f17,1192(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1192, temp.u32);
	// stfs f14,1128(r11)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1128, temp.u32);
	// lfs f17,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f17.f64 = double(temp.f32);
	// lfs f14,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f14.f64 = double(temp.f32);
	// stfs f16,-212(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// stfs f14,-232(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// stfs f17,1236(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1236, temp.u32);
	// stfs f17,1304(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1304, temp.u32);
	// stfs f29,1124(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1124, temp.u32);
	// fmuls f29,f6,f27
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// stfs f19,1168(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1168, temp.u32);
	// fmuls f19,f8,f27
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// lfs f17,-244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f27,f7,f27
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// stfd f7,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.f7.u64);
	// fmr f7,f17
	ctx.f7.f64 = ctx.f17.f64;
	// stfd f8,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f8.u64);
	// lfs f8,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f8.f64 = double(temp.f32);
	// stfs f6,1376(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1376, temp.u32);
	// stfs f6,1444(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1444, temp.u32);
	// fmuls f6,f26,f8
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// stfs f11,1180(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1180, temp.u32);
	// fmuls f11,f4,f2
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f12,1176(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1176, temp.u32);
	// stfs f12,1244(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1244, temp.u32);
	// stfs f12,1312(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1312, temp.u32);
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f14,6496(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6496);
	ctx.f14.f64 = double(temp.f32);
	// fmr f8,f7
	ctx.f8.f64 = ctx.f7.f64;
	// lfs f16,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f16.f64 = double(temp.f32);
	// stfs f17,-208(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// stfs f12,1400(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1400, temp.u32);
	// fmuls f12,f0,f14
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f14.f64));
	// lfs f8,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f4.f64 = double(temp.f32);
	// stfs f8,1260(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1260, temp.u32);
	// fmuls f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// lfs f8,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f8.f64 = double(temp.f32);
	// stfd f2,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.f2.u64);
	// lfs f2,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f17,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f17.f64 = double(temp.f32);
	// stfs f13,1120(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1120, temp.u32);
	// stfs f5,1132(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1132, temp.u32);
	// stfs f18,1172(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1172, temp.u32);
	// stfs f22,1184(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1184, temp.u32);
	// stfs f28,1188(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1188, temp.u32);
	// stfs f13,1200(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1200, temp.u32);
	// stfs f19,1240(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1240, temp.u32);
	// stfs f7,1248(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1248, temp.u32);
	// stfs f13,1256(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1256, temp.u32);
	// stfs f27,1264(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1264, temp.u32);
	// stfs f5,1268(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1268, temp.u32);
	// stfs f19,1308(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1308, temp.u32);
	// stfs f8,1316(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1316, temp.u32);
	// stfs f29,1320(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1320, temp.u32);
	// stfs f28,1324(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1324, temp.u32);
	// stfs f7,1328(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1328, temp.u32);
	// stfs f13,1336(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1336, temp.u32);
	// stfs f30,1372(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1372, temp.u32);
	// stfs f1,1380(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1380, temp.u32);
	// stfs f9,1384(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1384, temp.u32);
	// stfs f31,1388(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1388, temp.u32);
	// stfs f3,1392(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1392, temp.u32);
	// stfs f11,1396(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1396, temp.u32);
	// stfs f26,1404(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1404, temp.u32);
	// lfs f27,6492(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6492);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f28,f26,f20
	ctx.f28.f64 = double(float(ctx.f26.f64 * ctx.f20.f64));
	// stfs f1,1448(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1448, temp.u32);
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// stfs f1,1536(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1536, temp.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// stfs f2,1460(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1460, temp.u32);
	// fcmpu cr6,f21,f10
	cr6.compare(ctx.f21.f64, ctx.f10.f64);
	// stfs f2,1596(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1596, temp.u32);
	// stfs f2,1732(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1732, temp.u32);
	// lfd f8,-160(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f7,-224(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// lfd f2,-232(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stfs f30,1440(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1440, temp.u32);
	// stfs f15,1452(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1452, temp.u32);
	// stfs f16,1456(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1456, temp.u32);
	// stfs f9,1464(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1464, temp.u32);
	// stfs f31,1468(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1468, temp.u32);
	// stfs f3,1472(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1472, temp.u32);
	// stfs f30,1508(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1508, temp.u32);
	// stfs f22,1512(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1512, temp.u32);
	// stfs f17,1516(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1516, temp.u32);
	// stfs f9,1520(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1520, temp.u32);
	// stfs f31,1524(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1524, temp.u32);
	// stfs f3,1528(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1528, temp.u32);
	// stfs f11,1532(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1532, temp.u32);
	// stfs f28,1540(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1540, temp.u32);
	// stfs f30,1576(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1576, temp.u32);
	// stfs f22,1580(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1580, temp.u32);
	// stfs f17,1584(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1584, temp.u32);
	// stfs f15,1588(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1588, temp.u32);
	// stfs f16,1592(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1592, temp.u32);
	// stfs f9,1600(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1600, temp.u32);
	// stfs f31,1604(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1604, temp.u32);
	// stfs f3,1608(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1608, temp.u32);
	// stfs f30,1644(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1644, temp.u32);
	// stfs f29,1648(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1648, temp.u32);
	// stfs f4,1652(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1652, temp.u32);
	// stfs f9,1656(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1656, temp.u32);
	// stfs f31,1660(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1660, temp.u32);
	// stfs f3,1664(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1664, temp.u32);
	// stfs f11,1668(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1668, temp.u32);
	// stfs f12,1672(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1672, temp.u32);
	// stfs f6,1676(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1676, temp.u32);
	// stfs f30,1712(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1712, temp.u32);
	// stfs f29,1716(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1716, temp.u32);
	// stfs f4,1720(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1720, temp.u32);
	// stfs f15,1724(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1724, temp.u32);
	// stfs f16,1728(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1728, temp.u32);
	// stfs f9,1736(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1736, temp.u32);
	// stfs f31,1740(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1740, temp.u32);
	// stfs f3,1744(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1744, temp.u32);
	// stfs f30,1780(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1780, temp.u32);
	// stfs f29,1784(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1784, temp.u32);
	// stfs f4,1788(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1788, temp.u32);
	// stfs f9,1792(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1792, temp.u32);
	// stfs f31,1796(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1796, temp.u32);
	// stfs f3,1800(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1800, temp.u32);
	// stfs f11,1804(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1804, temp.u32);
	// stfs f12,1808(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1808, temp.u32);
	// stfs f6,1812(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1812, temp.u32);
	// bne cr6,0x83b780c0
	if (!cr6.eq) goto loc_83B780C0;
	// stfs f10,1816(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1816, temp.u32);
	// stfs f10,1820(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1820, temp.u32);
	// stfs f10,1824(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1824, temp.u32);
	// b 0x83b780e0
	goto loc_83B780E0;
loc_83B780C0:
	// lfs f12,-256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f12,f21
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f21.f64));
	// lfs f28,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f28.f64 = double(temp.f32);
	// stfs f12,1816(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1816, temp.u32);
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f6,1820(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1820, temp.u32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f12,1824(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1824, temp.u32);
loc_83B780E0:
	// stfs f30,1848(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1848, temp.u32);
	// fcmpu cr6,f21,f10
	cr6.compare(ctx.f21.f64, ctx.f10.f64);
	// stfs f29,1852(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1852, temp.u32);
	// stfs f4,1856(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1856, temp.u32);
	// stfs f15,1860(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1860, temp.u32);
	// stfs f16,1864(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1864, temp.u32);
	// stfs f1,1868(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1868, temp.u32);
	// stfs f9,1872(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1872, temp.u32);
	// stfs f31,1876(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1876, temp.u32);
	// stfs f3,1880(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1880, temp.u32);
	// bne cr6,0x83b7811c
	if (!cr6.eq) goto loc_83B7811C;
	// stfs f10,1884(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1884, temp.u32);
	// stfs f10,1888(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1888, temp.u32);
	// stfs f10,1892(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1892, temp.u32);
	// b 0x83b7813c
	goto loc_83B7813C;
loc_83B7811C:
	// lfs f12,-256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f12,f21
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f21.f64));
	// lfs f4,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f4.f64 = double(temp.f32);
	// stfs f12,1884(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1884, temp.u32);
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f6,1888(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1888, temp.u32);
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// stfs f12,1892(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1892, temp.u32);
loc_83B7813C:
	// stfs f8,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2000, temp.u32);
	// fmuls f8,f7,f27
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// fmuls f26,f7,f2
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f8,2068(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2068, temp.u32);
	// lfs f22,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f8,f24,f20
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f20.f64));
	// stfs f26,1932(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1932, temp.u32);
	// fmuls f12,f23,f2
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f2.f64));
	// stfs f26,2012(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2012, temp.u32);
	// stfs f26,2148(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2148, temp.u32);
	// lfs f26,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f26.f64 = double(temp.f32);
	// stfs f8,2072(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2072, temp.u32);
	// fmuls f8,f22,f20
	ctx.f8.f64 = double(float(ctx.f22.f64 * ctx.f20.f64));
	// lfs f17,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f27,f24,f26
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f26.f64));
	// stfs f8,2140(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2140, temp.u32);
	// fmuls f28,f17,f2
	ctx.f28.f64 = double(float(ctx.f17.f64 * ctx.f2.f64));
	// lfs f6,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f7,f14
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f14.f64));
	// lfs f4,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f26,f22,f26
	ctx.f26.f64 = double(float(ctx.f22.f64 * ctx.f26.f64));
	// lfs f1,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,-180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f29.f64 = double(temp.f32);
	// lfs f23,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f23.f64 = double(temp.f32);
	// stfs f6,1916(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1916, temp.u32);
	// stfs f4,1920(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1920, temp.u32);
	// stfs f1,1924(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1924, temp.u32);
	// stfs f24,1936(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1936, temp.u32);
	// stfs f30,1940(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1940, temp.u32);
	// stfs f28,1944(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
	// stfs f29,1948(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1948, temp.u32);
	// stfs f6,1984(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1984, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1928, temp.u32);
	// stfs f4,1988(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1988, temp.u32);
	// stfs f1,1992(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1992, temp.u32);
	// stfs f23,1996(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1996, temp.u32);
	// stfs f22,2004(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2004, temp.u32);
	// stfs f12,2008(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2008, temp.u32);
	// stfs f24,2016(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2016, temp.u32);
	// stfs f6,2052(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2052, temp.u32);
	// stfs f4,2056(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2056, temp.u32);
	// stfs f1,2060(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2060, temp.u32);
	// stfs f12,2064(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2064, temp.u32);
	// stfs f30,2076(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2076, temp.u32);
	// stfs f28,2080(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2080, temp.u32);
	// stfs f29,2084(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2084, temp.u32);
	// stfs f6,2120(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2120, temp.u32);
	// stfs f4,2124(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2124, temp.u32);
	// stfs f1,2128(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2128, temp.u32);
	// stfs f23,2132(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2132, temp.u32);
	// stfs f18,2136(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2136, temp.u32);
	// stfs f12,2144(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2144, temp.u32);
	// stfs f24,2152(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
	// stfs f6,2188(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2188, temp.u32);
	// stfs f4,2192(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2192, temp.u32);
	// stfs f1,2196(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2196, temp.u32);
	// stfs f12,2200(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2200, temp.u32);
	// stfs f8,2204(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2204, temp.u32);
	// stfs f27,2208(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2208, temp.u32);
	// stfs f30,2212(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2212, temp.u32);
	// stfs f28,2216(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2216, temp.u32);
	// stfs f29,2220(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2220, temp.u32);
	// stfs f6,2256(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2256, temp.u32);
	// stfs f4,2260(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2260, temp.u32);
	// stfs f1,2264(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2264, temp.u32);
	// stfs f23,2268(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2268, temp.u32);
	// stfs f19,2272(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2272, temp.u32);
	// stfs f26,2276(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2276, temp.u32);
	// stfs f12,2280(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2280, temp.u32);
	// stfs f8,2284(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2284, temp.u32);
	// stfs f27,2288(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2288, temp.u32);
	// stfs f6,2324(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2324, temp.u32);
	// stfs f4,2328(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2328, temp.u32);
	// stfs f1,2332(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2332, temp.u32);
	// stfs f12,2336(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2336, temp.u32);
	// stfs f8,2340(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2340, temp.u32);
	// stfs f27,2344(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2344, temp.u32);
	// stfs f30,2348(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2348, temp.u32);
	// stfs f28,2352(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2352, temp.u32);
	// stfs f29,2356(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2356, temp.u32);
	// lfs f20,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f20.f64 = double(temp.f32);
	// fcmpu cr6,f21,f10
	cr6.compare(ctx.f21.f64, ctx.f10.f64);
	// bne cr6,0x83b7829c
	if (!cr6.eq) goto loc_83B7829C;
	// stfs f10,2360(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2360, temp.u32);
	// stfs f10,2364(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2364, temp.u32);
	// stfs f10,2368(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2368, temp.u32);
	// b 0x83b782b0
	goto loc_83B782B0;
loc_83B7829C:
	// fdivs f24,f20,f21
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f20.f64 / ctx.f21.f64));
	// stfs f24,2360(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2360, temp.u32);
	// stfs f24,2368(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2368, temp.u32);
	// fmuls f22,f24,f10
	ctx.f22.f64 = double(float(ctx.f24.f64 * ctx.f10.f64));
	// stfs f22,2364(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2364, temp.u32);
loc_83B782B0:
	// stfs f6,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2392, temp.u32);
	// fcmpu cr6,f21,f10
	cr6.compare(ctx.f21.f64, ctx.f10.f64);
	// stfs f4,2396(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2396, temp.u32);
	// stfs f1,2400(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2400, temp.u32);
	// stfs f23,2404(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2404, temp.u32);
	// stfs f19,2408(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2408, temp.u32);
	// stfs f26,2412(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2412, temp.u32);
	// stfs f12,2416(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2416, temp.u32);
	// stfs f8,2420(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2420, temp.u32);
	// stfs f27,2424(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2424, temp.u32);
	// bne cr6,0x83b782ec
	if (!cr6.eq) goto loc_83B782EC;
	// stfs f10,2428(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2428, temp.u32);
	// stfs f10,2432(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2432, temp.u32);
	// stfs f10,2436(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2436, temp.u32);
	// b 0x83b78300
	goto loc_83B78300;
loc_83B782EC:
	// fdivs f8,f20,f21
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f20.f64 / ctx.f21.f64));
	// stfs f8,2428(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2428, temp.u32);
	// stfs f8,2436(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2436, temp.u32);
	// fmuls f27,f8,f10
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f27,2432(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2432, temp.u32);
loc_83B78300:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f7,2464(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2464, temp.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f7,2532(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2532, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f8,f3,f2
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f0,2544(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2544, temp.u32);
	// fmuls f2,f29,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f2.f64));
	// lfs f27,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,-11312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11312);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f24,f7,f26
	ctx.f24.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// lfs f23,-8360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8360);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f26,f0,f26
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfd f22,17056(r8)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r8.u32 + 17056);
	// stfs f26,2680(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2680, temp.u32);
	// fmuls f26,f7,f23
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f23.f64));
	// fsqrts f7,f22
	ctx.f7.f64 = double(float(sqrt(ctx.f22.f64)));
	// stfs f24,2600(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2600, temp.u32);
	// stfs f24,2668(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2668, temp.u32);
	// stfs f12,2460(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2460, temp.u32);
	// stfs f5,2468(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2468, temp.u32);
	// stfs f9,2472(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2472, temp.u32);
	// stfs f27,2476(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2476, temp.u32);
	// stfs f8,2480(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2480, temp.u32);
	// stfs f30,2484(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2484, temp.u32);
	// stfs f17,2488(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2488, temp.u32);
	// stfs f2,2492(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2492, temp.u32);
	// stfs f12,2528(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2528, temp.u32);
	// stfs f5,2536(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2536, temp.u32);
	// stfs f11,2540(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2540, temp.u32);
	// stfs f13,2548(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2548, temp.u32);
	// stfs f9,2552(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2552, temp.u32);
	// stfs f27,2556(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2556, temp.u32);
	// stfs f8,2560(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2560, temp.u32);
	// stfs f12,2596(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2596, temp.u32);
	// stfs f5,2604(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2604, temp.u32);
	// stfs f9,2608(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2608, temp.u32);
	// stfs f27,2612(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2612, temp.u32);
	// stfs f8,2616(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2616, temp.u32);
	// stfs f30,2620(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2620, temp.u32);
	// stfs f17,2624(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2624, temp.u32);
	// stfs f2,2628(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2628, temp.u32);
	// stfs f12,2664(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2664, temp.u32);
	// stfs f5,2672(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2672, temp.u32);
	// stfs f11,2676(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2676, temp.u32);
	// stfs f13,2684(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2684, temp.u32);
	// stfs f9,2688(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2688, temp.u32);
	// stfs f27,2692(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2692, temp.u32);
	// stfs f8,2696(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2696, temp.u32);
	// stfs f12,2732(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2732, temp.u32);
	// stfs f26,2736(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2736, temp.u32);
	// stfs f5,2740(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2740, temp.u32);
	// stfs f9,2744(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2744, temp.u32);
	// stfs f27,2748(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2748, temp.u32);
	// stfs f8,2752(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2752, temp.u32);
	// stfs f30,2756(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2756, temp.u32);
	// stfs f17,2760(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2760, temp.u32);
	// stfs f2,2764(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2764, temp.u32);
	// stfs f12,2800(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2800, temp.u32);
	// stfs f26,2804(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2804, temp.u32);
	// stfs f5,2808(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2808, temp.u32);
	// stfs f11,2812(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2812, temp.u32);
	// stfs f13,2820(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2820, temp.u32);
	// stfs f9,2824(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2824, temp.u32);
	// stfs f27,2828(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2828, temp.u32);
	// stfs f8,2832(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2832, temp.u32);
	// stfs f6,2868(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2868, temp.u32);
	// stfs f4,2872(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2872, temp.u32);
	// stfs f1,2876(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2876, temp.u32);
	// stfs f30,2880(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2880, temp.u32);
	// stfs f28,2884(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2884, temp.u32);
	// stfs f29,2888(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2888, temp.u32);
	// stfs f30,2892(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2892, temp.u32);
	// stfs f28,2896(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2896, temp.u32);
	// fmuls f24,f29,f25
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// stfs f24,2900(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2900, temp.u32);
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// stfs f0,2816(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2816, temp.u32);
	// fcmpu cr6,f7,f10
	cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// bne cr6,0x83b78450
	if (!cr6.eq) goto loc_83B78450;
	// stfs f10,2904(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2904, temp.u32);
	// stfs f10,2908(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2908, temp.u32);
	// stfs f10,2912(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2912, temp.u32);
	// b 0x83b78464
	goto loc_83B78464;
loc_83B78450:
	// fdivs f0,f20,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f20.f64 / ctx.f7.f64));
	// stfs f0,2904(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2904, temp.u32);
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,2908(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2908, temp.u32);
	// stfs f13,2912(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2912, temp.u32);
loc_83B78464:
	// fmuls f0,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f25.f64));
	// stfs f6,2936(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2936, temp.u32);
	// stfs f4,2940(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2940, temp.u32);
	// fcmpu cr6,f7,f10
	cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// stfs f0,2944(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2944, temp.u32);
	// stfs f6,2948(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2948, temp.u32);
	// stfs f4,2952(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2952, temp.u32);
	// stfs f1,2956(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2956, temp.u32);
	// stfs f30,2960(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2960, temp.u32);
	// stfs f28,2964(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2964, temp.u32);
	// stfs f24,2968(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2968, temp.u32);
	// bne cr6,0x83b784a4
	if (!cr6.eq) goto loc_83B784A4;
	// stfs f10,2972(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2972, temp.u32);
	// stfs f10,2976(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2976, temp.u32);
	// stfs f10,2980(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2980, temp.u32);
	// b 0x83b784b8
	goto loc_83B784B8;
loc_83B784A4:
	// fdivs f0,f20,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f20.f64 / ctx.f7.f64));
	// stfs f0,2972(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2972, temp.u32);
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,2976(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2976, temp.u32);
	// stfs f13,2980(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2980, temp.u32);
loc_83B784B8:
	// lfs f13,-248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f3,f25
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f25.f64));
	// stfs f15,3004(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3004, temp.u32);
	// fcmpu cr6,f7,f10
	cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// stfs f16,3008(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3008, temp.u32);
	// stfs f13,3012(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3012, temp.u32);
	// stfs f9,3016(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3016, temp.u32);
	// stfs f31,3020(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3020, temp.u32);
	// stfs f9,3028(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3028, temp.u32);
	// stfs f31,3032(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3032, temp.u32);
	// stfs f3,3036(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3036, temp.u32);
	// stfs f0,3024(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3024, temp.u32);
	// bne cr6,0x83b784fc
	if (!cr6.eq) goto loc_83B784FC;
	// stfs f10,3040(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3040, temp.u32);
	// stfs f10,3044(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3044, temp.u32);
	// stfs f10,3048(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3048, temp.u32);
	// b 0x83b78510
	goto loc_83B78510;
loc_83B784FC:
	// fdivs f12,f20,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f20.f64 / ctx.f7.f64));
	// stfs f12,3040(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3040, temp.u32);
	// fmuls f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f11,3044(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3044, temp.u32);
	// stfs f11,3048(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3048, temp.u32);
loc_83B78510:
	// stfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3080, temp.u32);
	// fmuls f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// stfs f15,3072(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3072, temp.u32);
	// fcmpu cr6,f7,f10
	cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// stfs f16,3076(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3076, temp.u32);
	// stfs f15,3084(r11)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3084, temp.u32);
	// stfs f16,3088(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3088, temp.u32);
	// stfs f13,3092(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3092, temp.u32);
	// stfs f9,3096(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3096, temp.u32);
	// stfs f31,3100(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3100, temp.u32);
	// stfs f0,3104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3104, temp.u32);
	// bne cr6,0x83b78550
	if (!cr6.eq) goto loc_83B78550;
	// stfs f10,3108(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3108, temp.u32);
	// stfs f10,3112(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3112, temp.u32);
	// stfs f10,3116(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3116, temp.u32);
	// b 0x83b78564
	goto loc_83B78564;
loc_83B78550:
	// fdivs f13,f20,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f20.f64 / ctx.f7.f64));
	// stfs f13,3108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3108, temp.u32);
	// fmuls f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f12,3112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3112, temp.u32);
	// stfs f12,3116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3116, temp.u32);
loc_83B78564:
	// stfs f30,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3140, temp.u32);
	// fcmpu cr6,f7,f10
	cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// stfs f17,3144(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3144, temp.u32);
	// stfs f24,3148(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3148, temp.u32);
	// stfs f9,3152(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3152, temp.u32);
	// stfs f31,3156(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3156, temp.u32);
	// stfs f0,3160(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3160, temp.u32);
	// stfs f30,3164(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3164, temp.u32);
	// stfs f28,3168(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3168, temp.u32);
	// stfs f24,3172(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3172, temp.u32);
	// bne cr6,0x83b785a0
	if (!cr6.eq) goto loc_83B785A0;
	// stfs f10,3176(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3176, temp.u32);
	// stfs f10,3180(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3180, temp.u32);
	// stfs f10,3184(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3184, temp.u32);
	// b 0x83b785b4
	goto loc_83B785B4;
loc_83B785A0:
	// fdivs f13,f20,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f20.f64 / ctx.f7.f64));
	// stfs f13,3176(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3176, temp.u32);
	// fmuls f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f12,3180(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3180, temp.u32);
	// stfs f12,3184(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3184, temp.u32);
loc_83B785B4:
	// stfs f30,3208(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3208, temp.u32);
	// fcmpu cr6,f7,f10
	cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// stfs f17,3212(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3212, temp.u32);
	// stfs f24,3216(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3216, temp.u32);
	// stfs f9,3220(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3220, temp.u32);
	// stfs f27,3224(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3224, temp.u32);
	// stfs f0,3228(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3228, temp.u32);
	// stfs f9,3232(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3232, temp.u32);
	// stfs f31,3236(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3236, temp.u32);
	// stfs f0,3240(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3240, temp.u32);
	// bne cr6,0x83b78600
	if (!cr6.eq) goto loc_83B78600;
	// stfs f10,3244(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3244, temp.u32);
	// stfs f10,3248(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3248, temp.u32);
	// stfs f10,3252(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3252, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce78c
	ctx.lr = 0x83B785F4;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83B78600:
	// fdivs f0,f20,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f20.f64 / ctx.f7.f64));
	// stfs f0,3244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3244, temp.u32);
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,3248(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3248, temp.u32);
	// stfs f13,3252(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3252, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce78c
	ctx.lr = 0x83B7861C;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B78628"))) PPC_WEAK_FUNC(sub_83B78628);
PPC_FUNC_IMPL(__imp__sub_83B78628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce740
	ctx.lr = 0x83B78638;
	__savefpr_14(ctx, base);
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-30096
	ctx.r9.s64 = ctx.r11.s64 + -30096;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-31779
	ctx.r6.s64 = -2082668544;
	// lfs f4,6520(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6520);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r6,-26720
	ctx.r5.s64 = ctx.r6.s64 + -26720;
	// lfs f12,21712(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21712);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f26,68(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f9,f6,f4
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// lfs f28,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f31,f26,f4
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f4.f64));
	// fmuls f2,f28,f12
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// lfs f13,72(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,80(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fadds f25,f3,f13
	ctx.f25.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// lfs f5,92(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fadds f24,f5,f8
	ctx.f24.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// lfs f27,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f1,f27,f12
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// stfs f5,-356(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -356, temp.u32);
	// lfs f29,76(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// fadds f23,f31,f9
	ctx.f23.f64 = double(float(ctx.f31.f64 + ctx.f9.f64));
	// stfs f0,-256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// fadds f5,f11,f2
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f5,-368(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// fadds f22,f9,f31
	ctx.f22.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// lfs f0,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fadds f20,f30,f29
	ctx.f20.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// stfs f13,-292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fmuls f21,f25,f0
	ctx.f21.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// stfs f6,-364(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// fadds f17,f11,f2
	ctx.f17.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f26,-304(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmuls f5,f24,f0
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// stfs f5,112(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 112, temp.u32);
	// fadds f16,f1,f10
	ctx.f16.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f3,-240(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fadds f15,f11,f2
	ctx.f15.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f7,-248(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// fmuls f5,f24,f0
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// stfs f5,156(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 156, temp.u32);
	// fadds f14,f10,f1
	ctx.f14.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f28,-328(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// fmuls f5,f23,f0
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// stfs f5,44(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// fmuls f5,f22,f0
	ctx.f5.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// stfs f5,100(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 100, temp.u32);
	// fmuls f5,f20,f0
	ctx.f5.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// stfs f5,-316(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// fmuls f5,f21,f12
	ctx.f5.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
	// stfs f27,-352(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// fmuls f21,f17,f0
	ctx.f21.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f8,-296(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fmuls f19,f25,f0
	ctx.f19.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f17,f16,f0
	ctx.f17.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// stfs f29,16(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fmuls f16,f15,f0
	ctx.f16.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// stfs f8,20(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f13,80(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// fadds f18,f9,f31
	ctx.f18.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// fmuls f15,f14,f0
	ctx.f15.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// stfs f11,24(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f14,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f23,f20,f0
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// stfs f10,28(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// fadds f22,f10,f1
	ctx.f22.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f9,32(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// fmuls f14,f14,f0
	ctx.f14.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// stfs f29,84(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 84, temp.u32);
	// stfs f8,88(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 88, temp.u32);
	// stfs f2,172(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 172, temp.u32);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// stfs f5,104(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 104, temp.u32);
	// stfs f23,-268(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmuls f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f26,f26,f12
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// lfs f23,-356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f13,f8,f4
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfs f26,-232(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// stfs f13,-224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f8,f23,f4
	ctx.f8.f64 = double(float(ctx.f23.f64 * ctx.f4.f64));
	// lfs f13,16100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f23,f20,f0
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// lfs f26,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f4,f19,f12
	ctx.f4.f64 = double(float(ctx.f19.f64 * ctx.f12.f64));
	// stfs f8,-216(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmuls f8,f26,f13
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// stfs f23,-188(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fmuls f27,f27,f13
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f4,148(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 148, temp.u32);
	// fmuls f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f23,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f4,f18,f0
	ctx.f4.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// stfs f4,168(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 168, temp.u32);
	// fmuls f26,f22,f0
	ctx.f26.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// stfs f23,108(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 108, temp.u32);
	// fmuls f4,f21,f12
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
	// stfs f4,36(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// fmuls f4,f17,f13
	ctx.f4.f64 = double(float(ctx.f17.f64 * ctx.f13.f64));
	// stfs f4,40(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// fmuls f22,f25,f0
	ctx.f22.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// stfs f3,240(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 240, temp.u32);
	// fmuls f4,f16,f12
	ctx.f4.f64 = double(float(ctx.f16.f64 * ctx.f12.f64));
	// stfs f4,92(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 92, temp.u32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f19,-356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f25,f3,f12
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f25,-208(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fmuls f4,f15,f13
	ctx.f4.f64 = double(float(ctx.f15.f64 * ctx.f13.f64));
	// stfs f4,96(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 96, temp.u32);
	// fadds f17,f7,f27
	ctx.f17.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// stfs f27,-288(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fadds f18,f8,f28
	ctx.f18.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// lfs f21,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f21.f64 = double(temp.f32);
	// fadds f23,f8,f28
	ctx.f23.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// stfs f21,152(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 152, temp.u32);
	// fmuls f4,f14,f12
	ctx.f4.f64 = double(float(ctx.f14.f64 * ctx.f12.f64));
	// stfs f4,160(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 160, temp.u32);
	// fmuls f4,f26,f13
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// stfs f4,164(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 164, temp.u32);
	// fmuls f4,f24,f0
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// lfs f3,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,224(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 224, temp.u32);
	// fmuls f4,f22,f12
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f12.f64));
	// stfs f4,216(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 216, temp.u32);
	// fadds f24,f6,f3
	ctx.f24.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fadds f26,f6,f3
	ctx.f26.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// lfs f4,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f3.f64 = double(temp.f32);
	// fadds f15,f5,f25
	ctx.f15.f64 = double(float(ctx.f5.f64 + ctx.f25.f64));
	// lfs f16,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f22,f20,f0
	ctx.f22.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// stfs f5,-336(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// fadds f25,f5,f25
	ctx.f25.f64 = double(float(ctx.f5.f64 + ctx.f25.f64));
	// stfs f1,176(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 176, temp.u32);
	// fadds f27,f7,f27
	ctx.f27.f64 = double(float(ctx.f7.f64 + ctx.f27.f64));
	// stfs f31,180(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 180, temp.u32);
	// fadds f21,f4,f3
	ctx.f21.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,228(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 228, temp.u32);
	// fmuls f18,f18,f0
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// stfs f1,232(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 232, temp.u32);
	// fmuls f17,f17,f0
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f31,236(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 236, temp.u32);
	// fmuls f23,f23,f0
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// stfs f16,220(r5)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r5.u32 + 220, temp.u32);
	// stfs f30,244(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 244, temp.u32);
	// stfs f19,248(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 248, temp.u32);
	// stfs f5,284(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 284, temp.u32);
	// stfs f29,288(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 288, temp.u32);
	// stfs f4,292(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 292, temp.u32);
	// stfs f8,296(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 296, temp.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// stfs f22,-316(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfd f9,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.f9.u64);
	// fadds f22,f4,f3
	ctx.f22.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// lfs f3,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f27,f0
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// stfs f4,-344(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// lfs f19,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f16,f20,f0
	ctx.f16.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// lfs f9,-6692(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -6692);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f15,f15,f0
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// stfs f9,-368(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// lfs f4,-3400(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3400);
	ctx.f4.f64 = double(temp.f32);
	// fadds f9,f8,f28
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fmuls f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfs f27,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f27.f64 = double(temp.f32);
	// stfs f3,-352(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// fmuls f3,f19,f4
	ctx.f3.f64 = double(float(ctx.f19.f64 * ctx.f4.f64));
	// stfs f3,-280(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// lfs f14,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f3,f14,f4
	ctx.f3.f64 = double(float(ctx.f14.f64 * ctx.f4.f64));
	// stfs f4,-328(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// fmuls f4,f27,f4
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f4.f64));
	// stfs f4,-248(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// lfs f14,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f14.f64 = double(temp.f32);
	// lfs f4,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-304(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lfs f19,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f19.f64 = double(temp.f32);
	// stfs f3,-364(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// lfs f3,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f3.f64 = double(temp.f32);
	// stfs f16,-268(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fadds f16,f5,f3
	ctx.f16.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// lfs f3,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,352(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 352, temp.u32);
	// fmuls f5,f26,f0
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f5,372(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 372, temp.u32);
	// lfs f5,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f5.f64 = double(temp.f32);
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// lfs f27,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f27.f64 = double(temp.f32);
	// lfs f4,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fmuls f19,f19,f4
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f4.f64));
	// stfs f3,-368(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// fmuls f4,f14,f4
	ctx.f4.f64 = double(float(ctx.f14.f64 * ctx.f4.f64));
	// stfs f4,-256(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// fmuls f4,f24,f0
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// stfs f4,316(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 316, temp.u32);
	// lfs f4,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f3.f64 = double(temp.f32);
	// fadds f24,f4,f3
	ctx.f24.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f19,-288(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fadds f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f7,300(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 300, temp.u32);
	// fmuls f4,f21,f0
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// stfs f4,384(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 384, temp.u32);
	// fmuls f4,f18,f13
	ctx.f4.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// stfs f4,308(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 308, temp.u32);
	// fmuls f4,f17,f13
	ctx.f4.f64 = double(float(ctx.f17.f64 * ctx.f13.f64));
	// stfs f4,312(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 312, temp.u32);
	// fmuls f4,f23,f13
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// lfs f23,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f23.f64 = double(temp.f32);
	// stfs f4,364(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 364, temp.u32);
	// fmuls f4,f23,f13
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// stfs f4,368(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 368, temp.u32);
	// fmuls f4,f15,f13
	ctx.f4.f64 = double(float(ctx.f15.f64 * ctx.f13.f64));
	// lfs f19,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f19.f64 = double(temp.f32);
	// stfs f4,376(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 376, temp.u32);
	// fmuls f4,f25,f13
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// stfs f19,360(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 360, temp.u32);
	// stfs f5,-344(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// lfs f19,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f19.f64 = double(temp.f32);
	// lfs f5,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f5.f64 = double(temp.f32);
	// fmr f25,f19
	ctx.f25.f64 = ctx.f19.f64;
	// stfs f4,420(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 420, temp.u32);
	// fmuls f4,f22,f0
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// lfs f22,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f22.f64 = double(temp.f32);
	// fadds f23,f19,f5
	ctx.f23.f64 = double(float(ctx.f19.f64 + ctx.f5.f64));
	// stfs f6,304(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 304, temp.u32);
	// stfs f29,356(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 356, temp.u32);
	// lfs f25,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f25.f64 = double(temp.f32);
	// fadds f21,f19,f5
	ctx.f21.f64 = double(float(ctx.f19.f64 + ctx.f5.f64));
	// stfs f25,380(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 380, temp.u32);
	// fadds f25,f6,f27
	ctx.f25.f64 = double(float(ctx.f6.f64 + ctx.f27.f64));
	// stfs f4,428(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 428, temp.u32);
	// fmuls f17,f20,f0
	ctx.f17.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// lfs f4,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f16,f16,f0
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f4,-208(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// stfs f4,512(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 512, temp.u32);
	// fmuls f24,f24,f0
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// lfs f4,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f23,f23,f0
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// lfs f18,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f18.f64 = double(temp.f32);
	// fadds f18,f18,f4
	ctx.f18.f64 = double(float(ctx.f18.f64 + ctx.f4.f64));
	// stfs f4,520(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 520, temp.u32);
	// stfs f22,424(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 424, temp.u32);
	// fmuls f22,f9,f0
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f19,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f21,f21,f0
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// fmuls f4,f25,f0
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// stfs f4,440(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 440, temp.u32);
	// lfs f4,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f19,f19,f0
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// stfs f4,-344(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// lfs f15,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f15,f15,f13
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f13.f64));
	// stfs f17,-316(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// stfs f15,-368(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// fmuls f17,f3,f0
	ctx.f17.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f3,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f18,f0
	ctx.f4.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// stfs f4,496(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 496, temp.u32);
	// lfs f25,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f4,f22,f13
	ctx.f4.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// stfs f4,432(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 432, temp.u32);
	// fadds f14,f3,f25
	ctx.f14.f64 = double(float(ctx.f3.f64 + ctx.f25.f64));
	// fadds f25,f3,f25
	ctx.f25.f64 = double(float(ctx.f3.f64 + ctx.f25.f64));
	// lfs f15,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f4,f19,f13
	ctx.f4.f64 = double(float(ctx.f19.f64 * ctx.f13.f64));
	// stfs f4,436(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 436, temp.u32);
	// fmuls f4,f16,f13
	ctx.f4.f64 = double(float(ctx.f16.f64 * ctx.f13.f64));
	// stfs f4,488(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 488, temp.u32);
	// lfs f4,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f4.f64 = double(temp.f32);
	// fadds f19,f15,f5
	ctx.f19.f64 = double(float(ctx.f15.f64 + ctx.f5.f64));
	// fmuls f3,f24,f4
	ctx.f3.f64 = double(float(ctx.f24.f64 * ctx.f4.f64));
	// stfs f3,580(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 580, temp.u32);
	// fmuls f4,f17,f4
	ctx.f4.f64 = double(float(ctx.f17.f64 * ctx.f4.f64));
	// stfs f4,636(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 636, temp.u32);
	// fmuls f3,f23,f13
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// lfs f24,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f4,f21,f13
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// stfs f3,584(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 584, temp.u32);
	// stfs f4,640(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 640, temp.u32);
	// fmr f17,f15
	ctx.f17.f64 = ctx.f15.f64;
	// lfs f9,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f14,f0
	ctx.f4.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// fmuls f3,f25,f0
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// stfs f3,588(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 588, temp.u32);
	// stfs f4,644(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 644, temp.u32);
	// fmuls f25,f9,f12
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f23,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f23.f64 = double(temp.f32);
	// fadds f21,f24,f23
	ctx.f21.f64 = double(float(ctx.f24.f64 + ctx.f23.f64));
	// lfs f4,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f4.f64 = double(temp.f32);
	// lfs f23,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f23.f64 = double(temp.f32);
	// lfs f5,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f5.f64 = double(temp.f32);
	// lfs f24,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f24.f64 = double(temp.f32);
	// lfs f3,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f3.f64 = double(temp.f32);
	// lfs f18,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f18.f64 = double(temp.f32);
	// lfs f22,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f22.f64 = double(temp.f32);
	// stfs f28,444(r5)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r5.u32 + 444, temp.u32);
	// stfs f26,448(r5)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r5.u32 + 448, temp.u32);
	// stfs f27,452(r5)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r5.u32 + 452, temp.u32);
	// stfs f28,500(r5)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r5.u32 + 500, temp.u32);
	// stfs f26,504(r5)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r5.u32 + 504, temp.u32);
	// stfs f27,508(r5)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r5.u32 + 508, temp.u32);
	// stfs f30,516(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 516, temp.u32);
	// stfs f5,556(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 556, temp.u32);
	// stfs f29,560(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 560, temp.u32);
	// stfs f23,492(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 492, temp.u32);
	// lfs f23,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f19,f19,f0
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// stfs f24,720(r5)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r5.u32 + 720, temp.u32);
	// stfs f24,776(r5)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r5.u32 + 776, temp.u32);
	// fmuls f24,f23,f13
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// stfs f4,716(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 716, temp.u32);
	// stfs f4,772(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 772, temp.u32);
	// lfs f4,-356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f18,568(r5)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r5.u32 + 568, temp.u32);
	// fmuls f18,f20,f0
	ctx.f18.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// stfs f18,-316(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// fmuls f18,f20,f0
	ctx.f18.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// stfs f23,828(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 828, temp.u32);
	// fmuls f20,f20,f0
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// stfs f20,-172(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// stfs f18,-268(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmuls f18,f21,f0
	ctx.f18.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// stfs f3,724(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 724, temp.u32);
	// fadds f23,f5,f24
	ctx.f23.f64 = double(float(ctx.f5.f64 + ctx.f24.f64));
	// stfs f3,780(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 780, temp.u32);
	// fadds f20,f5,f24
	ctx.f20.f64 = double(float(ctx.f5.f64 + ctx.f24.f64));
	// stfs f22,576(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 576, temp.u32);
	// fadds f21,f5,f24
	ctx.f21.f64 = double(float(ctx.f5.f64 + ctx.f24.f64));
	// lfs f16,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f16.f64 = double(temp.f32);
	// fadds f3,f22,f3
	ctx.f3.f64 = double(float(ctx.f22.f64 + ctx.f3.f64));
	// lfs f22,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// fadds f17,f25,f4
	ctx.f17.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// stfs f22,-304(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lfs f22,-356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f22.f64 = double(temp.f32);
	// fadds f9,f25,f4
	ctx.f9.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// stfs f16,-356(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + -356, temp.u32);
	// stfd f12,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.f12.u64);
	// lfs f12,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f14,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f16,f23,f0
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// stfs f14,-360(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// fmuls f23,f20,f0
	ctx.f23.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// stfs f23,-240(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fmuls f14,f21,f0
	ctx.f14.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// stfs f15,572(r5)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r5.u32 + 572, temp.u32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f3,-344(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// fmuls f23,f17,f0
	ctx.f23.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f23,656(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 656, temp.u32);
	// lfs f23,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f23.f64 = double(temp.f32);
	// fadds f15,f25,f4
	ctx.f15.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// lfs f21,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f20,f9,f0
	ctx.f20.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f21,-328(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// stfs f20,768(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 768, temp.u32);
	// fmuls f20,f19,f13
	ctx.f20.f64 = double(float(ctx.f19.f64 * ctx.f13.f64));
	// stfs f20,708(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 708, temp.u32);
	// stfs f5,624(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 624, temp.u32);
	// stfs f4,-232(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fmuls f20,f14,f23
	ctx.f20.f64 = double(float(ctx.f14.f64 * ctx.f23.f64));
	// stfs f4,792(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 792, temp.u32);
	// lfs f3,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f21,f15,f0
	ctx.f21.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// stfs f21,700(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 700, temp.u32);
	// fmuls f21,f18,f23
	ctx.f21.f64 = double(float(ctx.f18.f64 * ctx.f23.f64));
	// stfs f21,704(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 704, temp.u32);
	// fmuls f21,f16,f23
	ctx.f21.f64 = double(float(ctx.f16.f64 * ctx.f23.f64));
	// lfs f4,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f19,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f19.f64 = double(temp.f32);
	// lfs f16,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f16.f64 = double(temp.f32);
	// lfs f17,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f17.f64 = double(temp.f32);
	// lfs f15,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f23,f15,f23
	ctx.f23.f64 = double(float(ctx.f15.f64 * ctx.f23.f64));
	// stfs f25,564(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 564, temp.u32);
	// lfs f18,-344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f18.f64 = double(temp.f32);
	// stfs f29,628(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 628, temp.u32);
	// stfs f25,632(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 632, temp.u32);
	// stfs f24,784(r5)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r5.u32 + 784, temp.u32);
	// lfs f15,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f15.f64 = double(temp.f32);
	// stfs f30,788(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 788, temp.u32);
	// stfs f30,832(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 832, temp.u32);
	// stfs f22,836(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 836, temp.u32);
	// stfs f15,652(r5)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r5.u32 + 652, temp.u32);
	// stfs f2,840(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 840, temp.u32);
	// lfs f14,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f14.f64 = double(temp.f32);
	// stfs f12,896(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 896, temp.u32);
	// lfs f12,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f12.f64 = double(temp.f32);
	// stfd f6,-208(r1)
	PPC_STORE_U64(ctx.r1.u32 + -208, ctx.f6.u64);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f6,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f6.f64 = double(temp.f32);
	// stfd f13,-216(r1)
	PPC_STORE_U64(ctx.r1.u32 + -216, ctx.f13.u64);
	// lfs f13,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f13.f64 = double(temp.f32);
	// stfs f18,712(r5)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r5.u32 + 712, temp.u32);
	// stfs f16,764(r5)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r5.u32 + 764, temp.u32);
	// stfd f25,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.f25.u64);
	// stfd f7,-248(r1)
	PPC_STORE_U64(ctx.r1.u32 + -248, ctx.f7.u64);
	// lfs f16,-356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f15.f64 = double(temp.f32);
	// lfs f18,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f18.f64 = double(temp.f32);
	// lfs f25,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f25.f64 = double(temp.f32);
	// lfs f7,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f7.f64 = double(temp.f32);
	// stfs f19,696(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 696, temp.u32);
	// stfs f31,848(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 848, temp.u32);
	// stfs f21,648(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 648, temp.u32);
	// stfs f20,692(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 692, temp.u32);
	// stfs f23,760(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 760, temp.u32);
	// stfs f22,904(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 904, temp.u32);
	// stfd f8,-328(r1)
	PPC_STORE_U64(ctx.r1.u32 + -328, ctx.f8.u64);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// stfd f0,-304(r1)
	PPC_STORE_U64(ctx.r1.u32 + -304, ctx.f0.u64);
	// stfd f31,-344(r1)
	PPC_STORE_U64(ctx.r1.u32 + -344, ctx.f31.u64);
	// lfs f23,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,-30096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30096);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f19.f64 = double(temp.f32);
	// lfs f0,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f31.f64 = double(temp.f32);
	// stfs f1,844(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 844, temp.u32);
	// stfs f5,852(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 852, temp.u32);
	// stfs f4,856(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 856, temp.u32);
	// stfs f3,860(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 860, temp.u32);
	// stfs f30,900(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 900, temp.u32);
	// stfs f5,908(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 908, temp.u32);
	// stfs f4,912(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 912, temp.u32);
	// stfs f3,916(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 916, temp.u32);
	// stfs f17,920(r5)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r5.u32 + 920, temp.u32);
	// stfs f16,924(r5)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r5.u32 + 924, temp.u32);
	// stfs f15,928(r5)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r5.u32 + 928, temp.u32);
	// stfs f14,964(r5)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r5.u32 + 964, temp.u32);
	// stfs f30,968(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 968, temp.u32);
	// stfs f12,972(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 972, temp.u32);
	// stfs f28,976(r5)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r5.u32 + 976, temp.u32);
	// stfs f26,980(r5)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r5.u32 + 980, temp.u32);
	// stfs f27,984(r5)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r5.u32 + 984, temp.u32);
	// stfs f5,988(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 988, temp.u32);
	// stfs f18,-360(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// stfs f4,992(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 992, temp.u32);
	// stfs f3,996(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 996, temp.u32);
	// stfs f14,1032(r5)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1032, temp.u32);
	// stfs f30,1036(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1036, temp.u32);
	// stfs f12,1040(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1040, temp.u32);
	// stfs f5,1044(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1044, temp.u32);
	// stfs f4,1048(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1048, temp.u32);
	// stfs f3,1052(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1052, temp.u32);
	// stfs f17,1056(r5)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1056, temp.u32);
	// stfs f16,1060(r5)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1060, temp.u32);
	// stfs f15,1064(r5)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1064, temp.u32);
	// stfs f24,1100(r5)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1100, temp.u32);
	// stfs f30,1104(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1104, temp.u32);
	// stfs f13,1108(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1108, temp.u32);
	// stfs f25,1112(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1112, temp.u32);
	// stfs f6,1116(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1116, temp.u32);
	// stfs f7,1120(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1120, temp.u32);
	// stfs f5,1124(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1124, temp.u32);
	// stfs f4,1128(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1128, temp.u32);
	// stfs f3,1132(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1132, temp.u32);
	// stfs f24,1168(r5)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1168, temp.u32);
	// stfs f30,1172(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1172, temp.u32);
	// stfs f13,1176(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1176, temp.u32);
	// stfs f5,1180(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1180, temp.u32);
	// stfs f4,1184(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1184, temp.u32);
	// stfs f3,1188(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1188, temp.u32);
	// stfs f17,1192(r5)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1192, temp.u32);
	// stfs f16,1196(r5)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1196, temp.u32);
	// fadds f24,f20,f5
	ctx.f24.f64 = double(float(ctx.f20.f64 + ctx.f5.f64));
	// stfs f15,1200(r5)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1200, temp.u32);
	// fadds f17,f19,f4
	ctx.f17.f64 = double(float(ctx.f19.f64 + ctx.f4.f64));
	// stfs f0,1328(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1328, temp.u32);
	// lfs f13,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f13.f64 = double(temp.f32);
	// fadds f16,f18,f3
	ctx.f16.f64 = double(float(ctx.f18.f64 + ctx.f3.f64));
	// fadds f0,f11,f2
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,-336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// fadds f15,f11,f2
	ctx.f15.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// lfd f0,-304(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// fadds f14,f10,f1
	ctx.f14.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f8,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f8.f64 = double(temp.f32);
	// stfd f27,-224(r1)
	PPC_STORE_U64(ctx.r1.u32 + -224, ctx.f27.u64);
	// fadds f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f31,1336(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1336, temp.u32);
	// lfd f9,-200(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// lfd f31,-344(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -344);
	// fmuls f27,f24,f0
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// lfs f30,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f30.f64 = double(temp.f32);
	// stfs f27,-272(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fmuls f27,f17,f0
	ctx.f27.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f29,1332(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1332, temp.u32);
	// fadds f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// stfs f29,1468(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1468, temp.u32);
	// stfs f29,1604(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1604, temp.u32);
	// fadds f29,f9,f31
	ctx.f29.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// stfs f30,1532(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1532, temp.u32);
	// fmuls f15,f15,f0
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// stfs f30,1588(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1588, temp.u32);
	// fmuls f14,f14,f0
	ctx.f14.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// lfs f30,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f30.f64 = double(temp.f32);
	// lfs f7,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f7.f64 = double(temp.f32);
	// stfs f27,-268(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmuls f27,f24,f0
	ctx.f27.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// stfs f29,-292(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// fmuls f29,f17,f0
	ctx.f29.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfd f3,-288(r1)
	PPC_STORE_U64(ctx.r1.u32 + -288, ctx.f3.u64);
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// lfs f3,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f3.f64 = double(temp.f32);
	// stfs f27,-320(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fmr f27,f30
	ctx.f27.f64 = ctx.f30.f64;
	// stfs f8,-360(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// stfs f7,-344(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// stfs f6,-296(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// lfd f8,-328(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// lfd f7,-248(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// lfd f6,-208(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stfd f4,-256(r1)
	PPC_STORE_U64(ctx.r1.u32 + -256, ctx.f4.u64);
	// fmuls f4,f24,f0
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// stfs f30,-304(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmr f30,f18
	ctx.f30.f64 = ctx.f18.f64;
	// stfd f31,-232(r1)
	PPC_STORE_U64(ctx.r1.u32 + -232, ctx.f31.u64);
	// fmuls f31,f17,f0
	ctx.f31.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f29,-368(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// fmuls f29,f16,f0
	ctx.f29.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// stfs f23,1236(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1236, temp.u32);
	// stfs f22,1240(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1240, temp.u32);
	// stfs f21,1244(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1244, temp.u32);
	// stfs f20,1248(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1248, temp.u32);
	// stfs f19,1252(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1252, temp.u32);
	// stfs f18,1256(r5)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1256, temp.u32);
	// stfs f11,1260(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1260, temp.u32);
	// stfs f10,1264(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1264, temp.u32);
	// stfs f9,1268(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1268, temp.u32);
	// stfs f23,1304(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1304, temp.u32);
	// stfs f22,1308(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1308, temp.u32);
	// stfs f21,1312(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1312, temp.u32);
	// stfs f11,1316(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1316, temp.u32);
	// stfs f10,1320(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1320, temp.u32);
	// stfs f9,1324(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1324, temp.u32);
	// stfs f23,1372(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1372, temp.u32);
	// stfs f22,1376(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1376, temp.u32);
	// stfs f21,1380(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1380, temp.u32);
	// stfs f20,1384(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1384, temp.u32);
	// stfs f19,1388(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1388, temp.u32);
	// stfs f18,1392(r5)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1392, temp.u32);
	// stfs f8,1396(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1396, temp.u32);
	// stfs f7,1400(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1400, temp.u32);
	// stfs f6,1404(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1404, temp.u32);
	// stfs f23,1440(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1440, temp.u32);
	// stfd f5,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.f5.u64);
	// stfs f23,1508(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1508, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f23,1576(r5)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1576, temp.u32);
	// lfs f23,-368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f23.f64 = double(temp.f32);
	// stfs f29,1676(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1676, temp.u32);
	// fmr f29,f23
	ctx.f29.f64 = ctx.f23.f64;
	// stfs f13,1464(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1464, temp.u32);
	// lfs f13,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f13.f64 = double(temp.f32);
	// stfs f29,1728(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1728, temp.u32);
	// fmuls f29,f24,f0
	ctx.f29.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// stfs f12,-360(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// stfs f23,-316(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// fadds f23,f8,f28
	ctx.f23.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// stfs f11,1644(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1644, temp.u32);
	// stfs f10,1648(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1648, temp.u32);
	// stfs f11,1712(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1712, temp.u32);
	// fadds f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f10,1716(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1716, temp.u32);
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f12,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f12.f64 = double(temp.f32);
	// stfs f29,-320(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// fmuls f29,f17,f0
	ctx.f29.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f29,-316(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// fmuls f29,f16,f0
	ctx.f29.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// stfs f13,1472(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1472, temp.u32);
	// stfs f12,1724(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1724, temp.u32);
	// lfs f13,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,-192(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stfs f29,1732(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1732, temp.u32);
	// fmuls f29,f15,f12
	ctx.f29.f64 = double(float(ctx.f15.f64 * ctx.f12.f64));
	// stfs f13,1668(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1668, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfd f13,-216(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f18,1528(r5)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1528, temp.u32);
	// fmr f18,f25
	ctx.f18.f64 = ctx.f25.f64;
	// lfs f5,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f5.f64 = double(temp.f32);
	// fmr f18,f27
	ctx.f18.f64 = ctx.f27.f64;
	// stfs f25,1536(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1536, temp.u32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f25,1592(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1592, temp.u32);
	// stfs f29,1736(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1736, temp.u32);
	// fmuls f29,f14,f13
	ctx.f29.f64 = double(float(ctx.f14.f64 * ctx.f13.f64));
	// lfd f25,-240(r1)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// lfs f15,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f15.f64 = double(temp.f32);
	// stfs f25,1608(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1608, temp.u32);
	// fmr f25,f4
	ctx.f25.f64 = ctx.f4.f64;
	// stfs f6,1460(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1460, temp.u32);
	// fmuls f25,f23,f0
	ctx.f25.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// stfd f6,-328(r1)
	PPC_STORE_U64(ctx.r1.u32 + -328, ctx.f6.u64);
	// stfs f29,1740(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1740, temp.u32);
	// fmuls f29,f15,f0
	ctx.f29.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// lfs f6,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f6.f64 = double(temp.f32);
	// stfs f22,1444(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1444, temp.u32);
	// stfs f21,1448(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1448, temp.u32);
	// stfs f22,1512(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1512, temp.u32);
	// stfs f21,1516(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1516, temp.u32);
	// stfs f22,1580(r5)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1580, temp.u32);
	// fmr f22,f31
	ctx.f22.f64 = ctx.f31.f64;
	// stfs f21,1584(r5)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1584, temp.u32);
	// fadds f21,f7,f26
	ctx.f21.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// stfs f5,-336(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// lfd f5,-200(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stfs f8,1452(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1452, temp.u32);
	// stfs f7,1456(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1456, temp.u32);
	// stfs f20,1520(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1520, temp.u32);
	// stfs f19,1524(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1524, temp.u32);
	// stfs f27,1540(r5)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1540, temp.u32);
	// stfs f4,-272(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// stfs f31,-268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// stfs f27,1596(r5)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1596, temp.u32);
	// stfs f3,1600(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1600, temp.u32);
	// stfs f9,1652(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1652, temp.u32);
	// stfs f20,1656(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1656, temp.u32);
	// stfs f19,1660(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1660, temp.u32);
	// stfs f30,1664(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1664, temp.u32);
	// stfs f9,1720(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1720, temp.u32);
	// stfs f6,1672(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1672, temp.u32);
	// stfs f29,1744(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1744, temp.u32);
	// stfs f4,1792(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1792, temp.u32);
	// stfs f31,1796(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1796, temp.u32);
	// lfd f31,-232(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// fadds f22,f8,f28
	ctx.f22.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// lfs f15,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f23,f21,f0
	ctx.f23.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// lfd f6,-328(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -328);
	// fadds f21,f7,f26
	ctx.f21.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// lfd f27,-224(r1)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// fmuls f29,f15,f12
	ctx.f29.f64 = double(float(ctx.f15.f64 * ctx.f12.f64));
	// stfs f2,1872(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1872, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,1848(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1848, temp.u32);
	// fadds f2,f6,f27
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f27.f64));
	// stfs f1,1876(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1876, temp.u32);
	// fmuls f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f12,1852(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1852, temp.u32);
	// fmuls f12,f16,f0
	ctx.f12.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// stfs f12,1948(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1948, temp.u32);
	// fmuls f12,f16,f0
	ctx.f12.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// stfs f12,2004(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2004, temp.u32);
	// fmuls f1,f22,f0
	ctx.f1.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// stfs f31,1880(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1880, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,1856(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1856, temp.u32);
	// fmuls f12,f25,f13
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// stfs f12,2008(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2008, temp.u32);
	// fmuls f9,f21,f0
	ctx.f9.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// lfs f15,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f15.f64 = double(temp.f32);
	// fadds f31,f6,f27
	ctx.f31.f64 = double(float(ctx.f6.f64 + ctx.f27.f64));
	// stfs f29,1780(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1780, temp.u32);
	// fmuls f12,f23,f13
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// stfs f12,2012(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2012, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,2016(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2016, temp.u32);
	// fmuls f29,f15,f13
	ctx.f29.f64 = double(float(ctx.f15.f64 * ctx.f13.f64));
	// lfs f15,-292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	ctx.f15.f64 = double(temp.f32);
	// stfs f29,1784(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1784, temp.u32);
	// fmuls f29,f15,f0
	ctx.f29.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// fmuls f11,f24,f0
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// stfs f29,1788(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1788, temp.u32);
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f12,2052(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2052, temp.u32);
	// fmuls f10,f17,f0
	ctx.f10.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// stfs f11,1940(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1940, temp.u32);
	// lfd f4,-256(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// fmuls f29,f16,f0
	ctx.f29.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f12,2056(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2056, temp.u32);
	// lfd f3,-288(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// fmuls f12,f24,f0
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// lfs f25,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f11,f17,f0
	ctx.f11.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// lfs f18,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f18.f64 = double(temp.f32);
	// stfs f8,1916(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1916, temp.u32);
	// stfs f7,1920(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1920, temp.u32);
	// stfs f6,1924(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1924, temp.u32);
	// stfs f10,1944(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1944, temp.u32);
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f8,1984(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1984, temp.u32);
	// fadds f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// stfs f7,1988(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1988, temp.u32);
	// fadds f7,f7,f26
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f26.f64));
	// stfs f6,1992(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1992, temp.u32);
	// fadds f6,f6,f27
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f27.f64));
	// stfs f5,1804(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1804, temp.u32);
	// stfs f4,1808(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1808, temp.u32);
	// stfs f3,1812(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1812, temp.u32);
	// stfs f5,1860(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1860, temp.u32);
	// stfs f4,1864(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1864, temp.u32);
	// stfs f29,1800(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1800, temp.u32);
	// stfs f3,1868(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1868, temp.u32);
	// stfs f20,1928(r5)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1928, temp.u32);
	// stfs f19,1932(r5)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1932, temp.u32);
	// stfs f30,1936(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1936, temp.u32);
	// stfs f25,1996(r5)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1996, temp.u32);
	// stfs f18,2000(r5)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2000, temp.u32);
	// stfs f5,2076(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2076, temp.u32);
	// stfs f4,2080(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2080, temp.u32);
	// stfs f3,2084(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2084, temp.u32);
	// stfs f12,2064(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2064, temp.u32);
	// stfs f11,2068(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2068, temp.u32);
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f10,2060(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2060, temp.u32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f5,2132(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2132, temp.u32);
	// fmuls f12,f16,f0
	ctx.f12.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// stfs f12,2072(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2072, temp.u32);
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f0,2128(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2128, temp.u32);
	// stfs f4,2136(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2136, temp.u32);
	// stfs f3,2140(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2140, temp.u32);
	// stfs f28,2144(r5)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2144, temp.u32);
	// stfs f26,2148(r5)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2148, temp.u32);
	// stfs f27,2152(r5)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2152, temp.u32);
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f0,2120(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2120, temp.u32);
	// fmuls f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f0,2124(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 2124, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce78c
	ctx.lr = 0x83B791E8;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B791F4"))) PPC_WEAK_FUNC(sub_83B791F4);
PPC_FUNC_IMPL(__imp__sub_83B791F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B791F8"))) PPC_WEAK_FUNC(sub_83B791F8);
PPC_FUNC_IMPL(__imp__sub_83B791F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26736
	ctx.r3.s64 = ctx.r11.s64 + 26736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79204"))) PPC_WEAK_FUNC(sub_83B79204);
PPC_FUNC_IMPL(__imp__sub_83B79204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79208"))) PPC_WEAK_FUNC(sub_83B79208);
PPC_FUNC_IMPL(__imp__sub_83B79208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26744
	ctx.r3.s64 = ctx.r11.s64 + 26744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79214"))) PPC_WEAK_FUNC(sub_83B79214);
PPC_FUNC_IMPL(__imp__sub_83B79214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79218"))) PPC_WEAK_FUNC(sub_83B79218);
PPC_FUNC_IMPL(__imp__sub_83B79218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79224"))) PPC_WEAK_FUNC(sub_83B79224);
PPC_FUNC_IMPL(__imp__sub_83B79224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79228"))) PPC_WEAK_FUNC(sub_83B79228);
PPC_FUNC_IMPL(__imp__sub_83B79228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26760
	ctx.r3.s64 = ctx.r11.s64 + 26760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79234"))) PPC_WEAK_FUNC(sub_83B79234);
PPC_FUNC_IMPL(__imp__sub_83B79234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79238"))) PPC_WEAK_FUNC(sub_83B79238);
PPC_FUNC_IMPL(__imp__sub_83B79238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26768
	ctx.r3.s64 = ctx.r11.s64 + 26768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79244"))) PPC_WEAK_FUNC(sub_83B79244);
PPC_FUNC_IMPL(__imp__sub_83B79244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79248"))) PPC_WEAK_FUNC(sub_83B79248);
PPC_FUNC_IMPL(__imp__sub_83B79248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26776
	ctx.r3.s64 = ctx.r11.s64 + 26776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79254"))) PPC_WEAK_FUNC(sub_83B79254);
PPC_FUNC_IMPL(__imp__sub_83B79254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79258"))) PPC_WEAK_FUNC(sub_83B79258);
PPC_FUNC_IMPL(__imp__sub_83B79258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26784
	ctx.r3.s64 = ctx.r11.s64 + 26784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79264"))) PPC_WEAK_FUNC(sub_83B79264);
PPC_FUNC_IMPL(__imp__sub_83B79264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79268"))) PPC_WEAK_FUNC(sub_83B79268);
PPC_FUNC_IMPL(__imp__sub_83B79268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26792
	ctx.r3.s64 = ctx.r11.s64 + 26792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79274"))) PPC_WEAK_FUNC(sub_83B79274);
PPC_FUNC_IMPL(__imp__sub_83B79274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79278"))) PPC_WEAK_FUNC(sub_83B79278);
PPC_FUNC_IMPL(__imp__sub_83B79278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26800
	ctx.r3.s64 = ctx.r11.s64 + 26800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79284"))) PPC_WEAK_FUNC(sub_83B79284);
PPC_FUNC_IMPL(__imp__sub_83B79284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79288"))) PPC_WEAK_FUNC(sub_83B79288);
PPC_FUNC_IMPL(__imp__sub_83B79288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26808
	ctx.r3.s64 = ctx.r11.s64 + 26808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79294"))) PPC_WEAK_FUNC(sub_83B79294);
PPC_FUNC_IMPL(__imp__sub_83B79294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79298"))) PPC_WEAK_FUNC(sub_83B79298);
PPC_FUNC_IMPL(__imp__sub_83B79298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26816
	ctx.r3.s64 = ctx.r11.s64 + 26816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B792A4"))) PPC_WEAK_FUNC(sub_83B792A4);
PPC_FUNC_IMPL(__imp__sub_83B792A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B792A8"))) PPC_WEAK_FUNC(sub_83B792A8);
PPC_FUNC_IMPL(__imp__sub_83B792A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26824
	ctx.r3.s64 = ctx.r11.s64 + 26824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B792B4"))) PPC_WEAK_FUNC(sub_83B792B4);
PPC_FUNC_IMPL(__imp__sub_83B792B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B792B8"))) PPC_WEAK_FUNC(sub_83B792B8);
PPC_FUNC_IMPL(__imp__sub_83B792B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26832
	ctx.r3.s64 = ctx.r11.s64 + 26832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B792C4"))) PPC_WEAK_FUNC(sub_83B792C4);
PPC_FUNC_IMPL(__imp__sub_83B792C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B792C8"))) PPC_WEAK_FUNC(sub_83B792C8);
PPC_FUNC_IMPL(__imp__sub_83B792C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26840
	ctx.r3.s64 = ctx.r11.s64 + 26840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B792D4"))) PPC_WEAK_FUNC(sub_83B792D4);
PPC_FUNC_IMPL(__imp__sub_83B792D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B792D8"))) PPC_WEAK_FUNC(sub_83B792D8);
PPC_FUNC_IMPL(__imp__sub_83B792D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26848
	ctx.r3.s64 = ctx.r11.s64 + 26848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B792E4"))) PPC_WEAK_FUNC(sub_83B792E4);
PPC_FUNC_IMPL(__imp__sub_83B792E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B792E8"))) PPC_WEAK_FUNC(sub_83B792E8);
PPC_FUNC_IMPL(__imp__sub_83B792E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26856
	ctx.r3.s64 = ctx.r11.s64 + 26856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B792F4"))) PPC_WEAK_FUNC(sub_83B792F4);
PPC_FUNC_IMPL(__imp__sub_83B792F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B792F8"))) PPC_WEAK_FUNC(sub_83B792F8);
PPC_FUNC_IMPL(__imp__sub_83B792F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26864
	ctx.r3.s64 = ctx.r11.s64 + 26864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79304"))) PPC_WEAK_FUNC(sub_83B79304);
PPC_FUNC_IMPL(__imp__sub_83B79304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79308"))) PPC_WEAK_FUNC(sub_83B79308);
PPC_FUNC_IMPL(__imp__sub_83B79308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26872
	ctx.r3.s64 = ctx.r11.s64 + 26872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79314"))) PPC_WEAK_FUNC(sub_83B79314);
PPC_FUNC_IMPL(__imp__sub_83B79314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79318"))) PPC_WEAK_FUNC(sub_83B79318);
PPC_FUNC_IMPL(__imp__sub_83B79318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26880
	ctx.r3.s64 = ctx.r11.s64 + 26880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79324"))) PPC_WEAK_FUNC(sub_83B79324);
PPC_FUNC_IMPL(__imp__sub_83B79324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79328"))) PPC_WEAK_FUNC(sub_83B79328);
PPC_FUNC_IMPL(__imp__sub_83B79328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26888
	ctx.r3.s64 = ctx.r11.s64 + 26888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79334"))) PPC_WEAK_FUNC(sub_83B79334);
PPC_FUNC_IMPL(__imp__sub_83B79334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79338"))) PPC_WEAK_FUNC(sub_83B79338);
PPC_FUNC_IMPL(__imp__sub_83B79338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26896
	ctx.r3.s64 = ctx.r11.s64 + 26896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79344"))) PPC_WEAK_FUNC(sub_83B79344);
PPC_FUNC_IMPL(__imp__sub_83B79344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79348"))) PPC_WEAK_FUNC(sub_83B79348);
PPC_FUNC_IMPL(__imp__sub_83B79348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26904
	ctx.r3.s64 = ctx.r11.s64 + 26904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79354"))) PPC_WEAK_FUNC(sub_83B79354);
PPC_FUNC_IMPL(__imp__sub_83B79354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79358"))) PPC_WEAK_FUNC(sub_83B79358);
PPC_FUNC_IMPL(__imp__sub_83B79358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26912
	ctx.r3.s64 = ctx.r11.s64 + 26912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79364"))) PPC_WEAK_FUNC(sub_83B79364);
PPC_FUNC_IMPL(__imp__sub_83B79364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79368"))) PPC_WEAK_FUNC(sub_83B79368);
PPC_FUNC_IMPL(__imp__sub_83B79368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26920
	ctx.r3.s64 = ctx.r11.s64 + 26920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79374"))) PPC_WEAK_FUNC(sub_83B79374);
PPC_FUNC_IMPL(__imp__sub_83B79374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79378"))) PPC_WEAK_FUNC(sub_83B79378);
PPC_FUNC_IMPL(__imp__sub_83B79378) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14716
	ctx.r7.s64 = ctx.r8.s64 + -14716;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14716(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14716);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14716, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B793A0"))) PPC_WEAK_FUNC(sub_83B793A0);
PPC_FUNC_IMPL(__imp__sub_83B793A0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14720
	ctx.r3.s64 = ctx.r11.s64 + -14720;
	// bl 0x83523120
	ctx.lr = 0x83B793B8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,26928
	ctx.r3.s64 = ctx.r10.s64 + 26928;
	// bl 0x831cdcc8
	ctx.lr = 0x83B793C4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B793D4"))) PPC_WEAK_FUNC(sub_83B793D4);
PPC_FUNC_IMPL(__imp__sub_83B793D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B793D8"))) PPC_WEAK_FUNC(sub_83B793D8);
PPC_FUNC_IMPL(__imp__sub_83B793D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26944
	ctx.r3.s64 = ctx.r11.s64 + 26944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B793E4"))) PPC_WEAK_FUNC(sub_83B793E4);
PPC_FUNC_IMPL(__imp__sub_83B793E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B793E8"))) PPC_WEAK_FUNC(sub_83B793E8);
PPC_FUNC_IMPL(__imp__sub_83B793E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26952
	ctx.r3.s64 = ctx.r11.s64 + 26952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B793F4"))) PPC_WEAK_FUNC(sub_83B793F4);
PPC_FUNC_IMPL(__imp__sub_83B793F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B793F8"))) PPC_WEAK_FUNC(sub_83B793F8);
PPC_FUNC_IMPL(__imp__sub_83B793F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26960
	ctx.r3.s64 = ctx.r11.s64 + 26960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79404"))) PPC_WEAK_FUNC(sub_83B79404);
PPC_FUNC_IMPL(__imp__sub_83B79404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79408"))) PPC_WEAK_FUNC(sub_83B79408);
PPC_FUNC_IMPL(__imp__sub_83B79408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26968
	ctx.r3.s64 = ctx.r11.s64 + 26968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79414"))) PPC_WEAK_FUNC(sub_83B79414);
PPC_FUNC_IMPL(__imp__sub_83B79414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79418"))) PPC_WEAK_FUNC(sub_83B79418);
PPC_FUNC_IMPL(__imp__sub_83B79418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26976
	ctx.r3.s64 = ctx.r11.s64 + 26976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79424"))) PPC_WEAK_FUNC(sub_83B79424);
PPC_FUNC_IMPL(__imp__sub_83B79424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79428"))) PPC_WEAK_FUNC(sub_83B79428);
PPC_FUNC_IMPL(__imp__sub_83B79428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26984
	ctx.r3.s64 = ctx.r11.s64 + 26984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79434"))) PPC_WEAK_FUNC(sub_83B79434);
PPC_FUNC_IMPL(__imp__sub_83B79434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79438"))) PPC_WEAK_FUNC(sub_83B79438);
PPC_FUNC_IMPL(__imp__sub_83B79438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26992
	ctx.r3.s64 = ctx.r11.s64 + 26992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79444"))) PPC_WEAK_FUNC(sub_83B79444);
PPC_FUNC_IMPL(__imp__sub_83B79444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79448"))) PPC_WEAK_FUNC(sub_83B79448);
PPC_FUNC_IMPL(__imp__sub_83B79448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27000
	ctx.r3.s64 = ctx.r11.s64 + 27000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79454"))) PPC_WEAK_FUNC(sub_83B79454);
PPC_FUNC_IMPL(__imp__sub_83B79454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79458"))) PPC_WEAK_FUNC(sub_83B79458);
PPC_FUNC_IMPL(__imp__sub_83B79458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27008
	ctx.r3.s64 = ctx.r11.s64 + 27008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79464"))) PPC_WEAK_FUNC(sub_83B79464);
PPC_FUNC_IMPL(__imp__sub_83B79464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79468"))) PPC_WEAK_FUNC(sub_83B79468);
PPC_FUNC_IMPL(__imp__sub_83B79468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27016
	ctx.r3.s64 = ctx.r11.s64 + 27016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79474"))) PPC_WEAK_FUNC(sub_83B79474);
PPC_FUNC_IMPL(__imp__sub_83B79474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79478"))) PPC_WEAK_FUNC(sub_83B79478);
PPC_FUNC_IMPL(__imp__sub_83B79478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27024
	ctx.r3.s64 = ctx.r11.s64 + 27024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79484"))) PPC_WEAK_FUNC(sub_83B79484);
PPC_FUNC_IMPL(__imp__sub_83B79484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79488"))) PPC_WEAK_FUNC(sub_83B79488);
PPC_FUNC_IMPL(__imp__sub_83B79488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27032
	ctx.r3.s64 = ctx.r11.s64 + 27032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79494"))) PPC_WEAK_FUNC(sub_83B79494);
PPC_FUNC_IMPL(__imp__sub_83B79494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79498"))) PPC_WEAK_FUNC(sub_83B79498);
PPC_FUNC_IMPL(__imp__sub_83B79498) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14704
	ctx.r7.s64 = ctx.r8.s64 + -14704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B794C0"))) PPC_WEAK_FUNC(sub_83B794C0);
PPC_FUNC_IMPL(__imp__sub_83B794C0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14708
	ctx.r3.s64 = ctx.r11.s64 + -14708;
	// bl 0x83523120
	ctx.lr = 0x83B794D8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,27040
	ctx.r3.s64 = ctx.r10.s64 + 27040;
	// bl 0x831cdcc8
	ctx.lr = 0x83B794E4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B794F4"))) PPC_WEAK_FUNC(sub_83B794F4);
PPC_FUNC_IMPL(__imp__sub_83B794F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B794F8"))) PPC_WEAK_FUNC(sub_83B794F8);
PPC_FUNC_IMPL(__imp__sub_83B794F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27056
	ctx.r3.s64 = ctx.r11.s64 + 27056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79504"))) PPC_WEAK_FUNC(sub_83B79504);
PPC_FUNC_IMPL(__imp__sub_83B79504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79508"))) PPC_WEAK_FUNC(sub_83B79508);
PPC_FUNC_IMPL(__imp__sub_83B79508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27064
	ctx.r3.s64 = ctx.r11.s64 + 27064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79514"))) PPC_WEAK_FUNC(sub_83B79514);
PPC_FUNC_IMPL(__imp__sub_83B79514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79518"))) PPC_WEAK_FUNC(sub_83B79518);
PPC_FUNC_IMPL(__imp__sub_83B79518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27072
	ctx.r3.s64 = ctx.r11.s64 + 27072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79524"))) PPC_WEAK_FUNC(sub_83B79524);
PPC_FUNC_IMPL(__imp__sub_83B79524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79528"))) PPC_WEAK_FUNC(sub_83B79528);
PPC_FUNC_IMPL(__imp__sub_83B79528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27080
	ctx.r3.s64 = ctx.r11.s64 + 27080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79534"))) PPC_WEAK_FUNC(sub_83B79534);
PPC_FUNC_IMPL(__imp__sub_83B79534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79538"))) PPC_WEAK_FUNC(sub_83B79538);
PPC_FUNC_IMPL(__imp__sub_83B79538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27088
	ctx.r3.s64 = ctx.r11.s64 + 27088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79544"))) PPC_WEAK_FUNC(sub_83B79544);
PPC_FUNC_IMPL(__imp__sub_83B79544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79548"))) PPC_WEAK_FUNC(sub_83B79548);
PPC_FUNC_IMPL(__imp__sub_83B79548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27096
	ctx.r3.s64 = ctx.r11.s64 + 27096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79554"))) PPC_WEAK_FUNC(sub_83B79554);
PPC_FUNC_IMPL(__imp__sub_83B79554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79558"))) PPC_WEAK_FUNC(sub_83B79558);
PPC_FUNC_IMPL(__imp__sub_83B79558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79564"))) PPC_WEAK_FUNC(sub_83B79564);
PPC_FUNC_IMPL(__imp__sub_83B79564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79568"))) PPC_WEAK_FUNC(sub_83B79568);
PPC_FUNC_IMPL(__imp__sub_83B79568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27112
	ctx.r3.s64 = ctx.r11.s64 + 27112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79574"))) PPC_WEAK_FUNC(sub_83B79574);
PPC_FUNC_IMPL(__imp__sub_83B79574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79578"))) PPC_WEAK_FUNC(sub_83B79578);
PPC_FUNC_IMPL(__imp__sub_83B79578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27120
	ctx.r3.s64 = ctx.r11.s64 + 27120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79584"))) PPC_WEAK_FUNC(sub_83B79584);
PPC_FUNC_IMPL(__imp__sub_83B79584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79588"))) PPC_WEAK_FUNC(sub_83B79588);
PPC_FUNC_IMPL(__imp__sub_83B79588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27128
	ctx.r3.s64 = ctx.r11.s64 + 27128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79594"))) PPC_WEAK_FUNC(sub_83B79594);
PPC_FUNC_IMPL(__imp__sub_83B79594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79598"))) PPC_WEAK_FUNC(sub_83B79598);
PPC_FUNC_IMPL(__imp__sub_83B79598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B795A4"))) PPC_WEAK_FUNC(sub_83B795A4);
PPC_FUNC_IMPL(__imp__sub_83B795A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B795A8"))) PPC_WEAK_FUNC(sub_83B795A8);
PPC_FUNC_IMPL(__imp__sub_83B795A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27144
	ctx.r3.s64 = ctx.r11.s64 + 27144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B795B4"))) PPC_WEAK_FUNC(sub_83B795B4);
PPC_FUNC_IMPL(__imp__sub_83B795B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B795B8"))) PPC_WEAK_FUNC(sub_83B795B8);
PPC_FUNC_IMPL(__imp__sub_83B795B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14692
	ctx.r7.s64 = ctx.r8.s64 + -14692;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14692(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14692);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14692(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14692, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B795E0"))) PPC_WEAK_FUNC(sub_83B795E0);
PPC_FUNC_IMPL(__imp__sub_83B795E0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14696
	ctx.r3.s64 = ctx.r11.s64 + -14696;
	// bl 0x83523120
	ctx.lr = 0x83B795F8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,27152
	ctx.r3.s64 = ctx.r10.s64 + 27152;
	// bl 0x831cdcc8
	ctx.lr = 0x83B79604;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B79614"))) PPC_WEAK_FUNC(sub_83B79614);
PPC_FUNC_IMPL(__imp__sub_83B79614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79618"))) PPC_WEAK_FUNC(sub_83B79618);
PPC_FUNC_IMPL(__imp__sub_83B79618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27168
	ctx.r3.s64 = ctx.r11.s64 + 27168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79624"))) PPC_WEAK_FUNC(sub_83B79624);
PPC_FUNC_IMPL(__imp__sub_83B79624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79628"))) PPC_WEAK_FUNC(sub_83B79628);
PPC_FUNC_IMPL(__imp__sub_83B79628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27176
	ctx.r3.s64 = ctx.r11.s64 + 27176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79634"))) PPC_WEAK_FUNC(sub_83B79634);
PPC_FUNC_IMPL(__imp__sub_83B79634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79638"))) PPC_WEAK_FUNC(sub_83B79638);
PPC_FUNC_IMPL(__imp__sub_83B79638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27184
	ctx.r3.s64 = ctx.r11.s64 + 27184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79644"))) PPC_WEAK_FUNC(sub_83B79644);
PPC_FUNC_IMPL(__imp__sub_83B79644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79648"))) PPC_WEAK_FUNC(sub_83B79648);
PPC_FUNC_IMPL(__imp__sub_83B79648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27192
	ctx.r3.s64 = ctx.r11.s64 + 27192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79654"))) PPC_WEAK_FUNC(sub_83B79654);
PPC_FUNC_IMPL(__imp__sub_83B79654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79658"))) PPC_WEAK_FUNC(sub_83B79658);
PPC_FUNC_IMPL(__imp__sub_83B79658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27200
	ctx.r3.s64 = ctx.r11.s64 + 27200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79664"))) PPC_WEAK_FUNC(sub_83B79664);
PPC_FUNC_IMPL(__imp__sub_83B79664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79668"))) PPC_WEAK_FUNC(sub_83B79668);
PPC_FUNC_IMPL(__imp__sub_83B79668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27208
	ctx.r3.s64 = ctx.r11.s64 + 27208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79674"))) PPC_WEAK_FUNC(sub_83B79674);
PPC_FUNC_IMPL(__imp__sub_83B79674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79678"))) PPC_WEAK_FUNC(sub_83B79678);
PPC_FUNC_IMPL(__imp__sub_83B79678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27216
	ctx.r3.s64 = ctx.r11.s64 + 27216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79684"))) PPC_WEAK_FUNC(sub_83B79684);
PPC_FUNC_IMPL(__imp__sub_83B79684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79688"))) PPC_WEAK_FUNC(sub_83B79688);
PPC_FUNC_IMPL(__imp__sub_83B79688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27224
	ctx.r3.s64 = ctx.r11.s64 + 27224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79694"))) PPC_WEAK_FUNC(sub_83B79694);
PPC_FUNC_IMPL(__imp__sub_83B79694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79698"))) PPC_WEAK_FUNC(sub_83B79698);
PPC_FUNC_IMPL(__imp__sub_83B79698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B796A4"))) PPC_WEAK_FUNC(sub_83B796A4);
PPC_FUNC_IMPL(__imp__sub_83B796A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B796A8"))) PPC_WEAK_FUNC(sub_83B796A8);
PPC_FUNC_IMPL(__imp__sub_83B796A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27240
	ctx.r3.s64 = ctx.r11.s64 + 27240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B796B4"))) PPC_WEAK_FUNC(sub_83B796B4);
PPC_FUNC_IMPL(__imp__sub_83B796B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B796B8"))) PPC_WEAK_FUNC(sub_83B796B8);
PPC_FUNC_IMPL(__imp__sub_83B796B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27248
	ctx.r3.s64 = ctx.r11.s64 + 27248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B796C4"))) PPC_WEAK_FUNC(sub_83B796C4);
PPC_FUNC_IMPL(__imp__sub_83B796C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B796C8"))) PPC_WEAK_FUNC(sub_83B796C8);
PPC_FUNC_IMPL(__imp__sub_83B796C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27256
	ctx.r3.s64 = ctx.r11.s64 + 27256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B796D4"))) PPC_WEAK_FUNC(sub_83B796D4);
PPC_FUNC_IMPL(__imp__sub_83B796D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B796D8"))) PPC_WEAK_FUNC(sub_83B796D8);
PPC_FUNC_IMPL(__imp__sub_83B796D8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14684
	ctx.r3.s64 = ctx.r11.s64 + -14684;
	// bl 0x83523120
	ctx.lr = 0x83B796F0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,27264
	ctx.r3.s64 = ctx.r10.s64 + 27264;
	// bl 0x831cdcc8
	ctx.lr = 0x83B796FC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7970C"))) PPC_WEAK_FUNC(sub_83B7970C);
PPC_FUNC_IMPL(__imp__sub_83B7970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79710"))) PPC_WEAK_FUNC(sub_83B79710);
PPC_FUNC_IMPL(__imp__sub_83B79710) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14680
	ctx.r7.s64 = ctx.r8.s64 + -14680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14680(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14680);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14680(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14680, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B79738"))) PPC_WEAK_FUNC(sub_83B79738);
PPC_FUNC_IMPL(__imp__sub_83B79738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27280
	ctx.r3.s64 = ctx.r11.s64 + 27280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79744"))) PPC_WEAK_FUNC(sub_83B79744);
PPC_FUNC_IMPL(__imp__sub_83B79744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79748"))) PPC_WEAK_FUNC(sub_83B79748);
PPC_FUNC_IMPL(__imp__sub_83B79748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27288
	ctx.r3.s64 = ctx.r11.s64 + 27288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79754"))) PPC_WEAK_FUNC(sub_83B79754);
PPC_FUNC_IMPL(__imp__sub_83B79754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79758"))) PPC_WEAK_FUNC(sub_83B79758);
PPC_FUNC_IMPL(__imp__sub_83B79758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27296
	ctx.r3.s64 = ctx.r11.s64 + 27296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79764"))) PPC_WEAK_FUNC(sub_83B79764);
PPC_FUNC_IMPL(__imp__sub_83B79764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79768"))) PPC_WEAK_FUNC(sub_83B79768);
PPC_FUNC_IMPL(__imp__sub_83B79768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79774"))) PPC_WEAK_FUNC(sub_83B79774);
PPC_FUNC_IMPL(__imp__sub_83B79774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79778"))) PPC_WEAK_FUNC(sub_83B79778);
PPC_FUNC_IMPL(__imp__sub_83B79778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27312
	ctx.r3.s64 = ctx.r11.s64 + 27312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79784"))) PPC_WEAK_FUNC(sub_83B79784);
PPC_FUNC_IMPL(__imp__sub_83B79784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79788"))) PPC_WEAK_FUNC(sub_83B79788);
PPC_FUNC_IMPL(__imp__sub_83B79788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27320
	ctx.r3.s64 = ctx.r11.s64 + 27320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79794"))) PPC_WEAK_FUNC(sub_83B79794);
PPC_FUNC_IMPL(__imp__sub_83B79794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79798"))) PPC_WEAK_FUNC(sub_83B79798);
PPC_FUNC_IMPL(__imp__sub_83B79798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27328
	ctx.r3.s64 = ctx.r11.s64 + 27328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B797A4"))) PPC_WEAK_FUNC(sub_83B797A4);
PPC_FUNC_IMPL(__imp__sub_83B797A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B797A8"))) PPC_WEAK_FUNC(sub_83B797A8);
PPC_FUNC_IMPL(__imp__sub_83B797A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27336
	ctx.r3.s64 = ctx.r11.s64 + 27336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B797B4"))) PPC_WEAK_FUNC(sub_83B797B4);
PPC_FUNC_IMPL(__imp__sub_83B797B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B797B8"))) PPC_WEAK_FUNC(sub_83B797B8);
PPC_FUNC_IMPL(__imp__sub_83B797B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27344
	ctx.r3.s64 = ctx.r11.s64 + 27344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B797C4"))) PPC_WEAK_FUNC(sub_83B797C4);
PPC_FUNC_IMPL(__imp__sub_83B797C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B797C8"))) PPC_WEAK_FUNC(sub_83B797C8);
PPC_FUNC_IMPL(__imp__sub_83B797C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27352
	ctx.r3.s64 = ctx.r11.s64 + 27352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B797D4"))) PPC_WEAK_FUNC(sub_83B797D4);
PPC_FUNC_IMPL(__imp__sub_83B797D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B797D8"))) PPC_WEAK_FUNC(sub_83B797D8);
PPC_FUNC_IMPL(__imp__sub_83B797D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27360
	ctx.r3.s64 = ctx.r11.s64 + 27360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B797E4"))) PPC_WEAK_FUNC(sub_83B797E4);
PPC_FUNC_IMPL(__imp__sub_83B797E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B797E8"))) PPC_WEAK_FUNC(sub_83B797E8);
PPC_FUNC_IMPL(__imp__sub_83B797E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27368
	ctx.r3.s64 = ctx.r11.s64 + 27368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B797F4"))) PPC_WEAK_FUNC(sub_83B797F4);
PPC_FUNC_IMPL(__imp__sub_83B797F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B797F8"))) PPC_WEAK_FUNC(sub_83B797F8);
PPC_FUNC_IMPL(__imp__sub_83B797F8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14672
	ctx.r3.s64 = ctx.r11.s64 + -14672;
	// bl 0x83523120
	ctx.lr = 0x83B79810;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,27376
	ctx.r3.s64 = ctx.r10.s64 + 27376;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7981C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7982C"))) PPC_WEAK_FUNC(sub_83B7982C);
PPC_FUNC_IMPL(__imp__sub_83B7982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79830"))) PPC_WEAK_FUNC(sub_83B79830);
PPC_FUNC_IMPL(__imp__sub_83B79830) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14668
	ctx.r7.s64 = ctx.r8.s64 + -14668;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14668(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14668);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14668, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B79858"))) PPC_WEAK_FUNC(sub_83B79858);
PPC_FUNC_IMPL(__imp__sub_83B79858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27392
	ctx.r3.s64 = ctx.r11.s64 + 27392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79864"))) PPC_WEAK_FUNC(sub_83B79864);
PPC_FUNC_IMPL(__imp__sub_83B79864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79868"))) PPC_WEAK_FUNC(sub_83B79868);
PPC_FUNC_IMPL(__imp__sub_83B79868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27400
	ctx.r3.s64 = ctx.r11.s64 + 27400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79874"))) PPC_WEAK_FUNC(sub_83B79874);
PPC_FUNC_IMPL(__imp__sub_83B79874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79878"))) PPC_WEAK_FUNC(sub_83B79878);
PPC_FUNC_IMPL(__imp__sub_83B79878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27408
	ctx.r3.s64 = ctx.r11.s64 + 27408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79884"))) PPC_WEAK_FUNC(sub_83B79884);
PPC_FUNC_IMPL(__imp__sub_83B79884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79888"))) PPC_WEAK_FUNC(sub_83B79888);
PPC_FUNC_IMPL(__imp__sub_83B79888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27416
	ctx.r3.s64 = ctx.r11.s64 + 27416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79894"))) PPC_WEAK_FUNC(sub_83B79894);
PPC_FUNC_IMPL(__imp__sub_83B79894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79898"))) PPC_WEAK_FUNC(sub_83B79898);
PPC_FUNC_IMPL(__imp__sub_83B79898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27424
	ctx.r3.s64 = ctx.r11.s64 + 27424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B798A4"))) PPC_WEAK_FUNC(sub_83B798A4);
PPC_FUNC_IMPL(__imp__sub_83B798A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B798A8"))) PPC_WEAK_FUNC(sub_83B798A8);
PPC_FUNC_IMPL(__imp__sub_83B798A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27432
	ctx.r3.s64 = ctx.r11.s64 + 27432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B798B4"))) PPC_WEAK_FUNC(sub_83B798B4);
PPC_FUNC_IMPL(__imp__sub_83B798B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B798B8"))) PPC_WEAK_FUNC(sub_83B798B8);
PPC_FUNC_IMPL(__imp__sub_83B798B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27440
	ctx.r3.s64 = ctx.r11.s64 + 27440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B798C4"))) PPC_WEAK_FUNC(sub_83B798C4);
PPC_FUNC_IMPL(__imp__sub_83B798C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B798C8"))) PPC_WEAK_FUNC(sub_83B798C8);
PPC_FUNC_IMPL(__imp__sub_83B798C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27448
	ctx.r3.s64 = ctx.r11.s64 + 27448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B798D4"))) PPC_WEAK_FUNC(sub_83B798D4);
PPC_FUNC_IMPL(__imp__sub_83B798D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B798D8"))) PPC_WEAK_FUNC(sub_83B798D8);
PPC_FUNC_IMPL(__imp__sub_83B798D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27456
	ctx.r3.s64 = ctx.r11.s64 + 27456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B798E4"))) PPC_WEAK_FUNC(sub_83B798E4);
PPC_FUNC_IMPL(__imp__sub_83B798E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B798E8"))) PPC_WEAK_FUNC(sub_83B798E8);
PPC_FUNC_IMPL(__imp__sub_83B798E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27464
	ctx.r3.s64 = ctx.r11.s64 + 27464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B798F4"))) PPC_WEAK_FUNC(sub_83B798F4);
PPC_FUNC_IMPL(__imp__sub_83B798F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B798F8"))) PPC_WEAK_FUNC(sub_83B798F8);
PPC_FUNC_IMPL(__imp__sub_83B798F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27472
	ctx.r3.s64 = ctx.r11.s64 + 27472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79904"))) PPC_WEAK_FUNC(sub_83B79904);
PPC_FUNC_IMPL(__imp__sub_83B79904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79908"))) PPC_WEAK_FUNC(sub_83B79908);
PPC_FUNC_IMPL(__imp__sub_83B79908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27480
	ctx.r3.s64 = ctx.r11.s64 + 27480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79914"))) PPC_WEAK_FUNC(sub_83B79914);
PPC_FUNC_IMPL(__imp__sub_83B79914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79918"))) PPC_WEAK_FUNC(sub_83B79918);
PPC_FUNC_IMPL(__imp__sub_83B79918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27488
	ctx.r3.s64 = ctx.r11.s64 + 27488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79924"))) PPC_WEAK_FUNC(sub_83B79924);
PPC_FUNC_IMPL(__imp__sub_83B79924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79928"))) PPC_WEAK_FUNC(sub_83B79928);
PPC_FUNC_IMPL(__imp__sub_83B79928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27496
	ctx.r3.s64 = ctx.r11.s64 + 27496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79934"))) PPC_WEAK_FUNC(sub_83B79934);
PPC_FUNC_IMPL(__imp__sub_83B79934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79938"))) PPC_WEAK_FUNC(sub_83B79938);
PPC_FUNC_IMPL(__imp__sub_83B79938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27504
	ctx.r3.s64 = ctx.r11.s64 + 27504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79944"))) PPC_WEAK_FUNC(sub_83B79944);
PPC_FUNC_IMPL(__imp__sub_83B79944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79948"))) PPC_WEAK_FUNC(sub_83B79948);
PPC_FUNC_IMPL(__imp__sub_83B79948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27512
	ctx.r3.s64 = ctx.r11.s64 + 27512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79954"))) PPC_WEAK_FUNC(sub_83B79954);
PPC_FUNC_IMPL(__imp__sub_83B79954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79958"))) PPC_WEAK_FUNC(sub_83B79958);
PPC_FUNC_IMPL(__imp__sub_83B79958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27520
	ctx.r3.s64 = ctx.r11.s64 + 27520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79964"))) PPC_WEAK_FUNC(sub_83B79964);
PPC_FUNC_IMPL(__imp__sub_83B79964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79968"))) PPC_WEAK_FUNC(sub_83B79968);
PPC_FUNC_IMPL(__imp__sub_83B79968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27528
	ctx.r3.s64 = ctx.r11.s64 + 27528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79974"))) PPC_WEAK_FUNC(sub_83B79974);
PPC_FUNC_IMPL(__imp__sub_83B79974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79978"))) PPC_WEAK_FUNC(sub_83B79978);
PPC_FUNC_IMPL(__imp__sub_83B79978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27536
	ctx.r3.s64 = ctx.r11.s64 + 27536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79984"))) PPC_WEAK_FUNC(sub_83B79984);
PPC_FUNC_IMPL(__imp__sub_83B79984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79988"))) PPC_WEAK_FUNC(sub_83B79988);
PPC_FUNC_IMPL(__imp__sub_83B79988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27544
	ctx.r3.s64 = ctx.r11.s64 + 27544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79994"))) PPC_WEAK_FUNC(sub_83B79994);
PPC_FUNC_IMPL(__imp__sub_83B79994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79998"))) PPC_WEAK_FUNC(sub_83B79998);
PPC_FUNC_IMPL(__imp__sub_83B79998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27552
	ctx.r3.s64 = ctx.r11.s64 + 27552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B799A4"))) PPC_WEAK_FUNC(sub_83B799A4);
PPC_FUNC_IMPL(__imp__sub_83B799A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B799A8"))) PPC_WEAK_FUNC(sub_83B799A8);
PPC_FUNC_IMPL(__imp__sub_83B799A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27560
	ctx.r3.s64 = ctx.r11.s64 + 27560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B799B4"))) PPC_WEAK_FUNC(sub_83B799B4);
PPC_FUNC_IMPL(__imp__sub_83B799B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B799B8"))) PPC_WEAK_FUNC(sub_83B799B8);
PPC_FUNC_IMPL(__imp__sub_83B799B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B799C4"))) PPC_WEAK_FUNC(sub_83B799C4);
PPC_FUNC_IMPL(__imp__sub_83B799C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B799C8"))) PPC_WEAK_FUNC(sub_83B799C8);
PPC_FUNC_IMPL(__imp__sub_83B799C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27576
	ctx.r3.s64 = ctx.r11.s64 + 27576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B799D4"))) PPC_WEAK_FUNC(sub_83B799D4);
PPC_FUNC_IMPL(__imp__sub_83B799D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B799D8"))) PPC_WEAK_FUNC(sub_83B799D8);
PPC_FUNC_IMPL(__imp__sub_83B799D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14652
	ctx.r7.s64 = ctx.r8.s64 + -14652;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14652);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14652(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14652, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B79A00"))) PPC_WEAK_FUNC(sub_83B79A00);
PPC_FUNC_IMPL(__imp__sub_83B79A00) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14656
	ctx.r3.s64 = ctx.r11.s64 + -14656;
	// bl 0x83523120
	ctx.lr = 0x83B79A18;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,27584
	ctx.r3.s64 = ctx.r10.s64 + 27584;
	// bl 0x831cdcc8
	ctx.lr = 0x83B79A24;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B79A34"))) PPC_WEAK_FUNC(sub_83B79A34);
PPC_FUNC_IMPL(__imp__sub_83B79A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79A38"))) PPC_WEAK_FUNC(sub_83B79A38);
PPC_FUNC_IMPL(__imp__sub_83B79A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27600
	ctx.r3.s64 = ctx.r11.s64 + 27600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79A44"))) PPC_WEAK_FUNC(sub_83B79A44);
PPC_FUNC_IMPL(__imp__sub_83B79A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79A48"))) PPC_WEAK_FUNC(sub_83B79A48);
PPC_FUNC_IMPL(__imp__sub_83B79A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27608
	ctx.r3.s64 = ctx.r11.s64 + 27608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79A54"))) PPC_WEAK_FUNC(sub_83B79A54);
PPC_FUNC_IMPL(__imp__sub_83B79A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79A58"))) PPC_WEAK_FUNC(sub_83B79A58);
PPC_FUNC_IMPL(__imp__sub_83B79A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27616
	ctx.r3.s64 = ctx.r11.s64 + 27616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79A64"))) PPC_WEAK_FUNC(sub_83B79A64);
PPC_FUNC_IMPL(__imp__sub_83B79A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79A68"))) PPC_WEAK_FUNC(sub_83B79A68);
PPC_FUNC_IMPL(__imp__sub_83B79A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27624
	ctx.r3.s64 = ctx.r11.s64 + 27624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79A74"))) PPC_WEAK_FUNC(sub_83B79A74);
PPC_FUNC_IMPL(__imp__sub_83B79A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79A78"))) PPC_WEAK_FUNC(sub_83B79A78);
PPC_FUNC_IMPL(__imp__sub_83B79A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27632
	ctx.r3.s64 = ctx.r11.s64 + 27632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79A84"))) PPC_WEAK_FUNC(sub_83B79A84);
PPC_FUNC_IMPL(__imp__sub_83B79A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79A88"))) PPC_WEAK_FUNC(sub_83B79A88);
PPC_FUNC_IMPL(__imp__sub_83B79A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27640
	ctx.r3.s64 = ctx.r11.s64 + 27640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79A94"))) PPC_WEAK_FUNC(sub_83B79A94);
PPC_FUNC_IMPL(__imp__sub_83B79A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79A98"))) PPC_WEAK_FUNC(sub_83B79A98);
PPC_FUNC_IMPL(__imp__sub_83B79A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27648
	ctx.r3.s64 = ctx.r11.s64 + 27648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79AA4"))) PPC_WEAK_FUNC(sub_83B79AA4);
PPC_FUNC_IMPL(__imp__sub_83B79AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79AA8"))) PPC_WEAK_FUNC(sub_83B79AA8);
PPC_FUNC_IMPL(__imp__sub_83B79AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27656
	ctx.r3.s64 = ctx.r11.s64 + 27656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79AB4"))) PPC_WEAK_FUNC(sub_83B79AB4);
PPC_FUNC_IMPL(__imp__sub_83B79AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79AB8"))) PPC_WEAK_FUNC(sub_83B79AB8);
PPC_FUNC_IMPL(__imp__sub_83B79AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27664
	ctx.r3.s64 = ctx.r11.s64 + 27664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79AC4"))) PPC_WEAK_FUNC(sub_83B79AC4);
PPC_FUNC_IMPL(__imp__sub_83B79AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79AC8"))) PPC_WEAK_FUNC(sub_83B79AC8);
PPC_FUNC_IMPL(__imp__sub_83B79AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27672
	ctx.r3.s64 = ctx.r11.s64 + 27672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79AD4"))) PPC_WEAK_FUNC(sub_83B79AD4);
PPC_FUNC_IMPL(__imp__sub_83B79AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79AD8"))) PPC_WEAK_FUNC(sub_83B79AD8);
PPC_FUNC_IMPL(__imp__sub_83B79AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27680
	ctx.r3.s64 = ctx.r11.s64 + 27680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79AE4"))) PPC_WEAK_FUNC(sub_83B79AE4);
PPC_FUNC_IMPL(__imp__sub_83B79AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79AE8"))) PPC_WEAK_FUNC(sub_83B79AE8);
PPC_FUNC_IMPL(__imp__sub_83B79AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27688
	ctx.r3.s64 = ctx.r11.s64 + 27688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79AF4"))) PPC_WEAK_FUNC(sub_83B79AF4);
PPC_FUNC_IMPL(__imp__sub_83B79AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79AF8"))) PPC_WEAK_FUNC(sub_83B79AF8);
PPC_FUNC_IMPL(__imp__sub_83B79AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14640
	ctx.r7.s64 = ctx.r8.s64 + -14640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14640(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B79B20"))) PPC_WEAK_FUNC(sub_83B79B20);
PPC_FUNC_IMPL(__imp__sub_83B79B20) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14644
	ctx.r3.s64 = ctx.r11.s64 + -14644;
	// bl 0x83523120
	ctx.lr = 0x83B79B38;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,27696
	ctx.r3.s64 = ctx.r10.s64 + 27696;
	// bl 0x831cdcc8
	ctx.lr = 0x83B79B44;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B79B54"))) PPC_WEAK_FUNC(sub_83B79B54);
PPC_FUNC_IMPL(__imp__sub_83B79B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79B58"))) PPC_WEAK_FUNC(sub_83B79B58);
PPC_FUNC_IMPL(__imp__sub_83B79B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27712
	ctx.r3.s64 = ctx.r11.s64 + 27712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79B64"))) PPC_WEAK_FUNC(sub_83B79B64);
PPC_FUNC_IMPL(__imp__sub_83B79B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79B68"))) PPC_WEAK_FUNC(sub_83B79B68);
PPC_FUNC_IMPL(__imp__sub_83B79B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27720
	ctx.r3.s64 = ctx.r11.s64 + 27720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79B74"))) PPC_WEAK_FUNC(sub_83B79B74);
PPC_FUNC_IMPL(__imp__sub_83B79B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79B78"))) PPC_WEAK_FUNC(sub_83B79B78);
PPC_FUNC_IMPL(__imp__sub_83B79B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27728
	ctx.r3.s64 = ctx.r11.s64 + 27728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79B84"))) PPC_WEAK_FUNC(sub_83B79B84);
PPC_FUNC_IMPL(__imp__sub_83B79B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79B88"))) PPC_WEAK_FUNC(sub_83B79B88);
PPC_FUNC_IMPL(__imp__sub_83B79B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27736
	ctx.r3.s64 = ctx.r11.s64 + 27736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79B94"))) PPC_WEAK_FUNC(sub_83B79B94);
PPC_FUNC_IMPL(__imp__sub_83B79B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79B98"))) PPC_WEAK_FUNC(sub_83B79B98);
PPC_FUNC_IMPL(__imp__sub_83B79B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27744
	ctx.r3.s64 = ctx.r11.s64 + 27744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79BA4"))) PPC_WEAK_FUNC(sub_83B79BA4);
PPC_FUNC_IMPL(__imp__sub_83B79BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79BA8"))) PPC_WEAK_FUNC(sub_83B79BA8);
PPC_FUNC_IMPL(__imp__sub_83B79BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27752
	ctx.r3.s64 = ctx.r11.s64 + 27752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B79BB4"))) PPC_WEAK_FUNC(sub_83B79BB4);
PPC_FUNC_IMPL(__imp__sub_83B79BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B79BB8"))) PPC_WEAK_FUNC(sub_83B79BB8);
PPC_FUNC_IMPL(__imp__sub_83B79BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,27760
	ctx.r3.s64 = ctx.r11.s64 + 27760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

