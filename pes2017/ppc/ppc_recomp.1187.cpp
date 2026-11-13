#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83D31974"))) PPC_WEAK_FUNC(sub_83D31974);
PPC_FUNC_IMPL(__imp__sub_83D31974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31978"))) PPC_WEAK_FUNC(sub_83D31978);
PPC_FUNC_IMPL(__imp__sub_83D31978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3197C"))) PPC_WEAK_FUNC(sub_83D3197C);
PPC_FUNC_IMPL(__imp__sub_83D3197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31980"))) PPC_WEAK_FUNC(sub_83D31980);
PPC_FUNC_IMPL(__imp__sub_83D31980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31984"))) PPC_WEAK_FUNC(sub_83D31984);
PPC_FUNC_IMPL(__imp__sub_83D31984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31988"))) PPC_WEAK_FUNC(sub_83D31988);
PPC_FUNC_IMPL(__imp__sub_83D31988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3198C"))) PPC_WEAK_FUNC(sub_83D3198C);
PPC_FUNC_IMPL(__imp__sub_83D3198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31990"))) PPC_WEAK_FUNC(sub_83D31990);
PPC_FUNC_IMPL(__imp__sub_83D31990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31994"))) PPC_WEAK_FUNC(sub_83D31994);
PPC_FUNC_IMPL(__imp__sub_83D31994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31998"))) PPC_WEAK_FUNC(sub_83D31998);
PPC_FUNC_IMPL(__imp__sub_83D31998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D3199C"))) PPC_WEAK_FUNC(sub_83D3199C);
PPC_FUNC_IMPL(__imp__sub_83D3199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D319A0"))) PPC_WEAK_FUNC(sub_83D319A0);
PPC_FUNC_IMPL(__imp__sub_83D319A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D319A4"))) PPC_WEAK_FUNC(sub_83D319A4);
PPC_FUNC_IMPL(__imp__sub_83D319A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D319A8"))) PPC_WEAK_FUNC(sub_83D319A8);
PPC_FUNC_IMPL(__imp__sub_83D319A8) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,22976
	ctx.r31.s64 = ctx.r11.s64 + 22976;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d319e0
	if (cr6.lt) goto loc_83D319E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D319E0;
	sub_825952B8(ctx, base);
loc_83D319E0:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D31A0C"))) PPC_WEAK_FUNC(sub_83D31A0C);
PPC_FUNC_IMPL(__imp__sub_83D31A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A10"))) PPC_WEAK_FUNC(sub_83D31A10);
PPC_FUNC_IMPL(__imp__sub_83D31A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A14"))) PPC_WEAK_FUNC(sub_83D31A14);
PPC_FUNC_IMPL(__imp__sub_83D31A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A18"))) PPC_WEAK_FUNC(sub_83D31A18);
PPC_FUNC_IMPL(__imp__sub_83D31A18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A1C"))) PPC_WEAK_FUNC(sub_83D31A1C);
PPC_FUNC_IMPL(__imp__sub_83D31A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A20"))) PPC_WEAK_FUNC(sub_83D31A20);
PPC_FUNC_IMPL(__imp__sub_83D31A20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A24"))) PPC_WEAK_FUNC(sub_83D31A24);
PPC_FUNC_IMPL(__imp__sub_83D31A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A28"))) PPC_WEAK_FUNC(sub_83D31A28);
PPC_FUNC_IMPL(__imp__sub_83D31A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A2C"))) PPC_WEAK_FUNC(sub_83D31A2C);
PPC_FUNC_IMPL(__imp__sub_83D31A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A30"))) PPC_WEAK_FUNC(sub_83D31A30);
PPC_FUNC_IMPL(__imp__sub_83D31A30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A34"))) PPC_WEAK_FUNC(sub_83D31A34);
PPC_FUNC_IMPL(__imp__sub_83D31A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A38"))) PPC_WEAK_FUNC(sub_83D31A38);
PPC_FUNC_IMPL(__imp__sub_83D31A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A3C"))) PPC_WEAK_FUNC(sub_83D31A3C);
PPC_FUNC_IMPL(__imp__sub_83D31A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A40"))) PPC_WEAK_FUNC(sub_83D31A40);
PPC_FUNC_IMPL(__imp__sub_83D31A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A44"))) PPC_WEAK_FUNC(sub_83D31A44);
PPC_FUNC_IMPL(__imp__sub_83D31A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A48"))) PPC_WEAK_FUNC(sub_83D31A48);
PPC_FUNC_IMPL(__imp__sub_83D31A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A4C"))) PPC_WEAK_FUNC(sub_83D31A4C);
PPC_FUNC_IMPL(__imp__sub_83D31A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A50"))) PPC_WEAK_FUNC(sub_83D31A50);
PPC_FUNC_IMPL(__imp__sub_83D31A50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A54"))) PPC_WEAK_FUNC(sub_83D31A54);
PPC_FUNC_IMPL(__imp__sub_83D31A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A58"))) PPC_WEAK_FUNC(sub_83D31A58);
PPC_FUNC_IMPL(__imp__sub_83D31A58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A5C"))) PPC_WEAK_FUNC(sub_83D31A5C);
PPC_FUNC_IMPL(__imp__sub_83D31A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A60"))) PPC_WEAK_FUNC(sub_83D31A60);
PPC_FUNC_IMPL(__imp__sub_83D31A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A64"))) PPC_WEAK_FUNC(sub_83D31A64);
PPC_FUNC_IMPL(__imp__sub_83D31A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A68"))) PPC_WEAK_FUNC(sub_83D31A68);
PPC_FUNC_IMPL(__imp__sub_83D31A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31A6C"))) PPC_WEAK_FUNC(sub_83D31A6C);
PPC_FUNC_IMPL(__imp__sub_83D31A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31A70"))) PPC_WEAK_FUNC(sub_83D31A70);
PPC_FUNC_IMPL(__imp__sub_83D31A70) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,23108
	ctx.r31.s64 = ctx.r11.s64 + 23108;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d31aa8
	if (cr6.lt) goto loc_83D31AA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D31AA8;
	sub_825952B8(ctx, base);
loc_83D31AA8:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D31AD4"))) PPC_WEAK_FUNC(sub_83D31AD4);
PPC_FUNC_IMPL(__imp__sub_83D31AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31AD8"))) PPC_WEAK_FUNC(sub_83D31AD8);
PPC_FUNC_IMPL(__imp__sub_83D31AD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31ADC"))) PPC_WEAK_FUNC(sub_83D31ADC);
PPC_FUNC_IMPL(__imp__sub_83D31ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31AE0"))) PPC_WEAK_FUNC(sub_83D31AE0);
PPC_FUNC_IMPL(__imp__sub_83D31AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31AE4"))) PPC_WEAK_FUNC(sub_83D31AE4);
PPC_FUNC_IMPL(__imp__sub_83D31AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31AE8"))) PPC_WEAK_FUNC(sub_83D31AE8);
PPC_FUNC_IMPL(__imp__sub_83D31AE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31AEC"))) PPC_WEAK_FUNC(sub_83D31AEC);
PPC_FUNC_IMPL(__imp__sub_83D31AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31AF0"))) PPC_WEAK_FUNC(sub_83D31AF0);
PPC_FUNC_IMPL(__imp__sub_83D31AF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31AF4"))) PPC_WEAK_FUNC(sub_83D31AF4);
PPC_FUNC_IMPL(__imp__sub_83D31AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31AF8"))) PPC_WEAK_FUNC(sub_83D31AF8);
PPC_FUNC_IMPL(__imp__sub_83D31AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31AFC"))) PPC_WEAK_FUNC(sub_83D31AFC);
PPC_FUNC_IMPL(__imp__sub_83D31AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31B00"))) PPC_WEAK_FUNC(sub_83D31B00);
PPC_FUNC_IMPL(__imp__sub_83D31B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31B04"))) PPC_WEAK_FUNC(sub_83D31B04);
PPC_FUNC_IMPL(__imp__sub_83D31B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31B08"))) PPC_WEAK_FUNC(sub_83D31B08);
PPC_FUNC_IMPL(__imp__sub_83D31B08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31B0C"))) PPC_WEAK_FUNC(sub_83D31B0C);
PPC_FUNC_IMPL(__imp__sub_83D31B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31B10"))) PPC_WEAK_FUNC(sub_83D31B10);
PPC_FUNC_IMPL(__imp__sub_83D31B10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31B14"))) PPC_WEAK_FUNC(sub_83D31B14);
PPC_FUNC_IMPL(__imp__sub_83D31B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31B18"))) PPC_WEAK_FUNC(sub_83D31B18);
PPC_FUNC_IMPL(__imp__sub_83D31B18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31B1C"))) PPC_WEAK_FUNC(sub_83D31B1C);
PPC_FUNC_IMPL(__imp__sub_83D31B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31B20"))) PPC_WEAK_FUNC(sub_83D31B20);
PPC_FUNC_IMPL(__imp__sub_83D31B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31B24"))) PPC_WEAK_FUNC(sub_83D31B24);
PPC_FUNC_IMPL(__imp__sub_83D31B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31B28"))) PPC_WEAK_FUNC(sub_83D31B28);
PPC_FUNC_IMPL(__imp__sub_83D31B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31B2C"))) PPC_WEAK_FUNC(sub_83D31B2C);
PPC_FUNC_IMPL(__imp__sub_83D31B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31B30"))) PPC_WEAK_FUNC(sub_83D31B30);
PPC_FUNC_IMPL(__imp__sub_83D31B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31B34"))) PPC_WEAK_FUNC(sub_83D31B34);
PPC_FUNC_IMPL(__imp__sub_83D31B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31B38"))) PPC_WEAK_FUNC(sub_83D31B38);
PPC_FUNC_IMPL(__imp__sub_83D31B38) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,23240
	ctx.r31.s64 = ctx.r11.s64 + 23240;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d31b70
	if (cr6.lt) goto loc_83D31B70;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D31B70;
	sub_825952B8(ctx, base);
loc_83D31B70:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D31B9C"))) PPC_WEAK_FUNC(sub_83D31B9C);
PPC_FUNC_IMPL(__imp__sub_83D31B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BA0"))) PPC_WEAK_FUNC(sub_83D31BA0);
PPC_FUNC_IMPL(__imp__sub_83D31BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BA4"))) PPC_WEAK_FUNC(sub_83D31BA4);
PPC_FUNC_IMPL(__imp__sub_83D31BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BA8"))) PPC_WEAK_FUNC(sub_83D31BA8);
PPC_FUNC_IMPL(__imp__sub_83D31BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BAC"))) PPC_WEAK_FUNC(sub_83D31BAC);
PPC_FUNC_IMPL(__imp__sub_83D31BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BB0"))) PPC_WEAK_FUNC(sub_83D31BB0);
PPC_FUNC_IMPL(__imp__sub_83D31BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BB4"))) PPC_WEAK_FUNC(sub_83D31BB4);
PPC_FUNC_IMPL(__imp__sub_83D31BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BB8"))) PPC_WEAK_FUNC(sub_83D31BB8);
PPC_FUNC_IMPL(__imp__sub_83D31BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BBC"))) PPC_WEAK_FUNC(sub_83D31BBC);
PPC_FUNC_IMPL(__imp__sub_83D31BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BC0"))) PPC_WEAK_FUNC(sub_83D31BC0);
PPC_FUNC_IMPL(__imp__sub_83D31BC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BC4"))) PPC_WEAK_FUNC(sub_83D31BC4);
PPC_FUNC_IMPL(__imp__sub_83D31BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BC8"))) PPC_WEAK_FUNC(sub_83D31BC8);
PPC_FUNC_IMPL(__imp__sub_83D31BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BCC"))) PPC_WEAK_FUNC(sub_83D31BCC);
PPC_FUNC_IMPL(__imp__sub_83D31BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BD0"))) PPC_WEAK_FUNC(sub_83D31BD0);
PPC_FUNC_IMPL(__imp__sub_83D31BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BD4"))) PPC_WEAK_FUNC(sub_83D31BD4);
PPC_FUNC_IMPL(__imp__sub_83D31BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BD8"))) PPC_WEAK_FUNC(sub_83D31BD8);
PPC_FUNC_IMPL(__imp__sub_83D31BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BDC"))) PPC_WEAK_FUNC(sub_83D31BDC);
PPC_FUNC_IMPL(__imp__sub_83D31BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BE0"))) PPC_WEAK_FUNC(sub_83D31BE0);
PPC_FUNC_IMPL(__imp__sub_83D31BE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BE4"))) PPC_WEAK_FUNC(sub_83D31BE4);
PPC_FUNC_IMPL(__imp__sub_83D31BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BE8"))) PPC_WEAK_FUNC(sub_83D31BE8);
PPC_FUNC_IMPL(__imp__sub_83D31BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BEC"))) PPC_WEAK_FUNC(sub_83D31BEC);
PPC_FUNC_IMPL(__imp__sub_83D31BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BF0"))) PPC_WEAK_FUNC(sub_83D31BF0);
PPC_FUNC_IMPL(__imp__sub_83D31BF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BF4"))) PPC_WEAK_FUNC(sub_83D31BF4);
PPC_FUNC_IMPL(__imp__sub_83D31BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31BF8"))) PPC_WEAK_FUNC(sub_83D31BF8);
PPC_FUNC_IMPL(__imp__sub_83D31BF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31BFC"))) PPC_WEAK_FUNC(sub_83D31BFC);
PPC_FUNC_IMPL(__imp__sub_83D31BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31C00"))) PPC_WEAK_FUNC(sub_83D31C00);
PPC_FUNC_IMPL(__imp__sub_83D31C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-3992
	ctx.r3.s64 = ctx.r11.s64 + -3992;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D31C0C"))) PPC_WEAK_FUNC(sub_83D31C0C);
PPC_FUNC_IMPL(__imp__sub_83D31C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31C10"))) PPC_WEAK_FUNC(sub_83D31C10);
PPC_FUNC_IMPL(__imp__sub_83D31C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31C14"))) PPC_WEAK_FUNC(sub_83D31C14);
PPC_FUNC_IMPL(__imp__sub_83D31C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31C18"))) PPC_WEAK_FUNC(sub_83D31C18);
PPC_FUNC_IMPL(__imp__sub_83D31C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31C1C"))) PPC_WEAK_FUNC(sub_83D31C1C);
PPC_FUNC_IMPL(__imp__sub_83D31C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31C20"))) PPC_WEAK_FUNC(sub_83D31C20);
PPC_FUNC_IMPL(__imp__sub_83D31C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31C24"))) PPC_WEAK_FUNC(sub_83D31C24);
PPC_FUNC_IMPL(__imp__sub_83D31C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31C28"))) PPC_WEAK_FUNC(sub_83D31C28);
PPC_FUNC_IMPL(__imp__sub_83D31C28) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,23396
	ctx.r31.s64 = ctx.r11.s64 + 23396;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d31c60
	if (cr6.lt) goto loc_83D31C60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D31C60;
	sub_825952B8(ctx, base);
loc_83D31C60:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D31C8C"))) PPC_WEAK_FUNC(sub_83D31C8C);
PPC_FUNC_IMPL(__imp__sub_83D31C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31C90"))) PPC_WEAK_FUNC(sub_83D31C90);
PPC_FUNC_IMPL(__imp__sub_83D31C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31C94"))) PPC_WEAK_FUNC(sub_83D31C94);
PPC_FUNC_IMPL(__imp__sub_83D31C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31C98"))) PPC_WEAK_FUNC(sub_83D31C98);
PPC_FUNC_IMPL(__imp__sub_83D31C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31C9C"))) PPC_WEAK_FUNC(sub_83D31C9C);
PPC_FUNC_IMPL(__imp__sub_83D31C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CA0"))) PPC_WEAK_FUNC(sub_83D31CA0);
PPC_FUNC_IMPL(__imp__sub_83D31CA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CA4"))) PPC_WEAK_FUNC(sub_83D31CA4);
PPC_FUNC_IMPL(__imp__sub_83D31CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CA8"))) PPC_WEAK_FUNC(sub_83D31CA8);
PPC_FUNC_IMPL(__imp__sub_83D31CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CAC"))) PPC_WEAK_FUNC(sub_83D31CAC);
PPC_FUNC_IMPL(__imp__sub_83D31CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CB0"))) PPC_WEAK_FUNC(sub_83D31CB0);
PPC_FUNC_IMPL(__imp__sub_83D31CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CB4"))) PPC_WEAK_FUNC(sub_83D31CB4);
PPC_FUNC_IMPL(__imp__sub_83D31CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CB8"))) PPC_WEAK_FUNC(sub_83D31CB8);
PPC_FUNC_IMPL(__imp__sub_83D31CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CBC"))) PPC_WEAK_FUNC(sub_83D31CBC);
PPC_FUNC_IMPL(__imp__sub_83D31CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CC0"))) PPC_WEAK_FUNC(sub_83D31CC0);
PPC_FUNC_IMPL(__imp__sub_83D31CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CC4"))) PPC_WEAK_FUNC(sub_83D31CC4);
PPC_FUNC_IMPL(__imp__sub_83D31CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CC8"))) PPC_WEAK_FUNC(sub_83D31CC8);
PPC_FUNC_IMPL(__imp__sub_83D31CC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CCC"))) PPC_WEAK_FUNC(sub_83D31CCC);
PPC_FUNC_IMPL(__imp__sub_83D31CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CD0"))) PPC_WEAK_FUNC(sub_83D31CD0);
PPC_FUNC_IMPL(__imp__sub_83D31CD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CD4"))) PPC_WEAK_FUNC(sub_83D31CD4);
PPC_FUNC_IMPL(__imp__sub_83D31CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CD8"))) PPC_WEAK_FUNC(sub_83D31CD8);
PPC_FUNC_IMPL(__imp__sub_83D31CD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CDC"))) PPC_WEAK_FUNC(sub_83D31CDC);
PPC_FUNC_IMPL(__imp__sub_83D31CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CE0"))) PPC_WEAK_FUNC(sub_83D31CE0);
PPC_FUNC_IMPL(__imp__sub_83D31CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CE4"))) PPC_WEAK_FUNC(sub_83D31CE4);
PPC_FUNC_IMPL(__imp__sub_83D31CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CE8"))) PPC_WEAK_FUNC(sub_83D31CE8);
PPC_FUNC_IMPL(__imp__sub_83D31CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31CEC"))) PPC_WEAK_FUNC(sub_83D31CEC);
PPC_FUNC_IMPL(__imp__sub_83D31CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31CF0"))) PPC_WEAK_FUNC(sub_83D31CF0);
PPC_FUNC_IMPL(__imp__sub_83D31CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-3624
	ctx.r3.s64 = ctx.r11.s64 + -3624;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D31CFC"))) PPC_WEAK_FUNC(sub_83D31CFC);
PPC_FUNC_IMPL(__imp__sub_83D31CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31D00"))) PPC_WEAK_FUNC(sub_83D31D00);
PPC_FUNC_IMPL(__imp__sub_83D31D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31D04"))) PPC_WEAK_FUNC(sub_83D31D04);
PPC_FUNC_IMPL(__imp__sub_83D31D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31D08"))) PPC_WEAK_FUNC(sub_83D31D08);
PPC_FUNC_IMPL(__imp__sub_83D31D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31D0C"))) PPC_WEAK_FUNC(sub_83D31D0C);
PPC_FUNC_IMPL(__imp__sub_83D31D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31D10"))) PPC_WEAK_FUNC(sub_83D31D10);
PPC_FUNC_IMPL(__imp__sub_83D31D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31D14"))) PPC_WEAK_FUNC(sub_83D31D14);
PPC_FUNC_IMPL(__imp__sub_83D31D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31D18"))) PPC_WEAK_FUNC(sub_83D31D18);
PPC_FUNC_IMPL(__imp__sub_83D31D18) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,23528
	ctx.r31.s64 = ctx.r11.s64 + 23528;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d31d50
	if (cr6.lt) goto loc_83D31D50;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D31D50;
	sub_825952B8(ctx, base);
loc_83D31D50:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D31D7C"))) PPC_WEAK_FUNC(sub_83D31D7C);
PPC_FUNC_IMPL(__imp__sub_83D31D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31D80"))) PPC_WEAK_FUNC(sub_83D31D80);
PPC_FUNC_IMPL(__imp__sub_83D31D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31D84"))) PPC_WEAK_FUNC(sub_83D31D84);
PPC_FUNC_IMPL(__imp__sub_83D31D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31D88"))) PPC_WEAK_FUNC(sub_83D31D88);
PPC_FUNC_IMPL(__imp__sub_83D31D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31D8C"))) PPC_WEAK_FUNC(sub_83D31D8C);
PPC_FUNC_IMPL(__imp__sub_83D31D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31D90"))) PPC_WEAK_FUNC(sub_83D31D90);
PPC_FUNC_IMPL(__imp__sub_83D31D90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31D94"))) PPC_WEAK_FUNC(sub_83D31D94);
PPC_FUNC_IMPL(__imp__sub_83D31D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31D98"))) PPC_WEAK_FUNC(sub_83D31D98);
PPC_FUNC_IMPL(__imp__sub_83D31D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31D9C"))) PPC_WEAK_FUNC(sub_83D31D9C);
PPC_FUNC_IMPL(__imp__sub_83D31D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DA0"))) PPC_WEAK_FUNC(sub_83D31DA0);
PPC_FUNC_IMPL(__imp__sub_83D31DA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31DA4"))) PPC_WEAK_FUNC(sub_83D31DA4);
PPC_FUNC_IMPL(__imp__sub_83D31DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DA8"))) PPC_WEAK_FUNC(sub_83D31DA8);
PPC_FUNC_IMPL(__imp__sub_83D31DA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31DAC"))) PPC_WEAK_FUNC(sub_83D31DAC);
PPC_FUNC_IMPL(__imp__sub_83D31DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DB0"))) PPC_WEAK_FUNC(sub_83D31DB0);
PPC_FUNC_IMPL(__imp__sub_83D31DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31DB4"))) PPC_WEAK_FUNC(sub_83D31DB4);
PPC_FUNC_IMPL(__imp__sub_83D31DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DB8"))) PPC_WEAK_FUNC(sub_83D31DB8);
PPC_FUNC_IMPL(__imp__sub_83D31DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31DBC"))) PPC_WEAK_FUNC(sub_83D31DBC);
PPC_FUNC_IMPL(__imp__sub_83D31DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DC0"))) PPC_WEAK_FUNC(sub_83D31DC0);
PPC_FUNC_IMPL(__imp__sub_83D31DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31DC4"))) PPC_WEAK_FUNC(sub_83D31DC4);
PPC_FUNC_IMPL(__imp__sub_83D31DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DC8"))) PPC_WEAK_FUNC(sub_83D31DC8);
PPC_FUNC_IMPL(__imp__sub_83D31DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31DCC"))) PPC_WEAK_FUNC(sub_83D31DCC);
PPC_FUNC_IMPL(__imp__sub_83D31DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DD0"))) PPC_WEAK_FUNC(sub_83D31DD0);
PPC_FUNC_IMPL(__imp__sub_83D31DD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31DD4"))) PPC_WEAK_FUNC(sub_83D31DD4);
PPC_FUNC_IMPL(__imp__sub_83D31DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DD8"))) PPC_WEAK_FUNC(sub_83D31DD8);
PPC_FUNC_IMPL(__imp__sub_83D31DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31DDC"))) PPC_WEAK_FUNC(sub_83D31DDC);
PPC_FUNC_IMPL(__imp__sub_83D31DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DE0"))) PPC_WEAK_FUNC(sub_83D31DE0);
PPC_FUNC_IMPL(__imp__sub_83D31DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-3256
	ctx.r3.s64 = ctx.r11.s64 + -3256;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D31DEC"))) PPC_WEAK_FUNC(sub_83D31DEC);
PPC_FUNC_IMPL(__imp__sub_83D31DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31DF0"))) PPC_WEAK_FUNC(sub_83D31DF0);
PPC_FUNC_IMPL(__imp__sub_83D31DF0) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,23684
	ctx.r31.s64 = ctx.r11.s64 + 23684;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83d31e28
	if (cr6.lt) goto loc_83D31E28;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83D31E28;
	sub_825952B8(ctx, base);
loc_83D31E28:
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83D31E54"))) PPC_WEAK_FUNC(sub_83D31E54);
PPC_FUNC_IMPL(__imp__sub_83D31E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E58"))) PPC_WEAK_FUNC(sub_83D31E58);
PPC_FUNC_IMPL(__imp__sub_83D31E58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E5C"))) PPC_WEAK_FUNC(sub_83D31E5C);
PPC_FUNC_IMPL(__imp__sub_83D31E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E60"))) PPC_WEAK_FUNC(sub_83D31E60);
PPC_FUNC_IMPL(__imp__sub_83D31E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E64"))) PPC_WEAK_FUNC(sub_83D31E64);
PPC_FUNC_IMPL(__imp__sub_83D31E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E68"))) PPC_WEAK_FUNC(sub_83D31E68);
PPC_FUNC_IMPL(__imp__sub_83D31E68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E6C"))) PPC_WEAK_FUNC(sub_83D31E6C);
PPC_FUNC_IMPL(__imp__sub_83D31E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E70"))) PPC_WEAK_FUNC(sub_83D31E70);
PPC_FUNC_IMPL(__imp__sub_83D31E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E74"))) PPC_WEAK_FUNC(sub_83D31E74);
PPC_FUNC_IMPL(__imp__sub_83D31E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E78"))) PPC_WEAK_FUNC(sub_83D31E78);
PPC_FUNC_IMPL(__imp__sub_83D31E78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E7C"))) PPC_WEAK_FUNC(sub_83D31E7C);
PPC_FUNC_IMPL(__imp__sub_83D31E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E80"))) PPC_WEAK_FUNC(sub_83D31E80);
PPC_FUNC_IMPL(__imp__sub_83D31E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E84"))) PPC_WEAK_FUNC(sub_83D31E84);
PPC_FUNC_IMPL(__imp__sub_83D31E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E88"))) PPC_WEAK_FUNC(sub_83D31E88);
PPC_FUNC_IMPL(__imp__sub_83D31E88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E8C"))) PPC_WEAK_FUNC(sub_83D31E8C);
PPC_FUNC_IMPL(__imp__sub_83D31E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E90"))) PPC_WEAK_FUNC(sub_83D31E90);
PPC_FUNC_IMPL(__imp__sub_83D31E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E94"))) PPC_WEAK_FUNC(sub_83D31E94);
PPC_FUNC_IMPL(__imp__sub_83D31E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31E98"))) PPC_WEAK_FUNC(sub_83D31E98);
PPC_FUNC_IMPL(__imp__sub_83D31E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31E9C"))) PPC_WEAK_FUNC(sub_83D31E9C);
PPC_FUNC_IMPL(__imp__sub_83D31E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EA0"))) PPC_WEAK_FUNC(sub_83D31EA0);
PPC_FUNC_IMPL(__imp__sub_83D31EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31EA4"))) PPC_WEAK_FUNC(sub_83D31EA4);
PPC_FUNC_IMPL(__imp__sub_83D31EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EA8"))) PPC_WEAK_FUNC(sub_83D31EA8);
PPC_FUNC_IMPL(__imp__sub_83D31EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31EAC"))) PPC_WEAK_FUNC(sub_83D31EAC);
PPC_FUNC_IMPL(__imp__sub_83D31EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EB0"))) PPC_WEAK_FUNC(sub_83D31EB0);
PPC_FUNC_IMPL(__imp__sub_83D31EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31EB4"))) PPC_WEAK_FUNC(sub_83D31EB4);
PPC_FUNC_IMPL(__imp__sub_83D31EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EB8"))) PPC_WEAK_FUNC(sub_83D31EB8);
PPC_FUNC_IMPL(__imp__sub_83D31EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-3244
	ctx.r3.s64 = ctx.r11.s64 + -3244;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D31EC4"))) PPC_WEAK_FUNC(sub_83D31EC4);
PPC_FUNC_IMPL(__imp__sub_83D31EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EC8"))) PPC_WEAK_FUNC(sub_83D31EC8);
PPC_FUNC_IMPL(__imp__sub_83D31EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31ECC"))) PPC_WEAK_FUNC(sub_83D31ECC);
PPC_FUNC_IMPL(__imp__sub_83D31ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31ED0"))) PPC_WEAK_FUNC(sub_83D31ED0);
PPC_FUNC_IMPL(__imp__sub_83D31ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31ED4"))) PPC_WEAK_FUNC(sub_83D31ED4);
PPC_FUNC_IMPL(__imp__sub_83D31ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31ED8"))) PPC_WEAK_FUNC(sub_83D31ED8);
PPC_FUNC_IMPL(__imp__sub_83D31ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31EDC"))) PPC_WEAK_FUNC(sub_83D31EDC);
PPC_FUNC_IMPL(__imp__sub_83D31EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EE0"))) PPC_WEAK_FUNC(sub_83D31EE0);
PPC_FUNC_IMPL(__imp__sub_83D31EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31EE4"))) PPC_WEAK_FUNC(sub_83D31EE4);
PPC_FUNC_IMPL(__imp__sub_83D31EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EE8"))) PPC_WEAK_FUNC(sub_83D31EE8);
PPC_FUNC_IMPL(__imp__sub_83D31EE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31EEC"))) PPC_WEAK_FUNC(sub_83D31EEC);
PPC_FUNC_IMPL(__imp__sub_83D31EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EF0"))) PPC_WEAK_FUNC(sub_83D31EF0);
PPC_FUNC_IMPL(__imp__sub_83D31EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31EF4"))) PPC_WEAK_FUNC(sub_83D31EF4);
PPC_FUNC_IMPL(__imp__sub_83D31EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31EF8"))) PPC_WEAK_FUNC(sub_83D31EF8);
PPC_FUNC_IMPL(__imp__sub_83D31EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31EFC"))) PPC_WEAK_FUNC(sub_83D31EFC);
PPC_FUNC_IMPL(__imp__sub_83D31EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F00"))) PPC_WEAK_FUNC(sub_83D31F00);
PPC_FUNC_IMPL(__imp__sub_83D31F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F04"))) PPC_WEAK_FUNC(sub_83D31F04);
PPC_FUNC_IMPL(__imp__sub_83D31F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F08"))) PPC_WEAK_FUNC(sub_83D31F08);
PPC_FUNC_IMPL(__imp__sub_83D31F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F0C"))) PPC_WEAK_FUNC(sub_83D31F0C);
PPC_FUNC_IMPL(__imp__sub_83D31F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F10"))) PPC_WEAK_FUNC(sub_83D31F10);
PPC_FUNC_IMPL(__imp__sub_83D31F10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F14"))) PPC_WEAK_FUNC(sub_83D31F14);
PPC_FUNC_IMPL(__imp__sub_83D31F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F18"))) PPC_WEAK_FUNC(sub_83D31F18);
PPC_FUNC_IMPL(__imp__sub_83D31F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F1C"))) PPC_WEAK_FUNC(sub_83D31F1C);
PPC_FUNC_IMPL(__imp__sub_83D31F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F20"))) PPC_WEAK_FUNC(sub_83D31F20);
PPC_FUNC_IMPL(__imp__sub_83D31F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F24"))) PPC_WEAK_FUNC(sub_83D31F24);
PPC_FUNC_IMPL(__imp__sub_83D31F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F28"))) PPC_WEAK_FUNC(sub_83D31F28);
PPC_FUNC_IMPL(__imp__sub_83D31F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,-3232
	ctx.r3.s64 = ctx.r11.s64 + -3232;
	// b 0x83523150
	sub_83523150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83D31F34"))) PPC_WEAK_FUNC(sub_83D31F34);
PPC_FUNC_IMPL(__imp__sub_83D31F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F38"))) PPC_WEAK_FUNC(sub_83D31F38);
PPC_FUNC_IMPL(__imp__sub_83D31F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F3C"))) PPC_WEAK_FUNC(sub_83D31F3C);
PPC_FUNC_IMPL(__imp__sub_83D31F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F40"))) PPC_WEAK_FUNC(sub_83D31F40);
PPC_FUNC_IMPL(__imp__sub_83D31F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F44"))) PPC_WEAK_FUNC(sub_83D31F44);
PPC_FUNC_IMPL(__imp__sub_83D31F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F48"))) PPC_WEAK_FUNC(sub_83D31F48);
PPC_FUNC_IMPL(__imp__sub_83D31F48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F4C"))) PPC_WEAK_FUNC(sub_83D31F4C);
PPC_FUNC_IMPL(__imp__sub_83D31F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F50"))) PPC_WEAK_FUNC(sub_83D31F50);
PPC_FUNC_IMPL(__imp__sub_83D31F50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F54"))) PPC_WEAK_FUNC(sub_83D31F54);
PPC_FUNC_IMPL(__imp__sub_83D31F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F58"))) PPC_WEAK_FUNC(sub_83D31F58);
PPC_FUNC_IMPL(__imp__sub_83D31F58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F5C"))) PPC_WEAK_FUNC(sub_83D31F5C);
PPC_FUNC_IMPL(__imp__sub_83D31F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F60"))) PPC_WEAK_FUNC(sub_83D31F60);
PPC_FUNC_IMPL(__imp__sub_83D31F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F64"))) PPC_WEAK_FUNC(sub_83D31F64);
PPC_FUNC_IMPL(__imp__sub_83D31F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F68"))) PPC_WEAK_FUNC(sub_83D31F68);
PPC_FUNC_IMPL(__imp__sub_83D31F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F6C"))) PPC_WEAK_FUNC(sub_83D31F6C);
PPC_FUNC_IMPL(__imp__sub_83D31F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F70"))) PPC_WEAK_FUNC(sub_83D31F70);
PPC_FUNC_IMPL(__imp__sub_83D31F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F74"))) PPC_WEAK_FUNC(sub_83D31F74);
PPC_FUNC_IMPL(__imp__sub_83D31F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F78"))) PPC_WEAK_FUNC(sub_83D31F78);
PPC_FUNC_IMPL(__imp__sub_83D31F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F7C"))) PPC_WEAK_FUNC(sub_83D31F7C);
PPC_FUNC_IMPL(__imp__sub_83D31F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F80"))) PPC_WEAK_FUNC(sub_83D31F80);
PPC_FUNC_IMPL(__imp__sub_83D31F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F84"))) PPC_WEAK_FUNC(sub_83D31F84);
PPC_FUNC_IMPL(__imp__sub_83D31F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F88"))) PPC_WEAK_FUNC(sub_83D31F88);
PPC_FUNC_IMPL(__imp__sub_83D31F88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F8C"))) PPC_WEAK_FUNC(sub_83D31F8C);
PPC_FUNC_IMPL(__imp__sub_83D31F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F90"))) PPC_WEAK_FUNC(sub_83D31F90);
PPC_FUNC_IMPL(__imp__sub_83D31F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F94"))) PPC_WEAK_FUNC(sub_83D31F94);
PPC_FUNC_IMPL(__imp__sub_83D31F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31F98"))) PPC_WEAK_FUNC(sub_83D31F98);
PPC_FUNC_IMPL(__imp__sub_83D31F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31F9C"))) PPC_WEAK_FUNC(sub_83D31F9C);
PPC_FUNC_IMPL(__imp__sub_83D31F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31FA0"))) PPC_WEAK_FUNC(sub_83D31FA0);
PPC_FUNC_IMPL(__imp__sub_83D31FA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31FA4"))) PPC_WEAK_FUNC(sub_83D31FA4);
PPC_FUNC_IMPL(__imp__sub_83D31FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31FA8"))) PPC_WEAK_FUNC(sub_83D31FA8);
PPC_FUNC_IMPL(__imp__sub_83D31FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31FAC"))) PPC_WEAK_FUNC(sub_83D31FAC);
PPC_FUNC_IMPL(__imp__sub_83D31FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31FB0"))) PPC_WEAK_FUNC(sub_83D31FB0);
PPC_FUNC_IMPL(__imp__sub_83D31FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31FB4"))) PPC_WEAK_FUNC(sub_83D31FB4);
PPC_FUNC_IMPL(__imp__sub_83D31FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31FB8"))) PPC_WEAK_FUNC(sub_83D31FB8);
PPC_FUNC_IMPL(__imp__sub_83D31FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31FBC"))) PPC_WEAK_FUNC(sub_83D31FBC);
PPC_FUNC_IMPL(__imp__sub_83D31FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31FC0"))) PPC_WEAK_FUNC(sub_83D31FC0);
PPC_FUNC_IMPL(__imp__sub_83D31FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31FC4"))) PPC_WEAK_FUNC(sub_83D31FC4);
PPC_FUNC_IMPL(__imp__sub_83D31FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31FC8"))) PPC_WEAK_FUNC(sub_83D31FC8);
PPC_FUNC_IMPL(__imp__sub_83D31FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31FCC"))) PPC_WEAK_FUNC(sub_83D31FCC);
PPC_FUNC_IMPL(__imp__sub_83D31FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31FD0"))) PPC_WEAK_FUNC(sub_83D31FD0);
PPC_FUNC_IMPL(__imp__sub_83D31FD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83D31FD4"))) PPC_WEAK_FUNC(sub_83D31FD4);
PPC_FUNC_IMPL(__imp__sub_83D31FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83D31FD8"))) PPC_WEAK_FUNC(sub_83D31FD8);
PPC_FUNC_IMPL(__imp__sub_83D31FD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

