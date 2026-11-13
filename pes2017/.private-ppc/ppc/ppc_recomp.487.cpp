#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_839DB1E0"))) PPC_WEAK_FUNC(sub_839DB1E0);
PPC_FUNC_IMPL(__imp__sub_839DB1E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x833c8db0
	ctx.lr = 0x839DB208;
	sub_833C8DB0(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB20C;
	sub_8378B870(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839db248
	if (cr6.eq) goto loc_839DB248;
	// bl 0x8378b870
	ctx.lr = 0x839DB220;
	sub_8378B870(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8378a8c8
	ctx.lr = 0x839DB238;
	sub_8378A8C8(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB23C;
	sub_8378B870(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8378a710
	ctx.lr = 0x839DB248;
	sub_8378A710(ctx, base);
loc_839DB248:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r10.u8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stb r11,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r11.u8);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_839DB2AC"))) PPC_WEAK_FUNC(sub_839DB2AC);
PPC_FUNC_IMPL(__imp__sub_839DB2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DB2B0"))) PPC_WEAK_FUNC(sub_839DB2B0);
PPC_FUNC_IMPL(__imp__sub_839DB2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-29628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29628);
	ctx.f0.f64 = double(temp.f32);
	// li r6,255
	ctx.r6.s64 = 255;
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lfs f12,-23844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23844);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,-9980(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -9980);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DB2F8"))) PPC_WEAK_FUNC(sub_839DB2F8);
PPC_FUNC_IMPL(__imp__sub_839DB2F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x833c8db0
	ctx.lr = 0x839DB320;
	sub_833C8DB0(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB324;
	sub_8378B870(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839db360
	if (cr6.eq) goto loc_839DB360;
	// bl 0x8378b870
	ctx.lr = 0x839DB338;
	sub_8378B870(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8378a8c8
	ctx.lr = 0x839DB350;
	sub_8378A8C8(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB354;
	sub_8378B870(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8378a710
	ctx.lr = 0x839DB360;
	sub_8378A710(ctx, base);
loc_839DB360:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,32
	ctx.r8.s64 = 32;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r10,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r10.u8);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// lfs f0,-24912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,9796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9796);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r11,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r11.u8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x837a4b98
	ctx.lr = 0x839DB3D0;
	sub_837A4B98(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r5,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_839DB3F4"))) PPC_WEAK_FUNC(sub_839DB3F4);
PPC_FUNC_IMPL(__imp__sub_839DB3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DB3F8"))) PPC_WEAK_FUNC(sub_839DB3F8);
PPC_FUNC_IMPL(__imp__sub_839DB3F8) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vspltw128 v61,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltw128 v60,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// bl 0x833c8db0
	ctx.lr = 0x839DB45C;
	sub_833C8DB0(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB460;
	sub_8378B870(ctx, base);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-26260(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839db49c
	if (cr6.eq) goto loc_839DB49C;
	// bl 0x8378b870
	ctx.lr = 0x839DB474;
	sub_8378B870(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8378a8c8
	ctx.lr = 0x839DB48C;
	sub_8378A8C8(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB490;
	sub_8378B870(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8378a710
	ctx.lr = 0x839DB49C;
	sub_8378A710(ctx, base);
loc_839DB49C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r10.u8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v59,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stb r11,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r11.u8);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_839DB4F4"))) PPC_WEAK_FUNC(sub_839DB4F4);
PPC_FUNC_IMPL(__imp__sub_839DB4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DB4F8"))) PPC_WEAK_FUNC(sub_839DB4F8);
PPC_FUNC_IMPL(__imp__sub_839DB4F8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f30,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f31,64(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f31,68(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// bl 0x833c8db0
	ctx.lr = 0x839DB57C;
	sub_833C8DB0(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB580;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839db5a4
	if (cr6.eq) goto loc_839DB5A4;
	// bl 0x8378b870
	ctx.lr = 0x839DB58C;
	sub_8378B870(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8378a8c8
	ctx.lr = 0x839DB5A4;
	sub_8378A8C8(ctx, base);
loc_839DB5A4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r8,-3841
	ctx.r8.s64 = -251723776;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r31,90(r30)
	PPC_STORE_U8(ctx.r30.u32 + 90, ctx.r31.u8);
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// stb r31,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r31.u8);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stvx128 v63,r30,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r11,120(r30)
	PPC_STORE_U8(ctx.r30.u32 + 120, ctx.r11.u8);
	// stb r11,121(r30)
	PPC_STORE_U8(ctx.r30.u32 + 121, ctx.r11.u8);
	// bl 0x8378b870
	ctx.lr = 0x839DB60C;
	sub_8378B870(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8378a1f0
	ctx.lr = 0x839DB614;
	sub_8378A1F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_839DB634"))) PPC_WEAK_FUNC(sub_839DB634);
PPC_FUNC_IMPL(__imp__sub_839DB634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DB638"))) PPC_WEAK_FUNC(sub_839DB638);
PPC_FUNC_IMPL(__imp__sub_839DB638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839DB640;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r26,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bne cr6,0x839db6bc
	if (!cr6.eq) goto loc_839DB6BC;
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// bgt cr6,0x839db6ac
	if (cr6.gt) goto loc_839DB6AC;
	// beq cr6,0x839db69c
	if (cr6.eq) goto loc_839DB69C;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x839db6bc
	if (cr6.lt) goto loc_839DB6BC;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x839db6bc
	if (cr6.gt) goto loc_839DB6BC;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r27,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r27.u32);
	// b 0x839db6bc
	goto loc_839DB6BC;
loc_839DB69C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r11,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r11.u32);
	// b 0x839db6bc
	goto loc_839DB6BC;
loc_839DB6AC:
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// bne cr6,0x839db6bc
	if (!cr6.eq) goto loc_839DB6BC;
	// li r11,13
	ctx.r11.s64 = 13;
	// stb r11,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r11.u8);
loc_839DB6BC:
	// lbz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// bl 0x828e4280
	ctx.lr = 0x839DB6C4;
	sub_828E4280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x833c8db0
	ctx.lr = 0x839DB6D0;
	sub_833C8DB0(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB6D4;
	sub_8378B870(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839db710
	if (cr6.eq) goto loc_839DB710;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8378a8c8
	ctx.lr = 0x839DB700;
	sub_8378A8C8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8378a710
	ctx.lr = 0x839DB710;
	sub_8378A710(ctx, base);
loc_839DB710:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r26,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r26.u8);
	// li r9,32
	ctx.r9.s64 = 32;
	// stb r26,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r26.u8);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r27,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r27.u8);
	// beq cr6,0x839db754
	if (cr6.eq) goto loc_839DB754;
	// stb r27,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r27.u8);
	// b 0x839db758
	goto loc_839DB758;
loc_839DB754:
	// stb r27,119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 119, ctx.r27.u8);
loc_839DB758:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839db788
	if (cr6.eq) goto loc_839DB788;
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x839db788
	if (!cr6.gt) goto loc_839DB788;
	// stb r27,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r27.u8);
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f13,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f12,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,164(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
loc_839DB788:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stb r27,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r27.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f0,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f0,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lbz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x839db7c4
	if (cr6.gt) goto loc_839DB7C4;
	// beq cr6,0x839db7d4
	if (cr6.eq) goto loc_839DB7D4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x839db7d4
	if (cr6.eq) goto loc_839DB7D4;
	// b 0x839db7d8
	goto loc_839DB7D8;
loc_839DB7C4:
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// blt cr6,0x839db7d8
	if (cr6.lt) goto loc_839DB7D8;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// bgt cr6,0x839db7d8
	if (cr6.gt) goto loc_839DB7D8;
loc_839DB7D4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_839DB7D8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x839db7e8
	if (cr6.eq) goto loc_839DB7E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8378bcd8
	ctx.lr = 0x839DB7E8;
	sub_8378BCD8(ctx, base);
loc_839DB7E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DB7F4"))) PPC_WEAK_FUNC(sub_839DB7F4);
PPC_FUNC_IMPL(__imp__sub_839DB7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DB7F8"))) PPC_WEAK_FUNC(sub_839DB7F8);
PPC_FUNC_IMPL(__imp__sub_839DB7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ld r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x828e4fd0
	sub_828E4FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DB80C"))) PPC_WEAK_FUNC(sub_839DB80C);
PPC_FUNC_IMPL(__imp__sub_839DB80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DB810"))) PPC_WEAK_FUNC(sub_839DB810);
PPC_FUNC_IMPL(__imp__sub_839DB810) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DB818"))) PPC_WEAK_FUNC(sub_839DB818);
PPC_FUNC_IMPL(__imp__sub_839DB818) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x833c8db0
	ctx.lr = 0x839DB848;
	sub_833C8DB0(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DB84C;
	sub_8378B870(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839db878
	if (cr6.eq) goto loc_839DB878;
	// bl 0x8378b870
	ctx.lr = 0x839DB860;
	sub_8378B870(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8378a8c8
	ctx.lr = 0x839DB878;
	sub_8378A8C8(ctx, base);
loc_839DB878:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r30,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r30.u8);
	// li r8,32
	ctx.r8.s64 = 32;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_839DB8CC"))) PPC_WEAK_FUNC(sub_839DB8CC);
PPC_FUNC_IMPL(__imp__sub_839DB8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DB8D0"))) PPC_WEAK_FUNC(sub_839DB8D0);
PPC_FUNC_IMPL(__imp__sub_839DB8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839DB8D8;
	__savegprlr_28(ctx, base);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x839dba14
	if (!cr6.lt) goto loc_839DBA14;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// stb r10,88(r4)
	PPC_STORE_U8(ctx.r4.u32 + 88, ctx.r10.u8);
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// lfs f0,-27732(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,116(r4)
	PPC_STORE_U8(ctx.r4.u32 + 116, ctx.r10.u8);
	// lfs f13,25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25600);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stfs f13,72(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lfs f0,1188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	ctx.f0.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lfs f13,1192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	ctx.f13.f64 = double(temp.f32);
	// li r8,48
	ctx.r8.s64 = 48;
	// lfs f12,1184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	ctx.f12.f64 = double(temp.f32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// vupkd3d128 v7,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v7 = vTemp;
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// addi r31,r31,22672
	ctx.r31.s64 = ctx.r31.s64 + 22672;
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
	// lfs f11,1200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-64(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f11,-60(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f10,-56(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r4,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,1176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,-64(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f8,-60(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f7,-56(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-7352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f5,1208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	ctx.f5.f64 = double(temp.f32);
	// stb r10,90(r4)
	PPC_STORE_U8(ctx.r4.u32 + 90, ctx.r10.u8);
	// lfs f0,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,25596(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 25596);
	ctx.f12.f64 = double(temp.f32);
	// stfs f5,64(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// vsubfp128 v59,v60,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stfs f0,104(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// stfs f12,96(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// vmsum3fp128 v13,v59,v59
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v59.f32), 0xEF));
	// vrsqrtefp v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v13.f32))));
	// vcmpeqfp128 v58,v13,v0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v12,v13,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v57,v12,v0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v11,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v12,v11,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v8,v58,v57
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmaddfp v0,v9,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vsel v12,v0,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vspltw128 v56,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// stvx128 v56,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f4,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,92(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
loc_839DBA14:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DBA18"))) PPC_WEAK_FUNC(sub_839DBA18);
PPC_FUNC_IMPL(__imp__sub_839DBA18) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,23300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,23296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23296);
	ctx.f11.f64 = double(temp.f32);
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// lfs f12,23292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23292);
	ctx.f12.f64 = double(temp.f32);
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// lfs f3,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x839dba8c
	if (!cr6.gt) goto loc_839DBA8C;
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,23288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23288);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f3
	cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// ble cr6,0x839dba70
	if (!cr6.gt) goto loc_839DBA70;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// b 0x839dba74
	goto loc_839DBA74;
loc_839DBA70:
	// fmr f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f3.f64;
loc_839DBA74:
	// fsubs f0,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f3
	cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// ble cr6,0x839dba88
	if (!cr6.gt) goto loc_839DBA88;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// b 0x839dba8c
	goto loc_839DBA8C;
loc_839DBA88:
	// fmr f5,f3
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f3.f64;
loc_839DBA8C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f4,f9
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fsel f12,f0,f9,f10
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f12,f7
	ctx.f12.f64 = double(float(ctx.f7.f64));
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f13
	cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// blt cr6,0x839dbaec
	if (cr6.lt) goto loc_839DBAEC;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_839DBAEC:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fsel f12,f0,f9,f10
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f12,f7
	ctx.f12.f64 = double(float(ctx.f7.f64));
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f13
	cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// blt cr6,0x839dbb3c
	if (cr6.lt) goto loc_839DBB3C;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_839DBB3C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f4
	cr6.compare(ctx.f13.f64, ctx.f4.f64);
	// bgt cr6,0x839dbb5c
	if (cr6.gt) goto loc_839DBB5C;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f5
	cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// blelr cr6
	if (!cr6.gt) return;
loc_839DBB5C:
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f1,f2
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,21708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f7,-23028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23028);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f3
	cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bne cr6,0x839dbb9c
	if (!cr6.eq) goto loc_839DBB9C;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
loc_839DBB9C:
	// fcmpu cr6,f13,f3
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// bne cr6,0x839dbba8
	if (!cr6.eq) goto loc_839DBBA8;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
loc_839DBBA8:
	// fsel f7,f13,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fsel f1,f0,f9,f10
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fdivs f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// fmsubs f11,f7,f5,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 - ctx.f11.f64));
	// fmsubs f10,f1,f4,f6
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 - ctx.f6.f64));
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fabs f4,f7
	ctx.f4.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f1,f5
	ctx.f1.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f4,f1
	cr6.compare(ctx.f4.f64, ctx.f1.f64);
	// ble cr6,0x839dbbdc
	if (!cr6.gt) goto loc_839DBBDC;
	// fdivs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// b 0x839dbbe0
	goto loc_839DBBE0;
loc_839DBBDC:
	// fmuls f11,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_839DBBE0:
	// fmuls f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f11,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f6,f12,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsubs f0,f4,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x839dbc34
	if (cr6.gt) goto loc_839DBC34;
	// fsel f11,f0,f0,f3
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
loc_839DBC34:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f9,f11,f2,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DBC58"))) PPC_WEAK_FUNC(sub_839DBC58);
PPC_FUNC_IMPL(__imp__sub_839DBC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839DBC60;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce774
	ctx.lr = 0x839DBC68;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dbcb0
	if (cr6.eq) goto loc_839DBCB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x839DBCAC;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839DBCB0:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dbcec
	if (cr6.eq) goto loc_839DBCEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,19084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19084);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,4(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// b 0x839dbf34
	goto loc_839DBF34;
loc_839DBCEC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,21712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21712);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839dbd14
	if (!cr6.gt) goto loc_839DBD14;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x839dbd18
	goto loc_839DBD18;
loc_839DBD14:
	// stfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_839DBD18:
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32254
	ctx.r30.s64 = -2113798144;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f9,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lfs f0,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r31,r11,23356
	ctx.r31.s64 = ctx.r11.s64 + 23356;
	// lfs f0,-11300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -11300);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r10,23324
	ctx.r30.s64 = ctx.r10.s64 + 23324;
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r29,r9,23340
	ctx.r29.s64 = ctx.r9.s64 + 23340;
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// addi r28,r5,23308
	ctx.r28.s64 = ctx.r5.s64 + 23308;
	// stfs f2,4(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// fdivs f11,f8,f5
	ctx.f11.f64 = double(float(ctx.f8.f64 / ctx.f5.f64));
	// lfs f29,9008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// fmuls f6,f2,f5
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f3,f0,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f3,8(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fabs f11,f6
	ctx.f11.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fabs f10,f3
	ctx.f10.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fmuls f9,f4,f6
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fdivs f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
	// fsubs f28,f3,f13
	ctx.f28.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fdivs f27,f10,f12
	ctx.f27.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fcmpu cr6,f9,f29
	cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// ble cr6,0x839dbe30
	if (!cr6.gt) goto loc_839DBE30;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828dcad8
	ctx.lr = 0x839DBE28;
	sub_828DCAD8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x839dbe3c
	goto loc_839DBE3C;
loc_839DBE30:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828dcad8
	ctx.lr = 0x839DBE38;
	sub_828DCAD8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_839DBE3C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x828dcad8
	ctx.lr = 0x839DBE4C;
	sub_828DCAD8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f0,f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f4,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f2.f64 = double(temp.f32);
	// fsel f11,f6,f4,f2
	ctx.f11.f64 = ctx.f6.f64 >= 0.0 ? ctx.f4.f64 : ctx.f2.f64;
	// lfs f31,23304(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23304);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f5,f31
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f30,-11336(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -11336);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f5,f30
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f10,f11,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmadds f0,f10,f1,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839dbe94
	if (!cr6.gt) goto loc_839DBE94;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x839dbea0
	goto loc_839DBEA0;
loc_839DBE94:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x839dbea0
	if (!cr6.lt) goto loc_839DBEA0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_839DBEA0:
	// fmuls f13,f28,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f3.f64));
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x839dbed0
	if (!cr6.gt) goto loc_839DBED0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828dcad8
	ctx.lr = 0x839DBEC8;
	sub_828DCAD8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x839dbedc
	goto loc_839DBEDC;
loc_839DBED0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828dcad8
	ctx.lr = 0x839DBED8;
	sub_828DCAD8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_839DBEDC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmr f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x828dcad8
	ctx.lr = 0x839DBEEC;
	sub_828DCAD8(ctx, base);
	// fsel f0,f3,f4,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : ctx.f2.f64;
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f28,f6
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// fmuls f13,f11,f31
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// fmuls f12,f11,f30
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f0,f8,f1,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839dbf1c
	if (!cr6.gt) goto loc_839DBF1C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x839dbf28
	goto loc_839DBF28;
loc_839DBF1C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x839dbf28
	if (!cr6.lt) goto loc_839DBF28;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_839DBF28:
	// lfs f13,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
loc_839DBF34:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x839dbf6c
	if (cr6.gt) goto loc_839DBF6C;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x839dbf68
	if (!cr6.lt) goto loc_839DBF68;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x839dbf6c
	goto loc_839DBF6C;
loc_839DBF68:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_839DBF6C:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fsubs f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839dbf9c
	if (!cr6.gt) goto loc_839DBF9C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x839dbfa8
	goto loc_839DBFA8;
loc_839DBF9C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x839dbfa8
	if (!cr6.lt) goto loc_839DBFA8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_839DBFA8:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,-27216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27216);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmadds f0,f10,f0,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839dbff0
	if (!cr6.gt) goto loc_839DBFF0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x839DBFEC;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839DBFF0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x839dbffc
	if (!cr6.lt) goto loc_839DBFFC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_839DBFFC:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x839DC00C;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DC010"))) PPC_WEAK_FUNC(sub_839DC010);
PPC_FUNC_IMPL(__imp__sub_839DC010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839DC018;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce774
	ctx.lr = 0x839DC020;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x839DC03C;
	sub_8353B168(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f28,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x839dc0b8
	if (cr6.eq) goto loc_839DC0B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc0b8
	if (cr6.eq) goto loc_839DC0B8;
	// bl 0x82a52b70
	ctx.lr = 0x839DC078;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839dc0b8
	if (!cr6.eq) goto loc_839DC0B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC098;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// beq cr6,0x839dc0b8
	if (cr6.eq) goto loc_839DC0B8;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lfs f0,21932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21932);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f1,f0,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_839DC0B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f30,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x839dc1e8
	if (cr6.eq) goto loc_839DC1E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC0E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc11c
	if (cr6.eq) goto loc_839DC11C;
	// bl 0x82a52b70
	ctx.lr = 0x839DC0F8;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839dc11c
	if (!cr6.eq) goto loc_839DC11C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_839DC11C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC130;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc178
	if (cr6.eq) goto loc_839DC178;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc178
	if (cr6.eq) goto loc_839DC178;
	// bl 0x82a52b70
	ctx.lr = 0x839DC164;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839dc178
	if (!cr6.eq) goto loc_839DC178;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f31.f64 = double(temp.f32);
	// b 0x839dc1d8
	goto loc_839DC1D8;
loc_839DC178:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC18C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc1d0
	if (cr6.eq) goto loc_839DC1D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC1B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc1d0
	if (cr6.eq) goto loc_839DC1D0;
	// bl 0x82a52b70
	ctx.lr = 0x839DC1C0;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839dc1d0
	if (!cr6.eq) goto loc_839DC1D0;
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f27.f64;
	// b 0x839dc1d8
	goto loc_839DC1D8;
loc_839DC1D0:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// beq cr6,0x839dc1e8
	if (cr6.eq) goto loc_839DC1E8;
loc_839DC1D8:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// fmadds f13,f31,f30,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f0.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_839DC1E8:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,23096
	ctx.r11.s64 = ctx.r11.s64 + 23096;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x839dc210
	if (cr6.gt) goto loc_839DC210;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x839dc210
	if (cr6.lt) goto loc_839DC210;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_839DC210:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f29,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,-27732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// stfs f13,72(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x839dc248
	if (!cr6.eq) goto loc_839DC248;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
loc_839DC248:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f12,64(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bgt cr6,0x839dc280
	if (cr6.gt) goto loc_839DC280;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_839DC280:
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x839dc2a0
	if (!cr6.eq) goto loc_839DC2A0;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x839dc2a8
	if (cr6.gt) goto loc_839DC2A8;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x839dc2a8
	goto loc_839DC2A8;
loc_839DC2A0:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_839DC2A8:
	// lfs f0,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bne cr6,0x839dc2f4
	if (!cr6.eq) goto loc_839DC2F4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839dc2f4
	if (!cr6.eq) goto loc_839DC2F4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x839dc2f4
	if (!cr6.eq) goto loc_839DC2F4;
	// lbz r11,118(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 118);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839dc2f4
	if (!cr6.eq) goto loc_839DC2F4;
	// lfs f31,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x839dc370
	goto loc_839DC370;
loc_839DC2F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x839dc304
	if (cr6.eq) goto loc_839DC304;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_839DC304:
	// lbz r11,118(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 118);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dc314
	if (cr6.eq) goto loc_839DC314;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_839DC314:
	// fmuls f1,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x831d2588
	ctx.lr = 0x839DC31C;
	sub_831D2588(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// lfs f1,9104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x839dbc58
	ctx.lr = 0x839DC358;
	sub_839DBC58(ctx, base);
	// lfs f12,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,0(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f30,8(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
loc_839DC370:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x831d1a10
	ctx.lr = 0x839DC380;
	sub_831D1A10(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x831d1930
	ctx.lr = 0x839DC390;
	sub_831D1930(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f28,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f30.f64));
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmadds f10,f12,f13,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f31.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x839dba18
	ctx.lr = 0x839DC3B8;
	sub_839DBA18(ctx, base);
	// lfs f9,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stfs f8,20(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// stb r27,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r27.u8);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f4,8(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r29,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x839dc420
	if (!cr6.gt) goto loc_839DC420;
	// stfs f13,76(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 76, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x839DC41C;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839DC420:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x839dc43c
	if (!cr6.lt) goto loc_839DC43C;
	// stfs f27,76(r29)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r29.u32 + 76, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x839DC438;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839DC43C:
	// stfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 76, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x839DC44C;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DC450"))) PPC_WEAK_FUNC(sub_839DC450);
PPC_FUNC_IMPL(__imp__sub_839DC450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,-23844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
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
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DC480"))) PPC_WEAK_FUNC(sub_839DC480);
PPC_FUNC_IMPL(__imp__sub_839DC480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839DC488;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce768
	ctx.lr = 0x839DC490;
	__savefpr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x839DC4AC;
	sub_8353B168(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r11,23096
	ctx.r28.s64 = ctx.r11.s64 + 23096;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// beq cr6,0x839dc558
	if (cr6.eq) goto loc_839DC558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC4DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc558
	if (cr6.eq) goto loc_839DC558;
	// bl 0x82a52b70
	ctx.lr = 0x839DC4EC;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839dc558
	if (!cr6.eq) goto loc_839DC558;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC50C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x839dc558
	if (cr6.eq) goto loc_839DC558;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,23400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23400);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f1,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839dc544
	if (!cr6.lt) goto loc_839DC544;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x839dc55c
	goto loc_839DC55C;
loc_839DC544:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x839dc55c
	if (cr6.lt) goto loc_839DC55C;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x839dc55c
	goto loc_839DC55C;
loc_839DC558:
	// lfs f12,-36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -36);
	ctx.f12.f64 = double(temp.f32);
loc_839DC55C:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839dc5fc
	if (cr6.eq) goto loc_839DC5FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC57C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc5f8
	if (cr6.eq) goto loc_839DC5F8;
	// bl 0x82a52b70
	ctx.lr = 0x839DC58C;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839dc5f8
	if (!cr6.eq) goto loc_839DC5F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC5AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x839dc5f8
	if (cr6.eq) goto loc_839DC5F8;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,23396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23396);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839dc5e4
	if (!cr6.lt) goto loc_839DC5E4;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x839dc5fc
	goto loc_839DC5FC;
loc_839DC5E4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x839dc5fc
	if (cr6.lt) goto loc_839DC5FC;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x839dc5fc
	goto loc_839DC5FC;
loc_839DC5F8:
	// lfs f12,-36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -36);
	ctx.f12.f64 = double(temp.f32);
loc_839DC5FC:
	// lfs f0,-32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x839dc620
	if (!cr6.gt) goto loc_839DC620;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f0,23392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x839dc634
	if (!cr6.gt) goto loc_839DC634;
	// b 0x839dc630
	goto loc_839DC630;
loc_839DC620:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,24500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24500);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x839dc634
	if (!cr6.lt) goto loc_839DC634;
loc_839DC630:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_839DC634:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839dc648
	if (!cr6.lt) goto loc_839DC648;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x839dc654
	goto loc_839DC654;
loc_839DC648:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x839dc658
	if (cr6.lt) goto loc_839DC658;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_839DC654:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_839DC658:
	// bl 0x83740868
	ctx.lr = 0x839DC65C;
	sub_83740868(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f0,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f30,f0,f1
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// beq cr6,0x839dc6d4
	if (cr6.eq) goto loc_839DC6D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dc6d4
	if (cr6.eq) goto loc_839DC6D4;
	// bl 0x82a52b70
	ctx.lr = 0x839DC694;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839dc6d4
	if (!cr6.eq) goto loc_839DC6D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DC6B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839DC6D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
loc_839DC6D4:
	// lis r30,-31767
	ctx.r30.s64 = -2081882112;
	// fcmpu cr6,f26,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f31.f64);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// lfs f12,-29628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -29628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f24,23388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23388);
	ctx.f24.f64 = double(temp.f32);
	// lfs f25,23384(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23384);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,23380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23380);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,23376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23376);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x839dc70c
	if (!cr6.eq) goto loc_839DC70C;
	// fcmpu cr6,f28,f31
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// beq cr6,0x839dc968
	if (cr6.eq) goto loc_839DC968;
loc_839DC70C:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,2480
	ctx.r8.s64 = ctx.r10.s64 + 2480;
	// vspltisw128 v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x3)));
	// addi r7,r9,2496
	ctx.r7.s64 = ctx.r9.s64 + 2496;
	// vspltisw v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vspltisw128 v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x2)));
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r4,r6,2512
	ctx.r4.s64 = ctx.r6.s64 + 2512;
	// fmuls f11,f30,f26
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f26.f64));
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r5,2528
	ctx.r3.s64 = ctx.r5.s64 + 2528;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f10,f30,f28
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// vslw128 v10,v60,v60
	ctx.v10.u32[0] = ctx.v60.u32[0] << (ctx.v60.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v60.u32[1] << (ctx.v60.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v60.u32[2] << (ctx.v60.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v60.u32[3] << (ctx.v60.u8[12] & 0x1F);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,2544
	ctx.r8.s64 = ctx.r10.s64 + 2544;
	// vsldoi128 v59,v0,v63,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 8));
	// lvx128 v8,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r9,2560
	ctx.r6.s64 = ctx.r9.s64 + 2560;
	// lvx128 v7,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vsldoi128 v58,v63,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vupkd3d128 v11,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v11 = vTemp;
	// lvx128 v3,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r5,2576
	ctx.r3.s64 = ctx.r5.s64 + 2576;
	// lvx128 v2,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r4,2592
	ctx.r9.s64 = ctx.r4.s64 + 2592;
	// addi r8,r10,2608
	ctx.r8.s64 = ctx.r10.s64 + 2608;
	// vsldoi128 v6,v63,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vand128 v5,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v56,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v30,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r6,2624
	ctx.r5.s64 = ctx.r6.s64 + 2624;
	// vspltw128 v4,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v57,v63,v63
	ctx.v57.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// vsldoi128 v55,v0,v63,12
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 4));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// vsldoi128 v47,v63,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// vmaddfp v9,v4,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel v29,v12,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vor128 v54,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vaddfp128 v53,v54,v29
	simde_mm_store_ps(ctx.v53.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v29.f32)));
	// vcfpsxws128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v53.f32)));
	// vcsxwfp128 v9,v52,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vand128 v12,v52,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vadduws v29,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vand128 v51,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vand128 v50,v12,v61
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vand128 v49,v29,v13
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vand128 v48,v29,v61
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vcmpequw128 v28,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcmpequw128 v26,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vnmsubfp v13,v9,v8,v4
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v4,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequw128 v29,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcmpequw128 v27,v48,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vnmsubfp v12,v9,v7,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v12,v12,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v3,v13,v2
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v2,v1,v13,v31
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v1,v13,v12,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v9,v13,v30
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddfp v4,v2,v13,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v31,v9,v13,v11
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v4,v1,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vand128 v13,v47,v55
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v46,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// stfs f9,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vsldoi v3,v0,v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 12));
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vsel v31,v0,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v1,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vor128 v45,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmaddfp v1,v31,v1,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v13,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vspltw128 v2,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vor128 v11,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// vspltw128 v30,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v4,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vor128 v9,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// lfs f7,12(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// vsel v31,v13,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// vsel v13,v11,v9,v28
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vor128 v44,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddfp v3,v3,v30,v1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vxor v13,v10,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vxor128 v11,v10,v44
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vor128 v9,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vsel v10,v13,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8))));
	// vsel v13,v11,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vor v12,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor128 v43,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsel v11,v0,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor128 v10,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vxor128 v9,v43,v57
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vsel v12,v0,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vsel v10,v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v11,v12,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vmaddfp v0,v10,v2,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v11,v4,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v42,v0,v3
	simde_mm_store_ps(ctx.v42.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vspltw128 v41,v42,2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0x55));
	// vspltw128 v40,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// stvx128 v41,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f5,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fadds f13,f6,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stvx128 v40,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f4,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f4,f7
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// ble cr6,0x839dc938
	if (!cr6.gt) goto loc_839DC938;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x839dc944
	goto loc_839DC944;
loc_839DC938:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x839dc944
	if (!cr6.lt) goto loc_839DC944;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
loc_839DC944:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f13,f25
	cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// ble cr6,0x839dc958
	if (!cr6.gt) goto loc_839DC958;
	// fmr f13,f25
	ctx.f13.f64 = ctx.f25.f64;
	// b 0x839dc964
	goto loc_839DC964;
loc_839DC958:
	// fcmpu cr6,f13,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f24.f64);
	// bge cr6,0x839dc964
	if (!cr6.lt) goto loc_839DC964;
	// fmr f13,f24
	ctx.f13.f64 = ctx.f24.f64;
loc_839DC964:
	// stfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_839DC968:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-27732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// lfs f13,25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x839dc9f4
	if (!cr6.eq) goto loc_839DC9F4;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f28,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x831d1a10
	ctx.lr = 0x839DC9A0;
	sub_831D1A10(ctx, base);
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// frsp f26,f1
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// lfs f0,-29628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -29628);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x831d1930
	ctx.lr = 0x839DC9B4;
	sub_831D1930(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,-29628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -29628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-29660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29660);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmadds f9,f26,f10,f28
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 + ctx.f28.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f8,f10,f11,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f30.f64));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_839DC9F4:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x839dca08
	if (!cr6.gt) goto loc_839DCA08;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x839dca14
	goto loc_839DCA14;
loc_839DCA08:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x839dca14
	if (!cr6.lt) goto loc_839DCA14;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
loc_839DCA14:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x839dca2c
	if (!cr6.gt) goto loc_839DCA2C;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x839dca38
	goto loc_839DCA38;
loc_839DCA2C:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x839dca38
	if (!cr6.lt) goto loc_839DCA38;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
loc_839DCA38:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f31,68(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x82a5a550
	ctx.lr = 0x839DCAC8;
	sub_82A5A550(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a59d20
	ctx.lr = 0x839DCAD8;
	sub_82A59D20(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f13,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// fadds f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,20(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f10,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,24(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f10,64(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// stfs f8,4(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7b4
	ctx.lr = 0x839DCB2C;
	__restfpr_24(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DCB30"))) PPC_WEAK_FUNC(sub_839DCB30);
PPC_FUNC_IMPL(__imp__sub_839DCB30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r10,r10,23168
	ctx.r10.s64 = ctx.r10.s64 + 23168;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_839DCB58:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x839dcb58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839DCB58;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,-29628(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29628);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x839dcb90
	if (!cr6.eq) goto loc_839DCB90;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_839DCB90:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// lfs f11,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f11.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,20048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20048);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x839dcbe4
	if (!cr6.gt) goto loc_839DCBE4;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// b 0x839dcbf8
	goto loc_839DCBF8;
loc_839DCBE4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f11,-6668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6668);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x839dcbf8
	if (!cr6.lt) goto loc_839DCBF8;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_839DCBF8:
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lfs f11,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,23412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23412);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,23408(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23408);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,23404(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23404);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f2,f11,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsubs f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f9,f11,f2
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsubs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x839dcc58
	if (!cr6.gt) goto loc_839DCC58;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x839dcc64
	goto loc_839DCC64;
loc_839DCC58:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x839dcc64
	if (!cr6.lt) goto loc_839DCC64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_839DCC64:
	// fcmpu cr6,f8,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x839dcc74
	if (!cr6.gt) goto loc_839DCC74;
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// b 0x839dcc80
	goto loc_839DCC80;
loc_839DCC74:
	// fcmpu cr6,f8,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bge cr6,0x839dcc80
	if (!cr6.lt) goto loc_839DCC80;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
loc_839DCC80:
	// fdivs f11,f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f8
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f3,f12,f10
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,-28496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28496);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f3,20(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bl 0x837a4d10
	ctx.lr = 0x839DCCE8;
	sub_837A4D10(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DCCF8"))) PPC_WEAK_FUNC(sub_839DCCF8);
PPC_FUNC_IMPL(__imp__sub_839DCCF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8378b870
	ctx.lr = 0x839DCD10;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839dcd20
	if (cr6.eq) goto loc_839DCD20;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8378bcd8
	ctx.lr = 0x839DCD20;
	sub_8378BCD8(ctx, base);
loc_839DCD20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839dcd5c
	if (cr6.eq) goto loc_839DCD5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839DCD3C;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839DCD54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839DCD5C;
	sub_82595170(ctx, base);
loc_839DCD5C:
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

__attribute__((alias("__imp__sub_839DCD70"))) PPC_WEAK_FUNC(sub_839DCD70);
PPC_FUNC_IMPL(__imp__sub_839DCD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839DCD78;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce764
	ctx.lr = 0x839DCD80;
	__savefpr_23(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r10,84(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839DCDB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,676
	ctx.r3.s64 = ctx.r11.s64 + 676;
	// lfs f31,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x828e4650
	ctx.lr = 0x839DCDDC;
	sub_828E4650(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f25,f12
	ctx.f25.f64 = ctx.f12.f64;
	// fmr f23,f11
	ctx.f23.f64 = ctx.f11.f64;
	// lfs f29,-18168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18168);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,-24912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,9104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9104);
	ctx.f26.f64 = double(temp.f32);
	// lfs f13,22412(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22412);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f29,f10
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// lfs f24,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmuls f0,f7,f26
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x839dce3c
	if (cr6.gt) goto loc_839DCE3C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839dce40
	if (!cr6.lt) goto loc_839DCE40;
loc_839DCE3C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_839DCE40:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// lfs f13,-11392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11392);
	ctx.f13.f64 = double(temp.f32);
	// fadds f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// ble cr6,0x839dce5c
	if (!cr6.gt) goto loc_839DCE5C;
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x839dce70
	goto loc_839DCE70;
loc_839DCE5C:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,19836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19836);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x839dce70
	if (!cr6.lt) goto loc_839DCE70;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_839DCE70:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,11264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x839dcf08
	if (!cr6.gt) goto loc_839DCF08;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_839DCE90:
	// fsubs f11,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lfs f13,4304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,23416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23416);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f28,f11,f13,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
loc_839DCEAC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f13,-7352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23848);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f0,f13,f12
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// lfs f0,-27200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x830ff290
	ctx.lr = 0x839DCED4;
	sub_830FF290(ctx, base);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839dceec
	if (!cr6.eq) goto loc_839DCEEC;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,21204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
loc_839DCEEC:
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fneg f30,f0
	ctx.f30.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x839dcf3c
	if (!cr6.gt) goto loc_839DCF3C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x839dcf48
	goto loc_839DCF48;
loc_839DCF08:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f13,19832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19832);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x839dcf28
	if (!cr6.lt) goto loc_839DCF28;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x839dceac
	goto loc_839DCEAC;
loc_839DCF28:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x839dce90
	if (cr6.gt) goto loc_839DCE90;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x839dceac
	goto loc_839DCEAC;
loc_839DCF3C:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// blt cr6,0x839dcf48
	if (cr6.lt) goto loc_839DCF48;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_839DCF48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lfs f29,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f29.f64 = double(temp.f32);
	// bge cr6,0x839dd07c
	if (!cr6.lt) goto loc_839DD07C;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828f2ac0
	ctx.lr = 0x839DCF68;
	sub_828F2AC0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828e2dc8
	ctx.lr = 0x839DCF70;
	sub_828E2DC8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828f2948
	ctx.lr = 0x839DCF78;
	sub_828F2948(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828f31a8
	ctx.lr = 0x839DCF80;
	sub_828F31A8(ctx, base);
	// fmuls f1,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x828f2968
	ctx.lr = 0x839DCF90;
	sub_828F2968(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828f2978
	ctx.lr = 0x839DCFA4;
	sub_828F2978(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828f29a8
	ctx.lr = 0x839DCFB0;
	sub_828F29A8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828f29b0
	ctx.lr = 0x839DCFC4;
	sub_828F29B0(ctx, base);
	// lfs f0,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839dcfdc
	if (!cr6.lt) goto loc_839DCFDC;
	// clrlwi r3,r27,24
	ctx.r3.u64 = ctx.r27.u32 & 0xFF;
	// bl 0x828e42b0
	ctx.lr = 0x839DCFD8;
	sub_828E42B0(ctx, base);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
loc_839DCFDC:
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828f3b08
	ctx.lr = 0x839DCFEC;
	sub_828F3B08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828f29c0
	ctx.lr = 0x839DD004;
	sub_828F29C0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a50460
	ctx.lr = 0x839DD00C;
	sub_82A50460(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828f24c8
	ctx.lr = 0x839DD01C;
	sub_828F24C8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// addi r3,r11,676
	ctx.r3.s64 = ctx.r11.s64 + 676;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x828e45e8
	ctx.lr = 0x839DD034;
	sub_828E45E8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828f3740
	ctx.lr = 0x839DD040;
	sub_828F3740(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,3260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,3260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3260, ctx.r9.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,3260(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3260);
	// ori r6,r7,64
	ctx.r6.u64 = ctx.r7.u64 | 64;
	// stw r6,3260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3260, ctx.r6.u32);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,568(r5)
	PPC_STORE_U32(ctx.r5.u32 + 568, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// bl 0x828e2eb8
	ctx.lr = 0x839DD07C;
	sub_828E2EB8(ctx, base);
loc_839DD07C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmuls f1,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// bl 0x828ec240
	ctx.lr = 0x839DD088;
	sub_828EC240(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x828e8e68
	ctx.lr = 0x839DD094;
	sub_828E8E68(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,676
	ctx.r3.s64 = ctx.r11.s64 + 676;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x828e45e8
	ctx.lr = 0x839DD0AC;
	sub_828E45E8(ctx, base);
	// lfs f0,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x839dd0bc
	if (cr6.gt) goto loc_839DD0BC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_839DD0BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x828e4160
	ctx.lr = 0x839DD0C8;
	sub_828E4160(ctx, base);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828f24c0
	ctx.lr = 0x839DD0D8;
	sub_828F24C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,3840
	ctx.r10.s64 = 251658240;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x8378b870
	ctx.lr = 0x839DD110;
	sub_8378B870(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8378a1f0
	ctx.lr = 0x839DD118;
	sub_8378A1F0(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stfs f25,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f24,164(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f23,168(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,-28496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x837a4d10
	ctx.lr = 0x839DD148;
	sub_837A4D10(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7b0
	ctx.lr = 0x839DD154;
	__restfpr_23(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DD158"))) PPC_WEAK_FUNC(sub_839DD158);
PPC_FUNC_IMPL(__imp__sub_839DD158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839DD160;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce75c
	ctx.lr = 0x839DD168;
	__savefpr_21(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839DD198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,676
	ctx.r3.s64 = ctx.r11.s64 + 676;
	// lfs f31,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x828e4650
	ctx.lr = 0x839DD1C0;
	sub_828E4650(ctx, base);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmr f23,f13
	ctx.f23.f64 = ctx.f13.f64;
	// fmr f21,f0
	ctx.f21.f64 = ctx.f0.f64;
	// lfs f29,-18168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18168);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// lfs f22,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f22.f64 = double(temp.f32);
	// ble cr6,0x839dd1ec
	if (!cr6.gt) goto loc_839DD1EC;
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x839dd200
	goto loc_839DD200;
loc_839DD1EC:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f12,19836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19836);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x839dd200
	if (!cr6.lt) goto loc_839DD200;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_839DD200:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,11264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x839dd220
	if (cr6.gt) goto loc_839DD220;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f13,19832(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19832);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839dd228
	if (!cr6.lt) goto loc_839DD228;
loc_839DD220:
	// stfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_839DD228:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfs f13,23420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23420);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,4304(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-7352(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7352);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f24,f0,f13
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// bl 0x830ff290
	ctx.lr = 0x839DD258;
	sub_830FF290(ctx, base);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839dd270
	if (!cr6.eq) goto loc_839DD270;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,21204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
loc_839DD270:
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fneg f26,f0
	ctx.f26.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x839dd28c
	if (!cr6.gt) goto loc_839DD28C;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// b 0x839dd298
	goto loc_839DD298;
loc_839DD28C:
	// fcmpu cr6,f13,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// blt cr6,0x839dd298
	if (cr6.lt) goto loc_839DD298;
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
loc_839DD298:
	// fabs f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f8,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f0,25892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25892);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// fsel f7,f8,f0,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfs f13,20796(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20796);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f29,f11
	ctx.f6.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// lfs f0,-20096(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f24,f13
	ctx.f29.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// fadds f28,f26,f7
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f7.f64));
	// fmadds f30,f6,f12,f9
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x839dd2fc
	if (cr6.gt) goto loc_839DD2FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-6672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6672);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x839dd300
	if (!cr6.lt) goto loc_839DD300;
loc_839DD2FC:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
loc_839DD300:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lfs f27,-11376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11376);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,-23488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f25.f64 = double(temp.f32);
	// bge cr6,0x839dd430
	if (!cr6.lt) goto loc_839DD430;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828f2ac0
	ctx.lr = 0x839DD328;
	sub_828F2AC0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828e2dc8
	ctx.lr = 0x839DD330;
	sub_828E2DC8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828f2948
	ctx.lr = 0x839DD338;
	sub_828F2948(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828f31a8
	ctx.lr = 0x839DD340;
	sub_828F31A8(ctx, base);
	// fmuls f1,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x828f2968
	ctx.lr = 0x839DD350;
	sub_828F2968(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828f2978
	ctx.lr = 0x839DD364;
	sub_828F2978(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828f29a8
	ctx.lr = 0x839DD370;
	sub_828F29A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828f29b0
	ctx.lr = 0x839DD384;
	sub_828F29B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828f2ab8
	ctx.lr = 0x839DD390;
	sub_828F2AB8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x828f3300
	ctx.lr = 0x839DD3A4;
	sub_828F3300(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a50460
	ctx.lr = 0x839DD3AC;
	sub_82A50460(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828f24c8
	ctx.lr = 0x839DD3BC;
	sub_828F24C8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmr f3,f24
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f24.f64;
	// addi r3,r11,676
	ctx.r3.s64 = ctx.r11.s64 + 676;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x828e45e8
	ctx.lr = 0x839DD3D4;
	sub_828E45E8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828f3740
	ctx.lr = 0x839DD3E0;
	sub_828F3740(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,3260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,3260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3260, ctx.r9.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,3260(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3260);
	// ori r6,r7,64
	ctx.r6.u64 = ctx.r7.u64 | 64;
	// stw r6,3260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3260, ctx.r6.u32);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r28,568(r5)
	PPC_STORE_U32(ctx.r5.u32 + 568, ctx.r28.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,464(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 464);
	// stfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f27,4(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f29,8(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x828e2eb8
	ctx.lr = 0x839DD430;
	sub_828E2EB8(ctx, base);
loc_839DD430:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fmuls f1,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// bl 0x828ec240
	ctx.lr = 0x839DD43C;
	sub_828EC240(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f1,16100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828e8e68
	ctx.lr = 0x839DD44C;
	sub_828E8E68(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// fmr f3,f24
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// lwz r8,464(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 464);
	// lfs f0,23304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f28,f13
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// lfs f10,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stw r28,560(r9)
	PPC_STORE_U32(ctx.r9.u32 + 560, ctx.r28.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fsubs f9,f27,f12
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// fsubs f8,f29,f10
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lwz r6,464(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 464);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f10,f7,f4
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,676
	ctx.r3.s64 = ctx.r11.s64 + 676;
	// bl 0x828e45e8
	ctx.lr = 0x839DD4C8;
	sub_828E45E8(ctx, base);
	// lfs f0,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x839dd4d8
	if (cr6.gt) goto loc_839DD4D8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_839DD4D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x828e4160
	ctx.lr = 0x839DD4E4;
	sub_828E4160(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828f24c0
	ctx.lr = 0x839DD4F4;
	sub_828F24C0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f23,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f22,116(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f21,120(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x837a4d10
	ctx.lr = 0x839DD524;
	sub_837A4D10(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7a8
	ctx.lr = 0x839DD530;
	__restfpr_21(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DD534"))) PPC_WEAK_FUNC(sub_839DD534);
PPC_FUNC_IMPL(__imp__sub_839DD534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DD538"))) PPC_WEAK_FUNC(sub_839DD538);
PPC_FUNC_IMPL(__imp__sub_839DD538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839DD540;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce764
	ctx.lr = 0x839DD548;
	__savefpr_23(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x839dd58c
	if (!cr6.eq) goto loc_839DD58C;
	// lbz r7,68(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// addi r4,r3,84
	ctx.r4.s64 = ctx.r3.s64 + 84;
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839dcd70
	ctx.lr = 0x839DD57C;
	sub_839DCD70(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7b0
	ctx.lr = 0x839DD588;
	__restfpr_23(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839DD58C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839dd5b8
	if (!cr6.eq) goto loc_839DD5B8;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839dd158
	ctx.lr = 0x839DD5A8;
	sub_839DD158(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7b0
	ctx.lr = 0x839DD5B4;
	__restfpr_23(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839DD5B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f29,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x839dd970
	if (!cr6.eq) goto loc_839DD970;
	// li r9,31
	ctx.r9.s64 = 31;
	// lfs f26,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f26.f64 = double(temp.f32);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// lfs f28,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f28.f64 = double(temp.f32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// lfs f27,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f27.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// lfs f12,23440(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23440);
	ctx.f12.f64 = double(temp.f32);
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// lfs f8,23436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23436);
	ctx.f8.f64 = double(temp.f32);
	// lis r30,-32208
	ctx.r30.s64 = -2110783488;
	// lfs f0,-23848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f10,23432(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 23432);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-28172(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28172);
	ctx.f13.f64 = double(temp.f32);
	// fmr f23,f29
	ctx.f23.f64 = ctx.f29.f64;
	// lfs f9,23428(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 23428);
	ctx.f9.f64 = double(temp.f32);
	// fmr f25,f29
	ctx.f25.f64 = ctx.f29.f64;
	// lfs f31,-26260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f11,23424(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 23424);
	ctx.f11.f64 = double(temp.f32);
	// fmr f24,f29
	ctx.f24.f64 = ctx.f29.f64;
	// li r8,27
	ctx.r8.s64 = 27;
	// li r9,28
	ctx.r9.s64 = 28;
loc_839DD644:
	// lbz r10,70(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 70);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x839dd72c
	if (cr6.gt) goto loc_839DD72C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839dd678
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD678;
	// bdzf 4*cr6+eq,0x839dd694
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD694;
	// bdzf 4*cr6+eq,0x839dd6b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD6B0;
	// bdzf 4*cr6+eq,0x839dd6dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD6DC;
	// bne cr6,0x839dd708
	if (!cr6.eq) goto loc_839DD708;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x839dd72c
	goto loc_839DD72C;
loc_839DD678:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// bge cr6,0x839dd72c
	if (!cr6.lt) goto loc_839DD72C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// b 0x839dd72c
	goto loc_839DD72C;
loc_839DD694:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// bge cr6,0x839dd72c
	if (!cr6.lt) goto loc_839DD72C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// b 0x839dd72c
	goto loc_839DD72C;
loc_839DD6B0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f7,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmr f30,f11
	ctx.f30.f64 = ctx.f11.f64;
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// fcmpu cr6,f7,f29
	cr6.compare(ctx.f7.f64, ctx.f29.f64);
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bge cr6,0x839dd6d0
	if (!cr6.lt) goto loc_839DD6D0;
	// fmr f30,f9
	ctx.f30.f64 = ctx.f9.f64;
loc_839DD6D0:
	// fmr f25,f30
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f30.f64;
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
	// b 0x839dd720
	goto loc_839DD720;
loc_839DD6DC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f7,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmr f30,f10
	ctx.f30.f64 = ctx.f10.f64;
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// fcmpu cr6,f7,f29
	cr6.compare(ctx.f7.f64, ctx.f29.f64);
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bge cr6,0x839dd6fc
	if (!cr6.lt) goto loc_839DD6FC;
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
loc_839DD6FC:
	// fmr f25,f30
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f30.f64;
	// fmr f26,f12
	ctx.f26.f64 = ctx.f12.f64;
	// b 0x839dd720
	goto loc_839DD720;
loc_839DD708:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// fmr f25,f29
	ctx.f25.f64 = ctx.f29.f64;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_839DD720:
	// fmr f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
loc_839DD72C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x839dd644
	if (cr6.lt) goto loc_839DD644;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r28,81(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r29,31
	cr6.compare<uint32_t>(ctx.r29.u32, 31, xer);
	// bne cr6,0x839dd764
	if (!cr6.eq) goto loc_839DD764;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// beq cr6,0x839dd764
	if (cr6.eq) goto loc_839DD764;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_839DD764:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x828f2ac0
	ctx.lr = 0x839DD76C;
	sub_828F2AC0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828e2dc8
	ctx.lr = 0x839DD774;
	sub_828E2DC8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2948
	ctx.lr = 0x839DD77C;
	sub_828F2948(ctx, base);
	// lbz r11,69(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x839dd81c
	if (cr6.gt) goto loc_839DD81C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839dd7bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD7BC;
	// bdzf 4*cr6+eq,0x839dd7c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD7C8;
	// bdzf 4*cr6+eq,0x839dd7d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD7D4;
	// bdzf 4*cr6+eq,0x839dd7e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD7E0;
	// bdzf 4*cr6+eq,0x839dd7ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD7EC;
	// bdzf 4*cr6+eq,0x839dd7f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD7F8;
	// bdzf 4*cr6+eq,0x839dd804
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839DD804;
	// bne cr6,0x839dd810
	if (!cr6.eq) goto loc_839DD810;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2b30
	ctx.lr = 0x839DD7B8;
	sub_828F2B30(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD7BC:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2be8
	ctx.lr = 0x839DD7C4;
	sub_828F2BE8(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD7C8:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2ca0
	ctx.lr = 0x839DD7D0;
	sub_828F2CA0(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD7D4:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2d58
	ctx.lr = 0x839DD7DC;
	sub_828F2D58(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD7E0:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2e10
	ctx.lr = 0x839DD7E8;
	sub_828F2E10(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD7EC:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2ec8
	ctx.lr = 0x839DD7F4;
	sub_828F2EC8(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD7F8:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2f80
	ctx.lr = 0x839DD800;
	sub_828F2F80(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD804:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f3038
	ctx.lr = 0x839DD80C;
	sub_828F3038(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD810:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f30f0
	ctx.lr = 0x839DD818;
	sub_828F30F0(ctx, base);
	// b 0x839dd824
	goto loc_839DD824;
loc_839DD81C:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f3248
	ctx.lr = 0x839DD824;
	sub_828F3248(ctx, base);
loc_839DD824:
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// cmplwi cr6,r30,31
	cr6.compare<uint32_t>(ctx.r30.u32, 31, xer);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bne cr6,0x839dd848
	if (!cr6.eq) goto loc_839DD848;
	// bl 0x828f2978
	ctx.lr = 0x839DD844;
	sub_828F2978(ctx, base);
	// b 0x839dd858
	goto loc_839DD858;
loc_839DD848:
	// bl 0x828f2978
	ctx.lr = 0x839DD84C;
	sub_828F2978(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f2988
	ctx.lr = 0x839DD858;
	sub_828F2988(ctx, base);
loc_839DD858:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828f29a8
	ctx.lr = 0x839DD864;
	sub_828F29A8(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lbz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x839dd880
	if (!cr6.lt) goto loc_839DD880;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x828e42b0
	ctx.lr = 0x839DD87C;
	sub_828E42B0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
loc_839DD880:
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f3b08
	ctx.lr = 0x839DD88C;
	sub_828F3B08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828f29c0
	ctx.lr = 0x839DD8A4;
	sub_828F29C0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f2,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f2a28
	ctx.lr = 0x839DD8B4;
	sub_828F2A28(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828f2a38
	ctx.lr = 0x839DD8C0;
	sub_828F2A38(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a50460
	ctx.lr = 0x839DD8C8;
	sub_82A50460(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x828f24c8
	ctx.lr = 0x839DD8D8;
	sub_828F24C8(ctx, base);
	// cmplwi cr6,r30,28
	cr6.compare<uint32_t>(ctx.r30.u32, 28, xer);
	// bne cr6,0x839dd90c
	if (!cr6.eq) goto loc_839DD90C;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,736
	ctx.r11.s64 = ctx.r11.s64 + 736;
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f23,4(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f29,8(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f25,12(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f24,16(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f29,20(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f27,24(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f28,28(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f26,32(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
loc_839DD90C:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x828f3740
	ctx.lr = 0x839DD918;
	sub_828F3740(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lhz r10,3304(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3304);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// sth r9,3304(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3304, ctx.r9.u16);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r8,22
	cr6.compare<int32_t>(ctx.r8.s32, 22, xer);
	// bne cr6,0x839dd958
	if (!cr6.eq) goto loc_839DD958;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x839dd948
	if (cr6.eq) goto loc_839DD948;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x839dd958
	if (!cr6.eq) goto loc_839DD958;
loc_839DD948:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lfs f0,-28496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,792(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 792, temp.u32);
loc_839DD958:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x828e2eb8
	ctx.lr = 0x839DD970;
	sub_828E2EB8(ctx, base);
loc_839DD970:
	// lfs f0,112(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x839dd980
	if (cr6.gt) goto loc_839DD980;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_839DD980:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x828e4160
	ctx.lr = 0x839DD98C;
	sub_828E4160(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x828f24c0
	ctx.lr = 0x839DD9A0;
	sub_828F24C0(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839dd9f0
	if (cr6.eq) goto loc_839DD9F0;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvx128 v63,r27,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lfs f0,-10804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x839dd9e0
	if (!cr6.lt) goto loc_839DD9E0;
	// bl 0x8378b870
	ctx.lr = 0x839DD9D8;
	sub_8378B870(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x839dd9e8
	goto loc_839DD9E8;
loc_839DD9E0:
	// bl 0x8378b870
	ctx.lr = 0x839DD9E4;
	sub_8378B870(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_839DD9E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8378a710
	ctx.lr = 0x839DD9F0;
	sub_8378A710(ctx, base);
loc_839DD9F0:
	// lbz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839dda68
	if (!cr6.eq) goto loc_839DDA68;
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r5,27
	ctx.r5.s64 = 27;
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,676
	ctx.r3.s64 = ctx.r11.s64 + 676;
	// bl 0x828e4650
	ctx.lr = 0x839DDA1C;
	sub_828E4650(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,-3400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x837a4d10
	ctx.lr = 0x839DDA58;
	sub_837A4D10(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7b0
	ctx.lr = 0x839DDA64;
	__restfpr_23(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839DDA68:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x839dda78
	if (cr6.eq) goto loc_839DDA78;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x839ddaa8
	if (!cr6.eq) goto loc_839DDAA8;
loc_839DDA78:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f13,9104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x837a4b98
	ctx.lr = 0x839DDAA8;
	sub_837A4B98(ctx, base);
loc_839DDAA8:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7b0
	ctx.lr = 0x839DDAB4;
	__restfpr_23(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DDAB8"))) PPC_WEAK_FUNC(sub_839DDAB8);
PPC_FUNC_IMPL(__imp__sub_839DDAB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r7,14
	ctx.r7.s64 = 14;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// b 0x839dcd70
	sub_839DCD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DDAD4"))) PPC_WEAK_FUNC(sub_839DDAD4);
PPC_FUNC_IMPL(__imp__sub_839DDAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DDAD8"))) PPC_WEAK_FUNC(sub_839DDAD8);
PPC_FUNC_IMPL(__imp__sub_839DDAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839DDAE0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce760
	ctx.lr = 0x839DDAE8;
	__savefpr_22(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x839DDB04;
	sub_8353B168(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f24,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f24.f64 = double(temp.f32);
	// beq cr6,0x839ddb74
	if (cr6.eq) goto loc_839DDB74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DDB30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839ddb74
	if (cr6.eq) goto loc_839DDB74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DDB54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f24.f64);
	// beq cr6,0x839ddb74
	if (cr6.eq) goto loc_839DDB74;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f0,21932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21932);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f1,f0,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_839DDB74:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f27,f24
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f24.f64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f22,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f22.f64 = double(temp.f32);
	// beq cr6,0x839ddc80
	if (cr6.eq) goto loc_839DDC80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DDB9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839ddbd0
	if (cr6.eq) goto loc_839DDBD0;
	// bl 0x82a52b70
	ctx.lr = 0x839DDBAC;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839ddbd0
	if (!cr6.eq) goto loc_839DDBD0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DDBCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
loc_839DDBD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DDBE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839ddc2c
	if (cr6.eq) goto loc_839DDC2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DDC08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839ddc2c
	if (cr6.eq) goto loc_839DDC2C;
	// bl 0x82a52b70
	ctx.lr = 0x839DDC18;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839ddc2c
	if (!cr6.eq) goto loc_839DDC2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f27.f64 = double(temp.f32);
	// b 0x839ddc80
	goto loc_839DDC80;
loc_839DDC2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DDC40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839ddc80
	if (cr6.eq) goto loc_839DDC80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DDC64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839ddc80
	if (cr6.eq) goto loc_839DDC80;
	// bl 0x82a52b70
	ctx.lr = 0x839DDC74;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839ddc80
	if (!cr6.eq) goto loc_839DDC80;
	// fmr f27,f22
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f22.f64;
loc_839DDC80:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r10,84(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// addi r11,r11,23096
	ctx.r11.s64 = ctx.r11.s64 + 23096;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f31,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// lfs f23,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f23.f64 = double(temp.f32);
	// bne cr6,0x839ddcbc
	if (!cr6.eq) goto loc_839DDCBC;
	// lfs f31,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// lfs f23,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f23.f64 = double(temp.f32);
loc_839DDCBC:
	// fcmpu cr6,f27,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f24.f64);
	// beq cr6,0x839ddce0
	if (cr6.eq) goto loc_839DDCE0;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f0,21212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f27,f0,f22
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f22.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_839DDCE0:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x839ddcf4
	if (!cr6.gt) goto loc_839DDCF4;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x839ddd00
	goto loc_839DDD00;
loc_839DDCF4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839ddd00
	if (!cr6.lt) goto loc_839DDD00;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_839DDD00:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r27,r31,64
	ctx.r27.s64 = ctx.r31.s64 + 64;
	// lwz r10,84(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839DDD24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lfs f25,8976(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8976);
	ctx.f25.f64 = double(temp.f32);
	// bne cr6,0x839dde7c
	if (!cr6.eq) goto loc_839DDE7C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,560(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x839ddd54
	if (!cr6.eq) goto loc_839DDD54;
	// lwz r29,564(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// b 0x839ddd58
	goto loc_839DDD58;
loc_839DDD54:
	// li r29,55
	ctx.r29.s64 = 55;
loc_839DDD58:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x828f2ac0
	ctx.lr = 0x839DDD60;
	sub_828F2AC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828f24c8
	ctx.lr = 0x839DDD70;
	sub_828F24C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828e2dc8
	ctx.lr = 0x839DDD78;
	sub_828E2DC8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828f2948
	ctx.lr = 0x839DDD80;
	sub_828F2948(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828f2e10
	ctx.lr = 0x839DDD88;
	sub_828F2E10(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f2,f24
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x828f2978
	ctx.lr = 0x839DDD9C;
	sub_828F2978(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x828f29a8
	ctx.lr = 0x839DDDA8;
	sub_828F29A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f3,f24
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x828f29b0
	ctx.lr = 0x839DDDBC;
	sub_828F29B0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828f3b08
	ctx.lr = 0x839DDDCC;
	sub_828F3B08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828f29c0
	ctx.lr = 0x839DDDE4;
	sub_828F29C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f2,11808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11808);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x828f2a28
	ctx.lr = 0x839DDDF8;
	sub_828F2A28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x828f2a38
	ctx.lr = 0x839DDE04;
	sub_828F2A38(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f2,f24
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x828f2a40
	ctx.lr = 0x839DDE14;
	sub_828F2A40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a50460
	ctx.lr = 0x839DDE1C;
	sub_82A50460(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x828f3740
	ctx.lr = 0x839DDE28;
	sub_828F3740(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x828ef610
	ctx.lr = 0x839DDE34;
	sub_828EF610(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lfs f1,30444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828ec240
	ctx.lr = 0x839DDE44;
	sub_828EC240(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lhz r9,3304(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3304);
	// rlwinm r8,r9,0,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FE;
	// rlwinm r8,r8,0,30,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// sth r8,3304(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3304, ctx.r8.u16);
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r6,3260(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 3260);
	// ori r5,r6,64
	ctx.r5.u64 = ctx.r6.u64 | 64;
	// stw r5,3260(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3260, ctx.r5.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// bl 0x828e2eb8
	ctx.lr = 0x839DDE7C;
	sub_828E2EB8(ctx, base);
loc_839DDE7C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lbz r9,688(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 688);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x839dde9c
	if (!cr6.eq) goto loc_839DDE9C;
	// lbz r10,118(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 118);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839ddefc
	if (cr6.eq) goto loc_839DDEFC;
loc_839DDE9C:
	// addi r29,r11,676
	ctx.r29.s64 = ctx.r11.s64 + 676;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e4560
	ctx.lr = 0x839DDEAC;
	sub_828E4560(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e4588
	ctx.lr = 0x839DDEB8;
	sub_828E4588(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839dded0
	if (!cr6.eq) goto loc_839DDED0;
	// lwz r4,564(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// b 0x839dded4
	goto loc_839DDED4;
loc_839DDED0:
	// li r4,55
	ctx.r4.s64 = 55;
loc_839DDED4:
	// bl 0x828ef610
	ctx.lr = 0x839DDED8;
	sub_828EF610(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lhz r10,3304(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3304);
	// rlwinm r9,r10,0,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FE;
	// rlwinm r9,r9,0,30,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// sth r9,3304(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3304, ctx.r9.u16);
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,3260(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3260);
	// ori r6,r7,64
	ctx.r6.u64 = ctx.r7.u64 | 64;
	// stw r6,3260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3260, ctx.r6.u32);
loc_839DDEFC:
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x828ec240
	ctx.lr = 0x839DDF08;
	sub_828EC240(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lfs f1,23372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828e8e68
	ctx.lr = 0x839DDF18;
	sub_828E8E68(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f29,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// lfs f27,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bgt cr6,0x839ddf44
	if (cr6.gt) goto loc_839DDF44;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_839DDF44:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lfs f0,2752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2752);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x839ddf5c
	if (!cr6.gt) goto loc_839DDF5C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x839ddf68
	goto loc_839DDF68;
loc_839DDF5C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839ddf68
	if (!cr6.lt) goto loc_839DDF68;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_839DDF68:
	// fsubs f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,23444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23444);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fadds f9,f10,f25
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f25.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x831d1a10
	ctx.lr = 0x839DDF90;
	sub_831D1A10(ctx, base);
	// lfs f8,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// bl 0x831d1930
	ctx.lr = 0x839DDFA0;
	sub_831D1930(ctx, base);
	// lfs f7,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// bl 0x831d1930
	ctx.lr = 0x839DDFB0;
	sub_831D1930(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmadds f5,f28,f30,f29
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f30.f64 + ctx.f29.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f4,f31,f30,f26
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f26.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f3,f6,f30,f27
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f27.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x839dba18
	ctx.lr = 0x839DDFD8;
	sub_839DBA18(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,688(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 688);
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r9,27
	cr6.compare<uint32_t>(ctx.r9.u32, 27, xer);
	// bne cr6,0x839de00c
	if (!cr6.eq) goto loc_839DE00C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,-27732(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27732);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x839de018
	if (!cr6.lt) goto loc_839DE018;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x839de018
	goto loc_839DE018;
loc_839DE00C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839de018
	if (!cr6.lt) goto loc_839DE018;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_839DE018:
	// stw r25,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r25.u32);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stfs f23,3340(r9)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r9.u32 + 3340, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x839de124
	if (cr6.eq) goto loc_839DE124;
	// lfs f0,112(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bgt cr6,0x839de064
	if (cr6.gt) goto loc_839DE064;
	// fmr f0,f22
	ctx.f0.f64 = ctx.f22.f64;
	// b 0x839de070
	goto loc_839DE070;
loc_839DE064:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x839de070
	if (cr6.gt) goto loc_839DE070;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_839DE070:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x828e4160
	ctx.lr = 0x839DE07C;
	sub_828E4160(ctx, base);
	// lfs f0,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bne cr6,0x839de0cc
	if (!cr6.eq) goto loc_839DE0CC;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839de0cc
	if (!cr6.eq) goto loc_839DE0CC;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x839de0cc
	if (!cr6.eq) goto loc_839DE0CC;
	// lbz r11,118(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 118);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839de0cc
	if (!cr6.eq) goto loc_839DE0CC;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// b 0x839de11c
	goto loc_839DE11C;
loc_839DE0CC:
	// stw r25,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r25.u32);
	// stw r28,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r28.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x828f24c0
	ctx.lr = 0x839DE0DC;
	sub_828F24C0(ctx, base);
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v61,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltw128 v60,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_839DE11C:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_839DE124:
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f24,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f24,116(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r11,88(r28)
	PPC_STORE_U8(ctx.r28.u32 + 88, ctx.r11.u8);
	// stfs f24,120(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r11,676
	ctx.r3.s64 = ctx.r11.s64 + 676;
	// bl 0x828e48b8
	ctx.lr = 0x839DE148;
	sub_828E48B8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f10,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-29648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29652(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29652);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v59,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r28,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lfs f9,2752(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2752);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x839de1a4
	if (cr6.gt) goto loc_839DE1A4;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lfs f13,-29656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29656);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839de1b8
	if (!cr6.lt) goto loc_839DE1B8;
loc_839DE1A4:
	// stfs f13,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 76, temp.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7ac
	ctx.lr = 0x839DE1B4;
	__restfpr_22(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_839DE1B8:
	// stfs f0,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 76, temp.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7ac
	ctx.lr = 0x839DE1C8;
	__restfpr_22(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DE1CC"))) PPC_WEAK_FUNC(sub_839DE1CC);
PPC_FUNC_IMPL(__imp__sub_839DE1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DE1D0"))) PPC_WEAK_FUNC(sub_839DE1D0);
PPC_FUNC_IMPL(__imp__sub_839DE1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839DE1D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,23448
	ctx.r10.s64 = ctx.r11.s64 + 23448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x837e7b90
	ctx.lr = 0x839DE200;
	sub_837E7B90(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,7068
	ctx.r8.s64 = ctx.r9.s64 + 7068;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r11,1136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1136, ctx.r11.u8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// stw r8,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r8.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// addi r10,r7,-24672
	ctx.r10.s64 = ctx.r7.s64 + -24672;
	// stb r11,1156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1156, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r10.u32);
	// lfs f13,-29628(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29628);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// lfs f12,-11368(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -11368);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
	// stfs f0,1172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1172, temp.u32);
	// stfs f0,1176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,1180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f0,1184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// addi r30,r31,1132
	ctx.r30.s64 = ctx.r31.s64 + 1132;
	// stfs f0,1188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// addi r29,r31,1152
	ctx.r29.s64 = ctx.r31.s64 + 1152;
	// stfs f0,1192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// stfs f0,1196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1196, temp.u32);
	// stfs f0,1200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1200, temp.u32);
	// stfs f0,1204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1204, temp.u32);
	// stw r28,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r28.u32);
	// stfs f13,1208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1208, temp.u32);
	// stw r27,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r27.u32);
	// bl 0x837ef620
	ctx.lr = 0x839DE29C;
	sub_837EF620(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6d28
	ctx.lr = 0x839DE2A4;
	sub_828C6D28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a9e30
	ctx.lr = 0x839DE2AC;
	sub_825A9E30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DE2B8"))) PPC_WEAK_FUNC(sub_839DE2B8);
PPC_FUNC_IMPL(__imp__sub_839DE2B8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r3,1152
	ctx.r30.s64 = ctx.r3.s64 + 1152;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x839DE2E8;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839de314
	if (cr6.eq) goto loc_839DE314;
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
	ctx.lr = 0x839DE30C;
	sub_8353F3B8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_839DE314:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,1132
	ctx.r3.s64 = ctx.r31.s64 + 1132;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x839DE328;
	sub_825C3358(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x837e8b70
	ctx.lr = 0x839DE330;
	sub_837E8B70(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r9,8104
	ctx.r8.s64 = ctx.r9.s64 + 8104;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_839DE354"))) PPC_WEAK_FUNC(sub_839DE354);
PPC_FUNC_IMPL(__imp__sub_839DE354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DE358"))) PPC_WEAK_FUNC(sub_839DE358);
PPC_FUNC_IMPL(__imp__sub_839DE358) {
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
	// bl 0x839de2b8
	ctx.lr = 0x839DE378;
	sub_839DE2B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839de398
	if (cr6.eq) goto loc_839DE398;
	// bl 0x82595188
	ctx.lr = 0x839DE388;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x839DE398;
	sub_825952B8(ctx, base);
loc_839DE398:
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

__attribute__((alias("__imp__sub_839DE3B4"))) PPC_WEAK_FUNC(sub_839DE3B4);
PPC_FUNC_IMPL(__imp__sub_839DE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DE3B8"))) PPC_WEAK_FUNC(sub_839DE3B8);
PPC_FUNC_IMPL(__imp__sub_839DE3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839DE3C0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce740
	ctx.lr = 0x839DE3C8;
	__savefpr_14(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x839df2c0
	if (!cr6.lt) goto loc_839DF2C0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x839DE3F0;
	sub_83747068(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,1212(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1212);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839de430
	if (!cr6.eq) goto loc_839DE430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6bf8
	ctx.lr = 0x839DE430;
	sub_828C6BF8(ctx, base);
loc_839DE430:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839de44c
	if (!cr6.eq) goto loc_839DE44C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839DE44C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f17,f31
	ctx.f17.f64 = ctx.f31.f64;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f16,f31
	ctx.f16.f64 = ctx.f31.f64;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f18,f31
	ctx.f18.f64 = ctx.f31.f64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x839de4cc
	if (cr6.eq) goto loc_839DE4CC;
	// lfs f17,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f17.f64 = double(temp.f32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f16,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f16.f64 = double(temp.f32);
	// lfs f27,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// lfs f18,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f18.f64 = double(temp.f32);
	// stfs f17,120(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f16,128(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f24,108(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f26,112(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f18,80(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_839DE4CC:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839de4f8
	if (cr6.eq) goto loc_839DE4F8;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_839DE4F8:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839de510
	if (!cr6.eq) goto loc_839DE510;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6bf8
	ctx.lr = 0x839DE510;
	sub_828C6BF8(ctx, base);
loc_839DE510:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839de52c
	if (!cr6.eq) goto loc_839DE52C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839DE52C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839de574
	if (cr6.eq) goto loc_839DE574;
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f23,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// lfs f25,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f28,136(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f23,140(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_839DE574:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839de584
	if (cr6.eq) goto loc_839DE584;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_839DE584:
	// lwz r11,1216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1216);
	// fmr f22,f31
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f31.f64;
	// fmr f21,f31
	ctx.f21.f64 = ctx.f31.f64;
	// fmr f20,f31
	ctx.f20.f64 = ctx.f31.f64;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(ctx.r11.s32, 256, xer);
	// fmr f19,f31
	ctx.f19.f64 = ctx.f31.f64;
	// beq cr6,0x839de5f8
	if (cr6.eq) goto loc_839DE5F8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x828f1b70
	ctx.lr = 0x839DE5B8;
	sub_828F1B70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839de5d0
	if (cr6.eq) goto loc_839DE5D0;
	// lfs f22,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f19.f64 = double(temp.f32);
loc_839DE5D0:
	// lwz r11,1216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1216);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839de5f8
	if (cr6.eq) goto loc_839DE5F8;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_839DE5F8:
	// lbz r11,1136(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1136);
	// addi r31,r28,1132
	ctx.r31.s64 = ctx.r28.s64 + 1132;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839de610
	if (!cr6.eq) goto loc_839DE610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6d28
	ctx.lr = 0x839DE610;
	sub_828C6D28(ctx, base);
loc_839DE610:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839de62c
	if (!cr6.eq) goto loc_839DE62C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839DE62C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmr f15,f31
	ctx.f15.f64 = ctx.f31.f64;
	// lfs f30,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f30.f64 = double(temp.f32);
	// fmr f14,f31
	ctx.f14.f64 = ctx.f31.f64;
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// beq cr6,0x839de6cc
	if (cr6.eq) goto loc_839DE6CC;
	// fcmpu cr6,f28,f31
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// bgt cr6,0x839de67c
	if (cr6.gt) goto loc_839DE67C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_839DE67C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x839de694
	if (!cr6.eq) goto loc_839DE694;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// b 0x839de698
	goto loc_839DE698;
loc_839DE694:
	// fneg f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_839DE698:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f15,f13
	ctx.f15.f64 = ctx.f13.f64;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f14,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f14.f64 = double(temp.f32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_839DE6CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839de6dc
	if (cr6.eq) goto loc_839DE6DC;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_839DE6DC:
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f26,f16
	ctx.f10.f64 = double(float(ctx.f26.f64 + ctx.f16.f64));
	// fadds f11,f24,f13
	ctx.f11.f64 = double(float(ctx.f24.f64 + ctx.f13.f64));
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fadds f8,f23,f0
	ctx.f8.f64 = double(float(ctx.f23.f64 + ctx.f0.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f12,f17,f27
	ctx.f12.f64 = double(float(ctx.f17.f64 + ctx.f27.f64));
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// fadds f9,f29,f28
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f6,f23,f13
	ctx.f6.f64 = double(float(ctx.f23.f64 + ctx.f13.f64));
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f7,f17,f28
	ctx.f7.f64 = double(float(ctx.f17.f64 + ctx.f28.f64));
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fadds f3,f23,f24
	ctx.f3.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fadds f5,f25,f16
	ctx.f5.f64 = double(float(ctx.f25.f64 + ctx.f16.f64));
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fadds f4,f27,f28
	ctx.f4.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// lwz r31,140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fadds f2,f25,f26
	ctx.f2.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fadds f1,f29,f17
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f17.f64));
	// lwz r26,156(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// fadds f23,f29,f27
	ctx.f23.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lwz r24,160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fadds f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// lfs f24,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f11,340(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f10,344(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f12,336(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// stfs f9,348(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// fmuls f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f8,352(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmuls f11,f7,f30
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// stfs f11,360(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmuls f10,f6,f30
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f12,f25,f30
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// stfs f12,356(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fmuls f9,f5,f30
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// stfs f10,364(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fmuls f8,f4,f30
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// stfs f9,368(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fmuls f7,f3,f30
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// stfs f8,372(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fmuls f6,f2,f30
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// stfs f7,376(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fmuls f5,f1,f30
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f6,380(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// fmuls f4,f13,f30
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f5,384(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fmuls f3,f16,f30
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f30.f64));
	// stfs f4,388(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fmuls f2,f23,f30
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f30.f64));
	// stfs f3,392(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f2,396(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// fadds f1,f22,f17
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f17.f64));
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// fadds f13,f21,f24
	ctx.f13.f64 = double(float(ctx.f21.f64 + ctx.f24.f64));
	// stw r8,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// fadds f12,f20,f16
	ctx.f12.f64 = double(float(ctx.f20.f64 + ctx.f16.f64));
	// stw r7,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r7.u32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stw r6,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// stw r4,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r4.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// stw r27,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r27.u32);
	// stw r26,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r26.u32);
	// stw r24,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r24.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// fmuls f9,f1,f30
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f11,400(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// fmuls f10,f26,f30
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// stfs f10,404(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// fmuls f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f9,408(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// fmuls f7,f12,f30
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f8,412(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f7,416(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r23.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DE860;
	sub_825C3EC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lfs f24,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f24.f64 = double(temp.f32);
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x827e0918
	ctx.lr = 0x839DE878;
	sub_827E0918(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fsubs f3,f27,f17
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f17.f64));
	// fsubs f4,f26,f16
	ctx.f4.f64 = double(float(ctx.f26.f64 - ctx.f16.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DE890;
	sub_825C3EC0(ctx, base);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// fsubs f3,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fneg f4,f25
	ctx.f4.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DE8A8;
	sub_825C3EC0(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// fsubs f3,f28,f17
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f28.f64 - ctx.f17.f64));
	// fsubs f4,f25,f16
	ctx.f4.f64 = double(float(ctx.f25.f64 - ctx.f16.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DE8C0;
	sub_825C3EC0(ctx, base);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// fsubs f3,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// fsubs f4,f25,f26
	ctx.f4.f64 = double(float(ctx.f25.f64 - ctx.f26.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DE8D8;
	sub_825C3EC0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// fsubs f3,f29,f17
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f17.f64));
	// fneg f4,f16
	ctx.f4.u64 = ctx.f16.u64 ^ 0x8000000000000000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DE8F0;
	sub_825C3EC0(ctx, base);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// fsubs f3,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f27.f64));
	// fneg f4,f26
	ctx.f4.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DE908;
	sub_825C3EC0(ctx, base);
	// fsubs f0,f18,f19
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f18.f64 - ctx.f19.f64));
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r26,r11,23064
	ctx.r26.s64 = ctx.r11.s64 + 23064;
	// lfs f13,23064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23064);
	ctx.f13.f64 = double(temp.f32);
	// lfs f25,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f25.f64 = double(temp.f32);
	// lfs f29,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f29.f64 = double(temp.f32);
	// fabs f6,f0
	ctx.f6.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f13
	cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// ble cr6,0x839de938
	if (!cr6.gt) goto loc_839DE938;
	// fsel f13,f0,f25,f24
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f25.f64 : ctx.f24.f64;
	// fnmsubs f0,f13,f29,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f29.f64 - ctx.f0.f64)));
loc_839DE938:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x825f7e40
	ctx.lr = 0x839DE948;
	sub_825F7E40(ctx, base);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x839de95c
	if (cr6.lt) goto loc_839DE95C;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// blt cr6,0x839de960
	if (cr6.lt) goto loc_839DE960;
loc_839DE95C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_839DE960:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f25,96(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r27,r28,1172
	ctx.r27.s64 = ctx.r28.s64 + 1172;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,1172(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1172, temp.u32);
	// stfs f13,1176(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1176, temp.u32);
	// stfs f12,1180(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1180, temp.u32);
	// lbz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839de9b8
	if (cr6.eq) goto loc_839DE9B8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x839de9bc
	goto loc_839DE9BC;
loc_839DE9B8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_839DE9BC:
	// lfs f13,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839de9d8
	if (!cr6.lt) goto loc_839DE9D8;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// b 0x839de9e4
	goto loc_839DE9E4;
loc_839DE9D8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x839de9e8
	if (cr6.lt) goto loc_839DE9E8;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
loc_839DE9E4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_839DE9E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82646fc0
	ctx.lr = 0x839DE9F4;
	sub_82646FC0(ctx, base);
	// lfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f4,0(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,4(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,8(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dea48
	if (cr6.eq) goto loc_839DEA48;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x839dea4c
	goto loc_839DEA4C;
loc_839DEA48:
	// lfs f0,1176(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1176);
	ctx.f0.f64 = double(temp.f32);
loc_839DEA4C:
	// lfs f13,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,1176(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1176, temp.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x839dea6c
	if (cr6.lt) goto loc_839DEA6C;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// blt cr6,0x839dea70
	if (cr6.lt) goto loc_839DEA70;
loc_839DEA6C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_839DEA70:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f25,96(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r31,r28,1184
	ctx.r31.s64 = ctx.r28.s64 + 1184;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1188(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1188, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,1192(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1192, temp.u32);
	// stfs f12,1184(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1184, temp.u32);
	// lbz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839deac8
	if (cr6.eq) goto loc_839DEAC8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x839deacc
	goto loc_839DEACC;
loc_839DEAC8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_839DEACC:
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839deaec
	if (!cr6.lt) goto loc_839DEAEC;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x839deaf8
	goto loc_839DEAF8;
loc_839DEAEC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x839deafc
	if (cr6.lt) goto loc_839DEAFC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_839DEAF8:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_839DEAFC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82646fc0
	ctx.lr = 0x839DEB08;
	sub_82646FC0(ctx, base);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f11,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839deb80
	if (cr6.eq) goto loc_839DEB80;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839deb70
	if (cr6.eq) goto loc_839DEB70;
	// lfs f13,1188(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1188);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,1188(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1188, temp.u32);
	// b 0x839deb84
	goto loc_839DEB84;
loc_839DEB70:
	// lfs f13,1176(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1176);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,1188(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1188, temp.u32);
	// b 0x839deb84
	goto loc_839DEB84;
loc_839DEB80:
	// stfs f0,1188(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1188, temp.u32);
loc_839DEB84:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,1188(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x839deb9c
	if (!cr6.lt) goto loc_839DEB9C;
	// stfs f0,1188(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1188, temp.u32);
loc_839DEB9C:
	// stfs f31,1196(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1196, temp.u32);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stfs f25,1200(r28)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1200, temp.u32);
	// addi r30,r28,1152
	ctx.r30.s64 = ctx.r28.s64 + 1152;
	// stfs f31,1204(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1204, temp.u32);
	// lfs f0,-29628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1208(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1208, temp.u32);
	// lbz r10,1156(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1156);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839debd4
	if (!cr6.eq) goto loc_839DEBD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a9e30
	ctx.lr = 0x839DEBD4;
	sub_825A9E30(ctx, base);
loc_839DEBD4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839debf0
	if (!cr6.eq) goto loc_839DEBF0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_839DEBF0:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// beq cr6,0x839dec88
	if (cr6.eq) goto loc_839DEC88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83102db0
	ctx.lr = 0x839DEC14;
	sub_83102DB0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lbz r4,27(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 27);
	// bl 0x837475e8
	ctx.lr = 0x839DEC20;
	sub_837475E8(ctx, base);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x839dec34
	if (cr6.lt) goto loc_839DEC34;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_839DEC34:
	// fadds f26,f13,f25
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// lfs f0,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x839dec4c
	if (cr6.gt) goto loc_839DEC4C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_839DEC4C:
	// fsubs f27,f13,f25
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f13.f64 - ctx.f25.f64));
	// lfs f0,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x839dec64
	if (cr6.lt) goto loc_839DEC64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_839DEC64:
	// fadds f29,f13,f25
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// lfs f0,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x839dec7c
	if (!cr6.gt) goto loc_839DEC7C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_839DEC7C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fsubs f28,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// bl 0x83102db0
	ctx.lr = 0x839DEC88;
	sub_83102DB0(ctx, base);
loc_839DEC88:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dec98
	if (cr6.eq) goto loc_839DEC98;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
loc_839DEC98:
	// fcmpu cr6,f26,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f31.f64);
	// ble cr6,0x839deca8
	if (!cr6.gt) goto loc_839DECA8;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f26,23492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23492);
	ctx.f26.f64 = double(temp.f32);
loc_839DECA8:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// bge cr6,0x839decb8
	if (!cr6.lt) goto loc_839DECB8;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f27,23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23488);
	ctx.f27.f64 = double(temp.f32);
loc_839DECB8:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// ble cr6,0x839decc8
	if (!cr6.gt) goto loc_839DECC8;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f29,23484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23484);
	ctx.f29.f64 = double(temp.f32);
loc_839DECC8:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bge cr6,0x839decd8
	if (!cr6.lt) goto loc_839DECD8;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f28,23480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23480);
	ctx.f28.f64 = double(temp.f32);
loc_839DECD8:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmr f12,f6
	ctx.f12.f64 = ctx.f6.f64;
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fcmpu cr6,f6,f26
	cr6.compare(ctx.f6.f64, ctx.f26.f64);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f11,f2
	ctx.f11.f64 = double(float(sqrt(ctx.f2.f64)));
	// blt cr6,0x839dedf0
	if (cr6.lt) goto loc_839DEDF0;
	// fcmpu cr6,f27,f6
	cr6.compare(ctx.f27.f64, ctx.f6.f64);
	// blt cr6,0x839dedf0
	if (cr6.lt) goto loc_839DEDF0;
	// lfs f13,1192(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// blt cr6,0x839ded38
	if (cr6.lt) goto loc_839DED38;
	// fcmpu cr6,f28,f13
	cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// bge cr6,0x839deea4
	if (!cr6.lt) goto loc_839DEEA4;
loc_839DED38:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bge cr6,0x839ded50
	if (!cr6.lt) goto loc_839DED50;
	// lfs f0,1180(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,1192(r28)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1192, temp.u32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// b 0x839ded64
	goto loc_839DED64;
loc_839DED50:
	// fcmpu cr6,f28,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// bge cr6,0x839ded64
	if (!cr6.lt) goto loc_839DED64;
	// lfs f0,1180(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f28,1192(r28)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1192, temp.u32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
loc_839DED64:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// fmsubs f12,f11,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 - ctx.f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsqrts f12,f11
	ctx.f12.f64 = double(float(sqrt(ctx.f11.f64)));
	// bge cr6,0x839ded88
	if (!cr6.lt) goto loc_839DED88;
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x839ded8c
	goto loc_839DED8C;
loc_839DED88:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_839DED8C:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x839deda4
	if (cr6.lt) goto loc_839DEDA4;
	// fcmpu cr6,f27,f0
	cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bge cr6,0x839deea4
	if (!cr6.lt) goto loc_839DEEA4;
loc_839DEDA4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839dedb4
	if (!cr6.lt) goto loc_839DEDB4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x839dedb8
	goto loc_839DEDB8;
loc_839DEDB4:
	// fneg f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_839DEDB8:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x839dedd0
	if (cr6.lt) goto loc_839DEDD0;
	// fcmpu cr6,f27,f0
	cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bge cr6,0x839deea4
	if (!cr6.lt) goto loc_839DEEA4;
loc_839DEDD0:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x839dede4
	if (!cr6.gt) goto loc_839DEDE4;
	// stfs f26,0(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x839deea4
	goto loc_839DEEA4;
loc_839DEDE4:
	// stfs f27,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x839deea4
	goto loc_839DEEA4;
loc_839DEDF0:
	// fcmpu cr6,f12,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// bge cr6,0x839dee08
	if (!cr6.lt) goto loc_839DEE08;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f26,0(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// b 0x839dee1c
	goto loc_839DEE1C;
loc_839DEE08:
	// fcmpu cr6,f27,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f12.f64);
	// bge cr6,0x839dee1c
	if (!cr6.lt) goto loc_839DEE1C;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f27,0(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
loc_839DEE1C:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,1192(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1180(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// fmsubs f11,f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 - ctx.f0.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsqrts f12,f10
	ctx.f12.f64 = double(float(sqrt(ctx.f10.f64)));
	// bge cr6,0x839dee44
	if (!cr6.lt) goto loc_839DEE44;
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x839dee48
	goto loc_839DEE48;
loc_839DEE44:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_839DEE48:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1192(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1192, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x839dee60
	if (cr6.lt) goto loc_839DEE60;
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x839deea4
	if (!cr6.lt) goto loc_839DEEA4;
loc_839DEE60:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x839dee70
	if (!cr6.lt) goto loc_839DEE70;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x839dee74
	goto loc_839DEE74;
loc_839DEE70:
	// fneg f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_839DEE74:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1192(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1192, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x839dee8c
	if (cr6.lt) goto loc_839DEE8C;
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x839deea4
	if (!cr6.lt) goto loc_839DEEA4;
loc_839DEE8C:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x839dee9c
	if (!cr6.gt) goto loc_839DEE9C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x839deea0
	goto loc_839DEEA0;
loc_839DEE9C:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_839DEEA0:
	// stfs f0,1192(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1192, temp.u32);
loc_839DEEA4:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,1192(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1192);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// ble cr6,0x839deedc
	if (!cr6.gt) goto loc_839DEEDC;
	// fmr f11,f14
	ctx.f11.f64 = ctx.f14.f64;
	// b 0x839deee0
	goto loc_839DEEE0;
loc_839DEEDC:
	// fneg f11,f14
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f14.u64 ^ 0x8000000000000000;
loc_839DEEE0:
	// lfs f8,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f31
	cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// ble cr6,0x839deef4
	if (!cr6.gt) goto loc_839DEEF4;
	// fmr f12,f15
	ctx.f12.f64 = ctx.f15.f64;
	// b 0x839deef8
	goto loc_839DEEF8;
loc_839DEEF4:
	// fneg f12,f15
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f15.u64 ^ 0x8000000000000000;
loc_839DEEF8:
	// fmuls f7,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f11,-27732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmuls f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f4
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmsubs f3,f6,f0,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fsqrts f9,f2
	ctx.f9.f64 = double(float(sqrt(ctx.f2.f64)));
	// fabs f1,f3
	ctx.f1.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fdivs f7,f1,f9
	ctx.f7.f64 = double(float(ctx.f1.f64 / ctx.f9.f64));
	// fcmpu cr6,f7,f11
	cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bge cr6,0x839def9c
	if (!cr6.lt) goto loc_839DEF9C;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmadds f13,f0,f12,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f14
	cr6.compare(ctx.f12.f64, ctx.f14.f64);
	// bge cr6,0x839def74
	if (!cr6.lt) goto loc_839DEF74;
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// blt cr6,0x839def54
	if (cr6.lt) goto loc_839DEF54;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_839DEF54:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f30,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f10.f64));
	// stfs f11,1192(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 1192, temp.u32);
	// b 0x839def9c
	goto loc_839DEF9C;
loc_839DEF74:
	// fcmpu cr6,f8,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// blt cr6,0x839def80
	if (cr6.lt) goto loc_839DEF80;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_839DEF80:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f30,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f8.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_839DEF9C:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ble cr6,0x839defe0
	if (!cr6.gt) goto loc_839DEFE0;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// b 0x839defe8
	goto loc_839DEFE8;
loc_839DEFE0:
	// lfs f13,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_839DEFE8:
	// lfs f11,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,1192(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bgt cr6,0x839df014
	if (cr6.gt) goto loc_839DF014;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
loc_839DF014:
	// fsubs f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f4,f11,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f3,f13,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f3
	cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// blt cr6,0x839df04c
	if (cr6.lt) goto loc_839DF04C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_839DF04C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// rlwinm r11,r11,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FE;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfsx f28,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f0,f8,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmuls f13,f28,f28
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f29,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f12,f29,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x839df1c8
	if (!cr6.lt) goto loc_839DF1C8;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// fmuls f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f11,f7,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f0.f64));
	// lfsx f10,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f9,f10,f9,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f12.f64));
	// fsqrts f8,f11
	ctx.f8.f64 = double(float(sqrt(ctx.f11.f64)));
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fdivs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// fcmpu cr6,f6,f30
	cr6.compare(ctx.f6.f64, ctx.f30.f64);
	// bge cr6,0x839df1c8
	if (!cr6.lt) goto loc_839DF1C8;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825eb548
	ctx.lr = 0x839DF0BC;
	sub_825EB548(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DF0D4;
	sub_825C3EC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f4,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x839DF0EC;
	sub_825C3EC0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x839df114
	if (!cr6.gt) goto loc_839DF114;
	// fsel f12,f0,f25,f24
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f25.f64 : ctx.f24.f64;
	// lfs f13,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_839DF114:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x839df124
	if (cr6.gt) goto loc_839DF124;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_839DF124:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839df140
	if (cr6.eq) goto loc_839DF140;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,7636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7636);
	ctx.f1.f64 = double(temp.f32);
	// b 0x839df148
	goto loc_839DF148;
loc_839DF140:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f1,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f1.f64 = double(temp.f32);
loc_839DF148:
	// bl 0x826487b8
	ctx.lr = 0x839DF14C;
	sub_826487B8(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f29,f29,f13
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f5,f28,f28,f6
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f0,f3,f30
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmuls f12,f1,f30
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f13,f2,f30
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fadds f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// fcmpu cr6,f27,f9
	cr6.compare(ctx.f27.f64, ctx.f9.f64);
	// bge cr6,0x839df1bc
	if (!cr6.lt) goto loc_839DF1BC;
	// stfs f27,0(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x839df1c8
	goto loc_839DF1C8;
loc_839DF1BC:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x839df1c8
	if (!cr6.lt) goto loc_839DF1C8;
	// stfs f26,0(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_839DF1C8:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f16,f10
	ctx.f8.f64 = double(float(ctx.f16.f64 - ctx.f10.f64));
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f17,f6
	ctx.f4.f64 = double(float(ctx.f17.f64 - ctx.f6.f64));
	// fsubs f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f11,f11
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f13,f7,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f12,f8,f8,f1
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f11,f8,f7,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f10,f3,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f9,f4,f4,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f8,f4,f3,f11
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fsqrts f7,f10
	ctx.f7.f64 = double(float(sqrt(ctx.f10.f64)));
	// fsqrts f6,f9
	ctx.f6.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fdivs f0,f8,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f5.f64));
	// fcmpu cr6,f0,f25
	cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x839df240
	if (!cr6.gt) goto loc_839DF240;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// b 0x839df24c
	goto loc_839DF24C;
loc_839DF240:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x839df24c
	if (!cr6.lt) goto loc_839DF24C;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
loc_839DF24C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x831d16d0
	ctx.lr = 0x839DF254;
	sub_831D16D0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,1208(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1208);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x839df2c0
	if (!cr6.gt) goto loc_839DF2C0;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f17
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f17.f64));
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsubs f9,f11,f16
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f16.f64));
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f10,220(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stfs f9,224(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// bl 0x82a5a8b0
	ctx.lr = 0x839DF29C;
	sub_82A5A8B0(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f17
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f17.f64));
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fadds f3,f5,f16
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f16.f64));
	// stfs f6,0(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f4,4(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f3,8(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
loc_839DF2C0:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce78c
	ctx.lr = 0x839DF2CC;
	__restfpr_14(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DF2D0"))) PPC_WEAK_FUNC(sub_839DF2D0);
PPC_FUNC_IMPL(__imp__sub_839DF2D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x833c8db0
	ctx.lr = 0x839DF2F8;
	sub_833C8DB0(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DF2FC;
	sub_8378B870(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x839df338
	if (cr6.eq) goto loc_839DF338;
	// bl 0x8378b870
	ctx.lr = 0x839DF310;
	sub_8378B870(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8378a8c8
	ctx.lr = 0x839DF328;
	sub_8378A8C8(ctx, base);
	// bl 0x8378b870
	ctx.lr = 0x839DF32C;
	sub_8378B870(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8378a710
	ctx.lr = 0x839DF338;
	sub_8378A710(ctx, base);
loc_839DF338:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x839de3b8
	ctx.lr = 0x839DF374;
	sub_839DE3B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_839DF390"))) PPC_WEAK_FUNC(sub_839DF390);
PPC_FUNC_IMPL(__imp__sub_839DF390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r9,26
	ctx.r9.s64 = 26;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_839DF3AC:
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839df3ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839DF3AC;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,23
	ctx.r11.s64 = 23;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839DF3C4:
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x839df3c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839DF3C4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DF3D4"))) PPC_WEAK_FUNC(sub_839DF3D4);
PPC_FUNC_IMPL(__imp__sub_839DF3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DF3D8"))) PPC_WEAK_FUNC(sub_839DF3D8);
PPC_FUNC_IMPL(__imp__sub_839DF3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x839df400
	if (!cr6.lt) goto loc_839DF400;
loc_839DF3EC:
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x839df3ec
	if (cr6.lt) goto loc_839DF3EC;
loc_839DF400:
	// lis r9,-19946
	ctx.r9.s64 = -1307181056;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// ori r9,r9,17097
	ctx.r9.u64 = ctx.r9.u64 | 17097;
	// cmpwi cr6,r8,23
	cr6.compare<int32_t>(ctx.r8.s32, 23, xer);
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r5,r6,23
	ctx.r5.s64 = ctx.r6.s64 * 23;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// bge cr6,0x839df488
	if (!cr6.lt) goto loc_839DF488;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r7,1(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839df488
	if (!cr6.eq) goto loc_839DF488;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
loc_839DF44C:
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r5,r6,23
	ctx.r5.s64 = ctx.r6.s64 * 23;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839df44c
	if (cr6.eq) goto loc_839DF44C;
loc_839DF488:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DF490"))) PPC_WEAK_FUNC(sub_839DF490);
PPC_FUNC_IMPL(__imp__sub_839DF490) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DF49C"))) PPC_WEAK_FUNC(sub_839DF49C);
PPC_FUNC_IMPL(__imp__sub_839DF49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DF4A0"))) PPC_WEAK_FUNC(sub_839DF4A0);
PPC_FUNC_IMPL(__imp__sub_839DF4A0) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,23792
	ctx.r9.s64 = ctx.r11.s64 + 23792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x839df4d4
	if (cr6.eq) goto loc_839DF4D4;
	// bl 0x82416268
	ctx.lr = 0x839DF4D0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839DF4D4:
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

__attribute__((alias("__imp__sub_839DF4E8"))) PPC_WEAK_FUNC(sub_839DF4E8);
PPC_FUNC_IMPL(__imp__sub_839DF4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// lfs f0,-23488(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// lhz r7,54(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// lfs f13,21704(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21704);
	ctx.f13.f64 = double(temp.f32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lhz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lhz r8,58(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lhz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// lhz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// lhz r9,62(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// lhz r4,66(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r4,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r4.u64);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lfd f8,-8(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f6,-8(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f2,36(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmuls f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DF610"))) PPC_WEAK_FUNC(sub_839DF610);
PPC_FUNC_IMPL(__imp__sub_839DF610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lhz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lfs f0,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21704);
	ctx.f13.f64 = double(temp.f32);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lhz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lhz r9,10(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DF6A0"))) PPC_WEAK_FUNC(sub_839DF6A0);
PPC_FUNC_IMPL(__imp__sub_839DF6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// lfs f0,-23488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lfs f13,21704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21704);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// lhz r7,14(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lhz r8,18(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839DF730"))) PPC_WEAK_FUNC(sub_839DF730);
PPC_FUNC_IMPL(__imp__sub_839DF730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839DF738;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r8,r11,23808
	ctx.r8.s64 = ctx.r11.s64 + 23808;
	// addi r7,r9,23800
	ctx.r7.s64 = ctx.r9.s64 + 23800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839df7a8
	if (cr6.eq) goto loc_839DF7A8;
	// li r11,34
	ctx.r11.s64 = 34;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839DF77C;
	sub_82595150(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839df79c
	if (cr6.eq) goto loc_839DF79C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DF79C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DF79C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839DF7A4;
	sub_82595170(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_839DF7A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x839DF7C0;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839df7e8
	if (cr6.eq) goto loc_839DF7E8;
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
	ctx.lr = 0x839DF7E4;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_839DF7E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x839DF800;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839df828
	if (cr6.eq) goto loc_839DF828;
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
	ctx.lr = 0x839DF824;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_839DF828:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,-32552
	ctx.r9.s64 = ctx.r11.s64 + -32552;
	// addi r8,r10,23792
	ctx.r8.s64 = ctx.r10.s64 + 23792;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DF848"))) PPC_WEAK_FUNC(sub_839DF848);
PPC_FUNC_IMPL(__imp__sub_839DF848) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839df850
	sub_839DF850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DF850"))) PPC_WEAK_FUNC(sub_839DF850);
PPC_FUNC_IMPL(__imp__sub_839DF850) {
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
	// bl 0x839df730
	ctx.lr = 0x839DF870;
	sub_839DF730(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839df890
	if (cr6.eq) goto loc_839DF890;
	// bl 0x82595188
	ctx.lr = 0x839DF880;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x839DF890;
	sub_825952B8(ctx, base);
loc_839DF890:
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

__attribute__((alias("__imp__sub_839DF8AC"))) PPC_WEAK_FUNC(sub_839DF8AC);
PPC_FUNC_IMPL(__imp__sub_839DF8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DF8B0"))) PPC_WEAK_FUNC(sub_839DF8B0);
PPC_FUNC_IMPL(__imp__sub_839DF8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839DF8B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839df8d8
	if (!cr6.eq) goto loc_839DF8D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b4670
	ctx.lr = 0x839DF8D8;
	sub_825B4670(ctx, base);
loc_839DF8D8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839df8f4
	if (!cr6.eq) goto loc_839DF8F4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_839DF8F4:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839df968
	if (cr6.eq) goto loc_839DF968;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,116(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 116);
	// lfs f0,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839DF93C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// stb r7,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r7.u8);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,168(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
loc_839DF968:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839df984
	if (cr6.eq) goto loc_839DF984;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x839DF97C;
	sub_825B33F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_839DF984:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DF98C"))) PPC_WEAK_FUNC(sub_839DF98C);
PPC_FUNC_IMPL(__imp__sub_839DF98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DF990"))) PPC_WEAK_FUNC(sub_839DF990);
PPC_FUNC_IMPL(__imp__sub_839DF990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839DF998;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839df9b8
	if (!cr6.eq) goto loc_839DF9B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b4670
	ctx.lr = 0x839DF9B8;
	sub_825B4670(ctx, base);
loc_839DF9B8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839df9d4
	if (!cr6.eq) goto loc_839DF9D4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_839DF9D4:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839dfa48
	if (cr6.eq) goto loc_839DFA48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// lwz r9,116(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839DFA1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// stb r6,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r6.u8);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r5,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r5.u32);
loc_839DFA48:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dfa64
	if (cr6.eq) goto loc_839DFA64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x839DFA5C;
	sub_825B33F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_839DFA64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DFA6C"))) PPC_WEAK_FUNC(sub_839DFA6C);
PPC_FUNC_IMPL(__imp__sub_839DFA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DFA70"))) PPC_WEAK_FUNC(sub_839DFA70);
PPC_FUNC_IMPL(__imp__sub_839DFA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839DFA78;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r11,-32552
	ctx.r7.s64 = ctx.r11.s64 + -32552;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r10,23808
	ctx.r5.s64 = ctx.r10.s64 + 23808;
	// addi r4,r9,23800
	ctx.r4.s64 = ctx.r9.s64 + 23800;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r10,r3,-22824
	ctx.r10.s64 = ctx.r3.s64 + -22824;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lfs f13,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r8,r9,-24692
	ctx.r8.s64 = ctx.r9.s64 + -24692;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// bl 0x825b4670
	ctx.lr = 0x839DFB58;
	sub_825B4670(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x839DFB60;
	sub_825AB6C8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x839dfc00
	if (cr6.eq) goto loc_839DFC00;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82595718
	ctx.lr = 0x839DFBB0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839dfbc0
	if (cr6.eq) goto loc_839DFBC0;
	// bl 0x837a5d00
	ctx.lr = 0x839DFBBC;
	sub_837A5D00(ctx, base);
	// b 0x839dfbc4
	goto loc_839DFBC4;
loc_839DFBC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_839DFBC4:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839dfbf8
	if (cr6.eq) goto loc_839DFBF8;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8259d6c0
	ctx.lr = 0x839DFBE0;
	sub_8259D6C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x837a5d28
	ctx.lr = 0x839DFBEC;
	sub_837A5D28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x837a5ea8
	ctx.lr = 0x839DFBF8;
	sub_837A5EA8(ctx, base);
loc_839DFBF8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d8190
	ctx.lr = 0x839DFC00;
	sub_825D8190(ctx, base);
loc_839DFC00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DFC0C"))) PPC_WEAK_FUNC(sub_839DFC0C);
PPC_FUNC_IMPL(__imp__sub_839DFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DFC10"))) PPC_WEAK_FUNC(sub_839DFC10);
PPC_FUNC_IMPL(__imp__sub_839DFC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839DFC18;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dfcfc
	if (cr6.eq) goto loc_839DFCFC;
	// lbz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// addi r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 + 84;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839dfc48
	if (!cr6.eq) goto loc_839DFC48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x839DFC48;
	sub_825AB6C8(ctx, base);
loc_839DFC48:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839dfc64
	if (!cr6.eq) goto loc_839DFC64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839DFC64:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839dfc84
	if (cr6.eq) goto loc_839DFC84;
	// bl 0x82a1aaa8
	ctx.lr = 0x839DFC74;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dfc84
	if (cr6.eq) goto loc_839DFC84;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839DFC84:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dfc98
	if (cr6.eq) goto loc_839DFC98;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_839DFC98:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839dfcfc
	if (!cr6.eq) goto loc_839DFCFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x837a5ea8
	ctx.lr = 0x839DFCB0;
	sub_837A5EA8(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lfs f10,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f9,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
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
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x837a5d88
	ctx.lr = 0x839DFCFC;
	sub_837A5D88(ctx, base);
loc_839DFCFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839DFD04"))) PPC_WEAK_FUNC(sub_839DFD04);
PPC_FUNC_IMPL(__imp__sub_839DFD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DFD08"))) PPC_WEAK_FUNC(sub_839DFD08);
PPC_FUNC_IMPL(__imp__sub_839DFD08) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839dfd78
	if (!cr6.eq) goto loc_839DFD78;
	// bl 0x82a585e8
	ctx.lr = 0x839DFD2C;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839DFD40;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839dfd50
	if (cr6.eq) goto loc_839DFD50;
	// bl 0x837a47a0
	ctx.lr = 0x839DFD4C;
	sub_837A47A0(ctx, base);
	// b 0x839dfd54
	goto loc_839DFD54;
loc_839DFD50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839DFD54:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839dfd74
	if (!cr6.eq) goto loc_839DFD74;
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
loc_839DFD74:
	// bl 0x837a4840
	ctx.lr = 0x839DFD78;
	sub_837A4840(ctx, base);
loc_839DFD78:
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

__attribute__((alias("__imp__sub_839DFD90"))) PPC_WEAK_FUNC(sub_839DFD90);
PPC_FUNC_IMPL(__imp__sub_839DFD90) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dfe40
	if (cr6.eq) goto loc_839DFE40;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839dfe40
	if (cr6.eq) goto loc_839DFE40;
	// bl 0x82a52b70
	ctx.lr = 0x839DFDC4;
	sub_82A52B70(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839dfe40
	if (cr6.eq) goto loc_839DFE40;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839dfe00
	if (cr6.eq) goto loc_839DFE00;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r30,13(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837a44a0
	ctx.lr = 0x839DFDF0;
	sub_837A44A0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839dfe00
	if (cr6.eq) goto loc_839DFE00;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x837a44b0
	ctx.lr = 0x839DFE00;
	sub_837A44B0(ctx, base);
loc_839DFE00:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839dfe38
	if (cr6.eq) goto loc_839DFE38;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839d8190
	ctx.lr = 0x839DFE20;
	sub_839D8190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x837a4448
	ctx.lr = 0x839DFE2C;
	sub_837A4448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x837a4458
	ctx.lr = 0x839DFE38;
	sub_837A4458(ctx, base);
loc_839DFE38:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x837a4d50
	ctx.lr = 0x839DFE40;
	sub_837A4D50(ctx, base);
loc_839DFE40:
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

__attribute__((alias("__imp__sub_839DFE5C"))) PPC_WEAK_FUNC(sub_839DFE5C);
PPC_FUNC_IMPL(__imp__sub_839DFE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DFE60"))) PPC_WEAK_FUNC(sub_839DFE60);
PPC_FUNC_IMPL(__imp__sub_839DFE60) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x839dfe90
	if (cr6.lt) goto loc_839DFE90;
	// beq cr6,0x839dfebc
	if (cr6.eq) goto loc_839DFEBC;
	// b 0x839dfee8
	goto loc_839DFEE8;
loc_839DFE90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DFEA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dfee8
	if (cr6.eq) goto loc_839DFEE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_839DFEBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DFED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839dfee8
	if (cr6.eq) goto loc_839DFEE8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_839DFEE8:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_839DFF04"))) PPC_WEAK_FUNC(sub_839DFF04);
PPC_FUNC_IMPL(__imp__sub_839DFF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DFF08"))) PPC_WEAK_FUNC(sub_839DFF08);
PPC_FUNC_IMPL(__imp__sub_839DFF08) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x839dff30
	if (!cr6.eq) goto loc_839DFF30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839DFF30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839DFF30:
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

__attribute__((alias("__imp__sub_839DFF44"))) PPC_WEAK_FUNC(sub_839DFF44);
PPC_FUNC_IMPL(__imp__sub_839DFF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DFF48"))) PPC_WEAK_FUNC(sub_839DFF48);
PPC_FUNC_IMPL(__imp__sub_839DFF48) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,24068
	ctx.r9.s64 = ctx.r11.s64 + 24068;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x839dffc4
	if (cr6.eq) goto loc_839DFFC4;
	// bl 0x82a585e8
	ctx.lr = 0x839DFF7C;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x839DFF8C;
	sub_82595150(ctx, base);
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839dffb4
	if (cr6.eq) goto loc_839DFFB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837a5140
	ctx.lr = 0x839DFFA0;
	sub_837A5140(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x839DFFA4;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x839DFFB4;
	sub_825952B8(ctx, base);
loc_839DFFB4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x839DFFBC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
loc_839DFFC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83535be8
	ctx.lr = 0x839DFFCC;
	sub_83535BE8(ctx, base);
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

__attribute__((alias("__imp__sub_839DFFE4"))) PPC_WEAK_FUNC(sub_839DFFE4);
PPC_FUNC_IMPL(__imp__sub_839DFFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839DFFE8"))) PPC_WEAK_FUNC(sub_839DFFE8);
PPC_FUNC_IMPL(__imp__sub_839DFFE8) {
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
	// bl 0x839dff48
	ctx.lr = 0x839E0008;
	sub_839DFF48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0028
	if (cr6.eq) goto loc_839E0028;
	// bl 0x82595188
	ctx.lr = 0x839E0018;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x839E0028;
	sub_825952B8(ctx, base);
loc_839E0028:
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

__attribute__((alias("__imp__sub_839E0044"))) PPC_WEAK_FUNC(sub_839E0044);
PPC_FUNC_IMPL(__imp__sub_839E0044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E0048"))) PPC_WEAK_FUNC(sub_839E0048);
PPC_FUNC_IMPL(__imp__sub_839E0048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E0050;
	__savegprlr_29(ctx, base);
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
	// bl 0x835360c0
	ctx.lr = 0x839E0064;
	sub_835360C0(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,24068
	ctx.r8.s64 = ctx.r10.s64 + 24068;
	// addi r7,r9,23956
	ctx.r7.s64 = ctx.r9.s64 + 23956;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r6,27
	ctx.r6.s64 = 27;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x83537ae8
	ctx.lr = 0x839E00A8;
	sub_83537AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839dfd08
	ctx.lr = 0x839E00B4;
	sub_839DFD08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E00C0"))) PPC_WEAK_FUNC(sub_839E00C0);
PPC_FUNC_IMPL(__imp__sub_839E00C0) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x83740a98
	ctx.lr = 0x839E00DC;
	sub_83740A98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x839e00fc
	if (!cr6.gt) goto loc_839E00FC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bgt cr6,0x839e00fc
	if (cr6.gt) goto loc_839E00FC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e00fc
	if (cr6.eq) goto loc_839E00FC;
	// bl 0x837b1508
	ctx.lr = 0x839E00FC;
	sub_837B1508(ctx, base);
loc_839E00FC:
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

__attribute__((alias("__imp__sub_839E0110"))) PPC_WEAK_FUNC(sub_839E0110);
PPC_FUNC_IMPL(__imp__sub_839E0110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r4.u8);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_839E0124"))) PPC_WEAK_FUNC(sub_839E0124);
PPC_FUNC_IMPL(__imp__sub_839E0124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E0128"))) PPC_WEAK_FUNC(sub_839E0128);
PPC_FUNC_IMPL(__imp__sub_839E0128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0154
	if (cr6.eq) goto loc_839E0154;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f2,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-3404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3404);
	ctx.f1.f64 = double(temp.f32);
	// b 0x837b10f8
	sub_837B10F8(ctx, base);
	return;
loc_839E0154:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f2,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f1.f64 = double(temp.f32);
	// b 0x837b10f8
	sub_837B10F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E0168"))) PPC_WEAK_FUNC(sub_839E0168);
PPC_FUNC_IMPL(__imp__sub_839E0168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E016C"))) PPC_WEAK_FUNC(sub_839E016C);
PPC_FUNC_IMPL(__imp__sub_839E016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E0170"))) PPC_WEAK_FUNC(sub_839E0170);
PPC_FUNC_IMPL(__imp__sub_839E0170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E0178;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e01d0
	if (cr6.eq) goto loc_839E01D0;
	// bl 0x82a585e8
	ctx.lr = 0x839E0194;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839E01A4;
	sub_82595150(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e01c4
	if (cr6.eq) goto loc_839E01C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E01C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839E01C4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839E01CC;
	sub_82595170(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_839E01D0:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0218
	if (cr6.eq) goto loc_839E0218;
	// bl 0x82a585e8
	ctx.lr = 0x839E01E0;
	sub_82A585E8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839E01F0;
	sub_82595150(ctx, base);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839e020c
	if (cr6.eq) goto loc_839E020C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837aaab8
	ctx.lr = 0x839E0204;
	sub_837AAAB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x839E020C;
	sub_82416268(ctx, base);
loc_839E020C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839E0214;
	sub_82595170(ctx, base);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_839E0218:
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E0234;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E023C"))) PPC_WEAK_FUNC(sub_839E023C);
PPC_FUNC_IMPL(__imp__sub_839E023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E0240"))) PPC_WEAK_FUNC(sub_839E0240);
PPC_FUNC_IMPL(__imp__sub_839E0240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E0248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29148
	ctx.r11.s64 = ctx.r11.s64 + -29148;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e027c
	if (!cr6.eq) goto loc_839E027C;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x839e02a4
	goto loc_839E02A4;
loc_839E027C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x839e029c
	if (!cr6.eq) goto loc_839E029C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839e02a0
	if (cr6.eq) goto loc_839E02A0;
loc_839E029C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839E02A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_839E02A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e0360
	if (!cr6.eq) goto loc_839E0360;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0360
	if (cr6.eq) goto loc_839E0360;
	// lbz r11,82(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 82);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e0360
	if (!cr6.eq) goto loc_839E0360;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E02DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e0360
	if (cr6.eq) goto loc_839E0360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57b58
	ctx.lr = 0x839E02F0;
	sub_82A57B58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0360
	if (cr6.eq) goto loc_839E0360;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mulli r8,r10,248
	ctx.r8.s64 = ctx.r10.s64 * 248;
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r7,6456
	ctx.r11.s64 = ctx.r7.s64 * 6456;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r5,209(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 209);
	// mulli r11,r5,100
	ctx.r11.s64 = ctx.r5.s64 * 100;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// bl 0x837b1768
	ctx.lr = 0x839E0334;
	sub_837B1768(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83740a50
	ctx.lr = 0x839E033C;
	sub_83740A50(ctx, base);
	// lbz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b1748
	ctx.lr = 0x839E0348;
	sub_837B1748(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,13(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E0360;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839E0360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E0368"))) PPC_WEAK_FUNC(sub_839E0368);
PPC_FUNC_IMPL(__imp__sub_839E0368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E0370;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0430
	if (cr6.eq) goto loc_839E0430;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839e0430
	if (cr6.eq) goto loc_839E0430;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 712);
	// lwz r11,636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0430
	if (cr6.eq) goto loc_839E0430;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839e0430
	if (cr6.eq) goto loc_839E0430;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r8,r9,248
	ctx.r8.s64 = ctx.r9.s64 * 248;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r6,172(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 172);
	// cmplwi cr6,r6,32767
	cr6.compare<uint32_t>(ctx.r6.u32, 32767, xer);
	// beq cr6,0x839e0430
	if (cr6.eq) goto loc_839E0430;
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r11,r7,6456
	ctx.r11.s64 = ctx.r7.s64 * 6456;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r11,209(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 209);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,104
	ctx.r30.s64 = ctx.r11.s64 + 104;
	// bl 0x831ce980
	ctx.lr = 0x839E0400;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829112e0
	ctx.lr = 0x839E040C;
	sub_829112E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839e0430
	if (cr6.eq) goto loc_839E0430;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x839E0428;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839e0170
	ctx.lr = 0x839E0430;
	sub_839E0170(ctx, base);
loc_839E0430:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E0438"))) PPC_WEAK_FUNC(sub_839E0438);
PPC_FUNC_IMPL(__imp__sub_839E0438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stfs f1,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stw r4,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// stfs f2,288(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// sth r11,294(r3)
	PPC_STORE_U16(ctx.r3.u32 + 294, ctx.r11.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,2(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r9,296(r3)
	PPC_STORE_U16(ctx.r3.u32 + 296, ctx.r9.u16);
	// stb r8,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r8.u8);
	// stb r10,276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 276, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E0490"))) PPC_WEAK_FUNC(sub_839E0490);
PPC_FUNC_IMPL(__imp__sub_839E0490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839E0498;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e05c0
	if (cr6.eq) goto loc_839E05C0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// mulli r10,r11,248
	ctx.r10.s64 = ctx.r11.s64 * 248;
	// lwz r11,712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 712);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// lhz r9,172(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 172);
	// addi r9,r9,-32767
	ctx.r9.s64 = ctx.r9.s64 + -32767;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfe r28,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x839e05a8
	if (cr6.eq) goto loc_839E05A8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e05a8
	if (cr6.eq) goto loc_839E05A8;
	// lhz r7,294(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 294);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mulli r11,r7,6456
	ctx.r11.s64 = ctx.r7.s64 * 6456;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r11,209(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 209);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r29,r11,104
	ctx.r29.s64 = ctx.r11.s64 + 104;
	// bl 0x831ce980
	ctx.lr = 0x839E0528;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829112e0
	ctx.lr = 0x839E0534;
	sub_829112E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e054c
	if (!cr6.eq) goto loc_839E054C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e0568
	if (!cr6.eq) goto loc_839E0568;
loc_839E054C:
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x831ce980
	ctx.lr = 0x839E0560;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e0170
	ctx.lr = 0x839E0568;
	sub_839E0170(ctx, base);
loc_839E0568:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0594
	if (cr6.eq) goto loc_839E0594;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E0588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839e0598
	if (!cr6.eq) goto loc_839E0598;
loc_839E0594:
	// li r28,0
	ctx.r28.s64 = 0;
loc_839E0598:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 & ctx.r28.u64;
loc_839E05A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E05C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839E05C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E05C8"))) PPC_WEAK_FUNC(sub_839E05C8);
PPC_FUNC_IMPL(__imp__sub_839E05C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E05D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r8,r11,24272
	ctx.r8.s64 = ctx.r11.s64 + 24272;
	// addi r7,r9,24260
	ctx.r7.s64 = ctx.r9.s64 + 24260;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839e063c
	if (cr6.eq) goto loc_839E063C;
	// bl 0x82a585e8
	ctx.lr = 0x839E0604;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839E0614;
	sub_82595150(ctx, base);
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839e0630
	if (cr6.eq) goto loc_839E0630;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837aaab8
	ctx.lr = 0x839E0628;
	sub_837AAAB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x839E0630;
	sub_82416268(ctx, base);
loc_839E0630:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839E0638;
	sub_82595170(ctx, base);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
loc_839E063C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0688
	if (cr6.eq) goto loc_839E0688;
	// bl 0x82a585e8
	ctx.lr = 0x839E064C;
	sub_82A585E8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839E065C;
	sub_82595150(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e067c
	if (cr6.eq) goto loc_839E067C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E067C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839E067C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839E0684;
	sub_82595170(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_839E0688:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x839E069C;
	sub_825C3358(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// addi r8,r9,-24712
	ctx.r8.s64 = ctx.r9.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x839E06B4;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839e06dc
	if (cr6.eq) goto loc_839E06DC;
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
	ctx.lr = 0x839E06D8;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_839E06DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r31,196
	ctx.r30.s64 = ctx.r31.s64 + 196;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x839E06F4;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839e071c
	if (cr6.eq) goto loc_839E071C;
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
	ctx.lr = 0x839E0718;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_839E071C:
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82a5c688
	ctx.lr = 0x839E0724;
	sub_82A5C688(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,-32552
	ctx.r9.s64 = ctx.r11.s64 + -32552;
	// addi r8,r10,23792
	ctx.r8.s64 = ctx.r10.s64 + 23792;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E0744"))) PPC_WEAK_FUNC(sub_839E0744);
PPC_FUNC_IMPL(__imp__sub_839E0744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E0748"))) PPC_WEAK_FUNC(sub_839E0748);
PPC_FUNC_IMPL(__imp__sub_839E0748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// stvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// stvx128 v58,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E0798"))) PPC_WEAK_FUNC(sub_839E0798);
PPC_FUNC_IMPL(__imp__sub_839E0798) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82624408
	ctx.lr = 0x839E07D4;
	sub_82624408(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E07E4"))) PPC_WEAK_FUNC(sub_839E07E4);
PPC_FUNC_IMPL(__imp__sub_839E07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E07E8"))) PPC_WEAK_FUNC(sub_839E07E8);
PPC_FUNC_IMPL(__imp__sub_839E07E8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E07F0"))) PPC_WEAK_FUNC(sub_839E07F0);
PPC_FUNC_IMPL(__imp__sub_839E07F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839e07f8
	sub_839E07F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E07F8"))) PPC_WEAK_FUNC(sub_839E07F8);
PPC_FUNC_IMPL(__imp__sub_839E07F8) {
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
	// bl 0x839e05c8
	ctx.lr = 0x839E0818;
	sub_839E05C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0838
	if (cr6.eq) goto loc_839E0838;
	// bl 0x82595188
	ctx.lr = 0x839E0828;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x839E0838;
	sub_825952B8(ctx, base);
loc_839E0838:
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

__attribute__((alias("__imp__sub_839E0854"))) PPC_WEAK_FUNC(sub_839E0854);
PPC_FUNC_IMPL(__imp__sub_839E0854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E0858"))) PPC_WEAK_FUNC(sub_839E0858);
PPC_FUNC_IMPL(__imp__sub_839E0858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839E0860;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x839e0a64
	if (cr6.eq) goto loc_839E0A64;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// addi r11,r11,-29148
	ctx.r11.s64 = ctx.r11.s64 + -29148;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e089c
	if (!cr6.eq) goto loc_839E089C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x839e08c4
	goto loc_839E08C4;
loc_839E089C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x839e08bc
	if (!cr6.eq) goto loc_839E08BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839e08c0
	if (cr6.eq) goto loc_839E08C0;
loc_839E08BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839E08C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_839E08C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e08e4
	if (cr6.eq) goto loc_839E08E4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839E08E4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e0978
	if (!cr6.eq) goto loc_839E0978;
	// bl 0x82a585e8
	ctx.lr = 0x839E08FC;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,268
	ctx.r4.s64 = 268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E0910;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e093c
	if (cr6.eq) goto loc_839E093C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83740a50
	ctx.lr = 0x839E0924;
	sub_83740A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x837c9af0
	ctx.lr = 0x839E0938;
	sub_837C9AF0(ctx, base);
	// b 0x839e0940
	goto loc_839E0940;
loc_839E093C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839E0940:
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e0958
	if (!cr6.eq) goto loc_839E0958;
loc_839E094C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839E0958:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// mulli r5,r11,10000
	ctx.r5.s64 = ctx.r11.s64 * 10000;
	// bl 0x826501d8
	ctx.lr = 0x839E096C;
	sub_826501D8(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
loc_839E0978:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e09c0
	if (!cr6.eq) goto loc_839E09C0;
	// bl 0x82a585e8
	ctx.lr = 0x839E0988;
	sub_82A585E8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,892
	ctx.r4.s64 = 892;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x839E099C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e09b0
	if (cr6.eq) goto loc_839E09B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837aa440
	ctx.lr = 0x839E09AC;
	sub_837AA440(ctx, base);
	// b 0x839e09b4
	goto loc_839E09B4;
loc_839E09B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839E09B4:
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e094c
	if (cr6.eq) goto loc_839E094C;
loc_839E09C0:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E09D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e094c
	if (cr6.eq) goto loc_839E094C;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a9eb0
	ctx.lr = 0x839E09EC;
	sub_825A9EB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e09fc
	if (cr6.eq) goto loc_839E09FC;
	// bl 0x82a16f08
	ctx.lr = 0x839E09F8;
	sub_82A16F08(ctx, base);
	// stb r3,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r3.u8);
loc_839E09FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0a10
	if (cr6.eq) goto loc_839E0A10;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_839E0A10:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b1748
	ctx.lr = 0x839E0A1C;
	sub_837B1748(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f1,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837b1560
	ctx.lr = 0x839E0A30;
	sub_837B1560(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b1690
	ctx.lr = 0x839E0A3C;
	sub_837B1690(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83740a98
	ctx.lr = 0x839E0A44;
	sub_83740A98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x839e0a60
	if (!cr6.gt) goto loc_839E0A60;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bgt cr6,0x839e0a60
	if (cr6.gt) goto loc_839E0A60;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b1508
	ctx.lr = 0x839E0A5C;
	sub_837B1508(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_839E0A60:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_839E0A64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E0A70"))) PPC_WEAK_FUNC(sub_839E0A70);
PPC_FUNC_IMPL(__imp__sub_839E0A70) {
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
	// lbz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// addi r31,r3,196
	ctx.r31.s64 = ctx.r3.s64 + 196;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e0a98
	if (!cr6.eq) goto loc_839E0A98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x839E0A98;
	sub_825AB6C8(ctx, base);
loc_839E0A98:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e0ab4
	if (!cr6.eq) goto loc_839E0AB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839E0AB4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e0ad4
	if (cr6.eq) goto loc_839E0AD4;
	// bl 0x82a1aaa8
	ctx.lr = 0x839E0AC4;
	sub_82A1AAA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e0ad8
	if (!cr6.eq) goto loc_839E0AD8;
loc_839E0AD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839E0AD8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0aec
	if (cr6.eq) goto loc_839E0AEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_839E0AEC:
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

__attribute__((alias("__imp__sub_839E0B00"))) PPC_WEAK_FUNC(sub_839E0B00);
PPC_FUNC_IMPL(__imp__sub_839E0B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839E0B08;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r7,r11,-32552
	ctx.r7.s64 = ctx.r11.s64 + -32552;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r6,r10,24272
	ctx.r6.s64 = ctx.r10.s64 + 24272;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r5,r9,24260
	ctx.r5.s64 = ctx.r9.s64 + 24260;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
	// li r5,100
	ctx.r5.s64 = 100;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// bl 0x831ce980
	ctx.lr = 0x839E0B94;
	sub_831CE980(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// stb r30,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r30.u8);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,5884(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5884);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// bl 0x82a5c280
	ctx.lr = 0x839E0BB8;
	sub_82A5C280(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r30,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r30.u8);
	// addi r6,r8,-24692
	ctx.r6.s64 = ctx.r8.s64 + -24692;
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// addi r5,r7,-24672
	ctx.r5.s64 = ctx.r7.s64 + -24672;
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stw r6,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r6.u32);
	// addi r28,r31,196
	ctx.r28.s64 = ctx.r31.s64 + 196;
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// addi r3,r4,7056
	ctx.r3.s64 = ctx.r4.s64 + 7056;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r27,r31,216
	ctx.r27.s64 = ctx.r31.s64 + 216;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stb r30,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r30.u8);
	// stfs f31,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stfs f31,288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// bl 0x83935df8
	ctx.lr = 0x839E0C44;
	sub_83935DF8(ctx, base);
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mulli r5,r26,10000
	ctx.r5.s64 = ctx.r26.s64 * 10000;
	// divw r9,r10,r10
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r10.s32);
	// sth r10,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r10.u16);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r7,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r7.u16);
	// li r4,2
	ctx.r4.s64 = 2;
	// andc r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// twllei r10,0
	// twlgei r11,-1
	// bl 0x826501d8
	ctx.lr = 0x839E0C84;
	sub_826501D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x839E0C8C;
	sub_825AB6C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a9e30
	ctx.lr = 0x839E0C94;
	sub_825A9E30(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r5,r10,7000
	ctx.r5.s64 = ctx.r10.s64 + 7000;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// bl 0x831d0b08
	ctx.lr = 0x839E0CB4;
	sub_831D0B08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6bf8
	ctx.lr = 0x839E0CBC;
	sub_828C6BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E0CCC"))) PPC_WEAK_FUNC(sub_839E0CCC);
PPC_FUNC_IMPL(__imp__sub_839E0CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E0CD0"))) PPC_WEAK_FUNC(sub_839E0CD0);
PPC_FUNC_IMPL(__imp__sub_839E0CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x839E0CD8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce740
	ctx.lr = 0x839E0CE0;
	__savefpr_14(ctx, base);
	// addi r12,r1,-304
	ctx.r12.s64 = ctx.r1.s64 + -304;
	// bl 0x831d1234
	ctx.lr = 0x839E0CE8;
	__savevmx_120(ctx, base);
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e2cc0
	if (cr6.eq) goto loc_839E2CC0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 276, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e2cc0
	if (cr6.eq) goto loc_839E2CC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E0D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e2cc0
	if (cr6.eq) goto loc_839E2CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e0a70
	ctx.lr = 0x839E0D34;
	sub_839E0A70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e0d64
	if (cr6.eq) goto loc_839E0D64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b1748
	ctx.lr = 0x839E0D4C;
	sub_837B1748(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f1,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837b1560
	ctx.lr = 0x839E0D60;
	sub_837B1560(ctx, base);
	// b 0x839e2cc0
	goto loc_839E2CC0;
loc_839E0D64:
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r20,r11,9008
	ctx.r20.s64 = ctx.r11.s64 + 9008;
	// lfs f28,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lbz r28,292(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 292);
	// addi r19,r10,-26260
	ctx.r19.s64 = ctx.r10.s64 + -26260;
	// stfs f28,288(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r14,r11,24132
	ctx.r14.s64 = ctx.r11.s64 + 24132;
	// lwz r22,8(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mulli r11,r8,248
	ctx.r11.s64 = ctx.r8.s64 * 248;
	// lfs f31,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f27.f64 = double(temp.f32);
	// fmr f16,f31
	ctx.f16.f64 = ctx.f31.f64;
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f15,f31
	ctx.f15.f64 = ctx.f31.f64;
	// lwz r29,8(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmr f17,f31
	ctx.f17.f64 = ctx.f31.f64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mulli r10,r8,248
	ctx.r10.s64 = ctx.r8.s64 * 248;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mulli r9,r8,248
	ctx.r9.s64 = ctx.r8.s64 * 248;
	// lhz r6,172(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 172);
	// lhz r27,174(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 174);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// lhz r26,176(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 176);
	// lhz r25,172(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 172);
	// addi r16,r31,48
	ctx.r16.s64 = ctx.r31.s64 + 48;
	// lhz r24,174(r10)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r10.u32 + 174);
	// add r17,r9,r22
	ctx.r17.u64 = ctx.r9.u64 + ctx.r22.u64;
	// lhz r23,176(r10)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r10.u32 + 176);
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// add r15,r9,r29
	ctx.r15.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// cmpwi cr6,r30,32767
	cr6.compare<int32_t>(ctx.r30.s32, 32767, xer);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// beq cr6,0x839e2b68
	if (cr6.eq) goto loc_839E2B68;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f1,20048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837b1560
	ctx.lr = 0x839E0E2C;
	sub_837B1560(ctx, base);
	// clrlwi r21,r28,24
	ctx.r21.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x839e0e40
	if (cr6.eq) goto loc_839E0E40;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b1640
	ctx.lr = 0x839E0E40;
	sub_837B1640(ctx, base);
loc_839E0E40:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 * 248;
	// lfs f11,8976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8976);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,212(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhz r8,178(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 178);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// lfd f0,200(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f12,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839e0e88
	if (!cr6.lt) goto loc_839E0E88;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x839e0e94
	goto loc_839E0E94;
loc_839E0E88:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x839e0e94
	if (cr6.lt) goto loc_839E0E94;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_839E0E94:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lis r18,-31767
	ctx.r18.s64 = -2081882112;
	// lhz r10,178(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 178);
	// lfs f13,-29164(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -29164);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lfd f0,200(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839e0ed0
	if (!cr6.lt) goto loc_839E0ED0;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x839e0edc
	goto loc_839E0EDC;
loc_839E0ED0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x839e0edc
	if (cr6.lt) goto loc_839E0EDC;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_839E0EDC:
	// extsh r7,r25
	ctx.r7.s64 = ctx.r25.s16;
	// fmuls f30,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// extsw r4,r30
	ctx.r4.s64 = ctx.r30.s32;
	// extsh r6,r24
	ctx.r6.s64 = ctx.r24.s16;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// extsh r5,r23
	ctx.r5.s64 = ctx.r23.s16;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// lfd f0,200(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// std r6,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r6.u64);
	// lfd f13,304(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f10,200(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f3,f12
	ctx.f3.f64 = double(ctx.f12.s64);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x83740a98
	ctx.lr = 0x839E0F74;
	sub_83740A98(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r8,20592
	ctx.r6.s64 = ctx.r8.s64 + 20592;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vupkd3d128 v124,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v124 = vTemp;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lvx128 v123,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,1
	ctx.r4.s64 = 1;
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r28,3
	ctx.r28.s64 = 3;
	// lvx128 v62,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v126,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vsubfp128 v125,v62,v123
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v125.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v123.f32)));
	// vspltw128 v9,v124,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v124.u32), 0x0));
	// vrefp128 v0,v126
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v126.f32)));
	// vor128 v13,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vor128 v11,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vnmsubfp v8,v13,v0,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v11,v0,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v8,v0,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v13,v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v61,v125,v13
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v60,v61,v61
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32), 0xEF));
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// stvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f27
	cr6.compare(ctx.f10.f64, ctx.f27.f64);
	// bgt cr6,0x839e1000
	if (cr6.gt) goto loc_839E1000;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x839e1010
	if (cr6.eq) goto loc_839E1010;
loc_839E1000:
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
loc_839E1010:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b1690
	ctx.lr = 0x839E1018;
	sub_837B1690(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fsubs f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lvlx128 v58,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddcfp128 v13,v125,v13,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v125.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vaddfp128 v57,v123,v13
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v123.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v57,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r6,248
	ctx.r11.s64 = ctx.r6.s64 * 248;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mulli r10,r6,248
	ctx.r10.s64 = ctx.r6.s64 * 248;
	// lhz r4,168(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// lhz r5,166(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// lhz r3,170(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r10,166(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r6,170(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// lhz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// stfs f1,0(r16)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v56,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v56,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddcfp128 v0,v13,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vaddfp128 v55,v63,v0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v55,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824aed50
	ctx.lr = 0x839E1128;
	sub_824AED50(ctx, base);
	// fmadds f9,f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f29.f64));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f9,0(r16)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r16.u32 + 0, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvlx128 v54,r0,r16
	temp.u32 = ctx.r16.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw128 v125,-1
	simde_mm_store_si128((simde__m128i*)ctx.v125.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// vrefp128 v12,v126
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v126.f32)));
	// vspltw128 v0,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// addi r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 + 2496;
	// vspltw128 v5,v124,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v124.u32), 0x0));
	// addi r9,r11,2480
	ctx.r9.s64 = ctx.r11.s64 + 2480;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v53,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v125.u8));
	// vor v2,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v13,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vspltisw128 v52,3
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_set1_epi32(int(0x3)));
	// vor128 v8,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vslw128 v9,v53,v53
	ctx.v9.u32[0] = ctx.v53.u32[0] << (ctx.v53.u8[0] & 0x1F);
	ctx.v9.u32[1] = ctx.v53.u32[1] << (ctx.v53.u8[4] & 0x1F);
	ctx.v9.u32[2] = ctx.v53.u32[2] << (ctx.v53.u8[8] & 0x1F);
	ctx.v9.u32[3] = ctx.v53.u32[3] << (ctx.v53.u8[12] & 0x1F);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vmaddcfp128 v2,v0,v2,v127
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// vnmsubfp v28,v13,v12,v5
	simde_mm_store_ps(ctx.v28.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v5.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// addi r6,r8,2512
	ctx.r6.s64 = ctx.r8.s64 + 2512;
	// addi r5,r7,2528
	ctx.r5.s64 = ctx.r7.s64 + 2528;
	// vspltisw128 v51,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_set1_epi32(int(0x2)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vsldoi128 v50,v127,v125,12
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v125.u8), 4));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vsldoi128 v49,v125,v127,8
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)ctx.v127.u8), 8));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lvx128 v41,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lvx128 v4,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r11,2592
	ctx.r7.s64 = ctx.r11.s64 + 2592;
	// addi r6,r10,2608
	ctx.r6.s64 = ctx.r10.s64 + 2608;
	// vor128 v3,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// addi r9,r4,2544
	ctx.r9.s64 = ctx.r4.s64 + 2544;
	// vupkd3d128 v123,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v123 = vTemp;
	// addi r8,r3,2560
	ctx.r8.s64 = ctx.r3.s64 + 2560;
	// vsldoi128 v122,v127,v125,4
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v125.u8), 12));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vand128 v22,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vmaddcfp128 v11,v2,v11,v127
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// lvx128 v30,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v12,v28,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v29,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvx128 v31,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,2624
	ctx.r11.s64 = ctx.r4.s64 + 2624;
	// addi r3,r5,2576
	ctx.r3.s64 = ctx.r5.s64 + 2576;
	// fmr f1,f28
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lvx128 v40,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel v7,v10,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vor128 v48,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vnmsubfp v28,v8,v13,v5
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v28.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v5.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v27,v13,v13
	simde_mm_store_ps(ctx.v27.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v47,v48,v7
	simde_mm_store_ps(ctx.v47.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v7.f32)));
	// lvx128 v7,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v13,v28,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vcfpsxws128 v46,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v47.f32)));
	// vcsxwfp128 v5,v46,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vand128 v11,v46,v52
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vadduws v10,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_adds_epu32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vand128 v45,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v44,v11,v51
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vrefp128 v11,v126
	simde_mm_store_ps(ctx.v11.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v126.f32)));
	// vand128 v43,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v42,v10,v51
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vcmpequw128 v26,v45,v127
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vcmpequw128 v24,v44,v127
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vnmsubfp v0,v5,v6,v2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v2.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v6,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequw128 v25,v43,v127
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vcmpequw128 v23,v42,v127
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vnmsubfp v10,v5,v4,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v5,v124,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v124.u32), 0x0));
	// vor v0,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmaddcfp128 v0,v10,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v2,v30,v0,v29
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v29.f32)));
	// vsel v30,v12,v13,v27
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vmaddfp v4,v1,v0,v31
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vor v1,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmaddcfp128 v1,v0,v1,v127
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v2,v2,v0,v6
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vor v6,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmaddfp v4,v4,v0,v7
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vnmsubfp v31,v8,v11,v5
	simde_mm_store_ps(ctx.v31.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v5.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v12,v2,v1,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vor v7,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmulfp128 v39,v41,v30
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v30.f32)));
	// vmaddcfp128 v13,v4,v13,v123
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v123.f32)));
	// vmaddfp v0,v11,v31,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vor128 v37,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// stvx128 v39,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel v8,v13,v12,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor128 v38,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor128 v10,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vor128 v11,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcmpeqfp v4,v0,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v11,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vnmsubfp128 v7,v126,v13,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vxor v13,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vor128 v36,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor v12,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor128 v126,v122,v122
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v122.u8));
	// vor128 v8,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vsel v11,v13,v12,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// vxor128 v10,v9,v36
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r8,248
	ctx.r11.s64 = ctx.r8.s64 * 248;
	// vsel v12,v3,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel v13,v10,v8,v23
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vmaddfp v0,v0,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel128 v126,v12,v13,v126
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// vsel v13,v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v35,v40,v13
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v35,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837b2268
	ctx.lr = 0x839E132C;
	sub_837B2268(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r23,8
	ctx.r23.s64 = 8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e1694
	if (cr6.eq) goto loc_839E1694;
	// lvx128 v34,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// vspltw128 v33,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), 0xFF));
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v33,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f12,240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,30444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f8.f64 = double(temp.f32);
	// stfs f7,256(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f8,260(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f9,264(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x839e153c
	if (!cr6.gt) goto loc_839E153C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r28,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r28.u32);
	// mulli r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 * 248;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// stw r23,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r23.u32);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// li r7,18
	ctx.r7.s64 = 18;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r7.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r6,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r6.u32);
	// lbz r11,208(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// stw r4,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r4.u32);
	// rlwinm r27,r11,27,30,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x837a5710
	ctx.lr = 0x839E13F0;
	sub_837A5710(ctx, base);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// vpermwi128 v124,v126,177
	simde_mm_store_si128((simde__m128i*)ctx.v124.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x4E));
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// vpermwi128 v121,v126,78
	simde_mm_store_si128((simde__m128i*)ctx.v121.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xB1));
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// vpermwi128 v120,v126,228
	simde_mm_store_si128((simde__m128i*)ctx.v120.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x1B));
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_839E140C:
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// vor128 v32,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v125.u8));
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// vor128 v63,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lvx128 v62,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vslw128 v61,v32,v32
	ctx.v61.u32[0] = ctx.v32.u32[0] << (ctx.v32.u8[0] & 0x1F);
	ctx.v61.u32[1] = ctx.v32.u32[1] << (ctx.v32.u8[4] & 0x1F);
	ctx.v61.u32[2] = ctx.v32.u32[2] << (ctx.v32.u8[8] & 0x1F);
	ctx.v61.u32[3] = ctx.v32.u32[3] << (ctx.v32.u8[12] & 0x1F);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f1,36(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// vxor128 v60,v126,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vrlimi128 v60,v126,1,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 1));
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vxor128 v59,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vor128 v58,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v57,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v56,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vrlimi128 v59,v60,11,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 11));
	// vrlimi128 v58,v60,1,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 1));
	// vrlimi128 v57,v60,13,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 13));
	// vrlimi128 v56,v60,7,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 7));
	// lvx128 v55,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v55,14,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 228), 14));
	// vpermwi128 v54,v63,177
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x4E));
	// vmsum4fp128 v53,v58,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vpermwi128 v52,v63,78
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xB1));
	// vpermwi128 v51,v63,228
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x1B));
	// vmsum4fp128 v50,v57,v54
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v49,v56,v52
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v48,v59,v51
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v47,v50,v53
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vmrghw128 v46,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vmrghw128 v45,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vxor128 v44,v45,v61
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vor128 v43,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vor128 v42,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vor128 v41,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vrlimi128 v44,v45,11,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v45.f32), 228), 11));
	// vrlimi128 v43,v45,1,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v45.f32), 228), 1));
	// vrlimi128 v42,v45,13,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v45.f32), 228), 13));
	// vrlimi128 v41,v45,7,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v45.f32), 228), 7));
	// vmsum4fp128 v37,v44,v120
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v120.f32), 0xFF));
	// vmsum4fp128 v40,v43,v126
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v126.f32), 0xFF));
	// vmsum4fp128 v39,v42,v124
	simde_mm_store_ps(ctx.v39.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v124.f32), 0xFF));
	// vmsum4fp128 v38,v41,v121
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v121.f32), 0xFF));
	// vmrghw128 v36,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vmrghw128 v35,v37,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// vmrghw128 v34,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vaddfp128 v33,v34,v62
	simde_mm_store_ps(ctx.v33.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v63,v33,2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0x55));
	// vspltw128 v62,v33,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xAA));
	// vspltw128 v32,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v32,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,448(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f10,452(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f9,456(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// bl 0x837a5900
	ctx.lr = 0x839E1534;
	sub_837A5900(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x839e140c
	if (!cr0.eq) goto loc_839E140C;
loc_839E153C:
	// lbz r11,207(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 207);
	// rlwinm r10,r11,30,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFFFFFFC0;
	// srawi r9,r10,30
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// rlwinm r8,r9,0,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x839e1688
	if (cr6.eq) goto loc_839E1688;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r29,8(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stfs f31,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stfs f31,276(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stfs f27,284(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,272(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,464(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f0,468(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f31,472(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// lfs f0,328(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,332(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,320(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,324(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,272(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f11,276(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f13,284(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// bl 0x82a5c960
	ctx.lr = 0x839E15AC;
	sub_82A5C960(ctx, base);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lfs f10,0(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-29160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,32(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f9,336(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f8,340(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f7,344(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// fadds f0,f9,f4
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f8,f2
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// lfs f0,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f7,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bge cr6,0x839e1614
	if (!cr6.lt) goto loc_839E1614;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x839e1620
	goto loc_839E1620;
loc_839E1614:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x839e1624
	if (cr6.lt) goto loc_839E1624;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_839E1620:
	// stfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_839E1624:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82646fc0
	ctx.lr = 0x839E1630;
	sub_82646FC0(ctx, base);
	// lvx128 v61,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltw128 v59,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vspltw128 v58,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,336(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f7,340(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f6,344(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
loc_839E1688:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b0f00
	ctx.lr = 0x839E1694;
	sub_837B0F00(ctx, base);
loc_839E1694:
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// lfs f1,0(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b1dc0
	ctx.lr = 0x839E16A8;
	sub_837B1DC0(ctx, base);
	// lvx128 v57,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vspltw128 v56,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lfs f0,-11316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v56,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lvx128 v55,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// vspltw128 v54,v55,1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xAA));
	// vspltw128 v53,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0x55));
	// vspltw128 v52,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// stvx128 v54,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f15,f11,f0
	ctx.f15.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stvx128 v53,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f17,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f16.f64 = double(temp.f32);
	// bl 0x83740a50
	ctx.lr = 0x839E170C;
	sub_83740A50(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x839e173c
	if (cr6.lt) goto loc_839E173C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x839e173c
	if (!cr6.lt) goto loc_839E173C;
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
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x839e1740
	goto loc_839E1740;
loc_839E173C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839E1740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839e1758
	if (!cr6.eq) goto loc_839E1758;
	// lbz r10,6258(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 6258);
	// b 0x839e1764
	goto loc_839E1764;
loc_839E1758:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x839e1774
	if (!cr6.eq) goto loc_839E1774;
	// lbz r10,6259(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 6259);
loc_839E1764:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x839e1774
	if (!cr6.eq) goto loc_839E1774;
	// li r4,1
	ctx.r4.s64 = 1;
loc_839E1774:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b11d8
	ctx.lr = 0x839E177C;
	sub_837B11D8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 * 248;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,208(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 208);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r4,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x837b1250
	ctx.lr = 0x839E17A0;
	sub_837B1250(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r6,248
	ctx.r11.s64 = ctx.r6.s64 * 248;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r4,r11,212
	ctx.r4.s64 = ctx.r11.s64 + 212;
	// bl 0x837b12d0
	ctx.lr = 0x839E17B8;
	sub_837B12D0(ctx, base);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r5,248
	ctx.r11.s64 = ctx.r5.s64 * 248;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r4,240(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// bl 0x837b1390
	ctx.lr = 0x839E17D0;
	sub_837B1390(ctx, base);
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// blt cr6,0x839e181c
	if (cr6.lt) goto loc_839E181C;
	// cmplwi cr6,r25,3
	cr6.compare<uint32_t>(ctx.r25.u32, 3, xer);
	// bge cr6,0x839e1838
	if (!cr6.lt) goto loc_839E1838;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 * 248;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,208(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 208);
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// bl 0x837b14a8
	ctx.lr = 0x839E17FC;
	sub_837B14A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e1838
	if (cr6.eq) goto loc_839E1838;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x837b1508
	ctx.lr = 0x839E1818;
	sub_837B1508(ctx, base);
	// b 0x839e1838
	goto loc_839E1838;
loc_839E181C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mulli r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 * 248;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r9,208(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 208);
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// bl 0x837b21f8
	ctx.lr = 0x839E1838;
	sub_837B21F8(ctx, base);
loc_839E1838:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a58778
	ctx.lr = 0x839E1844;
	sub_82A58778(ctx, base);
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 & ctx.r10.u64;
	// bl 0x82a587c0
	ctx.lr = 0x839E1864;
	sub_82A587C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a587e8
	ctx.lr = 0x839E1874;
	sub_82A587E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82a58810
	ctx.lr = 0x839E1884;
	sub_82A58810(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// beq cr6,0x839e18a8
	if (cr6.eq) goto loc_839E18A8;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// beq cr6,0x839e18a8
	if (cr6.eq) goto loc_839E18A8;
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(ctx.r29.s32, 7, xer);
	// beq cr6,0x839e18a8
	if (cr6.eq) goto loc_839E18A8;
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(ctx.r28.s32, 7, xer);
	// bne cr6,0x839e18ac
	if (!cr6.eq) goto loc_839E18AC;
loc_839E18A8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_839E18AC:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f30,-9408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9408);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x839e2380
	if (cr6.eq) goto loc_839E2380;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x839e2380
	if (cr6.eq) goto loc_839E2380;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r9,r1,380
	ctx.r9.s64 = ctx.r1.s64 + 380;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// addi r10,r11,188
	ctx.r10.s64 = ctx.r11.s64 + 188;
loc_839E18DC:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x839e18dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839E18DC;
	// addi r9,r1,300
	ctx.r9.s64 = ctx.r1.s64 + 300;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 + 92;
loc_839E18F8:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x839e18f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839E18F8;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_839E1914:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839e1914
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839E1914;
	// vor128 v51,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v125.u8));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f10,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// vor128 v50,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v125.u8));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vor128 v49,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// vslw128 v48,v51,v51
	ctx.v48.u32[0] = ctx.v51.u32[0] << (ctx.v51.u8[0] & 0x1F);
	ctx.v48.u32[1] = ctx.v51.u32[1] << (ctx.v51.u8[4] & 0x1F);
	ctx.v48.u32[2] = ctx.v51.u32[2] << (ctx.v51.u8[8] & 0x1F);
	ctx.v48.u32[3] = ctx.v51.u32[3] << (ctx.v51.u8[12] & 0x1F);
	// lfs f13,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// vslw128 v46,v50,v50
	ctx.v46.u32[0] = ctx.v50.u32[0] << (ctx.v50.u8[0] & 0x1F);
	ctx.v46.u32[1] = ctx.v50.u32[1] << (ctx.v50.u8[4] & 0x1F);
	ctx.v46.u32[2] = ctx.v50.u32[2] << (ctx.v50.u8[8] & 0x1F);
	ctx.v46.u32[3] = ctx.v50.u32[3] << (ctx.v50.u8[12] & 0x1F);
	// lfs f11,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// vor128 v47,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vxor128 v44,v126,v48
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vxor128 v42,v126,v46
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vrlimi128 v44,v126,1,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 1));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vrlimi128 v42,v126,1,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 1));
	// lfs f8,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// vpermwi128 v45,v126,177
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x4E));
	// lfs f6,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f6.f64 = double(temp.f32);
	// vpermwi128 v43,v126,78
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xB1));
	// vxor128 v40,v44,v48
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// vxor128 v38,v42,v46
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vpermwi128 v41,v126,228
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x1B));
	// vor128 v37,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vor128 v36,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// lvx128 v34,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v49,v34,14,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 14));
	// vor128 v35,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vpermwi128 v33,v49,177
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0x4E));
	// vrlimi128 v37,v44,1,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 1));
	// vpermwi128 v32,v49,78
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xB1));
	// vrlimi128 v36,v44,13,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 13));
	// vpermwi128 v63,v49,228
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0x1B));
	// vrlimi128 v40,v44,11,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 11));
	// lvx128 v39,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v35,v44,7,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 7));
	// vmsum4fp128 v62,v37,v49
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v49.f32), 0xFF));
	// vor128 v61,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vmsum4fp128 v60,v36,v33
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v33.f32), 0xFF));
	// vrlimi128 v47,v39,14,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v39.f32), 228), 14));
	// vmsum4fp128 v57,v40,v63
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vor128 v59,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vmsum4fp128 v58,v35,v32
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v32.f32), 0xFF));
	// vor128 v56,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vrlimi128 v61,v42,1,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 1));
	// vpermwi128 v55,v47,177
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0x4E));
	// vrlimi128 v38,v42,11,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 11));
	// vrlimi128 v59,v42,13,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 13));
	// vpermwi128 v54,v47,78
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xB1));
	// vpermwi128 v52,v47,228
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0x1B));
	// vrlimi128 v56,v42,7,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 7));
	// vmsum4fp128 v53,v61,v47
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v47.f32), 0xFF));
	// vmsum4fp128 v51,v59,v55
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v55.f32), 0xFF));
	// vmsum4fp128 v50,v56,v54
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v35,v38,v52
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmrghw128 v49,v60,v62
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrghw128 v47,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmrghw128 v44,v47,v49
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v42,v51,v53
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vxor128 v40,v44,v48
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vor128 v39,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vor128 v37,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vor128 v36,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vrlimi128 v39,v44,1,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 1));
	// vrlimi128 v37,v44,13,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 13));
	// vrlimi128 v36,v44,7,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 7));
	// vor128 v33,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v125.u8));
	// vmrghw128 v57,v35,v50
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vor128 v62,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lvx128 v34,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v40,v44,11,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 11));
	// vmsum4fp128 v61,v36,v43
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v63,v37,v45
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// lfs f28,192(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f28.f64 = double(temp.f32);
	// vslw128 v59,v33,v33
	ctx.v59.u32[0] = ctx.v33.u32[0] << (ctx.v33.u8[0] & 0x1F);
	ctx.v59.u32[1] = ctx.v33.u32[1] << (ctx.v33.u8[4] & 0x1F);
	ctx.v59.u32[2] = ctx.v33.u32[2] << (ctx.v33.u8[8] & 0x1F);
	ctx.v59.u32[3] = ctx.v33.u32[3] << (ctx.v33.u8[12] & 0x1F);
	// vmrghw128 v53,v57,v42
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vrlimi128 v62,v34,14,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 14));
	// vmsum4fp128 v32,v39,v126
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v126.f32), 0xFF));
	// vmsum4fp128 v60,v40,v41
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v41.f32), 0xFF));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f31,200(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// vxor128 v58,v126,v59
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// vxor128 v49,v53,v46
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vpermwi128 v56,v62,177
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x4E));
	// vpermwi128 v55,v62,78
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xB1));
	// stfs f28,204(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// vpermwi128 v54,v62,228
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x1B));
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// vrlimi128 v58,v126,1,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 1));
	// vor128 v38,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v36,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v33,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vxor128 v50,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vrlimi128 v49,v53,11,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 11));
	// vrlimi128 v38,v53,1,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 1));
	// vrlimi128 v36,v53,13,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 13));
	// vor128 v47,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vor128 v46,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vmrghw128 v52,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vor128 v44,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vmrghw128 v51,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vrlimi128 v50,v58,11,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 11));
	// vmsum4fp128 v61,v36,v45
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// vrlimi128 v47,v58,1,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 1));
	// vmsum4fp128 v57,v49,v41
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v41.f32), 0xFF));
	// vrlimi128 v46,v58,13,0
	simde_mm_store_ps(ctx.v46.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 13));
	// vrlimi128 v44,v58,7,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 7));
	// vmrghw128 v48,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmsum4fp128 v34,v50,v54
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vrlimi128 v33,v53,7,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 7));
	// vmsum4fp128 v39,v47,v62
	simde_mm_store_ps(ctx.v39.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v37,v46,v56
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v35,v44,v55
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v55.f32), 0xFF));
	// vspltw128 v42,v48,2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0x55));
	// vmsum4fp128 v60,v33,v43
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v43.f32), 0xFF));
	// vspltw128 v40,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// vmsum4fp128 v62,v38,v126
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v126.f32), 0xFF));
	// stvx128 v42,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f5,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fadds f14,f5,f17
	ctx.f14.f64 = double(float(ctx.f5.f64 + ctx.f17.f64));
	// vmrghw128 v32,v37,v39
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// stvx128 v40,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v63,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// lfs f4,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// vmrghw128 v52,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// fadds f3,f4,f16
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f16.f64));
	// vmrghw128 v58,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vmrghw128 v51,v57,v60
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vxor128 v56,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmrghw128 v49,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vor128 v54,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v53,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vspltw128 v46,v49,2
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0x55));
	// vor128 v55,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vspltw128 v44,v49,1
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xAA));
	// vrlimi128 v56,v58,11,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 11));
	// vrlimi128 v54,v58,13,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 13));
	// vrlimi128 v53,v58,7,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 7));
	// vrlimi128 v55,v58,1,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 228), 1));
	// vmsum4fp128 v48,v54,v45
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v47,v53,v43
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v43.f32), 0xFF));
	// vspltw128 v43,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// vmsum4fp128 v50,v55,v126
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v126.f32), 0xFF));
	// vmsum4fp128 v45,v56,v41
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v41.f32), 0xFF));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v44,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stvx128 v46,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v42,v48,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// vmrghw128 v41,v45,v47
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// stvx128 v43,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// vmrghw128 v40,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vspltw128 v39,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x55));
	// vspltw128 v37,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vspltw128 v38,v40,1
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xAA));
	// lfs f1,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fadds f23,f1,f15
	ctx.f23.f64 = double(float(ctx.f1.f64 + ctx.f15.f64));
	// stvx128 v39,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f19,f2,f17
	ctx.f19.f64 = double(float(ctx.f2.f64 + ctx.f17.f64));
	// stvx128 v37,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v38,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f18,f0,f16
	ctx.f18.f64 = double(float(ctx.f0.f64 + ctx.f16.f64));
	// lfs f11,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// fadds f29,f11,f15
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f15.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fadds f24,f13,f16
	ctx.f24.f64 = double(float(ctx.f13.f64 + ctx.f16.f64));
	// fadds f25,f12,f17
	ctx.f25.f64 = double(float(ctx.f12.f64 + ctx.f17.f64));
	// bl 0x825eb548
	ctx.lr = 0x839E1C1C;
	sub_825EB548(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82a5c2d0
	ctx.lr = 0x839E1C28;
	sub_82A5C2D0(ctx, base);
	// lis r8,27670
	ctx.r8.s64 = 1813381120;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f0,-29164(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -29164);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r8,49517
	ctx.r6.u64 = ctx.r8.u64 | 49517;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mulhwu r11,r3,r6
	ctx.r11.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// mulli r9,r10,360
	ctx.r9.s64 = ctx.r10.s64 * 360;
	// subf r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x82624408
	ctx.lr = 0x839E1C88;
	sub_82624408(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828c56a0
	ctx.lr = 0x839E1C90;
	sub_828C56A0(ctx, base);
	// lfs f7,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lfs f5,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f4,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// stfs f7,224(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f6,228(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f5,232(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f4,236(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x82a58838
	ctx.lr = 0x839E1CBC;
	sub_82A58838(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lhz r10,2(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// std r11,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r11.u64);
	// lfd f3,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f2,160(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// lfd f0,304(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f13,f2
	ctx.f13.f64 = double(ctx.f2.s64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f26,f11,f30
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f28,f10,f30
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f27,f9,f30
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x82a58858
	ctx.lr = 0x839E1D20;
	sub_82A58858(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// lfd f8,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// fmuls f20,f1,f30
	ctx.f20.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f21,f2,f30
	ctx.f21.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fmuls f22,f0,f30
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bgt cr6,0x839e202c
	if (cr6.gt) goto loc_839E202C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839e1de4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E1DE4;
	// bdzf 4*cr6+eq,0x839e1e44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E1E44;
	// bdzf 4*cr6+eq,0x839e1e88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E1E88;
	// bdzf 4*cr6+eq,0x839e1ee8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E1EE8;
	// bdzf 4*cr6+eq,0x839e1f2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E1F2C;
	// bne cr6,0x839e1f2c
	if (!cr6.eq) goto loc_839E1F2C;
	// lvlx128 v36,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// addi r10,r1,1280
	ctx.r10.s64 = ctx.r1.s64 + 1280;
	// vspltw128 v35,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), 0xFF));
	// addi r7,r1,1008
	ctx.r7.s64 = ctx.r1.s64 + 1008;
	// addi r6,r1,1280
	ctx.r6.s64 = ctx.r1.s64 + 1280;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v35,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v34,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f24,672(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// vspltw128 v33,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), 0xFF));
	// stfs f31,676(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// stfs f25,680(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stvx128 v33,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e2028
	goto loc_839E2028;
loc_839E1DE4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f28,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// vsldoi128 v32,v127,v123,4
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v123.u8), 12));
	// stfs f26,120(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,1264
	ctx.r9.s64 = ctx.r1.s64 + 1264;
	// addi r8,r1,752
	ctx.r8.s64 = ctx.r1.s64 + 752;
	// addi r7,r1,704
	ctx.r7.s64 = ctx.r1.s64 + 704;
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// addi r5,r1,1264
	ctx.r5.s64 = ctx.r1.s64 + 1264;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// li r3,13
	ctx.r3.s64 = 13;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// stfs f24,688(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// stfs f29,692(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 692, temp.u32);
	// stfs f25,696(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// stvx128 v32,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e2028
	goto loc_839E2028;
loc_839E1E44:
	// lvlx128 v60,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,784
	ctx.r11.s64 = ctx.r1.s64 + 784;
	// addi r10,r1,1040
	ctx.r10.s64 = ctx.r1.s64 + 1040;
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// addi r6,r1,1040
	ctx.r6.s64 = ctx.r1.s64 + 1040;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v58,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f24,544(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// vspltw128 v57,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// stfs f29,548(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// stfs f25,552(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// stvx128 v57,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e2028
	goto loc_839E2028;
loc_839E1E88:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f28,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// stfs f26,120(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// vsldoi128 v56,v127,v123,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v123.u8), 12));
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r9,r1,848
	ctx.r9.s64 = ctx.r1.s64 + 848;
	// addi r8,r1,1168
	ctx.r8.s64 = ctx.r1.s64 + 1168;
	// addi r7,r1,816
	ctx.r7.s64 = ctx.r1.s64 + 816;
	// addi r6,r1,1168
	ctx.r6.s64 = ctx.r1.s64 + 1168;
	// addi r5,r1,848
	ctx.r5.s64 = ctx.r1.s64 + 848;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// li r3,14
	ctx.r3.s64 = 14;
	// lvx128 v55,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v54,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f24,512(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// vspltw128 v53,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// stfs f29,516(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// stfs f25,520(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stvx128 v56,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e2028
	goto loc_839E2028;
loc_839E1EE8:
	// lvlx128 v52,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// addi r10,r1,880
	ctx.r10.s64 = ctx.r1.s64 + 880;
	// vspltw128 v51,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// addi r7,r1,1072
	ctx.r7.s64 = ctx.r1.s64 + 1072;
	// addi r6,r1,880
	ctx.r6.s64 = ctx.r1.s64 + 880;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// li r3,2
	ctx.r3.s64 = 2;
	// stvx128 v51,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v50,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f24,576(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// vspltw128 v49,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// stfs f31,580(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// stfs f25,584(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// stvx128 v49,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e2028
	goto loc_839E2028;
loc_839E1F2C:
	// lhz r11,210(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 210);
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839e1f60
	if (!cr6.lt) goto loc_839E1F60;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x839e1f6c
	goto loc_839E1F6C;
loc_839E1F60:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x839e1f6c
	if (cr6.lt) goto loc_839E1F6C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_839E1F6C:
	// lfs f13,-29164(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -29164);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82624408
	ctx.lr = 0x839E1F94;
	sub_82624408(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828c56a0
	ctx.lr = 0x839E1F9C;
	sub_828C56A0(ctx, base);
	// lfs f11,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(ctx.r29.s32, 6, xer);
	// lfs f8,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,480(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f10,484(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f9,488(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f8,492(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// bne cr6,0x839e1fcc
	if (!cr6.eq) goto loc_839E1FCC;
	// b 0x839e1fd8
	goto loc_839E1FD8;
loc_839E1FCC:
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(ctx.r29.s32, 7, xer);
	// bne cr6,0x839e1fd8
	if (!cr6.eq) goto loc_839E1FD8;
	// li r3,9
	ctx.r3.s64 = 9;
loc_839E1FD8:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f24,112(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// stfs f25,120(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,1232
	ctx.r9.s64 = ctx.r1.s64 + 1232;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r8,r1,912
	ctx.r8.s64 = ctx.r1.s64 + 912;
	// addi r7,r1,1232
	ctx.r7.s64 = ctx.r1.s64 + 1232;
	// addi r6,r1,912
	ctx.r6.s64 = ctx.r1.s64 + 912;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// lvx128 v48,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v47,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v46,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// stvx128 v46,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v45,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v44,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// stvx128 v44,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_839E2028:
	// bl 0x83102db0
	ctx.lr = 0x839E202C;
	sub_83102DB0(ctx, base);
loc_839E202C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x839e22e4
	if (cr6.gt) goto loc_839E22E4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839e209c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E209C;
	// bdzf 4*cr6+eq,0x839e20fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E20FC;
	// bdzf 4*cr6+eq,0x839e2140
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E2140;
	// bdzf 4*cr6+eq,0x839e21a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E21A0;
	// bdzf 4*cr6+eq,0x839e21e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E21E4;
	// bne cr6,0x839e21e4
	if (!cr6.eq) goto loc_839E21E4;
	// lvlx128 v43,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// vspltw128 v42,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xFF));
	// addi r7,r1,944
	ctx.r7.s64 = ctx.r1.s64 + 944;
	// addi r6,r1,1200
	ctx.r6.s64 = ctx.r1.s64 + 1200;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v42,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v41,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f18,640(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// vspltw128 v40,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xFF));
	// stfs f31,644(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 644, temp.u32);
	// stfs f19,648(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// stvx128 v40,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e22e0
	goto loc_839E22E0;
loc_839E209C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f22,112(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// stfs f21,116(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vsldoi128 v39,v127,v123,4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v123.u8), 12));
	// stfs f20,120(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,720
	ctx.r9.s64 = ctx.r1.s64 + 720;
	// addi r8,r1,1136
	ctx.r8.s64 = ctx.r1.s64 + 1136;
	// addi r7,r1,976
	ctx.r7.s64 = ctx.r1.s64 + 976;
	// addi r6,r1,1136
	ctx.r6.s64 = ctx.r1.s64 + 1136;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// li r3,13
	ctx.r3.s64 = 13;
	// lvx128 v38,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v38,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v37,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f18,608(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// vspltw128 v36,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xFF));
	// stfs f23,612(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// stfs f19,616(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stvx128 v39,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e22e0
	goto loc_839E22E0;
loc_839E20FC:
	// lvlx128 v35,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,736
	ctx.r11.s64 = ctx.r1.s64 + 736;
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
	// vspltw128 v34,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), 0xFF));
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// addi r6,r1,768
	ctx.r6.s64 = ctx.r1.s64 + 768;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v34,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v33,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f18,528(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// vspltw128 v32,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// stfs f23,532(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f19,536(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stvx128 v32,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e22e0
	goto loc_839E22E0;
loc_839E2140:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f22,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f21,116(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// stfs f20,120(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// vsldoi128 v63,v127,v123,4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v123.u8), 12));
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// addi r8,r1,832
	ctx.r8.s64 = ctx.r1.s64 + 832;
	// addi r7,r1,800
	ctx.r7.s64 = ctx.r1.s64 + 800;
	// addi r6,r1,832
	ctx.r6.s64 = ctx.r1.s64 + 832;
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// li r3,14
	ctx.r3.s64 = 14;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f18,560(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stfs f23,564(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// stfs f19,568(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e22e0
	goto loc_839E22E0;
loc_839E21A0:
	// lvlx128 v59,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// addi r7,r1,896
	ctx.r7.s64 = ctx.r1.s64 + 896;
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// li r3,2
	ctx.r3.s64 = 2;
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v57,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f18,592(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// stfs f31,596(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 596, temp.u32);
	// stfs f19,600(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e22e0
	goto loc_839E22E0;
loc_839E21E4:
	// lhz r11,210(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 210);
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839e2218
	if (!cr6.lt) goto loc_839E2218;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x839e2224
	goto loc_839E2224;
loc_839E2218:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x839e2224
	if (cr6.lt) goto loc_839E2224;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_839E2224:
	// lfs f13,-29164(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -29164);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82624408
	ctx.lr = 0x839E224C;
	sub_82624408(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828c56a0
	ctx.lr = 0x839E2254;
	sub_828C56A0(ctx, base);
	// lfs f11,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// lfs f8,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,496(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f10,500(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stfs f9,504(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// stfs f8,508(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// bne cr6,0x839e2284
	if (!cr6.eq) goto loc_839E2284;
	// b 0x839e2290
	goto loc_839E2290;
loc_839E2284:
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(ctx.r28.s32, 7, xer);
	// bne cr6,0x839e2290
	if (!cr6.eq) goto loc_839E2290;
	// li r3,9
	ctx.r3.s64 = 9;
loc_839E2290:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f18,112(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,1024
	ctx.r10.s64 = ctx.r1.s64 + 1024;
	// stfs f19,120(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,960
	ctx.r9.s64 = ctx.r1.s64 + 960;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r8,r1,992
	ctx.r8.s64 = ctx.r1.s64 + 992;
	// addi r7,r1,960
	ctx.r7.s64 = ctx.r1.s64 + 960;
	// addi r6,r1,992
	ctx.r6.s64 = ctx.r1.s64 + 992;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// lvx128 v55,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v54,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v53,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// stvx128 v53,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v52,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// stvx128 v51,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_839E22E0:
	// bl 0x83102db0
	ctx.lr = 0x839E22E4;
	sub_83102DB0(ctx, base);
loc_839E22E4:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// beq cr6,0x839e2338
	if (cr6.eq) goto loc_839E2338;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x839e2380
	if (!cr6.eq) goto loc_839E2380;
	// lvlx128 v50,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1056
	ctx.r11.s64 = ctx.r1.s64 + 1056;
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v49,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// addi r6,r1,1088
	ctx.r6.s64 = ctx.r1.s64 + 1088;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// li r3,5
	ctx.r3.s64 = 5;
	// stvx128 v49,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v48,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,624(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// vspltw128 v47,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// stfs f31,628(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// stfs f14,632(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stvx128 v47,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e2378
	goto loc_839E2378;
loc_839E2338:
	// lvlx128 v46,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v45,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xFF));
	// addi r7,r1,1120
	ctx.r7.s64 = ctx.r1.s64 + 1120;
	// addi r6,r1,1152
	ctx.r6.s64 = ctx.r1.s64 + 1152;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// li r3,6
	ctx.r3.s64 = 6;
	// stvx128 v45,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v44,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,656(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 656, temp.u32);
	// vspltw128 v43,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// stfs f31,660(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 660, temp.u32);
	// stfs f14,664(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 664, temp.u32);
	// stvx128 v43,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_839E2378:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// bl 0x83102db0
	ctx.lr = 0x839E2380;
	sub_83102DB0(ctx, base);
loc_839E2380:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a58898
	ctx.lr = 0x839E2390;
	sub_82A58898(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839e23a0
	if (cr6.eq) goto loc_839E23A0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x839e23a4
	if (!cr6.eq) goto loc_839E23A4;
loc_839E23A0:
	// lbz r30,161(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
loc_839E23A4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e2754
	if (cr6.eq) goto loc_839E2754;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x839e2754
	if (cr6.eq) goto loc_839E2754;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r10,r1,380
	ctx.r10.s64 = ctx.r1.s64 + 380;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// addi r11,r9,316
	ctx.r11.s64 = ctx.r9.s64 + 316;
loc_839E23CC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839e23cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839E23CC;
	// vor128 v42,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v125.u8));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,400(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// vor128 v41,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lfs f13,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// vpermwi128 v40,v126,177
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x4E));
	// lfs f12,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f12.f64 = double(temp.f32);
	// vpermwi128 v39,v126,78
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xB1));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vslw128 v38,v42,v42
	ctx.v38.u32[0] = ctx.v42.u32[0] << (ctx.v42.u8[0] & 0x1F);
	ctx.v38.u32[1] = ctx.v42.u32[1] << (ctx.v42.u8[4] & 0x1F);
	ctx.v38.u32[2] = ctx.v42.u32[2] << (ctx.v42.u8[8] & 0x1F);
	ctx.v38.u32[3] = ctx.v42.u32[3] << (ctx.v42.u8[12] & 0x1F);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vpermwi128 v37,v126,228
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x1B));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vxor128 v36,v126,v38
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r30,10
	ctx.r30.s64 = 10;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// vrlimi128 v36,v126,1,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v126.f32), 228), 1));
	// vxor128 v35,v36,v38
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vor128 v34,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// vor128 v33,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// vor128 v63,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// vrlimi128 v35,v36,11,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 11));
	// vrlimi128 v34,v36,1,0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 1));
	// vrlimi128 v33,v36,13,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 13));
	// lvx128 v32,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v36,7,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 7));
	// vrlimi128 v41,v32,14,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v32.f32), 228), 14));
	// vpermwi128 v62,v41,177
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x4E));
	// vmsum4fp128 v61,v34,v41
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v41.f32), 0xFF));
	// vpermwi128 v60,v41,78
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xB1));
	// vpermwi128 v59,v41,228
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x1B));
	// vmsum4fp128 v58,v33,v62
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v57,v63,v60
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v56,v35,v59
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// vmrghw128 v55,v58,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vmrghw128 v54,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vmrghw128 v53,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vxor128 v52,v53,v38
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vor128 v51,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v50,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v49,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vrlimi128 v52,v53,11,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 11));
	// vrlimi128 v51,v53,1,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 1));
	// vrlimi128 v50,v53,13,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 13));
	// vrlimi128 v49,v53,7,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 7));
	// vmsum4fp128 v45,v52,v37
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v48,v51,v126
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v126.f32), 0xFF));
	// vmsum4fp128 v47,v50,v40
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v46,v49,v39
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v39.f32), 0xFF));
	// vmrghw128 v44,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v43,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vmrghw128 v42,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vspltw128 v41,v42,1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xAA));
	// vspltw128 v40,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// vspltw128 v39,v42,2
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0x55));
	// stvx128 v41,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v39,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f17,f11
	ctx.f0.f64 = double(float(ctx.f17.f64 + ctx.f11.f64));
	// fadds f13,f15,f10
	ctx.f13.f64 = double(float(ctx.f15.f64 + ctx.f10.f64));
	// fadds f12,f16,f9
	ctx.f12.f64 = double(float(ctx.f16.f64 + ctx.f9.f64));
	// beq cr6,0x839e24f4
	if (cr6.eq) goto loc_839E24F4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x839e24f4
	if (!cr6.eq) goto loc_839E24F4;
	// li r30,11
	ctx.r30.s64 = 11;
loc_839E24F4:
	// stfs f13,356(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r9,r11,27636
	ctx.r9.s64 = ctx.r11.s64 + 27636;
	// stfs f12,352(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// vspltw128 v11,v126,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x0));
	// lfs f0,-8376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8376);
	ctx.f0.f64 = double(temp.f32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vsldoi128 v13,v126,v126,12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v126.u8), 4));
	// lvlx128 v38,r9,r23
	temp.u32 = ctx.r9.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslw128 v32,v125,v125
	ctx.v32.u32[0] = ctx.v125.u32[0] << (ctx.v125.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v125.u32[1] << (ctx.v125.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v125.u32[2] << (ctx.v125.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v125.u32[3] << (ctx.v125.u8[12] & 0x1F);
	// vor128 v36,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// lvlx128 v34,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v37,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor128 v35,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// lvlx128 v33,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v36,v34,4,3
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 57), 4));
	// vrlimi128 v35,v38,4,3
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v38.f32), 57), 4));
	// vor128 v6,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vor128 v7,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// vrlimi128 v6,v37,2,2
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 78), 2));
	// vrlimi128 v7,v34,2,2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 78), 2));
	// vrlimi128 v6,v33,1,1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 147), 1));
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v7,v33,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 147), 1));
	// vrlimi128 v62,v63,14,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 14));
	// vperm128 v12,v126,v126,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v4,v126,v126,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vpermwi128 v61,v62,177
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x4E));
	// vpermwi128 v60,v62,78
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xB1));
	// vpermwi128 v59,v62,228
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x1B));
	// lfs f13,332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddcfp128 v8,v11,v8,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw v5,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vsldoi v10,v0,v0,12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 4));
	// vperm v6,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmaddcfp128 v9,v126,v9,v127
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vperm v11,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor v0,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmaddfp128 v8,v5,v126,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v10,v13,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vnmsubfp v9,v13,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v4,v6,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vsldoi128 v58,v10,v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 8));
	// vsubfp128 v13,v9,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vnmsubfp v0,v12,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v12,v122,v122
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v122.u8));
	// vsel128 v12,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vxor128 v57,v12,v32
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vpermwi128 v52,v12,177
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x4E));
	// vpermwi128 v51,v12,78
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xB1));
	// vpermwi128 v50,v12,228
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x1B));
	// vrlimi128 v57,v12,1,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 1));
	// vxor128 v56,v57,v32
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vor128 v55,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v54,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v53,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vrlimi128 v56,v57,11,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 11));
	// vrlimi128 v55,v57,1,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vrlimi128 v54,v57,13,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 13));
	// vrlimi128 v53,v57,7,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 7));
	// vmsum4fp128 v49,v55,v62
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// lvx128 v45,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v48,v54,v61
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// vmsum4fp128 v47,v53,v60
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// vmsum4fp128 v46,v56,v59
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// vmrghw128 v44,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vmrghw128 v43,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrghw128 v42,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vxor128 v41,v42,v32
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vor128 v40,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vor128 v39,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vor128 v38,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vrlimi128 v41,v42,11,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 11));
	// vrlimi128 v40,v42,1,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 1));
	// vrlimi128 v39,v42,13,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 13));
	// vrlimi128 v38,v42,7,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 7));
	// vmsum4fp128 v34,v41,v50
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v37,v40,v12
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v36,v39,v52
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v35,v38,v51
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v51.f32), 0xFF));
	// vmrghw128 v33,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrghw128 v32,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// vmrghw128 v63,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vaddfp128 v62,v45,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82a58878
	ctx.lr = 0x839E26AC;
	sub_82A58878(ctx, base);
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r8,r1,1184
	ctx.r8.s64 = ctx.r1.s64 + 1184;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f6,160(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// vsldoi128 v61,v127,v123,4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v123.u8), 12));
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// addi r11,r1,1216
	ctx.r11.s64 = ctx.r1.s64 + 1216;
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// addi r10,r1,1248
	ctx.r10.s64 = ctx.r1.s64 + 1248;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// addi r7,r1,1184
	ctx.r7.s64 = ctx.r1.s64 + 1184;
	// addi r6,r1,1248
	ctx.r6.s64 = ctx.r1.s64 + 1248;
	// addi r5,r1,1216
	ctx.r5.s64 = ctx.r1.s64 + 1216;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// fmuls f0,f3,f30
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v60,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v59,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// stvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x839E2754;
	sub_83102DB0(ctx, base);
loc_839E2754:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e2b0c
	if (cr6.eq) goto loc_839E2B0C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839e2778
	if (cr6.eq) goto loc_839E2778;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x839e2b0c
	if (!cr6.eq) goto loc_839E2B0C;
loc_839E2778:
	// lhz r4,180(r17)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r17.u32 + 180);
	// bl 0x837ad6f0
	ctx.lr = 0x839E2780;
	sub_837AD6F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e2b0c
	if (!cr6.eq) goto loc_839E2B0C;
	// lhz r11,182(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 182);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lhz r9,182(r15)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r15.u32 + 182);
	// lfs f27,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f27.f64 = double(temp.f32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfs f30,23372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23372);
	ctx.f30.f64 = double(temp.f32);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f30
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmsubs f8,f9,f30,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f0.f64));
	// fmuls f13,f8,f27
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x839e27e4
	if (cr6.lt) goto loc_839E27E4;
	// fadds f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x839e27e8
	goto loc_839E27E8;
loc_839E27E4:
	// fmr f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f0.f64;
loc_839E27E8:
	// lhz r10,186(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 186);
	// lhz r11,186(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 186);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f12,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmuls f0,f10,f30
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmsubs f8,f9,f30,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f0.f64));
	// fmuls f13,f8,f27
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x839e2844
	if (cr6.lt) goto loc_839E2844;
	// lhz r11,180(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 180);
	// lhz r10,180(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 180);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839e2844
	if (!cr6.eq) goto loc_839E2844;
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x839e2848
	goto loc_839E2848;
loc_839E2844:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_839E2848:
	// lhz r11,188(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 188);
	// lhz r10,188(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 188);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f30
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmsubs f8,f9,f30,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f0.f64));
	// fmuls f13,f8,f27
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x839e28a0
	if (cr6.lt) goto loc_839E28A0;
	// lhz r11,184(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 184);
	// lhz r10,184(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 184);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839e28a0
	if (!cr6.eq) goto loc_839E28A0;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_839E28A0:
	// lbz r11,207(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 207);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x839e28bc
	if (cr6.eq) goto loc_839E28BC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839E28BC:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839e28d0
	if (cr6.eq) goto loc_839E28D0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_839E28D0:
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// lbz r10,206(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 206);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// lhz r4,180(r17)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r17.u32 + 180);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lfs f29,-27732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f29.f64 = double(temp.f32);
	// lhz r5,184(r17)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r17.u32 + 184);
	// rlwinm r8,r9,26,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC000000;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// srawi r6,r8,30
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 30;
	// srawi r11,r7,30
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 30;
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// bl 0x837ac770
	ctx.lr = 0x839E291C;
	sub_837AC770(ctx, base);
	// lhz r10,194(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 194);
	// lhz r9,194(r15)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r15.u32 + 194);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f30
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmsubs f8,f9,f30,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f0.f64));
	// fmuls f13,f8,f27
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x839e2974
	if (cr6.lt) goto loc_839E2974;
	// lhz r11,180(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 180);
	// lhz r10,180(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 180);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839e2974
	if (!cr6.eq) goto loc_839E2974;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_839E2974:
	// lhz r10,196(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 196);
	// lhz r11,196(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 196);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,160(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmuls f13,f9,f30
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmsubs f7,f8,f30,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 - ctx.f13.f64));
	// fmuls f12,f7,f27
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x839e29cc
	if (cr6.lt) goto loc_839E29CC;
	// lhz r11,184(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 184);
	// lhz r10,184(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 184);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839e29cc
	if (!cr6.eq) goto loc_839E29CC;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
loc_839E29CC:
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lbz r11,206(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 206);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// lhz r5,192(r17)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r17.u32 + 192);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lhz r4,190(r17)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r17.u32 + 190);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r9,r10,30,0,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xC0000000;
	// rlwinm r8,r10,28,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// srawi r7,r9,30
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 30;
	// srawi r6,r8,30
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 30;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// bl 0x837acef0
	ctx.lr = 0x839E2A14;
	sub_837ACEF0(ctx, base);
	// lhz r4,202(r15)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r15.u32 + 202);
	// lhz r5,202(r17)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r17.u32 + 202);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmuls f0,f10,f30
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmsubs f8,f9,f30,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f0.f64));
	// fmuls f13,f8,f27
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x839e2a6c
	if (cr6.lt) goto loc_839E2A6C;
	// lhz r11,180(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 180);
	// lhz r10,180(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 180);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839e2a6c
	if (!cr6.eq) goto loc_839E2A6C;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_839E2A6C:
	// lhz r11,204(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 204);
	// lhz r10,204(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 204);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,160(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f9,f30
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmsubs f7,f8,f30,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 - ctx.f13.f64));
	// fmuls f12,f7,f27
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x839e2ac4
	if (cr6.lt) goto loc_839E2AC4;
	// lhz r11,184(r15)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r15.u32 + 184);
	// lhz r10,184(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 184);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839e2ac4
	if (!cr6.eq) goto loc_839E2AC4;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
loc_839E2AC4:
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// lbz r11,207(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 207);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lhz r5,200(r17)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r17.u32 + 200);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lhz r4,198(r17)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r17.u32 + 198);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// rlwinm r9,r10,26,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFC000000;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// rlwinm r8,r10,24,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// srawi r7,r9,30
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 30;
	// srawi r6,r8,30
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 30;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// bl 0x837ad2f0
	ctx.lr = 0x839E2B0C;
	sub_837AD2F0(ctx, base);
loc_839E2B0C:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e2b5c
	if (cr6.eq) goto loc_839E2B5C;
	// bl 0x837ac2e0
	ctx.lr = 0x839E2B1C;
	sub_837AC2E0(ctx, base);
	// lbz r10,207(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 207);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r9,r10,28,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF0;
	// srawi r8,r9,30
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 30;
	// rlwinm r6,r8,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// lfs f0,24352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24352);
	ctx.f0.f64 = double(temp.f32);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x837ac5b0
	ctx.lr = 0x839E2B50;
	sub_837AC5B0(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x837ac640
	ctx.lr = 0x839E2B5C;
	sub_837AC640(ctx, base);
loc_839E2B5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f27,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f27.f64 = double(temp.f32);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
loc_839E2B68:
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c6c78
	ctx.lr = 0x839E2B74;
	sub_828C6C78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e2c88
	if (cr6.eq) goto loc_839E2C88;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e2b94
	if (cr6.eq) goto loc_839E2B94;
	// lbz r11,82(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 82);
	// b 0x839e2b98
	goto loc_839E2B98;
loc_839E2B94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839E2B98:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stfs f16,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f17,12(r30)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// stfs f15,8(r30)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,-29160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x839e2bd0
	if (!cr6.lt) goto loc_839E2BD0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x839e2bdc
	goto loc_839E2BDC;
loc_839E2BD0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x839e2be0
	if (cr6.lt) goto loc_839E2BE0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_839E2BDC:
	// stfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_839E2BE0:
	// stfs f31,376(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f27,380(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f1,0(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82624408
	ctx.lr = 0x839E2C0C;
	sub_82624408(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x825c2af0
	ctx.lr = 0x839E2C14;
	sub_825C2AF0(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82a5a1b8
	ctx.lr = 0x839E2C20;
	sub_82A5A1B8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f3,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a078
	ctx.lr = 0x839E2C34;
	sub_82A5A078(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a59ca0
	ctx.lr = 0x839E2C44;
	sub_82A59CA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// bl 0x82a59ca0
	ctx.lr = 0x839E2C70;
	sub_82A59CA0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
loc_839E2C88:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e2c9c
	if (cr6.eq) goto loc_839E2C9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_839E2C9C:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e2cc0
	if (cr6.eq) goto loc_839E2CC0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x837ac640
	ctx.lr = 0x839E2CB0;
	sub_837AC640(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x837b0f70
	ctx.lr = 0x839E2CC0;
	sub_837B0F70(ctx, base);
loc_839E2CC0:
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// addi r12,r1,-304
	ctx.r12.s64 = ctx.r1.s64 + -304;
	// bl 0x831d14cc
	ctx.lr = 0x839E2CCC;
	__restvmx_120(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce78c
	ctx.lr = 0x839E2CD4;
	__restfpr_14(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E2CD8"))) PPC_WEAK_FUNC(sub_839E2CD8);
PPC_FUNC_IMPL(__imp__sub_839E2CD8) {
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
	// bl 0x839e0a70
	ctx.lr = 0x839E2CF8;
	sub_839E0A70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 & ctx.r30.u64;
	// stb r4,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r4.u8);
	// beq cr6,0x839e2d1c
	if (cr6.eq) goto loc_839E2D1C;
	// bl 0x837b1748
	ctx.lr = 0x839E2D1C;
	sub_837B1748(ctx, base);
loc_839E2D1C:
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

__attribute__((alias("__imp__sub_839E2D34"))) PPC_WEAK_FUNC(sub_839E2D34);
PPC_FUNC_IMPL(__imp__sub_839E2D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E2D38"))) PPC_WEAK_FUNC(sub_839E2D38);
PPC_FUNC_IMPL(__imp__sub_839E2D38) {
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
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839e2d70
	if (cr6.eq) goto loc_839E2D70;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e2d6c
	if (cr6.eq) goto loc_839E2D6C;
	// bl 0x833c8980
	ctx.lr = 0x839E2D6C;
	sub_833C8980(ctx, base);
loc_839E2D6C:
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
loc_839E2D70:
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

__attribute__((alias("__imp__sub_839E2D88"))) PPC_WEAK_FUNC(sub_839E2D88);
PPC_FUNC_IMPL(__imp__sub_839E2D88) {
	PPC_FUNC_PROLOGUE();
	// stb r4,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E2D90"))) PPC_WEAK_FUNC(sub_839E2D90);
PPC_FUNC_IMPL(__imp__sub_839E2D90) {
	PPC_FUNC_PROLOGUE();
	// stb r4,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E2D98"))) PPC_WEAK_FUNC(sub_839E2D98);
PPC_FUNC_IMPL(__imp__sub_839E2D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r4,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// stfs f2,152(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// sth r11,158(r3)
	PPC_STORE_U16(ctx.r3.u32 + 158, ctx.r11.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,2(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r9,160(r3)
	PPC_STORE_U16(ctx.r3.u32 + 160, ctx.r9.u16);
	// stb r8,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r8.u8);
	// stb r10,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E2DC4"))) PPC_WEAK_FUNC(sub_839E2DC4);
PPC_FUNC_IMPL(__imp__sub_839E2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E2DC8"))) PPC_WEAK_FUNC(sub_839E2DC8);
PPC_FUNC_IMPL(__imp__sub_839E2DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E2DD0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r11,-32552
	ctx.r6.s64 = ctx.r11.s64 + -32552;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r5,r10,24528
	ctx.r5.s64 = ctx.r10.s64 + 24528;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r4,r9,24516
	ctx.r4.s64 = ctx.r9.s64 + 24516;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r11,r3,7056
	ctx.r11.s64 = ctx.r3.s64 + 7056;
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lfs f0,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,-24672
	ctx.r9.s64 = ctx.r10.s64 + -24672;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// bl 0x82a5c280
	ctx.lr = 0x839E2E98;
	sub_82A5C280(ctx, base);
	// stfs f31,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stb r30,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r30.u8);
	// bl 0x83935df8
	ctx.lr = 0x839E2EB0;
	sub_83935DF8(ctx, base);
	// mulli r8,r3,60
	ctx.r8.s64 = ctx.r3.s64 * 60;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// divw r5,r7,r7
	ctx.r5.s32 = PPCDivide(ctx.r7.s32, ctx.r7.s32);
	// sth r7,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r7.u16);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r3,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r3.u16);
	// twllei r7,0
	// andc r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// addi r5,r6,7000
	ctx.r5.s64 = ctx.r6.s64 + 7000;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// twlgei r9,-1
	// bl 0x831d0b08
	ctx.lr = 0x839E2EFC;
	sub_831D0B08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c6bf8
	ctx.lr = 0x839E2F04;
	sub_828C6BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E2F14"))) PPC_WEAK_FUNC(sub_839E2F14);
PPC_FUNC_IMPL(__imp__sub_839E2F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E2F18"))) PPC_WEAK_FUNC(sub_839E2F18);
PPC_FUNC_IMPL(__imp__sub_839E2F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E2F40"))) PPC_WEAK_FUNC(sub_839E2F40);
PPC_FUNC_IMPL(__imp__sub_839E2F40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x839e3ae0
	sub_839E3AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E2F48"))) PPC_WEAK_FUNC(sub_839E2F48);
PPC_FUNC_IMPL(__imp__sub_839E2F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E2F50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r9,r11,24528
	ctx.r9.s64 = ctx.r11.s64 + 24528;
	// addi r8,r10,24516
	ctx.r8.s64 = ctx.r10.s64 + 24516;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a9e30
	ctx.lr = 0x839E2F7C;
	sub_825A9E30(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839e2fcc
	if (cr6.eq) goto loc_839E2FCC;
	// bl 0x82a585e8
	ctx.lr = 0x839E2F90;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839E2FA0;
	sub_82595150(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e2fc0
	if (cr6.eq) goto loc_839E2FC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E2FC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839E2FC0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839E2FC8;
	sub_82595170(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_839E2FCC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82a5c688
	ctx.lr = 0x839E2FD4;
	sub_82A5C688(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x839E2FE8;
	sub_825E0CF8(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839e3010
	if (cr6.eq) goto loc_839E3010;
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
	ctx.lr = 0x839E300C;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_839E3010:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x839E3024;
	sub_825C3358(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// addi r7,r9,-32552
	ctx.r7.s64 = ctx.r9.s64 + -32552;
	// addi r6,r8,23792
	ctx.r6.s64 = ctx.r8.s64 + 23792;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E3044"))) PPC_WEAK_FUNC(sub_839E3044);
PPC_FUNC_IMPL(__imp__sub_839E3044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3048"))) PPC_WEAK_FUNC(sub_839E3048);
PPC_FUNC_IMPL(__imp__sub_839E3048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839E3050;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e3160
	if (!cr6.eq) goto loc_839E3160;
	// lbz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 92);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e3090
	if (!cr6.eq) goto loc_839E3090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a9e30
	ctx.lr = 0x839E3090;
	sub_825A9E30(ctx, base);
loc_839E3090:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e30ac
	if (!cr6.eq) goto loc_839E30AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_839E30AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e30dc
	if (cr6.eq) goto loc_839E30DC;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mulli r5,r11,10000
	ctx.r5.s64 = ctx.r11.s64 * 10000;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826501d8
	ctx.lr = 0x839E30D8;
	sub_826501D8(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_839E30DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e30ec
	if (cr6.eq) goto loc_839E30EC;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_839E30EC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e3104
	if (!cr6.eq) goto loc_839E3104;
loc_839E30F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_839E3104:
	// bl 0x82a585e8
	ctx.lr = 0x839E3108;
	sub_82A585E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E311C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e3134
	if (cr6.eq) goto loc_839E3134;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x837b08c8
	ctx.lr = 0x839E312C;
	sub_837B08C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839e3138
	goto loc_839E3138;
loc_839E3134:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_839E3138:
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839e30f8
	if (cr6.eq) goto loc_839E30F8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e3158
	if (cr6.eq) goto loc_839E3158;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833c8980
	ctx.lr = 0x839E3158;
	sub_833C8980(ctx, base);
loc_839E3158:
	// stb r28,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r28.u8);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_839E3160:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837b08f8
	ctx.lr = 0x839E3168;
	sub_837B08F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E3170"))) PPC_WEAK_FUNC(sub_839E3170);
PPC_FUNC_IMPL(__imp__sub_839E3170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839E3178;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce774
	ctx.lr = 0x839E3180;
	__savefpr_27(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831d1244
	ctx.lr = 0x839E3188;
	__savevmx_122(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3ac4
	if (cr6.eq) goto loc_839E3AC4;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f28,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f28.f64 = double(temp.f32);
	// stb r22,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r22.u8);
	// stfs f28,128(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r10,20592
	ctx.r9.s64 = ctx.r10.s64 + 20592;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// vupkd3d128 v125,v127,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v125 = vTemp;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v126,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f0,6208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6208);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,6202(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6202);
	// lfs f13,6212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6212);
	ctx.f13.f64 = double(temp.f32);
	// lhz r8,6204(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6204);
	// lfs f12,6216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	ctx.f12.f64 = double(temp.f32);
	// lhz r5,6200(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6200);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// lhz r11,6204(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6204);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lhz r9,6200(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6200);
	// lfs f11,6220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6220);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,6208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6208);
	ctx.f10.f64 = double(temp.f32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lhz r3,6202(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6202);
	// lfs f6,6212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6212);
	ctx.f6.f64 = double(temp.f32);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfs f5,6216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6216);
	ctx.f5.f64 = double(temp.f32);
	// vrefp128 v13,v126
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v126.f32)));
	// lfs f4,6220(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6220);
	ctx.f4.f64 = double(temp.f32);
	// vspltw128 v10,v125,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), 0x0));
	// vor128 v12,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// lfd f9,136(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f3,f9
	ctx.f3.f64 = double(ctx.f9.s64);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// vnmsubfp v0,v12,v13,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// fcfid f2,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = double(ctx.f8.s64);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f7
	ctx.f1.f64 = double(ctx.f7.s64);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f9
	ctx.f11.f64 = double(ctx.f9.s64);
	// vmaddfp v0,v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// fcfid f0,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// frsp f12,f2
	ctx.f12.f64 = double(float(ctx.f2.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f10,200(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// vcmpeqfp v9,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v12,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stfs f7,180(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// vmaddfp v0,v0,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v123,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r24,r11,-26260
	ctx.r24.s64 = ctx.r11.s64 + -26260;
	// addi r23,r10,9008
	ctx.r23.s64 = ctx.r10.s64 + 9008;
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// vsel v12,v13,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// lvx128 v122,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v124,v122,v123
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v124.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v122.f32), simde_mm_load_ps(ctx.v123.f32)));
	// vmulfp128 v62,v124,v12
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v124.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v61,v62,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v62.f32), 0xEF));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,240(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f30
	cr6.compare(ctx.f6.f64, ctx.f30.f64);
	// bgt cr6,0x839e333c
	if (cr6.gt) goto loc_839E333C;
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3348
	if (cr6.eq) goto loc_839E3348;
loc_839E333C:
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_839E3348:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e335c
	if (cr6.eq) goto loc_839E335C;
	// bl 0x82dfa5b8
	ctx.lr = 0x839E335C;
	sub_82DFA5B8(ctx, base);
loc_839E335C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vrefp128 v0,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v126.f32)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltw128 v4,v125,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), 0x0));
	// vor128 v12,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vspltisw128 v59,-1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vor128 v6,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vupkd3d128 v13,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v13 = vTemp;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lvx128 v2,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v58,v59,v59
	ctx.v58.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v58.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v58.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v58.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vmsum4fp128 v57,v8,v2
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v2.f32), 0xFF));
	// vslw128 v54,v59,v59
	ctx.v54.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v54.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v54.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v54.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslw128 v55,v59,v59
	ctx.v55.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v55.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v55.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v55.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// addi r7,r8,22672
	ctx.r7.s64 = ctx.r8.s64 + 22672;
	// vspltw128 v11,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vxor128 v7,v8,v54
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// addi r4,r6,7040
	ctx.r4.s64 = ctx.r6.s64 + 7040;
	// vnmsubfp v30,v12,v0,v4
	simde_mm_store_ps(ctx.v30.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v5,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// vor v31,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// lvx128 v1,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vsubfp128 v42,v13,v11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v53,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// vmrghw128 v41,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmaddcfp128 v31,v124,v31,v127
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v124.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// addi r6,r10,-14640
	ctx.r6.s64 = ctx.r10.s64 + -14640;
	// vspltw128 v10,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vmaddfp v12,v0,v30,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpgtfp128 v3,v127,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vxor128 v9,v10,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vaddfp128 v52,v123,v31
	simde_mm_store_ps(ctx.v52.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v123.f32), simde_mm_load_ps(ctx.v31.f32)));
	// vcmpeqfp v31,v12,v12
	simde_mm_store_ps(ctx.v31.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsel v0,v10,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v28,v8,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// vnmsubfp v8,v6,v12,v4
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v4.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v50,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// stvx128 v52,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v51,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vandc128 v0,v51,v55
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vcmpgtfp128 v3,v53,v51
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vsubfp v10,v13,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v12,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vrsqrtefp v9,v10
	simde_mm_store_ps(ctx.v9.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v10.f32))));
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vsel v8,v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vcmpeqfp128 v49,v10,v127
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vmulfp128 v48,v50,v8
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vor v8,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmaddcfp128 v10,v9,v10,v127
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp128 v45,v9,v127
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v47,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// stvx128 v48,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v46,v47,2
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0x55));
	// vspltw128 v44,v47,1
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xAA));
	// vspltw128 v43,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// vnmsubfp v6,v9,v10,v13
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddcfp128 v8,v10,v8,v127
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vor128 v5,v49,v45
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmaddcfp128 v9,v0,v9,v127
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// stvx128 v46,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r9,-14464
	ctx.r5.s64 = ctx.r9.s64 + -14464;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stvx128 v44,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v6,v8,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v43,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v27,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// addi r4,r8,-14656
	ctx.r4.s64 = ctx.r8.s64 + -14656;
	// lvx128 v10,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r7,-14480
	ctx.r3.s64 = ctx.r7.s64 + -14480;
	// lvx128 v8,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v4,v10,v0,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// vsel v8,v12,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// addi r9,r11,-14496
	ctx.r9.s64 = ctx.r11.s64 + -14496;
	// vmaddcfp128 v27,v9,v27,v127
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// lvx128 v6,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r10,-14512
	ctx.r8.s64 = ctx.r10.s64 + -14512;
	// lvx128 v10,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// vmaddfp v6,v6,v0,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// addi r5,r7,-14528
	ctx.r5.s64 = ctx.r7.s64 + -14528;
	// vmrghw128 v1,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// lvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r6,-14544
	ctx.r4.s64 = ctx.r6.s64 + -14544;
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// vspltisw128 v40,3
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_set1_epi32(int(0x3)));
	// addi r10,r3,2640
	ctx.r10.s64 = ctx.r3.s64 + 2640;
	// vspltisw128 v39,1
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_set1_epi32(int(0x1)));
	// lvx128 v7,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,26864
	ctx.r9.s64 = ctx.r11.s64 + 26864;
	// vmaddfp v29,v4,v0,v10
	simde_mm_store_ps(ctx.v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v5,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vspltisw128 v37,2
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_set1_epi32(int(0x2)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r8,2480
	ctx.r6.s64 = ctx.r8.s64 + 2480;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// vmaddfp v30,v6,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsraw128 v31,v51,v63
	ctx.v31.s32[0] = ctx.v51.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v31.s32[1] = ctx.v51.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v31.s32[2] = ctx.v51.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v31.s32[3] = ctx.v51.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// addi r3,r5,2528
	ctx.r3.s64 = ctx.r5.s64 + 2528;
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r7,2512
	ctx.r4.s64 = ctx.r7.s64 + 2512;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v4,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vslw128 v38,v59,v59
	ctx.v38.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v38.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v38.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v38.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// addi r7,r11,2592
	ctx.r7.s64 = ctx.r11.s64 + 2592;
	// lvx128 v9,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v7,v29,v0,v7
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v29.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// addi r6,r10,2608
	ctx.r6.s64 = ctx.r10.s64 + 2608;
	// addi r5,r9,2544
	ctx.r5.s64 = ctx.r9.s64 + 2544;
	// lvx128 v12,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vspltw128 v6,v125,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), 0x0));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r4,r8,2560
	ctx.r4.s64 = ctx.r8.s64 + 2560;
	// vmaddfp v0,v30,v0,v5
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v5,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,2624
	ctx.r10.s64 = ctx.r3.s64 + 2624;
	// vmaddfp v0,v0,v27,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor v7,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vnmsubfp v10,v8,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v0,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmaddcfp128 v7,v8,v7,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vsel v8,v7,v10,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// lvx128 v7,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v10,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vmaddcfp128 v8,v1,v8,v127
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v0,v8,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vcfpsxws128 v36,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vcsxwfp128 v0,v36,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vand128 v35,v36,v40
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vand128 v34,v35,v39
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v33,v35,v37
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vnmsubfp v31,v0,v12,v8
	simde_mm_store_ps(ctx.v31.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v8,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vnmsubfp v12,v0,v9,v31
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v31.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v4,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,2576
	ctx.r9.s64 = ctx.r11.s64 + 2576;
	// lvx128 v1,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequw128 v29,v34,v127
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// vcmpequw128 v30,v33,v127
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v31,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor v0,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmaddcfp128 v0,v12,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v8,v8,v0,v7
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vor v7,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmaddfp v9,v5,v0,v4
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddcfp128 v7,v0,v7,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v8,v8,v0,v1
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v9,v9,v0,v31
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v12,v8,v7,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v9,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v13,v0,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor v0,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vxor128 v13,v38,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsel v12,v13,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor128 v32,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vspltw128 v9,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), 0xFF));
	// vrefp v0,v9
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v9.f32)));
	// vnmsubfp v7,v9,v0,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v9,v0,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v8,v0,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v7,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v32,v12
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v0,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vsel v12,v11,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v13,v10,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor v0,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddcfp128 v0,v2,v0,v127
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v63,v28,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v28.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v59,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v60,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// stvx128 v59,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,32(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// stfs f11,40(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// stfs f8,36(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// stfs f9,44(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// bl 0x82a58930
	ctx.lr = 0x839E36E4;
	sub_82A58930(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f7,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// lfs f29,8976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f27,f5,f29
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// bl 0x82a58930
	ctx.lr = 0x839E370C;
	sub_82A58930(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f4,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmsubs f1,f2,f29,f27
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f29.f64 - ctx.f27.f64));
	// fmadds f1,f1,f28,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f27.f64));
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x839e3738
	if (!cr6.gt) goto loc_839E3738;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x839e3744
	goto loc_839E3744;
loc_839E3738:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x839e3744
	if (!cr6.lt) goto loc_839E3744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_839E3744:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x837b0998
	ctx.lr = 0x839E3754;
	sub_837B0998(ctx, base);
	// lbz r11,6227(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6227);
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x82a58960
	ctx.lr = 0x839E376C;
	sub_82A58960(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a58960
	ctx.lr = 0x839E377C;
	sub_82A58960(ctx, base);
	// lbz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 108);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e37a8
	if (!cr6.eq) goto loc_839E37A8;
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 & ctx.r28.u64;
loc_839E37A8:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x839e37c0
	if (!cr6.eq) goto loc_839E37C0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e39d0
	if (cr6.eq) goto loc_839E39D0;
loc_839E37C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a58940
	ctx.lr = 0x839E37C8;
	sub_82A58940(ctx, base);
	// bl 0x82a58a10
	ctx.lr = 0x839E37CC;
	sub_82A58A10(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v58,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x839e38d4
	if (!cr6.eq) goto loc_839E38D4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839e39d0
	if (cr6.eq) goto loc_839E39D0;
	// vspltw128 v55,v123,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v123.u32), 0xAA));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltw128 v54,v122,1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v122.u32), 0xAA));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vspltw128 v53,v123,2
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v123.u32), 0x55));
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// vspltw128 v52,v122,2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v122.u32), 0x55));
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// vspltw128 v57,v123,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v123.u32), 0xFF));
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// vsubfp128 v50,v54,v55
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v50.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v55.f32)));
	// vspltw128 v56,v122,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v122.u32), 0xFF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vsubfp128 v49,v52,v53
	simde_mm_store_ps(ctx.v49.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v53.f32)));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// vsubfp128 v51,v56,v57
	simde_mm_store_ps(ctx.v51.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v57.f32)));
	// stvx128 v50,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x825eb548
	ctx.lr = 0x839E3850;
	sub_825EB548(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825eb548
	ctx.lr = 0x839E3858;
	sub_825EB548(ctx, base);
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a5ca28
	ctx.lr = 0x839E3878;
	sub_82A5CA28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828c56a0
	ctx.lr = 0x839E3880;
	sub_828C56A0(ctx, base);
	// lfs f11,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stfs f10,188(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lvlx128 v48,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v47,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// stvx128 v47,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v46,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v45,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xFF));
	// stvx128 v45,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x839e39c8
	goto loc_839E39C8;
loc_839E38D4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839e39d0
	if (!cr6.eq) goto loc_839E39D0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e39d0
	if (cr6.eq) goto loc_839E39D0;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// bl 0x825eb548
	ctx.lr = 0x839E3900;
	sub_825EB548(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x82a5c2d0
	ctx.lr = 0x839E390C;
	sub_82A5C2D0(ctx, base);
	// lis r11,27670
	ctx.r11.s64 = 1813381120;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r8,r11,49517
	ctx.r8.u64 = ctx.r11.u64 | 49517;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mulhwu r11,r3,r8
	ctx.r11.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,-29044(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29044);
	ctx.f0.f64 = double(temp.f32);
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// mulli r10,r11,360
	ctx.r10.s64 = ctx.r11.s64 * 360;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x82624408
	ctx.lr = 0x839E3970;
	sub_82624408(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c56a0
	ctx.lr = 0x839E3978;
	sub_828C56A0(ctx, base);
	// lfs f9,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// stfs f8,200(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stfs f7,204(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lvlx128 v44,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v43,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// stvx128 v43,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v42,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v41,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// stvx128 v41,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_839E39C8:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x83102db0
	ctx.lr = 0x839E39D0;
	sub_83102DB0(ctx, base);
loc_839E39D0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e39e4
	if (cr6.eq) goto loc_839E39E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x839E39E4;
	sub_83102DB0(ctx, base);
loc_839E39E4:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e39f8
	if (cr6.eq) goto loc_839E39F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83102db0
	ctx.lr = 0x839E39F8;
	sub_83102DB0(ctx, base);
loc_839E39F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837a5710
	ctx.lr = 0x839E3A00;
	sub_837A5710(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lbz r10,6224(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6224);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lfs f1,24424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24424);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837a5900
	ctx.lr = 0x839E3A1C;
	sub_837A5900(ctx, base);
	// lbz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 52);
	// addi r31,r29,48
	ctx.r31.s64 = ctx.r29.s64 + 48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839e3a34
	if (!cr6.eq) goto loc_839E3A34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6bf8
	ctx.lr = 0x839E3A34;
	sub_828C6BF8(ctx, base);
loc_839E3A34:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e3a50
	if (!cr6.eq) goto loc_839E3A50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_839E3A50:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3ab4
	if (cr6.eq) goto loc_839E3AB4;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,24(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_839E3AB4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3ac4
	if (cr6.eq) goto loc_839E3AC4;
	// stw r22,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r22.u32);
loc_839E3AC4:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831d14dc
	ctx.lr = 0x839E3AD0;
	__restvmx_122(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7c0
	ctx.lr = 0x839E3AD8;
	__restfpr_27(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E3ADC"))) PPC_WEAK_FUNC(sub_839E3ADC);
PPC_FUNC_IMPL(__imp__sub_839E3ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3AE0"))) PPC_WEAK_FUNC(sub_839E3AE0);
PPC_FUNC_IMPL(__imp__sub_839E3AE0) {
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
	// bl 0x839e2f48
	ctx.lr = 0x839E3B00;
	sub_839E2F48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3b20
	if (cr6.eq) goto loc_839E3B20;
	// bl 0x82595188
	ctx.lr = 0x839E3B10;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x839E3B20;
	sub_825952B8(ctx, base);
loc_839E3B20:
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

__attribute__((alias("__imp__sub_839E3B3C"))) PPC_WEAK_FUNC(sub_839E3B3C);
PPC_FUNC_IMPL(__imp__sub_839E3B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3B40"))) PPC_WEAK_FUNC(sub_839E3B40);
PPC_FUNC_IMPL(__imp__sub_839E3B40) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,25012
	ctx.r4.s64 = ctx.r11.s64 + 25012;
	// bl 0x83103328
	ctx.lr = 0x839E3B60;
	sub_83103328(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,25192
	ctx.r9.s64 = ctx.r10.s64 + 25192;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82d35198
	ctx.lr = 0x839E3B7C;
	sub_82D35198(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d376c0
	ctx.lr = 0x839E3B88;
	sub_82D376C0(ctx, base);
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

__attribute__((alias("__imp__sub_839E3BA0"))) PPC_WEAK_FUNC(sub_839E3BA0);
PPC_FUNC_IMPL(__imp__sub_839E3BA0) {
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
	// lbz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x839e3c2c
	if (cr6.eq) goto loc_839E3C2C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839e3bfc
	if (!cr6.eq) goto loc_839E3BFC;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e3bfc
	if (!cr6.eq) goto loc_839E3BFC;
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// bl 0x83a7d958
	ctx.lr = 0x839E3BE8;
	sub_83A7D958(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// bl 0x82d35198
	ctx.lr = 0x839E3BF0;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x839e3c28
	goto loc_839E3C28;
loc_839E3BFC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e3c2c
	if (!cr6.eq) goto loc_839E3C2C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3c2c
	if (cr6.eq) goto loc_839E3C2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82d35198
	ctx.lr = 0x839E3C20;
	sub_82D35198(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_839E3C28:
	// bl 0x82d376c0
	ctx.lr = 0x839E3C2C;
	sub_82D376C0(ctx, base);
loc_839E3C2C:
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

__attribute__((alias("__imp__sub_839E3C44"))) PPC_WEAK_FUNC(sub_839E3C44);
PPC_FUNC_IMPL(__imp__sub_839E3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3C48"))) PPC_WEAK_FUNC(sub_839E3C48);
PPC_FUNC_IMPL(__imp__sub_839E3C48) {
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
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3c90
	if (cr6.eq) goto loc_839E3C90;
	// bl 0x83a7d958
	ctx.lr = 0x839E3C6C;
	sub_83A7D958(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x839E3C78;
	sub_83524138(ctx, base);
	// cmpldi cr6,r3,3000
	cr6.compare<uint64_t>(ctx.r3.u64, 3000, xer);
	// blt cr6,0x839e3c90
	if (cr6.lt) goto loc_839E3C90;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e3ba0
	ctx.lr = 0x839E3C90;
	sub_839E3BA0(ctx, base);
loc_839E3C90:
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

__attribute__((alias("__imp__sub_839E3CA4"))) PPC_WEAK_FUNC(sub_839E3CA4);
PPC_FUNC_IMPL(__imp__sub_839E3CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3CA8"))) PPC_WEAK_FUNC(sub_839E3CA8);
PPC_FUNC_IMPL(__imp__sub_839E3CA8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839e3ba0
	ctx.lr = 0x839E3CC0;
	sub_839E3BA0(ctx, base);
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

__attribute__((alias("__imp__sub_839E3CD4"))) PPC_WEAK_FUNC(sub_839E3CD4);
PPC_FUNC_IMPL(__imp__sub_839E3CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3CD8"))) PPC_WEAK_FUNC(sub_839E3CD8);
PPC_FUNC_IMPL(__imp__sub_839E3CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
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

__attribute__((alias("__imp__sub_839E3CE8"))) PPC_WEAK_FUNC(sub_839E3CE8);
PPC_FUNC_IMPL(__imp__sub_839E3CE8) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e3da8
	if (cr6.eq) goto loc_839E3DA8;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3d5c
	if (cr6.eq) goto loc_839E3D5C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r4,r11,25096
	ctx.r4.s64 = ctx.r11.s64 + 25096;
	// bl 0x82d2bb40
	ctx.lr = 0x839E3D20;
	sub_82D2BB40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x839e3da8
	if (!cr6.eq) goto loc_839E3DA8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839E3D3C;
	sub_82D2AEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
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
loc_839E3D5C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3da8
	if (cr6.eq) goto loc_839E3DA8;
	// bl 0x83a7d958
	ctx.lr = 0x839E3D6C;
	sub_83A7D958(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x839E3D78;
	sub_83524138(ctx, base);
	// cmpldi cr6,r3,3000
	cr6.compare<uint64_t>(ctx.r3.u64, 3000, xer);
	// blt cr6,0x839e3da8
	if (cr6.lt) goto loc_839E3DA8;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,25096
	ctx.r4.s64 = ctx.r11.s64 + 25096;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839E3DA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
loc_839E3DA8:
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

__attribute__((alias("__imp__sub_839E3DBC"))) PPC_WEAK_FUNC(sub_839E3DBC);
PPC_FUNC_IMPL(__imp__sub_839E3DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3DC0"))) PPC_WEAK_FUNC(sub_839E3DC0);
PPC_FUNC_IMPL(__imp__sub_839E3DC0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E3DE4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e3e00
	if (cr6.eq) goto loc_839E3E00;
	// bl 0x839e3b40
	ctx.lr = 0x839E3DF0;
	sub_839E3B40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839E3E00:
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

__attribute__((alias("__imp__sub_839E3E14"))) PPC_WEAK_FUNC(sub_839E3E14);
PPC_FUNC_IMPL(__imp__sub_839E3E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3E18"))) PPC_WEAK_FUNC(sub_839E3E18);
PPC_FUNC_IMPL(__imp__sub_839E3E18) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,25192
	ctx.r10.s64 = ctx.r11.s64 + 25192;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x839E3E44;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e3e5c
	if (cr6.eq) goto loc_839E3E5C;
	// bl 0x82416268
	ctx.lr = 0x839E3E58;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E3E5C:
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

__attribute__((alias("__imp__sub_839E3E74"))) PPC_WEAK_FUNC(sub_839E3E74);
PPC_FUNC_IMPL(__imp__sub_839E3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3E78"))) PPC_WEAK_FUNC(sub_839E3E78);
PPC_FUNC_IMPL(__imp__sub_839E3E78) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,25216
	ctx.r10.s64 = ctx.r11.s64 + 25216;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x839e3ec0
	if (cr6.lt) goto loc_839E3EC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839E3EC0;
	sub_825952B8(ctx, base);
loc_839E3EC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x831032a0
	ctx.lr = 0x839E3EDC;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_839E3EF4"))) PPC_WEAK_FUNC(sub_839E3EF4);
PPC_FUNC_IMPL(__imp__sub_839E3EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E3EF8"))) PPC_WEAK_FUNC(sub_839E3EF8);
PPC_FUNC_IMPL(__imp__sub_839E3EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E3F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e3f58
	if (!cr6.eq) goto loc_839E3F58;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e3f38
	if (cr6.lt) goto loc_839E3F38;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839E3F38;
	sub_825952B8(ctx, base);
loc_839E3F38:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E3F58:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e3f78
	if (cr6.eq) goto loc_839E3F78;
loc_839E3F64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x839E3F6C;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E3F78:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r30,r11,25088
	ctx.r30.s64 = ctx.r11.s64 + 25088;
	// addi r3,r10,100
	ctx.r3.s64 = ctx.r10.s64 + 100;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E3F9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e3f64
	if (cr6.eq) goto loc_839E3F64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839E3FB4;
	sub_82D291E0(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x839E3FB8;
	sub_83A7D958(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E3FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82d2aec8
	ctx.lr = 0x839E3FE8;
	sub_82D2AEC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x839E3FF0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E3FFC"))) PPC_WEAK_FUNC(sub_839E3FFC);
PPC_FUNC_IMPL(__imp__sub_839E3FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4000"))) PPC_WEAK_FUNC(sub_839E4000);
PPC_FUNC_IMPL(__imp__sub_839E4000) {
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
	// bl 0x839e3e78
	ctx.lr = 0x839E4020;
	sub_839E3E78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e4038
	if (cr6.eq) goto loc_839E4038;
	// bl 0x82416268
	ctx.lr = 0x839E4034;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E4038:
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

__attribute__((alias("__imp__sub_839E4050"))) PPC_WEAK_FUNC(sub_839E4050);
PPC_FUNC_IMPL(__imp__sub_839E4050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E4058;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,24794
	ctx.r29.s64 = ctx.r11.s64 + 24794;
	// addi r4,r29,258
	ctx.r4.s64 = ctx.r29.s64 + 258;
	// bl 0x83103328
	ctx.lr = 0x839E4070;
	sub_83103328(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,25216
	ctx.r9.s64 = ctx.r10.s64 + 25216;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x839E40A8;
	sub_8259CC28(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lwz r3,-28836(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -28836);
	// bl 0x83815a48
	ctx.lr = 0x839E40B8;
	sub_83815A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e40e8
	if (cr6.eq) goto loc_839E40E8;
	// bl 0x82d4b8e0
	ctx.lr = 0x839E40C4;
	sub_82D4B8E0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e40e8
	if (cr6.eq) goto loc_839E40E8;
	// li r4,-2049
	ctx.r4.s64 = -2049;
	// bl 0x83545640
	ctx.lr = 0x839E40D8;
	sub_83545640(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82d2aec8
	ctx.lr = 0x839E40E8;
	sub_82D2AEC8(ctx, base);
loc_839E40E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E40F4"))) PPC_WEAK_FUNC(sub_839E40F4);
PPC_FUNC_IMPL(__imp__sub_839E40F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E40F8"))) PPC_WEAK_FUNC(sub_839E40F8);
PPC_FUNC_IMPL(__imp__sub_839E40F8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E411C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e4138
	if (cr6.eq) goto loc_839E4138;
	// bl 0x839e4050
	ctx.lr = 0x839E4128;
	sub_839E4050(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839E4138:
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

__attribute__((alias("__imp__sub_839E414C"))) PPC_WEAK_FUNC(sub_839E414C);
PPC_FUNC_IMPL(__imp__sub_839E414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4150"))) PPC_WEAK_FUNC(sub_839E4150);
PPC_FUNC_IMPL(__imp__sub_839E4150) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,25508
	ctx.r4.s64 = ctx.r11.s64 + 25508;
	// bl 0x82d52960
	ctx.lr = 0x839E4170;
	sub_82D52960(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,25612
	ctx.r9.s64 = ctx.r10.s64 + 25612;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stb r11,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r11.u8);
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// std r11,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r11.u64);
	// bl 0x831021a0
	ctx.lr = 0x839E41B0;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x839E41B8;
	sub_82DA45F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x839E41C0;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_839E41D8"))) PPC_WEAK_FUNC(sub_839E41D8);
PPC_FUNC_IMPL(__imp__sub_839E41D8) {
	PPC_FUNC_PROLOGUE();
	// std r4,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E41E0"))) PPC_WEAK_FUNC(sub_839E41E0);
PPC_FUNC_IMPL(__imp__sub_839E41E0) {
	PPC_FUNC_PROLOGUE();
	// std r4,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E41E8"))) PPC_WEAK_FUNC(sub_839E41E8);
PPC_FUNC_IMPL(__imp__sub_839E41E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lwz r11,5208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5208);
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

__attribute__((alias("__imp__sub_839E41FC"))) PPC_WEAK_FUNC(sub_839E41FC);
PPC_FUNC_IMPL(__imp__sub_839E41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4200"))) PPC_WEAK_FUNC(sub_839E4200);
PPC_FUNC_IMPL(__imp__sub_839E4200) {
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
	// lis r31,-31742
	ctx.r31.s64 = -2080243712;
	// lwz r3,5208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e4250
	if (!cr6.eq) goto loc_839E4250;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E4238;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e4248
	if (cr6.eq) goto loc_839E4248;
	// bl 0x839e4150
	ctx.lr = 0x839E4244;
	sub_839E4150(ctx, base);
	// b 0x839e424c
	goto loc_839E424C;
loc_839E4248:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839E424C:
	// stw r3,5208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5208, ctx.r3.u32);
loc_839E4250:
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

__attribute__((alias("__imp__sub_839E4264"))) PPC_WEAK_FUNC(sub_839E4264);
PPC_FUNC_IMPL(__imp__sub_839E4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4268"))) PPC_WEAK_FUNC(sub_839E4268);
PPC_FUNC_IMPL(__imp__sub_839E4268) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E4274"))) PPC_WEAK_FUNC(sub_839E4274);
PPC_FUNC_IMPL(__imp__sub_839E4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4278"))) PPC_WEAK_FUNC(sub_839E4278);
PPC_FUNC_IMPL(__imp__sub_839E4278) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,5208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e42bc
	if (cr6.eq) goto loc_839E42BC;
	// bl 0x82d35198
	ctx.lr = 0x839E42A0;
	sub_82D35198(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x839E42AC;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x839E42B0;
	sub_82D35198(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// clrldi r5,r31,32
	ctx.r5.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// bl 0x82d37480
	ctx.lr = 0x839E42BC;
	sub_82D37480(ctx, base);
loc_839E42BC:
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

__attribute__((alias("__imp__sub_839E42D0"))) PPC_WEAK_FUNC(sub_839E42D0);
PPC_FUNC_IMPL(__imp__sub_839E42D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// stb r3,5212(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5212, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E42DC"))) PPC_WEAK_FUNC(sub_839E42DC);
PPC_FUNC_IMPL(__imp__sub_839E42DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E42E0"))) PPC_WEAK_FUNC(sub_839E42E0);
PPC_FUNC_IMPL(__imp__sub_839E42E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d529b8
	sub_82D529B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E42E4"))) PPC_WEAK_FUNC(sub_839E42E4);
PPC_FUNC_IMPL(__imp__sub_839E42E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E42E8"))) PPC_WEAK_FUNC(sub_839E42E8);
PPC_FUNC_IMPL(__imp__sub_839E42E8) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// addi r9,r11,25612
	ctx.r9.s64 = ctx.r11.s64 + 25612;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,5208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5208, ctx.r11.u32);
	// bl 0x82d35198
	ctx.lr = 0x839E4320;
	sub_82D35198(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x839E432C;
	sub_82D36760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d529a8
	ctx.lr = 0x839E4334;
	sub_82D529A8(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839e434c
	if (cr6.eq) goto loc_839E434C;
	// bl 0x82416268
	ctx.lr = 0x839E4348;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E434C:
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

__attribute__((alias("__imp__sub_839E4364"))) PPC_WEAK_FUNC(sub_839E4364);
PPC_FUNC_IMPL(__imp__sub_839E4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4368"))) PPC_WEAK_FUNC(sub_839E4368);
PPC_FUNC_IMPL(__imp__sub_839E4368) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x839e4554
	if (cr6.gt) goto loc_839E4554;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839e43d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E43D4;
	// bdzf 4*cr6+eq,0x839e4404
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E4404;
	// bdzf 4*cr6+eq,0x839e4470
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E4470;
	// bdzf 4*cr6+eq,0x839e44e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E44E4;
	// bne cr6,0x839e4540
	if (!cr6.eq) goto loc_839E4540;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E43BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e4554
	if (cr6.eq) goto loc_839E4554;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839e4554
	goto loc_839E4554;
loc_839E43D4:
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e4554
	if (cr6.eq) goto loc_839E4554;
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x839e43f8
	if (!cr6.eq) goto loc_839E43F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839e4554
	goto loc_839E4554;
loc_839E43F8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839e4554
	goto loc_839E4554;
loc_839E4404:
	// bl 0x83a7d958
	ctx.lr = 0x839E4408;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x839E440C;
	sub_83524138(ctx, base);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,1000
	cr6.compare<uint64_t>(ctx.r10.u64, 1000, xer);
	// blt cr6,0x839e4554
	if (cr6.lt) goto loc_839E4554;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r3,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r3.u64);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839e4440
	if (cr6.gt) goto loc_839E4440;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r10.u8);
loc_839E4440:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e4454
	if (!cr6.eq) goto loc_839E4454;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_839E4454:
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e4554
	if (cr6.eq) goto loc_839E4554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x839e4278
	ctx.lr = 0x839E446C;
	sub_839E4278(ctx, base);
	// b 0x839e4554
	goto loc_839E4554;
loc_839E4470:
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// ld r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// blt cr6,0x839e4498
	if (cr6.lt) goto loc_839E4498;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// b 0x839e44c4
	goto loc_839E44C4;
loc_839E4498:
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, xer);
	// beq cr6,0x839e4554
	if (cr6.eq) goto loc_839E4554;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x839e44c4
	if (cr6.gt) goto loc_839E44C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
loc_839E44C4:
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e4554
	if (cr6.eq) goto loc_839E4554;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x839e4278
	ctx.lr = 0x839E44E0;
	sub_839E4278(ctx, base);
	// b 0x839e4554
	goto loc_839E4554;
loc_839E44E4:
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// lis r30,-31742
	ctx.r30.s64 = -2080243712;
	// lwz r11,5592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5592);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839e4510
	if (!cr6.eq) goto loc_839E4510;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,5592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5592, ctx.r11.u32);
	// bl 0x83a7d958
	ctx.lr = 0x839E4508;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x839E450C;
	sub_83524138(ctx, base);
	// std r3,5584(r30)
	PPC_STORE_U64(ctx.r30.u32 + 5584, ctx.r3.u64);
loc_839E4510:
	// bl 0x83a7d958
	ctx.lr = 0x839E4514;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x839E4518;
	sub_83524138(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ld r11,5584(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 5584);
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpld cr6,r7,r8
	cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, xer);
	// ble cr6,0x839e4554
	if (!cr6.gt) goto loc_839E4554;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x839e4554
	goto loc_839E4554;
loc_839E4540:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E4554;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839E4554:
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

__attribute__((alias("__imp__sub_839E456C"))) PPC_WEAK_FUNC(sub_839E456C);
PPC_FUNC_IMPL(__imp__sub_839E456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4570"))) PPC_WEAK_FUNC(sub_839E4570);
PPC_FUNC_IMPL(__imp__sub_839E4570) {
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
	// li r4,78
	ctx.r4.s64 = 78;
	// bl 0x82d17e20
	ctx.lr = 0x839E4584;
	sub_82D17E20(ctx, base);
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

__attribute__((alias("__imp__sub_839E4598"))) PPC_WEAK_FUNC(sub_839E4598);
PPC_FUNC_IMPL(__imp__sub_839E4598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,20481
	ctx.r8.u64 = ctx.r10.u64 | 20481;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 164, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E45C0"))) PPC_WEAK_FUNC(sub_839E45C0);
PPC_FUNC_IMPL(__imp__sub_839E45C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,20482
	ctx.r10.u64 = ctx.r10.u64 | 20482;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103068
	ctx.lr = 0x839E4600;
	sub_83103068(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839E4614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_839E4628"))) PPC_WEAK_FUNC(sub_839E4628);
PPC_FUNC_IMPL(__imp__sub_839E4628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E4630;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r11,26420
	ctx.r30.s64 = ctx.r11.s64 + 26420;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x839e4694
	if (!cr6.eq) goto loc_839E4694;
	// addi r6,r30,-713
	ctx.r6.s64 = ctx.r30.s64 + -713;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x839E4668;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839e4694
	if (!cr6.eq) goto loc_839E4694;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E468C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E4694:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x839e4748
	if (cr6.eq) goto loc_839E4748;
	// addi r6,r30,-682
	ctx.r6.s64 = ctx.r30.s64 + -682;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x839E46B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839e4748
	if (!cr6.eq) goto loc_839E4748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E46DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839E46F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e4814
	if (cr6.eq) goto loc_839E4814;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ori r4,r4,649
	ctx.r4.u64 = ctx.r4.u64 | 649;
	// bl 0x82d04220
	ctx.lr = 0x839E4724;
	sub_82D04220(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839E4738;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839E4740;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E4748:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E4764;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x839E477C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e4814
	if (cr6.eq) goto loc_839E4814;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x839e4800
	if (!cr6.gt) goto loc_839E4800;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x839e4800
	if (!cr6.eq) goto loc_839E4800;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// blt cr6,0x839e47c8
	if (cr6.lt) goto loc_839E47C8;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x839e47cc
	goto loc_839E47CC;
loc_839E47C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_839E47CC:
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,660
	ctx.r4.u64 = ctx.r4.u64 | 660;
	// bl 0x82d042a8
	ctx.lr = 0x839E47DC;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839E47F0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x839E47F8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E4800:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839E4814;
	sub_82D291E0(ctx, base);
loc_839E4814:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E481C"))) PPC_WEAK_FUNC(sub_839E481C);
PPC_FUNC_IMPL(__imp__sub_839E481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4820"))) PPC_WEAK_FUNC(sub_839E4820);
PPC_FUNC_IMPL(__imp__sub_839E4820) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x839E4838;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x839E483C;
	sub_83524138(ctx, base);
	// ld r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// lbz r10,165(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e4888
	if (!cr6.eq) goto loc_839E4888;
	// lbz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839e4888
	if (cr6.eq) goto loc_839E4888;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839E486C;
	sub_82D19788(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_839E4888:
	// cmpldi cr6,r11,36000
	cr6.compare<uint64_t>(ctx.r11.u64, 36000, xer);
	// blt cr6,0x839e48ec
	if (cr6.lt) goto loc_839E48EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,21716
	ctx.r8.s64 = ctx.r11.s64 + 21716;
	// ori r7,r10,20482
	ctx.r7.u64 = ctx.r10.u64 | 20482;
	// stb r9,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r9.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839E48C8;
	sub_83103068(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x839E48D8;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_839E48EC:
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// lis r9,-30584
	ctx.r9.s64 = -2004353024;
	// ori r8,r10,34953
	ctx.r8.u64 = ctx.r10.u64 | 34953;
	// ori r7,r9,34952
	ctx.r7.u64 = ctx.r9.u64 | 34952;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// divdu r5,r11,r6
	ctx.r5.u64 = PPCDivide(ctx.r11.u64, ctx.r6.u64);
	// mulhdu r4,r5,r8
	ctx.r4.u64 = ((unsigned __int128)ctx.r5.u64 * (unsigned __int128)ctx.r8.u64) >> 64;
	// rldicl r3,r4,59,5
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 59) & 0x7FFFFFFFFFFFFFF;
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmpldi cr6,r11,5
	cr6.compare<uint64_t>(ctx.r11.u64, 5, xer);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subfic r7,r11,65
	xer.ca = ctx.r11.u32 <= 65;
	ctx.r7.s64 = 65 - ctx.r11.s64;
	// bgt cr6,0x839e492c
	if (cr6.gt) goto loc_839E492C;
	// subfic r7,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r7.s64 = 5 - ctx.r11.s64;
loc_839E492C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// ble cr6,0x839e4940
	if (!cr6.gt) goto loc_839E4940;
	// li r6,59
	ctx.r6.s64 = 59;
loc_839E4940:
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x839e4950
	if (cr6.eq) goto loc_839E4950;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_839E4950:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,140
	ctx.r4.u64 = ctx.r4.u64 | 140;
	// bl 0x82d042a8
	ctx.lr = 0x839E4970;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839E4978;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r4,r9,26436
	ctx.r4.s64 = ctx.r9.s64 + 26436;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839E4994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e49bc
	if (cr6.eq) goto loc_839E49BC;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82d284d0
	ctx.lr = 0x839E49A8;
	sub_82D284D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839E49BC;
	sub_82D291E0(ctx, base);
loc_839E49BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839E49C4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E49D8"))) PPC_WEAK_FUNC(sub_839E49D8);
PPC_FUNC_IMPL(__imp__sub_839E49D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E49E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bgt cr6,0x839e4a14
	if (cr6.gt) goto loc_839E4A14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839E4A14;
	sub_831CC188(ctx, base);
loc_839E4A14:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// add r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x839E4A4C;
	sub_8259CB28(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x839e4628
	ctx.lr = 0x839E4A74;
	sub_839E4628(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x839e4a94
	if (cr6.lt) goto loc_839E4A94;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839E4A94;
	sub_825952B8(ctx, base);
loc_839E4A94:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E4A9C"))) PPC_WEAK_FUNC(sub_839E4A9C);
PPC_FUNC_IMPL(__imp__sub_839E4A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4AA0"))) PPC_WEAK_FUNC(sub_839E4AA0);
PPC_FUNC_IMPL(__imp__sub_839E4AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839E4AA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x839e4acc
	if (!cr6.gt) goto loc_839E4ACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x839E4ACC;
	sub_831CC150(ctx, base);
loc_839E4ACC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,40
	ctx.r27.s64 = 40;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x839e4b84
	if (!cr6.lt) goto loc_839E4B84;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x839E4B0C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b553d8
	ctx.lr = 0x839E4B30;
	sub_82B553D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r10,r27
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x839e4b64
	if (cr6.eq) goto loc_839E4B64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82cbd208
	ctx.lr = 0x839E4B54;
	sub_82CBD208(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x839E4B64;
	sub_825952B8(ctx, base);
loc_839E4B64:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_839E4B84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E4B8C"))) PPC_WEAK_FUNC(sub_839E4B8C);
PPC_FUNC_IMPL(__imp__sub_839E4B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4B90"))) PPC_WEAK_FUNC(sub_839E4B90);
PPC_FUNC_IMPL(__imp__sub_839E4B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839E4B98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26560
	ctx.r9.s64 = ctx.r11.s64 + 26560;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// lwz r7,140(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x839e4bdc
	if (cr6.lt) goto loc_839E4BDC;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x839E4BDC;
	sub_825952B8(ctx, base);
loc_839E4BDC:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r31,r28,96
	ctx.r31.s64 = ctx.r28.s64 + 96;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e4c20
	if (cr6.eq) goto loc_839E4C20;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82cbd208
	ctx.lr = 0x839E4C10;
	sub_82CBD208(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x839E4C20;
	sub_825952B8(ctx, base);
loc_839E4C20:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82d25548
	ctx.lr = 0x839E4C34;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E4C3C"))) PPC_WEAK_FUNC(sub_839E4C3C);
PPC_FUNC_IMPL(__imp__sub_839E4C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4C40"))) PPC_WEAK_FUNC(sub_839E4C40);
PPC_FUNC_IMPL(__imp__sub_839E4C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,40
	ctx.r9.s64 = 40;
	// ori r8,r10,26214
	ctx.r8.u64 = ctx.r10.u64 | 26214;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x839e4c74
	if (!cr6.lt) goto loc_839E4C74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_839E4C74:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x839e4ca4
	if (cr6.lt) goto loc_839E4CA4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_839E4CA4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x839e4cb0
	if (!cr6.lt) goto loc_839E4CB0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_839E4CB0:
	// b 0x839e4aa0
	sub_839E4AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E4CB4"))) PPC_WEAK_FUNC(sub_839E4CB4);
PPC_FUNC_IMPL(__imp__sub_839E4CB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E4CB8"))) PPC_WEAK_FUNC(sub_839E4CB8);
PPC_FUNC_IMPL(__imp__sub_839E4CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E4CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8308e078
	ctx.lr = 0x839E4CD4;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x839E4CEC;
	sub_82D253F8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26560
	ctx.r9.s64 = ctx.r11.s64 + 26560;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lis r6,-31767
	ctx.r6.s64 = -2081882112;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// std r11,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r11.u64);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// stb r11,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r11.u8);
	// lwz r4,-28576(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -28576);
	// bl 0x82d20ae0
	ctx.lr = 0x839E4D4C;
	sub_82D20AE0(ctx, base);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,26244
	ctx.r4.s64 = ctx.r5.s64 + 26244;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x839E4D60;
	sub_82D23390(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82d462e8
	ctx.lr = 0x839E4D68;
	sub_82D462E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E4D74"))) PPC_WEAK_FUNC(sub_839E4D74);
PPC_FUNC_IMPL(__imp__sub_839E4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E4D78"))) PPC_WEAK_FUNC(sub_839E4D78);
PPC_FUNC_IMPL(__imp__sub_839E4D78) {
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
	// bl 0x839e4b90
	ctx.lr = 0x839E4D98;
	sub_839E4B90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e4db0
	if (cr6.eq) goto loc_839E4DB0;
	// bl 0x82416268
	ctx.lr = 0x839E4DAC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E4DB0:
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

__attribute__((alias("__imp__sub_839E4DC8"))) PPC_WEAK_FUNC(sub_839E4DC8);
PPC_FUNC_IMPL(__imp__sub_839E4DC8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E4DFC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e4e14
	if (cr6.eq) goto loc_839E4E14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839e4cb8
	ctx.lr = 0x839E4E10;
	sub_839E4CB8(ctx, base);
	// b 0x839e4e18
	goto loc_839E4E18;
loc_839E4E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839E4E18:
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

__attribute__((alias("__imp__sub_839E4E30"))) PPC_WEAK_FUNC(sub_839E4E30);
PPC_FUNC_IMPL(__imp__sub_839E4E30) {
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
	ctx.lr = 0x839E4E38;
	__savegprlr_21(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x839e4e5c
	if (cr6.lt) goto loc_839E4E5C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x839e4e60
	goto loc_839E4E60;
loc_839E4E5C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_839E4E60:
	// bl 0x82d19a78
	ctx.lr = 0x839E4E64;
	sub_82D19A78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x839E4E6C;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e4eb0
	if (!cr6.eq) goto loc_839E4EB0;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e4e94
	if (cr6.lt) goto loc_839E4E94;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839E4E94;
	sub_825952B8(ctx, base);
loc_839E4E94:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r31.u32);
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// stb r31,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r31.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839E4EB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x839E4EB8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e4ed0
	if (!cr6.eq) goto loc_839E4ED0;
loc_839E4EC0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x839E4EC8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839E4ED0:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r10,26456
	ctx.r4.s64 = ctx.r10.s64 + 26456;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839E4EEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e4ec0
	if (cr6.eq) goto loc_839E4EC0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d04828
	ctx.lr = 0x839E4F00;
	sub_82D04828(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28370
	ctx.lr = 0x839E4F0C;
	sub_82D28370(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,30444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30444);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82d07058
	ctx.lr = 0x839E4F24;
	sub_82D07058(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x82d04d80
	ctx.lr = 0x839E4F48;
	sub_82D04D80(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,28
	ctx.r28.s64 = 28;
	// li r22,2
	ctx.r22.s64 = 2;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r26,15
	ctx.r26.s64 = 15;
	// divw. r7,r8,r28
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x839e5020
	if (cr0.eq) goto loc_839E5020;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r25,r11,-22544
	ctx.r25.s64 = ctx.r11.s64 + -22544;
loc_839E4F7C:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x8259cc28
	ctx.lr = 0x839E4F9C;
	sub_8259CC28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x839e5060
	if (!cr6.gt) goto loc_839E5060;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x839E4FCC;
	sub_8259CB28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b000a8
	ctx.lr = 0x839E4FD8;
	sub_82B000A8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e4ff4
	if (cr6.lt) goto loc_839E4FF4;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x839E4FF4;
	sub_825952B8(ctx, base);
loc_839E4FF4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x839e4f7c
	if (cr6.lt) goto loc_839E4F7C;
loc_839E5020:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838ae2a8
	ctx.lr = 0x839E5028;
	sub_838AE2A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d04b60
	ctx.lr = 0x839E5030;
	sub_82D04B60(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e504c
	if (cr6.lt) goto loc_839E504C;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x839E504C;
	sub_825952B8(ctx, base);
loc_839E504C:
	// stw r26,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r26.u32);
	// stw r31,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r31.u32);
	// stb r31,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r31.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839E5060:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x839E506C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_839E506C"))) PPC_WEAK_FUNC(sub_839E506C);
PPC_FUNC_IMPL(__imp__sub_839E506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E5070"))) PPC_WEAK_FUNC(sub_839E5070);
PPC_FUNC_IMPL(__imp__sub_839E5070) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x839e50a8
	if (!cr6.lt) goto loc_839E50A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x839e50ac
	if (!cr6.gt) goto loc_839E50AC;
loc_839E50A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_839E50AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839e5104
	if (cr6.eq) goto loc_839E5104;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x839e50e0
	if (!cr6.eq) goto loc_839E50E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e4c40
	ctx.lr = 0x839E50E0;
	sub_839E4C40(ctx, base);
loc_839E50E0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e5130
	if (cr6.eq) goto loc_839E5130;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x839e512c
	goto loc_839E512C;
loc_839E5104:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x839e511c
	if (!cr6.eq) goto loc_839E511C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e4c40
	ctx.lr = 0x839E511C;
	sub_839E4C40(ctx, base);
loc_839E511C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e5130
	if (cr6.eq) goto loc_839E5130;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_839E512C:
	// bl 0x82b12658
	ctx.lr = 0x839E5130;
	sub_82B12658(ctx, base);
loc_839E5130:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_839E5154"))) PPC_WEAK_FUNC(sub_839E5154);
PPC_FUNC_IMPL(__imp__sub_839E5154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E5158"))) PPC_WEAK_FUNC(sub_839E5158);
PPC_FUNC_IMPL(__imp__sub_839E5158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839E5160;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x839E5194;
	sub_8259CC28(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x839E51C0;
	sub_831156E8(ctx, base);
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r4,260
	ctx.r4.s64 = 17039360;
	// ori r8,r10,52996
	ctx.r8.u64 = ctx.r10.u64 | 52996;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// blt cr6,0x839e51e4
	if (cr6.lt) goto loc_839E51E4;
	// ori r4,r4,60
	ctx.r4.u64 = ctx.r4.u64 | 60;
	// b 0x839e51f8
	goto loc_839E51F8;
loc_839E51E4:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// blt cr6,0x839e51f4
	if (cr6.lt) goto loc_839E51F4;
	// ori r4,r4,61
	ctx.r4.u64 = ctx.r4.u64 | 61;
	// b 0x839e51f8
	goto loc_839E51F8;
loc_839E51F4:
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
loc_839E51F8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x839E5200;
	sub_82D042A8(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x839E5220;
	sub_8259CB28(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839e4e30
	ctx.lr = 0x839E5230;
	sub_839E4E30(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x839E524C;
	sub_8259CC28(ctx, base);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x839e5070
	ctx.lr = 0x839E5264;
	sub_839E5070(ctx, base);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b005c8
	ctx.lr = 0x839E527C;
	sub_82B005C8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e529c
	if (cr6.lt) goto loc_839E529C;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x839E529C;
	sub_825952B8(ctx, base);
loc_839E529C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x839e52c4
	if (cr6.lt) goto loc_839E52C4;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x839E52C4;
	sub_825952B8(ctx, base);
loc_839E52C4:
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// beq cr6,0x839e5300
	if (cr6.eq) goto loc_839E5300;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82aff248
	ctx.lr = 0x839E52F0;
	sub_82AFF248(ctx, base);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x839E5300;
	sub_825952B8(ctx, base);
loc_839E5300:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e531c
	if (cr6.lt) goto loc_839E531C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x839E531C;
	sub_825952B8(ctx, base);
loc_839E531C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E5324"))) PPC_WEAK_FUNC(sub_839E5324);
PPC_FUNC_IMPL(__imp__sub_839E5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E5328"))) PPC_WEAK_FUNC(sub_839E5328);
PPC_FUNC_IMPL(__imp__sub_839E5328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839E5330;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82d462e8
	ctx.lr = 0x839E5340;
	sub_82D462E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e54e0
	if (cr6.eq) goto loc_839E54E0;
	// bl 0x82d26640
	ctx.lr = 0x839E5350;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x839E5354;
	sub_82D25AB8(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x839E5358;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x839E535C;
	sub_83524138(ctx, base);
	// std r3,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r3.u64);
	// bl 0x831156e8
	ctx.lr = 0x839E5364;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,48(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d19788
	ctx.lr = 0x839E537C;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x839E538C;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839E5394;
	sub_82D19A78(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,26340
	ctx.r30.s64 = ctx.r11.s64 + 26340;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839E53B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r24,r31,120
	ctx.r24.s64 = ctx.r31.s64 + 120;
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8259cc28
	ctx.lr = 0x839E53CC;
	sub_8259CC28(ctx, base);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x839E53E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,100(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r29,r28,100
	ctx.r29.s64 = ctx.r28.s64 + 100;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x839E5404;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e54e0
	if (cr6.eq) goto loc_839E54E0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E5424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e54e0
	if (cr6.eq) goto loc_839E54E0;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82d284d0
	ctx.lr = 0x839E5438;
	sub_82D284D0(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r10,r11,52996
	ctx.r10.u64 = ctx.r11.u64 | 52996;
	// li r9,15
	ctx.r9.s64 = 15;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r8,r26,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// ori r4,r4,140
	ctx.r4.u64 = ctx.r4.u64 | 140;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// bl 0x82d042a8
	ctx.lr = 0x839E5478;
	sub_82D042A8(ctx, base);
	// li r4,78
	ctx.r4.s64 = 78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x839E5484;
	sub_82D17DA0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839E5498;
	sub_82D291E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e5158
	ctx.lr = 0x839E54A0;
	sub_839E5158(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r5,r30,-636
	ctx.r5.s64 = ctx.r30.s64 + -636;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x839E54B8;
	sub_831178A0(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839E54D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e54ec
	if (!cr6.eq) goto loc_839E54EC;
loc_839E54D8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839E54E0;
	sub_8387E8E0(ctx, base);
loc_839E54E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_839E54EC:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r25,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r25.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x839e5504
	if (cr6.eq) goto loc_839E5504;
	// li r5,1
	ctx.r5.s64 = 1;
loc_839E5504:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82d329f8
	ctx.lr = 0x839E5514;
	sub_82D329F8(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e5528
	if (cr6.lt) goto loc_839E5528;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x839e552c
	goto loc_839E552C;
loc_839E5528:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_839E552C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2f098
	ctx.lr = 0x839E5534;
	sub_82D2F098(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e54d8
	if (cr6.eq) goto loc_839E54D8;
	// bl 0x82d33c10
	ctx.lr = 0x839E5544;
	sub_82D33C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,40
	ctx.r27.s64 = 40;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e55b4
	if (cr6.eq) goto loc_839E55B4;
loc_839E5558:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x839E5564;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e55a4
	if (cr6.eq) goto loc_839E55A4;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r27
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x839e5594
	if (cr6.gt) goto loc_839E5594;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x839E5590;
	sub_82D2AEC8(ctx, base);
	// b 0x839e55a4
	goto loc_839E55A4;
loc_839E5594:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r25,r11
	ctx.r5.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e4628
	ctx.lr = 0x839E55A4;
	sub_839E4628(ctx, base);
loc_839E55A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r25,r25,40
	ctx.r25.s64 = ctx.r25.s64 + 40;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x839e5558
	if (cr6.lt) goto loc_839E5558;
loc_839E55B4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r5,r9,r27
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// bl 0x82d20f50
	ctx.lr = 0x839E55D8;
	sub_82D20F50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x839E55E0;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E55EC"))) PPC_WEAK_FUNC(sub_839E55EC);
PPC_FUNC_IMPL(__imp__sub_839E55EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E55F0"))) PPC_WEAK_FUNC(sub_839E55F0);
PPC_FUNC_IMPL(__imp__sub_839E55F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E55F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bge cr6,0x839e561c
	if (!cr6.lt) goto loc_839E561C;
loc_839E5610:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x839e5610
	if (cr6.lt) goto loc_839E5610;
loc_839E561C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x831d2bf8
	ctx.lr = 0x839E5624;
	sub_831D2BF8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// subf r9,r29,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r29.s64;
	// add r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E5650"))) PPC_WEAK_FUNC(sub_839E5650);
PPC_FUNC_IMPL(__imp__sub_839E5650) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x839e569c
	if (cr6.eq) goto loc_839E569C;
loc_839E5678:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E568C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x839e5678
	if (!cr6.eq) goto loc_839E5678;
loc_839E569C:
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

__attribute__((alias("__imp__sub_839E56B4"))) PPC_WEAK_FUNC(sub_839E56B4);
PPC_FUNC_IMPL(__imp__sub_839E56B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E56B8"))) PPC_WEAK_FUNC(sub_839E56B8);
PPC_FUNC_IMPL(__imp__sub_839E56B8) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x839e5650
	ctx.lr = 0x839E56D4;
	sub_839E5650(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831cf100
	ctx.lr = 0x839E56DC;
	sub_831CF100(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831cf100
	ctx.lr = 0x839E56E8;
	sub_831CF100(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839e5704
	if (cr6.eq) goto loc_839E5704;
loc_839E56F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831cf100
	ctx.lr = 0x839E56FC;
	sub_831CF100(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839e56f0
	if (!cr6.eq) goto loc_839E56F0;
loc_839E5704:
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

__attribute__((alias("__imp__sub_839E5718"))) PPC_WEAK_FUNC(sub_839E5718);
PPC_FUNC_IMPL(__imp__sub_839E5718) {
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
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// bl 0x831d2bf8
	ctx.lr = 0x839E5740;
	sub_831D2BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x839e5754
	if (!cr6.eq) goto loc_839E5754;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x839e576c
	goto loc_839E576C;
loc_839E5754:
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_839E576C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e5780
	if (!cr6.eq) goto loc_839E5780;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839e5790
	goto loc_839E5790;
loc_839E5780:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_839E5790:
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

__attribute__((alias("__imp__sub_839E57A8"))) PPC_WEAK_FUNC(sub_839E57A8);
PPC_FUNC_IMPL(__imp__sub_839E57A8) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r4,r8,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x839e57f8
	if (!cr6.lt) goto loc_839E57F8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x839e55f0
	ctx.lr = 0x839E57F0;
	sub_839E55F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x839e580c
	goto loc_839E580C;
loc_839E57F8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_839E580C:
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_839E582C"))) PPC_WEAK_FUNC(sub_839E582C);
PPC_FUNC_IMPL(__imp__sub_839E582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E5830"))) PPC_WEAK_FUNC(sub_839E5830);
PPC_FUNC_IMPL(__imp__sub_839E5830) {
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
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r4,r8,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x839e5880
	if (!cr6.lt) goto loc_839E5880;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x839e55f0
	ctx.lr = 0x839E5878;
	sub_839E55F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x839e5894
	goto loc_839E5894;
loc_839E5880:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_839E5894:
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_839E58B4"))) PPC_WEAK_FUNC(sub_839E58B4);
PPC_FUNC_IMPL(__imp__sub_839E58B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E58B8"))) PPC_WEAK_FUNC(sub_839E58B8);
PPC_FUNC_IMPL(__imp__sub_839E58B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x839E58C0;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r21,r4,r5
	ctx.r21.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r25,12(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// li r22,2
	ctx.r22.s64 = 2;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// li r18,3
	ctx.r18.s64 = 3;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r15,4
	ctx.r15.s64 = 4;
	// addi r24,r3,24
	ctx.r24.s64 = ctx.r3.s64 + 24;
	// li r16,5
	ctx.r16.s64 = 5;
	// cmplw cr6,r26,r21
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, xer);
	// beq cr6,0x839e62a4
	if (cr6.eq) goto loc_839E62A4;
loc_839E5910:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x839e5a90
	if (!cr6.eq) goto loc_839E5A90;
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,127
	cr6.compare<uint32_t>(ctx.r10.u32, 127, xer);
	// bgt cr6,0x839e5938
	if (cr6.gt) goto loc_839E5938;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5938:
	// cmplwi cr6,r11,224
	cr6.compare<uint32_t>(ctx.r11.u32, 224, xer);
	// blt cr6,0x839e5964
	if (cr6.lt) goto loc_839E5964;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bgt cr6,0x839e5964
	if (cr6.gt) goto loc_839E5964;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// blt cr6,0x839e5dec
	if (cr6.lt) goto loc_839E5DEC;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5964:
	// cmplwi cr6,r11,192
	cr6.compare<uint32_t>(ctx.r11.u32, 192, xer);
	// blt cr6,0x839e5a6c
	if (cr6.lt) goto loc_839E5A6C;
	// cmplwi cr6,r11,223
	cr6.compare<uint32_t>(ctx.r11.u32, 223, xer);
	// bgt cr6,0x839e5a6c
	if (cr6.gt) goto loc_839E5A6C;
	// addi r10,r11,-192
	ctx.r10.s64 = ctx.r11.s64 + -192;
	// cmplwi cr6,r10,31
	cr6.compare<uint32_t>(ctx.r10.u32, 31, xer);
	// bgt cr6,0x839e62cc
	if (cr6.gt) goto loc_839E62CC;
	// lis r12,-31842
	ctx.r12.s64 = -2086797312;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22936
	ctx.r12.s64 = ctx.r12.s64 + 22936;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_839E5A18;
	case 1:
		goto loc_839E62CC;
	case 2:
		goto loc_839E5A20;
	case 3:
		goto loc_839E5A2C;
	case 4:
		goto loc_839E5A38;
	case 5:
		goto loc_839E5A38;
	case 6:
		goto loc_839E5A38;
	case 7:
		goto loc_839E62CC;
	case 8:
		goto loc_839E62CC;
	case 9:
		goto loc_839E62CC;
	case 10:
		goto loc_839E5A38;
	case 11:
		goto loc_839E5A38;
	case 12:
		goto loc_839E5A38;
	case 13:
		goto loc_839E5A38;
	case 14:
		goto loc_839E5A38;
	case 15:
		goto loc_839E5A38;
	case 16:
		goto loc_839E5A38;
	case 17:
		goto loc_839E5A38;
	case 18:
		goto loc_839E5A38;
	case 19:
		goto loc_839E5A38;
	case 20:
		goto loc_839E62CC;
	case 21:
		goto loc_839E62CC;
	case 22:
		goto loc_839E62CC;
	case 23:
		goto loc_839E62CC;
	case 24:
		goto loc_839E62CC;
	case 25:
		goto loc_839E5A48;
	case 26:
		goto loc_839E5A48;
	case 27:
		goto loc_839E5A48;
	case 28:
		goto loc_839E5A5C;
	case 29:
		goto loc_839E5A5C;
	case 30:
		goto loc_839E5A5C;
	case 31:
		goto loc_839E5A5C;
	default:
		return;
	}
	// lwz r28,23064(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23064);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,23072(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23072);
	// lwz r28,23084(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23084);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,23096(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23096);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,23112(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23112);
	// lwz r28,23112(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23112);
	// lwz r28,23112(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23112);
	// lwz r28,23132(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23132);
	// lwz r28,23132(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23132);
	// lwz r28,23132(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23132);
	// lwz r28,23132(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23132);
loc_839E5A18:
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5A20:
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stb r20,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r20.u8);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5A2C:
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// stb r23,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r23.u8);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5A38:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r27,r11,27
	ctx.r27.u64 = ctx.r11.u32 & 0x1F;
	// slw r25,r23,r10
	ctx.r25.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x839e5a8c
	goto loc_839E5A8C;
loc_839E5A48:
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r27,r11,27
	ctx.r27.u64 = ctx.r11.u32 & 0x1F;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// slw r25,r23,r11
	ctx.r25.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x839e5a8c
	goto loc_839E5A8C;
loc_839E5A5C:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r27,r11,27
	ctx.r27.u64 = ctx.r11.u32 & 0x1F;
	// slw r25,r22,r10
	ctx.r25.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x839e5a8c
	goto loc_839E5A8C;
loc_839E5A6C:
	// cmplwi cr6,r11,160
	cr6.compare<uint32_t>(ctx.r11.u32, 160, xer);
	// blt cr6,0x839e6060
	if (cr6.lt) goto loc_839E6060;
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(ctx.r11.u32, 191, xer);
	// bgt cr6,0x839e6060
	if (cr6.gt) goto loc_839E6060;
	// clrlwi r25,r11,27
	ctx.r25.u64 = ctx.r11.u32 & 0x1F;
loc_839E5A80:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x839e5df4
	if (cr6.eq) goto loc_839E5DF4;
	// li r27,32
	ctx.r27.s64 = 32;
loc_839E5A8C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_839E5A90:
	// subf r11,r26,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r26.s64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x839e62a4
	if (cr6.lt) goto loc_839E62A4;
	// add r10,r25,r26
	ctx.r10.u64 = ctx.r25.u64 + ctx.r26.u64;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// bgt cr6,0x839e62cc
	if (cr6.gt) goto loc_839E62CC;
	// lis r12,-31842
	ctx.r12.s64 = -2086797312;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23244
	ctx.r12.s64 = ctx.r12.s64 + 23244;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_839E5B40;
	case 1:
		goto loc_839E5B48;
	case 2:
		goto loc_839E5B5C;
	case 3:
		goto loc_839E62CC;
	case 4:
		goto loc_839E62CC;
	case 5:
		goto loc_839E62CC;
	case 6:
		goto loc_839E5B88;
	case 7:
		goto loc_839E5BC4;
	case 8:
		goto loc_839E5C30;
	case 9:
		goto loc_839E5C40;
	case 10:
		goto loc_839E5C5C;
	case 11:
		goto loc_839E5C90;
	case 12:
		goto loc_839E5CF4;
	case 13:
		goto loc_839E5D14;
	case 14:
		goto loc_839E5D40;
	case 15:
		goto loc_839E5D80;
	case 16:
		goto loc_839E62CC;
	case 17:
		goto loc_839E62CC;
	case 18:
		goto loc_839E62CC;
	case 19:
		goto loc_839E62CC;
	case 20:
		goto loc_839E62CC;
	case 21:
		goto loc_839E5B40;
	case 22:
		goto loc_839E5B48;
	case 23:
		goto loc_839E5B5C;
	case 24:
		goto loc_839E5E08;
	case 25:
		goto loc_839E5E7C;
	case 26:
		goto loc_839E5F34;
	case 27:
		goto loc_839E5FA8;
	case 28:
		goto loc_839E5DF4;
	default:
		return;
	}
	// lwz r28,23360(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23360);
	// lwz r28,23368(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23368);
	// lwz r28,23388(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23388);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,23432(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23432);
	// lwz r28,23492(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23492);
	// lwz r28,23600(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23600);
	// lwz r28,23616(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23616);
	// lwz r28,23644(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23644);
	// lwz r28,23696(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23696);
	// lwz r28,23796(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23796);
	// lwz r28,23828(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23828);
	// lwz r28,23872(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23872);
	// lwz r28,23936(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23936);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,25292(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25292);
	// lwz r28,23360(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23360);
	// lwz r28,23368(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23368);
	// lwz r28,23388(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23388);
	// lwz r28,24072(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24072);
	// lwz r28,24188(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24188);
	// lwz r28,24372(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24372);
	// lwz r28,24488(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24488);
	// lwz r28,24052(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24052);
loc_839E5B40:
	// lbz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// b 0x839e5a80
	goto loc_839E5A80;
loc_839E5B48:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x839e5a80
	goto loc_839E5A80;
loc_839E5B5C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r25,r3,r7
	ctx.r25.u64 = ctx.r3.u64 | ctx.r7.u64;
	// b 0x839e5a80
	goto loc_839E5A80;
loc_839E5B88:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5BC4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rldicr r9,r11,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rldicr r3,r6,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// or r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rldicr r6,r7,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rldicr r3,r5,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rldicr r6,r7,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5C30:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5C40:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5C5C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 | ctx.r7.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5C90:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rldicr r9,r11,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rldicr r3,r6,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// or r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rldicr r6,r7,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rldicr r3,r5,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rldicr r6,r7,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5CF4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// blt cr6,0x839e5dec
	if (cr6.lt) goto loc_839E5DEC;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5D14:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// blt cr6,0x839e5dec
	if (cr6.lt) goto loc_839E5DEC;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5D40:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 | ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// blt cr6,0x839e5dec
	if (cr6.lt) goto loc_839E5DEC;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5D80:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rldicr r9,r11,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r4,5(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rldicr r3,r6,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// or r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rldicr r6,r7,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rldicr r3,r5,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rldicr r8,r9,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rldicr r6,r7,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// blt cr6,0x839e5dec
	if (cr6.lt) goto loc_839E5DEC;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5DEC:
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5DF4:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// b 0x839e611c
	goto loc_839E611C;
loc_839E5E08:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x839e62cc
	if (!cr6.lt) goto loc_839E62CC;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// or r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 | ctx.r9.u64;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839e57a8
	ctx.lr = 0x839E5E3C;
	sub_839E57A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839e62cc
	if (cr6.lt) goto loc_839E62CC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839e6108
	if (cr6.eq) goto loc_839E6108;
	// stw r20,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r20.u32);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// b 0x839e6290
	goto loc_839E6290;
loc_839E5E7C:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x839e62cc
	if (!cr6.lt) goto loc_839E62CC;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r4,3(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// bl 0x839e57a8
	ctx.lr = 0x839E5EC8;
	sub_839E57A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839e62cc
	if (cr6.lt) goto loc_839E62CC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 | ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e6108
	if (cr6.eq) goto loc_839E6108;
	// stw r20,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r20.u32);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x839e6290
	goto loc_839E6290;
loc_839E5F34:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x839e62cc
	if (!cr6.lt) goto loc_839E62CC;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// or r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 | ctx.r9.u64;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839e5830
	ctx.lr = 0x839E5F68;
	sub_839E5830(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839e62cc
	if (cr6.lt) goto loc_839E62CC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x839e6108
	if (cr6.eq) goto loc_839E6108;
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// b 0x839e6290
	goto loc_839E6290;
loc_839E5FA8:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x839e62cc
	if (!cr6.lt) goto loc_839E62CC;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r4,3(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// bl 0x839e5830
	ctx.lr = 0x839E5FF4;
	sub_839E5830(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839e62cc
	if (cr6.lt) goto loc_839E62CC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 | ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e6108
	if (cr6.eq) goto loc_839E6108;
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x839e6290
	goto loc_839E6290;
loc_839E6060:
	// cmplwi cr6,r11,144
	cr6.compare<uint32_t>(ctx.r11.u32, 144, xer);
	// blt cr6,0x839e60b8
	if (cr6.lt) goto loc_839E60B8;
	// cmplwi cr6,r11,159
	cr6.compare<uint32_t>(ctx.r11.u32, 159, xer);
	// bgt cr6,0x839e60b8
	if (cr6.gt) goto loc_839E60B8;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x839e62cc
	if (!cr6.lt) goto loc_839E62CC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839e57a8
	ctx.lr = 0x839E6098;
	sub_839E57A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839e62cc
	if (cr6.lt) goto loc_839E62CC;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839e6108
	if (cr6.eq) goto loc_839E6108;
	// stw r20,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r20.u32);
	// b 0x839e6284
	goto loc_839E6284;
loc_839E60B8:
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x839e62cc
	if (cr6.lt) goto loc_839E62CC;
	// cmplwi cr6,r11,143
	cr6.compare<uint32_t>(ctx.r11.u32, 143, xer);
	// bgt cr6,0x839e62cc
	if (cr6.gt) goto loc_839E62CC;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x839e62cc
	if (!cr6.lt) goto loc_839E62CC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x839e5830
	ctx.lr = 0x839E60F0;
	sub_839E5830(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839e62cc
	if (cr6.lt) goto loc_839E62CC;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e6280
	if (!cr6.eq) goto loc_839E6280;
loc_839E6108:
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
loc_839E611C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r11,r10,-40
	ctx.r11.s64 = ctx.r10.s64 + -40;
	// addi r9,r10,-16
	ctx.r9.s64 = ctx.r10.s64 + -16;
loc_839E6134:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839e62ac
	if (cr6.eq) goto loc_839E62AC;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x839e61f4
	if (cr6.lt) goto loc_839E61F4;
	// beq cr6,0x839e6260
	if (cr6.eq) goto loc_839E6260;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x839e62cc
	if (!cr6.lt) goto loc_839E62CC;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r5,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// std r30,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r30.u64);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// stdx r6,r10,r8
	PPC_STORE_U64(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// std r7,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addic. r10,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// bne 0x839e6258
	if (!cr0.eq) goto loc_839E6258;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addi r9,r9,-40
	ctx.r9.s64 = ctx.r9.s64 + -40;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// b 0x839e6134
	goto loc_839E6134;
loc_839E61F4:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// stdx r4,r10,r8
	PPC_STORE_U64(ctx.r10.u32 + ctx.r8.u32, ctx.r4.u64);
	// std r3,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r3.u64);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bne 0x839e6294
	if (!cr0.eq) goto loc_839E6294;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// addi r9,r9,-40
	ctx.r9.s64 = ctx.r9.s64 + -40;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// b 0x839e6134
	goto loc_839E6134;
loc_839E6258:
	// stw r23,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
	// b 0x839e6294
	goto loc_839E6294;
loc_839E6260:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// std r7,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// b 0x839e6294
	goto loc_839E6294;
loc_839E6280:
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
loc_839E6284:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_839E6290:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_839E6294:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmplw cr6,r26,r21
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, xer);
	// bne cr6,0x839e5910
	if (!cr6.eq) goto loc_839E5910;
loc_839E62A4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// b 0x839e62d0
	goto loc_839E62D0;
loc_839E62AC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r10.u64);
	// std r9,8(r24)
	PPC_STORE_U64(ctx.r24.u32 + 8, ctx.r9.u64);
	// b 0x839e62d0
	goto loc_839E62D0;
loc_839E62CC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_839E62D0:
	// subf r11,r19,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r19.s64;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// stw r25,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r25.u32);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E62EC"))) PPC_WEAK_FUNC(sub_839E62EC);
PPC_FUNC_IMPL(__imp__sub_839E62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E62F0"))) PPC_WEAK_FUNC(sub_839E62F0);
PPC_FUNC_IMPL(__imp__sub_839E62F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E62F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq cr6,0x839e6328
	if (cr6.eq) goto loc_839E6328;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_839E6328:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x839e633c
	if (cr6.gt) goto loc_839E633C;
loc_839E6330:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E633C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// bl 0x839e58b8
	ctx.lr = 0x839E6388;
	sub_839E58B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x839e639c
	if (!cr6.lt) goto loc_839E639C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E639C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839e63ac
	if (cr6.eq) goto loc_839E63AC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_839E63AC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839e6330
	if (cr6.eq) goto loc_839E6330;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// subfc r9,r30,r11
	xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r8.u64);
	// std r7,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r7.u64);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E63DC"))) PPC_WEAK_FUNC(sub_839E63DC);
PPC_FUNC_IMPL(__imp__sub_839E63DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E63E0"))) PPC_WEAK_FUNC(sub_839E63E0);
PPC_FUNC_IMPL(__imp__sub_839E63E0) {
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
	// bl 0x82d747b0
	ctx.lr = 0x839E63F8;
	sub_82D747B0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_839E641C"))) PPC_WEAK_FUNC(sub_839E641C);
PPC_FUNC_IMPL(__imp__sub_839E641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6420"))) PPC_WEAK_FUNC(sub_839E6420);
PPC_FUNC_IMPL(__imp__sub_839E6420) {
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
	// bl 0x82d74810
	ctx.lr = 0x839E643C;
	sub_82D74810(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// bl 0x82d747b0
	ctx.lr = 0x839E644C;
	sub_82D747B0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_839E6474"))) PPC_WEAK_FUNC(sub_839E6474);
PPC_FUNC_IMPL(__imp__sub_839E6474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6478"))) PPC_WEAK_FUNC(sub_839E6478);
PPC_FUNC_IMPL(__imp__sub_839E6478) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,27388
	ctx.r10.s64 = ctx.r11.s64 + 27388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x839E64A4;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e64bc
	if (cr6.eq) goto loc_839E64BC;
	// bl 0x82416268
	ctx.lr = 0x839E64B8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E64BC:
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

__attribute__((alias("__imp__sub_839E64D4"))) PPC_WEAK_FUNC(sub_839E64D4);
PPC_FUNC_IMPL(__imp__sub_839E64D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E64D8"))) PPC_WEAK_FUNC(sub_839E64D8);
PPC_FUNC_IMPL(__imp__sub_839E64D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839E64E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E6508;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6558
	if (cr6.eq) goto loc_839E6558;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83103328
	ctx.lr = 0x839E651C;
	sub_83103328(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,27388
	ctx.r9.s64 = ctx.r10.s64 + 27388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_839E6558:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E6564"))) PPC_WEAK_FUNC(sub_839E6564);
PPC_FUNC_IMPL(__imp__sub_839E6564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6568"))) PPC_WEAK_FUNC(sub_839E6568);
PPC_FUNC_IMPL(__imp__sub_839E6568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,9
	ctx.r8.u64 = ctx.r10.u64 | 9;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E659C"))) PPC_WEAK_FUNC(sub_839E659C);
PPC_FUNC_IMPL(__imp__sub_839E659C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E65A0"))) PPC_WEAK_FUNC(sub_839E65A0);
PPC_FUNC_IMPL(__imp__sub_839E65A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// sth r10,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r10.u16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stb r10,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r10.u8);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// blt cr6,0x839e65d4
	if (cr6.lt) goto loc_839E65D4;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_839E65D4:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blt cr6,0x839e65f4
	if (cr6.lt) goto loc_839E65F4;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_839E65F4:
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E65FC"))) PPC_WEAK_FUNC(sub_839E65FC);
PPC_FUNC_IMPL(__imp__sub_839E65FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6600"))) PPC_WEAK_FUNC(sub_839E6600);
PPC_FUNC_IMPL(__imp__sub_839E6600) {
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
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x839e6634
	if (!cr6.eq) goto loc_839E6634;
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
loc_839E6634:
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x82e2d570
	ctx.lr = 0x839E663C;
	sub_82E2D570(ctx, base);
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

__attribute__((alias("__imp__sub_839E6650"))) PPC_WEAK_FUNC(sub_839E6650);
PPC_FUNC_IMPL(__imp__sub_839E6650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E6658;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x839e6874
	if (cr6.gt) goto loc_839E6874;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839e66c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E66C4;
	// bdzf 4*cr6+eq,0x839e671c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E671C;
	// bdzf 4*cr6+eq,0x839e6760
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E6760;
	// bdzf 4*cr6+eq,0x839e6794
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E6794;
	// bdzf 4*cr6+eq,0x839e6820
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E6820;
	// bdzf 4*cr6+eq,0x839e685c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E685C;
	// bne cr6,0x839e687c
	if (!cr6.eq) goto loc_839E687C;
	// bl 0x82d8a698
	ctx.lr = 0x839E6694;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e66b4
	if (cr6.eq) goto loc_839E66B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d8bb28
	ctx.lr = 0x839E66A8;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e684c
	if (!cr6.eq) goto loc_839E684C;
loc_839E66B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E66C4:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,27280
	ctx.r11.s64 = ctx.r11.s64 + 27280;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x839E66D8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x839E66E4;
	sub_82D894E0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839E66F0;
	sub_8387E8E0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e684c
	if (cr6.eq) goto loc_839E684C;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// stw r8,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r8.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E671C:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82ddcec8
	ctx.lr = 0x839E6724;
	sub_82DDCEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839e687c
	if (cr6.eq) goto loc_839E687C;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6750
	if (cr6.eq) goto loc_839E6750;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E6748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
loc_839E6750:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E6760:
	// bl 0x82d86078
	ctx.lr = 0x839E6764;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e684c
	if (cr6.eq) goto loc_839E684C;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x82df1878
	ctx.lr = 0x839E6774;
	sub_82DF1878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E6794:
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x839E679C;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df1910
	ctx.lr = 0x839E67A8;
	sub_82DF1910(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839e67cc
	if (cr6.eq) goto loc_839E67CC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x839e6600
	ctx.lr = 0x839E67BC;
	sub_839E6600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x839e67d4
	goto loc_839E67D4;
loc_839E67CC:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_839E67D4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e6808
	if (cr6.eq) goto loc_839E6808;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r3,r11,27280
	ctx.r3.s64 = ctx.r11.s64 + 27280;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x839e6ab0
	ctx.lr = 0x839E67F4;
	sub_839E6AB0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x839E6808;
	sub_83103100(ctx, base);
loc_839E6808:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82c2bd78
	ctx.lr = 0x839E6818;
	sub_82C2BD78(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E6820:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839e687c
	if (!cr6.eq) goto loc_839E687C;
	// bl 0x82d86078
	ctx.lr = 0x839E6830;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e684c
	if (cr6.eq) goto loc_839E684C;
	// lwz r30,136(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df1b10
	ctx.lr = 0x839E6844;
	sub_82DF1B10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839e65a0
	ctx.lr = 0x839E684C;
	sub_839E65A0(ctx, base);
loc_839E684C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E685C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E6874:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_839E687C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E6884"))) PPC_WEAK_FUNC(sub_839E6884);
PPC_FUNC_IMPL(__imp__sub_839E6884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6888"))) PPC_WEAK_FUNC(sub_839E6888);
PPC_FUNC_IMPL(__imp__sub_839E6888) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x839E68A0;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839e68c4
	if (cr6.lt) goto loc_839E68C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x839E68B0;
	sub_82D19BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x839e68c4
	if (cr6.lt) goto loc_839E68C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x839E68C4;
	sub_82D19858(ctx, base);
loc_839E68C4:
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

__attribute__((alias("__imp__sub_839E68D8"))) PPC_WEAK_FUNC(sub_839E68D8);
PPC_FUNC_IMPL(__imp__sub_839E68D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839E68E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,28032
	ctx.r9.s64 = ctx.r11.s64 + 28032;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r30,r3,124
	ctx.r30.s64 = ctx.r3.s64 + 124;
	// lwz r7,144(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x839e6924
	if (cr6.lt) goto loc_839E6924;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x839E6924;
	sub_825952B8(ctx, base);
loc_839E6924:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,96
	ctx.r31.s64 = ctx.r29.s64 + 96;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e6958
	if (cr6.lt) goto loc_839E6958;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x839E6958;
	sub_825952B8(ctx, base);
loc_839E6958:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82d25548
	ctx.lr = 0x839E696C;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E6974"))) PPC_WEAK_FUNC(sub_839E6974);
PPC_FUNC_IMPL(__imp__sub_839E6974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6978"))) PPC_WEAK_FUNC(sub_839E6978);
PPC_FUNC_IMPL(__imp__sub_839E6978) {
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
	// bl 0x839e68d8
	ctx.lr = 0x839E6998;
	sub_839E68D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e69b0
	if (cr6.eq) goto loc_839E69B0;
	// bl 0x82416268
	ctx.lr = 0x839E69AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E69B0:
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

__attribute__((alias("__imp__sub_839E69C8"))) PPC_WEAK_FUNC(sub_839E69C8);
PPC_FUNC_IMPL(__imp__sub_839E69C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839E69D0;
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8308e078
	ctx.lr = 0x839E69EC;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x839E6A04;
	sub_82D253F8(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,28032
	ctx.r9.s64 = ctx.r11.s64 + 28032;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x839E6A48;
	sub_8259CB28(ctx, base);
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8259cb28
	ctx.lr = 0x839E6A68;
	sub_8259CB28(ctx, base);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-28212(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -28212);
	// bl 0x82d20ae0
	ctx.lr = 0x839E6A78;
	sub_82D20AE0(ctx, base);
	// lis r6,-31767
	ctx.r6.s64 = -2081882112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-28208(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -28208);
	// bl 0x82d23390
	ctx.lr = 0x839E6A8C;
	sub_82D23390(ctx, base);
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-28204(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -28204);
	// bl 0x82d20ae0
	ctx.lr = 0x839E6A9C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x839E6AA4;
	sub_82D191F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E6AB0"))) PPC_WEAK_FUNC(sub_839E6AB0);
PPC_FUNC_IMPL(__imp__sub_839E6AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E6AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E6AE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6b04
	if (cr6.eq) goto loc_839E6B04;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839e69c8
	ctx.lr = 0x839E6AFC;
	sub_839E69C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E6B04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E6B10"))) PPC_WEAK_FUNC(sub_839E6B10);
PPC_FUNC_IMPL(__imp__sub_839E6B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839E6B18;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r30,r11,27932
	ctx.r30.s64 = ctx.r11.s64 + 27932;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// bl 0x8259cc28
	ctx.lr = 0x839E6B54;
	sub_8259CC28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d766f8
	ctx.lr = 0x839E6B64;
	sub_82D766F8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e6b84
	if (cr6.lt) goto loc_839E6B84;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839E6B84;
	sub_825952B8(ctx, base);
loc_839E6B84:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82d19a68
	ctx.lr = 0x839E6B98;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6c00
	if (cr6.eq) goto loc_839E6C00;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E6BB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6c00
	if (cr6.eq) goto loc_839E6C00;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839e6bd8
	if (cr6.lt) goto loc_839E6BD8;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x839e6bdc
	goto loc_839E6BDC;
loc_839E6BD8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_839E6BDC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x839E6BE4;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x839E6BF8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x839E6C00;
	sub_8387E8E0(ctx, base);
loc_839E6C00:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d21188
	ctx.lr = 0x839E6C10;
	sub_82D21188(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E6C18"))) PPC_WEAK_FUNC(sub_839E6C18);
PPC_FUNC_IMPL(__imp__sub_839E6C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839E6C20;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839E6C2C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6c50
	if (cr6.eq) goto loc_839E6C50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-28192(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28192);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839E6C50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839E6C50:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r4,-28200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28200);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_839E6C70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839e6c70
	if (!cr6.eq) goto loc_839E6C70;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x839E6C94;
	sub_8259CC28(ctx, base);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,-28196(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28196);
	// bl 0x82d76340
	ctx.lr = 0x839E6CA8;
	sub_82D76340(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x839e6cc8
	if (cr6.lt) goto loc_839E6CC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839E6CC8;
	sub_825952B8(ctx, base);
loc_839E6CC8:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r5,r29,124
	ctx.r5.s64 = ctx.r29.s64 + 124;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839e6b10
	ctx.lr = 0x839E6CE4;
	sub_839E6B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x839E6CF0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-28184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28184);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839E6D0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6de0
	if (cr6.eq) goto loc_839E6DE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-28188(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28188);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839E6D34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,-28180(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28180);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x839E6D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6dac
	if (cr6.eq) goto loc_839E6DAC;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-28172(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28172);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839E6D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6d98
	if (cr6.eq) goto loc_839E6D98;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// bl 0x82d29598
	ctx.lr = 0x839E6D90;
	sub_82D29598(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x839e6dac
	goto loc_839E6DAC;
loc_839E6D98:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b6e0
	ctx.lr = 0x839E6DAC;
	sub_82D2B6E0(ctx, base);
loc_839E6DAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-28176(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28176);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x839E6DC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6de0
	if (cr6.eq) goto loc_839E6DE0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b6e0
	ctx.lr = 0x839E6DE0;
	sub_82D2B6E0(ctx, base);
loc_839E6DE0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e6dfc
	if (cr6.eq) goto loc_839E6DFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x839E6DFC;
	sub_82D19788(ctx, base);
loc_839E6DFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E6E04"))) PPC_WEAK_FUNC(sub_839E6E04);
PPC_FUNC_IMPL(__imp__sub_839E6E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6E08"))) PPC_WEAK_FUNC(sub_839E6E08);
PPC_FUNC_IMPL(__imp__sub_839E6E08) {
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
	// bl 0x839e6c18
	ctx.lr = 0x839E6E20;
	sub_839E6C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x839E6E28;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6e38
	if (cr6.eq) goto loc_839E6E38;
	// bl 0x82d2b0f8
	ctx.lr = 0x839E6E34;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x839E6E38;
	sub_82D390C0(ctx, base);
loc_839E6E38:
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

__attribute__((alias("__imp__sub_839E6E50"))) PPC_WEAK_FUNC(sub_839E6E50);
PPC_FUNC_IMPL(__imp__sub_839E6E50) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x839E6E6C;
	sub_82D17B90(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
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

__attribute__((alias("__imp__sub_839E6E90"))) PPC_WEAK_FUNC(sub_839E6E90);
PPC_FUNC_IMPL(__imp__sub_839E6E90) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,28588
	ctx.r4.s64 = ctx.r11.s64 + 28588;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x839E6EB8;
	sub_83103328(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r9,r10,28752
	ctx.r9.s64 = ctx.r10.s64 + 28752;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_839E6EF4"))) PPC_WEAK_FUNC(sub_839E6EF4);
PPC_FUNC_IMPL(__imp__sub_839E6EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6EF8"))) PPC_WEAK_FUNC(sub_839E6EF8);
PPC_FUNC_IMPL(__imp__sub_839E6EF8) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,28752
	ctx.r10.s64 = ctx.r11.s64 + 28752;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x839E6F24;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e6f3c
	if (cr6.eq) goto loc_839E6F3C;
	// bl 0x82416268
	ctx.lr = 0x839E6F38;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E6F3C:
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

__attribute__((alias("__imp__sub_839E6F54"))) PPC_WEAK_FUNC(sub_839E6F54);
PPC_FUNC_IMPL(__imp__sub_839E6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E6F58"))) PPC_WEAK_FUNC(sub_839E6F58);
PPC_FUNC_IMPL(__imp__sub_839E6F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r8,r10,5
	ctx.r8.u64 = ctx.r10.u64 | 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E6F80"))) PPC_WEAK_FUNC(sub_839E6F80);
PPC_FUNC_IMPL(__imp__sub_839E6F80) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E6FAC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e6fd0
	if (cr6.eq) goto loc_839E6FD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839e6e90
	ctx.lr = 0x839E6FBC;
	sub_839E6E90(ctx, base);
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
loc_839E6FD0:
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

__attribute__((alias("__imp__sub_839E6FE8"))) PPC_WEAK_FUNC(sub_839E6FE8);
PPC_FUNC_IMPL(__imp__sub_839E6FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x839E6FF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8310a820
	ctx.lr = 0x839E6FFC;
	sub_8310A820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e7010
	if (!cr6.eq) goto loc_839E7010;
loc_839E7004:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_839E7010:
	// bl 0x8310a820
	ctx.lr = 0x839E7014;
	sub_8310A820(ctx, base);
	// bl 0x8310b0c0
	ctx.lr = 0x839E7018;
	sub_8310B0C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e7004
	if (cr6.eq) goto loc_839E7004;
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r11,r11,28644
	ctx.r11.s64 = ctx.r11.s64 + 28644;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, xer);
	// beq cr6,0x839e70d4
	if (cr6.eq) goto loc_839E70D4;
loc_839E7054:
	// addi r26,r27,8
	ctx.r26.s64 = ctx.r27.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831d2800
	ctx.lr = 0x839E7060;
	sub_831D2800(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e70c8
	if (cr6.eq) goto loc_839E70C8;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// li r28,2
	ctx.r28.s64 = 2;
loc_839E7070:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// sraw r10,r11,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x839e70bc
	if (cr6.eq) goto loc_839E70BC;
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831d2800
	ctx.lr = 0x839E7094;
	sub_831D2800(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831d8340
	ctx.lr = 0x839E70A4;
	sub_831D8340(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839e70bc
	if (!cr6.eq) goto loc_839E70BC;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// slw r10,r25,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r30.u8 & 0x3F));
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r9.u32);
loc_839E70BC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x839e7070
	if (!cr0.eq) goto loc_839E7070;
loc_839E70C8:
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, xer);
	// bne cr6,0x839e7054
	if (!cr6.eq) goto loc_839E7054;
loc_839E70D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E70E0"))) PPC_WEAK_FUNC(sub_839E70E0);
PPC_FUNC_IMPL(__imp__sub_839E70E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x839e7294
	if (cr6.gt) goto loc_839E7294;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839e7150
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E7150;
	// bdzf 4*cr6+eq,0x839e719c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E719C;
	// bdzf 4*cr6+eq,0x839e71c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E71C4;
	// bdzf 4*cr6+eq,0x839e7294
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839E7294;
	// bne cr6,0x839e7264
	if (!cr6.eq) goto loc_839E7264;
	// bl 0x8310a820
	ctx.lr = 0x839E7124;
	sub_8310A820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e7148
	if (cr6.eq) goto loc_839E7148;
	// bl 0x8308e078
	ctx.lr = 0x839E7130;
	sub_8308E078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8310a820
	ctx.lr = 0x839E7138;
	sub_8310A820(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8310a898
	ctx.lr = 0x839E7140;
	sub_8310A898(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x839E7148;
	sub_82D17B90(ctx, base);
loc_839E7148:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_839E7150:
	// bl 0x8310a820
	ctx.lr = 0x839E7154;
	sub_8310A820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e7170
	if (cr6.eq) goto loc_839E7170;
	// bl 0x8310a820
	ctx.lr = 0x839E7160;
	sub_8310A820(ctx, base);
	// bl 0x8310a8c0
	ctx.lr = 0x839E7164;
	sub_8310A8C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e7294
	if (cr6.eq) goto loc_839E7294;
loc_839E7170:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x839E7178;
	sub_82D17B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e6fe8
	ctx.lr = 0x839E7180;
	sub_839E6FE8(ctx, base);
	// bl 0x831099d8
	ctx.lr = 0x839E7184;
	sub_831099D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e7194
	if (cr6.eq) goto loc_839E7194;
	// bl 0x831099d8
	ctx.lr = 0x839E7190;
	sub_831099D8(ctx, base);
	// bl 0x8310a5a0
	ctx.lr = 0x839E7194;
	sub_8310A5A0(ctx, base);
loc_839E7194:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_839E719C:
	// bl 0x831099d8
	ctx.lr = 0x839E71A0;
	sub_831099D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e71bc
	if (cr6.eq) goto loc_839E71BC;
	// bl 0x831099d8
	ctx.lr = 0x839E71AC;
	sub_831099D8(ctx, base);
	// bl 0x831099e8
	ctx.lr = 0x839E71B0;
	sub_831099E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e7294
	if (cr6.eq) goto loc_839E7294;
loc_839E71BC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_839E71C4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839e71dc
	if (cr6.lt) goto loc_839E71DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x839e7294
	goto loc_839E7294;
loc_839E71DC:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x839e7254
	if (cr6.eq) goto loc_839E7254;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,28612
	ctx.r3.s64 = ctx.r11.s64 + 28612;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x839E7208;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e724c
	if (cr6.eq) goto loc_839E724C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,206
	ctx.r10.s64 = 13500416;
	// lis r9,206
	ctx.r9.s64 = 13500416;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r10,226
	ctx.r6.u64 = ctx.r10.u64 | 226;
	// ori r5,r9,260
	ctx.r5.u64 = ctx.r9.u64 | 260;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x82d2ada8
	ctx.lr = 0x839E7240;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x839E724C;
	sub_83103100(ctx, base);
loc_839E724C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_839E7254:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x839e7294
	goto loc_839E7294;
loc_839E7264:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,23
	ctx.r8.u64 = ctx.r10.u64 | 23;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x839E7294;
	sub_83103068(ctx, base);
loc_839E7294:
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

__attribute__((alias("__imp__sub_839E72AC"))) PPC_WEAK_FUNC(sub_839E72AC);
PPC_FUNC_IMPL(__imp__sub_839E72AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E72B0"))) PPC_WEAK_FUNC(sub_839E72B0);
PPC_FUNC_IMPL(__imp__sub_839E72B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lwz r3,7080(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7080);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E72BC"))) PPC_WEAK_FUNC(sub_839E72BC);
PPC_FUNC_IMPL(__imp__sub_839E72BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E72C0"))) PPC_WEAK_FUNC(sub_839E72C0);
PPC_FUNC_IMPL(__imp__sub_839E72C0) {
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
	// lis r31,-31742
	ctx.r31.s64 = -2080243712;
	// lwz r3,7080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e72f8
	if (cr6.eq) goto loc_839E72F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E72F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7080, ctx.r11.u32);
loc_839E72F8:
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

__attribute__((alias("__imp__sub_839E730C"))) PPC_WEAK_FUNC(sub_839E730C);
PPC_FUNC_IMPL(__imp__sub_839E730C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E7310"))) PPC_WEAK_FUNC(sub_839E7310);
PPC_FUNC_IMPL(__imp__sub_839E7310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E7318;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31742
	ctx.r30.s64 = -2080243712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,7080(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e738c
	if (!cr6.eq) goto loc_839E738C;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839E7348;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e7384
	if (cr6.eq) goto loc_839E7384;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83103328
	ctx.lr = 0x839E735C;
	sub_83103328(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28936
	ctx.r9.s64 = ctx.r10.s64 + 28936;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r31,7080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7080, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E7384:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,7080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7080, ctx.r3.u32);
loc_839E738C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E7394"))) PPC_WEAK_FUNC(sub_839E7394);
PPC_FUNC_IMPL(__imp__sub_839E7394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E7398"))) PPC_WEAK_FUNC(sub_839E7398);
PPC_FUNC_IMPL(__imp__sub_839E7398) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// addi r9,r11,28936
	ctx.r9.s64 = ctx.r11.s64 + 28936;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,7080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7080, ctx.r11.u32);
	// bl 0x831032a0
	ctx.lr = 0x839E73D0;
	sub_831032A0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839e73e8
	if (cr6.eq) goto loc_839E73E8;
	// bl 0x82416268
	ctx.lr = 0x839E73E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E73E8:
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

__attribute__((alias("__imp__sub_839E7400"))) PPC_WEAK_FUNC(sub_839E7400);
PPC_FUNC_IMPL(__imp__sub_839E7400) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e64050
	ctx.lr = 0x839E7418;
	sub_82E64050(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839e7434
	if (!cr6.eq) goto loc_839E7434;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_839E7434:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,28824
	ctx.r4.s64 = ctx.r11.s64 + 28824;
	// bl 0x837b0c10
	ctx.lr = 0x839E7444;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x839E7450;
	sub_82D894E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x839e7474
	if (cr6.lt) goto loc_839E7474;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839E7474;
	sub_825952B8(ctx, base);
loc_839E7474:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E7494"))) PPC_WEAK_FUNC(sub_839E7494);
PPC_FUNC_IMPL(__imp__sub_839E7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E7498"))) PPC_WEAK_FUNC(sub_839E7498);
PPC_FUNC_IMPL(__imp__sub_839E7498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,29128
	ctx.r9.s64 = ctx.r11.s64 + 29128;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E74B0"))) PPC_WEAK_FUNC(sub_839E74B0);
PPC_FUNC_IMPL(__imp__sub_839E74B0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,29128
	ctx.r10.s64 = ctx.r11.s64 + 29128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x839e7510
	if (cr6.eq) goto loc_839E7510;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E74EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31742
	ctx.r9.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,7088(r9)
	PPC_STORE_U32(ctx.r9.u32 + 7088, ctx.r11.u32);
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
loc_839E7510:
	// lis r10,-31742
	ctx.r10.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7088, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_839E7530"))) PPC_WEAK_FUNC(sub_839E7530);
PPC_FUNC_IMPL(__imp__sub_839E7530) {
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
	// bl 0x839e74b0
	ctx.lr = 0x839E7550;
	sub_839E74B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e7568
	if (cr6.eq) goto loc_839E7568;
	// bl 0x82416268
	ctx.lr = 0x839E7564;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E7568:
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

__attribute__((alias("__imp__sub_839E7580"))) PPC_WEAK_FUNC(sub_839E7580);
PPC_FUNC_IMPL(__imp__sub_839E7580) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e75ac
	if (cr6.eq) goto loc_839E75AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x839e75f8
	goto loc_839E75F8;
loc_839E75AC:
	// bl 0x831021a0
	ctx.lr = 0x839E75B0;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x839E75B8;
	sub_82DA45F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e75ec
	if (cr6.eq) goto loc_839E75EC;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29008
	ctx.r4.s64 = ctx.r11.s64 + 29008;
	// bl 0x837b0c10
	ctx.lr = 0x839E75D4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x839E75E0;
	sub_82D894E0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x839E75EC;
	sub_8387E8E0(ctx, base);
loc_839E75EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_839E75F8:
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

__attribute__((alias("__imp__sub_839E7610"))) PPC_WEAK_FUNC(sub_839E7610);
PPC_FUNC_IMPL(__imp__sub_839E7610) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e764c
	if (cr6.eq) goto loc_839E764C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E7648;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_839E764C:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e766c
	if (cr6.eq) goto loc_839E766C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E7668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_839E766C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_839E7688"))) PPC_WEAK_FUNC(sub_839E7688);
PPC_FUNC_IMPL(__imp__sub_839E7688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r9,263
	ctx.r9.s64 = 17235968;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,21716
	ctx.r7.s64 = ctx.r10.s64 + 21716;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// ori r6,r9,4104
	ctx.r6.u64 = ctx.r9.u64 | 4104;
	// stb r8,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r8.u8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x83103068
	ctx.lr = 0x839E76D4;
	sub_83103068(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x839E76E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_839E76FC"))) PPC_WEAK_FUNC(sub_839E76FC);
PPC_FUNC_IMPL(__imp__sub_839E76FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E7700"))) PPC_WEAK_FUNC(sub_839E7700);
PPC_FUNC_IMPL(__imp__sub_839E7700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r9,263
	ctx.r9.s64 = 17235968;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,21716
	ctx.r7.s64 = ctx.r10.s64 + 21716;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// ori r6,r9,4105
	ctx.r6.u64 = ctx.r9.u64 | 4105;
	// stb r8,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r8.u8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x83103068
	ctx.lr = 0x839E774C;
	sub_83103068(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x839E7760;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_839E7774"))) PPC_WEAK_FUNC(sub_839E7774);
PPC_FUNC_IMPL(__imp__sub_839E7774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E7778"))) PPC_WEAK_FUNC(sub_839E7778);
PPC_FUNC_IMPL(__imp__sub_839E7778) {
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
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,29328
	ctx.r10.s64 = ctx.r11.s64 + 29328;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x839E77A4;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839e77bc
	if (cr6.eq) goto loc_839E77BC;
	// bl 0x82416268
	ctx.lr = 0x839E77B8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839E77BC:
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

__attribute__((alias("__imp__sub_839E77D4"))) PPC_WEAK_FUNC(sub_839E77D4);
PPC_FUNC_IMPL(__imp__sub_839E77D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839E77D8"))) PPC_WEAK_FUNC(sub_839E77D8);
PPC_FUNC_IMPL(__imp__sub_839E77D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839e77ec
	if (cr6.eq) goto loc_839E77EC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_839E77EC:
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x839e7700
	sub_839E7700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E77FC"))) PPC_WEAK_FUNC(sub_839E77FC);
PPC_FUNC_IMPL(__imp__sub_839E77FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839E7800"))) PPC_WEAK_FUNC(sub_839E7800);
PPC_FUNC_IMPL(__imp__sub_839E7800) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x82ddcec8
	ctx.lr = 0x839E7820;
	sub_82DDCEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839e7868
	if (cr6.eq) goto loc_839E7868;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839e7850
	if (cr6.eq) goto loc_839E7850;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839E7848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
loc_839E7850:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x839e7864
	if (!cr6.eq) goto loc_839E7864;
	// bl 0x839e7688
	ctx.lr = 0x839E7860;
	sub_839E7688(ctx, base);
	// b 0x839e7868
	goto loc_839E7868;
loc_839E7864:
	// bl 0x839e7700
	ctx.lr = 0x839E7868;
	sub_839E7700(ctx, base);
loc_839E7868:
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

__attribute__((alias("__imp__sub_839E7880"))) PPC_WEAK_FUNC(sub_839E7880);
PPC_FUNC_IMPL(__imp__sub_839E7880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839E7888;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r11,29200
	ctx.r4.s64 = ctx.r11.s64 + 29200;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x839E78B8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x839E78C4;
	sub_82D894E0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x839e78e8
	if (cr6.lt) goto loc_839E78E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x839E78E8;
	sub_825952B8(ctx, base);
loc_839E78E8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// beq cr6,0x839e7914
	if (cr6.eq) goto loc_839E7914;
	// lis r11,-31842
	ctx.r11.s64 = -2086797312;
	// addi r10,r11,30720
	ctx.r10.s64 = ctx.r11.s64 + 30720;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839E7914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e7700
	ctx.lr = 0x839E791C;
	sub_839E7700(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839E7924"))) PPC_WEAK_FUNC(sub_839E7924);
PPC_FUNC_IMPL(__imp__sub_839E7924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

