#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83AAEE4C"))) PPC_WEAK_FUNC(sub_83AAEE4C);
PPC_FUNC_IMPL(__imp__sub_83AAEE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAEE50"))) PPC_WEAK_FUNC(sub_83AAEE50);
PPC_FUNC_IMPL(__imp__sub_83AAEE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaee64
	if (!cr6.eq) goto loc_83AAEE64;
loc_83AAEE5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAEE64:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaee5c
	if (cr6.eq) goto loc_83AAEE5C;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r11,43(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 43);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAEE9C"))) PPC_WEAK_FUNC(sub_83AAEE9C);
PPC_FUNC_IMPL(__imp__sub_83AAEE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAEEA0"))) PPC_WEAK_FUNC(sub_83AAEEA0);
PPC_FUNC_IMPL(__imp__sub_83AAEEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaeeb4
	if (!cr6.eq) goto loc_83AAEEB4;
loc_83AAEEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAEEB4:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaeeac
	if (cr6.eq) goto loc_83AAEEAC;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lbz r11,41(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAEEE4"))) PPC_WEAK_FUNC(sub_83AAEEE4);
PPC_FUNC_IMPL(__imp__sub_83AAEEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAEEE8"))) PPC_WEAK_FUNC(sub_83AAEEE8);
PPC_FUNC_IMPL(__imp__sub_83AAEEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaeefc
	if (!cr6.eq) goto loc_83AAEEFC;
loc_83AAEEF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAEEFC:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaeef4
	if (cr6.eq) goto loc_83AAEEF4;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lbz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAEF2C"))) PPC_WEAK_FUNC(sub_83AAEF2C);
PPC_FUNC_IMPL(__imp__sub_83AAEF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAEF30"))) PPC_WEAK_FUNC(sub_83AAEF30);
PPC_FUNC_IMPL(__imp__sub_83AAEF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aaeff0
	if (cr6.eq) goto loc_83AAEFF0;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaef8c
	if (cr6.eq) goto loc_83AAEF8C;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
loc_83AAEF8C:
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaefb8
	if (cr6.eq) goto loc_83AAEFB8;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r10,46(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 46);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AAEFB8:
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaefe4
	if (cr6.eq) goto loc_83AAEFE4;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AAEFE4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83AAEFF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAEFF8"))) PPC_WEAK_FUNC(sub_83AAEFF8);
PPC_FUNC_IMPL(__imp__sub_83AAEFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aaf0b8
	if (cr6.eq) goto loc_83AAF0B8;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaf054
	if (cr6.eq) goto loc_83AAF054;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
loc_83AAF054:
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaf080
	if (cr6.eq) goto loc_83AAF080;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r10,50(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AAF080:
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaf0ac
	if (cr6.eq) goto loc_83AAF0AC;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r10,49(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AAF0AC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83AAF0B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF0C0"))) PPC_WEAK_FUNC(sub_83AAF0C0);
PPC_FUNC_IMPL(__imp__sub_83AAF0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83aaf180
	if (cr6.eq) goto loc_83AAF180;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaf11c
	if (cr6.eq) goto loc_83AAF11C;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
loc_83AAF11C:
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaf148
	if (cr6.eq) goto loc_83AAF148;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r10,54(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 54);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AAF148:
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83aaf174
	if (cr6.eq) goto loc_83AAF174;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_83AAF174:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83AAF180:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF188"))) PPC_WEAK_FUNC(sub_83AAF188);
PPC_FUNC_IMPL(__imp__sub_83AAF188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf1a8
	if (!cr6.eq) goto loc_83AAF1A8;
loc_83AAF1A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF1A8:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf1a0
	if (cr6.eq) goto loc_83AAF1A0;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r11,47(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF1D8"))) PPC_WEAK_FUNC(sub_83AAF1D8);
PPC_FUNC_IMPL(__imp__sub_83AAF1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf1f8
	if (!cr6.eq) goto loc_83AAF1F8;
loc_83AAF1F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF1F8:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf1f0
	if (cr6.eq) goto loc_83AAF1F0;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// lbz r11,51(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF228"))) PPC_WEAK_FUNC(sub_83AAF228);
PPC_FUNC_IMPL(__imp__sub_83AAF228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf23c
	if (!cr6.eq) goto loc_83AAF23C;
loc_83AAF234:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF23C:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf234
	if (cr6.eq) goto loc_83AAF234;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF26C"))) PPC_WEAK_FUNC(sub_83AAF26C);
PPC_FUNC_IMPL(__imp__sub_83AAF26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF270"))) PPC_WEAK_FUNC(sub_83AAF270);
PPC_FUNC_IMPL(__imp__sub_83AAF270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf284
	if (!cr6.eq) goto loc_83AAF284;
loc_83AAF27C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF284:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf27c
	if (cr6.eq) goto loc_83AAF27C;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF2A4"))) PPC_WEAK_FUNC(sub_83AAF2A4);
PPC_FUNC_IMPL(__imp__sub_83AAF2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF2A8"))) PPC_WEAK_FUNC(sub_83AAF2A8);
PPC_FUNC_IMPL(__imp__sub_83AAF2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f0,288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lbz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF2F8"))) PPC_WEAK_FUNC(sub_83AAF2F8);
PPC_FUNC_IMPL(__imp__sub_83AAF2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf318
	if (!cr6.eq) goto loc_83AAF318;
loc_83AAF310:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF318:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf310
	if (cr6.eq) goto loc_83AAF310;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lbz r11,38(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF348"))) PPC_WEAK_FUNC(sub_83AAF348);
PPC_FUNC_IMPL(__imp__sub_83AAF348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf368
	if (!cr6.eq) goto loc_83AAF368;
loc_83AAF360:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF368:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf360
	if (cr6.eq) goto loc_83AAF360;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lbz r11,39(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF398"))) PPC_WEAK_FUNC(sub_83AAF398);
PPC_FUNC_IMPL(__imp__sub_83AAF398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf3b4
	if (!cr6.eq) goto loc_83AAF3B4;
loc_83AAF3AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF3B4:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf3ac
	if (cr6.eq) goto loc_83AAF3AC;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF3E4"))) PPC_WEAK_FUNC(sub_83AAF3E4);
PPC_FUNC_IMPL(__imp__sub_83AAF3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF3E8"))) PPC_WEAK_FUNC(sub_83AAF3E8);
PPC_FUNC_IMPL(__imp__sub_83AAF3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf408
	if (!cr6.eq) goto loc_83AAF408;
loc_83AAF400:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF408:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf400
	if (cr6.eq) goto loc_83AAF400;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lbz r11,43(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 43);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF438"))) PPC_WEAK_FUNC(sub_83AAF438);
PPC_FUNC_IMPL(__imp__sub_83AAF438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf458
	if (!cr6.eq) goto loc_83AAF458;
loc_83AAF450:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF458:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf450
	if (cr6.eq) goto loc_83AAF450;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lbz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// or r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF488"))) PPC_WEAK_FUNC(sub_83AAF488);
PPC_FUNC_IMPL(__imp__sub_83AAF488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AAF490;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf4c0
	if (!cr6.eq) goto loc_83AAF4C0;
loc_83AAF4B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aaf50c
	goto loc_83AAF50C;
loc_83AAF4C0:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aaf4b8
	if (cr6.eq) goto loc_83AAF4B8;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,32100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32100);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-2240(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2240);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x831d20a0
	ctx.lr = 0x83AAF4F0;
	sub_831D20A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lbz r11,38(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// or r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_83AAF50C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAF514"))) PPC_WEAK_FUNC(sub_83AAF514);
PPC_FUNC_IMPL(__imp__sub_83AAF514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF518"))) PPC_WEAK_FUNC(sub_83AAF518);
PPC_FUNC_IMPL(__imp__sub_83AAF518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AAF520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aaf570
	if (cr6.eq) goto loc_83AAF570;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aaf570
	if (cr6.eq) goto loc_83AAF570;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// or r31,r9,r6
	ctx.r31.u64 = ctx.r9.u64 | ctx.r6.u64;
loc_83AAF570:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83aaf590
	if (!cr6.eq) goto loc_83AAF590;
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83AAF590:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83aaf5c8
	if (cr0.eq) goto loc_83AAF5C8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,32100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32100);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-2240(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2240);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x831d20a0
	ctx.lr = 0x83AAF5B8;
	sub_831D20A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83AAF5C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83aaf5e0
	if (cr6.eq) goto loc_83AAF5E0;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83aaf5e4
	if (!cr6.eq) goto loc_83AAF5E4;
loc_83AAF5E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AAF5E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAF5EC"))) PPC_WEAK_FUNC(sub_83AAF5EC);
PPC_FUNC_IMPL(__imp__sub_83AAF5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF5F0"))) PPC_WEAK_FUNC(sub_83AAF5F0);
PPC_FUNC_IMPL(__imp__sub_83AAF5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aaf618
	if (cr6.eq) goto loc_83AAF618;
	// lbz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 308);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
loc_83AAF618:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83aaf634
	if (cr6.eq) goto loc_83AAF634;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83AAF634:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF640"))) PPC_WEAK_FUNC(sub_83AAF640);
PPC_FUNC_IMPL(__imp__sub_83AAF640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83aaf660
	if (!cr6.eq) goto loc_83AAF660;
loc_83AAF658:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAF660:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83aaf658
	if (cr6.eq) goto loc_83AAF658;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// or r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 | ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF698"))) PPC_WEAK_FUNC(sub_83AAF698);
PPC_FUNC_IMPL(__imp__sub_83AAF698) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,356
	ctx.r3.s64 = ctx.r3.s64 + 356;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF6A0"))) PPC_WEAK_FUNC(sub_83AAF6A0);
PPC_FUNC_IMPL(__imp__sub_83AAF6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,356
	ctx.r9.s64 = ctx.r11.s64 + 356;
	// li r8,8
	ctx.r8.s64 = 8;
loc_83AAF6B0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83aaf6dc
	if (cr6.eq) goto loc_83AAF6DC;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AAF6C8:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// bdnz 0x83aaf6c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AAF6C8;
loc_83AAF6DC:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83aaf6b0
	if (!cr0.eq) goto loc_83AAF6B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF6EC"))) PPC_WEAK_FUNC(sub_83AAF6EC);
PPC_FUNC_IMPL(__imp__sub_83AAF6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF6F0"))) PPC_WEAK_FUNC(sub_83AAF6F0);
PPC_FUNC_IMPL(__imp__sub_83AAF6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,344(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AAF70C:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// bdnz 0x83aaf70c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AAF70C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF724"))) PPC_WEAK_FUNC(sub_83AAF724);
PPC_FUNC_IMPL(__imp__sub_83AAF724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF728"))) PPC_WEAK_FUNC(sub_83AAF728);
PPC_FUNC_IMPL(__imp__sub_83AAF728) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,348(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF730"))) PPC_WEAK_FUNC(sub_83AAF730);
PPC_FUNC_IMPL(__imp__sub_83AAF730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,348(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AAF74C:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// bdnz 0x83aaf74c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AAF74C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF764"))) PPC_WEAK_FUNC(sub_83AAF764);
PPC_FUNC_IMPL(__imp__sub_83AAF764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF768"))) PPC_WEAK_FUNC(sub_83AAF768);
PPC_FUNC_IMPL(__imp__sub_83AAF768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lbz r9,145(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x83aaf7a8
	if (!cr0.gt) goto loc_83AAF7A8;
	// lwz r7,136(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83AAF788:
	// lhzx r3,r10,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// beq cr6,0x83aaf7ec
	if (cr6.eq) goto loc_83AAF7EC;
	// lbz r3,145(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 145);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// blt cr6,0x83aaf788
	if (cr6.lt) goto loc_83AAF788;
loc_83AAF7A8:
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x83aaf7f4
	if (!cr6.lt) goto loc_83AAF7F4;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r4,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u16);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lbz r9,145(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 145);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// lbz r10,145(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 145);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// stb r10,145(r11)
	PPC_STORE_U8(ctx.r11.u32 + 145, ctx.r10.u8);
	// blr 
	return;
loc_83AAF7EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83AAF7F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF7FC"))) PPC_WEAK_FUNC(sub_83AAF7FC);
PPC_FUNC_IMPL(__imp__sub_83AAF7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF800"))) PPC_WEAK_FUNC(sub_83AAF800);
PPC_FUNC_IMPL(__imp__sub_83AAF800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r6,145(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r6,0
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x83aaf840
	if (!cr0.gt) goto loc_83AAF840;
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83AAF820:
	// lhzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x83aaf840
	if (cr6.eq) goto loc_83AAF840;
	// lbz r5,145(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x83aaf820
	if (cr6.lt) goto loc_83AAF820;
loc_83AAF840:
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83aaf890
	if (!cr6.lt) goto loc_83AAF890;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83AAF854:
	// lwz r7,136(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r6,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
	// lwz r7,132(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lbz r7,145(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x83aaf854
	if (cr6.lt) goto loc_83AAF854;
loc_83AAF890:
	// lbz r9,145(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 145);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe. r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83aaf8ac
	if (cr0.eq) goto loc_83AAF8AC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
loc_83AAF8AC:
	// stb r11,145(r10)
	PPC_STORE_U8(ctx.r10.u32 + 145, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF8B4"))) PPC_WEAK_FUNC(sub_83AAF8B4);
PPC_FUNC_IMPL(__imp__sub_83AAF8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF8B8"))) PPC_WEAK_FUNC(sub_83AAF8B8);
PPC_FUNC_IMPL(__imp__sub_83AAF8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lbz r11,145(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r11.u8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF8D8"))) PPC_WEAK_FUNC(sub_83AAF8D8);
PPC_FUNC_IMPL(__imp__sub_83AAF8D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,145(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF8E0"))) PPC_WEAK_FUNC(sub_83AAF8E0);
PPC_FUNC_IMPL(__imp__sub_83AAF8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83aaf904
	if (cr6.lt) goto loc_83AAF904;
	// lbz r11,145(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 145);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83aaf904
	if (!cr6.lt) goto loc_83AAF904;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_83AAF904:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAF90C"))) PPC_WEAK_FUNC(sub_83AAF90C);
PPC_FUNC_IMPL(__imp__sub_83AAF90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF910"))) PPC_WEAK_FUNC(sub_83AAF910);
PPC_FUNC_IMPL(__imp__sub_83AAF910) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r10,r4,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// beq 0x83aaf948
	if (cr0.eq) goto loc_83AAF948;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r31,r11,32768
	ctx.r31.u64 = ctx.r11.u64 | 32768;
	// b 0x83aaf96c
	goto loc_83AAF96C;
loc_83AAF948:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83aaf964
	if (cr0.eq) goto loc_83AAF964;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r31,r11,16384
	ctx.r31.u64 = ctx.r11.u64 | 16384;
	// b 0x83aaf96c
	goto loc_83AAF96C;
loc_83AAF964:
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_83AAF96C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,248
	ctx.r3.s64 = ctx.r30.s64 + 248;
	// bl 0x83ad2170
	ctx.lr = 0x83AAF978;
	sub_83AD2170(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aad808
	ctx.lr = 0x83AAF984;
	sub_83AAD808(ctx, base);
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

__attribute__((alias("__imp__sub_83AAF99C"))) PPC_WEAK_FUNC(sub_83AAF99C);
PPC_FUNC_IMPL(__imp__sub_83AAF99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAF9A0"))) PPC_WEAK_FUNC(sub_83AAF9A0);
PPC_FUNC_IMPL(__imp__sub_83AAF9A0) {
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
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83aaf9ec
	if (cr0.eq) goto loc_83AAF9EC;
	// clrlwi r31,r7,16
	ctx.r31.u64 = ctx.r7.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83AAF9C8:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lhz r30,2(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x83aafa18
	if (cr6.eq) goto loc_83AAFA18;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83aaf9c8
	if (cr6.lt) goto loc_83AAF9C8;
loc_83AAF9EC:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83aafa48
	if (!cr6.lt) goto loc_83AAFA48;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// b 0x83aafa4c
	goto loc_83AAFA4C;
loc_83AAFA18:
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83aafa68
	if (cr6.eq) goto loc_83AAFA68;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83aafa64
	if (cr6.eq) goto loc_83AAFA64;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83aafa68
	if (!cr6.eq) goto loc_83AAFA68;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32104
	ctx.r4.s64 = ctx.r11.s64 + 32104;
	// bl 0x831ea3f0
	ctx.lr = 0x83AAFA48;
	sub_831EA3F0(ctx, base);
loc_83AAFA48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AAFA4C:
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
loc_83AAFA64:
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
loc_83AAFA68:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83aafa4c
	goto loc_83AAFA4C;
}

__attribute__((alias("__imp__sub_83AAFA70"))) PPC_WEAK_FUNC(sub_83AAFA70);
PPC_FUNC_IMPL(__imp__sub_83AAFA70) {
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
	// addi r11,r3,147
	ctx.r11.s64 = ctx.r3.s64 + 147;
	// lbz r30,147(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 147);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lbz r4,146(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 146);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x83aaf9a0
	ctx.lr = 0x83AAFAAC;
	sub_83AAF9A0(ctx, base);
	// lbz r11,147(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 147);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x83aafac4
	if (!cr6.gt) goto loc_83AAFAC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_83AAFAC4:
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

__attribute__((alias("__imp__sub_83AAFADC"))) PPC_WEAK_FUNC(sub_83AAFADC);
PPC_FUNC_IMPL(__imp__sub_83AAFADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAFAE0"))) PPC_WEAK_FUNC(sub_83AAFAE0);
PPC_FUNC_IMPL(__imp__sub_83AAFAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lbz r11,147(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 147);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAFB00"))) PPC_WEAK_FUNC(sub_83AAFB00);
PPC_FUNC_IMPL(__imp__sub_83AAFB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAFB1C"))) PPC_WEAK_FUNC(sub_83AAFB1C);
PPC_FUNC_IMPL(__imp__sub_83AAFB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAFB20"))) PPC_WEAK_FUNC(sub_83AAFB20);
PPC_FUNC_IMPL(__imp__sub_83AAFB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAFB3C"))) PPC_WEAK_FUNC(sub_83AAFB3C);
PPC_FUNC_IMPL(__imp__sub_83AAFB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAFB40"))) PPC_WEAK_FUNC(sub_83AAFB40);
PPC_FUNC_IMPL(__imp__sub_83AAFB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AAFB48;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
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
	// bl 0x83aa2918
	ctx.lr = 0x83AAFB8C;
	sub_83AA2918(ctx, base);
	// stfs f31,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// beq cr6,0x83aafc94
	if (cr6.eq) goto loc_83AAFC94;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafbbc
	if (cr6.eq) goto loc_83AAFBBC;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lbz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
loc_83AAFBBC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafbd4
	if (cr6.eq) goto loc_83AAFBD4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lbz r10,41(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83AAFBD4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafbec
	if (cr6.eq) goto loc_83AAFBEC;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lbz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83AAFBEC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafc04
	if (cr6.eq) goto loc_83AAFC04;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lbz r10,43(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83AAFC04:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafc1c
	if (cr6.eq) goto loc_83AAFC1C;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83AAFC1C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafc34
	if (cr6.eq) goto loc_83AAFC34;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lbz r10,45(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83AAFC34:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafc4c
	if (cr6.eq) goto loc_83AAFC4C;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lbz r10,46(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83AAFC4C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafc64
	if (cr6.eq) goto loc_83AAFC64;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// lbz r10,47(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83AAFC64:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafc7c
	if (cr6.eq) goto loc_83AAFC7C;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// or r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 | ctx.r29.u64;
loc_83AAFC7C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83aafc94
	if (cr6.eq) goto loc_83AAFC94;
	// stw r10,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r10.u32);
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_83AAFC94:
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

__attribute__((alias("__imp__sub_83AAFCA4"))) PPC_WEAK_FUNC(sub_83AAFCA4);
PPC_FUNC_IMPL(__imp__sub_83AAFCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAFCA8"))) PPC_WEAK_FUNC(sub_83AAFCA8);
PPC_FUNC_IMPL(__imp__sub_83AAFCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AAFCB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r29,r5,4
	ctx.r29.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aafce4
	if (cr6.eq) goto loc_83AAFCE4;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83aafce8
	if (!cr6.eq) goto loc_83AAFCE8;
loc_83AAFCE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AAFCE8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83aafd00
	if (!cr6.eq) goto loc_83AAFD00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83aafd08
	if (cr6.eq) goto loc_83AAFD08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AAFD00:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83aafd6c
	if (!cr6.eq) goto loc_83AAFD6C;
loc_83AAFD08:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83aafd64
	if (!cr6.eq) goto loc_83AAFD64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,332(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// bl 0x83aafb40
	ctx.lr = 0x83AAFD20;
	sub_83AAFB40(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83aafda8
	goto loc_83AAFDA8;
loc_83AAFD64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83aafdac
	goto loc_83AAFDAC;
loc_83AAFD6C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83aafda8
	if (!cr6.eq) goto loc_83AAFDA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,332(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// bl 0x83aafb40
	ctx.lr = 0x83AAFD80;
	sub_83AAFB40(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83aafdac
	if (cr6.eq) goto loc_83AAFDAC;
loc_83AAFDA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AAFDAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AAFDB4"))) PPC_WEAK_FUNC(sub_83AAFDB4);
PPC_FUNC_IMPL(__imp__sub_83AAFDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAFDB8"))) PPC_WEAK_FUNC(sub_83AAFDB8);
PPC_FUNC_IMPL(__imp__sub_83AAFDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,356
	ctx.r10.s64 = ctx.r3.s64 + 356;
loc_83AAFDC0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83aafde4
	if (!cr6.eq) goto loc_83AAFDE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83aafdc0
	if (cr6.lt) goto loc_83AAFDC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AAFDE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AAFDEC"))) PPC_WEAK_FUNC(sub_83AAFDEC);
PPC_FUNC_IMPL(__imp__sub_83AAFDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AAFDF0"))) PPC_WEAK_FUNC(sub_83AAFDF0);
PPC_FUNC_IMPL(__imp__sub_83AAFDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(ctx.r11.s32, 101, xer);
	// bgt cr6,0x83aaff1c
	if (cr6.gt) goto loc_83AAFF1C;
	// beq cr6,0x83aaff14
	if (cr6.eq) goto loc_83AAFF14;
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(ctx.r11.s32, 77, xer);
	// bgt cr6,0x83aafe90
	if (cr6.gt) goto loc_83AAFE90;
	// beq cr6,0x83aafe88
	if (cr6.eq) goto loc_83AAFE88;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x83ab0024
	if (cr6.gt) goto loc_83AB0024;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,31408
	ctx.r12.s64 = ctx.r12.s64 + 31408;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// nop 
	// addi r12,r12,-444
	ctx.r12.s64 = ctx.r12.s64 + -444;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83AB004C;
	case 1:
		goto loc_83AB0024;
	case 2:
		goto loc_83AB0024;
	case 3:
		goto loc_83AAFE44;
	case 4:
		goto loc_83AB0024;
	case 5:
		goto loc_83AAFE50;
	case 6:
		goto loc_83AAFE60;
	case 7:
		goto loc_83AAFE58;
	case 8:
		goto loc_83AB0024;
	case 9:
		goto loc_83AAFE68;
	case 10:
		goto loc_83AAFE70;
	case 11:
		goto loc_83AAFE78;
	case 12:
		goto loc_83AAFE80;
	default:
		return;
	}
loc_83AAFE44:
	// li r11,2
	ctx.r11.s64 = 2;
loc_83AAFE48:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83AAFE50:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFE58:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFE60:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFE68:
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFE70:
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFE78:
	// li r11,39
	ctx.r11.s64 = 39;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFE80:
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFE88:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFE90:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// bgt cr6,0x83aafee4
	if (cr6.gt) goto loc_83AAFEE4;
	// beq cr6,0x83aafedc
	if (cr6.eq) goto loc_83AAFEDC;
	// cmpwi cr6,r11,78
	cr6.compare<int32_t>(ctx.r11.s32, 78, xer);
	// beq cr6,0x83aafed4
	if (cr6.eq) goto loc_83AAFED4;
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(ctx.r11.s32, 80, xer);
	// beq cr6,0x83aafecc
	if (cr6.eq) goto loc_83AAFECC;
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(ctx.r11.s32, 81, xer);
	// beq cr6,0x83aafec4
	if (cr6.eq) goto loc_83AAFEC4;
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(ctx.r11.s32, 82, xer);
	// bne cr6,0x83ab0024
	if (!cr6.eq) goto loc_83AB0024;
	// li r11,38
	ctx.r11.s64 = 38;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFEC4:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFECC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFED4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFEDC:
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFEE4:
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(ctx.r11.s32, 98, xer);
	// beq cr6,0x83aaff0c
	if (cr6.eq) goto loc_83AAFF0C;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(ctx.r11.s32, 99, xer);
	// beq cr6,0x83aaff04
	if (cr6.eq) goto loc_83AAFF04;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// bne cr6,0x83ab0024
	if (!cr6.eq) goto loc_83AB0024;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF04:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF0C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF14:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF1C:
	// cmpwi cr6,r11,154
	cr6.compare<int32_t>(ctx.r11.s32, 154, xer);
	// bgt cr6,0x83aaffb4
	if (cr6.gt) goto loc_83AAFFB4;
	// beq cr6,0x83aaffac
	if (cr6.eq) goto loc_83AAFFAC;
	// cmpwi cr6,r11,119
	cr6.compare<int32_t>(ctx.r11.s32, 119, xer);
	// bgt cr6,0x83aaff7c
	if (cr6.gt) goto loc_83AAFF7C;
	// beq cr6,0x83aaff74
	if (cr6.eq) goto loc_83AAFF74;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// beq cr6,0x83aaff6c
	if (cr6.eq) goto loc_83AAFF6C;
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(ctx.r11.s32, 103, xer);
	// beq cr6,0x83aaff64
	if (cr6.eq) goto loc_83AAFF64;
	// cmpwi cr6,r11,104
	cr6.compare<int32_t>(ctx.r11.s32, 104, xer);
	// beq cr6,0x83aaff5c
	if (cr6.eq) goto loc_83AAFF5C;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(ctx.r11.s32, 105, xer);
	// bne cr6,0x83ab0024
	if (!cr6.eq) goto loc_83AB0024;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF5C:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF64:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF6C:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF74:
	// li r11,41
	ctx.r11.s64 = 41;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF7C:
	// cmpwi cr6,r11,127
	cr6.compare<int32_t>(ctx.r11.s32, 127, xer);
	// beq cr6,0x83aaffa4
	if (cr6.eq) goto loc_83AAFFA4;
	// cmpwi cr6,r11,138
	cr6.compare<int32_t>(ctx.r11.s32, 138, xer);
	// beq cr6,0x83aaff9c
	if (cr6.eq) goto loc_83AAFF9C;
	// cmpwi cr6,r11,139
	cr6.compare<int32_t>(ctx.r11.s32, 139, xer);
	// bne cr6,0x83ab0024
	if (!cr6.eq) goto loc_83AB0024;
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFF9C:
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFFA4:
	// li r11,42
	ctx.r11.s64 = 42;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFFAC:
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFFB4:
	// addi r10,r11,-163
	ctx.r10.s64 = ctx.r11.s64 + -163;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgt cr6,0x83ab0024
	if (cr6.gt) goto loc_83AB0024;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83aaffec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AAFFEC;
	// bdzf 4*cr6+eq,0x83aafff4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AAFFF4;
	// bdzf 4*cr6+eq,0x83aafffc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AAFFFC;
	// bdzf 4*cr6+eq,0x83ab0004
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AB0004;
	// bdzf 4*cr6+eq,0x83ab000c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AB000C;
	// bdzf 4*cr6+eq,0x83ab0014
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83AB0014;
	// bne cr6,0x83ab001c
	if (!cr6.eq) goto loc_83AB001C;
	// li r11,44
	ctx.r11.s64 = 44;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFFEC:
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFFF4:
	// li r11,46
	ctx.r11.s64 = 46;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AAFFFC:
	// li r11,47
	ctx.r11.s64 = 47;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AB0004:
	// li r11,48
	ctx.r11.s64 = 48;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AB000C:
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AB0014:
	// li r11,50
	ctx.r11.s64 = 50;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AB001C:
	// li r11,51
	ctx.r11.s64 = 51;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AB0024:
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(ctx.r11.u32, 1000, xer);
	// blt cr6,0x83ab0048
	if (cr6.lt) goto loc_83AB0048;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,-1000
	ctx.r11.s64 = ctx.r11.s64 + -1000;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bge cr6,0x83ab0048
	if (!cr6.lt) goto loc_83AB0048;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x83aafe48
	goto loc_83AAFE48;
loc_83AB0048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB004C:
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB0054"))) PPC_WEAK_FUNC(sub_83AB0054);
PPC_FUNC_IMPL(__imp__sub_83AB0054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB0058"))) PPC_WEAK_FUNC(sub_83AB0058);
PPC_FUNC_IMPL(__imp__sub_83AB0058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,51
	cr6.compare<uint32_t>(ctx.r10.u32, 51, xer);
	// bgt cr6,0x83ab01bc
	if (cr6.gt) goto loc_83AB01BC;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,31424
	ctx.r12.s64 = ctx.r12.s64 + 31424;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// nop 
	// addi r12,r12,148
	ctx.r12.s64 = ctx.r12.s64 + 148;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_83AB0094;
	case 1:
		goto loc_83AB009C;
	case 2:
		goto loc_83AB00A4;
	case 3:
		goto loc_83AB00AC;
	case 4:
		goto loc_83AB00B4;
	case 5:
		goto loc_83AB00BC;
	case 6:
		goto loc_83AB00CC;
	case 7:
		goto loc_83AB00D4;
	case 8:
		goto loc_83AB00DC;
	case 9:
		goto loc_83AB00E4;
	case 10:
		goto loc_83AB00EC;
	case 11:
		goto loc_83AB00F4;
	case 12:
		goto loc_83AB00FC;
	case 13:
		goto loc_83AB0104;
	case 14:
		goto loc_83AB010C;
	case 15:
		goto loc_83AB0114;
	case 16:
		goto loc_83AB011C;
	case 17:
		goto loc_83AB0124;
	case 18:
		goto loc_83AB012C;
	case 19:
		goto loc_83AB0144;
	case 20:
		goto loc_83AB0144;
	case 21:
		goto loc_83AB0144;
	case 22:
		goto loc_83AB0144;
	case 23:
		goto loc_83AB0144;
	case 24:
		goto loc_83AB0144;
	case 25:
		goto loc_83AB0144;
	case 26:
		goto loc_83AB0144;
	case 27:
		goto loc_83AB0144;
	case 28:
		goto loc_83AB0144;
	case 29:
		goto loc_83AB0144;
	case 30:
		goto loc_83AB0144;
	case 31:
		goto loc_83AB0144;
	case 32:
		goto loc_83AB0144;
	case 33:
		goto loc_83AB0144;
	case 34:
		goto loc_83AB0144;
	case 35:
		goto loc_83AB014C;
	case 36:
		goto loc_83AB0154;
	case 37:
		goto loc_83AB00C4;
	case 38:
		goto loc_83AB0134;
	case 39:
		goto loc_83AB013C;
	case 40:
		goto loc_83AB015C;
	case 41:
		goto loc_83AB0164;
	case 42:
		goto loc_83AB016C;
	case 43:
		goto loc_83AB0174;
	case 44:
		goto loc_83AB017C;
	case 45:
		goto loc_83AB0184;
	case 46:
		goto loc_83AB018C;
	case 47:
		goto loc_83AB0194;
	case 48:
		goto loc_83AB019C;
	case 49:
		goto loc_83AB01A4;
	case 50:
		goto loc_83AB01AC;
	case 51:
		goto loc_83AB01B4;
	default:
		return;
	}
loc_83AB0094:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB009C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00A4:
	// li r11,78
	ctx.r11.s64 = 78;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00AC:
	// li r11,77
	ctx.r11.s64 = 77;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00B4:
	// li r11,80
	ctx.r11.s64 = 80;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00BC:
	// li r11,81
	ctx.r11.s64 = 81;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00C4:
	// li r11,82
	ctx.r11.s64 = 82;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00CC:
	// li r11,98
	ctx.r11.s64 = 98;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00D4:
	// li r11,99
	ctx.r11.s64 = 99;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00DC:
	// li r11,100
	ctx.r11.s64 = 100;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00E4:
	// li r11,101
	ctx.r11.s64 = 101;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00EC:
	// li r11,102
	ctx.r11.s64 = 102;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00F4:
	// li r11,103
	ctx.r11.s64 = 103;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB00FC:
	// li r11,104
	ctx.r11.s64 = 104;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0104:
	// li r11,105
	ctx.r11.s64 = 105;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB010C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0114:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB011C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0124:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB012C:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0134:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB013C:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0144:
	// addi r11,r11,980
	ctx.r11.s64 = ctx.r11.s64 + 980;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB014C:
	// li r11,139
	ctx.r11.s64 = 139;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0154:
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB015C:
	// li r11,119
	ctx.r11.s64 = 119;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0164:
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB016C:
	// li r11,154
	ctx.r11.s64 = 154;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0174:
	// li r11,163
	ctx.r11.s64 = 163;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB017C:
	// li r11,164
	ctx.r11.s64 = 164;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0184:
	// li r11,165
	ctx.r11.s64 = 165;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB018C:
	// li r11,166
	ctx.r11.s64 = 166;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB0194:
	// li r11,167
	ctx.r11.s64 = 167;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB019C:
	// li r11,168
	ctx.r11.s64 = 168;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB01A4:
	// li r11,169
	ctx.r11.s64 = 169;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB01AC:
	// li r11,170
	ctx.r11.s64 = 170;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB01B4:
	// li r11,97
	ctx.r11.s64 = 97;
	// b 0x83ab01c4
	goto loc_83AB01C4;
loc_83AB01BC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB01C4:
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB01CC"))) PPC_WEAK_FUNC(sub_83AB01CC);
PPC_FUNC_IMPL(__imp__sub_83AB01CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB01D0"))) PPC_WEAK_FUNC(sub_83AB01D0);
PPC_FUNC_IMPL(__imp__sub_83AB01D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lfs f0,25808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83ab01f8
	if (cr6.gt) goto loc_83AB01F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,20588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20588);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83ab026c
	goto loc_83AB026C;
loc_83AB01F8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f0,32184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83ab0214
	if (cr6.lt) goto loc_83AB0214;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lfs f1,-5700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5700);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83ab026c
	goto loc_83AB026C;
loc_83AB0214:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,32192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f1,f0,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,32188(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32188);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-2240(r9)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + -2240);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x831d20a0
	ctx.lr = 0x83AB0240;
	sub_831D20A0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,20588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83ab0258
	if (cr6.gt) goto loc_83AB0258;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83AB0258:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lfs f0,-5700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83ab026c
	if (cr6.lt) goto loc_83AB026C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83AB026C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB027C"))) PPC_WEAK_FUNC(sub_83AB027C);
PPC_FUNC_IMPL(__imp__sub_83AB027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB0280"))) PPC_WEAK_FUNC(sub_83AB0280);
PPC_FUNC_IMPL(__imp__sub_83AB0280) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce778
	ctx.lr = 0x83AB0290;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x83ab02b8
	if (!cr6.eq) goto loc_83AB02B8;
	// b 0x83ab0318
	goto loc_83AB0318;
loc_83AB02B8:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// bl 0x83aa1ee0
	ctx.lr = 0x83AB02C8;
	sub_83AA1EE0(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x83ab02dc
	if (!cr6.gt) goto loc_83AB02DC;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x83ab02e0
	goto loc_83AB02E0;
loc_83AB02DC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_83AB02E0:
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fcmpu cr6,f28,f0
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x83ab02f0
	if (!cr6.lt) goto loc_83AB02F0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_83AB02F0:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,-5552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5552);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_83AB0318:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x83ab0324
	if (cr6.gt) goto loc_83AB0324;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
loc_83AB0324:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// blt cr6,0x83ab0330
	if (cr6.lt) goto loc_83AB0330;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
loc_83AB0330:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7c4
	ctx.lr = 0x83AB033C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB0348"))) PPC_WEAK_FUNC(sub_83AB0348);
PPC_FUNC_IMPL(__imp__sub_83AB0348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// bgt cr6,0x83ab04b0
	if (cr6.gt) goto loc_83AB04B0;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,31480
	ctx.r12.s64 = ctx.r12.s64 + 31480;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// nop 
	// addi r12,r12,888
	ctx.r12.s64 = ctx.r12.s64 + 888;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_83AB0378;
	case 1:
		goto loc_83AB0380;
	case 2:
		goto loc_83AB0388;
	case 3:
		goto loc_83AB0390;
	case 4:
		goto loc_83AB0398;
	case 5:
		goto loc_83AB03A0;
	case 6:
		goto loc_83AB03A8;
	case 7:
		goto loc_83AB03B0;
	case 8:
		goto loc_83AB03B8;
	case 9:
		goto loc_83AB03C0;
	case 10:
		goto loc_83AB03C8;
	case 11:
		goto loc_83AB03D0;
	case 12:
		goto loc_83AB03D8;
	case 13:
		goto loc_83AB03E0;
	case 14:
		goto loc_83AB03E8;
	case 15:
		goto loc_83AB03F0;
	case 16:
		goto loc_83AB03F8;
	case 17:
		goto loc_83AB0400;
	case 18:
		goto loc_83AB0408;
	case 19:
		goto loc_83AB0410;
	case 20:
		goto loc_83AB0418;
	case 21:
		goto loc_83AB0420;
	case 22:
		goto loc_83AB0428;
	case 23:
		goto loc_83AB0430;
	case 24:
		goto loc_83AB0438;
	case 25:
		goto loc_83AB0440;
	case 26:
		goto loc_83AB0448;
	case 27:
		goto loc_83AB0450;
	case 28:
		goto loc_83AB0458;
	case 29:
		goto loc_83AB04B0;
	case 30:
		goto loc_83AB04B0;
	case 31:
		goto loc_83AB0460;
	case 32:
		goto loc_83AB0468;
	case 33:
		goto loc_83AB0470;
	case 34:
		goto loc_83AB0478;
	case 35:
		goto loc_83AB0480;
	case 36:
		goto loc_83AB0488;
	case 37:
		goto loc_83AB0490;
	case 38:
		goto loc_83AB0498;
	case 39:
		goto loc_83AB04A0;
	case 40:
		goto loc_83AB04A8;
	default:
		return;
	}
loc_83AB0378:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83AB0380:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83AB0388:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83AB0390:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83AB0398:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83AB03A0:
	// li r3,94
	ctx.r3.s64 = 94;
	// blr 
	return;
loc_83AB03A8:
	// li r3,95
	ctx.r3.s64 = 95;
	// blr 
	return;
loc_83AB03B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83AB03B8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83AB03C0:
	// li r3,98
	ctx.r3.s64 = 98;
	// blr 
	return;
loc_83AB03C8:
	// li r3,99
	ctx.r3.s64 = 99;
	// blr 
	return;
loc_83AB03D0:
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
loc_83AB03D8:
	// li r3,101
	ctx.r3.s64 = 101;
	// blr 
	return;
loc_83AB03E0:
	// li r3,102
	ctx.r3.s64 = 102;
	// blr 
	return;
loc_83AB03E8:
	// li r3,103
	ctx.r3.s64 = 103;
	// blr 
	return;
loc_83AB03F0:
	// li r3,104
	ctx.r3.s64 = 104;
	// blr 
	return;
loc_83AB03F8:
	// li r3,105
	ctx.r3.s64 = 105;
	// blr 
	return;
loc_83AB0400:
	// li r3,77
	ctx.r3.s64 = 77;
	// blr 
	return;
loc_83AB0408:
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
loc_83AB0410:
	// li r3,79
	ctx.r3.s64 = 79;
	// blr 
	return;
loc_83AB0418:
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
loc_83AB0420:
	// li r3,81
	ctx.r3.s64 = 81;
	// blr 
	return;
loc_83AB0428:
	// li r3,82
	ctx.r3.s64 = 82;
	// blr 
	return;
loc_83AB0430:
	// li r3,119
	ctx.r3.s64 = 119;
	// blr 
	return;
loc_83AB0438:
	// li r3,122
	ctx.r3.s64 = 122;
	// blr 
	return;
loc_83AB0440:
	// li r3,123
	ctx.r3.s64 = 123;
	// blr 
	return;
loc_83AB0448:
	// li r3,127
	ctx.r3.s64 = 127;
	// blr 
	return;
loc_83AB0450:
	// li r3,126
	ctx.r3.s64 = 126;
	// blr 
	return;
loc_83AB0458:
	// li r3,114
	ctx.r3.s64 = 114;
	// blr 
	return;
loc_83AB0460:
	// li r3,139
	ctx.r3.s64 = 139;
	// blr 
	return;
loc_83AB0468:
	// li r3,141
	ctx.r3.s64 = 141;
	// blr 
	return;
loc_83AB0470:
	// li r3,130
	ctx.r3.s64 = 130;
	// blr 
	return;
loc_83AB0478:
	// li r3,131
	ctx.r3.s64 = 131;
	// blr 
	return;
loc_83AB0480:
	// li r3,132
	ctx.r3.s64 = 132;
	// blr 
	return;
loc_83AB0488:
	// li r3,133
	ctx.r3.s64 = 133;
	// blr 
	return;
loc_83AB0490:
	// li r3,134
	ctx.r3.s64 = 134;
	// blr 
	return;
loc_83AB0498:
	// li r3,135
	ctx.r3.s64 = 135;
	// blr 
	return;
loc_83AB04A0:
	// li r3,136
	ctx.r3.s64 = 136;
	// blr 
	return;
loc_83AB04A8:
	// li r3,137
	ctx.r3.s64 = 137;
	// blr 
	return;
loc_83AB04B0:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB04BC"))) PPC_WEAK_FUNC(sub_83AB04BC);
PPC_FUNC_IMPL(__imp__sub_83AB04BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB04C0"))) PPC_WEAK_FUNC(sub_83AB04C0);
PPC_FUNC_IMPL(__imp__sub_83AB04C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab87a0
	sub_83AB87A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB04C4"))) PPC_WEAK_FUNC(sub_83AB04C4);
PPC_FUNC_IMPL(__imp__sub_83AB04C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB04C8"))) PPC_WEAK_FUNC(sub_83AB04C8);
PPC_FUNC_IMPL(__imp__sub_83AB04C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab87f0
	sub_83AB87F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB04CC"))) PPC_WEAK_FUNC(sub_83AB04CC);
PPC_FUNC_IMPL(__imp__sub_83AB04CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB04D0"))) PPC_WEAK_FUNC(sub_83AB04D0);
PPC_FUNC_IMPL(__imp__sub_83AB04D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83b67da8
	sub_83B67DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB04D4"))) PPC_WEAK_FUNC(sub_83AB04D4);
PPC_FUNC_IMPL(__imp__sub_83AB04D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB04D8"))) PPC_WEAK_FUNC(sub_83AB04D8);
PPC_FUNC_IMPL(__imp__sub_83AB04D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83b67ed8
	sub_83B67ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB04DC"))) PPC_WEAK_FUNC(sub_83AB04DC);
PPC_FUNC_IMPL(__imp__sub_83AB04DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB04E0"))) PPC_WEAK_FUNC(sub_83AB04E0);
PPC_FUNC_IMPL(__imp__sub_83AB04E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r8,-31739
	ctx.r8.s64 = -2080047104;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r7,r8,29416
	ctx.r7.s64 = ctx.r8.s64 + 29416;
	// lwz r9,29416(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29416);
	// lwz r10,-12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-12(r7)
	PPC_STORE_U32(ctx.r7.u32 + -12, ctx.r11.u32);
	// stw r9,29416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29416, ctx.r9.u32);
	// stw r10,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB0510"))) PPC_WEAK_FUNC(sub_83AB0510);
PPC_FUNC_IMPL(__imp__sub_83AB0510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB0518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AB0538;
	sub_831EA7A0(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r10,r30,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1FE;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r9,r30,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// addi r11,r31,388
	ctx.r11.s64 = ctx.r31.s64 + 388;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r8.u8);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stb r29,146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 146, ctx.r29.u8);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x83aae588
	ctx.lr = 0x83AB057C;
	sub_83AAE588(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,29016
	ctx.r9.s64 = ctx.r11.s64 + 29016;
	// lwz r10,392(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 392);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 392, ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB05B4"))) PPC_WEAK_FUNC(sub_83AB05B4);
PPC_FUNC_IMPL(__imp__sub_83AB05B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB05B8"))) PPC_WEAK_FUNC(sub_83AB05B8);
PPC_FUNC_IMPL(__imp__sub_83AB05B8) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,29408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29408);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,29408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29408, ctx.r11.u32);
	// bl 0x83aae588
	ctx.lr = 0x83AB05E8;
	sub_83AAE588(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AB0614"))) PPC_WEAK_FUNC(sub_83AB0614);
PPC_FUNC_IMPL(__imp__sub_83AB0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB0618"))) PPC_WEAK_FUNC(sub_83AB0618);
PPC_FUNC_IMPL(__imp__sub_83AB0618) {
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
	ctx.lr = 0x83AB0620;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,288(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lfs f13,288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// lwz r11,312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab0888
	if (cr6.eq) goto loc_83AB0888;
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ab0684
	if (!cr6.eq) goto loc_83AB0684;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83aabad8
	ctx.lr = 0x83AB0668;
	sub_83AABAD8(ctx, base);
	// stw r3,312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 312, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// bl 0x831ce980
	ctx.lr = 0x83AB0680;
	sub_831CE980(ctx, base);
	// b 0x83ab0888
	goto loc_83AB0888;
loc_83AB0684:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab06cc
	if (cr6.eq) goto loc_83AB06CC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab06b0
	if (cr6.eq) goto loc_83AB06B0;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x83ab06b4
	goto loc_83AB06B4;
loc_83AB06B0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83AB06B4:
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lbz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// lbz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_83AB06CC:
	// lwz r9,312(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab071c
	if (cr6.eq) goto loc_83AB071C;
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0700
	if (cr6.eq) goto loc_83AB0700;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x83ab0704
	goto loc_83AB0704;
loc_83AB0700:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83AB0704:
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// lbz r10,37(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
loc_83AB071C:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab074c
	if (cr6.eq) goto loc_83AB074C;
	// lwz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lbz r10,38(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 38);
	// lbz r9,38(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r10.u8);
loc_83AB074C:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab077c
	if (cr6.eq) goto loc_83AB077C;
	// lwz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lbz r9,39(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// lbz r10,39(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 39);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
loc_83AB077C:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab07c8
	if (cr6.eq) goto loc_83AB07C8;
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab07ac
	if (cr6.eq) goto loc_83AB07AC;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83ab07b0
	if (!cr6.eq) goto loc_83AB07B0;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// b 0x83ab07b0
	goto loc_83AB07B0;
loc_83AB07AC:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_83AB07B0:
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lbz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
loc_83AB07C8:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab07f8
	if (cr6.eq) goto loc_83AB07F8;
	// lwz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lbz r10,41(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
loc_83AB07F8:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0828
	if (cr6.eq) goto loc_83AB0828;
	// lwz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lbz r10,42(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 42);
	// lbz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
loc_83AB0828:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0858
	if (cr6.eq) goto loc_83AB0858;
	// lwz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lbz r9,43(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 43);
	// lbz r10,43(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 43);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,43(r11)
	PPC_STORE_U8(ctx.r11.u32 + 43, ctx.r10.u8);
loc_83AB0858:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0888
	if (cr6.eq) goto loc_83AB0888;
	// lwz r10,312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
loc_83AB0888:
	// lwz r9,316(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ab0b38
	if (cr6.eq) goto loc_83AB0B38;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab08c4
	if (!cr6.eq) goto loc_83AB08C4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83aabad8
	ctx.lr = 0x83AB08A8;
	sub_83AABAD8(ctx, base);
	// stw r3,316(r29)
	PPC_STORE_U32(ctx.r29.u32 + 316, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,316(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// bl 0x831ce980
	ctx.lr = 0x83AB08C0;
	sub_831CE980(ctx, base);
	// b 0x83ab0b38
	goto loc_83AB0B38;
loc_83AB08C4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab090c
	if (cr6.eq) goto loc_83AB090C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab08f0
	if (cr6.eq) goto loc_83AB08F0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x83ab08f4
	goto loc_83AB08F4;
loc_83AB08F0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83AB08F4:
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lbz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// lbz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_83AB090C:
	// lwz r9,316(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab095c
	if (cr6.eq) goto loc_83AB095C;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0940
	if (cr6.eq) goto loc_83AB0940;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x83ab0944
	goto loc_83AB0944;
loc_83AB0940:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83AB0944:
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// lbz r10,37(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
loc_83AB095C:
	// lwz r9,316(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab09ac
	if (cr6.eq) goto loc_83AB09AC;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0990
	if (cr6.eq) goto loc_83AB0990;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x83ab0994
	goto loc_83AB0994;
loc_83AB0990:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83AB0994:
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lbz r9,38(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// lbz r10,38(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 38);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r10.u8);
loc_83AB09AC:
	// lwz r9,316(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab09fc
	if (cr6.eq) goto loc_83AB09FC;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab09e0
	if (cr6.eq) goto loc_83AB09E0;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x83ab09e4
	goto loc_83AB09E4;
loc_83AB09E0:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83AB09E4:
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lbz r9,39(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// lbz r10,39(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 39);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
loc_83AB09FC:
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0a48
	if (cr6.eq) goto loc_83AB0A48;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0a2c
	if (cr6.eq) goto loc_83AB0A2C;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83ab0a30
	if (!cr6.eq) goto loc_83AB0A30;
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// b 0x83ab0a30
	goto loc_83AB0A30;
loc_83AB0A2C:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_83AB0A30:
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lbz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
loc_83AB0A48:
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0a84
	if (cr6.eq) goto loc_83AB0A84;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab0a84
	if (!cr6.eq) goto loc_83AB0A84;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lbz r10,41(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
loc_83AB0A84:
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0ac0
	if (cr6.eq) goto loc_83AB0AC0;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab0ac0
	if (!cr6.eq) goto loc_83AB0AC0;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lbz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// lbz r10,42(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 42);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
loc_83AB0AC0:
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0afc
	if (cr6.eq) goto loc_83AB0AFC;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab0afc
	if (!cr6.eq) goto loc_83AB0AFC;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lbz r9,43(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 43);
	// lbz r10,43(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 43);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,43(r11)
	PPC_STORE_U8(ctx.r11.u32 + 43, ctx.r10.u8);
loc_83AB0AFC:
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0b38
	if (cr6.eq) goto loc_83AB0B38;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab0b38
	if (!cr6.eq) goto loc_83AB0B38;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
loc_83AB0B38:
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ab0e4c
	if (cr6.eq) goto loc_83AB0E4C;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab0b74
	if (!cr6.eq) goto loc_83AB0B74;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x83aabad8
	ctx.lr = 0x83AB0B58;
	sub_83AABAD8(ctx, base);
	// stw r3,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,332(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// bl 0x831ce980
	ctx.lr = 0x83AB0B70;
	sub_831CE980(ctx, base);
	// b 0x83ab0e4c
	goto loc_83AB0E4C;
loc_83AB0B74:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0bbc
	if (cr6.eq) goto loc_83AB0BBC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0ba0
	if (cr6.eq) goto loc_83AB0BA0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x83ab0ba4
	goto loc_83AB0BA4;
loc_83AB0BA0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83AB0BA4:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
loc_83AB0BBC:
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0c0c
	if (cr6.eq) goto loc_83AB0C0C;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0bf0
	if (cr6.eq) goto loc_83AB0BF0;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x83ab0bf4
	goto loc_83AB0BF4;
loc_83AB0BF0:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83AB0BF4:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// lbz r10,41(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
loc_83AB0C0C:
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0c5c
	if (cr6.eq) goto loc_83AB0C5C;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0c40
	if (cr6.eq) goto loc_83AB0C40;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x83ab0c44
	goto loc_83AB0C44;
loc_83AB0C40:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83AB0C44:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// lbz r10,42(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 42);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
loc_83AB0C5C:
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0cac
	if (cr6.eq) goto loc_83AB0CAC;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0c90
	if (cr6.eq) goto loc_83AB0C90;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x83ab0c94
	goto loc_83AB0C94;
loc_83AB0C90:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83AB0C94:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,43(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 43);
	// lbz r10,43(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 43);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,43(r11)
	PPC_STORE_U8(ctx.r11.u32 + 43, ctx.r10.u8);
loc_83AB0CAC:
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0cfc
	if (cr6.eq) goto loc_83AB0CFC;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0ce0
	if (cr6.eq) goto loc_83AB0CE0;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// b 0x83ab0ce4
	goto loc_83AB0CE4;
loc_83AB0CE0:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_83AB0CE4:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
loc_83AB0CFC:
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0d4c
	if (cr6.eq) goto loc_83AB0D4C;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0d30
	if (cr6.eq) goto loc_83AB0D30;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x83ab0d34
	goto loc_83AB0D34;
loc_83AB0D30:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_83AB0D34:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
loc_83AB0D4C:
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0d9c
	if (cr6.eq) goto loc_83AB0D9C;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0d80
	if (cr6.eq) goto loc_83AB0D80;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// b 0x83ab0d84
	goto loc_83AB0D84;
loc_83AB0D80:
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_83AB0D84:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lbz r10,46(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 46);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
loc_83AB0D9C:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0dcc
	if (cr6.eq) goto loc_83AB0DCC;
	// lwz r10,332(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,47(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// lbz r10,47(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 47);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
loc_83AB0DCC:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0dfc
	if (cr6.eq) goto loc_83AB0DFC;
	// lwz r10,332(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
loc_83AB0DFC:
	// lwz r9,332(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0e4c
	if (cr6.eq) goto loc_83AB0E4C;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0e30
	if (cr6.eq) goto loc_83AB0E30;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// b 0x83ab0e34
	goto loc_83AB0E34;
loc_83AB0E30:
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_83AB0E34:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r10,49(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
loc_83AB0E4C:
	// lwz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ab1078
	if (cr6.eq) goto loc_83AB1078;
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab0eb0
	if (!cr6.eq) goto loc_83AB0EB0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83aabad8
	ctx.lr = 0x83AB0E6C;
	sub_83AABAD8(ctx, base);
	// stw r3,324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 324, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,324(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// bl 0x831ce980
	ctx.lr = 0x83AB0E84;
	sub_831CE980(ctx, base);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab1078
	if (!cr6.eq) goto loc_83AB1078;
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// b 0x83ab1078
	goto loc_83AB1078;
loc_83AB0EB0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0f08
	if (cr6.eq) goto loc_83AB0F08;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0eec
	if (cr6.eq) goto loc_83AB0EEC;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x83ab0ef0
	goto loc_83AB0EF0;
loc_83AB0EEC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83AB0EF0:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lbz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
loc_83AB0F08:
	// lwz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0f58
	if (cr6.eq) goto loc_83AB0F58;
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0f3c
	if (cr6.eq) goto loc_83AB0F3C;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x83ab0f40
	goto loc_83AB0F40;
loc_83AB0F3C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83AB0F40:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// lbz r10,25(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
loc_83AB0F58:
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0f88
	if (cr6.eq) goto loc_83AB0F88;
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lbz r9,26(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// lbz r10,26(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
loc_83AB0F88:
	// lwz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0fd8
	if (cr6.eq) goto loc_83AB0FD8;
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab0fbc
	if (cr6.eq) goto loc_83AB0FBC;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x83ab0fc0
	goto loc_83AB0FC0;
loc_83AB0FBC:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83AB0FC0:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lbz r9,27(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// lbz r10,27(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
loc_83AB0FD8:
	// lwz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1028
	if (cr6.eq) goto loc_83AB1028;
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab100c
	if (cr6.eq) goto loc_83AB100C;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// b 0x83ab1010
	goto loc_83AB1010;
loc_83AB100C:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_83AB1010:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// lbz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
loc_83AB1028:
	// lwz r9,324(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1078
	if (cr6.eq) goto loc_83AB1078;
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab105c
	if (cr6.eq) goto loc_83AB105C;
	// lfs f0,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x83ab1060
	goto loc_83AB1060;
loc_83AB105C:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_83AB1060:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lwz r10,324(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// lbz r10,29(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
loc_83AB1078:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab11f0
	if (cr6.eq) goto loc_83AB11F0;
	// lwz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ab10d8
	if (!cr6.eq) goto loc_83AB10D8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83aabad8
	ctx.lr = 0x83AB1098;
	sub_83AABAD8(ctx, base);
	// stw r3,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// bl 0x831ce980
	ctx.lr = 0x83AB10B0;
	sub_831CE980(ctx, base);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ab11f0
	if (!cr6.eq) goto loc_83AB11F0;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// b 0x83ab11f0
	goto loc_83AB11F0;
loc_83AB10D8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1100
	if (cr6.eq) goto loc_83AB1100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lbz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
loc_83AB1100:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1130
	if (cr6.eq) goto loc_83AB1130;
	// lwz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// lbz r10,25(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
loc_83AB1130:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1160
	if (cr6.eq) goto loc_83AB1160;
	// lwz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lbz r9,26(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// lbz r10,26(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
loc_83AB1160:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1190
	if (cr6.eq) goto loc_83AB1190;
	// lwz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lbz r9,27(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// lbz r10,27(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
loc_83AB1190:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab11c0
	if (cr6.eq) goto loc_83AB11C0;
	// lwz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// lbz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
loc_83AB11C0:
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab11f0
	if (cr6.eq) goto loc_83AB11F0;
	// lwz r10,328(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// lbz r10,29(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
loc_83AB11F0:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab16b4
	if (cr6.eq) goto loc_83AB16B4;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ab122c
	if (!cr6.eq) goto loc_83AB122C;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x83aabad8
	ctx.lr = 0x83AB1210;
	sub_83AABAD8(ctx, base);
	// stw r3,320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 320, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,320(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// bl 0x831ce980
	ctx.lr = 0x83AB1228;
	sub_831CE980(ctx, base);
	// b 0x83ab16b4
	goto loc_83AB16B4;
loc_83AB122C:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// bne cr6,0x83ab142c
	if (!cr6.eq) goto loc_83AB142C;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1260
	if (cr6.eq) goto loc_83AB1260;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
loc_83AB1260:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1290
	if (cr6.eq) goto loc_83AB1290;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
loc_83AB1290:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab12c0
	if (cr6.eq) goto loc_83AB12C0;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lbz r10,46(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 46);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
loc_83AB12C0:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab12f0
	if (cr6.eq) goto loc_83AB12F0;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,47(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// lbz r10,47(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 47);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
loc_83AB12F0:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1320
	if (cr6.eq) goto loc_83AB1320;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
loc_83AB1320:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1350
	if (cr6.eq) goto loc_83AB1350;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r10,49(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
loc_83AB1350:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1380
	if (cr6.eq) goto loc_83AB1380;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lbz r10,50(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
loc_83AB1380:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab13b0
	if (cr6.eq) goto loc_83AB13B0;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r10,51(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 51);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r10.u8);
loc_83AB13B0:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab13e0
	if (cr6.eq) goto loc_83AB13E0;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// lbz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
loc_83AB13E0:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1410
	if (cr6.eq) goto loc_83AB1410;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,53(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r10.u8);
loc_83AB1410:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab16b4
	if (cr6.eq) goto loc_83AB16B4;
	// lwz r10,320(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// b 0x83ab169c
	goto loc_83AB169C;
loc_83AB142C:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab145c
	if (cr6.eq) goto loc_83AB145C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab145c
	if (!cr6.eq) goto loc_83AB145C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
loc_83AB145C:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1498
	if (cr6.eq) goto loc_83AB1498;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab1498
	if (!cr6.eq) goto loc_83AB1498;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
loc_83AB1498:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab14d4
	if (cr6.eq) goto loc_83AB14D4;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab14d4
	if (!cr6.eq) goto loc_83AB14D4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lbz r10,46(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 46);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
loc_83AB14D4:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1510
	if (cr6.eq) goto loc_83AB1510;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab1510
	if (!cr6.eq) goto loc_83AB1510;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,47(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// lbz r10,47(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 47);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
loc_83AB1510:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab154c
	if (cr6.eq) goto loc_83AB154C;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab154c
	if (!cr6.eq) goto loc_83AB154C;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
loc_83AB154C:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1588
	if (cr6.eq) goto loc_83AB1588;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab1588
	if (!cr6.eq) goto loc_83AB1588;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r10,49(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
loc_83AB1588:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab15c4
	if (cr6.eq) goto loc_83AB15C4;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab15c4
	if (!cr6.eq) goto loc_83AB15C4;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lbz r10,50(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
loc_83AB15C4:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1600
	if (cr6.eq) goto loc_83AB1600;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab1600
	if (!cr6.eq) goto loc_83AB1600;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r10,51(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 51);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r10.u8);
loc_83AB1600:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab163c
	if (cr6.eq) goto loc_83AB163C;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab163c
	if (!cr6.eq) goto loc_83AB163C;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// lbz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
loc_83AB163C:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1678
	if (cr6.eq) goto loc_83AB1678;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab1678
	if (!cr6.eq) goto loc_83AB1678;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,53(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r10.u8);
loc_83AB1678:
	// lwz r11,320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab16b4
	if (cr6.eq) goto loc_83AB16B4;
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab16b4
	if (!cr6.eq) goto loc_83AB16B4;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_83AB169C:
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,54(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// lbz r10,54(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 54);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r10.u8);
loc_83AB16B4:
	// lwz r9,336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83ab1998
	if (cr6.eq) goto loc_83AB1998;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab16f0
	if (!cr6.eq) goto loc_83AB16F0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x83aabad8
	ctx.lr = 0x83AB16D4;
	sub_83AABAD8(ctx, base);
	// stw r3,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,336(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// bl 0x831ce980
	ctx.lr = 0x83AB16EC;
	sub_831CE980(ctx, base);
	// b 0x83ab1998
	goto loc_83AB1998;
loc_83AB16F0:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1738
	if (cr6.eq) goto loc_83AB1738;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab171c
	if (cr6.eq) goto loc_83AB171C;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x83ab1720
	goto loc_83AB1720;
loc_83AB171C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83AB1720:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
loc_83AB1738:
	// lwz r9,336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1788
	if (cr6.eq) goto loc_83AB1788;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab176c
	if (cr6.eq) goto loc_83AB176C;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x83ab1770
	goto loc_83AB1770;
loc_83AB176C:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_83AB1770:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lbz r10,46(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 46);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
loc_83AB1788:
	// lwz r9,336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab17d8
	if (cr6.eq) goto loc_83AB17D8;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab17bc
	if (cr6.eq) goto loc_83AB17BC;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x83ab17c0
	goto loc_83AB17C0;
loc_83AB17BC:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_83AB17C0:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,47(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// lbz r10,47(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 47);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
loc_83AB17D8:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1808
	if (cr6.eq) goto loc_83AB1808;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r10.u8);
loc_83AB1808:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1838
	if (cr6.eq) goto loc_83AB1838;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r10,49(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 49);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,49(r11)
	PPC_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
loc_83AB1838:
	// lwz r9,336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1888
	if (cr6.eq) goto loc_83AB1888;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab186c
	if (cr6.eq) goto loc_83AB186C;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// b 0x83ab1870
	goto loc_83AB1870;
loc_83AB186C:
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_83AB1870:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lbz r10,50(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
loc_83AB1888:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab18b8
	if (cr6.eq) goto loc_83AB18B8;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r10,51(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 51);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,51(r11)
	PPC_STORE_U8(ctx.r11.u32 + 51, ctx.r10.u8);
loc_83AB18B8:
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1908
	if (cr6.eq) goto loc_83AB1908;
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab18ec
	if (cr6.eq) goto loc_83AB18EC;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x83ab18f0
	goto loc_83AB18F0;
loc_83AB18EC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83AB18F0:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
loc_83AB1908:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1938
	if (cr6.eq) goto loc_83AB1938;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// lbz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
loc_83AB1938:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1968
	if (cr6.eq) goto loc_83AB1968;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,53(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r10.u8);
loc_83AB1968:
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1998
	if (cr6.eq) goto loc_83AB1998;
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// lbz r9,54(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// lbz r10,54(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 54);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r10.u8);
loc_83AB1998:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab19b8
	if (cr6.eq) goto loc_83AB19B8;
	// stw r11,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r11.u32);
	// lbz r11,309(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 309);
	// lbz r10,309(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 309);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,309(r29)
	PPC_STORE_U8(ctx.r29.u32 + 309, ctx.r11.u8);
loc_83AB19B8:
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab19d8
	if (cr6.eq) goto loc_83AB19D8;
	// stw r11,300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 300, ctx.r11.u32);
	// lbz r11,310(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 310);
	// lbz r10,310(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 310);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,310(r29)
	PPC_STORE_U8(ctx.r29.u32 + 310, ctx.r11.u8);
loc_83AB19D8:
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab19f8
	if (cr6.eq) goto loc_83AB19F8;
	// stw r11,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r11.u32);
	// lbz r11,311(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 311);
	// lbz r10,311(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 311);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,311(r29)
	PPC_STORE_U8(ctx.r29.u32 + 311, ctx.r11.u8);
loc_83AB19F8:
	// lwz r10,292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1a30
	if (cr6.eq) goto loc_83AB1A30;
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1a1c
	if (cr6.eq) goto loc_83AB1A1C;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r11.u32);
	// b 0x83ab1a20
	goto loc_83AB1A20;
loc_83AB1A1C:
	// stw r10,292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 292, ctx.r10.u32);
loc_83AB1A20:
	// lbz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 308);
	// lbz r10,308(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 308);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,308(r29)
	PPC_STORE_U8(ctx.r29.u32 + 308, ctx.r11.u8);
loc_83AB1A30:
	// li r28,356
	ctx.r28.s64 = 356;
	// addi r27,r29,356
	ctx.r27.s64 = ctx.r29.s64 + 356;
	// subf r26,r29,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r29.s64;
loc_83AB1A3C:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab1af0
	if (cr6.eq) goto loc_83AB1AF0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab1a78
	if (!cr6.eq) goto loc_83AB1A78;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AB1A5C;
	sub_83AABAD8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwzx r4,r26,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// bl 0x831ce980
	ctx.lr = 0x83AB1A74;
	sub_831CE980(ctx, base);
	// b 0x83ab1af0
	goto loc_83AB1AF0;
loc_83AB1A78:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AB1A88:
	// lwzx r8,r28,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1ae4
	if (cr6.eq) goto loc_83AB1AE4;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1abc
	if (cr6.eq) goto loc_83AB1ABC;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x83ab1ac0
	goto loc_83AB1AC0;
loc_83AB1ABC:
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_83AB1AC0:
	// lwzx r9,r28,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lbz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
loc_83AB1AE4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83ab1a88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB1A88;
loc_83AB1AF0:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,388
	cr6.compare<int32_t>(ctx.r28.s32, 388, xer);
	// blt cr6,0x83ab1a3c
	if (cr6.lt) goto loc_83AB1A3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83aad280
	ctx.lr = 0x83AB1B0C;
	sub_83AAD280(ctx, base);
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab1bc0
	if (cr6.eq) goto loc_83AB1BC0;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab1b48
	if (!cr6.eq) goto loc_83AB1B48;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AB1B2C;
	sub_83AABAD8(ctx, base);
	// stw r3,340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 340, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,340(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// bl 0x831ce980
	ctx.lr = 0x83AB1B44;
	sub_831CE980(ctx, base);
	// b 0x83ab1bc0
	goto loc_83AB1BC0;
loc_83AB1B48:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AB1B58:
	// lwz r8,340(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1bb4
	if (cr6.eq) goto loc_83AB1BB4;
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1b8c
	if (cr6.eq) goto loc_83AB1B8C;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x83ab1b90
	goto loc_83AB1B90;
loc_83AB1B8C:
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_83AB1B90:
	// lwz r9,340(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// lwz r11,340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lbz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
loc_83AB1BB4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83ab1b58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB1B58;
loc_83AB1BC0:
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab1c74
	if (cr6.eq) goto loc_83AB1C74;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab1bfc
	if (!cr6.eq) goto loc_83AB1BFC;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AB1BE0;
	sub_83AABAD8(ctx, base);
	// stw r3,352(r29)
	PPC_STORE_U32(ctx.r29.u32 + 352, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,352(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// bl 0x831ce980
	ctx.lr = 0x83AB1BF8;
	sub_831CE980(ctx, base);
	// b 0x83ab1c74
	goto loc_83AB1C74;
loc_83AB1BFC:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AB1C0C:
	// lwz r8,352(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1c68
	if (cr6.eq) goto loc_83AB1C68;
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1c40
	if (cr6.eq) goto loc_83AB1C40;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x83ab1c44
	goto loc_83AB1C44;
loc_83AB1C40:
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_83AB1C44:
	// lwz r9,352(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lbz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
loc_83AB1C68:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83ab1c0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB1C0C;
loc_83AB1C74:
	// lwz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab1d28
	if (cr6.eq) goto loc_83AB1D28;
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab1cb0
	if (!cr6.eq) goto loc_83AB1CB0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AB1C94;
	sub_83AABAD8(ctx, base);
	// stw r3,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// bl 0x831ce980
	ctx.lr = 0x83AB1CAC;
	sub_831CE980(ctx, base);
	// b 0x83ab1d28
	goto loc_83AB1D28;
loc_83AB1CB0:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AB1CC0:
	// lwz r8,344(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1d1c
	if (cr6.eq) goto loc_83AB1D1C;
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1cf4
	if (cr6.eq) goto loc_83AB1CF4;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x83ab1cf8
	goto loc_83AB1CF8;
loc_83AB1CF4:
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_83AB1CF8:
	// lwz r9,344(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// lwz r11,344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lbz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
loc_83AB1D1C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83ab1cc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB1CC0;
loc_83AB1D28:
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab1ddc
	if (cr6.eq) goto loc_83AB1DDC;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab1d64
	if (!cr6.eq) goto loc_83AB1D64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x83aabad8
	ctx.lr = 0x83AB1D48;
	sub_83AABAD8(ctx, base);
	// stw r3,348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 348, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab1ddc
	if (cr0.eq) goto loc_83AB1DDC;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,348(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// bl 0x831ce980
	ctx.lr = 0x83AB1D60;
	sub_831CE980(ctx, base);
	// b 0x83ab1ddc
	goto loc_83AB1DDC;
loc_83AB1D64:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83AB1D74:
	// lwz r8,348(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1dd0
	if (cr6.eq) goto loc_83AB1DD0;
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab1da8
	if (cr6.eq) goto loc_83AB1DA8;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x83ab1dac
	goto loc_83AB1DAC;
loc_83AB1DA8:
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_83AB1DAC:
	// lwz r9,348(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r11,348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lbz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
loc_83AB1DD0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83ab1d74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83AB1D74;
loc_83AB1DDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB1DE4"))) PPC_WEAK_FUNC(sub_83AB1DE4);
PPC_FUNC_IMPL(__imp__sub_83AB1DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB1DE8"))) PPC_WEAK_FUNC(sub_83AB1DE8);
PPC_FUNC_IMPL(__imp__sub_83AB1DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1000
	cr6.compare<int32_t>(ctx.r4.s32, 1000, xer);
	// blt cr6,0x83ab1e2c
	if (cr6.lt) goto loc_83AB1E2C;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83ab1e2c
	if (cr6.eq) goto loc_83AB1E2C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aad170
	ctx.lr = 0x83AB1E28;
	sub_83AAD170(ctx, base);
	// b 0x83ab1ed0
	goto loc_83AB1ED0;
loc_83AB1E2C:
	// cmpwi cr6,r4,98
	cr6.compare<int32_t>(ctx.r4.s32, 98, xer);
	// blt cr6,0x83ab1e94
	if (cr6.lt) goto loc_83AB1E94;
	// cmpwi cr6,r4,113
	cr6.compare<int32_t>(ctx.r4.s32, 113, xer);
	// bgt cr6,0x83ab1e94
	if (cr6.gt) goto loc_83AB1E94;
	// cmplwi cr6,r4,106
	cr6.compare<uint32_t>(ctx.r4.u32, 106, xer);
	// bge cr6,0x83ab1e64
	if (!cr6.lt) goto loc_83AB1E64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83a8cab0
	ctx.lr = 0x83AB1E4C;
	sub_83A8CAB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f2,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// b 0x83ab1e80
	goto loc_83AB1E80;
loc_83AB1E64:
	// addi r3,r4,-8
	ctx.r3.s64 = ctx.r4.s64 + -8;
	// bl 0x83a8cab0
	ctx.lr = 0x83AB1E6C;
	sub_83A8CAB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
loc_83AB1E80:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aad5c8
	ctx.lr = 0x83AB1E90;
	sub_83AAD5C8(ctx, base);
	// b 0x83ab1ed0
	goto loc_83AB1ED0;
loc_83AB1E94:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aabfc0
	ctx.lr = 0x83AB1EA4;
	sub_83AABFC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab1ed0
	if (cr0.eq) goto loc_83AB1ED0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83ab1ed0
	if (cr6.eq) goto loc_83AB1ED0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_83AB1ED0:
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

__attribute__((alias("__imp__sub_83AB1EE8"))) PPC_WEAK_FUNC(sub_83AB1EE8);
PPC_FUNC_IMPL(__imp__sub_83AB1EE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ab1de8
	sub_83AB1DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB1EEC"))) PPC_WEAK_FUNC(sub_83AB1EEC);
PPC_FUNC_IMPL(__imp__sub_83AB1EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB1EF0"))) PPC_WEAK_FUNC(sub_83AB1EF0);
PPC_FUNC_IMPL(__imp__sub_83AB1EF0) {
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
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83ab1de8
	ctx.lr = 0x83AB1F08;
	sub_83AB1DE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB1F18"))) PPC_WEAK_FUNC(sub_83AB1F18);
PPC_FUNC_IMPL(__imp__sub_83AB1F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AB1F20;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1000
	cr6.compare<int32_t>(ctx.r4.s32, 1000, xer);
	// blt cr6,0x83ab1fa4
	if (cr6.lt) goto loc_83AB1FA4;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x83ab1fa4
	if (cr6.eq) goto loc_83AB1FA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83aad170
	ctx.lr = 0x83AB1F50;
	sub_83AAD170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x83ab1f64
	if (!cr6.eq) goto loc_83AB1F64;
loc_83AB1F5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab2128
	goto loc_83AB2128;
loc_83AB1F64:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// lwzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83ab1f9c
	if (!cr6.eq) goto loc_83AB1F9C;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x83aad9b0
	ctx.lr = 0x83AB1F88;
	sub_83AAD9B0(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r3,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u32);
	// stb r11,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r11.u8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_83AB1F9C:
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// b 0x83ab2120
	goto loc_83AB2120;
loc_83AB1FA4:
	// cmpwi cr6,r29,98
	cr6.compare<int32_t>(ctx.r29.s32, 98, xer);
	// blt cr6,0x83ab20cc
	if (cr6.lt) goto loc_83AB20CC;
	// cmpwi cr6,r29,113
	cr6.compare<int32_t>(ctx.r29.s32, 113, xer);
	// bgt cr6,0x83ab20cc
	if (cr6.gt) goto loc_83AB20CC;
	// cmpwi cr6,r29,106
	cr6.compare<int32_t>(ctx.r29.s32, 106, xer);
	// bge cr6,0x83ab2060
	if (!cr6.lt) goto loc_83AB2060;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8cab0
	ctx.lr = 0x83AB1FC4;
	sub_83A8CAB0(ctx, base);
	// lbz r11,149(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 149);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab2004
	if (cr0.eq) goto loc_83AB2004;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83AB1FDC:
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r8,152(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 152);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83ab2038
	if (cr6.eq) goto loc_83AB2038;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lbz r8,149(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 149);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83ab1fdc
	if (cr6.lt) goto loc_83AB1FDC;
loc_83AB2004:
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x83aad9b0
	ctx.lr = 0x83AB200C;
	sub_83AAD9B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f2,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
loc_83AB2024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x83aad5c8
	ctx.lr = 0x83AB2034;
	sub_83AAD5C8(ctx, base);
	// b 0x83ab2128
	goto loc_83AB2128;
loc_83AB2038:
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x83ab2128
	goto loc_83AB2128;
loc_83AB2060:
	// addi r3,r29,-8
	ctx.r3.s64 = ctx.r29.s64 + -8;
	// bl 0x83a8cab0
	ctx.lr = 0x83AB2068;
	sub_83A8CAB0(ctx, base);
	// lbz r11,149(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 149);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab20a8
	if (cr0.eq) goto loc_83AB20A8;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83AB2080:
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r8,152(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 152);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x83ab2038
	if (cr6.eq) goto loc_83AB2038;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lbz r8,149(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 149);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x83ab2080
	if (cr6.lt) goto loc_83AB2080;
loc_83AB20A8:
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x83aad9b0
	ctx.lr = 0x83AB20B0;
	sub_83AAD9B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lfs f2,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83ab2024
	goto loc_83AB2024;
loc_83AB20CC:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aabfc0
	ctx.lr = 0x83AB20E0;
	sub_83AABFC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab1f5c
	if (cr0.eq) goto loc_83AB1F5C;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83ab211c
	if (!cr6.eq) goto loc_83AB211C;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x83aad9b0
	ctx.lr = 0x83AB2108;
	sub_83AAD9B0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_83AB211C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_83AB2120:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AB2128:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB2130"))) PPC_WEAK_FUNC(sub_83AB2130);
PPC_FUNC_IMPL(__imp__sub_83AB2130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB2138;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce778
	ctx.lr = 0x83AB2140;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x83ab1f18
	ctx.lr = 0x83AB2168;
	sub_83AB1F18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab21fc
	if (cr0.eq) goto loc_83AB21FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-29844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x83ab2194
	if (!cr6.lt) goto loc_83AB2194;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32196
	ctx.r4.s64 = ctx.r11.s64 + 32196;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB2190;
	sub_831EA3F0(ctx, base);
	// b 0x83ab21fc
	goto loc_83AB21FC;
loc_83AB2194:
	// lfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lfs f0,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f29.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x83b66200
	ctx.lr = 0x83AB21B0;
	sub_83B66200(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x83aa4f98
	ctx.lr = 0x83AB21C0;
	sub_83AA4F98(ctx, base);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// divdu r10,r3,r10
	ctx.r10.u64 = PPCDivide(ctx.r3.u64, ctx.r10.u64);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x83ad20e0
	ctx.lr = 0x83AB21FC;
	sub_83AD20E0(ctx, base);
loc_83AB21FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7c4
	ctx.lr = 0x83AB2208;
	__restfpr_28(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB220C"))) PPC_WEAK_FUNC(sub_83AB220C);
PPC_FUNC_IMPL(__imp__sub_83AB220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB2210"))) PPC_WEAK_FUNC(sub_83AB2210);
PPC_FUNC_IMPL(__imp__sub_83AB2210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB2218;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x83ab1f18
	ctx.lr = 0x83AB2248;
	sub_83AB1F18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab2290
	if (cr0.eq) goto loc_83AB2290;
	// bl 0x83aa4f98
	ctx.lr = 0x83AB2254;
	sub_83AA4F98(ctx, base);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// divdu r10,r3,r10
	ctx.r10.u64 = PPCDivide(ctx.r3.u64, ctx.r10.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x83ad20e0
	ctx.lr = 0x83AB2290;
	sub_83AD20E0(ctx, base);
loc_83AB2290:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB22A0"))) PPC_WEAK_FUNC(sub_83AB22A0);
PPC_FUNC_IMPL(__imp__sub_83AB22A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AB22A8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x83ab1f18
	ctx.lr = 0x83AB22E0;
	sub_83AB1F18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab2324
	if (cr0.eq) goto loc_83AB2324;
	// bl 0x83aa4f98
	ctx.lr = 0x83AB22EC;
	sub_83AA4F98(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// divdu r11,r3,r11
	ctx.r11.u64 = PPCDivide(ctx.r3.u64, ctx.r11.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x83ad20e0
	ctx.lr = 0x83AB2324;
	sub_83AD20E0(ctx, base);
loc_83AB2324:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB2334"))) PPC_WEAK_FUNC(sub_83AB2334);
PPC_FUNC_IMPL(__imp__sub_83AB2334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB2338"))) PPC_WEAK_FUNC(sub_83AB2338);
PPC_FUNC_IMPL(__imp__sub_83AB2338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83AB2340;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab2488
	if (cr6.eq) goto loc_83AB2488;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x83ab2338
	ctx.lr = 0x83AB2364;
	sub_83AB2338(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab248c
	if (!cr0.eq) goto loc_83AB248C;
	// lbz r9,73(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 73);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x83ab239c
	if (!cr0.gt) goto loc_83AB239C;
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
loc_83AB2380:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, xer);
	// beq cr6,0x83ab23a0
	if (cr6.eq) goto loc_83AB23A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83ab2380
	if (cr6.lt) goto loc_83AB2380;
loc_83AB239C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83AB23A0:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83ab23c0
	if (cr6.eq) goto loc_83AB23C0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// b 0x83ab248c
	goto loc_83AB248C;
loc_83AB23C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x83aafdf0
	ctx.lr = 0x83AB23CC;
	sub_83AAFDF0(ctx, base);
	// lbz r11,145(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 145);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab2488
	if (cr0.eq) goto loc_83AB2488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_83AB23F0:
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r10,136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwzx r31,r25,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lhzx r30,r10,r24
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a98428
	ctx.lr = 0x83AB240C;
	sub_83A98428(ctx, base);
	// clrlwi. r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq 0x83ab2470
	if (cr0.eq) goto loc_83AB2470;
loc_83AB2418:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a98508
	ctx.lr = 0x83AB2428;
	sub_83A98508(ctx, base);
	// cmpw cr6,r22,r3
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r3.s32, xer);
	// bne cr6,0x83ab245c
	if (!cr6.eq) goto loc_83AB245C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a984b8
	ctx.lr = 0x83AB243C;
	sub_83A984B8(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab2338
	ctx.lr = 0x83AB2454;
	sub_83AB2338(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ab2498
	if (cr6.eq) goto loc_83AB2498;
loc_83AB245C:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x83ab2418
	if (cr6.lt) goto loc_83AB2418;
loc_83AB2470:
	// lbz r11,145(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 145);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ab23f0
	if (cr6.lt) goto loc_83AB23F0;
loc_83AB2488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB248C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83AB2498:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// clrlwi r5,r27,16
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a982f0
	ctx.lr = 0x83AB24B4;
	sub_83A982F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83ab24d0
	if (!cr0.eq) goto loc_83AB24D0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32244
	ctx.r4.s64 = ctx.r11.s64 + 32244;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB24CC;
	sub_831EA3F0(ctx, base);
	// stfs f31,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
loc_83AB24D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83ab248c
	goto loc_83AB248C;
}

__attribute__((alias("__imp__sub_83AB24D8"))) PPC_WEAK_FUNC(sub_83AB24D8);
PPC_FUNC_IMPL(__imp__sub_83AB24D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83AB24E0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,145(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 145);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab261c
	if (cr0.eq) goto loc_83AB261C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_83AB2510:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// lwz r10,132(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// lhzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r30,r24,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a98428
	ctx.lr = 0x83AB252C;
	sub_83A98428(ctx, base);
	// clrlwi r23,r3,16
	ctx.r23.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a984b8
	ctx.lr = 0x83AB253C;
	sub_83A984B8(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83ab2338
	ctx.lr = 0x83AB2550;
	sub_83AB2338(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83ab2604
	if (!cr6.eq) goto loc_83AB2604;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x83ab2604
	if (!cr6.gt) goto loc_83AB2604;
loc_83AB2564:
	// clrlwi r5,r26,16
	ctx.r5.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a98508
	ctx.lr = 0x83AB2574;
	sub_83A98508(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83ab0058
	ctx.lr = 0x83AB2580;
	sub_83AB0058(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83ab25f8
	if (!cr6.eq) goto loc_83AB25F8;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// clrlwi r5,r27,16
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a982f0
	ctx.lr = 0x83AB25A4;
	sub_83A982F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83ab25f8
	if (!cr6.eq) goto loc_83AB25F8;
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(ctx.r29.s32, 7, xer);
	// blt cr6,0x83ab25e8
	if (cr6.lt) goto loc_83AB25E8;
	// cmpwi cr6,r29,14
	cr6.compare<int32_t>(ctx.r29.s32, 14, xer);
	// bgt cr6,0x83ab25e8
	if (cr6.gt) goto loc_83AB25E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a8ca98
	ctx.lr = 0x83AB25C4;
	sub_83A8CA98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83aad5c8
	ctx.lr = 0x83AB25E4;
	sub_83AAD5C8(ctx, base);
	// b 0x83ab25f8
	goto loc_83AB25F8;
loc_83AB25E8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83aadac8
	ctx.lr = 0x83AB25F8;
	sub_83AADAC8(ctx, base);
loc_83AB25F8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r23
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, xer);
	// blt cr6,0x83ab2564
	if (cr6.lt) goto loc_83AB2564;
loc_83AB2604:
	// lbz r11,145(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 145);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ab2510
	if (cr6.lt) goto loc_83AB2510;
loc_83AB261C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB2628"))) PPC_WEAK_FUNC(sub_83AB2628);
PPC_FUNC_IMPL(__imp__sub_83AB2628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83AB2630;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r23,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r23.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stb r23,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r23.u8);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// stb r23,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r23.u8);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r23,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r23.u32);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// beq cr6,0x83ab26f0
	if (cr6.eq) goto loc_83AB26F0;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_83AB2678:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r31,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r31.u32);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lbz r9,147(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 147);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// or r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 | ctx.r27.u64;
	// beq 0x83ab26dc
	if (cr0.eq) goto loc_83AB26DC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_83AB26A4:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x83aaf9a0
	ctx.lr = 0x83AB26C8;
	sub_83AAF9A0(ctx, base);
	// lbz r11,147(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 147);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ab26a4
	if (cr6.lt) goto loc_83AB26A4;
loc_83AB26DC:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r25,r31,84
	ctx.r25.s64 = ctx.r31.s64 + 84;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab2678
	if (!cr6.eq) goto loc_83AB2678;
loc_83AB26F0:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lbz r10,147(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 147);
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// or r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 | ctx.r28.u64;
	// beq 0x83ab2750
	if (cr0.eq) goto loc_83AB2750;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_83AB2718:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x83aaf9a0
	ctx.lr = 0x83AB273C;
	sub_83AAF9A0(ctx, base);
	// lbz r11,147(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 147);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ab2718
	if (cr6.lt) goto loc_83AB2718;
loc_83AB2750:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83ab2764
	if (cr6.eq) goto loc_83AB2764;
	// lwz r31,80(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
loc_83AB2764:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ab284c
	if (cr6.eq) goto loc_83AB284C;
	// stw r31,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r31.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// or r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 | ctx.r27.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lbz r10,147(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 147);
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83ab27d0
	if (cr0.eq) goto loc_83AB27D0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_83AB2798:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x83aaf9a0
	ctx.lr = 0x83AB27BC;
	sub_83AAF9A0(ctx, base);
	// lbz r11,147(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 147);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ab2798
	if (cr6.lt) goto loc_83AB2798;
loc_83AB27D0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab280c
	if (cr6.eq) goto loc_83AB280C;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ab280c
	if (cr6.eq) goto loc_83AB280C;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r3,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
	// bl 0x83a970c8
	ctx.lr = 0x83AB27F8;
	sub_83A970C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x83a96e28
	ctx.lr = 0x83AB2804;
	sub_83A96E28(ctx, base);
	// or r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 | ctx.r3.u64;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_83AB280C:
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab284c
	if (cr0.eq) goto loc_83AB284C;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
loc_83AB2820:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r11.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// or r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 | ctx.r27.u64;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x83ab2820
	if (cr6.lt) goto loc_83AB2820;
loc_83AB284C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83ab28c0
	if (!cr0.gt) goto loc_83AB28C0;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83AB2860:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x83a88ec8
	ctx.lr = 0x83AB2868;
	sub_83A88EC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab28b4
	if (cr0.eq) goto loc_83AB28B4;
	// stw r3,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r3.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// or r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 | ctx.r27.u64;
	// b 0x83ab28ac
	goto loc_83AB28AC;
loc_83AB2890:
	// stw r11,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r11.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// or r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 | ctx.r30.u64;
	// or r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 | ctx.r27.u64;
loc_83AB28AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab2890
	if (!cr6.eq) goto loc_83AB2890;
loc_83AB28B4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83ab2860
	if (!cr0.eq) goto loc_83AB2860;
loc_83AB28C0:
	// stw r23,76(r26)
	PPC_STORE_U32(ctx.r26.u32 + 76, ctx.r23.u32);
	// stb r30,4(r24)
	PPC_STORE_U8(ctx.r24.u32 + 4, ctx.r30.u8);
	// stb r27,5(r24)
	PPC_STORE_U8(ctx.r24.u32 + 5, ctx.r27.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB28D4"))) PPC_WEAK_FUNC(sub_83AB28D4);
PPC_FUNC_IMPL(__imp__sub_83AB28D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB28D8"))) PPC_WEAK_FUNC(sub_83AB28D8);
PPC_FUNC_IMPL(__imp__sub_83AB28D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r30,76(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83ab2914
	goto loc_83AB2914;
loc_83AB28F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab0618
	ctx.lr = 0x83AB2904;
	sub_83AB0618(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab24d8
	ctx.lr = 0x83AB2910;
	sub_83AB24D8(ctx, base);
	// lwz r30,76(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
loc_83AB2914:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83ab28f8
	if (!cr6.eq) goto loc_83AB28F8;
	// lwz r8,328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83ab2b28
	if (cr6.eq) goto loc_83AB2B28;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ab2958
	if (!cr6.eq) goto loc_83AB2958;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83aabad8
	ctx.lr = 0x83AB293C;
	sub_83AABAD8(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab2b28
	if (cr0.eq) goto loc_83AB2B28;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x831ce980
	ctx.lr = 0x83AB2954;
	sub_831CE980(ctx, base);
	// b 0x83ab2b28
	goto loc_83AB2B28;
loc_83AB2958:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab29b8
	if (cr6.eq) goto loc_83AB29B8;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab299c
	if (cr6.eq) goto loc_83AB299C;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x83ab29a0
	goto loc_83AB29A0;
loc_83AB299C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83AB29A0:
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lbz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lbz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r9.u8);
loc_83AB29B8:
	// lwz r8,328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2a08
	if (cr6.eq) goto loc_83AB2A08;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab29ec
	if (cr6.eq) goto loc_83AB29EC;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// b 0x83ab29f0
	goto loc_83AB29F0;
loc_83AB29EC:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83AB29F0:
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lbz r8,25(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// lbz r9,25(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 25);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,25(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25, ctx.r9.u8);
loc_83AB2A08:
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2a38
	if (cr6.eq) goto loc_83AB2A38;
	// lwz r9,324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lbz r9,26(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// lbz r8,26(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,26(r10)
	PPC_STORE_U8(ctx.r10.u32 + 26, ctx.r9.u8);
loc_83AB2A38:
	// lwz r8,328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2a88
	if (cr6.eq) goto loc_83AB2A88;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2a6c
	if (cr6.eq) goto loc_83AB2A6C;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// b 0x83ab2a70
	goto loc_83AB2A70;
loc_83AB2A6C:
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_83AB2A70:
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lbz r8,27(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// lbz r9,27(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 27);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,27(r10)
	PPC_STORE_U8(ctx.r10.u32 + 27, ctx.r9.u8);
loc_83AB2A88:
	// lwz r8,328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2ad8
	if (cr6.eq) goto loc_83AB2AD8;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2abc
	if (cr6.eq) goto loc_83AB2ABC;
	// lfs f0,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// b 0x83ab2ac0
	goto loc_83AB2AC0;
loc_83AB2ABC:
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
loc_83AB2AC0:
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lbz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// lbz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r9.u8);
loc_83AB2AD8:
	// lwz r8,328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2b28
	if (cr6.eq) goto loc_83AB2B28;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2b0c
	if (cr6.eq) goto loc_83AB2B0C;
	// lfs f0,20(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// b 0x83ab2b10
	goto loc_83AB2B10;
loc_83AB2B0C:
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_83AB2B10:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lbz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// lbz r10,29(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
loc_83AB2B28:
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

__attribute__((alias("__imp__sub_83AB2B40"))) PPC_WEAK_FUNC(sub_83AB2B40);
PPC_FUNC_IMPL(__imp__sub_83AB2B40) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r31,r4,1000
	ctx.r31.s64 = ctx.r4.s64 + 1000;
	// lfs f29,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f2,f29
	cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// bge cr6,0x83ab2c20
	if (!cr6.lt) goto loc_83AB2C20;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x83aad908
	ctx.lr = 0x83AB2B88;
	sub_83AAD908(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab2c20
	if (cr6.eq) goto loc_83AB2C20;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// lfs f11,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x83ab2c1c
	if (cr6.eq) goto loc_83AB2C1C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83ab2bd0
	if (!cr6.gt) goto loc_83AB2BD0;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// b 0x83ab2be4
	goto loc_83AB2BE4;
loc_83AB2BD0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-11416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11416);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83ab2be4
	if (!cr6.lt) goto loc_83AB2BE4;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
loc_83AB2BE4:
	// fneg f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83ab2bf4
	if (cr6.gt) goto loc_83AB2BF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83AB2BF4:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x83ab2c00
	if (cr6.lt) goto loc_83AB2C00;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_83AB2C00:
	// fadds f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x83ab2c10
	if (!cr6.gt) goto loc_83AB2C10;
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
loc_83AB2C10:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x83ab2c1c
	if (!cr6.lt) goto loc_83AB2C1C;
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
loc_83AB2C1C:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f13.f64;
loc_83AB2C20:
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83ab1de8
	ctx.lr = 0x83AB2C34;
	sub_83AB1DE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

__attribute__((alias("__imp__sub_83AB2C5C"))) PPC_WEAK_FUNC(sub_83AB2C5C);
PPC_FUNC_IMPL(__imp__sub_83AB2C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB2C60"))) PPC_WEAK_FUNC(sub_83AB2C60);
PPC_FUNC_IMPL(__imp__sub_83AB2C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AB2C68;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab2df0
	if (cr6.eq) goto loc_83AB2DF0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab2df0
	if (cr6.eq) goto loc_83AB2DF0;
	// bl 0x83102db0
	ctx.lr = 0x83AB2C94;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x83a96e28
	ctx.lr = 0x83AB2CA0;
	sub_83A96E28(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83102db0
	ctx.lr = 0x83AB2CA8;
	sub_83102DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83a970c8
	ctx.lr = 0x83AB2CB4;
	sub_83A970C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83ab8730
	ctx.lr = 0x83AB2CBC;
	sub_83AB8730(ctx, base);
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83ab2cd0
	if (cr6.eq) goto loc_83AB2CD0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83aae850
	ctx.lr = 0x83AB2CD0;
	sub_83AAE850(ctx, base);
loc_83AB2CD0:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x8357ece8
	ctx.lr = 0x83AB2CD8;
	sub_8357ECE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83aae850
	ctx.lr = 0x83AB2CE4;
	sub_83AAE850(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// lhz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x83ab2d0c
	if (!cr6.eq) goto loc_83AB2D0C;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x83ab2d20
	if (cr6.eq) goto loc_83AB2D20;
loc_83AB2D0C:
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// b 0x83ab2d24
	goto loc_83AB2D24;
loc_83AB2D20:
	// stw r25,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r25.u32);
loc_83AB2D24:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83ab8840
	ctx.lr = 0x83AB2D38;
	sub_83AB8840(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83ab2d5c
	if (cr6.eq) goto loc_83AB2D5C;
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83ab1de8
	ctx.lr = 0x83AB2D5C;
	sub_83AB1DE8(ctx, base);
loc_83AB2D5C:
	// lhz r4,130(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// bne cr6,0x83ab2d74
	if (!cr6.eq) goto loc_83AB2D74;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplw cr6,r4,r26
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, xer);
	// beq cr6,0x83ab2da4
	if (cr6.eq) goto loc_83AB2DA4;
loc_83AB2D74:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lfs f2,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-27232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x83ab2b40
	ctx.lr = 0x83AB2D9C;
	sub_83AB2B40(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// b 0x83ab2da8
	goto loc_83AB2DA8;
loc_83AB2DA4:
	// stw r25,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r25.u32);
loc_83AB2DA8:
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// bne cr6,0x83ab2dc0
	if (!cr6.eq) goto loc_83AB2DC0;
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r4,r26
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r26.u32, xer);
	// beq cr6,0x83ab2de4
	if (cr6.eq) goto loc_83AB2DE4;
loc_83AB2DC0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,14624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x83ab2b40
	ctx.lr = 0x83AB2DDC;
	sub_83AB2B40(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// b 0x83ab2de8
	goto loc_83AB2DE8;
loc_83AB2DE4:
	// stw r25,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r25.u32);
loc_83AB2DE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83ab2df4
	goto loc_83AB2DF4;
loc_83AB2DF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AB2DF4:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB2E00"))) PPC_WEAK_FUNC(sub_83AB2E00);
PPC_FUNC_IMPL(__imp__sub_83AB2E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB2E08;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f30,-5700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5700);
	ctx.f30.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f31,20588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20588);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stfs f30,0(r4)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f31,0(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab2e58
	if (!cr6.eq) goto loc_83AB2E58;
loc_83AB2E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab2ed8
	goto loc_83AB2ED8;
loc_83AB2E58:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ab2e78
	if (!cr6.eq) goto loc_83AB2E78;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83ab2e50
	if (cr6.eq) goto loc_83AB2E50;
loc_83AB2E78:
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83ab2e98
	if (!cr0.eq) goto loc_83AB2E98;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83ab2e98
	if (!cr0.eq) goto loc_83AB2E98;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83ab2e50
	if (cr6.eq) goto loc_83AB2E50;
loc_83AB2E98:
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ab01d0
	ctx.lr = 0x83AB2EA0;
	sub_83AB01D0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ab01d0
	ctx.lr = 0x83AB2EB0;
	sub_83AB01D0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x83ab2ecc
	if (!cr6.eq) goto loc_83AB2ECC;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83ab2ed0
	if (cr6.eq) goto loc_83AB2ED0;
loc_83AB2ECC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83AB2ED0:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AB2ED8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB2EE8"))) PPC_WEAK_FUNC(sub_83AB2EE8);
PPC_FUNC_IMPL(__imp__sub_83AB2EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83AB2EF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f13,-5700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5700);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f0,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab2f40
	if (!cr6.eq) goto loc_83AB2F40;
loc_83AB2F38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab3038
	goto loc_83AB3038;
loc_83AB2F40:
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ori r31,r7,65535
	ctx.r31.u64 = ctx.r7.u64 | 65535;
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab2f78
	if (!cr6.eq) goto loc_83AB2F78;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab2f78
	if (!cr6.eq) goto loc_83AB2F78;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// bne cr6,0x83ab2f78
	if (!cr6.eq) goto loc_83AB2F78;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab2f38
	if (cr6.eq) goto loc_83AB2F38;
loc_83AB2F78:
	// lbz r7,26(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x83ab2fb0
	if (!cr0.eq) goto loc_83AB2FB0;
	// lbz r7,27(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x83ab2fb0
	if (!cr0.eq) goto loc_83AB2FB0;
	// lbz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x83ab2fb0
	if (!cr0.eq) goto loc_83AB2FB0;
	// lbz r11,29(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ab2fb0
	if (!cr0.eq) goto loc_83AB2FB0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83ab2f38
	if (cr6.eq) goto loc_83AB2F38;
loc_83AB2FB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab2fe8
	if (cr6.eq) goto loc_83AB2FE8;
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab2fe8
	if (!cr6.eq) goto loc_83AB2FE8;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_83AB2FE8:
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab3004
	if (cr6.eq) goto loc_83AB3004;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83ab01d0
	ctx.lr = 0x83AB3000;
	sub_83AB01D0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_83AB3004:
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab301c
	if (cr6.eq) goto loc_83AB301C;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_83AB301C:
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x83ab3034
	if (cr6.eq) goto loc_83AB3034;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_83AB3034:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AB3038:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB3040"))) PPC_WEAK_FUNC(sub_83AB3040);
PPC_FUNC_IMPL(__imp__sub_83AB3040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83AB3048;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83ab31a8
	if (cr6.eq) goto loc_83AB31A8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_83AB307C:
	// lbz r11,145(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 145);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab319c
	if (cr0.eq) goto loc_83AB319C;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
loc_83AB3094:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lhzx r31,r25,r11
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// lwzx r30,r10,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a983d8
	ctx.lr = 0x83AB30B4;
	sub_83A983D8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x83ab3184
	if (cr6.eq) goto loc_83AB3184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a984b8
	ctx.lr = 0x83AB30CC;
	sub_83A984B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab2338
	ctx.lr = 0x83AB30E0;
	sub_83AB2338(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x83ab0280
	ctx.lr = 0x83AB30F8;
	sub_83AB0280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a98428
	ctx.lr = 0x83AB3108;
	sub_83A98428(ctx, base);
	// clrlwi. r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// ble 0x83ab3184
	if (!cr0.gt) goto loc_83AB3184;
loc_83AB3114:
	// li r11,-1
	ctx.r11.s64 = -1;
	// clrlwi r5,r28,16
	ctx.r5.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a98508
	ctx.lr = 0x83AB312C;
	sub_83A98508(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x83ab0058
	ctx.lr = 0x83AB3138;
	sub_83AB0058(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab3178
	if (cr0.eq) goto loc_83AB3178;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a982f0
	ctx.lr = 0x83AB3158;
	sub_83A982F0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83ab3178
	if (!cr6.eq) goto loc_83AB3178;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83aadac8
	ctx.lr = 0x83AB3178;
	sub_83AADAC8(ctx, base);
loc_83AB3178:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, xer);
	// blt cr6,0x83ab3114
	if (cr6.lt) goto loc_83AB3114;
loc_83AB3184:
	// lbz r11,145(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 145);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ab3094
	if (cr6.lt) goto loc_83AB3094;
loc_83AB319C:
	// lwz r29,76(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83ab307c
	if (!cr6.eq) goto loc_83AB307C;
loc_83AB31A8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_83AB31BC"))) PPC_WEAK_FUNC(sub_83AB31BC);
PPC_FUNC_IMPL(__imp__sub_83AB31BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB31C0"))) PPC_WEAK_FUNC(sub_83AB31C0);
PPC_FUNC_IMPL(__imp__sub_83AB31C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB31C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r10,r4,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// beq 0x83ab31f4
	if (cr0.eq) goto loc_83AB31F4;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r31,r11,32768
	ctx.r31.u64 = ctx.r11.u64 | 32768;
	// b 0x83ab3218
	goto loc_83AB3218;
loc_83AB31F4:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83ab3210
	if (cr0.eq) goto loc_83AB3210;
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r31,r11,16384
	ctx.r31.u64 = ctx.r11.u64 | 16384;
	// b 0x83ab3218
	goto loc_83AB3218;
loc_83AB3210:
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_83AB3218:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83ab3234
	if (cr6.eq) goto loc_83AB3234;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83ab3238
	goto loc_83AB3238;
loc_83AB3234:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83AB3238:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83ab1de8
	ctx.lr = 0x83AB3254;
	sub_83AB1DE8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f2,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab22a0
	ctx.lr = 0x83AB327C;
	sub_83AB22A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB3284"))) PPC_WEAK_FUNC(sub_83AB3284);
PPC_FUNC_IMPL(__imp__sub_83AB3284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB3288"))) PPC_WEAK_FUNC(sub_83AB3288);
PPC_FUNC_IMPL(__imp__sub_83AB3288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,396
	ctx.r8.s64 = 396;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x83ab0510
	ctx.lr = 0x83AB32BC;
	sub_83AB0510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ab32e4
	if (cr6.eq) goto loc_83AB32E4;
loc_83AB32D0:
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x83ab32d0
	if (!cr0.eq) goto loc_83AB32D0;
loc_83AB32E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ab28d8
	ctx.lr = 0x83AB32EC;
	sub_83AB28D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83aaf2a8
	ctx.lr = 0x83AB32FC;
	sub_83AAF2A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ab05b8
	ctx.lr = 0x83AB3304;
	sub_83AB05B8(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
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

__attribute__((alias("__imp__sub_83AB3320"))) PPC_WEAK_FUNC(sub_83AB3320);
PPC_FUNC_IMPL(__imp__sub_83AB3320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83AB3328;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce754
	ctx.lr = 0x83AB3330;
	__savefpr_19(ctx, base);
	// stwu r1,-1072(r1)
	ea = -1072 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r7,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r7.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r4,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r4.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r6,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r6.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r8,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r8.u32);
	// stw r9,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r9.u32);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// stw r10,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r10.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// bne cr6,0x83ab3398
	if (!cr6.eq) goto loc_83AB3398;
	// bl 0x83a81a78
	ctx.lr = 0x83AB3388;
	sub_83A81A78(ctx, base);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x83ab33bc
	goto loc_83AB33BC;
loc_83AB3398:
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9bd48
	ctx.lr = 0x83AB33A4;
	sub_83A9BD48(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 3;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
loc_83AB33BC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83AB33C0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// stwx r22,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r22.u32);
	// blt cr6,0x83ab33c0
	if (cr6.lt) goto loc_83AB33C0;
	// subfic r11,r23,0
	xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r23.s64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// and r20,r11,r30
	ctx.r20.u64 = ctx.r11.u64 & ctx.r30.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f25,26152(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26152);
	ctx.f25.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r5,-32204
	ctx.r5.s64 = -2110521344;
	// lfs f26,20048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20048);
	ctx.f26.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f20,-23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f20.f64 = double(temp.f32);
	// lfs f22,-23848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23848);
	ctx.f22.f64 = double(temp.f32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lfs f27,11412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11412);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// lfs f21,-32648(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32648);
	ctx.f21.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lfs f30,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// lfs f28,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// lis r29,-32204
	ctx.r29.s64 = -2110521344;
	// lfs f23,16948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16948);
	ctx.f23.f64 = double(temp.f32);
	// addi r7,r9,-32736
	ctx.r7.s64 = ctx.r9.s64 + -32736;
	// lfs f24,-32652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32652);
	ctx.f24.f64 = double(temp.f32);
	// addi r6,r29,-32748
	ctx.r6.s64 = ctx.r29.s64 + -32748;
	// lfs f29,8976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8976);
	ctx.f29.f64 = double(temp.f32);
	// lis r4,-32204
	ctx.r4.s64 = -2110521344;
	// lfs f31,-29844(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29844);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-32204
	ctx.r3.s64 = -2110521344;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lis r30,-32205
	ctx.r30.s64 = -2110586880;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r8,-32205
	ctx.r8.s64 = -2110586880;
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// lis r5,-32205
	ctx.r5.s64 = -2110586880;
	// addi r4,r4,-32756
	ctx.r4.s64 = ctx.r4.s64 + -32756;
	// addi r3,r3,-32764
	ctx.r3.s64 = ctx.r3.s64 + -32764;
	// addi r30,r30,32764
	ctx.r30.s64 = ctx.r30.s64 + 32764;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r19,r11,32724
	ctx.r19.s64 = ctx.r11.s64 + 32724;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r18,r10,32640
	ctx.r18.s64 = ctx.r10.s64 + 32640;
	// addi r17,r8,32628
	ctx.r17.s64 = ctx.r8.s64 + 32628;
	// addi r16,r7,32620
	ctx.r16.s64 = ctx.r7.s64 + 32620;
	// addi r15,r6,32612
	ctx.r15.s64 = ctx.r6.s64 + 32612;
	// addi r14,r5,32604
	ctx.r14.s64 = ctx.r5.s64 + 32604;
	// b 0x83ab34c4
	goto loc_83AB34C4;
loc_83AB34B8:
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r28,1116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1116);
loc_83AB34C4:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r27,2
	ctx.r27.s64 = 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r29,1148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r30,-1(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,4051
	cr6.compare<int32_t>(ctx.r11.s32, 4051, xer);
	// bgt cr6,0x83ab51ec
	if (cr6.gt) goto loc_83AB51EC;
	// cmpwi cr6,r11,4051
	cr6.compare<int32_t>(ctx.r11.s32, 4051, xer);
	// beq cr6,0x83ab51c8
	if (cr6.eq) goto loc_83AB51C8;
	// cmplwi cr6,r11,121
	cr6.compare<uint32_t>(ctx.r11.u32, 121, xer);
	// bgt cr6,0x83ab51f4
	if (cr6.gt) goto loc_83AB51F4;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,32360
	ctx.r12.s64 = ctx.r12.s64 + 32360;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-31829
	ctx.r12.s64 = -2085945344;
	// addi r12,r12,13620
	ctx.r12.s64 = ctx.r12.s64 + 13620;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83AB3534;
	case 1:
		goto loc_83AB51F4;
	case 2:
		goto loc_83AB353C;
	case 3:
		goto loc_83AB51F4;
	case 4:
		goto loc_83AB3578;
	case 5:
		goto loc_83AB36EC;
	case 6:
		goto loc_83AB51F4;
	case 7:
		goto loc_83AB51F4;
	case 8:
		goto loc_83AB371C;
	case 9:
		goto loc_83AB37B4;
	case 10:
		goto loc_83AB3808;
	case 11:
		goto loc_83AB3854;
	case 12:
		goto loc_83AB3888;
	case 13:
		goto loc_83AB51F4;
	case 14:
		goto loc_83AB392C;
	case 15:
		goto loc_83AB51F4;
	case 16:
		goto loc_83AB39FC;
	case 17:
		goto loc_83AB51F4;
	case 18:
		goto loc_83AB3A24;
	case 19:
		goto loc_83AB3A24;
	case 20:
		goto loc_83AB51F4;
	case 21:
		goto loc_83AB51F4;
	case 22:
		goto loc_83AB51F4;
	case 23:
		goto loc_83AB3B7C;
	case 24:
		goto loc_83AB3BA4;
	case 25:
		goto loc_83AB3BCC;
	case 26:
		goto loc_83AB3BF4;
	case 27:
		goto loc_83AB3C1C;
	case 28:
		goto loc_83AB3C44;
	case 29:
		goto loc_83AB3C6C;
	case 30:
		goto loc_83AB3C94;
	case 31:
		goto loc_83AB3CBC;
	case 32:
		goto loc_83AB3E98;
	case 33:
		goto loc_83AB3F08;
	case 34:
		goto loc_83AB3F64;
	case 35:
		goto loc_83AB51F4;
	case 36:
		goto loc_83AB3F9C;
	case 37:
		goto loc_83AB4008;
	case 38:
		goto loc_83AB4030;
	case 39:
		goto loc_83AB409C;
	case 40:
		goto loc_83AB40C4;
	case 41:
		goto loc_83AB51F4;
	case 42:
		goto loc_83AB51F4;
	case 43:
		goto loc_83AB4130;
	case 44:
		goto loc_83AB41CC;
	case 45:
		goto loc_83AB4210;
	case 46:
		goto loc_83AB4210;
	case 47:
		goto loc_83AB423C;
	case 48:
		goto loc_83AB423C;
	case 49:
		goto loc_83AB4268;
	case 50:
		goto loc_83AB4268;
	case 51:
		goto loc_83AB4294;
	case 52:
		goto loc_83AB4294;
	case 53:
		goto loc_83AB42C0;
	case 54:
		goto loc_83AB42C0;
	case 55:
		goto loc_83AB42EC;
	case 56:
		goto loc_83AB42EC;
	case 57:
		goto loc_83AB4318;
	case 58:
		goto loc_83AB4318;
	case 59:
		goto loc_83AB35C0;
	case 60:
		goto loc_83AB3760;
	case 61:
		goto loc_83AB38D0;
	case 62:
		goto loc_83AB3954;
	case 63:
		goto loc_83AB399C;
	case 64:
		goto loc_83AB3D78;
	case 65:
		goto loc_83AB4344;
	case 66:
		goto loc_83AB45A0;
	case 67:
		goto loc_83AB45C8;
	case 68:
		goto loc_83AB4650;
	case 69:
		goto loc_83AB468C;
	case 70:
		goto loc_83AB4694;
	case 71:
		goto loc_83AB46B0;
	case 72:
		goto loc_83AB4714;
	case 73:
		goto loc_83AB4744;
	case 74:
		goto loc_83AB47F0;
	case 75:
		goto loc_83AB4818;
	case 76:
		goto loc_83AB3A84;
	case 77:
		goto loc_83AB3A84;
	case 78:
		goto loc_83AB484C;
	case 79:
		goto loc_83AB4744;
	case 80:
		goto loc_83AB4700;
	case 81:
		goto loc_83AB472C;
	case 82:
		goto loc_83AB4878;
	case 83:
		goto loc_83AB3B00;
	case 84:
		goto loc_83AB3B00;
	case 85:
		goto loc_83AB3B40;
	case 86:
		goto loc_83AB3B40;
	case 87:
		goto loc_83AB362C;
	case 88:
		goto loc_83AB3660;
	case 89:
		goto loc_83AB3690;
	case 90:
		goto loc_83AB4890;
	case 91:
		goto loc_83AB48B8;
	case 92:
		goto loc_83AB48E4;
	case 93:
		goto loc_83AB49EC;
	case 94:
		goto loc_83AB4A08;
	case 95:
		goto loc_83AB4B00;
	case 96:
		goto loc_83AB4B28;
	case 97:
		goto loc_83AB4B50;
	case 98:
		goto loc_83AB4B78;
	case 99:
		goto loc_83AB4924;
	case 100:
		goto loc_83AB4964;
	case 101:
		goto loc_83AB4C58;
	case 102:
		goto loc_83AB4C94;
	case 103:
		goto loc_83AB4CD0;
	case 104:
		goto loc_83AB5228;
	case 105:
		goto loc_83AB4CE8;
	case 106:
		goto loc_83AB5228;
	case 107:
		goto loc_83AB5228;
	case 108:
		goto loc_83AB4D14;
	case 109:
		goto loc_83AB4D40;
	case 110:
		goto loc_83AB4D58;
	case 111:
		goto loc_83AB4D70;
	case 112:
		goto loc_83AB5228;
	case 113:
		goto loc_83AB4DD8;
	case 114:
		goto loc_83AB4F00;
	case 115:
		goto loc_83AB4F34;
	case 116:
		goto loc_83AB500C;
	case 117:
		goto loc_83AB5024;
	case 118:
		goto loc_83AB5050;
	case 119:
		goto loc_83AB5060;
	case 120:
		goto loc_83AB5084;
	case 121:
		goto loc_83AB51A0;
	default:
		return;
	}
loc_83AB3534:
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB353C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r11.u64);
	// lfd f0,424(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
loc_83AB3560:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_83AB356C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB3574;
	sub_83AB1EF0(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB3578:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,784(r1)
	PPC_STORE_U64(ctx.r1.u32 + 784, ctx.r11.u64);
	// lfd f0,784(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 784);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_83AB35A4:
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
loc_83AB35AC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x83ab0280
	ctx.lr = 0x83AB35B8;
	sub_83AB0280(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB35C0:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// std r10,800(r1)
	PPC_STORE_U64(ctx.r1.u32 + 800, ctx.r10.u64);
	// lfd f0,800(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 800);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r11,728(r1)
	PPC_STORE_U64(ctx.r1.u32 + 728, ctx.r11.u64);
	// lfd f13,728(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_83AB3618:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// ble cr6,0x83ab35ac
	if (!cr6.gt) goto loc_83AB35AC;
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// b 0x83ab35ac
	goto loc_83AB35AC;
loc_83AB362C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
loc_83AB3650:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB3660:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,520(r1)
	PPC_STORE_U64(ctx.r1.u32 + 520, ctx.r11.u64);
	// lfd f0,520(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// b 0x83ab35a4
	goto loc_83AB35A4;
loc_83AB3690:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,664(r1)
	PPC_STORE_U64(ctx.r1.u32 + 664, ctx.r11.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfd f0,664(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// b 0x83ab3618
	goto loc_83AB3618;
loc_83AB36EC:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r11.u64);
	// lfd f0,264(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
loc_83AB3710:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB371C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r11.u64);
	// lfd f0,536(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
loc_83AB3748:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f3,f24
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// bl 0x83ab0280
	ctx.lr = 0x83AB3758;
	sub_83AB0280(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB3760:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// std r10,792(r1)
	PPC_STORE_U64(ctx.r1.u32 + 792, ctx.r10.u64);
	// lfd f13,792(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r11.u64);
	// lfd f0,280(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x83ab3748
	goto loc_83AB3748;
loc_83AB37B4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// lfd f0,296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f19,f0
	ctx.f19.f64 = double(float(ctx.f0.f64));
loc_83AB37E4:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83aaeee8
	ctx.lr = 0x83AB37F8;
	sub_83AAEEE8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r4,138
	ctx.r4.s64 = 138;
	// fadds f1,f0,f19
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f19.f64));
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB3808:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,552(r1)
	PPC_STORE_U64(ctx.r1.u32 + 552, ctx.r11.u64);
	// lfd f0,552(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 552);
loc_83AB3838:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f4,f21
	ctx.f4.f64 = ctx.f21.f64;
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// bl 0x83ab0280
	ctx.lr = 0x83AB384C;
	sub_83AB0280(ctx, base);
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f1.f64;
	// b 0x83ab37e4
	goto loc_83AB37E4;
loc_83AB3854:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,5
	ctx.r4.s64 = 5;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r11.u64);
	// lfd f0,312(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB3888:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,680(r1)
	PPC_STORE_U64(ctx.r1.u32 + 680, ctx.r11.u64);
	// lfd f0,680(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 680);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f26
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
loc_83AB38B8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// bl 0x83ab0280
	ctx.lr = 0x83AB38C8;
	sub_83AB0280(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB38D0:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// std r10,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r10.u64);
	// lfd f0,328(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r11,568(r1)
	PPC_STORE_U64(ctx.r1.u32 + 568, ctx.r11.u64);
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfd f13,568(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 568);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f13,f26
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// b 0x83ab38b8
	goto loc_83AB38B8;
loc_83AB392C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r11.u64);
	// lfd f0,344(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// b 0x83ab3560
	goto loc_83AB3560;
loc_83AB3954:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,744(r1)
	PPC_STORE_U64(ctx.r1.u32 + 744, ctx.r11.u64);
	// lfd f0,744(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_83AB3988:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x83ab0280
	ctx.lr = 0x83AB3994;
	sub_83AB0280(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB399C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// std r10,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r10.u64);
	// lfd f0,360(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r11,584(r1)
	PPC_STORE_U64(ctx.r1.u32 + 584, ctx.r11.u64);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfd f13,584(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 584);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f13,f31
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// b 0x83ab3988
	goto loc_83AB3988;
loc_83AB39FC:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r11.u64);
	// lfd f0,376(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// b 0x83ab3560
	goto loc_83AB3560;
loc_83AB3A24:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,696(r1)
	PPC_STORE_U64(ctx.r1.u32 + 696, ctx.r11.u64);
	// lfd f0,696(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB3A5C;
	sub_83AB1EF0(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,10
	ctx.r4.s64 = 10;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f0,392(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// b 0x83ab3560
	goto loc_83AB3560;
loc_83AB3A84:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,600(r1)
	PPC_STORE_U64(ctx.r1.u32 + 600, ctx.r11.u64);
	// lfd f0,600(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 600);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB3ABC;
	sub_83AB1EF0(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r11.u64);
	// lfd f0,408(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB3AF4;
	sub_83AB1EF0(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
loc_83AB3AF8:
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB3B00:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,776(r1)
	PPC_STORE_U64(ctx.r1.u32 + 776, ctx.r11.u64);
	// lfd f0,776(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 776);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB3B38;
	sub_83AB1EF0(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB3B40:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB3B78;
	sub_83AB1EF0(ctx, base);
	// b 0x83ab3af8
	goto loc_83AB3AF8;
loc_83AB3B7C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,155
	ctx.r4.s64 = 155;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,616(r1)
	PPC_STORE_U64(ctx.r1.u32 + 616, ctx.r11.u64);
	// lfd f0,616(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 616);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB3BA4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,156
	ctx.r4.s64 = 156;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r11.u64);
	// lfd f0,440(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB3BCC:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,157
	ctx.r4.s64 = 157;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,712(r1)
	PPC_STORE_U64(ctx.r1.u32 + 712, ctx.r11.u64);
	// lfd f0,712(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB3BF4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,158
	ctx.r4.s64 = 158;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r11.u64);
	// lfd f0,456(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB3C1C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,159
	ctx.r4.s64 = 159;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,632(r1)
	PPC_STORE_U64(ctx.r1.u32 + 632, ctx.r11.u64);
	// lfd f0,632(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB3C44:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,160
	ctx.r4.s64 = 160;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,472(r1)
	PPC_STORE_U64(ctx.r1.u32 + 472, ctx.r11.u64);
	// lfd f0,472(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB3C6C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,161
	ctx.r4.s64 = 161;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,760(r1)
	PPC_STORE_U64(ctx.r1.u32 + 760, ctx.r11.u64);
	// lfd f0,760(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB3C94:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,162
	ctx.r4.s64 = 162;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r11.u64);
	// lfd f0,488(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 488);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB3CBC:
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beq cr6,0x83ab3d70
	if (cr6.eq) goto loc_83AB3D70;
	// bl 0x83aaeb10
	ctx.lr = 0x83AB3CD0;
	sub_83AAEB10(ctx, base);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,648(r1)
	PPC_STORE_U64(ctx.r1.u32 + 648, ctx.r11.u64);
	// lfd f0,648(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83aaeb88
	ctx.lr = 0x83AB3D04;
	sub_83AAEB88(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 504, ctx.r11.u64);
	// lfd f0,504(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x83aaec28
	ctx.lr = 0x83AB3D38;
	sub_83AAEC28(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r11.u64);
	// lfd f0,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
loc_83AB3D58:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x83aaecc8
	ctx.lr = 0x83AB3D6C;
	sub_83AAECC8(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB3D70:
	// bl 0x83aad8b8
	ctx.lr = 0x83AB3D74;
	sub_83AAD8B8(ctx, base);
	// b 0x83ab5228
	goto loc_83AB5228;
loc_83AB3D78:
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beq cr6,0x83ab3d70
	if (cr6.eq) goto loc_83AB3D70;
	// bl 0x83aaeb10
	ctx.lr = 0x83AB3D8C;
	sub_83AAEB10(ctx, base);
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f13,240(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// lfd f0,224(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83ab0280
	ctx.lr = 0x83AB3DF8;
	sub_83AB0280(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83aaeb88
	ctx.lr = 0x83AB3E00;
	sub_83AAEB88(ctx, base);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// fmr f4,f22
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f22.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r11,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r11.u64);
	// lfd f0,256(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r10,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r10.u64);
	// lfd f13,272(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x83ab0280
	ctx.lr = 0x83AB3E6C;
	sub_83AB0280(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83aaec28
	ctx.lr = 0x83AB3E74;
	sub_83AAEC28(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r11.u64);
	// lfd f0,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// b 0x83ab3d58
	goto loc_83AB3D58;
loc_83AB3E98:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r11.u64);
	// lfd f0,304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x83ab3d70
	if (cr6.lt) goto loc_83AB3D70;
	// bl 0x83aaea70
	ctx.lr = 0x83AB3ED0;
	sub_83AAEA70(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r11.u64);
	// lfd f0,320(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83aae9d0
	ctx.lr = 0x83AB3F04;
	sub_83AAE9D0(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB3F08:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r5,-1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x83ab3f38
	if (cr0.eq) goto loc_83AB3F38;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab3f2c
	if (cr6.eq) goto loc_83AB3F2C;
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lbz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 116);
	// b 0x83ab3f30
	goto loc_83AB3F30;
loc_83AB3F2C:
	// lwz r11,1124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1124);
loc_83AB3F30:
	// slw r30,r25,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x83ab3f3c
	goto loc_83AB3F3C;
loc_83AB3F38:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83AB3F3C:
	// li r4,171
	ctx.r4.s64 = 171;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB3F48;
	sub_83AB1EE8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ab3f58
	if (cr6.eq) goto loc_83AB3F58;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x83ab3f5c
	goto loc_83AB3F5C;
loc_83AB3F58:
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
loc_83AB3F5C:
	// li r4,172
	ctx.r4.s64 = 172;
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB3F64:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r4,139
	ctx.r4.s64 = 139;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,4(r23)
	PPC_STORE_U8(ctx.r23.u32 + 4, ctx.r10.u8);
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB3F98;
	sub_83AB1EE8(ctx, base);
	// b 0x83ab5228
	goto loc_83AB5228;
loc_83AB3F9C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r11.u64);
	// lfd f0,336(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB3FD0;
	sub_83AB1EF0(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// li r4,120
	ctx.r4.s64 = 120;
	// lbz r5,-1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB3FF0;
	sub_83AB1EE8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,121
	ctx.r4.s64 = 121;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// std r11,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r11.u64);
	// lfd f0,352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB4008:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,122
	ctx.r4.s64 = 122;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// lfd f0,368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// b 0x83ab3710
	goto loc_83AB3710;
loc_83AB4030:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r11.u64);
	// lfd f0,384(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB4064;
	sub_83AB1EF0(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// li r4,124
	ctx.r4.s64 = 124;
	// lbz r5,-1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB4084;
	sub_83AB1EE8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,125
	ctx.r4.s64 = 125;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// std r11,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r11.u64);
	// lfd f0,400(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB409C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,126
	ctx.r4.s64 = 126;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// lfd f0,416(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// b 0x83ab3560
	goto loc_83AB3560;
loc_83AB40C4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r11.u64);
	// lfd f0,432(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB40F8;
	sub_83AB1EF0(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// li r4,128
	ctx.r4.s64 = 128;
	// lbz r5,-1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB4118;
	sub_83AB1EE8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,129
	ctx.r4.s64 = 129;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// std r11,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r11.u64);
	// lfd f0,448(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB4130:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// lbz r30,-1(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f4,f20
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f20.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f20
	ctx.f2.f64 = ctx.f20.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83ab0280
	ctx.lr = 0x83AB4158;
	sub_83AB0280(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83ab5230
	if (cr6.gt) goto loc_83AB5230;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lwz r11,26604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab41c0
	if (cr6.eq) goto loc_83AB41C0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831ea798
	ctx.lr = 0x83AB4190;
	sub_831EA798(ctx, base);
	// lwz r3,64(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83aa3ce8
	ctx.lr = 0x83AB41A4;
	sub_83AA3CE8(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r10,26604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26604);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,26608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26608);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83AB41C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AB41C0:
	// stb r22,110(r23)
	PPC_STORE_U8(ctx.r23.u32 + 110, ctx.r22.u8);
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
	// b 0x83ab52e8
	goto loc_83AB52E8;
loc_83AB41CC:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x83a8cf30
	ctx.lr = 0x83AB41D4;
	sub_83A8CF30(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r11.u64);
	// lfd f0,464(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
loc_83AB41F4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83AB41F8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x83aad7a0
	ctx.lr = 0x83AB420C;
	sub_83AAD7A0(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4210:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x83a8cf30
	ctx.lr = 0x83AB4218;
	sub_83A8CF30(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r11.u64);
	// lfd f0,480(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 480);
	// b 0x83ab41f4
	goto loc_83AB41F4;
loc_83AB423C:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x83a8cf30
	ctx.lr = 0x83AB4244;
	sub_83A8CF30(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,496(r1)
	PPC_STORE_U64(ctx.r1.u32 + 496, ctx.r11.u64);
	// lfd f0,496(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 496);
	// b 0x83ab41f4
	goto loc_83AB41F4;
loc_83AB4268:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x83a8cf30
	ctx.lr = 0x83AB4270;
	sub_83A8CF30(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,512(r1)
	PPC_STORE_U64(ctx.r1.u32 + 512, ctx.r11.u64);
	// lfd f0,512(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 512);
	// b 0x83ab41f4
	goto loc_83AB41F4;
loc_83AB4294:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83a8cf30
	ctx.lr = 0x83AB429C;
	sub_83A8CF30(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,528(r1)
	PPC_STORE_U64(ctx.r1.u32 + 528, ctx.r11.u64);
	// lfd f0,528(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// b 0x83ab41f4
	goto loc_83AB41F4;
loc_83AB42C0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83a8cf30
	ctx.lr = 0x83AB42C8;
	sub_83A8CF30(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r11.u64);
	// lfd f0,544(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 544);
	// b 0x83ab41f4
	goto loc_83AB41F4;
loc_83AB42EC:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83a8cf30
	ctx.lr = 0x83AB42F4;
	sub_83A8CF30(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,560(r1)
	PPC_STORE_U64(ctx.r1.u32 + 560, ctx.r11.u64);
	// lfd f0,560(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// b 0x83ab41f4
	goto loc_83AB41F4;
loc_83AB4318:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83a8cf30
	ctx.lr = 0x83AB4320;
	sub_83A8CF30(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,576(r1)
	PPC_STORE_U64(ctx.r1.u32 + 576, ctx.r11.u64);
	// lfd f0,576(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 576);
	// b 0x83ab41f4
	goto loc_83AB41F4;
loc_83AB4344:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lbz r11,110(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 110);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab4398
	if (cr0.eq) goto loc_83AB4398;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83ab4394
	if (cr6.eq) goto loc_83AB4394;
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r11,102(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 102);
	// sth r22,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r22.u16);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// lbz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bl 0x83abec58
	ctx.lr = 0x83AB438C;
	sub_83ABEC58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab41c0
	if (cr0.eq) goto loc_83AB41C0;
loc_83AB4394:
	// stb r22,110(r23)
	PPC_STORE_U8(ctx.r23.u32 + 110, ctx.r22.u8);
loc_83AB4398:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83aafae0
	ctx.lr = 0x83AB43A8;
	sub_83AAFAE0(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9c728
	ctx.lr = 0x83AB43B4;
	sub_83A9C728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x83ab5228
	if (cr0.gt) goto loc_83AB5228;
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9ce00
	ctx.lr = 0x83AB43C8;
	sub_83A9CE00(ctx, base);
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// lwz r26,76(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x83ab43f8
	if (cr6.eq) goto loc_83AB43F8;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x83ab43fc
	if (!cr6.eq) goto loc_83AB43FC;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x83a9c860
	ctx.lr = 0x83AB43F0;
	sub_83A9C860(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab43fc
	if (cr0.eq) goto loc_83AB43FC;
loc_83AB43F8:
	// ori r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 | 1;
loc_83AB43FC:
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lbz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab441c
	if (cr0.eq) goto loc_83AB441C;
	// bl 0x83a903d8
	ctx.lr = 0x83AB4410;
	sub_83A903D8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 & ctx.r25.u64;
loc_83AB441C:
	// rlwinm. r28,r30,30,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFF;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// beq 0x83ab4584
	if (cr0.eq) goto loc_83AB4584;
loc_83AB4428:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r8,-1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bl 0x83a8d380
	ctx.lr = 0x83AB4458;
	sub_83A8D380(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83ab4570
	if (cr6.eq) goto loc_83AB4570;
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab4498
	if (cr6.eq) goto loc_83AB4498;
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83ab4498
	if (!cr6.lt) goto loc_83AB4498;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x831ea3f0
	ctx.lr = 0x83AB4494;
	sub_831EA3F0(ctx, base);
	// b 0x83ab4570
	goto loc_83AB4570;
loc_83AB4498:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a90e48
	ctx.lr = 0x83AB44A4;
	sub_83A90E48(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83aafa70
	ctx.lr = 0x83AB44B8;
	sub_83AAFA70(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83ab4570
	if (!cr6.eq) goto loc_83AB4570;
	// lwz r6,64(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lwz r11,76(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x83ab44e4
	if (!cr0.eq) goto loc_83AB44E4;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a87538
	ctx.lr = 0x83AB44E4;
	sub_83A87538(ctx, base);
loc_83AB44E4:
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// rlwinm r10,r29,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FFFE;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// sthx r30,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u16);
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// beq cr6,0x83ab456c
	if (cr6.eq) goto loc_83AB456C;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83ab4560
	if (!cr0.eq) goto loc_83AB4560;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x83ab4540
	if (cr6.eq) goto loc_83AB4540;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83815cb0
	ctx.lr = 0x83AB4524;
	sub_83815CB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab4540
	if (cr0.eq) goto loc_83AB4540;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,64(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83ab7c08
	ctx.lr = 0x83AB453C;
	sub_83AB7C08(ctx, base);
	// b 0x83ab454c
	goto loc_83AB454C;
loc_83AB4540:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// bl 0x83a89ad0
	ctx.lr = 0x83AB454C;
	sub_83A89AD0(ctx, base);
loc_83AB454C:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab4570
	if (!cr0.eq) goto loc_83AB4570;
loc_83AB4554:
	// lwz r11,1148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x83ab52e8
	goto loc_83AB52E8;
loc_83AB4560:
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x83ab4570
	goto loc_83AB4570;
loc_83AB456C:
	// stb r22,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r22.u8);
loc_83AB4570:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x83ab4428
	if (cr6.lt) goto loc_83AB4428;
loc_83AB4584:
	// lwz r3,64(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// bl 0x83a89128
	ctx.lr = 0x83AB458C;
	sub_83A89128(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83ab5230
	if (!cr6.eq) goto loc_83AB5230;
	// lwz r11,1148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB45A0:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,92
	ctx.r4.s64 = 92;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,592(r1)
	PPC_STORE_U64(ctx.r1.u32 + 592, ctx.r11.u64);
	// lfd f0,592(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 592);
	// b 0x83ab3560
	goto loc_83AB3560;
loc_83AB45C8:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// std r10,624(r1)
	PPC_STORE_U64(ctx.r1.u32 + 624, ctx.r10.u64);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,608(r1)
	PPC_STORE_U64(ctx.r1.u32 + 608, ctx.r11.u64);
	// lfd f0,608(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 608);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,624(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 624);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f0,f27
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x83ab04c0
	ctx.lr = 0x83AB4634;
	sub_83AB04C0(ctx, base);
	// li r4,83
	ctx.r4.s64 = 83;
	// lfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB4644;
	sub_83AB1EF0(ctx, base);
	// lfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// li r4,84
	ctx.r4.s64 = 84;
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB4650:
	// li r4,86
	ctx.r4.s64 = 86;
loc_83AB4654:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r8,-1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83ab356c
	goto loc_83AB356C;
loc_83AB468C:
	// li r4,87
	ctx.r4.s64 = 87;
	// b 0x83ab4654
	goto loc_83AB4654;
loc_83AB4694:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r5,-1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB46A8;
	sub_83AB1EE8(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB46B0:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// std r10,640(r1)
	PPC_STORE_U64(ctx.r1.u32 + 640, ctx.r10.u64);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,656(r1)
	PPC_STORE_U64(ctx.r1.u32 + 656, ctx.r11.u64);
	// lfd f0,640(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 640);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lfd f0,656(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 656);
	// b 0x83ab3838
	goto loc_83AB3838;
loc_83AB4700:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// beq cr6,0x83ab4714
	if (cr6.eq) goto loc_83AB4714;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
loc_83AB4714:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB472C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4744:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r5,79
	cr6.compare<uint32_t>(ctx.r5.u32, 79, xer);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// bne cr6,0x83ab4790
	if (!cr6.eq) goto loc_83AB4790;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_83AB4790:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab47d4
	if (cr6.eq) goto loc_83AB47D4;
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83ab47d4
	if (!cr6.lt) goto loc_83AB47D4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB47C4;
	sub_831EA3F0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r22,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r22.u16);
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB47D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83abec58
	ctx.lr = 0x83AB47E4;
	sub_83ABEC58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab41c0
	if (cr0.eq) goto loc_83AB41C0;
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB47F0:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,88
	ctx.r4.s64 = 88;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,672(r1)
	PPC_STORE_U64(ctx.r1.u32 + 672, ctx.r11.u64);
	// lfd f0,672(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 672);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB4818:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// li r4,89
	ctx.r4.s64 = 89;
loc_83AB4840:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB4848;
	sub_83AB1EE8(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB484C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// li r4,90
	ctx.r4.s64 = 90;
	// b 0x83ab4840
	goto loc_83AB4840;
loc_83AB4878:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r5,-1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83ab5230
	if (cr0.eq) goto loc_83AB5230;
	// li r4,141
	ctx.r4.s64 = 141;
	// b 0x83ab4840
	goto loc_83AB4840;
loc_83AB4890:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,154
	ctx.r4.s64 = 154;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,688(r1)
	PPC_STORE_U64(ctx.r1.u32 + 688, ctx.r11.u64);
	// lfd f0,688(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 688);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB48B8:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// addi r4,r23,104
	ctx.r4.s64 = ctx.r23.s64 + 104;
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a8fef0
	ctx.lr = 0x83AB48E0;
	sub_83A8FEF0(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB48E4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83ac6758
	ctx.lr = 0x83AB4914;
	sub_83AC6758(ctx, base);
	// addi r4,r23,104
	ctx.r4.s64 = ctx.r23.s64 + 104;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x83a8ff98
	ctx.lr = 0x83AB4920;
	sub_83A8FF98(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4924:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83ac6758
	ctx.lr = 0x83AB4954;
	sub_83AC6758(ctx, base);
	// addi r4,r23,136
	ctx.r4.s64 = ctx.r23.s64 + 136;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x83a8ce40
	ctx.lr = 0x83AB4960;
	sub_83A8CE40(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4964:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r8,-1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 | ctx.r8.u64;
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// rlwinm r4,r30,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// bl 0x83ac6758
	ctx.lr = 0x83AB49AC;
	sub_83AC6758(ctx, base);
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// bl 0x83ac6758
	ctx.lr = 0x83AB49C0;
	sub_83AC6758(ctx, base);
	// addi r6,r1,110
	ctx.r6.s64 = ctx.r1.s64 + 110;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x83a8cc50
	ctx.lr = 0x83AB49D4;
	sub_83A8CC50(ctx, base);
	// lhz r4,110(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwimi r4,r11,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x83aadd90
	ctx.lr = 0x83AB49E8;
	sub_83AADD90(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB49EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r10,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4A08:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// or r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 | ctx.r7.u64;
	// beq cr6,0x83ab4af8
	if (cr6.eq) goto loc_83AB4AF8;
	// bl 0x83aa4f98
	ctx.lr = 0x83AB4A58;
	sub_83AA4F98(ctx, base);
	// stw r30,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r30.u32);
	// sth r29,6(r23)
	PPC_STORE_U16(ctx.r23.u32 + 6, ctx.r29.u16);
	// rldicl r8,r3,16,48
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// rldicl r6,r3,24,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 24) & 0xFFFFFF;
	// rldicl r30,r3,32,32
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// rldicl r29,r3,40,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u64, 40) & 0xFFFFFFFFFF;
	// rldicl r28,r3,48,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u64, 48) & 0xFFFFFFFFFFFF;
	// rldicl r27,r3,8,56
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFF;
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r7,7(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldicl r9,r3,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// std r11,112(r23)
	PPC_STORE_U64(ctx.r23.u32 + 112, ctx.r11.u64);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// stb r8,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
	// stb r6,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r6.u8);
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// stb r28,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
loc_83AB4AF4:
	// stb r3,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r3.u8);
loc_83AB4AF8:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4B00:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,147
	ctx.r4.s64 = 147;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,704(r1)
	PPC_STORE_U64(ctx.r1.u32 + 704, ctx.r11.u64);
	// lfd f0,704(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 704);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB4B28:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,148
	ctx.r4.s64 = 148;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,720(r1)
	PPC_STORE_U64(ctx.r1.u32 + 720, ctx.r11.u64);
	// lfd f0,720(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 720);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB4B50:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,149
	ctx.r4.s64 = 149;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,736(r1)
	PPC_STORE_U64(ctx.r1.u32 + 736, ctx.r11.u64);
	// lfd f0,736(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 736);
	// b 0x83ab3650
	goto loc_83AB3650;
loc_83AB4B78:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// bl 0x83ab6ad8
	ctx.lr = 0x83AB4B84;
	sub_83AB6AD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83ab4554
	if (cr0.eq) goto loc_83AB4554;
	// bl 0x83ab6b90
	ctx.lr = 0x83AB4B90;
	sub_83AB6B90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab5228
	if (cr0.eq) goto loc_83AB5228;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab4c2c
	if (!cr6.eq) goto loc_83AB4C2C;
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x83ab4c38
	goto loc_83AB4C38;
loc_83AB4C2C:
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_83AB4C38:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r3.u32);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
loc_83AB4C4C:
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// stw r29,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r29.u32);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4C58:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,124(r23)
	PPC_STORE_U16(ctx.r23.u32 + 124, ctx.r10.u16);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,126(r23)
	PPC_STORE_U16(ctx.r23.u32 + 126, ctx.r11.u16);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4C94:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,128(r23)
	PPC_STORE_U16(ctx.r23.u32 + 128, ctx.r10.u16);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,130(r23)
	PPC_STORE_U16(ctx.r23.u32 + 130, ctx.r11.u16);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4CD0:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,123(r23)
	PPC_STORE_U8(ctx.r23.u32 + 123, ctx.r11.u8);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4CE8:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// beq 0x83ab4d0c
	if (cr0.eq) goto loc_83AB4D0C;
	// stb r27,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r27.u8);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4D0C:
	// stb r22,120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 120, ctx.r22.u8);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4D14:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83ab5230
	if (cr6.eq) goto loc_83AB5230;
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x83ab4840
	goto loc_83AB4840;
loc_83AB4D40:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,108(r23)
	PPC_STORE_U8(ctx.r23.u32 + 108, ctx.r11.u8);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4D58:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,109(r23)
	PPC_STORE_U8(ctx.r23.u32 + 109, ctx.r11.u8);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4D70:
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ac6758
	ctx.lr = 0x83AB4DA0;
	sub_83AC6758(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x83a8cf30
	ctx.lr = 0x83AB4DA8;
	sub_83A8CF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83ab5230
	if (cr0.eq) goto loc_83AB5230;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,752(r1)
	PPC_STORE_U64(ctx.r1.u32 + 752, ctx.r11.u64);
	// lfd f0,752(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 752);
	// b 0x83ab41f8
	goto loc_83AB41F8;
loc_83AB4DD8:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab5228
	if (!cr6.eq) goto loc_83AB5228;
	// bl 0x83ab6ad8
	ctx.lr = 0x83AB4DF4;
	sub_83AB6AD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83ab4554
	if (cr0.eq) goto loc_83AB4554;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// clrlwi. r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// beq 0x83ab4c4c
	if (cr0.eq) goto loc_83AB4C4C;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_83AB4E38:
	// bl 0x83ab6b90
	ctx.lr = 0x83AB4E3C;
	sub_83AB6B90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83ab4ed4
	if (cr0.eq) goto loc_83AB4ED4;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r3,56(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a99970
	ctx.lr = 0x83AB4E5C;
	sub_83A99970(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stb r11,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r11.u8);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab4ea8
	if (!cr6.eq) goto loc_83AB4EA8;
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// b 0x83ab4eb4
	goto loc_83AB4EB4;
loc_83AB4EA8:
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83AB4EB4:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// bne cr6,0x83ab4ed8
	if (!cr6.eq) goto loc_83AB4ED8;
	// stw r30,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r30.u32);
	// b 0x83ab4ed8
	goto loc_83AB4ED8;
loc_83AB4ED4:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_83AB4ED8:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x83ab4e38
	if (cr6.lt) goto loc_83AB4E38;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x83ab4c4c
	if (!cr6.eq) goto loc_83AB4C4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab7200
	ctx.lr = 0x83AB4EFC;
	sub_83AB7200(ctx, base);
	// b 0x83ab4554
	goto loc_83AB4554;
loc_83AB4F00:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r10,122(r11)
	PPC_STORE_U8(ctx.r11.u32 + 122, ctx.r10.u8);
	// lwz r11,64(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lbz r10,122(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 122);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83ab5230
	if (cr0.eq) goto loc_83AB5230;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x83aae588
	ctx.lr = 0x83AB4F30;
	sub_83AAE588(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB4F34:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// lwz r3,228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab4f58
	if (!cr6.eq) goto loc_83AB4F58;
	// bl 0x83ab6b90
	ctx.lr = 0x83AB4F50;
	sub_83AB6B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
loc_83AB4F58:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r22,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r22.u8);
	// stb r22,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r22.u8);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r22,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r22.u32);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r3,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r3.u32);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB500C:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,111(r23)
	PPC_STORE_U8(ctx.r23.u32 + 111, ctx.r11.u8);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB5024:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83ab5230
	if (!cr6.eq) goto loc_83AB5230;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,146
	ctx.r4.s64 = 146;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB504C;
	sub_83AB1EE8(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB5050:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB5060:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lwz r9,36(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 232, ctx.r11.u32);
	// addi r31,r10,-2
	ctx.r31.s64 = ctx.r10.s64 + -2;
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB5084:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5168
	if (cr6.eq) goto loc_83AB5168;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rldicr r11,r11,8,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r6,-2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r4,7(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 | ctx.r4.u64;
	// bl 0x83aa4f98
	ctx.lr = 0x83AB5100;
	sub_83AA4F98(ctx, base);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(ctx.r30.u64, 0, xer);
	// beq cr6,0x83ab511c
	if (cr6.eq) goto loc_83AB511C;
	// clrldi r11,r29,48
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFF;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mulli r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 * 1000;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// blt cr6,0x83ab4554
	if (cr6.lt) goto loc_83AB4554;
loc_83AB511C:
	// lwz r11,1148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83ab4af8
	if (!cr6.eq) goto loc_83AB4AF8;
	// rldicl r11,r3,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFF;
	// rldicl r10,r3,24,40
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 24) & 0xFFFFFF;
	// rldicl r9,r3,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// rldicl r8,r3,40,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 40) & 0xFFFFFFFFFF;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// rldicl r7,r3,48,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 48) & 0xFFFFFFFFFFFF;
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// rldicl r6,r3,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// rldicl r5,r3,8,56
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFF;
	// stb r7,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// stb r6,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r6.u8);
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// b 0x83ab4af4
	goto loc_83AB4AF4;
loc_83AB5168:
	// lwz r11,1132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83ab5228
	if (!cr6.eq) goto loc_83AB5228;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83ab5198
	if (cr6.eq) goto loc_83AB5198;
	// lbz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r10.u16);
loc_83AB5198:
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB51A0:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,768(r1)
	PPC_STORE_U64(ctx.r1.u32 + 768, ctx.r11.u64);
	// lfd f0,768(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 768);
	// b 0x83ab3710
	goto loc_83AB3710;
loc_83AB51C8:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// sth r22,272(r11)
	PPC_STORE_U16(ctx.r11.u32 + 272, ctx.r22.u16);
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stb r25,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r25.u8);
	// b 0x83ab5228
	goto loc_83AB5228;
loc_83AB51EC:
	// cmpwi cr6,r11,4052
	cr6.compare<int32_t>(ctx.r11.s32, 4052, xer);
	// beq cr6,0x83ab520c
	if (cr6.eq) goto loc_83AB520C;
loc_83AB51F4:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831ea400
	ctx.lr = 0x83AB5208;
	sub_831EA400(ctx, base);
	// b 0x83ab5230
	goto loc_83AB5230;
loc_83AB520C:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab5228
	if (cr6.eq) goto loc_83AB5228;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stb r27,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r27.u8);
loc_83AB5228:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_83AB5230:
	// lwz r11,1100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab34b8
	if (!cr6.eq) goto loc_83AB34B8;
	// lwz r11,1132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ab52b0
	if (cr6.eq) goto loc_83AB52B0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83ab52e8
	if (!cr6.eq) goto loc_83AB52E8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab52e8
	if (!cr6.eq) goto loc_83AB52E8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83ab52e8
	if (cr6.eq) goto loc_83AB52E8;
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// lis r10,288
	ctx.r10.s64 = 18874368;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83ab52e8
	if (!cr6.lt) goto loc_83AB52E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ee8
	ctx.lr = 0x83AB52AC;
	sub_83AB1EE8(ctx, base);
	// b 0x83ab52e8
	goto loc_83AB52E8;
loc_83AB52B0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab52cc
	if (!cr6.eq) goto loc_83AB52CC;
	// li r4,11
	ctx.r4.s64 = 11;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB52CC;
	sub_83AB1EF0(ctx, base);
loc_83AB52CC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab52e8
	if (!cr6.eq) goto loc_83AB52E8;
	// li r4,12
	ctx.r4.s64 = 12;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83ab1ef0
	ctx.lr = 0x83AB52E8;
	sub_83AB1EF0(ctx, base);
loc_83AB52E8:
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7a0
	ctx.lr = 0x83AB52F4;
	__restfpr_19(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB52F8"))) PPC_WEAK_FUNC(sub_83AB52F8);
PPC_FUNC_IMPL(__imp__sub_83AB52F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83AB5300;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lfs f29,8976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f29.f64 = double(temp.f32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f30,11412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11412);
	ctx.f30.f64 = double(temp.f32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lfs f31,-29844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29844);
	ctx.f31.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r22,r6,24
	ctx.r22.s64 = ctx.r6.s64 + 24;
loc_83AB5348:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,75
	cr6.compare<int32_t>(ctx.r11.s32, 75, xer);
	// bgt cr6,0x83ab5570
	if (cr6.gt) goto loc_83AB5570;
	// cmpwi cr6,r11,75
	cr6.compare<int32_t>(ctx.r11.s32, 75, xer);
	// beq cr6,0x83ab5554
	if (cr6.eq) goto loc_83AB5554;
	// cmpwi cr6,r11,68
	cr6.compare<int32_t>(ctx.r11.s32, 68, xer);
	// bgt cr6,0x83ab54c4
	if (cr6.gt) goto loc_83AB54C4;
	// beq cr6,0x83ab5488
	if (cr6.eq) goto loc_83AB5488;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ab56e0
	if (cr6.eq) goto loc_83AB56E0;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x83ab5478
	if (cr6.eq) goto loc_83AB5478;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// beq cr6,0x83ab5418
	if (cr6.eq) goto loc_83AB5418;
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// bne cr6,0x83ab5674
	if (!cr6.eq) goto loc_83AB5674;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bl 0x83ab04c0
	ctx.lr = 0x83AB5414;
	sub_83AB04C0(ctx, base);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5418:
	// rlwinm. r29,r9,30,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFF;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x83ab56e4
	if (cr0.eq) goto loc_83AB56E4;
loc_83AB5424:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r8,-1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bl 0x83a8d380
	ctx.lr = 0x83AB5454;
	sub_83A8D380(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83ab5464
	if (cr6.eq) goto loc_83AB5464;
	// sth r3,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r3.u16);
loc_83AB5464:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x83ab5424
	if (cr6.lt) goto loc_83AB5424;
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5478:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r11.u8);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5488:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r8,-1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB54C4:
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// beq cr6,0x83ab5518
	if (cr6.eq) goto loc_83AB5518;
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// beq cr6,0x83ab55b8
	if (cr6.eq) goto loc_83AB55B8;
	// cmpwi cr6,r11,73
	cr6.compare<int32_t>(ctx.r11.s32, 73, xer);
	// beq cr6,0x83ab55d0
	if (cr6.eq) goto loc_83AB55D0;
	// cmpwi cr6,r11,74
	cr6.compare<int32_t>(ctx.r11.s32, 74, xer);
	// bne cr6,0x83ab5674
	if (!cr6.eq) goto loc_83AB5674;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,28(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5518:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// lbz r10,-3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r8,-1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5554:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,32(r28)
	PPC_STORE_U16(ctx.r28.u32 + 32, ctx.r11.u16);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5570:
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(ctx.r11.s32, 91, xer);
	// bgt cr6,0x83ab565c
	if (cr6.gt) goto loc_83AB565C;
	// beq cr6,0x83ab5634
	if (cr6.eq) goto loc_83AB5634;
	// cmpwi cr6,r11,78
	cr6.compare<int32_t>(ctx.r11.s32, 78, xer);
	// beq cr6,0x83ab5618
	if (cr6.eq) goto loc_83AB5618;
	// cmpwi cr6,r11,79
	cr6.compare<int32_t>(ctx.r11.s32, 79, xer);
	// beq cr6,0x83ab55d0
	if (cr6.eq) goto loc_83AB55D0;
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(ctx.r11.s32, 80, xer);
	// beq cr6,0x83ab55ac
	if (cr6.eq) goto loc_83AB55AC;
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(ctx.r11.s32, 81, xer);
	// bne cr6,0x83ab5674
	if (!cr6.eq) goto loc_83AB5674;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,6(r28)
	PPC_STORE_U8(ctx.r28.u32 + 6, ctx.r11.u8);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB55AC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,6(r28)
	PPC_STORE_U8(ctx.r28.u32 + 6, ctx.r11.u8);
loc_83AB55B8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,5(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r11,5(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5, ctx.r11.u8);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB55D0:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,79
	cr6.compare<uint32_t>(ctx.r10.u32, 79, xer);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// bne cr6,0x83ab56e4
	if (!cr6.eq) goto loc_83AB56E4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r11.u8);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5618:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,34(r28)
	PPC_STORE_U16(ctx.r28.u32 + 34, ctx.r11.u16);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5634:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r4,r26,92
	ctx.r4.s64 = ctx.r26.s64 + 92;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83a8fd20
	ctx.lr = 0x83AB5658;
	sub_83A8FD20(ctx, base);
	// b 0x83ab56dc
	goto loc_83AB56DC;
loc_83AB565C:
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// beq cr6,0x83ab56ac
	if (cr6.eq) goto loc_83AB56AC;
	// cmpwi cr6,r11,108
	cr6.compare<int32_t>(ctx.r11.s32, 108, xer);
	// beq cr6,0x83ab5690
	if (cr6.eq) goto loc_83AB5690;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(ctx.r11.s32, 114, xer);
	// beq cr6,0x83ab5680
	if (cr6.eq) goto loc_83AB5680;
loc_83AB5674:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5680:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r11,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r11.u8);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB5690:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,36(r28)
	PPC_STORE_U16(ctx.r28.u32 + 36, ctx.r11.u16);
	// b 0x83ab56e4
	goto loc_83AB56E4;
loc_83AB56AC:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r23,1792
	ctx.r3.s64 = ctx.r23.s64 + 1792;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83ac6758
	ctx.lr = 0x83AB56D0;
	sub_83AC6758(ctx, base);
	// addi r4,r26,92
	ctx.r4.s64 = ctx.r26.s64 + 92;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83a8fe38
	ctx.lr = 0x83AB56DC;
	sub_83A8FE38(ctx, base);
loc_83AB56DC:
	// li r25,1
	ctx.r25.s64 = 1;
loc_83AB56E0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_83AB56E4:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83ab5348
	if (!cr6.eq) goto loc_83AB5348;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB5720"))) PPC_WEAK_FUNC(sub_83AB5720);
PPC_FUNC_IMPL(__imp__sub_83AB5720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,115
	ctx.r10.s64 = ctx.r10.s64 + 115;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB5744"))) PPC_WEAK_FUNC(sub_83AB5744);
PPC_FUNC_IMPL(__imp__sub_83AB5744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5748"))) PPC_WEAK_FUNC(sub_83AB5748);
PPC_FUNC_IMPL(__imp__sub_83AB5748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AB5750;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r11,29420
	ctx.r30.s64 = ctx.r11.s64 + 29420;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab58f0
	if (!cr6.eq) goto loc_83AB58F0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab579c
	if (!cr6.eq) goto loc_83AB579C;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_83AB579C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,115
	ctx.r10.s64 = ctx.r10.s64 + 115;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm. r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x83ab590c
	if (!cr0.gt) goto loc_83AB590C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83ab57e8
	if (!cr6.eq) goto loc_83AB57E8;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83ab58c8
	if (!cr6.eq) goto loc_83AB58C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a82d10
	ctx.lr = 0x83AB57D8;
	sub_83A82D10(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// beq 0x83ab58c8
	if (cr0.eq) goto loc_83AB58C8;
loc_83AB57E8:
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, xer);
	// blt cr6,0x83ab58c8
	if (cr6.lt) goto loc_83AB58C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,111
	ctx.r11.s64 = ctx.r11.s64 + 111;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x831ea7a0
	ctx.lr = 0x83AB5824;
	sub_831EA7A0(ctx, base);
	// addi r11,r28,7
	ctx.r11.s64 = ctx.r28.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x83ab58b0
	if (!cr0.gt) goto loc_83AB58B0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_83AB5848:
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r26,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83ab5868
	if (!cr6.eq) goto loc_83AB5868;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x83ab5874
	goto loc_83AB5874;
loc_83AB5868:
	// stw r26,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83AB5874:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r26,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r26.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x83ab5848
	if (cr6.lt) goto loc_83AB5848;
loc_83AB58B0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x83ab590c
	goto loc_83AB590C;
loc_83AB58C8:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-32564
	ctx.r4.s64 = ctx.r11.s64 + -32564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AB58DC;
	sub_831EA418(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83ab590c
	if (cr6.eq) goto loc_83AB590C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83AB58EC;
	sub_83A82D38(ctx, base);
	// b 0x83ab590c
	goto loc_83AB590C;
loc_83AB58F0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r9,-32640
	ctx.r4.s64 = ctx.r9.s64 + -32640;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bl 0x831ea3f0
	ctx.lr = 0x83AB590C;
	sub_831EA3F0(ctx, base);
loc_83AB590C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB5914"))) PPC_WEAK_FUNC(sub_83AB5914);
PPC_FUNC_IMPL(__imp__sub_83AB5914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5918"))) PPC_WEAK_FUNC(sub_83AB5918);
PPC_FUNC_IMPL(__imp__sub_83AB5918) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29440
	ctx.r31.s64 = ctx.r11.s64 + 29440;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab5998
	if (cr6.eq) goto loc_83AB5998;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83ab598c
	if (!cr6.eq) goto loc_83AB598C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83ab5970
	if (cr6.eq) goto loc_83AB5970;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-32456
	ctx.r4.s64 = ctx.r11.s64 + -32456;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB5970;
	sub_831EA3F0(ctx, base);
loc_83AB5970:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ab5980
	if (cr6.eq) goto loc_83AB5980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83AB5980;
	sub_83A82D38(ctx, base);
loc_83AB5980:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// b 0x83ab59a8
	goto loc_83AB59A8;
loc_83AB598C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x83ab59a8
	goto loc_83AB59A8;
loc_83AB5998:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32552
	ctx.r4.s64 = ctx.r11.s64 + -32552;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB59A8;
	sub_831EA3F0(ctx, base);
loc_83AB59A8:
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

__attribute__((alias("__imp__sub_83AB59C0"))) PPC_WEAK_FUNC(sub_83AB59C0);
PPC_FUNC_IMPL(__imp__sub_83AB59C0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r7,r11,29420
	ctx.r7.s64 = ctx.r11.s64 + 29420;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ab5a48
	if (cr6.eq) goto loc_83AB5A48;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bne cr6,0x83ab5a00
	if (!cr6.eq) goto loc_83AB5A00;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83AB5A00:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// beq cr6,0x83ab5a48
	if (cr6.eq) goto loc_83AB5A48;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83ab0510
	ctx.lr = 0x83AB5A3C;
	sub_83AB0510(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83ab5a5c
	goto loc_83AB5A5C;
loc_83AB5A48:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-32376
	ctx.r4.s64 = ctx.r11.s64 + -32376;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB5A58;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB5A5C:
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

__attribute__((alias("__imp__sub_83AB5A70"))) PPC_WEAK_FUNC(sub_83AB5A70);
PPC_FUNC_IMPL(__imp__sub_83AB5A70) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83ab05b8
	ctx.lr = 0x83AB5A8C;
	sub_83AB05B8(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r11,29436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29436);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83ab5ab0
	if (!cr6.eq) goto loc_83AB5AB0;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// b 0x83ab5ab4
	goto loc_83AB5AB4;
loc_83AB5AB0:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83AB5AB4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83AB5AD8"))) PPC_WEAK_FUNC(sub_83AB5AD8);
PPC_FUNC_IMPL(__imp__sub_83AB5AD8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab5b20
	if (!cr6.eq) goto loc_83AB5B20;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,16948(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16948);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_83AB5B20:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83a82f90
	ctx.lr = 0x83AB5B30;
	sub_83A82F90(ctx, base);
	// addi r10,r31,18
	ctx.r10.s64 = ctx.r31.s64 + 18;
	// mulli r11,r30,436
	ctx.r11.s64 = ctx.r30.s64 * 436;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_83AB5B5C"))) PPC_WEAK_FUNC(sub_83AB5B5C);
PPC_FUNC_IMPL(__imp__sub_83AB5B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5B60"))) PPC_WEAK_FUNC(sub_83AB5B60);
PPC_FUNC_IMPL(__imp__sub_83AB5B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AB5B68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,-32216
	ctx.r10.s64 = ctx.r10.s64 + -32216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,29444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29444, ctx.r10.u32);
	// addi r27,r11,29444
	ctx.r27.s64 = ctx.r11.s64 + 29444;
	// bl 0x83ab5ad8
	ctx.lr = 0x83AB5B8C;
	sub_83AB5AD8(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 1;
	// bl 0x831ea7a0
	ctx.lr = 0x83AB5BA4;
	sub_831EA7A0(ctx, base);
	// bl 0x83a82cd8
	ctx.lr = 0x83AB5BA8;
	sub_83A82CD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab5be0
	if (!cr0.eq) goto loc_83AB5BE0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83a82f90
	ctx.lr = 0x83AB5BB8;
	sub_83A82F90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a83408
	ctx.lr = 0x83AB5BD0;
	sub_83A83408(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// b 0x83ab5bf0
	goto loc_83AB5BF0;
loc_83AB5BE0:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-32112
	ctx.r4.s64 = ctx.r11.s64 + -32112;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB5BF0;
	sub_831EA3F0(ctx, base);
loc_83AB5BF0:
	// bl 0x83aa4e20
	ctx.lr = 0x83AB5BF4;
	sub_83AA4E20(ctx, base);
	// addi r10,r29,7
	ctx.r10.s64 = ctx.r29.s64 + 7;
	// mulli r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 * 52;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// rlwinm r28,r10,0,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ad2d38
	ctx.lr = 0x83AB5C14;
	sub_83AD2D38(ctx, base);
	// mulli r11,r25,104
	ctx.r11.s64 = ctx.r25.s64 * 104;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83ad2360
	ctx.lr = 0x83AB5C30;
	sub_83AD2360(ctx, base);
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aa3428
	ctx.lr = 0x83AB5C4C;
	sub_83AA3428(ctx, base);
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// mulli r11,r31,252
	ctx.r11.s64 = ctx.r31.s64 * 252;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r28,r29
	ctx.r5.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83aca5f8
	ctx.lr = 0x83AB5C6C;
	sub_83ACA5F8(ctx, base);
	// bl 0x83acd488
	ctx.lr = 0x83AB5C70;
	sub_83ACD488(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// bl 0x83aca720
	ctx.lr = 0x83AB5C80;
	sub_83ACA720(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB5C88"))) PPC_WEAK_FUNC(sub_83AB5C88);
PPC_FUNC_IMPL(__imp__sub_83AB5C88) {
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
	// bl 0x83ace2e0
	ctx.lr = 0x83AB5C9C;
	sub_83ACE2E0(ctx, base);
	// bl 0x83aca6b8
	ctx.lr = 0x83AB5CA0;
	sub_83ACA6B8(ctx, base);
	// bl 0x83aa36a0
	ctx.lr = 0x83AB5CA4;
	sub_83AA36A0(ctx, base);
	// bl 0x83ad2860
	ctx.lr = 0x83AB5CA8;
	sub_83AD2860(ctx, base);
	// bl 0x83ad2f58
	ctx.lr = 0x83AB5CAC;
	sub_83AD2F58(ctx, base);
	// bl 0x83aa4e90
	ctx.lr = 0x83AB5CB0;
	sub_83AA4E90(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29448
	ctx.r31.s64 = ctx.r11.s64 + 29448;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ab5cd0
	if (cr6.eq) goto loc_83AB5CD0;
	// bl 0x83a83088
	ctx.lr = 0x83AB5CC8;
	sub_83A83088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AB5CD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83AB5CEC"))) PPC_WEAK_FUNC(sub_83AB5CEC);
PPC_FUNC_IMPL(__imp__sub_83AB5CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5CF0"))) PPC_WEAK_FUNC(sub_83AB5CF0);
PPC_FUNC_IMPL(__imp__sub_83AB5CF0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r11,29448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29448);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab5d24
	if (!cr6.eq) goto loc_83AB5D24;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32056
	ctx.r4.s64 = ctx.r11.s64 + -32056;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB5D1C;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab5d28
	goto loc_83AB5D28;
loc_83AB5D24:
	// bl 0x83aca790
	ctx.lr = 0x83AB5D28;
	sub_83ACA790(ctx, base);
loc_83AB5D28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB5D38"))) PPC_WEAK_FUNC(sub_83AB5D38);
PPC_FUNC_IMPL(__imp__sub_83AB5D38) {
	PPC_FUNC_PROLOGUE();
	// b 0x83ace2d8
	sub_83ACE2D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB5D3C"))) PPC_WEAK_FUNC(sub_83AB5D3C);
PPC_FUNC_IMPL(__imp__sub_83AB5D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5D40"))) PPC_WEAK_FUNC(sub_83AB5D40);
PPC_FUNC_IMPL(__imp__sub_83AB5D40) {
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
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x83ab04d0
	ctx.lr = 0x83AB5D5C;
	sub_83AB04D0(ctx, base);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83a9c8d0
	ctx.lr = 0x83AB5D68;
	sub_83A9C8D0(ctx, base);
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

__attribute__((alias("__imp__sub_83AB5D7C"))) PPC_WEAK_FUNC(sub_83AB5D7C);
PPC_FUNC_IMPL(__imp__sub_83AB5D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5D80"))) PPC_WEAK_FUNC(sub_83AB5D80);
PPC_FUNC_IMPL(__imp__sub_83AB5D80) {
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
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x83ab04d0
	ctx.lr = 0x83AB5D9C;
	sub_83AB04D0(ctx, base);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83a9c8d0
	ctx.lr = 0x83AB5DA8;
	sub_83A9C8D0(ctx, base);
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

__attribute__((alias("__imp__sub_83AB5DBC"))) PPC_WEAK_FUNC(sub_83AB5DBC);
PPC_FUNC_IMPL(__imp__sub_83AB5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5DC0"))) PPC_WEAK_FUNC(sub_83AB5DC0);
PPC_FUNC_IMPL(__imp__sub_83AB5DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x83a9eef8
	ctx.lr = 0x83AB5DD4;
	sub_83A9EEF8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB5DF0"))) PPC_WEAK_FUNC(sub_83AB5DF0);
PPC_FUNC_IMPL(__imp__sub_83AB5DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83a9d810
	sub_83A9D810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB5DFC"))) PPC_WEAK_FUNC(sub_83AB5DFC);
PPC_FUNC_IMPL(__imp__sub_83AB5DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5E00"))) PPC_WEAK_FUNC(sub_83AB5E00);
PPC_FUNC_IMPL(__imp__sub_83AB5E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x83a9d720
	sub_83A9D720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB5E0C"))) PPC_WEAK_FUNC(sub_83AB5E0C);
PPC_FUNC_IMPL(__imp__sub_83AB5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5E10"))) PPC_WEAK_FUNC(sub_83AB5E10);
PPC_FUNC_IMPL(__imp__sub_83AB5E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x83a9eef8
	ctx.lr = 0x83AB5E24;
	sub_83A9EEF8(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB5E40"))) PPC_WEAK_FUNC(sub_83AB5E40);
PPC_FUNC_IMPL(__imp__sub_83AB5E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// b 0x83ab8190
	sub_83AB8190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB5E48"))) PPC_WEAK_FUNC(sub_83AB5E48);
PPC_FUNC_IMPL(__imp__sub_83AB5E48) {
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
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x83ab81b0
	ctx.lr = 0x83AB5E5C;
	sub_83AB81B0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ab5e74
	if (cr6.eq) goto loc_83AB5E74;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83ab5e78
	if (!cr6.eq) goto loc_83AB5E78;
loc_83AB5E74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83AB5E78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB5E88"))) PPC_WEAK_FUNC(sub_83AB5E88);
PPC_FUNC_IMPL(__imp__sub_83AB5E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x83ab81b0
	ctx.lr = 0x83AB5E9C;
	sub_83AB81B0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB5EBC"))) PPC_WEAK_FUNC(sub_83AB5EBC);
PPC_FUNC_IMPL(__imp__sub_83AB5EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5EC0"))) PPC_WEAK_FUNC(sub_83AB5EC0);
PPC_FUNC_IMPL(__imp__sub_83AB5EC0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab5ee8
	if (!cr6.eq) goto loc_83AB5EE8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-31856
	ctx.r4.s64 = ctx.r11.s64 + -31856;
	// bl 0x831ea418
	ctx.lr = 0x83AB5EE4;
	sub_831EA418(ctx, base);
	// b 0x83ab5f00
	goto loc_83AB5F00;
loc_83AB5EE8:
	// bl 0x83a9c860
	ctx.lr = 0x83AB5EEC;
	sub_83A9C860(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ab5f04
	if (!cr0.eq) goto loc_83AB5F04;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-31916
	ctx.r4.s64 = ctx.r11.s64 + -31916;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB5F00;
	sub_831EA3F0(ctx, base);
loc_83AB5F00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB5F04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB5F14"))) PPC_WEAK_FUNC(sub_83AB5F14);
PPC_FUNC_IMPL(__imp__sub_83AB5F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5F18"))) PPC_WEAK_FUNC(sub_83AB5F18);
PPC_FUNC_IMPL(__imp__sub_83AB5F18) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29456
	ctx.r11.s64 = ctx.r11.s64 + 29456;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ab5f9c
	if (cr6.eq) goto loc_83AB5F9C;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 & ctx.r7.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r11,500
	ctx.r11.s64 = 500;
	// stw r6,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// stw r6,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r6.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r6,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r6.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
loc_83AB5F8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83AB5F9C:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31840
	ctx.r4.s64 = ctx.r11.s64 + -31840;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB5FAC;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab5f8c
	goto loc_83AB5F8C;
}

__attribute__((alias("__imp__sub_83AB5FB4"))) PPC_WEAK_FUNC(sub_83AB5FB4);
PPC_FUNC_IMPL(__imp__sub_83AB5FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB5FB8"))) PPC_WEAK_FUNC(sub_83AB5FB8);
PPC_FUNC_IMPL(__imp__sub_83AB5FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r3,160
	ctx.r10.s64 = ctx.r3.s64 + 160;
	// addi r11,r11,29456
	ctx.r11.s64 = ctx.r11.s64 + 29456;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83ab5fdc
	if (!cr6.eq) goto loc_83AB5FDC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x83ab5fe8
	goto loc_83AB5FE8;
loc_83AB5FDC:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r8.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_83AB5FE8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB5FF8"))) PPC_WEAK_FUNC(sub_83AB5FF8);
PPC_FUNC_IMPL(__imp__sub_83AB5FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AB6000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,156(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r30.u32);
	// bl 0x83a82480
	ctx.lr = 0x83AB6018;
	sub_83A82480(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab602c
	if (cr6.eq) goto loc_83AB602C;
	// bl 0x83ab82b8
	ctx.lr = 0x83AB6028;
	sub_83AB82B8(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
loc_83AB602C:
	// bl 0x83a824c0
	ctx.lr = 0x83AB6030;
	sub_83A824C0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83ab6040
	if (cr6.eq) goto loc_83AB6040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83AB6040;
	sub_83A82D38(ctx, base);
loc_83AB6040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB6048"))) PPC_WEAK_FUNC(sub_83AB6048);
PPC_FUNC_IMPL(__imp__sub_83AB6048) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab607c
	if (!cr6.eq) goto loc_83AB607C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-31652
	ctx.r4.s64 = ctx.r11.s64 + -31652;
	// bl 0x831ea418
	ctx.lr = 0x83AB6078;
	sub_831EA418(ctx, base);
	// b 0x83ab60f8
	goto loc_83AB60F8;
loc_83AB607C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9c860
	ctx.lr = 0x83AB6084;
	sub_83A9C860(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83ab60a0
	if (!cr0.eq) goto loc_83AB60A0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-31688
	ctx.r4.s64 = ctx.r11.s64 + -31688;
loc_83AB6094:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB609C;
	sub_831EA3F0(ctx, base);
	// b 0x83ab60f8
	goto loc_83AB60F8;
loc_83AB60A0:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83ab60b8
	if (!cr6.eq) goto loc_83AB60B8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-31748
	ctx.r4.s64 = ctx.r11.s64 + -31748;
	// b 0x83ab6094
	goto loc_83AB6094;
loc_83AB60B8:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9e468
	ctx.lr = 0x83AB60C4;
	sub_83A9E468(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9c818
	ctx.lr = 0x83AB60D4;
	sub_83A9C818(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9c7e8
	ctx.lr = 0x83AB60E4;
	sub_83A9C7E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a9c858
	ctx.lr = 0x83AB60F0;
	sub_83A9C858(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ab5ff8
	ctx.lr = 0x83AB60F8;
	sub_83AB5FF8(ctx, base);
loc_83AB60F8:
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

__attribute__((alias("__imp__sub_83AB6110"))) PPC_WEAK_FUNC(sub_83AB6110);
PPC_FUNC_IMPL(__imp__sub_83AB6110) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,120(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83ab81b0
	ctx.lr = 0x83AB613C;
	sub_83AB81B0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ab6150
	if (cr6.eq) goto loc_83AB6150;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83ab6164
	if (!cr6.eq) goto loc_83AB6164;
loc_83AB6150:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8168
	ctx.lr = 0x83AB6158;
	sub_83AB8168(ctx, base);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83a9d720
	ctx.lr = 0x83AB6164;
	sub_83A9D720(ctx, base);
loc_83AB6164:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab81f0
	ctx.lr = 0x83AB616C;
	sub_83AB81F0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x831ea7a0
	ctx.lr = 0x83AB6188;
	sub_831EA7A0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31829
	ctx.r10.s64 = -2085945344;
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r9,-31829
	ctx.r9.s64 = -2085945344;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r10,r10,23936
	ctx.r10.s64 = ctx.r10.s64 + 23936;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r9,r9,24064
	ctx.r9.s64 = ctx.r9.s64 + 24064;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,-31829
	ctx.r7.s64 = -2085945344;
	// lis r6,-31829
	ctx.r6.s64 = -2085945344;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,-31829
	ctx.r8.s64 = -2085945344;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r11,-31829
	ctx.r11.s64 = -2085945344;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r8,r8,24080
	ctx.r8.s64 = ctx.r8.s64 + 24080;
	// addi r10,r7,23872
	ctx.r10.s64 = ctx.r7.s64 + 23872;
	// addi r9,r6,24000
	ctx.r9.s64 = ctx.r6.s64 + 24000;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r11,r11,24048
	ctx.r11.s64 = ctx.r11.s64 + 24048;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x83ab8040
	ctx.lr = 0x83AB61F4;
	sub_83AB8040(ctx, base);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8218
	ctx.lr = 0x83AB6200;
	sub_83AB8218(ctx, base);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab81f8
	ctx.lr = 0x83AB620C;
	sub_83AB81F8(ctx, base);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8248
	ctx.lr = 0x83AB6218;
	sub_83AB8248(ctx, base);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8288
	ctx.lr = 0x83AB6224;
	sub_83AB8288(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ab623c
	if (!cr6.gt) goto loc_83AB623C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83ab6240
	goto loc_83AB6240;
loc_83AB623C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_83AB6240:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x83ab04d0
	ctx.lr = 0x83AB6248;
	sub_83AB04D0(ctx, base);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83a9c8d0
	ctx.lr = 0x83AB6254;
	sub_83A9C8D0(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83ab04d0
	ctx.lr = 0x83AB6260;
	sub_83AB04D0(ctx, base);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83a9c8d0
	ctx.lr = 0x83AB626C;
	sub_83A9C8D0(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab80b0
	ctx.lr = 0x83AB6274;
	sub_83AB80B0(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83a9ce40
	ctx.lr = 0x83AB627C;
	sub_83A9CE40(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_83AB629C"))) PPC_WEAK_FUNC(sub_83AB629C);
PPC_FUNC_IMPL(__imp__sub_83AB629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB62A0"))) PPC_WEAK_FUNC(sub_83AB62A0);
PPC_FUNC_IMPL(__imp__sub_83AB62A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8190
	ctx.lr = 0x83AB62C4;
	sub_83AB8190(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab81b0
	ctx.lr = 0x83AB62CC;
	sub_83AB81B0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ab62e0
	if (cr6.eq) goto loc_83AB62E0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83ab62f4
	if (!cr6.eq) goto loc_83AB62F4;
loc_83AB62E0:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8168
	ctx.lr = 0x83AB62E8;
	sub_83AB8168(ctx, base);
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x83a9d720
	ctx.lr = 0x83AB62F4;
	sub_83A9D720(ctx, base);
loc_83AB62F4:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83a9eef8
	ctx.lr = 0x83AB62FC;
	sub_83A9EEF8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83ab63f0
	if (cr6.eq) goto loc_83AB63F0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab81f0
	ctx.lr = 0x83AB630C;
	sub_83AB81F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83ab6330
	if (cr6.gt) goto loc_83AB6330;
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83a9d720
	ctx.lr = 0x83AB632C;
	sub_83A9D720(ctx, base);
	// b 0x83ab63f0
	goto loc_83AB63F0;
loc_83AB6330:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x831ea7a0
	ctx.lr = 0x83AB634C;
	sub_831EA7A0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31829
	ctx.r10.s64 = -2085945344;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r9,-31829
	ctx.r9.s64 = -2085945344;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r10,r10,23936
	ctx.r10.s64 = ctx.r10.s64 + 23936;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r9,r9,24064
	ctx.r9.s64 = ctx.r9.s64 + 24064;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-31829
	ctx.r7.s64 = -2085945344;
	// lis r6,-31829
	ctx.r6.s64 = -2085945344;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,-31829
	ctx.r8.s64 = -2085945344;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r11,-31829
	ctx.r11.s64 = -2085945344;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r8,r8,24080
	ctx.r8.s64 = ctx.r8.s64 + 24080;
	// addi r10,r7,23872
	ctx.r10.s64 = ctx.r7.s64 + 23872;
	// addi r9,r6,24000
	ctx.r9.s64 = ctx.r6.s64 + 24000;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r11,r11,24048
	ctx.r11.s64 = ctx.r11.s64 + 24048;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x83ab8040
	ctx.lr = 0x83AB63B8;
	sub_83AB8040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8218
	ctx.lr = 0x83AB63C4;
	sub_83AB8218(ctx, base);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab81f8
	ctx.lr = 0x83AB63D0;
	sub_83AB81F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8248
	ctx.lr = 0x83AB63DC;
	sub_83AB8248(ctx, base);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab8288
	ctx.lr = 0x83AB63E8;
	sub_83AB8288(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83ab80b0
	ctx.lr = 0x83AB63F0;
	sub_83AB80B0(ctx, base);
loc_83AB63F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB6408"))) PPC_WEAK_FUNC(sub_83AB6408);
PPC_FUNC_IMPL(__imp__sub_83AB6408) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83ab5ec0
	ctx.lr = 0x83AB6420;
	sub_83AB5EC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab642c
	if (cr0.eq) goto loc_83AB642C;
	// stw r31,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r31.u32);
loc_83AB642C:
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

__attribute__((alias("__imp__sub_83AB6440"))) PPC_WEAK_FUNC(sub_83AB6440);
PPC_FUNC_IMPL(__imp__sub_83AB6440) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83ab5ec0
	ctx.lr = 0x83AB6458;
	sub_83AB5EC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab6464
	if (cr0.eq) goto loc_83AB6464;
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r31.u32);
loc_83AB6464:
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

__attribute__((alias("__imp__sub_83AB6478"))) PPC_WEAK_FUNC(sub_83AB6478);
PPC_FUNC_IMPL(__imp__sub_83AB6478) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83ab5ec0
	ctx.lr = 0x83AB6490;
	sub_83AB5EC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab649c
	if (cr0.eq) goto loc_83AB649C;
	// stw r31,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r31.u32);
loc_83AB649C:
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

__attribute__((alias("__imp__sub_83AB64B0"))) PPC_WEAK_FUNC(sub_83AB64B0);
PPC_FUNC_IMPL(__imp__sub_83AB64B0) {
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
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab64d8
	if (!cr6.eq) goto loc_83AB64D8;
	// bl 0x83ab5f18
	ctx.lr = 0x83AB64D4;
	sub_83AB5F18(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_83AB64D8:
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

__attribute__((alias("__imp__sub_83AB64EC"))) PPC_WEAK_FUNC(sub_83AB64EC);
PPC_FUNC_IMPL(__imp__sub_83AB64EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB64F0"))) PPC_WEAK_FUNC(sub_83AB64F0);
PPC_FUNC_IMPL(__imp__sub_83AB64F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB64F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
	// addi r31,r11,29456
	ctx.r31.s64 = ctx.r11.s64 + 29456;
	// lwz r11,29468(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29468);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83ab652c
	if (cr6.eq) goto loc_83AB652C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31640
	ctx.r4.s64 = ctx.r11.s64 + -31640;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB6528;
	sub_831EA3F0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83AB652C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab6590
	if (cr6.eq) goto loc_83AB6590;
loc_83AB6540:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// subfic r11,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x83ab5ff8
	ctx.lr = 0x83AB6574;
	sub_83AB5FF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// beq cr6,0x83ab6590
	if (cr6.eq) goto loc_83AB6590;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x83ab6540
	goto loc_83AB6540;
loc_83AB6590:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r30,29468(r28)
	PPC_STORE_U32(ctx.r28.u32 + 29468, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,29472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29472, ctx.r30.u32);
	// bl 0x83ab8428
	ctx.lr = 0x83AB65A4;
	sub_83AB8428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB65AC"))) PPC_WEAK_FUNC(sub_83AB65AC);
PPC_FUNC_IMPL(__imp__sub_83AB65AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB65B0"))) PPC_WEAK_FUNC(sub_83AB65B0);
PPC_FUNC_IMPL(__imp__sub_83AB65B0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab6110
	sub_83AB6110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB65C0"))) PPC_WEAK_FUNC(sub_83AB65C0);
PPC_FUNC_IMPL(__imp__sub_83AB65C0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab62a0
	sub_83AB62A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB65CC"))) PPC_WEAK_FUNC(sub_83AB65CC);
PPC_FUNC_IMPL(__imp__sub_83AB65CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB65D0"))) PPC_WEAK_FUNC(sub_83AB65D0);
PPC_FUNC_IMPL(__imp__sub_83AB65D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB65D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab6610
	if (!cr6.eq) goto loc_83AB6610;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83ab6610
	if (!cr6.eq) goto loc_83AB6610;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x83a82d10
	ctx.lr = 0x83AB6600;
	sub_83A82D10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,180
	ctx.r30.s64 = 180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83ab6614
	goto loc_83AB6614;
loc_83AB6610:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_83AB6614:
	// bl 0x83a82480
	ctx.lr = 0x83AB6618;
	sub_83A82480(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83ab6670
	if (cr6.eq) goto loc_83AB6670;
	// cmpwi cr6,r30,180
	cr6.compare<int32_t>(ctx.r30.s32, 180, xer);
	// blt cr6,0x83ab6670
	if (cr6.lt) goto loc_83AB6670;
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x83AB6638;
	sub_831EA798(ctx, base);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r31,r11,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab8490
	ctx.lr = 0x83AB6648;
	sub_83AB8490(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab6684
	if (cr0.eq) goto loc_83AB6684;
	// li r11,500
	ctx.r11.s64 = 500;
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x83ab6688
	goto loc_83AB6688;
loc_83AB6670:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-31760
	ctx.r4.s64 = ctx.r11.s64 + -31760;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AB6684;
	sub_831EA418(ctx, base);
loc_83AB6684:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83AB6688:
	// bl 0x83a824c0
	ctx.lr = 0x83AB668C;
	sub_83A824C0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ab66ac
	if (!cr6.eq) goto loc_83AB66AC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83ab66a4
	if (cr6.eq) goto loc_83AB66A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83AB66A4;
	sub_83A82D38(ctx, base);
loc_83AB66A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab66b4
	goto loc_83AB66B4;
loc_83AB66AC:
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83AB66B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB66BC"))) PPC_WEAK_FUNC(sub_83AB66BC);
PPC_FUNC_IMPL(__imp__sub_83AB66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB66C0"))) PPC_WEAK_FUNC(sub_83AB66C0);
PPC_FUNC_IMPL(__imp__sub_83AB66C0) {
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
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9c858
	ctx.lr = 0x83AB66EC;
	sub_83A9C858(ctx, base);
	// lis r11,-31829
	ctx.r11.s64 = -2085945344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,24848
	ctx.r5.s64 = ctx.r11.s64 + 24848;
	// bl 0x83a9c7e8
	ctx.lr = 0x83AB6700;
	sub_83A9C7E8(ctx, base);
	// lis r11,-31829
	ctx.r11.s64 = -2085945344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,25248
	ctx.r5.s64 = ctx.r11.s64 + 25248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9c818
	ctx.lr = 0x83AB6714;
	sub_83A9C818(ctx, base);
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

__attribute__((alias("__imp__sub_83AB672C"))) PPC_WEAK_FUNC(sub_83AB672C);
PPC_FUNC_IMPL(__imp__sub_83AB672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB6730"))) PPC_WEAK_FUNC(sub_83AB6730);
PPC_FUNC_IMPL(__imp__sub_83AB6730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AB6738;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83ab8558
	ctx.lr = 0x83AB6748;
	sub_83AB8558(ctx, base);
	// mulli r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 * 180;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AB6758;
	sub_831EA7A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r8,r31,7
	ctx.r8.s64 = ctx.r31.s64 + 7;
	// addi r31,r11,29456
	ctx.r31.s64 = ctx.r11.s64 + 29456;
	// lis r27,-31739
	ctx.r27.s64 = -2080047104;
	// lis r7,-31739
	ctx.r7.s64 = -2080047104;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r29,r8,0,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r30,29468(r27)
	PPC_STORE_U32(ctx.r27.u32 + 29468, ctx.r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,29472(r7)
	PPC_STORE_U32(ctx.r7.u32 + 29472, ctx.r29.u32);
	// ble cr6,0x83ab681c
	if (!cr6.gt) goto loc_83AB681C;
loc_83AB67A0:
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab65d0
	ctx.lr = 0x83AB67AC;
	sub_83AB65D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab680c
	if (cr0.eq) goto loc_83AB680C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// stw r3,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r3.u32);
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r26,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r26.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x83ab67e0
	if (!cr6.eq) goto loc_83AB67E0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83ab67e8
	goto loc_83AB67E8;
loc_83AB67E0:
	// stw r26,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r26.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB67E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,29468(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29468);
	// addi r29,r29,180
	ctx.r29.s64 = ctx.r29.s64 + 180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// blt cr6,0x83ab67a0
	if (cr6.lt) goto loc_83AB67A0;
	// b 0x83ab681c
	goto loc_83AB681C;
loc_83AB680C:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31576
	ctx.r4.s64 = ctx.r11.s64 + -31576;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB681C;
	sub_831EA3F0(ctx, base);
loc_83AB681C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB6824"))) PPC_WEAK_FUNC(sub_83AB6824);
PPC_FUNC_IMPL(__imp__sub_83AB6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB6828"))) PPC_WEAK_FUNC(sub_83AB6828);
PPC_FUNC_IMPL(__imp__sub_83AB6828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AB6830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulli r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 * 160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AB684C;
	sub_831EA7A0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 7;
	// addi r11,r11,29524
	ctx.r11.s64 = ctx.r11.s64 + 29524;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r3,r10,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r5,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r5.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r5,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r5.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,29476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29476, ctx.r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,29484(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29484, ctx.r3.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83ab6910
	if (!cr6.gt) goto loc_83AB6910;
loc_83AB689C:
	// stwx r5,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r7,29484(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29484);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r7,29484(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29484);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r7,29484(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29484);
	// bne cr6,0x83ab68d0
	if (!cr6.eq) goto loc_83AB68D0;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r8,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r8.u32);
	// b 0x83ab68f0
	goto loc_83AB68F0;
loc_83AB68D0:
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r7,29484(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29484);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r7,29484(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29484);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r8,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r8.u32);
loc_83AB68F0:
	// lwz r6,29476(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29476);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// stw r4,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r4.u32);
	// cmpw cr6,r29,r6
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, xer);
	// blt cr6,0x83ab689c
	if (cr6.lt) goto loc_83AB689C;
	// stw r8,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r8.u32);
loc_83AB6910:
	// mulli r10,r6,68
	ctx.r10.s64 = ctx.r6.s64 * 68;
	// stw r5,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r5.u32);
	// stw r5,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r5.u32);
	// stw r5,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r5.u32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lis r31,-31739
	ctx.r31.s64 = -2080047104;
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// rlwinm r29,r9,0,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r30,29480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29480, ctx.r30.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r29,29488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29488, ctx.r29.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83ab69e4
	if (!cr6.gt) goto loc_83AB69E4;
	// b 0x83ab6964
	goto loc_83AB6964;
loc_83AB6960:
	// lwz r6,29488(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29488);
loc_83AB6964:
	// stwx r5,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r7,29488(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29488);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r7,29488(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29488);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// bne cr6,0x83ab6998
	if (!cr6.eq) goto loc_83AB6998;
	// lwz r8,29488(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29488);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r8.u32);
	// b 0x83ab69bc
	goto loc_83AB69BC;
loc_83AB6998:
	// lwz r7,29488(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29488);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r7,29488(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29488);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,29488(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29488);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r8.u32);
loc_83AB69BC:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// sth r7,18(r8)
	PPC_STORE_U16(ctx.r8.u32 + 18, ctx.r7.u16);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// stw r4,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r4.u32);
	// lwz r7,29480(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29480);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// blt cr6,0x83ab6960
	if (cr6.lt) goto loc_83AB6960;
	// stw r8,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r8.u32);
loc_83AB69E4:
	// mulli r10,r7,36
	ctx.r10.s64 = ctx.r7.s64 * 36;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lis r3,-31739
	ctx.r3.s64 = -2080047104;
	// addi r4,r10,7
	ctx.r4.s64 = ctx.r10.s64 + 7;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm. r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r7,r4,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,29516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 29516, ctx.r10.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r7,29520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29520, ctx.r7.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// ble 0x83ab6ab0
	if (!cr0.gt) goto loc_83AB6AB0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_83AB6A2C:
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r7,29520(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29520);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// lwz r7,29520(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29520);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// lwz r7,29520(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29520);
	// bne cr6,0x83ab6a68
	if (!cr6.eq) goto loc_83AB6A68;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x83ab6a90
	goto loc_83AB6A90;
loc_83AB6A68:
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// lwz r7,29520(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29520);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r7,29520(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29520);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_83AB6A90:
	// lwz r4,29516(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29516);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// cmpw cr6,r31,r4
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, xer);
	// blt cr6,0x83ab6a2c
	if (cr6.lt) goto loc_83AB6A2C;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_83AB6AB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB6AB8"))) PPC_WEAK_FUNC(sub_83AB6AB8);
PPC_FUNC_IMPL(__imp__sub_83AB6AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,29476(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29476);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB6AC4"))) PPC_WEAK_FUNC(sub_83AB6AC4);
PPC_FUNC_IMPL(__imp__sub_83AB6AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB6AC8"))) PPC_WEAK_FUNC(sub_83AB6AC8);
PPC_FUNC_IMPL(__imp__sub_83AB6AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29492
	ctx.r11.s64 = ctx.r11.s64 + 29492;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB6AD8"))) PPC_WEAK_FUNC(sub_83AB6AD8);
PPC_FUNC_IMPL(__imp__sub_83AB6AD8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29492
	ctx.r11.s64 = ctx.r11.s64 + 29492;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ab6b74
	if (cr6.eq) goto loc_83AB6B74;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// and r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 & ctx.r6.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stb r10,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r10.u8);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r10,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r10.u16);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
loc_83AB6B64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83AB6B74:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31464
	ctx.r4.s64 = ctx.r11.s64 + -31464;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB6B84;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab6b64
	goto loc_83AB6B64;
}

__attribute__((alias("__imp__sub_83AB6B8C"))) PPC_WEAK_FUNC(sub_83AB6B8C);
PPC_FUNC_IMPL(__imp__sub_83AB6B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB6B90"))) PPC_WEAK_FUNC(sub_83AB6B90);
PPC_FUNC_IMPL(__imp__sub_83AB6B90) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29504
	ctx.r11.s64 = ctx.r11.s64 + 29504;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ab6c14
	if (cr6.eq) goto loc_83AB6C14;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 & ctx.r7.u64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stb r6,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r6.u8);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_83AB6C04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83AB6C14:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31368
	ctx.r4.s64 = ctx.r11.s64 + -31368;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB6C24;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab6c04
	goto loc_83AB6C04;
}

__attribute__((alias("__imp__sub_83AB6C2C"))) PPC_WEAK_FUNC(sub_83AB6C2C);
PPC_FUNC_IMPL(__imp__sub_83AB6C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB6C30"))) PPC_WEAK_FUNC(sub_83AB6C30);
PPC_FUNC_IMPL(__imp__sub_83AB6C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,29504
	ctx.r11.s64 = ctx.r11.s64 + 29504;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne cr6,0x83ab6c60
	if (!cr6.eq) goto loc_83AB6C60;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x83ab6c6c
	goto loc_83AB6C6C;
loc_83AB6C60:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_83AB6C6C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB6C7C"))) PPC_WEAK_FUNC(sub_83AB6C7C);
PPC_FUNC_IMPL(__imp__sub_83AB6C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB6C80"))) PPC_WEAK_FUNC(sub_83AB6C80);
PPC_FUNC_IMPL(__imp__sub_83AB6C80) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29524
	ctx.r11.s64 = ctx.r11.s64 + 29524;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ab6d04
	if (cr6.eq) goto loc_83AB6D04;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 & ctx.r7.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
loc_83AB6CF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83AB6D04:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31248
	ctx.r4.s64 = ctx.r11.s64 + -31248;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB6D14;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab6cf4
	goto loc_83AB6CF4;
}

__attribute__((alias("__imp__sub_83AB6D1C"))) PPC_WEAK_FUNC(sub_83AB6D1C);
PPC_FUNC_IMPL(__imp__sub_83AB6D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB6D20"))) PPC_WEAK_FUNC(sub_83AB6D20);
PPC_FUNC_IMPL(__imp__sub_83AB6D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83AB6D28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83ab6e7c
	if (!cr6.gt) goto loc_83AB6E7C;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r28,r11,29524
	ctx.r28.s64 = ctx.r11.s64 + 29524;
loc_83AB6D50:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab6e6c
	if (cr6.eq) goto loc_83AB6E6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x83ab6d70
	if (!cr6.eq) goto loc_83AB6D70;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_83AB6D70:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x83ab6e6c
	if (cr6.eq) goto loc_83AB6E6C;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83ab6db4
	if (cr6.eq) goto loc_83AB6DB4;
loc_83AB6D9C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x83ab6e40
	if (!cr6.eq) goto loc_83AB6E40;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x83ab6e4c
	goto loc_83AB6E4C;
loc_83AB6DB4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ab6dcc
	if (cr6.eq) goto loc_83AB6DCC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83ab6e00
	if (cr6.eq) goto loc_83AB6E00;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x83ab6d9c
	if (!cr6.eq) goto loc_83AB6D9C;
loc_83AB6DCC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB6DD4;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab6de8
	if (cr0.eq) goto loc_83AB6DE8;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa4a78
	ctx.lr = 0x83AB6DE8;
	sub_83AA4A78(ctx, base);
loc_83AB6DE8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x83ab6e20
	if (!cr6.eq) goto loc_83AB6E20;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x83ab6e2c
	goto loc_83AB6E2C;
loc_83AB6E00:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lhz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// lhz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ab6d9c
	if (!cr6.eq) goto loc_83AB6D9C;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// b 0x83ab6de8
	goto loc_83AB6DE8;
loc_83AB6E20:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB6E2C:
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x83ab6e5c
	goto loc_83AB6E5C;
loc_83AB6E40:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB6E4C:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83AB6E5C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r26
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, xer);
	// blt cr6,0x83ab6d50
	if (cr6.lt) goto loc_83AB6D50;
	// b 0x83ab6e7c
	goto loc_83AB6E7C;
loc_83AB6E6C:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31152
	ctx.r4.s64 = ctx.r11.s64 + -31152;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB6E7C;
	sub_831EA3F0(ctx, base);
loc_83AB6E7C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// bne cr6,0x83ab6e94
	if (!cr6.eq) goto loc_83AB6E94;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x83ab6ea0
	goto loc_83AB6EA0;
loc_83AB6E94:
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB6EA0:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB6EB8"))) PPC_WEAK_FUNC(sub_83AB6EB8);
PPC_FUNC_IMPL(__imp__sub_83AB6EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AB6EC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab6fd8
	if (cr6.eq) goto loc_83AB6FD8;
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83ab6fd8
	if (!cr6.gt) goto loc_83AB6FD8;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r29,r11,29524
	ctx.r29.s64 = ctx.r11.s64 + 29524;
loc_83AB6EEC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab6fc8
	if (cr6.eq) goto loc_83AB6FC8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bne cr6,0x83ab6f0c
	if (!cr6.eq) goto loc_83AB6F0C;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
loc_83AB6F0C:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// beq cr6,0x83ab6fc8
	if (cr6.eq) goto loc_83AB6FC8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83ab6f6c
	if (cr6.eq) goto loc_83AB6F6C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x83ab6f4c
	if (!cr6.eq) goto loc_83AB6F4C;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x83ab6f58
	goto loc_83AB6F58;
loc_83AB6F4C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB6F58:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x83ab6fb8
	goto loc_83AB6FB8;
loc_83AB6F6C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB6F74;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab6f88
	if (cr0.eq) goto loc_83AB6F88;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa4a78
	ctx.lr = 0x83AB6F88;
	sub_83AA4A78(ctx, base);
loc_83AB6F88:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bne cr6,0x83ab6fa4
	if (!cr6.eq) goto loc_83AB6FA4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83ab6fac
	goto loc_83AB6FAC;
loc_83AB6FA4:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB6FAC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_83AB6FB8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// blt cr6,0x83ab6eec
	if (cr6.lt) goto loc_83AB6EEC;
	// b 0x83ab6fd8
	goto loc_83AB6FD8;
loc_83AB6FC8:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31100
	ctx.r4.s64 = ctx.r11.s64 + -31100;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB6FD8;
	sub_831EA3F0(ctx, base);
loc_83AB6FD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB6FE0"))) PPC_WEAK_FUNC(sub_83AB6FE0);
PPC_FUNC_IMPL(__imp__sub_83AB6FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AB6FE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab7100
	if (cr6.eq) goto loc_83AB7100;
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x83ab7100
	if (!cr6.gt) goto loc_83AB7100;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r29,r11,29524
	ctx.r29.s64 = ctx.r11.s64 + 29524;
loc_83AB7014:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab70f0
	if (cr6.eq) goto loc_83AB70F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bne cr6,0x83ab7034
	if (!cr6.eq) goto loc_83AB7034;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
loc_83AB7034:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// beq cr6,0x83ab70f0
	if (cr6.eq) goto loc_83AB70F0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ab7094
	if (cr6.eq) goto loc_83AB7094;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x83ab7074
	if (!cr6.eq) goto loc_83AB7074;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x83ab7080
	goto loc_83AB7080;
loc_83AB7074:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB7080:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x83ab70e0
	goto loc_83AB70E0;
loc_83AB7094:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB709C;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab70b0
	if (cr0.eq) goto loc_83AB70B0;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa4a78
	ctx.lr = 0x83AB70B0;
	sub_83AA4A78(ctx, base);
loc_83AB70B0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bne cr6,0x83ab70cc
	if (!cr6.eq) goto loc_83AB70CC;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83ab70d4
	goto loc_83AB70D4;
loc_83AB70CC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB70D4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_83AB70E0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, xer);
	// blt cr6,0x83ab7014
	if (cr6.lt) goto loc_83AB7014;
	// b 0x83ab7100
	goto loc_83AB7100;
loc_83AB70F0:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-31048
	ctx.r4.s64 = ctx.r11.s64 + -31048;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB7100;
	sub_831EA3F0(ctx, base);
loc_83AB7100:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB7108"))) PPC_WEAK_FUNC(sub_83AB7108);
PPC_FUNC_IMPL(__imp__sub_83AB7108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB711C"))) PPC_WEAK_FUNC(sub_83AB711C);
PPC_FUNC_IMPL(__imp__sub_83AB711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB7120"))) PPC_WEAK_FUNC(sub_83AB7120);
PPC_FUNC_IMPL(__imp__sub_83AB7120) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// addi r31,r11,29492
	ctx.r31.s64 = ctx.r11.s64 + 29492;
	// lwz r11,29476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 29476);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x83ab7164
	if (cr6.eq) goto loc_83AB7164;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30992
	ctx.r4.s64 = ctx.r11.s64 + -30992;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB7160;
	sub_831EA3F0(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83AB7164:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab71d4
	if (cr6.eq) goto loc_83AB71D4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r5,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// and r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83AB7198:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// beq cr6,0x83ab71d0
	if (cr6.eq) goto loc_83AB71D0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r5,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// b 0x83ab7198
	goto loc_83AB7198;
loc_83AB71D0:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83AB71D4:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// stw r7,29476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 29476, ctx.r7.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,29484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29484, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_83AB71FC"))) PPC_WEAK_FUNC(sub_83AB71FC);
PPC_FUNC_IMPL(__imp__sub_83AB71FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB7200"))) PPC_WEAK_FUNC(sub_83AB7200);
PPC_FUNC_IMPL(__imp__sub_83AB7200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB7208;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7244
	if (cr6.eq) goto loc_83AB7244;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bne cr6,0x83ab7234
	if (!cr6.eq) goto loc_83AB7234;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
loc_83AB7234:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_83AB7244:
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// addi r29,r10,29524
	ctx.r29.s64 = ctx.r10.s64 + 29524;
	// b 0x83ab7310
	goto loc_83AB7310;
loc_83AB7250:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83ab7290
	if (cr6.eq) goto loc_83AB7290;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83ab72ac
	if (!cr6.eq) goto loc_83AB72AC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB7270;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab7284
	if (cr0.eq) goto loc_83AB7284;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83aa3ef0
	ctx.lr = 0x83AB7284;
	sub_83AA3EF0(ctx, base);
loc_83AB7284:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// b 0x83ab72ac
	goto loc_83AB72AC;
loc_83AB7290:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB7298;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab72ac
	if (cr0.eq) goto loc_83AB72AC;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa4a78
	ctx.lr = 0x83AB72AC;
	sub_83AA4A78(ctx, base);
loc_83AB72AC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x83ab72c4
	if (!cr6.eq) goto loc_83AB72C4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x83ab72d0
	goto loc_83AB72D0;
loc_83AB72C4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB72D0:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7324
	if (cr6.eq) goto loc_83AB7324;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x83ab7300
	if (!cr6.eq) goto loc_83AB7300;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_83AB7300:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_83AB7310:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab7250
	if (!cr6.eq) goto loc_83AB7250;
	// b 0x83ab7324
	goto loc_83AB7324;
loc_83AB731C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ab6c30
	ctx.lr = 0x83AB7324;
	sub_83AB6C30(ctx, base);
loc_83AB7324:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab735c
	if (cr6.eq) goto loc_83AB735C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x83ab7344
	if (!cr6.eq) goto loc_83AB7344;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_83AB7344:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x83ab731c
	if (!cr6.eq) goto loc_83AB731C;
loc_83AB735C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,-28(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28, ctx.r31.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x83ab7388
	if (!cr6.eq) goto loc_83AB7388;
	// stw r31,-32(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32, ctx.r31.u32);
	// b 0x83ab7390
	goto loc_83AB7390;
loc_83AB7388:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_83AB7390:
	// lwz r11,-24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-24(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB73A4"))) PPC_WEAK_FUNC(sub_83AB73A4);
PPC_FUNC_IMPL(__imp__sub_83AB73A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB73A8"))) PPC_WEAK_FUNC(sub_83AB73A8);
PPC_FUNC_IMPL(__imp__sub_83AB73A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83AB73B0;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// blt cr6,0x83ab78ec
	if (cr6.lt) goto loc_83AB78EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f12,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x83ab74ec
	if (cr6.eq) goto loc_83AB74EC;
loc_83AB73F4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83ab7424
	if (cr6.eq) goto loc_83AB7424;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne cr6,0x83ab7414
	if (!cr6.eq) goto loc_83AB7414;
	// stw r24,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r24.u32);
loc_83AB7414:
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83AB7424:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bgt cr6,0x83ab7440
	if (cr6.gt) goto loc_83AB7440;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// ble cr6,0x83ab7480
	if (!cr6.gt) goto loc_83AB7480;
loc_83AB7440:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab7454
	if (!cr6.eq) goto loc_83AB7454;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x83ab7460
	goto loc_83AB7460;
loc_83AB7454:
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_83AB7460:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// blt cr6,0x83ab73f4
	if (cr6.lt) goto loc_83AB73F4;
	// b 0x83ab74ec
	goto loc_83AB74EC;
loc_83AB7480:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83ab7494
	if (!cr6.eq) goto loc_83AB7494;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x83ab7498
	goto loc_83AB7498;
loc_83AB7494:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83AB7498:
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fdiv f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83AB74EC:
	// lbz r11,37(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83ab7500
	if (!cr6.eq) goto loc_83AB7500;
	// lha r11,38(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 38));
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_83AB7500:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83ab7520
	if (!cr6.eq) goto loc_83AB7520;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
loc_83AB7520:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,24504(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fmuls f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f13,f31
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fdivs f29,f0,f30
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmuls f0,f29,f1
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831ce4e0
	ctx.lr = 0x83AB7584;
	sub_831CE4E0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83ab75bc
	if (cr6.eq) goto loc_83AB75BC;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x83ab75dc
	goto loc_83AB75DC;
loc_83AB75BC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83ab78ec
	if (!cr6.eq) goto loc_83AB78EC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83ab78ec
	if (cr6.eq) goto loc_83AB78EC;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83AB75DC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83ab78ec
	if (cr0.eq) goto loc_83AB78EC;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r27,r11,29524
	ctx.r27.s64 = ctx.r11.s64 + 29524;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7808
	if (cr6.eq) goto loc_83AB7808;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lis r26,-31739
	ctx.r26.s64 = -2080047104;
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
loc_83AB7610:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7640
	if (cr6.eq) goto loc_83AB7640;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x83ab7630
	if (!cr6.eq) goto loc_83AB7630;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_83AB7630:
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_83AB7640:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ab7740
	if (cr6.eq) goto loc_83AB7740;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x83ab77ac
	if (!cr6.eq) goto loc_83AB77AC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83a9e7a0
	ctx.lr = 0x83AB7660;
	sub_83A9E7A0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ab77a8
	if (cr6.eq) goto loc_83AB77A8;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83ab7690
	if (cr6.eq) goto loc_83AB7690;
loc_83AB7670:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83AB7674:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// bne cr6,0x83ab77c4
	if (!cr6.eq) goto loc_83AB77C4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x83ab77cc
	goto loc_83AB77CC;
loc_83AB7690:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB7698;
	sub_83AA3D20(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83ab7670
	if (cr0.eq) goto loc_83AB7670;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB76A8;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab7724
	if (cr0.eq) goto loc_83AB7724;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab7724
	if (cr6.eq) goto loc_83AB7724;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83ab65b0
	ctx.lr = 0x83AB76C4;
	sub_83AB65B0(ctx, base);
	// stb r24,119(r29)
	PPC_STORE_U8(ctx.r29.u32 + 119, ctx.r24.u8);
	// lwz r11,26612(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7724
	if (cr6.eq) goto loc_83AB7724;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r22,128(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea798
	ctx.lr = 0x83AB76E8;
	sub_831EA798(ctx, base);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,216(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 216);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r3,r11,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// bl 0x83a8cd50
	ctx.lr = 0x83AB7710;
	sub_83A8CD50(ctx, base);
	// lwz r11,26612(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26612);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,26616(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26616);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AB7724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AB7724:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83a9bb80
	ctx.lr = 0x83AB7730;
	sub_83A9BB80(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x83ab7674
	goto loc_83AB7674;
loc_83AB7740:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83a9e7a0
	ctx.lr = 0x83AB7748;
	sub_83A9E7A0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83ab77a8
	if (cr6.eq) goto loc_83AB77A8;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83ab7670
	if (!cr6.eq) goto loc_83AB7670;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB7760;
	sub_83AA3D20(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83ab7670
	if (cr0.eq) goto loc_83AB7670;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83ab7670
	if (cr0.eq) goto loc_83AB7670;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab7670
	if (cr6.eq) goto loc_83AB7670;
	// bl 0x83a9c860
	ctx.lr = 0x83AB7784;
	sub_83A9C860(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab7798
	if (cr0.eq) goto loc_83AB7798;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83ab65b0
	ctx.lr = 0x83AB7794;
	sub_83AB65B0(ctx, base);
	// stb r24,119(r29)
	PPC_STORE_U8(ctx.r29.u32 + 119, ctx.r24.u8);
loc_83AB7798:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83a9bb80
	ctx.lr = 0x83AB77A4;
	sub_83A9BB80(ctx, base);
	// b 0x83ab7670
	goto loc_83AB7670;
loc_83AB77A8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_83AB77AC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x83ab77dc
	if (!cr6.eq) goto loc_83AB77DC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x83ab77e8
	goto loc_83AB77E8;
loc_83AB77C4:
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB77CC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// b 0x83ab77f8
	goto loc_83AB77F8;
loc_83AB77DC:
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB77E8:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83AB77F8:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne 0x83ab7610
	if (!cr0.eq) goto loc_83AB7610;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x83ab780c
	if (!cr6.eq) goto loc_83AB780C;
loc_83AB7808:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83AB780C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83ab78ec
	if (cr6.eq) goto loc_83AB78EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab78ec
	if (cr6.eq) goto loc_83AB78EC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_83AB7824:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7854
	if (cr6.eq) goto loc_83AB7854;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x83ab7844
	if (!cr6.eq) goto loc_83AB7844;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_83AB7844:
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_83AB7854:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83ab7894
	if (cr6.eq) goto loc_83AB7894;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83ab78b0
	if (!cr6.eq) goto loc_83AB78B0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB7874;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab7888
	if (cr0.eq) goto loc_83AB7888;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83aa3ef0
	ctx.lr = 0x83AB7888;
	sub_83AA3EF0(ctx, base);
loc_83AB7888:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r24,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r24.u32);
	// b 0x83ab78b0
	goto loc_83AB78B0;
loc_83AB7894:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83aa3d20
	ctx.lr = 0x83AB789C;
	sub_83AA3D20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab78b0
	if (cr0.eq) goto loc_83AB78B0;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83aa4a78
	ctx.lr = 0x83AB78B0;
	sub_83AA4A78(ctx, base);
loc_83AB78B0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// bne cr6,0x83ab78c8
	if (!cr6.eq) goto loc_83AB78C8;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x83ab78d4
	goto loc_83AB78D4;
loc_83AB78C8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83AB78D4:
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bne 0x83ab7824
	if (!cr0.eq) goto loc_83AB7824;
loc_83AB78EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB7900"))) PPC_WEAK_FUNC(sub_83AB7900);
PPC_FUNC_IMPL(__imp__sub_83AB7900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29536
	ctx.r11.s64 = ctx.r11.s64 + 29536;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83ab7924
	if (cr6.eq) goto loc_83AB7924;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83AB7924:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB7944"))) PPC_WEAK_FUNC(sub_83AB7944);
PPC_FUNC_IMPL(__imp__sub_83AB7944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB7948"))) PPC_WEAK_FUNC(sub_83AB7948);
PPC_FUNC_IMPL(__imp__sub_83AB7948) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,29536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29536);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83ab798c
	if (cr6.gt) goto loc_83AB798C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,-30764
	ctx.r4.s64 = ctx.r11.s64 + -30764;
loc_83AB7980:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AB7988;
	sub_831EA418(ctx, base);
	// b 0x83ab7a84
	goto loc_83AB7A84;
loc_83AB798C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ab79a4
	if (!cr6.eq) goto loc_83AB79A4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30776
	ctx.r4.s64 = ctx.r11.s64 + -30776;
	// b 0x83ab7980
	goto loc_83AB7980;
loc_83AB79A4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83ab79bc
	if (!cr6.eq) goto loc_83AB79BC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30788
	ctx.r4.s64 = ctx.r11.s64 + -30788;
	// b 0x83ab7980
	goto loc_83AB7980;
loc_83AB79BC:
	// bl 0x83a82480
	ctx.lr = 0x83AB79C0;
	sub_83A82480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9bc00
	ctx.lr = 0x83AB79C8;
	sub_83A9BC00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab79dc
	if (cr0.eq) goto loc_83AB79DC;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9e468
	ctx.lr = 0x83AB79DC;
	sub_83A9E468(ctx, base);
loc_83AB79DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9b9f0
	ctx.lr = 0x83AB79E8;
	sub_83A9B9F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83ab7a70
	if (cr0.eq) goto loc_83AB7A70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83ab7a18
	if (!cr6.eq) goto loc_83AB7A18;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x83ab7a5c
	if (!cr6.eq) goto loc_83AB7A5C;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x83ab7a5c
	goto loc_83AB7A5C;
loc_83AB7A18:
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x83ab7a5c
	if (cr0.eq) goto loc_83AB7A5C;
loc_83AB7A20:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x83ab7a38
	if (cr6.eq) goto loc_83AB7A38;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83ab7a20
	if (!cr0.eq) goto loc_83AB7A20;
loc_83AB7A38:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7a5c
	if (cr6.eq) goto loc_83AB7A5C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ab7a5c
	if (!cr6.eq) goto loc_83AB7A5C;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83AB7A5C:
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x83ab7a80
	goto loc_83AB7A80;
loc_83AB7A70:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30852
	ctx.r4.s64 = ctx.r11.s64 + -30852;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB7A80;
	sub_831EA3F0(ctx, base);
loc_83AB7A80:
	// bl 0x83a824c0
	ctx.lr = 0x83AB7A84;
	sub_83A824C0(ctx, base);
loc_83AB7A84:
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

__attribute__((alias("__imp__sub_83AB7A9C"))) PPC_WEAK_FUNC(sub_83AB7A9C);
PPC_FUNC_IMPL(__imp__sub_83AB7A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB7AA0"))) PPC_WEAK_FUNC(sub_83AB7AA0);
PPC_FUNC_IMPL(__imp__sub_83AB7AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB7AA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,29536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29536);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83ab7ad8
	if (cr6.gt) goto loc_83AB7AD8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,-30676
	ctx.r4.s64 = ctx.r11.s64 + -30676;
loc_83AB7ACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AB7AD4;
	sub_831EA418(ctx, base);
	// b 0x83ab7b84
	goto loc_83AB7B84;
loc_83AB7AD8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ab7af0
	if (!cr6.eq) goto loc_83AB7AF0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30688
	ctx.r4.s64 = ctx.r11.s64 + -30688;
	// b 0x83ab7acc
	goto loc_83AB7ACC;
loc_83AB7AF0:
	// bl 0x83a82480
	ctx.lr = 0x83AB7AF4;
	sub_83A82480(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-30752
	ctx.r28.s64 = ctx.r11.s64 + -30752;
loc_83AB7B00:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7b80
	if (cr6.eq) goto loc_83AB7B80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x83ab7b20
	if (!cr6.eq) goto loc_83AB7B20;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_83AB7B20:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x83ab7b80
	if (cr6.eq) goto loc_83AB7B80;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ab7b00
	if (cr6.eq) goto loc_83AB7B00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9bc00
	ctx.lr = 0x83AB7B4C;
	sub_83A9BC00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab7b60
	if (cr0.eq) goto loc_83AB7B60;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9e468
	ctx.lr = 0x83AB7B60;
	sub_83A9E468(ctx, base);
loc_83AB7B60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9b9f0
	ctx.lr = 0x83AB7B6C;
	sub_83A9B9F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ab7b00
	if (!cr0.eq) goto loc_83AB7B00;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB7B7C;
	sub_831EA3F0(ctx, base);
	// b 0x83ab7b00
	goto loc_83AB7B00;
loc_83AB7B80:
	// bl 0x83a824c0
	ctx.lr = 0x83AB7B84;
	sub_83A824C0(ctx, base);
loc_83AB7B84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB7B8C"))) PPC_WEAK_FUNC(sub_83AB7B8C);
PPC_FUNC_IMPL(__imp__sub_83AB7B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB7B90"))) PPC_WEAK_FUNC(sub_83AB7B90);
PPC_FUNC_IMPL(__imp__sub_83AB7B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AB7B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x83ab7bc0
	goto loc_83AB7BC0;
loc_83AB7BAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83AB7BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_83AB7BC0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83ab7bac
	if (!cr6.eq) goto loc_83AB7BAC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB7BD0"))) PPC_WEAK_FUNC(sub_83AB7BD0);
PPC_FUNC_IMPL(__imp__sub_83AB7BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83ab7bfc
	if (cr6.lt) goto loc_83AB7BFC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x83ab7bfc
	if (!cr6.lt) goto loc_83AB7BFC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7bfc
	if (cr6.eq) goto loc_83AB7BFC;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_83AB7BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB7C04"))) PPC_WEAK_FUNC(sub_83AB7C04);
PPC_FUNC_IMPL(__imp__sub_83AB7C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB7C08"))) PPC_WEAK_FUNC(sub_83AB7C08);
PPC_FUNC_IMPL(__imp__sub_83AB7C08) {
	PPC_FUNC_PROLOGUE();
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83a87f18
	sub_83A87F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB7C20"))) PPC_WEAK_FUNC(sub_83AB7C20);
PPC_FUNC_IMPL(__imp__sub_83AB7C20) {
	PPC_FUNC_PROLOGUE();
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83a88108
	sub_83A88108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB7C38"))) PPC_WEAK_FUNC(sub_83AB7C38);
PPC_FUNC_IMPL(__imp__sub_83AB7C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB7C40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29536
	ctx.r31.s64 = ctx.r11.s64 + 29536;
	// lwz r11,29536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29536);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83ab7c74
	if (cr6.gt) goto loc_83AB7C74;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,-30652
	ctx.r4.s64 = ctx.r11.s64 + -30652;
loc_83AB7C68:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AB7C70;
	sub_831EA418(ctx, base);
	// b 0x83ab7d28
	goto loc_83AB7D28;
loc_83AB7C74:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83ab7c8c
	if (!cr6.eq) goto loc_83AB7C8C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30664
	ctx.r4.s64 = ctx.r11.s64 + -30664;
	// b 0x83ab7c68
	goto loc_83AB7C68;
loc_83AB7C8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83ab7aa0
	ctx.lr = 0x83AB7C94;
	sub_83AB7AA0(ctx, base);
	// bl 0x83a82480
	ctx.lr = 0x83AB7C98;
	sub_83A82480(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83ab7cc4
	if (!cr6.eq) goto loc_83AB7CC4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x83ab7d08
	if (!cr6.eq) goto loc_83AB7D08;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x83ab7d04
	goto loc_83AB7D04;
loc_83AB7CC4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7d08
	if (cr6.eq) goto loc_83AB7D08;
loc_83AB7CCC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83ab7ce4
	if (cr6.eq) goto loc_83AB7CE4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83ab7ccc
	if (!cr0.eq) goto loc_83AB7CCC;
loc_83AB7CE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7d08
	if (cr6.eq) goto loc_83AB7D08;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83ab7d08
	if (!cr6.eq) goto loc_83AB7D08;
loc_83AB7D04:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83AB7D08:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83a824c0
	ctx.lr = 0x83AB7D1C;
	sub_83A824C0(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83a82de8
	ctx.lr = 0x83AB7D28;
	sub_83A82DE8(ctx, base);
loc_83AB7D28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB7D30"))) PPC_WEAK_FUNC(sub_83AB7D30);
PPC_FUNC_IMPL(__imp__sub_83AB7D30) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29536
	ctx.r31.s64 = ctx.r11.s64 + 29536;
	// lwz r10,29536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29536);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83ab7d78
	if (!cr6.eq) goto loc_83AB7D78;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab7d78
	if (cr6.eq) goto loc_83AB7D78;
loc_83AB7D60:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83ab7c38
	ctx.lr = 0x83AB7D68;
	sub_83AB7C38(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab7d60
	if (!cr6.eq) goto loc_83AB7D60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83AB7D78:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83AB7D94"))) PPC_WEAK_FUNC(sub_83AB7D94);
PPC_FUNC_IMPL(__imp__sub_83AB7D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB7D98"))) PPC_WEAK_FUNC(sub_83AB7D98);
PPC_FUNC_IMPL(__imp__sub_83AB7D98) {
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
	// bl 0x83aa4f98
	ctx.lr = 0x83AB7DB0;
	sub_83AA4F98(ctx, base);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// divdu r10,r3,r10
	ctx.r10.u64 = PPCDivide(ctx.r3.u64, ctx.r10.u64);
	// addi r31,r11,29584
	ctx.r31.s64 = ctx.r11.s64 + 29584;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,29584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29584);
	// bl 0x83a7d960
	ctx.lr = 0x83AB7DD0;
	sub_83A7D960(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,67
	cr6.compare<uint32_t>(ctx.r3.u32, 67, xer);
	// ble cr6,0x83ab7de4
	if (!cr6.gt) goto loc_83AB7DE4;
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AB7DE4:
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

__attribute__((alias("__imp__sub_83AB7E00"))) PPC_WEAK_FUNC(sub_83AB7E00);
PPC_FUNC_IMPL(__imp__sub_83AB7E00) {
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
	ctx.lr = 0x83AB7E08;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ab8028
	if (!cr0.eq) goto loc_83AB8028;
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r10,29588(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29588);
	// lfs f29,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x83ab7ee8
	if (cr6.lt) goto loc_83AB7EE8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab7ee8
	if (cr6.eq) goto loc_83AB7EE8;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83ab7ee8
	if (cr6.lt) goto loc_83AB7EE8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ab7eb8
	if (!cr6.gt) goto loc_83AB7EB8;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x83ab7ebc
	goto loc_83AB7EBC;
loc_83AB7EB8:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_83AB7EBC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x83ab7ec8
	if (!cr6.gt) goto loc_83AB7EC8;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_83AB7EC8:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x83ab7ed4
	if (!cr6.lt) goto loc_83AB7ED4;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_83AB7ED4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AB7EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
loc_83AB7EE8:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab7f9c
	if (cr6.eq) goto loc_83AB7F9C;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83ab7f9c
	if (cr6.lt) goto loc_83AB7F9C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ab7f48
	if (!cr6.gt) goto loc_83AB7F48;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x83ab7f4c
	goto loc_83AB7F4C;
loc_83AB7F48:
	// lfs f31,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
loc_83AB7F4C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x83ab7f58
	if (!cr6.gt) goto loc_83AB7F58;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_83AB7F58:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x83ab7f64
	if (!cr6.lt) goto loc_83AB7F64;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_83AB7F64:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AB7F74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x83ab7f98
	if (cr6.gt) goto loc_83AB7F98;
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x83ab7f98
	if (!cr6.gt) goto loc_83AB7F98;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AB7F98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AB7F98:
	// stfs f31,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
loc_83AB7F9C:
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab8000
	if (cr6.eq) goto loc_83AB8000;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r9,r9,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x83ab8028
	if (cr6.lt) goto loc_83AB8028;
	// lbz r11,67(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ab7fe8
	if (!cr0.eq) goto loc_83AB7FE8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AB7FE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r11.u8);
loc_83AB7FE8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AB7FF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab8028
	if (cr0.eq) goto loc_83AB8028;
loc_83AB8000:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab8020
	if (cr6.eq) goto loc_83AB8020;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83ab8028
	if (cr6.lt) goto loc_83AB8028;
loc_83AB8020:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r11.u8);
loc_83AB8028:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB803C"))) PPC_WEAK_FUNC(sub_83AB803C);
PPC_FUNC_IMPL(__imp__sub_83AB803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8040"))) PPC_WEAK_FUNC(sub_83AB8040);
PPC_FUNC_IMPL(__imp__sub_83AB8040) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab8070
	if (!cr6.eq) goto loc_83AB8070;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30572
	ctx.r4.s64 = ctx.r11.s64 + -30572;
	// bl 0x831ea418
	ctx.lr = 0x83AB806C;
	sub_831EA418(ctx, base);
	// b 0x83ab809c
	goto loc_83AB809C;
loc_83AB8070:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// beq cr6,0x83ab808c
	if (cr6.eq) goto loc_83AB808C;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x831ce980
	ctx.lr = 0x83AB8084;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83ab8098
	goto loc_83AB8098;
loc_83AB808C:
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x831ea7a0
	ctx.lr = 0x83AB8094;
	sub_831EA7A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83AB8098:
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
loc_83AB809C:
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

__attribute__((alias("__imp__sub_83AB80B0"))) PPC_WEAK_FUNC(sub_83AB80B0);
PPC_FUNC_IMPL(__imp__sub_83AB80B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab80e0
	if (!cr6.eq) goto loc_83AB80E0;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30520
	ctx.r4.s64 = ctx.r11.s64 + -30520;
	// bl 0x831ea418
	ctx.lr = 0x83AB80DC;
	sub_831EA418(ctx, base);
	// b 0x83ab8154
	goto loc_83AB8154;
loc_83AB80E0:
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x83ab8108
	if (!cr0.eq) goto loc_83AB8108;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30560
	ctx.r4.s64 = ctx.r11.s64 + -30560;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB80FC;
	sub_831EA3F0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r11.u8);
	// b 0x83ab8154
	goto loc_83AB8154;
loc_83AB8108:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r8.u8);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// stb r6,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r6.u8);
loc_83AB8154:
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

__attribute__((alias("__imp__sub_83AB8168"))) PPC_WEAK_FUNC(sub_83AB8168);
PPC_FUNC_IMPL(__imp__sub_83AB8168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab8180
	if (!cr6.eq) goto loc_83AB8180;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30508
	ctx.r4.s64 = ctx.r11.s64 + -30508;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83AB8180:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB818C"))) PPC_WEAK_FUNC(sub_83AB818C);
PPC_FUNC_IMPL(__imp__sub_83AB818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8190"))) PPC_WEAK_FUNC(sub_83AB8190);
PPC_FUNC_IMPL(__imp__sub_83AB8190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab81a8
	if (!cr6.eq) goto loc_83AB81A8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30496
	ctx.r4.s64 = ctx.r11.s64 + -30496;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83AB81A8:
	// stb r4,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB81B0"))) PPC_WEAK_FUNC(sub_83AB81B0);
PPC_FUNC_IMPL(__imp__sub_83AB81B0) {
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
	// bne cr6,0x83ab81dc
	if (!cr6.eq) goto loc_83AB81DC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30484
	ctx.r4.s64 = ctx.r11.s64 + -30484;
	// bl 0x831ea418
	ctx.lr = 0x83AB81D4;
	sub_831EA418(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x83ab81e0
	goto loc_83AB81E0;
loc_83AB81DC:
	// lbz r3,65(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
loc_83AB81E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB81F0"))) PPC_WEAK_FUNC(sub_83AB81F0);
PPC_FUNC_IMPL(__imp__sub_83AB81F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB81F8"))) PPC_WEAK_FUNC(sub_83AB81F8);
PPC_FUNC_IMPL(__imp__sub_83AB81F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab8210
	if (!cr6.eq) goto loc_83AB8210;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83AB8210:
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB8218"))) PPC_WEAK_FUNC(sub_83AB8218);
PPC_FUNC_IMPL(__imp__sub_83AB8218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab8230
	if (cr6.eq) goto loc_83AB8230;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83ab8230
	if (cr6.lt) goto loc_83AB8230;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// blr 
	return;
loc_83AB8230:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30460
	ctx.r4.s64 = ctx.r11.s64 + -30460;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB8244"))) PPC_WEAK_FUNC(sub_83AB8244);
PPC_FUNC_IMPL(__imp__sub_83AB8244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8248"))) PPC_WEAK_FUNC(sub_83AB8248);
PPC_FUNC_IMPL(__imp__sub_83AB8248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83ab8260
	if (!cr6.eq) goto loc_83AB8260;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30448
	ctx.r4.s64 = ctx.r11.s64 + -30448;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83AB8260:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83ab8274
	if (cr6.lt) goto loc_83AB8274;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// b 0x83ab8280
	goto loc_83AB8280;
loc_83AB8274:
	// li r10,0
	ctx.r10.s64 = 0;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
loc_83AB8280:
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB8288"))) PPC_WEAK_FUNC(sub_83AB8288);
PPC_FUNC_IMPL(__imp__sub_83AB8288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab82a0
	if (cr6.eq) goto loc_83AB82A0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83ab82a0
	if (cr6.lt) goto loc_83AB82A0;
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// blr 
	return;
loc_83AB82A0:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30436
	ctx.r4.s64 = ctx.r11.s64 + -30436;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB82B4"))) PPC_WEAK_FUNC(sub_83AB82B4);
PPC_FUNC_IMPL(__imp__sub_83AB82B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB82B8"))) PPC_WEAK_FUNC(sub_83AB82B8);
PPC_FUNC_IMPL(__imp__sub_83AB82B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AB82C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,29556
	ctx.r30.s64 = ctx.r11.s64 + 29556;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bne cr6,0x83ab8300
	if (!cr6.eq) goto loc_83AB8300;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-30508
	ctx.r4.s64 = ctx.r11.s64 + -30508;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AB82FC;
	sub_831EA418(ctx, base);
	// b 0x83ab8304
	goto loc_83AB8304;
loc_83AB8300:
	// stb r29,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r29.u8);
loc_83AB8304:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83ab831c
	if (cr6.eq) goto loc_83AB831C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83b68280
	ctx.lr = 0x83AB8318;
	sub_83B68280(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83AB831C:
	// li r4,120
	ctx.r4.s64 = 120;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AB832C;
	sub_831EA7A0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83ab833c
	if (cr6.eq) goto loc_83AB833C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a82d38
	ctx.lr = 0x83AB833C;
	sub_83A82D38(ctx, base);
loc_83AB833C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB8344"))) PPC_WEAK_FUNC(sub_83AB8344);
PPC_FUNC_IMPL(__imp__sub_83AB8344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8348"))) PPC_WEAK_FUNC(sub_83AB8348);
PPC_FUNC_IMPL(__imp__sub_83AB8348) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x83ab82b8
	sub_83AB82B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB8358"))) PPC_WEAK_FUNC(sub_83AB8358);
PPC_FUNC_IMPL(__imp__sub_83AB8358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,44(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab83a8
	if (cr6.eq) goto loc_83AB83A8;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ab8394
	if (!cr6.gt) goto loc_83AB8394;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lfs f1,112(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// b 0x83ab83a4
	goto loc_83AB83A4;
loc_83AB8394:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83AB83A4:
	// bctrl 
	ctx.lr = 0x83AB83A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AB83A8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab83c4
	if (cr6.eq) goto loc_83AB83C4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AB83C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83AB83C4:
	// lbz r11,65(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83ab83e4
	if (cr6.eq) goto loc_83AB83E4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83ab8414
	if (!cr6.eq) goto loc_83AB8414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab7e00
	ctx.lr = 0x83AB83E0;
	sub_83AB7E00(ctx, base);
	// b 0x83ab8414
	goto loc_83AB8414;
loc_83AB83E4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab8404
	if (cr6.eq) goto loc_83AB8404;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83AB83FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab8414
	if (cr0.eq) goto loc_83AB8414;
loc_83AB8404:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r10.u8);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_83AB8414:
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

__attribute__((alias("__imp__sub_83AB8428"))) PPC_WEAK_FUNC(sub_83AB8428);
PPC_FUNC_IMPL(__imp__sub_83AB8428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29552
	ctx.r31.s64 = ctx.r11.s64 + 29552;
	// lwz r11,29552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29552);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x83ab847c
	if (!cr0.eq) goto loc_83AB847C;
	// bl 0x83aa4e90
	ctx.lr = 0x83AB8454;
	sub_83AA4E90(ctx, base);
	// bl 0x83a7d940
	ctx.lr = 0x83AB8458;
	sub_83A7D940(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab847c
	if (cr6.eq) goto loc_83AB847C;
	// lis r11,-31828
	ctx.r11.s64 = -2085879808;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-31928
	ctx.r5.s64 = ctx.r11.s64 + -31928;
	// bl 0x83b68180
	ctx.lr = 0x83AB8474;
	sub_83B68180(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AB847C:
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

__attribute__((alias("__imp__sub_83AB8490"))) PPC_WEAK_FUNC(sub_83AB8490);
PPC_FUNC_IMPL(__imp__sub_83AB8490) {
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
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83AB84B0;
	sub_831EA7A0(ctx, base);
	// li r10,500
	ctx.r10.s64 = 500;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// addi r30,r11,29588
	ctx.r30.s64 = ctx.r11.s64 + 29588;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// bl 0x83b68208
	ctx.lr = 0x83AB84E0;
	sub_83B68208(ctx, base);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83ab8510
	if (!cr6.eq) goto loc_83AB8510;
	// bl 0x83aa4f98
	ctx.lr = 0x83AB84FC;
	sub_83AA4F98(ctx, base);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r11,0
	ctx.r11.s64 = 0;
	// divdu r10,r3,r10
	ctx.r10.u64 = PPCDivide(ctx.r3.u64, ctx.r10.u64);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r10.u32);
loc_83AB8510:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83ab853c
	if (!cr6.eq) goto loc_83AB853C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-30424
	ctx.r4.s64 = ctx.r11.s64 + -30424;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB852C;
	sub_831EA3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab82b8
	ctx.lr = 0x83AB8534;
	sub_83AB82B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab8540
	goto loc_83AB8540;
loc_83AB853C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83AB8540:
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

__attribute__((alias("__imp__sub_83AB8558"))) PPC_WEAK_FUNC(sub_83AB8558);
PPC_FUNC_IMPL(__imp__sub_83AB8558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29552
	ctx.r31.s64 = ctx.r11.s64 + 29552;
	// lwz r11,29552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83ab85ac
	if (!cr6.eq) goto loc_83AB85AC;
	// bl 0x83a7d918
	ctx.lr = 0x83AB8588;
	sub_83A7D918(ctx, base);
	// bl 0x83aa4e20
	ctx.lr = 0x83AB858C;
	sub_83AA4E20(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83b68130
	ctx.lr = 0x83AB859C;
	sub_83B68130(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83ab85ac
	if (!cr0.eq) goto loc_83AB85AC;
	// bl 0x83ab8428
	ctx.lr = 0x83AB85AC;
	sub_83AB8428(ctx, base);
loc_83AB85AC:
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

__attribute__((alias("__imp__sub_83AB85C0"))) PPC_WEAK_FUNC(sub_83AB85C0);
PPC_FUNC_IMPL(__imp__sub_83AB85C0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29556
	ctx.r31.s64 = ctx.r11.s64 + 29556;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83ab8604
	if (!cr6.gt) goto loc_83AB8604;
	// bl 0x83ab7d98
	ctx.lr = 0x83AB85E8;
	sub_83AB7D98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab8604
	if (cr6.eq) goto loc_83AB8604;
	// lis r11,-31828
	ctx.r11.s64 = -2085879808;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-31912
	ctx.r5.s64 = ctx.r11.s64 + -31912;
	// bl 0x83b68308
	ctx.lr = 0x83AB8604;
	sub_83B68308(ctx, base);
loc_83AB8604:
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

__attribute__((alias("__imp__sub_83AB8618"))) PPC_WEAK_FUNC(sub_83AB8618);
PPC_FUNC_IMPL(__imp__sub_83AB8618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r6,-31739
	ctx.r6.s64 = -2080047104;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r5,r6,29592
	ctx.r5.s64 = ctx.r6.s64 + 29592;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f13,29592(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 29592, temp.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lfs f11,20056(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20056);
	ctx.f11.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stfs f0,88(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 88, temp.u32);
	// lfs f12,11112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11112);
	ctx.f12.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stfs f0,92(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 92, temp.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stfs f0,96(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 96, temp.u32);
	// stw r10,84(r5)
	PPC_STORE_U32(ctx.r5.u32 + 84, ctx.r10.u32);
	// stfs f0,100(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 100, temp.u32);
	// stw r9,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// stfs f0,104(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 104, temp.u32);
	// sth r11,32(r5)
	PPC_STORE_U16(ctx.r5.u32 + 32, ctx.r11.u16);
	// stfs f0,108(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 108, temp.u32);
	// sth r11,34(r5)
	PPC_STORE_U16(ctx.r5.u32 + 34, ctx.r11.u16);
	// stfs f0,112(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 112, temp.u32);
	// sth r11,36(r5)
	PPC_STORE_U16(ctx.r5.u32 + 36, ctx.r11.u16);
	// stfs f0,116(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 116, temp.u32);
	// stfs f13,120(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 120, temp.u32);
	// stfs f0,124(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 124, temp.u32);
	// stfs f13,128(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 128, temp.u32);
	// stfs f0,132(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 132, temp.u32);
	// stfs f13,136(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 136, temp.u32);
	// stfs f0,140(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 140, temp.u32);
	// stfs f0,144(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 144, temp.u32);
	// stfs f0,148(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 148, temp.u32);
	// stfs f0,152(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 152, temp.u32);
	// stfs f0,156(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 156, temp.u32);
	// stfs f0,40(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// stfs f0,44(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// stfs f0,48(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// stfs f0,52(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// stfs f0,56(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// stfs f0,60(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// stfs f0,64(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 64, temp.u32);
	// stfs f0,68(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 68, temp.u32);
	// stfs f11,72(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 72, temp.u32);
	// stfs f13,76(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 76, temp.u32);
	// stfs f13,80(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB8700"))) PPC_WEAK_FUNC(sub_83AB8700);
PPC_FUNC_IMPL(__imp__sub_83AB8700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r3,29752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29752, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB870C"))) PPC_WEAK_FUNC(sub_83AB870C);
PPC_FUNC_IMPL(__imp__sub_83AB870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8710"))) PPC_WEAK_FUNC(sub_83AB8710);
PPC_FUNC_IMPL(__imp__sub_83AB8710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r4,r11,29680
	ctx.r4.s64 = ctx.r11.s64 + 29680;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB8720"))) PPC_WEAK_FUNC(sub_83AB8720);
PPC_FUNC_IMPL(__imp__sub_83AB8720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r11,29632
	ctx.r4.s64 = ctx.r11.s64 + 29632;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB8730"))) PPC_WEAK_FUNC(sub_83AB8730);
PPC_FUNC_IMPL(__imp__sub_83AB8730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r11,29592
	ctx.r4.s64 = ctx.r11.s64 + 29592;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB8740"))) PPC_WEAK_FUNC(sub_83AB8740);
PPC_FUNC_IMPL(__imp__sub_83AB8740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r3,r11,29592
	ctx.r3.s64 = ctx.r11.s64 + 29592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB874C"))) PPC_WEAK_FUNC(sub_83AB874C);
PPC_FUNC_IMPL(__imp__sub_83AB874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8750"))) PPC_WEAK_FUNC(sub_83AB8750);
PPC_FUNC_IMPL(__imp__sub_83AB8750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29592
	ctx.r11.s64 = ctx.r11.s64 + 29592;
	// stfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB8768"))) PPC_WEAK_FUNC(sub_83AB8768);
PPC_FUNC_IMPL(__imp__sub_83AB8768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29592
	ctx.r11.s64 = ctx.r11.s64 + 29592;
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f2,20(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB877C"))) PPC_WEAK_FUNC(sub_83AB877C);
PPC_FUNC_IMPL(__imp__sub_83AB877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8780"))) PPC_WEAK_FUNC(sub_83AB8780);
PPC_FUNC_IMPL(__imp__sub_83AB8780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,29592
	ctx.r11.s64 = ctx.r11.s64 + 29592;
	// stfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB8790"))) PPC_WEAK_FUNC(sub_83AB8790);
PPC_FUNC_IMPL(__imp__sub_83AB8790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stfs f1,29592(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 29592, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB879C"))) PPC_WEAK_FUNC(sub_83AB879C);
PPC_FUNC_IMPL(__imp__sub_83AB879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB87A0"))) PPC_WEAK_FUNC(sub_83AB87A0);
PPC_FUNC_IMPL(__imp__sub_83AB87A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x83ab87bc
	if (cr6.lt) goto loc_83AB87BC;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_83AB87BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-25156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83ab87d0
	if (cr6.lt) goto loc_83AB87D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83AB87D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4332);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB87EC"))) PPC_WEAK_FUNC(sub_83AB87EC);
PPC_FUNC_IMPL(__imp__sub_83AB87EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB87F0"))) PPC_WEAK_FUNC(sub_83AB87F0);
PPC_FUNC_IMPL(__imp__sub_83AB87F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x83ab880c
	if (cr6.lt) goto loc_83AB880C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_83AB880C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,7944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7944);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83ab8820
	if (cr6.lt) goto loc_83AB8820;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83AB8820:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f13,-30452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30452);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB883C"))) PPC_WEAK_FUNC(sub_83AB883C);
PPC_FUNC_IMPL(__imp__sub_83AB883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8840"))) PPC_WEAK_FUNC(sub_83AB8840);
PPC_FUNC_IMPL(__imp__sub_83AB8840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83AB8848;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce748
	ctx.lr = 0x83AB8850;
	__savefpr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f11,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f10,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f4,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmuls f4,f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f2,f11,f13,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f11,f9,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f12.f64));
	// lfs f30,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f12,f10,f9,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f12.f64));
	// lfs f24,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f23.f64 = double(temp.f32);
	// fmr f22,f24
	ctx.f22.f64 = ctx.f24.f64;
	// fmadds f9,f1,f1,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fmadds f10,f10,f6,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f11,f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fsubs f20,f7,f2
	ctx.f20.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsubs f29,f7,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f19,f5,f31
	ctx.f19.f64 = double(float(ctx.f5.f64 - ctx.f31.f64));
	// fsubs f28,f5,f12
	ctx.f28.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fmadds f0,f13,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fsubs f27,f3,f10
	ctx.f27.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fsubs f18,f3,f11
	ctx.f18.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fmuls f13,f20,f20
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f20.f64));
	// fmuls f12,f29,f29
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fmadds f13,f19,f19,f13
	ctx.f13.f64 = double(float(ctx.f19.f64 * ctx.f19.f64 + ctx.f13.f64));
	// fmadds f12,f28,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f12.f64));
	// fmadds f13,f18,f18,f13
	ctx.f13.f64 = double(float(ctx.f18.f64 * ctx.f18.f64 + ctx.f13.f64));
	// fmadds f25,f27,f27,f12
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f12.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f31,f0,f25
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fsqrts f0,f25
	ctx.f0.f64 = double(float(sqrt(ctx.f25.f64)));
	// fmuls f21,f13,f30
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f17,f0,f30
	ctx.f17.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fcmpu cr6,f31,f23
	cr6.compare(ctx.f31.f64, ctx.f23.f64);
	// beq cr6,0x83ab89d4
	if (cr6.eq) goto loc_83AB89D4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lfs f26,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,-30308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f26,f0
	cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// bge cr6,0x83ab89d4
	if (!cr6.lt) goto loc_83AB89D4;
	// lfs f30,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83b67c60
	ctx.lr = 0x83AB8950;
	sub_83B67C60(ctx, base);
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	ctx.f16.f64 = ctx.f1.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x83b67c60
	ctx.lr = 0x83AB895C;
	sub_83B67C60(ctx, base);
	// fneg f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f27
	ctx.f12.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f29
	ctx.f10.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lfs f9,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsqrts f8,f31
	ctx.f8.f64 = double(float(sqrt(ctx.f31.f64)));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f0,f11,f12,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f10,f9,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fdivs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fcmpu cr6,f0,f16
	cr6.compare(ctx.f0.f64, ctx.f16.f64);
	// bgt cr6,0x83ab8998
	if (cr6.gt) goto loc_83AB8998;
	// lfs f30,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// b 0x83ab89d8
	goto loc_83AB89D8;
loc_83AB8998:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x83ab89d4
	if (!cr6.lt) goto loc_83AB89D4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x831d16d0
	ctx.lr = 0x83AB89A8;
	sub_831D16D0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f30,f26
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x83ab89c4
	if (cr6.lt) goto loc_83AB89C4;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
loc_83AB89C4:
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f24,f13
	ctx.f12.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// fmadds f30,f12,f0,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x83ab89d8
	goto loc_83AB89D8;
loc_83AB89D4:
	// fmr f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f24.f64;
loc_83AB89D8:
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f21,f0
	cr6.compare(ctx.f21.f64, ctx.f0.f64);
	// bgt cr6,0x83ab89ec
	if (cr6.gt) goto loc_83AB89EC;
	// fmr f31,f23
	ctx.f31.f64 = ctx.f23.f64;
	// b 0x83ab8a50
	goto loc_83AB8A50;
loc_83AB89EC:
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// fcmpu cr6,f21,f0
	cr6.compare(ctx.f21.f64, ctx.f0.f64);
	// blt cr6,0x83ab8a10
	if (cr6.lt) goto loc_83AB8A10;
	// fmr f31,f24
	ctx.f31.f64 = ctx.f24.f64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83ab8a50
	if (!cr6.eq) goto loc_83AB8A50;
	// fmr f22,f23
	ctx.f22.f64 = ctx.f23.f64;
	// b 0x83ab8a50
	goto loc_83AB8A50;
loc_83AB8A10:
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// fsubs f12,f21,f13
	ctx.f12.f64 = double(float(ctx.f21.f64 - ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// bne cr6,0x83ab8a50
	if (!cr6.eq) goto loc_83AB8A50;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f0,-30312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12972(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12972);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f31,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f31.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// bl 0x831d1af0
	ctx.lr = 0x83AB8A40;
	sub_831D1AF0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lfs f0,-30316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f13,f0
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_83AB8A50:
	// stfs f31,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// fcmpu cr6,f25,f23
	cr6.compare(ctx.f25.f64, ctx.f23.f64);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// bne cr6,0x83ab8a7c
	if (!cr6.eq) goto loc_83AB8A7C;
	// fmr f31,f23
	ctx.f31.f64 = ctx.f23.f64;
	// b 0x83ab8ac8
	goto loc_83AB8AC8;
loc_83AB8A7C:
	// fmuls f8,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f13,f29
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmsubs f9,f9,f0,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f8.f64));
	// fmsubs f13,f11,f13,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f10,f10,f12,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmadds f0,f0,f27,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f6.f64));
	// fmuls f11,f9,f29
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmadds f2,f12,f28,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f0,f10,f27,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f27.f64 + ctx.f11.f64));
	// fmadds f1,f13,f28,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f0.f64));
	// bl 0x831d17c0
	ctx.lr = 0x83AB8AB0;
	sub_831D17C0(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lwz r11,29752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29752);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83ab8ac8
	if (!cr6.eq) goto loc_83AB8AC8;
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_83AB8AC8:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmuls f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// fcmpu cr6,f11,f23
	cr6.compare(ctx.f11.f64, ctx.f23.f64);
	// bne cr6,0x83ab8af4
	if (!cr6.eq) goto loc_83AB8AF4;
	// fmr f13,f23
	ctx.f13.f64 = ctx.f23.f64;
	// b 0x83ab8b20
	goto loc_83AB8B20;
loc_83AB8AF4:
	// fneg f10,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fneg f9,f28
	ctx.f9.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fneg f10,f27
	ctx.f10.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fdivs f11,f24,f11
	ctx.f11.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// fmadds f0,f9,f13,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x831d16d0
	ctx.lr = 0x83AB8B1C;
	sub_831D16D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_83AB8B20:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f0,-30452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f11,8(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,12(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// fmuls f0,f12,f22
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f17,f0
	cr6.compare(ctx.f17.f64, ctx.f0.f64);
	// bge cr6,0x83ab8b60
	if (!cr6.lt) goto loc_83AB8B60;
	// fdivs f0,f17,f0
	ctx.f0.f64 = double(float(ctx.f17.f64 / ctx.f0.f64));
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// b 0x83ab8b64
	goto loc_83AB8B64;
loc_83AB8B60:
	// stfs f24,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
loc_83AB8B64:
	// fmuls f0,f30,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// stfs f0,28(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab8b80
	if (!cr6.eq) goto loc_83AB8B80;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// b 0x83ab8b9c
	goto loc_83AB8B9C;
loc_83AB8B80:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lfs f13,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r10,24
	ctx.r10.s64 = 24;
	// lfs f0,22360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22360);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.f0.u32);
loc_83AB8B9C:
	// stfs f24,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// fcmpu cr6,f21,f23
	cr6.compare(ctx.f21.f64, ctx.f23.f64);
	// lfs f2,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// beq cr6,0x83ab8c50
	if (cr6.eq) goto loc_83AB8C50;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r11,r11,-14456
	ctx.r11.s64 = ctx.r11.s64 + -14456;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f21,f12
	cr6.compare(ctx.f21.f64, ctx.f12.f64);
	// bge cr6,0x83ab8c50
	if (!cr6.lt) goto loc_83AB8C50;
	// fcmpu cr6,f2,f23
	cr6.compare(ctx.f2.f64, ctx.f23.f64);
	// beq cr6,0x83ab8c50
	if (cr6.eq) goto loc_83AB8C50;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f21,f0
	cr6.compare(ctx.f21.f64, ctx.f0.f64);
	// lfs f13,-25540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25540);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// ble cr6,0x83ab8bf4
	if (!cr6.gt) goto loc_83AB8BF4;
	// fsubs f11,f12,f21
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f21.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fdivs f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_83AB8BF4:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f24,f21
	ctx.f12.f64 = double(float(ctx.f24.f64 / ctx.f21.f64));
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f20
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f20.f64));
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f10,f18,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f18.f64 + ctx.f0.f64));
	// fmadds f11,f9,f18,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f18.f64 + ctx.f11.f64));
	// fmadds f0,f8,f19,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f19.f64 + ctx.f0.f64));
	// fmadds f11,f7,f19,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f19.f64 + ctx.f11.f64));
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f23
	cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x83ab8c50
	if (!cr6.gt) goto loc_83AB8C50;
	// fcmpu cr6,f13,f23
	cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// ble cr6,0x83ab8c50
	if (!cr6.gt) goto loc_83AB8C50;
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x831d20a0
	ctx.lr = 0x83AB8C48;
	sub_831D20A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,16(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
loc_83AB8C50:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce794
	ctx.lr = 0x83AB8C5C;
	__restfpr_16(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB8C60"))) PPC_WEAK_FUNC(sub_83AB8C60);
PPC_FUNC_IMPL(__imp__sub_83AB8C60) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83ab8ca8
	if (!cr6.eq) goto loc_83AB8CA8;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83ab8ca8
	if (cr6.eq) goto loc_83AB8CA8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-30120
	ctx.r4.s64 = ctx.r11.s64 + -30120;
loc_83AB8C98:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB8CA0;
	sub_831EA3F0(ctx, base);
loc_83AB8CA0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83ab8d48
	goto loc_83AB8D48;
loc_83AB8CA8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab8ce4
	if (cr6.eq) goto loc_83AB8CE4;
	// bl 0x831ea3d8
	ctx.lr = 0x83AB8CB8;
	sub_831EA3D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab8ccc
	if (!cr0.eq) goto loc_83AB8CCC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-30180
	ctx.r4.s64 = ctx.r11.s64 + -30180;
	// b 0x83ab8c98
	goto loc_83AB8C98;
loc_83AB8CCC:
	// bl 0x83a82d00
	ctx.lr = 0x83AB8CD0;
	sub_83A82D00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab8ce4
	if (!cr0.eq) goto loc_83AB8CE4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-30236
	ctx.r4.s64 = ctx.r11.s64 + -30236;
	// b 0x83ab8c98
	goto loc_83AB8C98;
loc_83AB8CE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a81ef8
	ctx.lr = 0x83AB8CF0;
	sub_83A81EF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83ab8d00
	if (!cr0.lt) goto loc_83AB8D00;
loc_83AB8CF8:
	// bl 0x83a819f0
	ctx.lr = 0x83AB8CFC;
	sub_83A819F0(ctx, base);
	// b 0x83ab8ca0
	goto loc_83AB8CA0;
loc_83AB8D00:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ab8d24
	if (cr6.eq) goto loc_83AB8D24;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83a91dd0
	ctx.lr = 0x83AB8D18;
	sub_83A91DD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83ab8cf8
	if (cr0.lt) goto loc_83AB8CF8;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_83AB8D24:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ab8d44
	if (cr6.eq) goto loc_83AB8D44;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x83a9a248
	ctx.lr = 0x83AB8D38;
	sub_83A9A248(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83ab8cf8
	if (cr0.lt) goto loc_83AB8CF8;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_83AB8D44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83AB8D48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_83AB8D60"))) PPC_WEAK_FUNC(sub_83AB8D60);
PPC_FUNC_IMPL(__imp__sub_83AB8D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83AB8D68;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x83ab8c60
	ctx.lr = 0x83AB8D7C;
	sub_83AB8C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83ab8d8c
	if (!cr0.lt) goto loc_83AB8D8C;
loc_83AB8D84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83ab8e44
	goto loc_83AB8E44;
loc_83AB8D8C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83ab8e4c
	if (!cr6.eq) goto loc_83AB8E4C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83ab8e4c
	if (!cr6.eq) goto loc_83AB8E4C;
	// bl 0x83a82d10
	ctx.lr = 0x83AB8DA0;
	sub_83A82D10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83AB8DA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a81ef8
	ctx.lr = 0x83AB8DB4;
	sub_83A81EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a82558
	ctx.lr = 0x83AB8DC8;
	sub_83A82558(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r28,r11,29756
	ctx.r28.s64 = ctx.r11.s64 + 29756;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ab8e0c
	if (cr6.eq) goto loc_83AB8E0C;
	// addi r29,r30,88
	ctx.r29.s64 = ctx.r30.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a91dd0
	ctx.lr = 0x83AB8DEC;
	sub_83A91DD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a91de8
	ctx.lr = 0x83AB8E00;
	sub_83A91DE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83AB8E0C:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ab8e3c
	if (cr6.eq) goto loc_83AB8E3C;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9a248
	ctx.lr = 0x83AB8E24;
	sub_83A9A248(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a9a368
	ctx.lr = 0x83AB8E34;
	sub_83A9A368(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_83AB8E3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
loc_83AB8E44:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83AB8E4C:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x83ab8da8
	if (!cr6.lt) goto loc_83AB8DA8;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-30040
	ctx.r4.s64 = ctx.r11.s64 + -30040;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83AB8E6C;
	sub_831EA418(ctx, base);
	// b 0x83ab8d84
	goto loc_83AB8D84;
}

__attribute__((alias("__imp__sub_83AB8E70"))) PPC_WEAK_FUNC(sub_83AB8E70);
PPC_FUNC_IMPL(__imp__sub_83AB8E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83AB8E78;
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
	// bl 0x83a82cc8
	ctx.lr = 0x83AB8E8C;
	sub_83A82CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83ab8eb8
	if (cr0.eq) goto loc_83AB8EB8;
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83ab8eac
	if (!cr6.eq) goto loc_83AB8EAC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29700
	ctx.r4.s64 = ctx.r11.s64 + -29700;
	// b 0x83ab8f40
	goto loc_83AB8F40;
loc_83AB8EAC:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29784
	ctx.r4.s64 = ctx.r11.s64 + -29784;
	// b 0x83ab8f40
	goto loc_83AB8F40;
loc_83AB8EB8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83ab8f10
	if (cr6.eq) goto loc_83AB8F10;
	// bl 0x831ea3d8
	ctx.lr = 0x83AB8EC8;
	sub_831EA3D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab8edc
	if (!cr0.eq) goto loc_83AB8EDC;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29844
	ctx.r4.s64 = ctx.r11.s64 + -29844;
	// b 0x83ab8f3c
	goto loc_83AB8F3C;
loc_83AB8EDC:
	// bl 0x83a82d00
	ctx.lr = 0x83AB8EE0;
	sub_83A82D00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab8ef4
	if (!cr0.eq) goto loc_83AB8EF4;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29900
	ctx.r4.s64 = ctx.r11.s64 + -29900;
	// b 0x83ab8f3c
	goto loc_83AB8F3C;
loc_83AB8EF4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83ab8f04
	if (!cr6.eq) goto loc_83AB8F04;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83ab8f10
	if (cr6.eq) goto loc_83AB8F10;
loc_83AB8F04:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29976
	ctx.r4.s64 = ctx.r11.s64 + -29976;
	// b 0x83ab8f3c
	goto loc_83AB8F3C;
loc_83AB8F10:
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x83a82cb8
	ctx.lr = 0x83AB8F18;
	sub_83A82CB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83ab8d60
	ctx.lr = 0x83AB8F28;
	sub_83AB8D60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab8f44
	if (!cr0.eq) goto loc_83AB8F44;
	// bl 0x83a82cb8
	ctx.lr = 0x83AB8F34;
	sub_83A82CB8(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-30028
	ctx.r4.s64 = ctx.r11.s64 + -30028;
loc_83AB8F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB8F40:
	// bl 0x831ea3f0
	ctx.lr = 0x83AB8F44;
	sub_831EA3F0(ctx, base);
loc_83AB8F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83AB8F4C"))) PPC_WEAK_FUNC(sub_83AB8F4C);
PPC_FUNC_IMPL(__imp__sub_83AB8F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB8F50"))) PPC_WEAK_FUNC(sub_83AB8F50);
PPC_FUNC_IMPL(__imp__sub_83AB8F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x83a82cc8
	ctx.lr = 0x83AB8F64;
	sub_83A82CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab8f80
	if (!cr0.eq) goto loc_83AB8F80;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29564
	ctx.r4.s64 = ctx.r11.s64 + -29564;
loc_83AB8F74:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x83AB8F7C;
	sub_831EA3F0(ctx, base);
	// b 0x83ab8ff4
	goto loc_83AB8FF4;
loc_83AB8F80:
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x83ab8f94
	if (cr6.eq) goto loc_83AB8F94;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r4,r11,-29640
	ctx.r4.s64 = ctx.r11.s64 + -29640;
	// b 0x83ab8f74
	goto loc_83AB8F74;
loc_83AB8F94:
	// bl 0x83a9b230
	ctx.lr = 0x83AB8F98;
	sub_83A9B230(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,29756
	ctx.r31.s64 = ctx.r11.s64 + 29756;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ab8fb8
	if (cr6.eq) goto loc_83AB8FB8;
	// bl 0x83a9a410
	ctx.lr = 0x83AB8FB0;
	sub_83A9A410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83AB8FB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83ab8fd0
	if (cr6.eq) goto loc_83AB8FD0;
	// bl 0x83a93768
	ctx.lr = 0x83AB8FC8;
	sub_83A93768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83AB8FD0:
	// bl 0x83a82298
	ctx.lr = 0x83AB8FD4;
	sub_83A82298(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ab8fec
	if (cr6.eq) goto loc_83AB8FEC;
	// bl 0x83a82d38
	ctx.lr = 0x83AB8FE4;
	sub_83A82D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83AB8FEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a82cb8
	ctx.lr = 0x83AB8FF4;
	sub_83A82CB8(ctx, base);
loc_83AB8FF4:
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

__attribute__((alias("__imp__sub_83AB9008"))) PPC_WEAK_FUNC(sub_83AB9008);
PPC_FUNC_IMPL(__imp__sub_83AB9008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a79650
	ctx.lr = 0x83AB9018;
	sub_83A79650(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab9028
	if (!cr0.eq) goto loc_83AB9028;
	// bl 0x83a79610
	ctx.lr = 0x83AB9024;
	sub_83A79610(ctx, base);
	// b 0x83ab902c
	goto loc_83AB902C;
loc_83AB9028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83AB902C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB903C"))) PPC_WEAK_FUNC(sub_83AB903C);
PPC_FUNC_IMPL(__imp__sub_83AB903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83AB9040"))) PPC_WEAK_FUNC(sub_83AB9040);
PPC_FUNC_IMPL(__imp__sub_83AB9040) {
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
	// bl 0x83a79650
	ctx.lr = 0x83AB9060;
	sub_83A79650(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83ab9098
	if (!cr0.eq) goto loc_83AB9098;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a79ed0
	ctx.lr = 0x83AB9074;
	sub_83A79ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a7e068
	ctx.lr = 0x83AB907C;
	sub_83A7E068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831f8140
	ctx.lr = 0x83AB9084;
	sub_831F8140(ctx, base);
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,29768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29768, ctx.r11.u32);
	// bl 0x831f8150
	ctx.lr = 0x83AB9098;
	sub_831F8150(ctx, base);
loc_83AB9098:
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

__attribute__((alias("__imp__sub_83AB90B0"))) PPC_WEAK_FUNC(sub_83AB90B0);
PPC_FUNC_IMPL(__imp__sub_83AB90B0) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,29768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29768);
	// bl 0x831f8150
	ctx.lr = 0x83AB90C8;
	sub_831F8150(ctx, base);
	// bl 0x83a79a38
	ctx.lr = 0x83AB90CC;
	sub_83A79A38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83AB90DC"))) PPC_WEAK_FUNC(sub_83AB90DC);
PPC_FUNC_IMPL(__imp__sub_83AB90DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

