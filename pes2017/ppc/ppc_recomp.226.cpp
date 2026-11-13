#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EB3CE8"))) PPC_WEAK_FUNC(sub_82EB3CE8);
PPC_FUNC_IMPL(__imp__sub_82EB3CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3cfc
	if (!cr6.eq) goto loc_82EB3CFC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3CFC:
	// lhz r3,406(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 406);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D04"))) PPC_WEAK_FUNC(sub_82EB3D04);
PPC_FUNC_IMPL(__imp__sub_82EB3D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3D08"))) PPC_WEAK_FUNC(sub_82EB3D08);
PPC_FUNC_IMPL(__imp__sub_82EB3D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,408(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 408);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3d1c
	if (!cr6.eq) goto loc_82EB3D1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3D1C:
	// lhz r3,410(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 410);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D24"))) PPC_WEAK_FUNC(sub_82EB3D24);
PPC_FUNC_IMPL(__imp__sub_82EB3D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3D28"))) PPC_WEAK_FUNC(sub_82EB3D28);
PPC_FUNC_IMPL(__imp__sub_82EB3D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,412(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3d3c
	if (!cr6.eq) goto loc_82EB3D3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3D3C:
	// lhz r3,414(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 414);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D44"))) PPC_WEAK_FUNC(sub_82EB3D44);
PPC_FUNC_IMPL(__imp__sub_82EB3D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3D48"))) PPC_WEAK_FUNC(sub_82EB3D48);
PPC_FUNC_IMPL(__imp__sub_82EB3D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3d5c
	if (!cr6.eq) goto loc_82EB3D5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3D5C:
	// lhz r3,418(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 418);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D64"))) PPC_WEAK_FUNC(sub_82EB3D64);
PPC_FUNC_IMPL(__imp__sub_82EB3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3D68"))) PPC_WEAK_FUNC(sub_82EB3D68);
PPC_FUNC_IMPL(__imp__sub_82EB3D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3d7c
	if (!cr6.eq) goto loc_82EB3D7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3D7C:
	// lhz r3,422(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 422);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D84"))) PPC_WEAK_FUNC(sub_82EB3D84);
PPC_FUNC_IMPL(__imp__sub_82EB3D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3D88"))) PPC_WEAK_FUNC(sub_82EB3D88);
PPC_FUNC_IMPL(__imp__sub_82EB3D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3d9c
	if (!cr6.eq) goto loc_82EB3D9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3D9C:
	// lhz r3,426(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 426);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3DA4"))) PPC_WEAK_FUNC(sub_82EB3DA4);
PPC_FUNC_IMPL(__imp__sub_82EB3DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3DA8"))) PPC_WEAK_FUNC(sub_82EB3DA8);
PPC_FUNC_IMPL(__imp__sub_82EB3DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,428(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3dbc
	if (!cr6.eq) goto loc_82EB3DBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3DBC:
	// lhz r3,430(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 430);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3DC4"))) PPC_WEAK_FUNC(sub_82EB3DC4);
PPC_FUNC_IMPL(__imp__sub_82EB3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3DC8"))) PPC_WEAK_FUNC(sub_82EB3DC8);
PPC_FUNC_IMPL(__imp__sub_82EB3DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 432);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3ddc
	if (!cr6.eq) goto loc_82EB3DDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3DDC:
	// lhz r3,434(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 434);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3DE4"))) PPC_WEAK_FUNC(sub_82EB3DE4);
PPC_FUNC_IMPL(__imp__sub_82EB3DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3DE8"))) PPC_WEAK_FUNC(sub_82EB3DE8);
PPC_FUNC_IMPL(__imp__sub_82EB3DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,436(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3dfc
	if (!cr6.eq) goto loc_82EB3DFC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3DFC:
	// lhz r3,438(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 438);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3E04"))) PPC_WEAK_FUNC(sub_82EB3E04);
PPC_FUNC_IMPL(__imp__sub_82EB3E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3E08"))) PPC_WEAK_FUNC(sub_82EB3E08);
PPC_FUNC_IMPL(__imp__sub_82EB3E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3e1c
	if (!cr6.eq) goto loc_82EB3E1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3E1C:
	// lhz r3,442(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 442);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3E24"))) PPC_WEAK_FUNC(sub_82EB3E24);
PPC_FUNC_IMPL(__imp__sub_82EB3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3E28"))) PPC_WEAK_FUNC(sub_82EB3E28);
PPC_FUNC_IMPL(__imp__sub_82EB3E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3e3c
	if (!cr6.eq) goto loc_82EB3E3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3E3C:
	// lhz r3,446(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 446);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3E44"))) PPC_WEAK_FUNC(sub_82EB3E44);
PPC_FUNC_IMPL(__imp__sub_82EB3E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3E48"))) PPC_WEAK_FUNC(sub_82EB3E48);
PPC_FUNC_IMPL(__imp__sub_82EB3E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3e5c
	if (!cr6.eq) goto loc_82EB3E5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3E5C:
	// lhz r3,450(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 450);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3E64"))) PPC_WEAK_FUNC(sub_82EB3E64);
PPC_FUNC_IMPL(__imp__sub_82EB3E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3E68"))) PPC_WEAK_FUNC(sub_82EB3E68);
PPC_FUNC_IMPL(__imp__sub_82EB3E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3e7c
	if (!cr6.eq) goto loc_82EB3E7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3E7C:
	// lhz r3,454(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 454);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3E84"))) PPC_WEAK_FUNC(sub_82EB3E84);
PPC_FUNC_IMPL(__imp__sub_82EB3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3E88"))) PPC_WEAK_FUNC(sub_82EB3E88);
PPC_FUNC_IMPL(__imp__sub_82EB3E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,456(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 456);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3e9c
	if (!cr6.eq) goto loc_82EB3E9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3E9C:
	// lhz r3,458(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 458);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3EA4"))) PPC_WEAK_FUNC(sub_82EB3EA4);
PPC_FUNC_IMPL(__imp__sub_82EB3EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3EA8"))) PPC_WEAK_FUNC(sub_82EB3EA8);
PPC_FUNC_IMPL(__imp__sub_82EB3EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 460);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3ebc
	if (!cr6.eq) goto loc_82EB3EBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3EBC:
	// lhz r3,462(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 462);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3EC4"))) PPC_WEAK_FUNC(sub_82EB3EC4);
PPC_FUNC_IMPL(__imp__sub_82EB3EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3EC8"))) PPC_WEAK_FUNC(sub_82EB3EC8);
PPC_FUNC_IMPL(__imp__sub_82EB3EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 464);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3edc
	if (!cr6.eq) goto loc_82EB3EDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3EDC:
	// lhz r3,466(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 466);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3EE4"))) PPC_WEAK_FUNC(sub_82EB3EE4);
PPC_FUNC_IMPL(__imp__sub_82EB3EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3EE8"))) PPC_WEAK_FUNC(sub_82EB3EE8);
PPC_FUNC_IMPL(__imp__sub_82EB3EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3efc
	if (!cr6.eq) goto loc_82EB3EFC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3EFC:
	// lhz r3,470(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 470);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3F04"))) PPC_WEAK_FUNC(sub_82EB3F04);
PPC_FUNC_IMPL(__imp__sub_82EB3F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3F08"))) PPC_WEAK_FUNC(sub_82EB3F08);
PPC_FUNC_IMPL(__imp__sub_82EB3F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 472);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3f1c
	if (!cr6.eq) goto loc_82EB3F1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3F1C:
	// lhz r3,474(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 474);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3F24"))) PPC_WEAK_FUNC(sub_82EB3F24);
PPC_FUNC_IMPL(__imp__sub_82EB3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3F28"))) PPC_WEAK_FUNC(sub_82EB3F28);
PPC_FUNC_IMPL(__imp__sub_82EB3F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3f3c
	if (!cr6.eq) goto loc_82EB3F3C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3F3C:
	// lhz r3,478(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 478);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3F44"))) PPC_WEAK_FUNC(sub_82EB3F44);
PPC_FUNC_IMPL(__imp__sub_82EB3F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3F48"))) PPC_WEAK_FUNC(sub_82EB3F48);
PPC_FUNC_IMPL(__imp__sub_82EB3F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 480);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3f5c
	if (!cr6.eq) goto loc_82EB3F5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3F5C:
	// lhz r3,482(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 482);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3F64"))) PPC_WEAK_FUNC(sub_82EB3F64);
PPC_FUNC_IMPL(__imp__sub_82EB3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3F68"))) PPC_WEAK_FUNC(sub_82EB3F68);
PPC_FUNC_IMPL(__imp__sub_82EB3F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3f7c
	if (!cr6.eq) goto loc_82EB3F7C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3F7C:
	// lhz r3,486(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 486);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3F84"))) PPC_WEAK_FUNC(sub_82EB3F84);
PPC_FUNC_IMPL(__imp__sub_82EB3F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3F88"))) PPC_WEAK_FUNC(sub_82EB3F88);
PPC_FUNC_IMPL(__imp__sub_82EB3F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,488(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 488);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3f9c
	if (!cr6.eq) goto loc_82EB3F9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3F9C:
	// lhz r3,490(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 490);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3FA4"))) PPC_WEAK_FUNC(sub_82EB3FA4);
PPC_FUNC_IMPL(__imp__sub_82EB3FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3FA8"))) PPC_WEAK_FUNC(sub_82EB3FA8);
PPC_FUNC_IMPL(__imp__sub_82EB3FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 492);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3fbc
	if (!cr6.eq) goto loc_82EB3FBC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3FBC:
	// lhz r3,494(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 494);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3FC4"))) PPC_WEAK_FUNC(sub_82EB3FC4);
PPC_FUNC_IMPL(__imp__sub_82EB3FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3FC8"))) PPC_WEAK_FUNC(sub_82EB3FC8);
PPC_FUNC_IMPL(__imp__sub_82EB3FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3fdc
	if (!cr6.eq) goto loc_82EB3FDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3FDC:
	// lhz r3,498(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 498);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3FE4"))) PPC_WEAK_FUNC(sub_82EB3FE4);
PPC_FUNC_IMPL(__imp__sub_82EB3FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3FE8"))) PPC_WEAK_FUNC(sub_82EB3FE8);
PPC_FUNC_IMPL(__imp__sub_82EB3FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,500(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb3ffc
	if (!cr6.eq) goto loc_82EB3FFC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB3FFC:
	// lhz r3,502(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 502);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4004"))) PPC_WEAK_FUNC(sub_82EB4004);
PPC_FUNC_IMPL(__imp__sub_82EB4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4008"))) PPC_WEAK_FUNC(sub_82EB4008);
PPC_FUNC_IMPL(__imp__sub_82EB4008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb401c
	if (!cr6.eq) goto loc_82EB401C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB401C:
	// lhz r3,506(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 506);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4024"))) PPC_WEAK_FUNC(sub_82EB4024);
PPC_FUNC_IMPL(__imp__sub_82EB4024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4028"))) PPC_WEAK_FUNC(sub_82EB4028);
PPC_FUNC_IMPL(__imp__sub_82EB4028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 508);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb403c
	if (!cr6.eq) goto loc_82EB403C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB403C:
	// lhz r3,510(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 510);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4044"))) PPC_WEAK_FUNC(sub_82EB4044);
PPC_FUNC_IMPL(__imp__sub_82EB4044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4048"))) PPC_WEAK_FUNC(sub_82EB4048);
PPC_FUNC_IMPL(__imp__sub_82EB4048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,512(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 512);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb405c
	if (!cr6.eq) goto loc_82EB405C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB405C:
	// lhz r3,514(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 514);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4064"))) PPC_WEAK_FUNC(sub_82EB4064);
PPC_FUNC_IMPL(__imp__sub_82EB4064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4068"))) PPC_WEAK_FUNC(sub_82EB4068);
PPC_FUNC_IMPL(__imp__sub_82EB4068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb407c
	if (!cr6.eq) goto loc_82EB407C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB407C:
	// lhz r3,518(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 518);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4084"))) PPC_WEAK_FUNC(sub_82EB4084);
PPC_FUNC_IMPL(__imp__sub_82EB4084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4088"))) PPC_WEAK_FUNC(sub_82EB4088);
PPC_FUNC_IMPL(__imp__sub_82EB4088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 520);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb409c
	if (!cr6.eq) goto loc_82EB409C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB409C:
	// lhz r3,522(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 522);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB40A4"))) PPC_WEAK_FUNC(sub_82EB40A4);
PPC_FUNC_IMPL(__imp__sub_82EB40A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB40A8"))) PPC_WEAK_FUNC(sub_82EB40A8);
PPC_FUNC_IMPL(__imp__sub_82EB40A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 524);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb40bc
	if (!cr6.eq) goto loc_82EB40BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB40BC:
	// lhz r3,526(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 526);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB40C4"))) PPC_WEAK_FUNC(sub_82EB40C4);
PPC_FUNC_IMPL(__imp__sub_82EB40C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB40C8"))) PPC_WEAK_FUNC(sub_82EB40C8);
PPC_FUNC_IMPL(__imp__sub_82EB40C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb40dc
	if (!cr6.eq) goto loc_82EB40DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB40DC:
	// lhz r3,530(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 530);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB40E4"))) PPC_WEAK_FUNC(sub_82EB40E4);
PPC_FUNC_IMPL(__imp__sub_82EB40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB40E8"))) PPC_WEAK_FUNC(sub_82EB40E8);
PPC_FUNC_IMPL(__imp__sub_82EB40E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb40fc
	if (!cr6.eq) goto loc_82EB40FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB40FC:
	// lhz r3,534(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 534);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4104"))) PPC_WEAK_FUNC(sub_82EB4104);
PPC_FUNC_IMPL(__imp__sub_82EB4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4108"))) PPC_WEAK_FUNC(sub_82EB4108);
PPC_FUNC_IMPL(__imp__sub_82EB4108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb411c
	if (!cr6.eq) goto loc_82EB411C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB411C:
	// lhz r3,538(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 538);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4124"))) PPC_WEAK_FUNC(sub_82EB4124);
PPC_FUNC_IMPL(__imp__sub_82EB4124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4128"))) PPC_WEAK_FUNC(sub_82EB4128);
PPC_FUNC_IMPL(__imp__sub_82EB4128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 540);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb413c
	if (!cr6.eq) goto loc_82EB413C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB413C:
	// lhz r3,542(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 542);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4144"))) PPC_WEAK_FUNC(sub_82EB4144);
PPC_FUNC_IMPL(__imp__sub_82EB4144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4148"))) PPC_WEAK_FUNC(sub_82EB4148);
PPC_FUNC_IMPL(__imp__sub_82EB4148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,544(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb415c
	if (!cr6.eq) goto loc_82EB415C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB415C:
	// lhz r3,546(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 546);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4164"))) PPC_WEAK_FUNC(sub_82EB4164);
PPC_FUNC_IMPL(__imp__sub_82EB4164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4168"))) PPC_WEAK_FUNC(sub_82EB4168);
PPC_FUNC_IMPL(__imp__sub_82EB4168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 548);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb417c
	if (!cr6.eq) goto loc_82EB417C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB417C:
	// lhz r3,550(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 550);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4184"))) PPC_WEAK_FUNC(sub_82EB4184);
PPC_FUNC_IMPL(__imp__sub_82EB4184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4188"))) PPC_WEAK_FUNC(sub_82EB4188);
PPC_FUNC_IMPL(__imp__sub_82EB4188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 552);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb419c
	if (!cr6.eq) goto loc_82EB419C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB419C:
	// lhz r3,554(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 554);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB41A4"))) PPC_WEAK_FUNC(sub_82EB41A4);
PPC_FUNC_IMPL(__imp__sub_82EB41A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB41A8"))) PPC_WEAK_FUNC(sub_82EB41A8);
PPC_FUNC_IMPL(__imp__sub_82EB41A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,556(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb41bc
	if (!cr6.eq) goto loc_82EB41BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB41BC:
	// lhz r3,558(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 558);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB41C4"))) PPC_WEAK_FUNC(sub_82EB41C4);
PPC_FUNC_IMPL(__imp__sub_82EB41C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB41C8"))) PPC_WEAK_FUNC(sub_82EB41C8);
PPC_FUNC_IMPL(__imp__sub_82EB41C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 560);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb41dc
	if (!cr6.eq) goto loc_82EB41DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB41DC:
	// lhz r3,562(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 562);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB41E4"))) PPC_WEAK_FUNC(sub_82EB41E4);
PPC_FUNC_IMPL(__imp__sub_82EB41E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB41E8"))) PPC_WEAK_FUNC(sub_82EB41E8);
PPC_FUNC_IMPL(__imp__sub_82EB41E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 564);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb41fc
	if (!cr6.eq) goto loc_82EB41FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB41FC:
	// lhz r3,566(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 566);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4204"))) PPC_WEAK_FUNC(sub_82EB4204);
PPC_FUNC_IMPL(__imp__sub_82EB4204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4208"))) PPC_WEAK_FUNC(sub_82EB4208);
PPC_FUNC_IMPL(__imp__sub_82EB4208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb421c
	if (!cr6.eq) goto loc_82EB421C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB421C:
	// lhz r3,570(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 570);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4224"))) PPC_WEAK_FUNC(sub_82EB4224);
PPC_FUNC_IMPL(__imp__sub_82EB4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4228"))) PPC_WEAK_FUNC(sub_82EB4228);
PPC_FUNC_IMPL(__imp__sub_82EB4228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 572);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb423c
	if (!cr6.eq) goto loc_82EB423C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB423C:
	// lhz r3,574(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 574);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4244"))) PPC_WEAK_FUNC(sub_82EB4244);
PPC_FUNC_IMPL(__imp__sub_82EB4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4248"))) PPC_WEAK_FUNC(sub_82EB4248);
PPC_FUNC_IMPL(__imp__sub_82EB4248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,576(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb425c
	if (!cr6.eq) goto loc_82EB425C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB425C:
	// lhz r3,578(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 578);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4264"))) PPC_WEAK_FUNC(sub_82EB4264);
PPC_FUNC_IMPL(__imp__sub_82EB4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4268"))) PPC_WEAK_FUNC(sub_82EB4268);
PPC_FUNC_IMPL(__imp__sub_82EB4268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,580(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 580);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb427c
	if (!cr6.eq) goto loc_82EB427C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB427C:
	// lhz r3,582(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 582);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4284"))) PPC_WEAK_FUNC(sub_82EB4284);
PPC_FUNC_IMPL(__imp__sub_82EB4284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4288"))) PPC_WEAK_FUNC(sub_82EB4288);
PPC_FUNC_IMPL(__imp__sub_82EB4288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,584(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb429c
	if (!cr6.eq) goto loc_82EB429C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB429C:
	// lhz r3,586(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 586);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB42A4"))) PPC_WEAK_FUNC(sub_82EB42A4);
PPC_FUNC_IMPL(__imp__sub_82EB42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB42A8"))) PPC_WEAK_FUNC(sub_82EB42A8);
PPC_FUNC_IMPL(__imp__sub_82EB42A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb42bc
	if (!cr6.eq) goto loc_82EB42BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB42BC:
	// lhz r3,590(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 590);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB42C4"))) PPC_WEAK_FUNC(sub_82EB42C4);
PPC_FUNC_IMPL(__imp__sub_82EB42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB42C8"))) PPC_WEAK_FUNC(sub_82EB42C8);
PPC_FUNC_IMPL(__imp__sub_82EB42C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 592);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb42dc
	if (!cr6.eq) goto loc_82EB42DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB42DC:
	// lhz r3,594(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 594);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB42E4"))) PPC_WEAK_FUNC(sub_82EB42E4);
PPC_FUNC_IMPL(__imp__sub_82EB42E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB42E8"))) PPC_WEAK_FUNC(sub_82EB42E8);
PPC_FUNC_IMPL(__imp__sub_82EB42E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb42fc
	if (!cr6.eq) goto loc_82EB42FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB42FC:
	// lhz r3,598(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 598);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4304"))) PPC_WEAK_FUNC(sub_82EB4304);
PPC_FUNC_IMPL(__imp__sub_82EB4304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4308"))) PPC_WEAK_FUNC(sub_82EB4308);
PPC_FUNC_IMPL(__imp__sub_82EB4308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb431c
	if (!cr6.eq) goto loc_82EB431C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB431C:
	// lhz r3,602(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 602);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4324"))) PPC_WEAK_FUNC(sub_82EB4324);
PPC_FUNC_IMPL(__imp__sub_82EB4324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4328"))) PPC_WEAK_FUNC(sub_82EB4328);
PPC_FUNC_IMPL(__imp__sub_82EB4328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb433c
	if (!cr6.eq) goto loc_82EB433C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB433C:
	// lhz r3,606(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 606);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4344"))) PPC_WEAK_FUNC(sub_82EB4344);
PPC_FUNC_IMPL(__imp__sub_82EB4344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4348"))) PPC_WEAK_FUNC(sub_82EB4348);
PPC_FUNC_IMPL(__imp__sub_82EB4348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb435c
	if (!cr6.eq) goto loc_82EB435C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB435C:
	// lhz r3,610(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 610);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4364"))) PPC_WEAK_FUNC(sub_82EB4364);
PPC_FUNC_IMPL(__imp__sub_82EB4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4368"))) PPC_WEAK_FUNC(sub_82EB4368);
PPC_FUNC_IMPL(__imp__sub_82EB4368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb437c
	if (!cr6.eq) goto loc_82EB437C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB437C:
	// lhz r3,614(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 614);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4384"))) PPC_WEAK_FUNC(sub_82EB4384);
PPC_FUNC_IMPL(__imp__sub_82EB4384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4388"))) PPC_WEAK_FUNC(sub_82EB4388);
PPC_FUNC_IMPL(__imp__sub_82EB4388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,616(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb439c
	if (!cr6.eq) goto loc_82EB439C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB439C:
	// lhz r3,618(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 618);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB43A4"))) PPC_WEAK_FUNC(sub_82EB43A4);
PPC_FUNC_IMPL(__imp__sub_82EB43A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB43A8"))) PPC_WEAK_FUNC(sub_82EB43A8);
PPC_FUNC_IMPL(__imp__sub_82EB43A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 620);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb43c0
	if (!cr6.eq) goto loc_82EB43C0;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB43C0:
	// lwz r3,624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB43C8"))) PPC_WEAK_FUNC(sub_82EB43C8);
PPC_FUNC_IMPL(__imp__sub_82EB43C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 628);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb43e0
	if (!cr6.eq) goto loc_82EB43E0;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB43E0:
	// lwz r3,632(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB43E8"))) PPC_WEAK_FUNC(sub_82EB43E8);
PPC_FUNC_IMPL(__imp__sub_82EB43E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,636(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 636);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4400
	if (!cr6.eq) goto loc_82EB4400;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4400:
	// lwz r3,640(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4408"))) PPC_WEAK_FUNC(sub_82EB4408);
PPC_FUNC_IMPL(__imp__sub_82EB4408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,644(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 644);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4420
	if (!cr6.eq) goto loc_82EB4420;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4420:
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4428"))) PPC_WEAK_FUNC(sub_82EB4428);
PPC_FUNC_IMPL(__imp__sub_82EB4428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,652(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 652);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4440
	if (!cr6.eq) goto loc_82EB4440;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4440:
	// lwz r3,656(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4448"))) PPC_WEAK_FUNC(sub_82EB4448);
PPC_FUNC_IMPL(__imp__sub_82EB4448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,660(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 660);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4460
	if (!cr6.eq) goto loc_82EB4460;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4460:
	// lwz r3,664(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4468"))) PPC_WEAK_FUNC(sub_82EB4468);
PPC_FUNC_IMPL(__imp__sub_82EB4468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 668);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4480
	if (!cr6.eq) goto loc_82EB4480;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4480:
	// lwz r3,672(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4488"))) PPC_WEAK_FUNC(sub_82EB4488);
PPC_FUNC_IMPL(__imp__sub_82EB4488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,676(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb44a0
	if (!cr6.eq) goto loc_82EB44A0;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB44A0:
	// lwz r3,680(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB44A8"))) PPC_WEAK_FUNC(sub_82EB44A8);
PPC_FUNC_IMPL(__imp__sub_82EB44A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 684);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb44c0
	if (!cr6.eq) goto loc_82EB44C0;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB44C0:
	// lwz r3,688(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB44C8"))) PPC_WEAK_FUNC(sub_82EB44C8);
PPC_FUNC_IMPL(__imp__sub_82EB44C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,692(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb44e0
	if (!cr6.eq) goto loc_82EB44E0;
	// lis r3,127
	ctx.r3.s64 = 8323072;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB44E0:
	// lwz r3,696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB44E8"))) PPC_WEAK_FUNC(sub_82EB44E8);
PPC_FUNC_IMPL(__imp__sub_82EB44E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,700(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 700);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4500
	if (!cr6.eq) goto loc_82EB4500;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4500:
	// lwz r3,704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4508"))) PPC_WEAK_FUNC(sub_82EB4508);
PPC_FUNC_IMPL(__imp__sub_82EB4508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 708);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4520
	if (!cr6.eq) goto loc_82EB4520;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4520:
	// lwz r3,712(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4528"))) PPC_WEAK_FUNC(sub_82EB4528);
PPC_FUNC_IMPL(__imp__sub_82EB4528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,716(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 716);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4540
	if (!cr6.eq) goto loc_82EB4540;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4540:
	// lwz r3,720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4548"))) PPC_WEAK_FUNC(sub_82EB4548);
PPC_FUNC_IMPL(__imp__sub_82EB4548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4560
	if (!cr6.eq) goto loc_82EB4560;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4560:
	// lwz r3,728(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4568"))) PPC_WEAK_FUNC(sub_82EB4568);
PPC_FUNC_IMPL(__imp__sub_82EB4568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,732(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 732);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4580
	if (!cr6.eq) goto loc_82EB4580;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4580:
	// lwz r3,736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4588"))) PPC_WEAK_FUNC(sub_82EB4588);
PPC_FUNC_IMPL(__imp__sub_82EB4588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,740(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 740);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb45a0
	if (!cr6.eq) goto loc_82EB45A0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB45A0:
	// lwz r3,744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB45A8"))) PPC_WEAK_FUNC(sub_82EB45A8);
PPC_FUNC_IMPL(__imp__sub_82EB45A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,748(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 748);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb45c0
	if (!cr6.eq) goto loc_82EB45C0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB45C0:
	// lwz r3,752(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 752);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB45C8"))) PPC_WEAK_FUNC(sub_82EB45C8);
PPC_FUNC_IMPL(__imp__sub_82EB45C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb45e0
	if (!cr6.eq) goto loc_82EB45E0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB45E0:
	// lwz r3,760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB45E8"))) PPC_WEAK_FUNC(sub_82EB45E8);
PPC_FUNC_IMPL(__imp__sub_82EB45E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4600
	if (!cr6.eq) goto loc_82EB4600;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4600:
	// lwz r3,768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 768);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4608"))) PPC_WEAK_FUNC(sub_82EB4608);
PPC_FUNC_IMPL(__imp__sub_82EB4608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,772(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 772);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4620
	if (!cr6.eq) goto loc_82EB4620;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4620:
	// lwz r3,776(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4628"))) PPC_WEAK_FUNC(sub_82EB4628);
PPC_FUNC_IMPL(__imp__sub_82EB4628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 780);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4640
	if (!cr6.eq) goto loc_82EB4640;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4640:
	// lwz r3,784(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4648"))) PPC_WEAK_FUNC(sub_82EB4648);
PPC_FUNC_IMPL(__imp__sub_82EB4648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 788);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4660
	if (!cr6.eq) goto loc_82EB4660;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4660:
	// lwz r3,792(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4668"))) PPC_WEAK_FUNC(sub_82EB4668);
PPC_FUNC_IMPL(__imp__sub_82EB4668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 796);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4680
	if (!cr6.eq) goto loc_82EB4680;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4680:
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4688"))) PPC_WEAK_FUNC(sub_82EB4688);
PPC_FUNC_IMPL(__imp__sub_82EB4688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,804(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 804);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb46a0
	if (!cr6.eq) goto loc_82EB46A0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB46A0:
	// lwz r3,808(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 808);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB46A8"))) PPC_WEAK_FUNC(sub_82EB46A8);
PPC_FUNC_IMPL(__imp__sub_82EB46A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,812(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 812);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb46c0
	if (!cr6.eq) goto loc_82EB46C0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB46C0:
	// lwz r3,816(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB46C8"))) PPC_WEAK_FUNC(sub_82EB46C8);
PPC_FUNC_IMPL(__imp__sub_82EB46C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,820(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 820);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb46e0
	if (!cr6.eq) goto loc_82EB46E0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB46E0:
	// lwz r3,824(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB46E8"))) PPC_WEAK_FUNC(sub_82EB46E8);
PPC_FUNC_IMPL(__imp__sub_82EB46E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,828(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 828);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4700
	if (!cr6.eq) goto loc_82EB4700;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4700:
	// lwz r3,832(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4708"))) PPC_WEAK_FUNC(sub_82EB4708);
PPC_FUNC_IMPL(__imp__sub_82EB4708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,836(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 836);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4720
	if (!cr6.eq) goto loc_82EB4720;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4720:
	// lwz r3,840(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4728"))) PPC_WEAK_FUNC(sub_82EB4728);
PPC_FUNC_IMPL(__imp__sub_82EB4728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,844(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 844);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4740
	if (!cr6.eq) goto loc_82EB4740;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4740:
	// lwz r3,848(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4748"))) PPC_WEAK_FUNC(sub_82EB4748);
PPC_FUNC_IMPL(__imp__sub_82EB4748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,852(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 852);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4760
	if (!cr6.eq) goto loc_82EB4760;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4760:
	// lwz r3,856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 856);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4768"))) PPC_WEAK_FUNC(sub_82EB4768);
PPC_FUNC_IMPL(__imp__sub_82EB4768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,860(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 860);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4780
	if (!cr6.eq) goto loc_82EB4780;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4780:
	// lwz r3,864(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4788"))) PPC_WEAK_FUNC(sub_82EB4788);
PPC_FUNC_IMPL(__imp__sub_82EB4788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,868(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 868);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb47a0
	if (!cr6.eq) goto loc_82EB47A0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB47A0:
	// lwz r3,872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 872);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB47A8"))) PPC_WEAK_FUNC(sub_82EB47A8);
PPC_FUNC_IMPL(__imp__sub_82EB47A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,876(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 876);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb47c0
	if (!cr6.eq) goto loc_82EB47C0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB47C0:
	// lwz r3,880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB47C8"))) PPC_WEAK_FUNC(sub_82EB47C8);
PPC_FUNC_IMPL(__imp__sub_82EB47C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,884(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 884);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb47e0
	if (!cr6.eq) goto loc_82EB47E0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB47E0:
	// lwz r3,888(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 888);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB47E8"))) PPC_WEAK_FUNC(sub_82EB47E8);
PPC_FUNC_IMPL(__imp__sub_82EB47E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,892(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 892);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4800
	if (!cr6.eq) goto loc_82EB4800;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4800:
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4808"))) PPC_WEAK_FUNC(sub_82EB4808);
PPC_FUNC_IMPL(__imp__sub_82EB4808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 900);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4820
	if (!cr6.eq) goto loc_82EB4820;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4820:
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4828"))) PPC_WEAK_FUNC(sub_82EB4828);
PPC_FUNC_IMPL(__imp__sub_82EB4828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,908(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 908);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4840
	if (!cr6.eq) goto loc_82EB4840;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4840:
	// lwz r3,912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4848"))) PPC_WEAK_FUNC(sub_82EB4848);
PPC_FUNC_IMPL(__imp__sub_82EB4848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,916(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4860
	if (!cr6.eq) goto loc_82EB4860;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4860:
	// lwz r3,920(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4868"))) PPC_WEAK_FUNC(sub_82EB4868);
PPC_FUNC_IMPL(__imp__sub_82EB4868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 924);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4880
	if (!cr6.eq) goto loc_82EB4880;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4880:
	// lwz r3,928(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 928);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4888"))) PPC_WEAK_FUNC(sub_82EB4888);
PPC_FUNC_IMPL(__imp__sub_82EB4888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,932(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 932);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb48a0
	if (!cr6.eq) goto loc_82EB48A0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB48A0:
	// lwz r3,936(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 936);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB48A8"))) PPC_WEAK_FUNC(sub_82EB48A8);
PPC_FUNC_IMPL(__imp__sub_82EB48A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,940(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 940);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb48c0
	if (!cr6.eq) goto loc_82EB48C0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB48C0:
	// lwz r3,944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 944);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB48C8"))) PPC_WEAK_FUNC(sub_82EB48C8);
PPC_FUNC_IMPL(__imp__sub_82EB48C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,948(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb48e0
	if (!cr6.eq) goto loc_82EB48E0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB48E0:
	// lwz r3,952(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB48E8"))) PPC_WEAK_FUNC(sub_82EB48E8);
PPC_FUNC_IMPL(__imp__sub_82EB48E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,956(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4900
	if (!cr6.eq) goto loc_82EB4900;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4900:
	// lwz r3,960(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4908"))) PPC_WEAK_FUNC(sub_82EB4908);
PPC_FUNC_IMPL(__imp__sub_82EB4908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,964(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 964);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4920
	if (!cr6.eq) goto loc_82EB4920;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4920:
	// lwz r3,968(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 968);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4928"))) PPC_WEAK_FUNC(sub_82EB4928);
PPC_FUNC_IMPL(__imp__sub_82EB4928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,972(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 972);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4940
	if (!cr6.eq) goto loc_82EB4940;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4940:
	// lwz r3,976(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4948"))) PPC_WEAK_FUNC(sub_82EB4948);
PPC_FUNC_IMPL(__imp__sub_82EB4948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,980(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 980);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4960
	if (!cr6.eq) goto loc_82EB4960;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4960:
	// lwz r3,984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4968"))) PPC_WEAK_FUNC(sub_82EB4968);
PPC_FUNC_IMPL(__imp__sub_82EB4968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,988(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 988);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4980
	if (!cr6.eq) goto loc_82EB4980;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4980:
	// lwz r3,992(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 992);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4988"))) PPC_WEAK_FUNC(sub_82EB4988);
PPC_FUNC_IMPL(__imp__sub_82EB4988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,996(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 996);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb49a0
	if (!cr6.eq) goto loc_82EB49A0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB49A0:
	// lwz r3,1000(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB49A8"))) PPC_WEAK_FUNC(sub_82EB49A8);
PPC_FUNC_IMPL(__imp__sub_82EB49A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1004(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb49c0
	if (!cr6.eq) goto loc_82EB49C0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB49C0:
	// lwz r3,1008(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB49C8"))) PPC_WEAK_FUNC(sub_82EB49C8);
PPC_FUNC_IMPL(__imp__sub_82EB49C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1012(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb49e0
	if (!cr6.eq) goto loc_82EB49E0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB49E0:
	// lwz r3,1016(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1016);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB49E8"))) PPC_WEAK_FUNC(sub_82EB49E8);
PPC_FUNC_IMPL(__imp__sub_82EB49E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1020(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4a00
	if (!cr6.eq) goto loc_82EB4A00;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4A00:
	// lwz r3,1024(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4A08"))) PPC_WEAK_FUNC(sub_82EB4A08);
PPC_FUNC_IMPL(__imp__sub_82EB4A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1028(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1028);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4a20
	if (!cr6.eq) goto loc_82EB4A20;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4A20:
	// lwz r3,1032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4A28"))) PPC_WEAK_FUNC(sub_82EB4A28);
PPC_FUNC_IMPL(__imp__sub_82EB4A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1036(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4a40
	if (!cr6.eq) goto loc_82EB4A40;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4A40:
	// lwz r3,1040(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4A48"))) PPC_WEAK_FUNC(sub_82EB4A48);
PPC_FUNC_IMPL(__imp__sub_82EB4A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1044(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1044);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4a60
	if (!cr6.eq) goto loc_82EB4A60;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4A60:
	// lwz r3,1048(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4A68"))) PPC_WEAK_FUNC(sub_82EB4A68);
PPC_FUNC_IMPL(__imp__sub_82EB4A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1052(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1052);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4a80
	if (!cr6.eq) goto loc_82EB4A80;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4A80:
	// lwz r3,1056(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4A88"))) PPC_WEAK_FUNC(sub_82EB4A88);
PPC_FUNC_IMPL(__imp__sub_82EB4A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1060(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1060);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4aa0
	if (!cr6.eq) goto loc_82EB4AA0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4AA0:
	// lwz r3,1064(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4AA8"))) PPC_WEAK_FUNC(sub_82EB4AA8);
PPC_FUNC_IMPL(__imp__sub_82EB4AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1068(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1068);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4ac0
	if (!cr6.eq) goto loc_82EB4AC0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4AC0:
	// lwz r3,1072(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4AC8"))) PPC_WEAK_FUNC(sub_82EB4AC8);
PPC_FUNC_IMPL(__imp__sub_82EB4AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1076(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1076);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4ae0
	if (!cr6.eq) goto loc_82EB4AE0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4AE0:
	// lwz r3,1080(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4AE8"))) PPC_WEAK_FUNC(sub_82EB4AE8);
PPC_FUNC_IMPL(__imp__sub_82EB4AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1084(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1084);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4b00
	if (!cr6.eq) goto loc_82EB4B00;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4B00:
	// lwz r3,1088(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4B08"))) PPC_WEAK_FUNC(sub_82EB4B08);
PPC_FUNC_IMPL(__imp__sub_82EB4B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1092(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4b20
	if (!cr6.eq) goto loc_82EB4B20;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4B20:
	// lwz r3,1096(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4B28"))) PPC_WEAK_FUNC(sub_82EB4B28);
PPC_FUNC_IMPL(__imp__sub_82EB4B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1100(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4b40
	if (!cr6.eq) goto loc_82EB4B40;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4B40:
	// lwz r3,1104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4B48"))) PPC_WEAK_FUNC(sub_82EB4B48);
PPC_FUNC_IMPL(__imp__sub_82EB4B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4b60
	if (!cr6.eq) goto loc_82EB4B60;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4B60:
	// lwz r3,1112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4B68"))) PPC_WEAK_FUNC(sub_82EB4B68);
PPC_FUNC_IMPL(__imp__sub_82EB4B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4b80
	if (!cr6.eq) goto loc_82EB4B80;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4B80:
	// lwz r3,1120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4B88"))) PPC_WEAK_FUNC(sub_82EB4B88);
PPC_FUNC_IMPL(__imp__sub_82EB4B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1124(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4ba0
	if (!cr6.eq) goto loc_82EB4BA0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4BA0:
	// lwz r3,1128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4BA8"))) PPC_WEAK_FUNC(sub_82EB4BA8);
PPC_FUNC_IMPL(__imp__sub_82EB4BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4bc0
	if (!cr6.eq) goto loc_82EB4BC0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4BC0:
	// lwz r3,1136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4BC8"))) PPC_WEAK_FUNC(sub_82EB4BC8);
PPC_FUNC_IMPL(__imp__sub_82EB4BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1140(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4be0
	if (!cr6.eq) goto loc_82EB4BE0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4BE0:
	// lwz r3,1144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4BE8"))) PPC_WEAK_FUNC(sub_82EB4BE8);
PPC_FUNC_IMPL(__imp__sub_82EB4BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1148(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4c00
	if (!cr6.eq) goto loc_82EB4C00;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4C00:
	// lwz r3,1152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4C08"))) PPC_WEAK_FUNC(sub_82EB4C08);
PPC_FUNC_IMPL(__imp__sub_82EB4C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4c20
	if (!cr6.eq) goto loc_82EB4C20;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4C20:
	// lwz r3,1160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1160);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4C28"))) PPC_WEAK_FUNC(sub_82EB4C28);
PPC_FUNC_IMPL(__imp__sub_82EB4C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1164(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4c40
	if (!cr6.eq) goto loc_82EB4C40;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4C40:
	// lwz r3,1168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4C48"))) PPC_WEAK_FUNC(sub_82EB4C48);
PPC_FUNC_IMPL(__imp__sub_82EB4C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1172(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4c60
	if (!cr6.eq) goto loc_82EB4C60;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4C60:
	// lwz r3,1176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4C68"))) PPC_WEAK_FUNC(sub_82EB4C68);
PPC_FUNC_IMPL(__imp__sub_82EB4C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1180(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4c80
	if (!cr6.eq) goto loc_82EB4C80;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4C80:
	// lwz r3,1184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4C88"))) PPC_WEAK_FUNC(sub_82EB4C88);
PPC_FUNC_IMPL(__imp__sub_82EB4C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4ca0
	if (!cr6.eq) goto loc_82EB4CA0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4CA0:
	// lwz r3,1192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4CA8"))) PPC_WEAK_FUNC(sub_82EB4CA8);
PPC_FUNC_IMPL(__imp__sub_82EB4CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4cc0
	if (!cr6.eq) goto loc_82EB4CC0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4CC0:
	// lwz r3,1200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4CC8"))) PPC_WEAK_FUNC(sub_82EB4CC8);
PPC_FUNC_IMPL(__imp__sub_82EB4CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1204(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4ce0
	if (!cr6.eq) goto loc_82EB4CE0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4CE0:
	// lwz r3,1208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4CE8"))) PPC_WEAK_FUNC(sub_82EB4CE8);
PPC_FUNC_IMPL(__imp__sub_82EB4CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1212(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4d00
	if (!cr6.eq) goto loc_82EB4D00;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4D00:
	// lwz r3,1216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4D08"))) PPC_WEAK_FUNC(sub_82EB4D08);
PPC_FUNC_IMPL(__imp__sub_82EB4D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1220(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4d20
	if (!cr6.eq) goto loc_82EB4D20;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4D20:
	// lwz r3,1224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4D28"))) PPC_WEAK_FUNC(sub_82EB4D28);
PPC_FUNC_IMPL(__imp__sub_82EB4D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1228(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4d40
	if (!cr6.eq) goto loc_82EB4D40;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4D40:
	// lwz r3,1232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4D48"))) PPC_WEAK_FUNC(sub_82EB4D48);
PPC_FUNC_IMPL(__imp__sub_82EB4D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1236(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4d60
	if (!cr6.eq) goto loc_82EB4D60;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4D60:
	// lwz r3,1240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4D68"))) PPC_WEAK_FUNC(sub_82EB4D68);
PPC_FUNC_IMPL(__imp__sub_82EB4D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1244(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4d80
	if (!cr6.eq) goto loc_82EB4D80;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4D80:
	// lwz r3,1248(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4D88"))) PPC_WEAK_FUNC(sub_82EB4D88);
PPC_FUNC_IMPL(__imp__sub_82EB4D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4da0
	if (!cr6.eq) goto loc_82EB4DA0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4DA0:
	// lwz r3,1256(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4DA8"))) PPC_WEAK_FUNC(sub_82EB4DA8);
PPC_FUNC_IMPL(__imp__sub_82EB4DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1260(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4dc0
	if (!cr6.eq) goto loc_82EB4DC0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4DC0:
	// lwz r3,1264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1264);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4DC8"))) PPC_WEAK_FUNC(sub_82EB4DC8);
PPC_FUNC_IMPL(__imp__sub_82EB4DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1268(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4de0
	if (!cr6.eq) goto loc_82EB4DE0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4DE0:
	// lwz r3,1272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4DE8"))) PPC_WEAK_FUNC(sub_82EB4DE8);
PPC_FUNC_IMPL(__imp__sub_82EB4DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1276(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4e00
	if (!cr6.eq) goto loc_82EB4E00;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4E00:
	// lwz r3,1280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4E08"))) PPC_WEAK_FUNC(sub_82EB4E08);
PPC_FUNC_IMPL(__imp__sub_82EB4E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1284(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4e20
	if (!cr6.eq) goto loc_82EB4E20;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4E20:
	// lwz r3,1288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4E28"))) PPC_WEAK_FUNC(sub_82EB4E28);
PPC_FUNC_IMPL(__imp__sub_82EB4E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1292(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4e40
	if (!cr6.eq) goto loc_82EB4E40;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4E40:
	// lwz r3,1296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1296);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4E48"))) PPC_WEAK_FUNC(sub_82EB4E48);
PPC_FUNC_IMPL(__imp__sub_82EB4E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1300(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4e60
	if (!cr6.eq) goto loc_82EB4E60;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4E60:
	// lwz r3,1304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4E68"))) PPC_WEAK_FUNC(sub_82EB4E68);
PPC_FUNC_IMPL(__imp__sub_82EB4E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1308(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4e80
	if (!cr6.eq) goto loc_82EB4E80;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4E80:
	// lwz r3,1312(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4E88"))) PPC_WEAK_FUNC(sub_82EB4E88);
PPC_FUNC_IMPL(__imp__sub_82EB4E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1316(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4ea0
	if (!cr6.eq) goto loc_82EB4EA0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4EA0:
	// lwz r3,1320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4EA8"))) PPC_WEAK_FUNC(sub_82EB4EA8);
PPC_FUNC_IMPL(__imp__sub_82EB4EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1324(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4ec0
	if (!cr6.eq) goto loc_82EB4EC0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4EC0:
	// lwz r3,1328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4EC8"))) PPC_WEAK_FUNC(sub_82EB4EC8);
PPC_FUNC_IMPL(__imp__sub_82EB4EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1332(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4ee0
	if (!cr6.eq) goto loc_82EB4EE0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4EE0:
	// lwz r3,1336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1336);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4EE8"))) PPC_WEAK_FUNC(sub_82EB4EE8);
PPC_FUNC_IMPL(__imp__sub_82EB4EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1340(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1340);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4f00
	if (!cr6.eq) goto loc_82EB4F00;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4F00:
	// lwz r3,1344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4F08"))) PPC_WEAK_FUNC(sub_82EB4F08);
PPC_FUNC_IMPL(__imp__sub_82EB4F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1348(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4f20
	if (!cr6.eq) goto loc_82EB4F20;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4F20:
	// lwz r3,1352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4F28"))) PPC_WEAK_FUNC(sub_82EB4F28);
PPC_FUNC_IMPL(__imp__sub_82EB4F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4f40
	if (!cr6.eq) goto loc_82EB4F40;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4F40:
	// lwz r3,1360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4F48"))) PPC_WEAK_FUNC(sub_82EB4F48);
PPC_FUNC_IMPL(__imp__sub_82EB4F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1364(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4f60
	if (!cr6.eq) goto loc_82EB4F60;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4F60:
	// lwz r3,1368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4F68"))) PPC_WEAK_FUNC(sub_82EB4F68);
PPC_FUNC_IMPL(__imp__sub_82EB4F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4f80
	if (!cr6.eq) goto loc_82EB4F80;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4F80:
	// lwz r3,1376(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4F88"))) PPC_WEAK_FUNC(sub_82EB4F88);
PPC_FUNC_IMPL(__imp__sub_82EB4F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1380(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4fa0
	if (!cr6.eq) goto loc_82EB4FA0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4FA0:
	// lwz r3,1384(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4FA8"))) PPC_WEAK_FUNC(sub_82EB4FA8);
PPC_FUNC_IMPL(__imp__sub_82EB4FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1388(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1388);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4fc0
	if (!cr6.eq) goto loc_82EB4FC0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4FC0:
	// lwz r3,1392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4FC8"))) PPC_WEAK_FUNC(sub_82EB4FC8);
PPC_FUNC_IMPL(__imp__sub_82EB4FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1396);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb4fe0
	if (!cr6.eq) goto loc_82EB4FE0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB4FE0:
	// lwz r3,1400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4FE8"))) PPC_WEAK_FUNC(sub_82EB4FE8);
PPC_FUNC_IMPL(__imp__sub_82EB4FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5000
	if (!cr6.eq) goto loc_82EB5000;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5000:
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5008"))) PPC_WEAK_FUNC(sub_82EB5008);
PPC_FUNC_IMPL(__imp__sub_82EB5008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5020
	if (!cr6.eq) goto loc_82EB5020;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5020:
	// lwz r3,1416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5028"))) PPC_WEAK_FUNC(sub_82EB5028);
PPC_FUNC_IMPL(__imp__sub_82EB5028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1420(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5040
	if (!cr6.eq) goto loc_82EB5040;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5040:
	// lwz r3,1424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5048"))) PPC_WEAK_FUNC(sub_82EB5048);
PPC_FUNC_IMPL(__imp__sub_82EB5048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1428(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5060
	if (!cr6.eq) goto loc_82EB5060;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5060:
	// lwz r3,1432(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1432);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5068"))) PPC_WEAK_FUNC(sub_82EB5068);
PPC_FUNC_IMPL(__imp__sub_82EB5068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1436(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5080
	if (!cr6.eq) goto loc_82EB5080;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5080:
	// lwz r3,1440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1440);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5088"))) PPC_WEAK_FUNC(sub_82EB5088);
PPC_FUNC_IMPL(__imp__sub_82EB5088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1444(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb50a0
	if (!cr6.eq) goto loc_82EB50A0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB50A0:
	// lwz r3,1448(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB50A8"))) PPC_WEAK_FUNC(sub_82EB50A8);
PPC_FUNC_IMPL(__imp__sub_82EB50A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1452(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1452);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb50c0
	if (!cr6.eq) goto loc_82EB50C0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB50C0:
	// lwz r3,1456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB50C8"))) PPC_WEAK_FUNC(sub_82EB50C8);
PPC_FUNC_IMPL(__imp__sub_82EB50C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1460(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1460);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb50e0
	if (!cr6.eq) goto loc_82EB50E0;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB50E0:
	// lwz r3,1464(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB50E8"))) PPC_WEAK_FUNC(sub_82EB50E8);
PPC_FUNC_IMPL(__imp__sub_82EB50E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1468(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1468);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5100
	if (!cr6.eq) goto loc_82EB5100;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5100:
	// lwz r3,1472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5108"))) PPC_WEAK_FUNC(sub_82EB5108);
PPC_FUNC_IMPL(__imp__sub_82EB5108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1476(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1476);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5120
	if (!cr6.eq) goto loc_82EB5120;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5120:
	// lwz r3,1480(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1480);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5128"))) PPC_WEAK_FUNC(sub_82EB5128);
PPC_FUNC_IMPL(__imp__sub_82EB5128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1484(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5140
	if (!cr6.eq) goto loc_82EB5140;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5140:
	// lwz r3,1488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1488);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5148"))) PPC_WEAK_FUNC(sub_82EB5148);
PPC_FUNC_IMPL(__imp__sub_82EB5148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1492(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1492);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5160
	if (!cr6.eq) goto loc_82EB5160;
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5160:
	// lwz r3,1496(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1496);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5168"))) PPC_WEAK_FUNC(sub_82EB5168);
PPC_FUNC_IMPL(__imp__sub_82EB5168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1500(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1500);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5180
	if (!cr6.eq) goto loc_82EB5180;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5180:
	// lwz r3,1504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5188"))) PPC_WEAK_FUNC(sub_82EB5188);
PPC_FUNC_IMPL(__imp__sub_82EB5188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1508(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1508);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb51a0
	if (!cr6.eq) goto loc_82EB51A0;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB51A0:
	// lwz r3,1512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1512);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB51A8"))) PPC_WEAK_FUNC(sub_82EB51A8);
PPC_FUNC_IMPL(__imp__sub_82EB51A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1516(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb51c0
	if (!cr6.eq) goto loc_82EB51C0;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB51C0:
	// lwz r3,1520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB51C8"))) PPC_WEAK_FUNC(sub_82EB51C8);
PPC_FUNC_IMPL(__imp__sub_82EB51C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1524(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1524);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb51e0
	if (!cr6.eq) goto loc_82EB51E0;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB51E0:
	// lwz r3,1528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1528);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB51E8"))) PPC_WEAK_FUNC(sub_82EB51E8);
PPC_FUNC_IMPL(__imp__sub_82EB51E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1532(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5200
	if (!cr6.eq) goto loc_82EB5200;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5200:
	// lwz r3,1536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5208"))) PPC_WEAK_FUNC(sub_82EB5208);
PPC_FUNC_IMPL(__imp__sub_82EB5208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1540(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1540);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5220
	if (!cr6.eq) goto loc_82EB5220;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5220:
	// lwz r3,1544(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5228"))) PPC_WEAK_FUNC(sub_82EB5228);
PPC_FUNC_IMPL(__imp__sub_82EB5228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1548(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1548);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5240
	if (!cr6.eq) goto loc_82EB5240;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5240:
	// lwz r3,1552(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5248"))) PPC_WEAK_FUNC(sub_82EB5248);
PPC_FUNC_IMPL(__imp__sub_82EB5248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1556(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5260
	if (!cr6.eq) goto loc_82EB5260;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5260:
	// lwz r3,1560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5268"))) PPC_WEAK_FUNC(sub_82EB5268);
PPC_FUNC_IMPL(__imp__sub_82EB5268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1564(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1564);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb5280
	if (!cr6.eq) goto loc_82EB5280;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB5280:
	// lwz r3,1568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5288"))) PPC_WEAK_FUNC(sub_82EB5288);
PPC_FUNC_IMPL(__imp__sub_82EB5288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1572(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1572);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb52a0
	if (!cr6.eq) goto loc_82EB52A0;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82EB52A0:
	// lwz r3,1576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB52A8"))) PPC_WEAK_FUNC(sub_82EB52A8);
PPC_FUNC_IMPL(__imp__sub_82EB52A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1580(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1580);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb52bc
	if (!cr6.eq) goto loc_82EB52BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB52BC:
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB52C4"))) PPC_WEAK_FUNC(sub_82EB52C4);
PPC_FUNC_IMPL(__imp__sub_82EB52C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB52C8"))) PPC_WEAK_FUNC(sub_82EB52C8);
PPC_FUNC_IMPL(__imp__sub_82EB52C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1588(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb52dc
	if (!cr6.eq) goto loc_82EB52DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB52DC:
	// lwz r3,1592(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1592);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB52E4"))) PPC_WEAK_FUNC(sub_82EB52E4);
PPC_FUNC_IMPL(__imp__sub_82EB52E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB52E8"))) PPC_WEAK_FUNC(sub_82EB52E8);
PPC_FUNC_IMPL(__imp__sub_82EB52E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1596(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb52fc
	if (!cr6.eq) goto loc_82EB52FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB52FC:
	// lwz r3,1600(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1600);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5304"))) PPC_WEAK_FUNC(sub_82EB5304);
PPC_FUNC_IMPL(__imp__sub_82EB5304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5308"))) PPC_WEAK_FUNC(sub_82EB5308);
PPC_FUNC_IMPL(__imp__sub_82EB5308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1604(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb531c
	if (!cr6.eq) goto loc_82EB531C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB531C:
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5324"))) PPC_WEAK_FUNC(sub_82EB5324);
PPC_FUNC_IMPL(__imp__sub_82EB5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5328"))) PPC_WEAK_FUNC(sub_82EB5328);
PPC_FUNC_IMPL(__imp__sub_82EB5328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1612(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb533c
	if (!cr6.eq) goto loc_82EB533C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB533C:
	// lwz r3,1616(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1616);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5344"))) PPC_WEAK_FUNC(sub_82EB5344);
PPC_FUNC_IMPL(__imp__sub_82EB5344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5348"))) PPC_WEAK_FUNC(sub_82EB5348);
PPC_FUNC_IMPL(__imp__sub_82EB5348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1620(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1620);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb535c
	if (!cr6.eq) goto loc_82EB535C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB535C:
	// lwz r3,1624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5364"))) PPC_WEAK_FUNC(sub_82EB5364);
PPC_FUNC_IMPL(__imp__sub_82EB5364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5368"))) PPC_WEAK_FUNC(sub_82EB5368);
PPC_FUNC_IMPL(__imp__sub_82EB5368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1628(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1628);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb537c
	if (!cr6.eq) goto loc_82EB537C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB537C:
	// lwz r3,1632(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1632);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5384"))) PPC_WEAK_FUNC(sub_82EB5384);
PPC_FUNC_IMPL(__imp__sub_82EB5384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5388"))) PPC_WEAK_FUNC(sub_82EB5388);
PPC_FUNC_IMPL(__imp__sub_82EB5388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1636(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1636);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb539c
	if (!cr6.eq) goto loc_82EB539C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB539C:
	// lwz r3,1640(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1640);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB53A4"))) PPC_WEAK_FUNC(sub_82EB53A4);
PPC_FUNC_IMPL(__imp__sub_82EB53A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB53A8"))) PPC_WEAK_FUNC(sub_82EB53A8);
PPC_FUNC_IMPL(__imp__sub_82EB53A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1644(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1644);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb53bc
	if (!cr6.eq) goto loc_82EB53BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB53BC:
	// lwz r3,1648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB53C4"))) PPC_WEAK_FUNC(sub_82EB53C4);
PPC_FUNC_IMPL(__imp__sub_82EB53C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB53C8"))) PPC_WEAK_FUNC(sub_82EB53C8);
PPC_FUNC_IMPL(__imp__sub_82EB53C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1652(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1652);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb53dc
	if (!cr6.eq) goto loc_82EB53DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB53DC:
	// lwz r3,1656(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB53E4"))) PPC_WEAK_FUNC(sub_82EB53E4);
PPC_FUNC_IMPL(__imp__sub_82EB53E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB53E8"))) PPC_WEAK_FUNC(sub_82EB53E8);
PPC_FUNC_IMPL(__imp__sub_82EB53E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1660(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1660);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb53fc
	if (!cr6.eq) goto loc_82EB53FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB53FC:
	// lwz r3,1664(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5404"))) PPC_WEAK_FUNC(sub_82EB5404);
PPC_FUNC_IMPL(__imp__sub_82EB5404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5408"))) PPC_WEAK_FUNC(sub_82EB5408);
PPC_FUNC_IMPL(__imp__sub_82EB5408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1668(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1668);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb541c
	if (!cr6.eq) goto loc_82EB541C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB541C:
	// lwz r3,1672(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1672);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5424"))) PPC_WEAK_FUNC(sub_82EB5424);
PPC_FUNC_IMPL(__imp__sub_82EB5424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5428"))) PPC_WEAK_FUNC(sub_82EB5428);
PPC_FUNC_IMPL(__imp__sub_82EB5428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1676(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb543c
	if (!cr6.eq) goto loc_82EB543C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB543C:
	// lwz r3,1680(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1680);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5444"))) PPC_WEAK_FUNC(sub_82EB5444);
PPC_FUNC_IMPL(__imp__sub_82EB5444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5448"))) PPC_WEAK_FUNC(sub_82EB5448);
PPC_FUNC_IMPL(__imp__sub_82EB5448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1684(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1684);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eb545c
	if (!cr6.eq) goto loc_82EB545C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB545C:
	// lwz r3,1688(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1688);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5464"))) PPC_WEAK_FUNC(sub_82EB5464);
PPC_FUNC_IMPL(__imp__sub_82EB5464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

